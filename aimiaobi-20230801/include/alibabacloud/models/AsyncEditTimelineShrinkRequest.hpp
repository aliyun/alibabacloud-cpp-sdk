// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCEDITTIMELINESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCEDITTIMELINESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncEditTimelineShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncEditTimelineShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoClips, autoClips_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Timelines, timelinesShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncEditTimelineShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoClips, autoClips_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Timelines, timelinesShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AsyncEditTimelineShrinkRequest() = default ;
    AsyncEditTimelineShrinkRequest(const AsyncEditTimelineShrinkRequest &) = default ;
    AsyncEditTimelineShrinkRequest(AsyncEditTimelineShrinkRequest &&) = default ;
    AsyncEditTimelineShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncEditTimelineShrinkRequest() = default ;
    AsyncEditTimelineShrinkRequest& operator=(const AsyncEditTimelineShrinkRequest &) = default ;
    AsyncEditTimelineShrinkRequest& operator=(AsyncEditTimelineShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoClips_ == nullptr
        && this->taskId_ == nullptr && this->timelinesShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // autoClips Field Functions 
    bool hasAutoClips() const { return this->autoClips_ != nullptr;};
    void deleteAutoClips() { this->autoClips_ = nullptr;};
    inline bool getAutoClips() const { DARABONBA_PTR_GET_DEFAULT(autoClips_, false) };
    inline AsyncEditTimelineShrinkRequest& setAutoClips(bool autoClips) { DARABONBA_PTR_SET_VALUE(autoClips_, autoClips) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AsyncEditTimelineShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // timelinesShrink Field Functions 
    bool hasTimelinesShrink() const { return this->timelinesShrink_ != nullptr;};
    void deleteTimelinesShrink() { this->timelinesShrink_ = nullptr;};
    inline string getTimelinesShrink() const { DARABONBA_PTR_GET_DEFAULT(timelinesShrink_, "") };
    inline AsyncEditTimelineShrinkRequest& setTimelinesShrink(string timelinesShrink) { DARABONBA_PTR_SET_VALUE(timelinesShrink_, timelinesShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncEditTimelineShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<bool> autoClips_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> timelinesShrink_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
