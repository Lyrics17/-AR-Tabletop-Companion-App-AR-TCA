using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using ZXing;
using ZXing.QrCode;

public class QRCodeGenerator : MonoBehaviour
{
    public RawImage qrCodeField;

    //QR which wil be displayed
    private Texture2D storeEncodedTexture;
    // Start is called before the first frame update
    void Start()
    {
        storeEncodedTexture = new Texture2D(256, 256);
    }

    //function which creates QRCode
    private Color32[] createNewQRCode(string textForEncoding, int width, int height)
    {
        BarcodeWriter writer = new BarcodeWriter
        {
            Format = BarcodeFormat.QR_CODE,
            Options = new QrCodeEncodingOptions
            {
                Height = height,
                Width = width
            }
        };
        return writer.Write(textForEncoding);
    }

    //transforms created pixel to texture (QRCode = black and white pixels)
    public void encodeTextToQRCode(string unitID)
    {
        Color32[] convertPixelToTexture = createNewQRCode(unitID, storeEncodedTexture.width, storeEncodedTexture.height);
        storeEncodedTexture.SetPixels32(convertPixelToTexture);
        storeEncodedTexture.Apply();

        qrCodeField.texture = storeEncodedTexture;
    }

    public Texture2D getTexture()
    {
        //to save the qr on the device 
        return storeEncodedTexture;
    }
}
