using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

[ExecuteInEditMode()]
public class TerrainAttributesContent : MonoBehaviour
{
    public TextMeshProUGUI contentField;
    public LayoutElement layoutElement;
    public int characterWrapLimit;

    private void Update()
    {
        //Checks at runtime if the content is longer than the character wrap limit. If so, it will set the layout element to be bigger than the content.
        int contentLength = contentField.text.Length;

        layoutElement.enabled = (contentLength > characterWrapLimit) ? false : true;
    }
}
