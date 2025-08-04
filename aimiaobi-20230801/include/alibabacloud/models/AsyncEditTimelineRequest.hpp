// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCEDITTIMELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCEDITTIMELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AsyncEditTimelineRequestTimelines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncEditTimelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncEditTimelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoClips, autoClips_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Timelines, timelines_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncEditTimelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoClips, autoClips_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Timelines, timelines_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AsyncEditTimelineRequest() = default ;
    AsyncEditTimelineRequest(const AsyncEditTimelineRequest &) = default ;
    AsyncEditTimelineRequest(AsyncEditTimelineRequest &&) = default ;
    AsyncEditTimelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncEditTimelineRequest() = default ;
    AsyncEditTimelineRequest& operator=(const AsyncEditTimelineRequest &) = default ;
    AsyncEditTimelineRequest& operator=(AsyncEditTimelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoClips_ != nullptr
        && this->taskId_ != nullptr && this->timelines_ != nullptr && this->workspaceId_ != nullptr; };
    // autoClips Field Functions 
    bool hasAutoClips() const { return this->autoClips_ != nullptr;};
    void deleteAutoClips() { this->autoClips_ = nullptr;};
    inline bool autoClips() const { DARABONBA_PTR_GET_DEFAULT(autoClips_, false) };
    inline AsyncEditTimelineRequest& setAutoClips(bool autoClips) { DARABONBA_PTR_SET_VALUE(autoClips_, autoClips) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AsyncEditTimelineRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // timelines Field Functions 
    bool hasTimelines() const { return this->timelines_ != nullptr;};
    void deleteTimelines() { this->timelines_ = nullptr;};
    inline const vector<AsyncEditTimelineRequestTimelines> & timelines() const { DARABONBA_PTR_GET_CONST(timelines_, vector<AsyncEditTimelineRequestTimelines>) };
    inline vector<AsyncEditTimelineRequestTimelines> timelines() { DARABONBA_PTR_GET(timelines_, vector<AsyncEditTimelineRequestTimelines>) };
    inline AsyncEditTimelineRequest& setTimelines(const vector<AsyncEditTimelineRequestTimelines> & timelines) { DARABONBA_PTR_SET_VALUE(timelines_, timelines) };
    inline AsyncEditTimelineRequest& setTimelines(vector<AsyncEditTimelineRequestTimelines> && timelines) { DARABONBA_PTR_SET_RVALUE(timelines_, timelines) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncEditTimelineRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<bool> autoClips_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<AsyncEditTimelineRequestTimelines>> timelines_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
