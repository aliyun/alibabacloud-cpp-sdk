// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTIMELINESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTIMELINESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncCreateClipsTimeLineShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncCreateClipsTimeLineShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalContent, additionalContent_);
      DARABONBA_PTR_TO_JSON(CustomContent, customContent_);
      DARABONBA_PTR_TO_JSON(HighLightConfig, highLightConfigShrink_);
      DARABONBA_PTR_TO_JSON(NoRefVideo, noRefVideo_);
      DARABONBA_PTR_TO_JSON(ProcessPrompt, processPrompt_);
      DARABONBA_PTR_TO_JSON(RecommendAudio, recommendAudio_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TimelineScene, timelineScene_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncCreateClipsTimeLineShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalContent, additionalContent_);
      DARABONBA_PTR_FROM_JSON(CustomContent, customContent_);
      DARABONBA_PTR_FROM_JSON(HighLightConfig, highLightConfigShrink_);
      DARABONBA_PTR_FROM_JSON(NoRefVideo, noRefVideo_);
      DARABONBA_PTR_FROM_JSON(ProcessPrompt, processPrompt_);
      DARABONBA_PTR_FROM_JSON(RecommendAudio, recommendAudio_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TimelineScene, timelineScene_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AsyncCreateClipsTimeLineShrinkRequest() = default ;
    AsyncCreateClipsTimeLineShrinkRequest(const AsyncCreateClipsTimeLineShrinkRequest &) = default ;
    AsyncCreateClipsTimeLineShrinkRequest(AsyncCreateClipsTimeLineShrinkRequest &&) = default ;
    AsyncCreateClipsTimeLineShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncCreateClipsTimeLineShrinkRequest() = default ;
    AsyncCreateClipsTimeLineShrinkRequest& operator=(const AsyncCreateClipsTimeLineShrinkRequest &) = default ;
    AsyncCreateClipsTimeLineShrinkRequest& operator=(AsyncCreateClipsTimeLineShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalContent_ == nullptr
        && this->customContent_ == nullptr && this->highLightConfigShrink_ == nullptr && this->noRefVideo_ == nullptr && this->processPrompt_ == nullptr && this->recommendAudio_ == nullptr
        && this->taskId_ == nullptr && this->timelineScene_ == nullptr && this->workspaceId_ == nullptr; };
    // additionalContent Field Functions 
    bool hasAdditionalContent() const { return this->additionalContent_ != nullptr;};
    void deleteAdditionalContent() { this->additionalContent_ = nullptr;};
    inline string getAdditionalContent() const { DARABONBA_PTR_GET_DEFAULT(additionalContent_, "") };
    inline AsyncCreateClipsTimeLineShrinkRequest& setAdditionalContent(string additionalContent) { DARABONBA_PTR_SET_VALUE(additionalContent_, additionalContent) };


    // customContent Field Functions 
    bool hasCustomContent() const { return this->customContent_ != nullptr;};
    void deleteCustomContent() { this->customContent_ = nullptr;};
    inline string getCustomContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
    inline AsyncCreateClipsTimeLineShrinkRequest& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


    // highLightConfigShrink Field Functions 
    bool hasHighLightConfigShrink() const { return this->highLightConfigShrink_ != nullptr;};
    void deleteHighLightConfigShrink() { this->highLightConfigShrink_ = nullptr;};
    inline string getHighLightConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(highLightConfigShrink_, "") };
    inline AsyncCreateClipsTimeLineShrinkRequest& setHighLightConfigShrink(string highLightConfigShrink) { DARABONBA_PTR_SET_VALUE(highLightConfigShrink_, highLightConfigShrink) };


    // noRefVideo Field Functions 
    bool hasNoRefVideo() const { return this->noRefVideo_ != nullptr;};
    void deleteNoRefVideo() { this->noRefVideo_ = nullptr;};
    inline bool getNoRefVideo() const { DARABONBA_PTR_GET_DEFAULT(noRefVideo_, false) };
    inline AsyncCreateClipsTimeLineShrinkRequest& setNoRefVideo(bool noRefVideo) { DARABONBA_PTR_SET_VALUE(noRefVideo_, noRefVideo) };


    // processPrompt Field Functions 
    bool hasProcessPrompt() const { return this->processPrompt_ != nullptr;};
    void deleteProcessPrompt() { this->processPrompt_ = nullptr;};
    inline string getProcessPrompt() const { DARABONBA_PTR_GET_DEFAULT(processPrompt_, "") };
    inline AsyncCreateClipsTimeLineShrinkRequest& setProcessPrompt(string processPrompt) { DARABONBA_PTR_SET_VALUE(processPrompt_, processPrompt) };


    // recommendAudio Field Functions 
    bool hasRecommendAudio() const { return this->recommendAudio_ != nullptr;};
    void deleteRecommendAudio() { this->recommendAudio_ = nullptr;};
    inline bool getRecommendAudio() const { DARABONBA_PTR_GET_DEFAULT(recommendAudio_, false) };
    inline AsyncCreateClipsTimeLineShrinkRequest& setRecommendAudio(bool recommendAudio) { DARABONBA_PTR_SET_VALUE(recommendAudio_, recommendAudio) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AsyncCreateClipsTimeLineShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // timelineScene Field Functions 
    bool hasTimelineScene() const { return this->timelineScene_ != nullptr;};
    void deleteTimelineScene() { this->timelineScene_ = nullptr;};
    inline int32_t getTimelineScene() const { DARABONBA_PTR_GET_DEFAULT(timelineScene_, 0) };
    inline AsyncCreateClipsTimeLineShrinkRequest& setTimelineScene(int32_t timelineScene) { DARABONBA_PTR_SET_VALUE(timelineScene_, timelineScene) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncCreateClipsTimeLineShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> additionalContent_ {};
    shared_ptr<string> customContent_ {};
    shared_ptr<string> highLightConfigShrink_ {};
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
