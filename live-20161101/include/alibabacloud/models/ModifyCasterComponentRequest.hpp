// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCASTERCOMPONENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCASTERCOMPONENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyCasterComponentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCasterComponentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaptionLayerContent, captionLayerContent_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(ComponentLayer, componentLayer_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(Effect, effect_);
      DARABONBA_PTR_TO_JSON(ImageLayerContent, imageLayerContent_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TextLayerContent, textLayerContent_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCasterComponentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaptionLayerContent, captionLayerContent_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(ComponentLayer, componentLayer_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(Effect, effect_);
      DARABONBA_PTR_FROM_JSON(ImageLayerContent, imageLayerContent_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TextLayerContent, textLayerContent_);
    };
    ModifyCasterComponentRequest() = default ;
    ModifyCasterComponentRequest(const ModifyCasterComponentRequest &) = default ;
    ModifyCasterComponentRequest(ModifyCasterComponentRequest &&) = default ;
    ModifyCasterComponentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCasterComponentRequest() = default ;
    ModifyCasterComponentRequest& operator=(const ModifyCasterComponentRequest &) = default ;
    ModifyCasterComponentRequest& operator=(ModifyCasterComponentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->captionLayerContent_ == nullptr
        && this->casterId_ == nullptr && this->componentId_ == nullptr && this->componentLayer_ == nullptr && this->componentName_ == nullptr && this->componentType_ == nullptr
        && this->effect_ == nullptr && this->imageLayerContent_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->textLayerContent_ == nullptr; };
    // captionLayerContent Field Functions 
    bool hasCaptionLayerContent() const { return this->captionLayerContent_ != nullptr;};
    void deleteCaptionLayerContent() { this->captionLayerContent_ = nullptr;};
    inline string getCaptionLayerContent() const { DARABONBA_PTR_GET_DEFAULT(captionLayerContent_, "") };
    inline ModifyCasterComponentRequest& setCaptionLayerContent(string captionLayerContent) { DARABONBA_PTR_SET_VALUE(captionLayerContent_, captionLayerContent) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline ModifyCasterComponentRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline ModifyCasterComponentRequest& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // componentLayer Field Functions 
    bool hasComponentLayer() const { return this->componentLayer_ != nullptr;};
    void deleteComponentLayer() { this->componentLayer_ = nullptr;};
    inline string getComponentLayer() const { DARABONBA_PTR_GET_DEFAULT(componentLayer_, "") };
    inline ModifyCasterComponentRequest& setComponentLayer(string componentLayer) { DARABONBA_PTR_SET_VALUE(componentLayer_, componentLayer) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline ModifyCasterComponentRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline ModifyCasterComponentRequest& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // effect Field Functions 
    bool hasEffect() const { return this->effect_ != nullptr;};
    void deleteEffect() { this->effect_ = nullptr;};
    inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
    inline ModifyCasterComponentRequest& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // imageLayerContent Field Functions 
    bool hasImageLayerContent() const { return this->imageLayerContent_ != nullptr;};
    void deleteImageLayerContent() { this->imageLayerContent_ = nullptr;};
    inline string getImageLayerContent() const { DARABONBA_PTR_GET_DEFAULT(imageLayerContent_, "") };
    inline ModifyCasterComponentRequest& setImageLayerContent(string imageLayerContent) { DARABONBA_PTR_SET_VALUE(imageLayerContent_, imageLayerContent) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCasterComponentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCasterComponentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // textLayerContent Field Functions 
    bool hasTextLayerContent() const { return this->textLayerContent_ != nullptr;};
    void deleteTextLayerContent() { this->textLayerContent_ = nullptr;};
    inline string getTextLayerContent() const { DARABONBA_PTR_GET_DEFAULT(textLayerContent_, "") };
    inline ModifyCasterComponentRequest& setTextLayerContent(string textLayerContent) { DARABONBA_PTR_SET_VALUE(textLayerContent_, textLayerContent) };


  protected:
    // The properties of the caption layer. The value is a JSON string. The following properties are supported:
    // 
    // >Notice: 
    // 
    // This parameter is required if you set ComponentType to caption.
    // 
    // 
    // 
    // - **SizeNormalized**: The normalized font size. The font size is calculated using the formula: font_size/output_height. The value must be in the range of `[0,1]`. If the calculated font size is greater than 1024, the value 1024 is used.
    // 
    // - **BorderWidthNormalized**: The normalized width of the text border. The normalized width is calculated based on the font size using the formula: BorderWidth/FontSize. The value must be in the range of `[0,1]`. If the calculated value is greater than 16, the value 16 is used. Default value: 0.
    // 
    // - **FontName**: The font name. For more information about valid values, see **Production studio fonts**. Default value: KaiTi.
    // 
    // - **BorderColor**: The color of the text border. Valid values are from 0x000000 to 0xffffff. The default value is an empty string, which indicates that this parameter is not used.
    // 
    // - **LocationId**: The channel ID of the translation source.
    // 
    // - **SourceLan**: The source language of the audio in the video source. Valid values are en (English), cn (Chinese), es (Spanish), and ru (Russian). Default value: cn.
    // 
    // - **TargetLan**: The target language for translation. If you do not set this parameter, only speech recognition is performed. If you set this parameter, translation is also performed. Valid values are en (English), cn (Chinese), es (Spanish), and ru (Russian).
    // 
    // - **ShowSourceLan**: Specifies whether to display the source language. Valid values are true (display) and false (do not display). Default value: false.
    // 
    // - **Truncation**: Specifies whether to truncate the caption. Valid values are true (truncate) and false (do not truncate). Default value: false.
    // 
    // - **SourceLanPerLineWordCount**: The number of words per line for the source language. This parameter takes effect only if Truncation is set to true. Default value: 20.
    // 
    // - **TargetLanPerLineWordCount**: The number of words per line for the target language. This parameter takes effect only if Truncation is set to true. Default value: 20.
    shared_ptr<string> captionLayerContent_ {};
    // The ID of the production studio.
    // 
    // - The ID is returned after you call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation.
    // 
    // - If you create a production studio in the LIVE console, go to the **LIVE** > **Production Studio** > **Cloud Production Studio** page to find the ID.
    // 
    // > The name of the production studio in the list on the Cloud Production Studio page is the production studio ID.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The component ID. The ID is returned after you call the [AddCasterComponent](https://help.aliyun.com/document_detail/2848030.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> componentId_ {};
    // The size and layout of the layer. The value is a JSON string. The following properties are supported:
    // 
    // - **HeightNormalized**: The normalized height.
    // 
    // - **WidthNormalized**: The normalized width.
    // 
    // - **PositionNormalized**: The normalized position of the layer.
    // 
    // - **PositionRefer**: The reference point for the position of the layer.
    shared_ptr<string> componentLayer_ {};
    // The name of the component. The default value is the component ID.
    shared_ptr<string> componentName_ {};
    // The type of the component. Valid values:
    // 
    // - **text**: A text component. The TextLayerContent parameter is required only if you set ComponentType to text.
    // 
    // - **image**: An image component. The ImageLayerContent parameter is required only if you set ComponentType to image.
    // 
    // - **caption**: A translation caption component. The CaptionLayerContent parameter is required only if you set ComponentType to caption.
    shared_ptr<string> componentType_ {};
    // The display effect of the component. Valid values:
    // 
    // - **none** (default): no effect.
    // 
    // - **animateH**: horizontal scroll.
    // 
    // - **animateV**: vertical scroll.
    shared_ptr<string> effect_ {};
    // The properties of the image layer. The value is a JSON string.
    // 
    // >Notice: 
    // 
    // This parameter is required if you set ComponentType to image.
    // 
    // 
    // 
    // MaterialId is the ID of the material in the media asset library.
    shared_ptr<string> imageLayerContent_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The properties of the text layer. The value is a JSON string. The following properties are supported:
    // 
    // >Notice: 
    // 
    // This parameter is required if you set ComponentType to text.
    // 
    // 
    // 
    // - **SizeNormalized**: The normalized font size. The font size is calculated using the formula: font_size/output_height. The value must be in the range of `[0,1]`. If the calculated font size is greater than 1024, the value 1024 is used.
    // 
    // - **BorderWidthNormalized**: The normalized width of the text border. The normalized width is calculated based on the font size using the formula: BorderWidth/FontSize. The value must be in the range of `[0,1]`. If the calculated value is greater than 16, the value 16 is used. Default value: 0.
    // 
    // - **FontName**: The font name. For more information about valid values, see **Production studio fonts**. Default value: KaiTi.
    // 
    // - **BorderColor**: The color of the text border. Valid values are from 0x000000 to 0xffffff. The default value is an empty string, which indicates that this parameter is not used.
    // 
    // - **Text**: The text content. The default value is an empty string.
    // 
    // - **Color**: The color of the text. Default value: 0xff0000, which is red.
    shared_ptr<string> textLayerContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
