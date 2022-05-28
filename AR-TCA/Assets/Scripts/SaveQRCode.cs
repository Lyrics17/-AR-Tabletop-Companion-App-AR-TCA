using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class SaveQRCode : MonoBehaviour
{

    public void saveQRCodeOnDevice(Texture2D qrCodeTexture, string filename)
    {
        //Saves on PC
        //returns the qr texture and endcodes it to png 
        // byte[] bytes = qrCodeTexture.EncodeToPNG();

        // File.WriteAllBytes(Application.dataPath + "/QRCodes/" + filename + ".png", bytes);

        //Saves on mobile 
        //source: https://github.com/yasirkula/UnityNativeGallery
        NativeGallery.SaveImageToGallery(qrCodeTexture, "Warhammer40K QRCodes", filename);
    }

}
