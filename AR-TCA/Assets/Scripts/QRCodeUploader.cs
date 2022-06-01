using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class QRCodeUploader : MonoBehaviour
{
    public void uploadQRCodetoServer(string unitName,Texture2D qrCode)
    {
        StartCoroutine(uploadQRCode(unitName, qrCode)); //needs to be a coroutine, else yield function will not work
    }

    IEnumerator uploadQRCode(string unitName, Texture2D qrCode)
    {
        string url = "http://localhost/AR-TCA/Units/uploadQRCode.php";

        byte[] bytes = qrCode.EncodeToPNG();
        string qrCodeString = System.Convert.ToBase64String(bytes);

        WWWForm form = new WWWForm();
        form.AddField("unitName", unitName);
        form.AddField("qrCode", qrCodeString);

        using (UnityWebRequest www = UnityWebRequest.Post(url, form))
        {
            yield return www.SendWebRequest();

            if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.Log(www.error);
            }
            else
            {
                Debug.Log(www.downloadHandler.text);
            }
        }
    }
}
