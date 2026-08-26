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
        && this->casterId_ == nullptr && this->componentLayer_ == nullptr && this->componentName_ == nullptr && this->componentType_ == nullptr && this->effect_ == nullptr
        && this->htmlLayerContent_ == nullptr && this->imageLayerContent_ == nullptr && this->layerOrder_ == nullptr && this->locationId_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->textLayerContent_ == nullptr; };
    // captionLayerContent Field Functions 
    bool hasCaptionLayerContent() const { return this->captionLayerContent_ != nullptr;};
    void deleteCaptionLayerContent() { this->captionLayerContent_ = nullptr;};
    inline string getCaptionLayerContent() const { DARABONBA_PTR_GET_DEFAULT(captionLayerContent_, "") };
    inline AddCasterComponentRequest& setCaptionLayerContent(string captionLayerContent) { DARABONBA_PTR_SET_VALUE(captionLayerContent_, captionLayerContent) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline AddCasterComponentRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // componentLayer Field Functions 
    bool hasComponentLayer() const { return this->componentLayer_ != nullptr;};
    void deleteComponentLayer() { this->componentLayer_ = nullptr;};
    inline string getComponentLayer() const { DARABONBA_PTR_GET_DEFAULT(componentLayer_, "") };
    inline AddCasterComponentRequest& setComponentLayer(string componentLayer) { DARABONBA_PTR_SET_VALUE(componentLayer_, componentLayer) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline AddCasterComponentRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline AddCasterComponentRequest& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // effect Field Functions 
    bool hasEffect() const { return this->effect_ != nullptr;};
    void deleteEffect() { this->effect_ = nullptr;};
    inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
    inline AddCasterComponentRequest& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // htmlLayerContent Field Functions 
    bool hasHtmlLayerContent() const { return this->htmlLayerContent_ != nullptr;};
    void deleteHtmlLayerContent() { this->htmlLayerContent_ = nullptr;};
    inline string getHtmlLayerContent() const { DARABONBA_PTR_GET_DEFAULT(htmlLayerContent_, "") };
    inline AddCasterComponentRequest& setHtmlLayerContent(string htmlLayerContent) { DARABONBA_PTR_SET_VALUE(htmlLayerContent_, htmlLayerContent) };


    // imageLayerContent Field Functions 
    bool hasImageLayerContent() const { return this->imageLayerContent_ != nullptr;};
    void deleteImageLayerContent() { this->imageLayerContent_ = nullptr;};
    inline string getImageLayerContent() const { DARABONBA_PTR_GET_DEFAULT(imageLayerContent_, "") };
    inline AddCasterComponentRequest& setImageLayerContent(string imageLayerContent) { DARABONBA_PTR_SET_VALUE(imageLayerContent_, imageLayerContent) };


    // layerOrder Field Functions 
    bool hasLayerOrder() const { return this->layerOrder_ != nullptr;};
    void deleteLayerOrder() { this->layerOrder_ = nullptr;};
    inline string getLayerOrder() const { DARABONBA_PTR_GET_DEFAULT(layerOrder_, "") };
    inline AddCasterComponentRequest& setLayerOrder(string layerOrder) { DARABONBA_PTR_SET_VALUE(layerOrder_, layerOrder) };


    // locationId Field Functions 
    bool hasLocationId() const { return this->locationId_ != nullptr;};
    void deleteLocationId() { this->locationId_ = nullptr;};
    inline string getLocationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, "") };
    inline AddCasterComponentRequest& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCasterComponentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddCasterComponentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // textLayerContent Field Functions 
    bool hasTextLayerContent() const { return this->textLayerContent_ != nullptr;};
    void deleteTextLayerContent() { this->textLayerContent_ = nullptr;};
    inline string getTextLayerContent() const { DARABONBA_PTR_GET_DEFAULT(textLayerContent_, "") };
    inline AddCasterComponentRequest& setTextLayerContent(string textLayerContent) { DARABONBA_PTR_SET_VALUE(textLayerContent_, textLayerContent) };


  protected:
    // The properties of the layer element. The properties are described as follows:
    // >Notice: This parameter is required when ComponentType is set to caption.
    // 
    // - **SizeNormalized**: The normalized font size. This value is calculated as font size / output height. The value must be in the `[0,1]` range and accurate to two decimal places. If the font size calculated from the normalized value is greater than **1024**, the font size is set to **1024**.
    // 
    // - **BorderWidthNormalized**: The normalized width of the text border. This value is calculated based on the font size: BorderWidth / FontSize. The value must be in the `[0,1]` range and accurate to two decimal places. If the width calculated from the normalized value is greater than **16**, the width is set to **16**. The default value is **0**.
    // 
    // - **FontName**: The font name. For valid values, see **Production studio fonts**. The default font is KaiTi.
    // 
    // - **BorderColor**: The color of the text border. The value must be a hexadecimal color code that ranges from 0x000000 to 0xffffff. The default value is an empty string (""), which indicates that no border color is set.
    // 
    // - **LocationId**: The channel ID of the translation source.
    // 
    // - **SourceLan**: The original audio language of the video source. Valid values: en (English), cn (Chinese), es (Spanish), and ru (Russian). The default value is cn.
    // 
    // - **TargetLan**: The target audio language for the video source. If you do not set this parameter, only speech recognition is performed. If you set this parameter, the audio is translated. Valid values: en (English), cn (Chinese), es (Spanish), and ru (Russian).
    // 
    // - **ShowSourceLan**: Specifies whether to display the source language. Valid values: true and false. The default value is false.
    // 
    // - **Truncation**: Specifies whether captions can be truncated. Valid values: true and false. The default value is false.
    // 
    // - **SourceLanPerLineWordCount**: The maximum number of words per line for the source language captions. The default value is 20.
    // 
    // - **TargetLanPerLineWordCount**: The maximum number of words per line for the target language captions. The default value is 20.
    // 
    // - **SourceLanReservePages**: The number of lines to reserve for the source language captions. This parameter takes effect only when Truncation is set to true. The default value is 2.
    // 
    // - **TargetLanReservePages**: The number of lines to reserve for the target language captions. This parameter takes effect only when Truncation is set to true. The default value is 2.
    // 
    // The value must be a JSON-formatted string. Parameter names must be in upper-camel case.
    shared_ptr<string> captionLayerContent_ {};
    // The ID of the production studio.
    // 
    // - If you create the production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, find the ID in the CasterId parameter of the response.
    // 
    // - If you create the production studio in the LIVE console, go to the **LIVE Console** > **Production Studio** > **Cloud Production Studio** page to view the ID.
    // 
    // > The name of the production studio in the list on the Cloud Production Studio page is the production studio ID.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The size, layout, and other information about the component layer. The elements are described as follows:
    // 
    // - **HeightNormalized**: The normalized height.
    // 
    // - **WidthNormalized**: The normalized width.
    // 
    // - **PositionNormalized**: The normalized position of the layer element.
    // 
    // - **PositionRefer**: The reference coordinates for the element\\"s position.
    // 
    // The value is a JSON-formatted string. Parameter names must be in upper-camel case.
    // 
    // This parameter is required.
    shared_ptr<string> componentLayer_ {};
    // The name of the component. The default value is the component ID.
    shared_ptr<string> componentName_ {};
    // The type of component. Valid values:
    // 
    // - **text**: A text component. If you set this parameter to text, you must also set the TextLayerContent parameter.
    // 
    // - **image**: An image component. If you set this parameter to image, you must also set the ImageLayerContent parameter.
    // 
    // - **caption**: A caption component. If you set this parameter to caption, you must also set the CaptionLayerContent parameter.
    // 
    // This parameter is required.
    shared_ptr<string> componentType_ {};
    // The display effect of the component. Valid values:
    // 
    // - **none** (default): No effect.
    // 
    // - **animateH**: Scrolls horizontally.
    // 
    // - **animateV**: Scrolls vertically.
    shared_ptr<string> effect_ {};
    // The configuration of the H5 component.
    shared_ptr<string> htmlLayerContent_ {};
    // The properties of the layer element. The properties are described as follows:
    // 
    // >Notice: 
    // 
    // This parameter is required when ComponentType is set to image.
    // 
    // 
    // 
    // MaterialId: The ID of the media asset. The name that you specify when you upload a media asset is used as the ID of the media asset.
    // 
    // The value must be a JSON-formatted string. Parameter names must be in upper-camel case.
    shared_ptr<string> imageLayerContent_ {};
    // The layer order of the component.
    // 
    // - cover: The component is in the foreground.
    // 
    // - background: The component is in the background.
    shared_ptr<string> layerOrder_ {};
    // Specifies the position of the component. Each position can hold only one component. The format must be RC01 to RC99.
    // 
    // > If the component type is caption, this parameter specifies the location of the referenced video source.
    // 
    // This parameter is required.
    shared_ptr<string> locationId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The properties of the layer element. The properties are described as follows:
    // >Notice: This parameter is required only when ComponentType is set to text.
    // 
    // - **SizeNormalized**: The normalized font size. This value is calculated as font size / output height. The value must be in the `[0,1]` range. If the font size calculated from the normalized value is greater than 1024, the font size is set to 1024.
    // 
    // - **BorderWidthNormalized**: The normalized width of the text border. This value is calculated based on the font size: BorderWidth / FontSize. The value must be in the `[0,1]` range. If the width calculated from the normalized value is greater than 16, the width is set to 16. The default value is 0.
    // 
    // - **FontName**: The font name. For valid values, see **Production studio fonts**. The default font is KaiTi.
    // 
    // - **BorderColor**: The color of the text border. The value must be a hexadecimal color code that ranges from 0x000000 to 0xffffff. The default value is an empty string (""), which indicates that no border color is set.
    // 
    // - **Text**: The text content. The default value is an empty string ("").
    // 
    // - **Color**: The text color. The default value is 0xff0000, which represents red.
    // 
    // The value must be a JSON-formatted string. Parameter names must be in upper-camel case.
    shared_ptr<string> textLayerContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
