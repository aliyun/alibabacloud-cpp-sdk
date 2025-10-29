// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERCOMPONENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERCOMPONENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterComponentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterComponentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaptionLayerContent, captionLayerContent_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(ComponentLayer, componentLayer_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(Effect, effect_);
      DARABONBA_PTR_TO_JSON(HtmlLayerContent, htmlLayerContent_);
      DARABONBA_PTR_TO_JSON(ImageLayerContent, imageLayerContent_);
      DARABONBA_PTR_TO_JSON(LayerOrder, layerOrder_);
      DARABONBA_PTR_TO_JSON(LocationId, locationId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TextLayerContent, textLayerContent_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterComponentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaptionLayerContent, captionLayerContent_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(ComponentLayer, componentLayer_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(Effect, effect_);
      DARABONBA_PTR_FROM_JSON(HtmlLayerContent, htmlLayerContent_);
      DARABONBA_PTR_FROM_JSON(ImageLayerContent, imageLayerContent_);
      DARABONBA_PTR_FROM_JSON(LayerOrder, layerOrder_);
      DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TextLayerContent, textLayerContent_);
    };
    AddCasterComponentRequest() = default ;
    AddCasterComponentRequest(const AddCasterComponentRequest &) = default ;
    AddCasterComponentRequest(AddCasterComponentRequest &&) = default ;
    AddCasterComponentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterComponentRequest() = default ;
    AddCasterComponentRequest& operator=(const AddCasterComponentRequest &) = default ;
    AddCasterComponentRequest& operator=(AddCasterComponentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->captionLayerContent_ == nullptr
        && return this->casterId_ == nullptr && return this->componentLayer_ == nullptr && return this->componentName_ == nullptr && return this->componentType_ == nullptr && return this->effect_ == nullptr
        && return this->htmlLayerContent_ == nullptr && return this->imageLayerContent_ == nullptr && return this->layerOrder_ == nullptr && return this->locationId_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->textLayerContent_ == nullptr; };
    // captionLayerContent Field Functions 
    bool hasCaptionLayerContent() const { return this->captionLayerContent_ != nullptr;};
    void deleteCaptionLayerContent() { this->captionLayerContent_ = nullptr;};
    inline string captionLayerContent() const { DARABONBA_PTR_GET_DEFAULT(captionLayerContent_, "") };
    inline AddCasterComponentRequest& setCaptionLayerContent(string captionLayerContent) { DARABONBA_PTR_SET_VALUE(captionLayerContent_, captionLayerContent) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline AddCasterComponentRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // componentLayer Field Functions 
    bool hasComponentLayer() const { return this->componentLayer_ != nullptr;};
    void deleteComponentLayer() { this->componentLayer_ = nullptr;};
    inline string componentLayer() const { DARABONBA_PTR_GET_DEFAULT(componentLayer_, "") };
    inline AddCasterComponentRequest& setComponentLayer(string componentLayer) { DARABONBA_PTR_SET_VALUE(componentLayer_, componentLayer) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline AddCasterComponentRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline AddCasterComponentRequest& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // effect Field Functions 
    bool hasEffect() const { return this->effect_ != nullptr;};
    void deleteEffect() { this->effect_ = nullptr;};
    inline string effect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
    inline AddCasterComponentRequest& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // htmlLayerContent Field Functions 
    bool hasHtmlLayerContent() const { return this->htmlLayerContent_ != nullptr;};
    void deleteHtmlLayerContent() { this->htmlLayerContent_ = nullptr;};
    inline string htmlLayerContent() const { DARABONBA_PTR_GET_DEFAULT(htmlLayerContent_, "") };
    inline AddCasterComponentRequest& setHtmlLayerContent(string htmlLayerContent) { DARABONBA_PTR_SET_VALUE(htmlLayerContent_, htmlLayerContent) };


    // imageLayerContent Field Functions 
    bool hasImageLayerContent() const { return this->imageLayerContent_ != nullptr;};
    void deleteImageLayerContent() { this->imageLayerContent_ = nullptr;};
    inline string imageLayerContent() const { DARABONBA_PTR_GET_DEFAULT(imageLayerContent_, "") };
    inline AddCasterComponentRequest& setImageLayerContent(string imageLayerContent) { DARABONBA_PTR_SET_VALUE(imageLayerContent_, imageLayerContent) };


    // layerOrder Field Functions 
    bool hasLayerOrder() const { return this->layerOrder_ != nullptr;};
    void deleteLayerOrder() { this->layerOrder_ = nullptr;};
    inline string layerOrder() const { DARABONBA_PTR_GET_DEFAULT(layerOrder_, "") };
    inline AddCasterComponentRequest& setLayerOrder(string layerOrder) { DARABONBA_PTR_SET_VALUE(layerOrder_, layerOrder) };


    // locationId Field Functions 
    bool hasLocationId() const { return this->locationId_ != nullptr;};
    void deleteLocationId() { this->locationId_ = nullptr;};
    inline string locationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, "") };
    inline AddCasterComponentRequest& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCasterComponentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddCasterComponentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // textLayerContent Field Functions 
    bool hasTextLayerContent() const { return this->textLayerContent_ != nullptr;};
    void deleteTextLayerContent() { this->textLayerContent_ = nullptr;};
    inline string textLayerContent() const { DARABONBA_PTR_GET_DEFAULT(textLayerContent_, "") };
    inline AddCasterComponentRequest& setTextLayerContent(string textLayerContent) { DARABONBA_PTR_SET_VALUE(textLayerContent_, textLayerContent) };


  protected:
    // The information about the caption layer. This parameter contains the following fields:
    // 
    // >  This parameter is required when the ComponentType parameter is set to caption.
    // 
    // *   **SizeNormalized**: the normalized font size. The font size is set to font_size/output_height. The value range is `[0,1]` and accurate to two decimal places. If the font size calculated by the system based on the normalization method is greater than **1024**, **1024** is used.
    // *   **BorderWidthNormalized**: the normalized value of the text border width, which is calculated based on the size of the text, namely "BorderWidth/FontSize". The value range is `[0,1]` and accurate to two decimal places. If the value calculated according to the normalization method exceeds **16**, **16** is used. The default value is **0**.
    // *   **FontName**: the font name. For more information about the value, see **Font description**. The default font name is KaiTi.
    // *   **BorderColor**: the color of the text border. Valid values: 0x000000 to 0xffffff. By default, this parameter is not set. In this case, the color of the text border is transparent.
    // *   **LocationId**: the channel ID of the source subtitle.
    // *   **SourceLan**: the source language of the audio in the source video. Valid values: en, cn, es, and ru, which indicate English, Chinese, Spanish, and Russian respectively. Default value: cn.
    // *   **TargetLan**: the target audio language in the source video. If you do not specify this field, speech recognition is used. If you specify this field, translation is used. Valid values: en, cn, es, and ru, which indicate English, Chinese, Spanish, and Russian respectively. Default value: cn.
    // *   **ShowSourceLan**: specifies whether to display the source language. Valid values: true: displays the source language. false: hides the source language. Default value: false.
    // *   **Truncation**: specifies whether to allow caption truncation. Valid values: true: specifies that the caption can be truncated. false: specifies that the caption cannot be truncated. Default value: false.
    // *   **SourceLanPerLineWordCount**: the number of words displayed in each line when the subtitle is in the source language. Default value: 20.
    // *   **TargetLanPerLineWordCount**: the number of words displayed in each line when the subtitle is in the destination language. Default value: 20.
    // *   **SourceLanReservePages**: the number of lines reserved when the subtitle is in the source language. This field takes effect only when the Truncation field is set to true. Default value: 2.
    // *   **TargetLanReservePages**: the number of lines reserved when the subtitle is in the destination language. This field takes effect only when the Truncation field is set to true. Default value: 2.
    // 
    // The value is a JSON string. Use upper camel case for field names.
    std::shared_ptr<string> captionLayerContent_ = nullptr;
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    std::shared_ptr<string> casterId_ = nullptr;
    // The information about the component layer, such as the size and layout. This parameter contains the following fields:
    // 
    // *   **HeightNormalized**: the normalized value of heights for the elements in the component layer
    // *   **WidthNormalized**: the normalized value of widths for the elements in the component layer
    // *   **PositionNormalized**: the normalized value of the coordinates of the component layer
    // *   **PositionRefer**: the reference coordinates of the component layer.
    // 
    // The value is a JSON string. Use upper camel case for field names.
    // 
    // This parameter is required.
    std::shared_ptr<string> componentLayer_ = nullptr;
    // The component name. By default, the component name is the component ID.
    std::shared_ptr<string> componentName_ = nullptr;
    // The component type. Valid values:
    // 
    // *   **text**: a text component. If you set ComponentType to text, you must also specify TextLayerContent.
    // *   **image**: an image component. If you set ComponentType to image, you must also specify ImageLayerContent.
    // *   **caption**: a caption component. If you set ComponentType to caption, you must also specify CaptionLayerContent.
    // 
    // This parameter is required.
    std::shared_ptr<string> componentType_ = nullptr;
    // The effect of the component. Valid values:
    // 
    // *   **none (default)**
    // *   **animateH**: horizontal scrolling
    // *   **animateV**: vertical scrolling
    std::shared_ptr<string> effect_ = nullptr;
    // The information about the HTML5 layer.
    std::shared_ptr<string> htmlLayerContent_ = nullptr;
    // The information about the image layer. This parameter contains the following fields:
    // 
    // >  This parameter is required when the ComponentType parameter is set to image.
    // 
    // MaterialId: the ID of the asset from the media asset library. The name that you set when you upload an asset is the ID of the asset.
    // 
    // The value is a JSON string. Use upper camel case for field names.
    std::shared_ptr<string> imageLayerContent_ = nullptr;
    // The layer stacking order of the component. Valid values:
    // 
    // *   cover
    // *   background
    std::shared_ptr<string> layerOrder_ = nullptr;
    // The location ID of the component. Each location ID can be assigned to only one component and must be in the RC[Number] format. The values specified by this parameter must be in ascending order, such as RC01 to RC99.
    // 
    // >  If the ComponentType parameter is set to caption, the LocationId parameter specifies the location ID of the video source referenced by the component.
    // 
    // This parameter is required.
    std::shared_ptr<string> locationId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The information about the text layer. This parameter contains the following fields:
    // 
    // >  This parameter is available and required only when the ComponentType parameter is set to text.
    // 
    // *   **SizeNormalized**: the normalized font size. The font size is set to font_size/output_height. The value range is `[0,1]`. If the font size calculated by the system based on the normalization method is greater than 1024, 1024 is used.
    // *   **BorderWidthNormalized**: the normalized value of the text border width. The normalized value is calculated based on the size of the text, that is, "BorderWidth/FontSize". The value range is `[0,1]`. If the value calculated based on the normalization method exceeds 16, 16 is used. The default value is 0.
    // *   **FontName**: the font name. For more information about the value, see **Font description**. The default value is KaiTi.
    // *   **BorderColor**: the color of the text border. Valid values: 0x000000 to 0xffffff. By default, this parameter is not set. In this case, the color of the text border is transparent.
    // *   **Text**: the content of the text. By default, this parameter is not set. In this case, the text contains no content.
    // *   **Color**: the color of the text. The default value is 0xff0000, which indicates that the text is in red.
    // 
    // The value is a JSON string. Use upper camel case for field names.
    std::shared_ptr<string> textLayerContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
