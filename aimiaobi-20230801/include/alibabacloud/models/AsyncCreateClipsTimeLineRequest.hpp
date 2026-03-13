// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTIMELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTIMELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncCreateClipsTimeLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncCreateClipsTimeLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalContent, additionalContent_);
      DARABONBA_PTR_TO_JSON(CustomContent, customContent_);
      DARABONBA_PTR_TO_JSON(HighLightConfig, highLightConfig_);
      DARABONBA_PTR_TO_JSON(NoRefVideo, noRefVideo_);
      DARABONBA_PTR_TO_JSON(ProcessPrompt, processPrompt_);
      DARABONBA_PTR_TO_JSON(RecommendAudio, recommendAudio_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TimelineScene, timelineScene_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncCreateClipsTimeLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalContent, additionalContent_);
      DARABONBA_PTR_FROM_JSON(CustomContent, customContent_);
      DARABONBA_PTR_FROM_JSON(HighLightConfig, highLightConfig_);
      DARABONBA_PTR_FROM_JSON(NoRefVideo, noRefVideo_);
      DARABONBA_PTR_FROM_JSON(ProcessPrompt, processPrompt_);
      DARABONBA_PTR_FROM_JSON(RecommendAudio, recommendAudio_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TimelineScene, timelineScene_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AsyncCreateClipsTimeLineRequest() = default ;
    AsyncCreateClipsTimeLineRequest(const AsyncCreateClipsTimeLineRequest &) = default ;
    AsyncCreateClipsTimeLineRequest(AsyncCreateClipsTimeLineRequest &&) = default ;
    AsyncCreateClipsTimeLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncCreateClipsTimeLineRequest() = default ;
    AsyncCreateClipsTimeLineRequest& operator=(const AsyncCreateClipsTimeLineRequest &) = default ;
    AsyncCreateClipsTimeLineRequest& operator=(AsyncCreateClipsTimeLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HighLightConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HighLightConfig& obj) { 
        DARABONBA_PTR_TO_JSON(HtAnalyzeRhythm, htAnalyzeRhythm_);
        DARABONBA_PTR_TO_JSON(HtHighQualityLabel, htHighQualityLabel_);
        DARABONBA_PTR_TO_JSON(HtLowQualityLabel, htLowQualityLabel_);
        DARABONBA_PTR_TO_JSON(HtMaxTimeLength, htMaxTimeLength_);
        DARABONBA_PTR_TO_JSON(HtMinTimeLength, htMinTimeLength_);
        DARABONBA_PTR_TO_JSON(HtPrompt, htPrompt_);
        DARABONBA_PTR_TO_JSON(HtSingleShotLen, htSingleShotLen_);
      };
      friend void from_json(const Darabonba::Json& j, HighLightConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(HtAnalyzeRhythm, htAnalyzeRhythm_);
        DARABONBA_PTR_FROM_JSON(HtHighQualityLabel, htHighQualityLabel_);
        DARABONBA_PTR_FROM_JSON(HtLowQualityLabel, htLowQualityLabel_);
        DARABONBA_PTR_FROM_JSON(HtMaxTimeLength, htMaxTimeLength_);
        DARABONBA_PTR_FROM_JSON(HtMinTimeLength, htMinTimeLength_);
        DARABONBA_PTR_FROM_JSON(HtPrompt, htPrompt_);
        DARABONBA_PTR_FROM_JSON(HtSingleShotLen, htSingleShotLen_);
      };
      HighLightConfig() = default ;
      HighLightConfig(const HighLightConfig &) = default ;
      HighLightConfig(HighLightConfig &&) = default ;
      HighLightConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HighLightConfig() = default ;
      HighLightConfig& operator=(const HighLightConfig &) = default ;
      HighLightConfig& operator=(HighLightConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->htAnalyzeRhythm_ == nullptr
        && this->htHighQualityLabel_ == nullptr && this->htLowQualityLabel_ == nullptr && this->htMaxTimeLength_ == nullptr && this->htMinTimeLength_ == nullptr && this->htPrompt_ == nullptr
        && this->htSingleShotLen_ == nullptr; };
      // htAnalyzeRhythm Field Functions 
      bool hasHtAnalyzeRhythm() const { return this->htAnalyzeRhythm_ != nullptr;};
      void deleteHtAnalyzeRhythm() { this->htAnalyzeRhythm_ = nullptr;};
      inline bool getHtAnalyzeRhythm() const { DARABONBA_PTR_GET_DEFAULT(htAnalyzeRhythm_, false) };
      inline HighLightConfig& setHtAnalyzeRhythm(bool htAnalyzeRhythm) { DARABONBA_PTR_SET_VALUE(htAnalyzeRhythm_, htAnalyzeRhythm) };


      // htHighQualityLabel Field Functions 
      bool hasHtHighQualityLabel() const { return this->htHighQualityLabel_ != nullptr;};
      void deleteHtHighQualityLabel() { this->htHighQualityLabel_ = nullptr;};
      inline const vector<string> & getHtHighQualityLabel() const { DARABONBA_PTR_GET_CONST(htHighQualityLabel_, vector<string>) };
      inline vector<string> getHtHighQualityLabel() { DARABONBA_PTR_GET(htHighQualityLabel_, vector<string>) };
      inline HighLightConfig& setHtHighQualityLabel(const vector<string> & htHighQualityLabel) { DARABONBA_PTR_SET_VALUE(htHighQualityLabel_, htHighQualityLabel) };
      inline HighLightConfig& setHtHighQualityLabel(vector<string> && htHighQualityLabel) { DARABONBA_PTR_SET_RVALUE(htHighQualityLabel_, htHighQualityLabel) };


      // htLowQualityLabel Field Functions 
      bool hasHtLowQualityLabel() const { return this->htLowQualityLabel_ != nullptr;};
      void deleteHtLowQualityLabel() { this->htLowQualityLabel_ = nullptr;};
      inline const vector<string> & getHtLowQualityLabel() const { DARABONBA_PTR_GET_CONST(htLowQualityLabel_, vector<string>) };
      inline vector<string> getHtLowQualityLabel() { DARABONBA_PTR_GET(htLowQualityLabel_, vector<string>) };
      inline HighLightConfig& setHtLowQualityLabel(const vector<string> & htLowQualityLabel) { DARABONBA_PTR_SET_VALUE(htLowQualityLabel_, htLowQualityLabel) };
      inline HighLightConfig& setHtLowQualityLabel(vector<string> && htLowQualityLabel) { DARABONBA_PTR_SET_RVALUE(htLowQualityLabel_, htLowQualityLabel) };


      // htMaxTimeLength Field Functions 
      bool hasHtMaxTimeLength() const { return this->htMaxTimeLength_ != nullptr;};
      void deleteHtMaxTimeLength() { this->htMaxTimeLength_ = nullptr;};
      inline int32_t getHtMaxTimeLength() const { DARABONBA_PTR_GET_DEFAULT(htMaxTimeLength_, 0) };
      inline HighLightConfig& setHtMaxTimeLength(int32_t htMaxTimeLength) { DARABONBA_PTR_SET_VALUE(htMaxTimeLength_, htMaxTimeLength) };


      // htMinTimeLength Field Functions 
      bool hasHtMinTimeLength() const { return this->htMinTimeLength_ != nullptr;};
      void deleteHtMinTimeLength() { this->htMinTimeLength_ = nullptr;};
      inline int32_t getHtMinTimeLength() const { DARABONBA_PTR_GET_DEFAULT(htMinTimeLength_, 0) };
      inline HighLightConfig& setHtMinTimeLength(int32_t htMinTimeLength) { DARABONBA_PTR_SET_VALUE(htMinTimeLength_, htMinTimeLength) };


      // htPrompt Field Functions 
      bool hasHtPrompt() const { return this->htPrompt_ != nullptr;};
      void deleteHtPrompt() { this->htPrompt_ = nullptr;};
      inline string getHtPrompt() const { DARABONBA_PTR_GET_DEFAULT(htPrompt_, "") };
      inline HighLightConfig& setHtPrompt(string htPrompt) { DARABONBA_PTR_SET_VALUE(htPrompt_, htPrompt) };


      // htSingleShotLen Field Functions 
      bool hasHtSingleShotLen() const { return this->htSingleShotLen_ != nullptr;};
      void deleteHtSingleShotLen() { this->htSingleShotLen_ = nullptr;};
      inline int32_t getHtSingleShotLen() const { DARABONBA_PTR_GET_DEFAULT(htSingleShotLen_, 0) };
      inline HighLightConfig& setHtSingleShotLen(int32_t htSingleShotLen) { DARABONBA_PTR_SET_VALUE(htSingleShotLen_, htSingleShotLen) };


    protected:
      shared_ptr<bool> htAnalyzeRhythm_ {};
      shared_ptr<vector<string>> htHighQualityLabel_ {};
      shared_ptr<vector<string>> htLowQualityLabel_ {};
      shared_ptr<int32_t> htMaxTimeLength_ {};
      shared_ptr<int32_t> htMinTimeLength_ {};
      shared_ptr<string> htPrompt_ {};
      shared_ptr<int32_t> htSingleShotLen_ {};
    };

    virtual bool empty() const override { return this->additionalContent_ == nullptr
        && this->customContent_ == nullptr && this->highLightConfig_ == nullptr && this->noRefVideo_ == nullptr && this->processPrompt_ == nullptr && this->recommendAudio_ == nullptr
        && this->taskId_ == nullptr && this->timelineScene_ == nullptr && this->workspaceId_ == nullptr; };
    // additionalContent Field Functions 
    bool hasAdditionalContent() const { return this->additionalContent_ != nullptr;};
    void deleteAdditionalContent() { this->additionalContent_ = nullptr;};
    inline string getAdditionalContent() const { DARABONBA_PTR_GET_DEFAULT(additionalContent_, "") };
    inline AsyncCreateClipsTimeLineRequest& setAdditionalContent(string additionalContent) { DARABONBA_PTR_SET_VALUE(additionalContent_, additionalContent) };


    // customContent Field Functions 
    bool hasCustomContent() const { return this->customContent_ != nullptr;};
    void deleteCustomContent() { this->customContent_ = nullptr;};
    inline string getCustomContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
    inline AsyncCreateClipsTimeLineRequest& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


    // highLightConfig Field Functions 
    bool hasHighLightConfig() const { return this->highLightConfig_ != nullptr;};
    void deleteHighLightConfig() { this->highLightConfig_ = nullptr;};
    inline const AsyncCreateClipsTimeLineRequest::HighLightConfig & getHighLightConfig() const { DARABONBA_PTR_GET_CONST(highLightConfig_, AsyncCreateClipsTimeLineRequest::HighLightConfig) };
    inline AsyncCreateClipsTimeLineRequest::HighLightConfig getHighLightConfig() { DARABONBA_PTR_GET(highLightConfig_, AsyncCreateClipsTimeLineRequest::HighLightConfig) };
    inline AsyncCreateClipsTimeLineRequest& setHighLightConfig(const AsyncCreateClipsTimeLineRequest::HighLightConfig & highLightConfig) { DARABONBA_PTR_SET_VALUE(highLightConfig_, highLightConfig) };
    inline AsyncCreateClipsTimeLineRequest& setHighLightConfig(AsyncCreateClipsTimeLineRequest::HighLightConfig && highLightConfig) { DARABONBA_PTR_SET_RVALUE(highLightConfig_, highLightConfig) };


    // noRefVideo Field Functions 
    bool hasNoRefVideo() const { return this->noRefVideo_ != nullptr;};
    void deleteNoRefVideo() { this->noRefVideo_ = nullptr;};
    inline bool getNoRefVideo() const { DARABONBA_PTR_GET_DEFAULT(noRefVideo_, false) };
    inline AsyncCreateClipsTimeLineRequest& setNoRefVideo(bool noRefVideo) { DARABONBA_PTR_SET_VALUE(noRefVideo_, noRefVideo) };


    // processPrompt Field Functions 
    bool hasProcessPrompt() const { return this->processPrompt_ != nullptr;};
    void deleteProcessPrompt() { this->processPrompt_ = nullptr;};
    inline string getProcessPrompt() const { DARABONBA_PTR_GET_DEFAULT(processPrompt_, "") };
    inline AsyncCreateClipsTimeLineRequest& setProcessPrompt(string processPrompt) { DARABONBA_PTR_SET_VALUE(processPrompt_, processPrompt) };


    // recommendAudio Field Functions 
    bool hasRecommendAudio() const { return this->recommendAudio_ != nullptr;};
    void deleteRecommendAudio() { this->recommendAudio_ = nullptr;};
    inline bool getRecommendAudio() const { DARABONBA_PTR_GET_DEFAULT(recommendAudio_, false) };
    inline AsyncCreateClipsTimeLineRequest& setRecommendAudio(bool recommendAudio) { DARABONBA_PTR_SET_VALUE(recommendAudio_, recommendAudio) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AsyncCreateClipsTimeLineRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // timelineScene Field Functions 
    bool hasTimelineScene() const { return this->timelineScene_ != nullptr;};
    void deleteTimelineScene() { this->timelineScene_ = nullptr;};
    inline int32_t getTimelineScene() const { DARABONBA_PTR_GET_DEFAULT(timelineScene_, 0) };
    inline AsyncCreateClipsTimeLineRequest& setTimelineScene(int32_t timelineScene) { DARABONBA_PTR_SET_VALUE(timelineScene_, timelineScene) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncCreateClipsTimeLineRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> additionalContent_ {};
    shared_ptr<string> customContent_ {};
    shared_ptr<AsyncCreateClipsTimeLineRequest::HighLightConfig> highLightConfig_ {};
    shared_ptr<bool> noRefVideo_ {};
    shared_ptr<string> processPrompt_ {};
    shared_ptr<bool> recommendAudio_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    shared_ptr<int32_t> timelineScene_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
