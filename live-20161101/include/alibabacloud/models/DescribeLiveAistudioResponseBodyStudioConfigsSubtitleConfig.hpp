// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAISTUDIORESPONSEBODYSTUDIOCONFIGSSUBTITLECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAISTUDIORESPONSEBODYSTUDIOCONFIGSSUBTITLECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundResourceId, backgroundResourceId_);
      DARABONBA_PTR_TO_JSON(BackgroundResourceUrl, backgroundResourceUrl_);
      DARABONBA_PTR_TO_JSON(BackgroundType, backgroundType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(MattingLayout, mattingLayout_);
      DARABONBA_PTR_TO_JSON(MattingType, mattingType_);
      DARABONBA_PTR_TO_JSON(MediaLayout, mediaLayout_);
      DARABONBA_PTR_TO_JSON(MediaResourceId, mediaResourceId_);
      DARABONBA_PTR_TO_JSON(MediaResourceUrl, mediaResourceUrl_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundResourceId, backgroundResourceId_);
      DARABONBA_PTR_FROM_JSON(BackgroundResourceUrl, backgroundResourceUrl_);
      DARABONBA_PTR_FROM_JSON(BackgroundType, backgroundType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(MattingLayout, mattingLayout_);
      DARABONBA_PTR_FROM_JSON(MattingType, mattingType_);
      DARABONBA_PTR_FROM_JSON(MediaLayout, mediaLayout_);
      DARABONBA_PTR_FROM_JSON(MediaResourceId, mediaResourceId_);
      DARABONBA_PTR_FROM_JSON(MediaResourceUrl, mediaResourceUrl_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig() = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig(const DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig &) = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig(DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig &&) = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig() = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& operator=(const DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig &) = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& operator=(DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backgroundResourceId_ != nullptr
        && this->backgroundResourceUrl_ != nullptr && this->backgroundType_ != nullptr && this->description_ != nullptr && this->height_ != nullptr && this->mattingLayout_ != nullptr
        && this->mattingType_ != nullptr && this->mediaLayout_ != nullptr && this->mediaResourceId_ != nullptr && this->mediaResourceUrl_ != nullptr && this->mediaType_ != nullptr
        && this->ruleIds_ != nullptr && this->templateId_ != nullptr && this->templateName_ != nullptr && this->width_ != nullptr; };
    // backgroundResourceId Field Functions 
    bool hasBackgroundResourceId() const { return this->backgroundResourceId_ != nullptr;};
    void deleteBackgroundResourceId() { this->backgroundResourceId_ = nullptr;};
    inline string backgroundResourceId() const { DARABONBA_PTR_GET_DEFAULT(backgroundResourceId_, "") };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setBackgroundResourceId(string backgroundResourceId) { DARABONBA_PTR_SET_VALUE(backgroundResourceId_, backgroundResourceId) };


    // backgroundResourceUrl Field Functions 
    bool hasBackgroundResourceUrl() const { return this->backgroundResourceUrl_ != nullptr;};
    void deleteBackgroundResourceUrl() { this->backgroundResourceUrl_ = nullptr;};
    inline string backgroundResourceUrl() const { DARABONBA_PTR_GET_DEFAULT(backgroundResourceUrl_, "") };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setBackgroundResourceUrl(string backgroundResourceUrl) { DARABONBA_PTR_SET_VALUE(backgroundResourceUrl_, backgroundResourceUrl) };


    // backgroundType Field Functions 
    bool hasBackgroundType() const { return this->backgroundType_ != nullptr;};
    void deleteBackgroundType() { this->backgroundType_ = nullptr;};
    inline string backgroundType() const { DARABONBA_PTR_GET_DEFAULT(backgroundType_, "") };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setBackgroundType(string backgroundType) { DARABONBA_PTR_SET_VALUE(backgroundType_, backgroundType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // mattingLayout Field Functions 
    bool hasMattingLayout() const { return this->mattingLayout_ != nullptr;};
    void deleteMattingLayout() { this->mattingLayout_ = nullptr;};
    inline string mattingLayout() const { DARABONBA_PTR_GET_DEFAULT(mattingLayout_, "") };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setMattingLayout(string mattingLayout) { DARABONBA_PTR_SET_VALUE(mattingLayout_, mattingLayout) };


    // mattingType Field Functions 
    bool hasMattingType() const { return this->mattingType_ != nullptr;};
    void deleteMattingType() { this->mattingType_ = nullptr;};
    inline string mattingType() const { DARABONBA_PTR_GET_DEFAULT(mattingType_, "") };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setMattingType(string mattingType) { DARABONBA_PTR_SET_VALUE(mattingType_, mattingType) };


    // mediaLayout Field Functions 
    bool hasMediaLayout() const { return this->mediaLayout_ != nullptr;};
    void deleteMediaLayout() { this->mediaLayout_ = nullptr;};
    inline string mediaLayout() const { DARABONBA_PTR_GET_DEFAULT(mediaLayout_, "") };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setMediaLayout(string mediaLayout) { DARABONBA_PTR_SET_VALUE(mediaLayout_, mediaLayout) };


    // mediaResourceId Field Functions 
    bool hasMediaResourceId() const { return this->mediaResourceId_ != nullptr;};
    void deleteMediaResourceId() { this->mediaResourceId_ = nullptr;};
    inline string mediaResourceId() const { DARABONBA_PTR_GET_DEFAULT(mediaResourceId_, "") };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setMediaResourceId(string mediaResourceId) { DARABONBA_PTR_SET_VALUE(mediaResourceId_, mediaResourceId) };


    // mediaResourceUrl Field Functions 
    bool hasMediaResourceUrl() const { return this->mediaResourceUrl_ != nullptr;};
    void deleteMediaResourceUrl() { this->mediaResourceUrl_ = nullptr;};
    inline string mediaResourceUrl() const { DARABONBA_PTR_GET_DEFAULT(mediaResourceUrl_, "") };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setMediaResourceUrl(string mediaResourceUrl) { DARABONBA_PTR_SET_VALUE(mediaResourceUrl_, mediaResourceUrl) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const Models::DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds & ruleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, Models::DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds) };
    inline Models::DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds ruleIds() { DARABONBA_PTR_GET(ruleIds_, Models::DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds) };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setRuleIds(const Models::DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setRuleIds(Models::DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The ID of the background material.
    std::shared_ptr<string> backgroundResourceId_ = nullptr;
    // The URL of the background material. Make sure that the URL is accessible over the Internet. Either this parameter or the BackgroundResourceId parameter is returned.
    std::shared_ptr<string> backgroundResourceUrl_ = nullptr;
    // The type of the background material. Valid values:
    // 
    // *   VOD: a video in ApsaraVideo VOD
    // *   PIC: an image
    // *   LIVE: a live stream
    std::shared_ptr<string> backgroundType_ = nullptr;
    // The custom description.
    std::shared_ptr<string> description_ = nullptr;
    // The preview height. Unit: pixels.
    // 
    // The following preview specifications (width × height) are supported:
    // 
    // *   Landscape low definition 360p (640×360)
    // *   Portrait low definition 360p (360×640)
    // *   Landscape standard definition 480p (854×480)
    // *   Portrait standard definition 480p (480×854)
    // *   Landscape high definition 720p (1280×720)
    // *   Portrait high definition 720p (720×1280)
    // *   Landscape ultra-high definition 1080p (1920×1080)
    // *   Portrait ultra-high definition 1080p (1080×1920)
    std::shared_ptr<string> height_ = nullptr;
    // The layout information of the multimedia material.
    std::shared_ptr<string> mattingLayout_ = nullptr;
    // The type of chroma key that is performed on ingested streams. Valid values:
    // 
    // *   green: green-key chroma key
    // *   blue: blue-screen chroma key
    // *   complex: background replacement
    std::shared_ptr<string> mattingType_ = nullptr;
    // LIVE, live streaming
    std::shared_ptr<string> mediaLayout_ = nullptr;
    // The ID of the multimedia material in ApsaraVideo VOD.
    std::shared_ptr<string> mediaResourceId_ = nullptr;
    // The URL of the multimedia material.
    std::shared_ptr<string> mediaResourceUrl_ = nullptr;
    // The type of the multimedia material. Valid values:
    // 
    // *   VOD: a video in ApsaraVideo VOD
    // *   PIC: an image
    // *   LIVE: a live stream
    std::shared_ptr<string> mediaType_ = nullptr;
    // The IDs of the bound rules.
    std::shared_ptr<Models::DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfigRuleIds> ruleIds_ = nullptr;
    // The ID of the virtual studio template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the virtual studio template. The name is the same as the value of the StudioName parameter that was specified when you called the CreateLiveAiStudio operation to create the virtual studio template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The preview width.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
