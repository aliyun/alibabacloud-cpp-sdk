// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAISTUDIORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAISTUDIORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAIStudioResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAIStudioResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StudioConfigs, studioConfigs_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAIStudioResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StudioConfigs, studioConfigs_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLiveAIStudioResponseBody() = default ;
    DescribeLiveAIStudioResponseBody(const DescribeLiveAIStudioResponseBody &) = default ;
    DescribeLiveAIStudioResponseBody(DescribeLiveAIStudioResponseBody &&) = default ;
    DescribeLiveAIStudioResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAIStudioResponseBody() = default ;
    DescribeLiveAIStudioResponseBody& operator=(const DescribeLiveAIStudioResponseBody &) = default ;
    DescribeLiveAIStudioResponseBody& operator=(DescribeLiveAIStudioResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StudioConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StudioConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(SubtitleConfig, subtitleConfig_);
      };
      friend void from_json(const Darabonba::Json& j, StudioConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(SubtitleConfig, subtitleConfig_);
      };
      StudioConfigs() = default ;
      StudioConfigs(const StudioConfigs &) = default ;
      StudioConfigs(StudioConfigs &&) = default ;
      StudioConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StudioConfigs() = default ;
      StudioConfigs& operator=(const StudioConfigs &) = default ;
      StudioConfigs& operator=(StudioConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubtitleConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubtitleConfig& obj) { 
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
        friend void from_json(const Darabonba::Json& j, SubtitleConfig& obj) { 
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
        SubtitleConfig() = default ;
        SubtitleConfig(const SubtitleConfig &) = default ;
        SubtitleConfig(SubtitleConfig &&) = default ;
        SubtitleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubtitleConfig() = default ;
        SubtitleConfig& operator=(const SubtitleConfig &) = default ;
        SubtitleConfig& operator=(SubtitleConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RuleIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleIds& obj) { 
            DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
          };
          friend void from_json(const Darabonba::Json& j, RuleIds& obj) { 
            DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
          };
          RuleIds() = default ;
          RuleIds(const RuleIds &) = default ;
          RuleIds(RuleIds &&) = default ;
          RuleIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuleIds() = default ;
          RuleIds& operator=(const RuleIds &) = default ;
          RuleIds& operator=(RuleIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ruleId_ == nullptr; };
          // ruleId Field Functions 
          bool hasRuleId() const { return this->ruleId_ != nullptr;};
          void deleteRuleId() { this->ruleId_ = nullptr;};
          inline const vector<string> & getRuleId() const { DARABONBA_PTR_GET_CONST(ruleId_, vector<string>) };
          inline vector<string> getRuleId() { DARABONBA_PTR_GET(ruleId_, vector<string>) };
          inline RuleIds& setRuleId(const vector<string> & ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };
          inline RuleIds& setRuleId(vector<string> && ruleId) { DARABONBA_PTR_SET_RVALUE(ruleId_, ruleId) };


        protected:
          shared_ptr<vector<string>> ruleId_ {};
        };

        virtual bool empty() const override { return this->backgroundResourceId_ == nullptr
        && this->backgroundResourceUrl_ == nullptr && this->backgroundType_ == nullptr && this->description_ == nullptr && this->height_ == nullptr && this->mattingLayout_ == nullptr
        && this->mattingType_ == nullptr && this->mediaLayout_ == nullptr && this->mediaResourceId_ == nullptr && this->mediaResourceUrl_ == nullptr && this->mediaType_ == nullptr
        && this->ruleIds_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->width_ == nullptr; };
        // backgroundResourceId Field Functions 
        bool hasBackgroundResourceId() const { return this->backgroundResourceId_ != nullptr;};
        void deleteBackgroundResourceId() { this->backgroundResourceId_ = nullptr;};
        inline string getBackgroundResourceId() const { DARABONBA_PTR_GET_DEFAULT(backgroundResourceId_, "") };
        inline SubtitleConfig& setBackgroundResourceId(string backgroundResourceId) { DARABONBA_PTR_SET_VALUE(backgroundResourceId_, backgroundResourceId) };


        // backgroundResourceUrl Field Functions 
        bool hasBackgroundResourceUrl() const { return this->backgroundResourceUrl_ != nullptr;};
        void deleteBackgroundResourceUrl() { this->backgroundResourceUrl_ = nullptr;};
        inline string getBackgroundResourceUrl() const { DARABONBA_PTR_GET_DEFAULT(backgroundResourceUrl_, "") };
        inline SubtitleConfig& setBackgroundResourceUrl(string backgroundResourceUrl) { DARABONBA_PTR_SET_VALUE(backgroundResourceUrl_, backgroundResourceUrl) };


        // backgroundType Field Functions 
        bool hasBackgroundType() const { return this->backgroundType_ != nullptr;};
        void deleteBackgroundType() { this->backgroundType_ = nullptr;};
        inline string getBackgroundType() const { DARABONBA_PTR_GET_DEFAULT(backgroundType_, "") };
        inline SubtitleConfig& setBackgroundType(string backgroundType) { DARABONBA_PTR_SET_VALUE(backgroundType_, backgroundType) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SubtitleConfig& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
        inline SubtitleConfig& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // mattingLayout Field Functions 
        bool hasMattingLayout() const { return this->mattingLayout_ != nullptr;};
        void deleteMattingLayout() { this->mattingLayout_ = nullptr;};
        inline string getMattingLayout() const { DARABONBA_PTR_GET_DEFAULT(mattingLayout_, "") };
        inline SubtitleConfig& setMattingLayout(string mattingLayout) { DARABONBA_PTR_SET_VALUE(mattingLayout_, mattingLayout) };


        // mattingType Field Functions 
        bool hasMattingType() const { return this->mattingType_ != nullptr;};
        void deleteMattingType() { this->mattingType_ = nullptr;};
        inline string getMattingType() const { DARABONBA_PTR_GET_DEFAULT(mattingType_, "") };
        inline SubtitleConfig& setMattingType(string mattingType) { DARABONBA_PTR_SET_VALUE(mattingType_, mattingType) };


        // mediaLayout Field Functions 
        bool hasMediaLayout() const { return this->mediaLayout_ != nullptr;};
        void deleteMediaLayout() { this->mediaLayout_ = nullptr;};
        inline string getMediaLayout() const { DARABONBA_PTR_GET_DEFAULT(mediaLayout_, "") };
        inline SubtitleConfig& setMediaLayout(string mediaLayout) { DARABONBA_PTR_SET_VALUE(mediaLayout_, mediaLayout) };


        // mediaResourceId Field Functions 
        bool hasMediaResourceId() const { return this->mediaResourceId_ != nullptr;};
        void deleteMediaResourceId() { this->mediaResourceId_ = nullptr;};
        inline string getMediaResourceId() const { DARABONBA_PTR_GET_DEFAULT(mediaResourceId_, "") };
        inline SubtitleConfig& setMediaResourceId(string mediaResourceId) { DARABONBA_PTR_SET_VALUE(mediaResourceId_, mediaResourceId) };


        // mediaResourceUrl Field Functions 
        bool hasMediaResourceUrl() const { return this->mediaResourceUrl_ != nullptr;};
        void deleteMediaResourceUrl() { this->mediaResourceUrl_ = nullptr;};
        inline string getMediaResourceUrl() const { DARABONBA_PTR_GET_DEFAULT(mediaResourceUrl_, "") };
        inline SubtitleConfig& setMediaResourceUrl(string mediaResourceUrl) { DARABONBA_PTR_SET_VALUE(mediaResourceUrl_, mediaResourceUrl) };


        // mediaType Field Functions 
        bool hasMediaType() const { return this->mediaType_ != nullptr;};
        void deleteMediaType() { this->mediaType_ = nullptr;};
        inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
        inline SubtitleConfig& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


        // ruleIds Field Functions 
        bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
        void deleteRuleIds() { this->ruleIds_ = nullptr;};
        inline const SubtitleConfig::RuleIds & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, SubtitleConfig::RuleIds) };
        inline SubtitleConfig::RuleIds getRuleIds() { DARABONBA_PTR_GET(ruleIds_, SubtitleConfig::RuleIds) };
        inline SubtitleConfig& setRuleIds(const SubtitleConfig::RuleIds & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
        inline SubtitleConfig& setRuleIds(SubtitleConfig::RuleIds && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline SubtitleConfig& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline SubtitleConfig& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
        inline SubtitleConfig& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The ID of the background material.
        shared_ptr<string> backgroundResourceId_ {};
        // The URL of the background material. Make sure that the URL is accessible over the Internet. Either this parameter or the BackgroundResourceId parameter is returned.
        shared_ptr<string> backgroundResourceUrl_ {};
        // The type of the background material. Valid values:
        // 
        // *   VOD: a video in ApsaraVideo VOD
        // *   PIC: an image
        // *   LIVE: a live stream
        shared_ptr<string> backgroundType_ {};
        // The custom description.
        shared_ptr<string> description_ {};
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
        shared_ptr<string> height_ {};
        // The layout information of the multimedia material.
        shared_ptr<string> mattingLayout_ {};
        // The type of chroma key that is performed on ingested streams. Valid values:
        // 
        // *   green: green-key chroma key
        // *   blue: blue-screen chroma key
        // *   complex: background replacement
        shared_ptr<string> mattingType_ {};
        // LIVE, live streaming
        shared_ptr<string> mediaLayout_ {};
        // The ID of the multimedia material in ApsaraVideo VOD.
        shared_ptr<string> mediaResourceId_ {};
        // The URL of the multimedia material.
        shared_ptr<string> mediaResourceUrl_ {};
        // The type of the multimedia material. Valid values:
        // 
        // *   VOD: a video in ApsaraVideo VOD
        // *   PIC: an image
        // *   LIVE: a live stream
        shared_ptr<string> mediaType_ {};
        // The IDs of the bound rules.
        shared_ptr<SubtitleConfig::RuleIds> ruleIds_ {};
        // The ID of the virtual studio template.
        shared_ptr<string> templateId_ {};
        // The name of the virtual studio template. The name is the same as the value of the StudioName parameter that was specified when you called the CreateLiveAiStudio operation to create the virtual studio template.
        shared_ptr<string> templateName_ {};
        // The preview width.
        shared_ptr<string> width_ {};
      };

      virtual bool empty() const override { return this->subtitleConfig_ == nullptr; };
      // subtitleConfig Field Functions 
      bool hasSubtitleConfig() const { return this->subtitleConfig_ != nullptr;};
      void deleteSubtitleConfig() { this->subtitleConfig_ = nullptr;};
      inline const vector<StudioConfigs::SubtitleConfig> & getSubtitleConfig() const { DARABONBA_PTR_GET_CONST(subtitleConfig_, vector<StudioConfigs::SubtitleConfig>) };
      inline vector<StudioConfigs::SubtitleConfig> getSubtitleConfig() { DARABONBA_PTR_GET(subtitleConfig_, vector<StudioConfigs::SubtitleConfig>) };
      inline StudioConfigs& setSubtitleConfig(const vector<StudioConfigs::SubtitleConfig> & subtitleConfig) { DARABONBA_PTR_SET_VALUE(subtitleConfig_, subtitleConfig) };
      inline StudioConfigs& setSubtitleConfig(vector<StudioConfigs::SubtitleConfig> && subtitleConfig) { DARABONBA_PTR_SET_RVALUE(subtitleConfig_, subtitleConfig) };


    protected:
      shared_ptr<vector<StudioConfigs::SubtitleConfig>> subtitleConfig_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->studioConfigs_ == nullptr && this->total_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLiveAIStudioResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveAIStudioResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveAIStudioResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // studioConfigs Field Functions 
    bool hasStudioConfigs() const { return this->studioConfigs_ != nullptr;};
    void deleteStudioConfigs() { this->studioConfigs_ = nullptr;};
    inline const DescribeLiveAIStudioResponseBody::StudioConfigs & getStudioConfigs() const { DARABONBA_PTR_GET_CONST(studioConfigs_, DescribeLiveAIStudioResponseBody::StudioConfigs) };
    inline DescribeLiveAIStudioResponseBody::StudioConfigs getStudioConfigs() { DARABONBA_PTR_GET(studioConfigs_, DescribeLiveAIStudioResponseBody::StudioConfigs) };
    inline DescribeLiveAIStudioResponseBody& setStudioConfigs(const DescribeLiveAIStudioResponseBody::StudioConfigs & studioConfigs) { DARABONBA_PTR_SET_VALUE(studioConfigs_, studioConfigs) };
    inline DescribeLiveAIStudioResponseBody& setStudioConfigs(DescribeLiveAIStudioResponseBody::StudioConfigs && studioConfigs) { DARABONBA_PTR_SET_RVALUE(studioConfigs_, studioConfigs) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeLiveAIStudioResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Valid values: 1 to 50.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The virtual studio templates.
    shared_ptr<DescribeLiveAIStudioResponseBody::StudioConfigs> studioConfigs_ {};
    // The total number of templates.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
