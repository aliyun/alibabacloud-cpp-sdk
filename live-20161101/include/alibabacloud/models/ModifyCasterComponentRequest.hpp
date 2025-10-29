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
        && return this->casterId_ == nullptr && return this->componentId_ == nullptr && return this->componentLayer_ == nullptr && return this->componentName_ == nullptr && return this->componentType_ == nullptr
        && return this->effect_ == nullptr && return this->imageLayerContent_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->textLayerContent_ == nullptr; };
    // captionLayerContent Field Functions 
    bool hasCaptionLayerContent() const { return this->captionLayerContent_ != nullptr;};
    void deleteCaptionLayerContent() { this->captionLayerContent_ = nullptr;};
    inline string captionLayerContent() const { DARABONBA_PTR_GET_DEFAULT(captionLayerContent_, "") };
    inline ModifyCasterComponentRequest& setCaptionLayerContent(string captionLayerContent) { DARABONBA_PTR_SET_VALUE(captionLayerContent_, captionLayerContent) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline ModifyCasterComponentRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string componentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline ModifyCasterComponentRequest& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // componentLayer Field Functions 
    bool hasComponentLayer() const { return this->componentLayer_ != nullptr;};
    void deleteComponentLayer() { this->componentLayer_ = nullptr;};
    inline string componentLayer() const { DARABONBA_PTR_GET_DEFAULT(componentLayer_, "") };
    inline ModifyCasterComponentRequest& setComponentLayer(string componentLayer) { DARABONBA_PTR_SET_VALUE(componentLayer_, componentLayer) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline ModifyCasterComponentRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline ModifyCasterComponentRequest& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // effect Field Functions 
    bool hasEffect() const { return this->effect_ != nullptr;};
    void deleteEffect() { this->effect_ = nullptr;};
    inline string effect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
    inline ModifyCasterComponentRequest& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // imageLayerContent Field Functions 
    bool hasImageLayerContent() const { return this->imageLayerContent_ != nullptr;};
    void deleteImageLayerContent() { this->imageLayerContent_ = nullptr;};
    inline string imageLayerContent() const { DARABONBA_PTR_GET_DEFAULT(imageLayerContent_, "") };
    inline ModifyCasterComponentRequest& setImageLayerContent(string imageLayerContent) { DARABONBA_PTR_SET_VALUE(imageLayerContent_, imageLayerContent) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCasterComponentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCasterComponentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // textLayerContent Field Functions 
    bool hasTextLayerContent() const { return this->textLayerContent_ != nullptr;};
    void deleteTextLayerContent() { this->textLayerContent_ = nullptr;};
    inline string textLayerContent() const { DARABONBA_PTR_GET_DEFAULT(textLayerContent_, "") };
    inline ModifyCasterComponentRequest& setTextLayerContent(string textLayerContent) { DARABONBA_PTR_SET_VALUE(textLayerContent_, textLayerContent) };


  protected:
    // The information about the subtitle component. The value must be a JSON string. This parameter contains the following fields:
    // 
    // >  This parameter is required if you set ComponentType to caption.
    // 
    // *   **SizeNormalized**: the normalized value of the font size. The value of this field equals the font size divided by the output height. Valid values: `0 to 1`. The maximum font size is 1,024, even if the font size calculated based on this field is greater than 1,024.
    // *   **BorderWidthNormalized**: the normalized value of the border width. The value of this field equals the border width divided by the font size. Valid values: `0 to 1`. Default value: 0. The maximum border width is 16, even if the border width calculated based on this field is greater than 16.
    // *   **FontName**: the font name. Default value: KaiTi. For more information about the valid values, see **Fonts used in a production studio**.
    // *   **BorderColor**: the color of the text border. Valid values: 0x000000 to 0xffffff. By default, this parameter is left empty. In this case, the color of the text border is transparent.
    // *   **LocationId**: the channel ID of the source subtitles.
    // *   **SourceLan**: the source language of the subtitles in the video. Valid values: en (English), cn (Chinese), es (Spanish), and ru (Russian). Default value: cn.
    // *   **TargetLan**: the target language of the subtitles in the video. If you do not specify this field, speech recognition is used. If you specify this field, translation is used. Valid values: en (English), cn (Chinese), es (Spanish), and ru (Russian).
    // *   **ShowSourceLan**: specifies whether to display the source language. A value of true specifies that the source language is displayed. A value of false specifies that the source language is not displayed. Default value: false.
    // *   **Truncation**: specifies whether to allow subtitle truncation. A value of true specifies that the subtitles can be truncated. A value of false specifies that the subtitles cannot be truncated. Default value: false.
    // *   **SourceLanPerLineWordCount**: the number of words displayed in each line of the source language. This field takes effect only if you set Truncation to true. Default value: 20.
    // *   **TargetLanPerLineWordCount**: the number of words displayed in each line of the target language. This field takes effect only if you set Truncation to true. Default value: 20.
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
    // The ID of the component. If the component was added by calling the [AddCasterComponent](https://help.aliyun.com/document_detail/2848030.html) operation, check the value of the response parameter ComponentId to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> componentId_ = nullptr;
    // The information about the component layer, such as the size and layout, The value must be a JSON string. This parameter contains the following fields:
    // 
    // *   **HeightNormalized**: the normalized value of the height of the component layer.
    // *   **WidthNormalized**: the normalized value of the width of the component layer.
    // *   **PositionNormalized**: the normalized value of the position of the component layer.
    // *   **PositionRefer**: the reference coordinates of the component layer.
    std::shared_ptr<string> componentLayer_ = nullptr;
    // The name of the component. By default, the name is the ID of the component.
    std::shared_ptr<string> componentName_ = nullptr;
    // The type of the component. Valid values:
    // 
    // *   **text**: text component. The TextLayerContent parameter is required if you set ComponentType to text.
    // *   **image**: image component. The ImageLayerContent parameter is required if you set ComponentType to image.
    // *   **caption**: subtitle component. The CaptionLayerContent parameter is required if you set ComponentType to caption.
    std::shared_ptr<string> componentType_ = nullptr;
    // The display effect for the component. Valid values:
    // 
    // *   **none** (default)
    // *   **animateH**: horizontal scrolling
    // *   **animateV**: vertical scrolling
    std::shared_ptr<string> effect_ = nullptr;
    // The information about the image component. The value must be a JSON string.
    // 
    // >  This parameter is required if you set ComponentType to image.
    // 
    // The MaterialId field specifies the ID of the material from the media asset library.
    std::shared_ptr<string> imageLayerContent_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The information about the text component. The value must be a JSON string. This parameter contains the following fields:
    // 
    // >  This parameter is required if you set ComponentType to text.
    // 
    // *   **SizeNormalized**: the normalized value of the font size. The value of this field equals the font size divided by the output height. Valid values: `0 to 1`. The maximum font size is 1,024, even if the font size calculated based on this field is greater than 1,024.
    // *   **BorderWidthNormalized**: the normalized value of the border width. The value of this field equals the border width divided by the font size. Valid values: `0 to 1`. Default value: 0. The maximum border width is 16, even if the border width calculated based on this field is greater than 16.
    // *   **FontName**: the font name. Default value: KaiTi. For more information about the valid values, see **Fonts used in a production studio**.
    // *   **BorderColor**: the color of the text border. Valid values: 0x000000 to 0xffffff. By default, this parameter is left empty. In this case, the color of the text border is transparent.
    // *   **Text**: the content of the text. By default, this parameter is left empty. In this case, the text contains no content.
    // *   **Color**: the color of the text. The default value is 0xff0000, which indicates that the text is in red.
    std::shared_ptr<string> textLayerContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
