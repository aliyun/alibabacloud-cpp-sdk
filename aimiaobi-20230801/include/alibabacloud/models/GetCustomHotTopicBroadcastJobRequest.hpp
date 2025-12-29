// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMHOTTOPICBROADCASTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMHOTTOPICBROADCASTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetCustomHotTopicBroadcastJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomHotTopicBroadcastJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomHotTopicBroadcastJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetCustomHotTopicBroadcastJobRequest() = default ;
    GetCustomHotTopicBroadcastJobRequest(const GetCustomHotTopicBroadcastJobRequest &) = default ;
    GetCustomHotTopicBroadcastJobRequest(GetCustomHotTopicBroadcastJobRequest &&) = default ;
    GetCustomHotTopicBroadcastJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomHotTopicBroadcastJobRequest() = default ;
    GetCustomHotTopicBroadcastJobRequest& operator=(const GetCustomHotTopicBroadcastJobRequest &) = default ;
    GetCustomHotTopicBroadcastJobRequest& operator=(GetCustomHotTopicBroadcastJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetCustomHotTopicBroadcastJobRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetCustomHotTopicBroadcastJobRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
