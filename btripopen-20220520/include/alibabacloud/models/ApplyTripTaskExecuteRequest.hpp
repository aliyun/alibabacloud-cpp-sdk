// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYTRIPTASKEXECUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYTRIPTASKEXECUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyTripTaskExecuteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyTripTaskExecuteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action_from, actionFrom_);
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(task_action, taskAction_);
      DARABONBA_PTR_TO_JSON(task_id, taskId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyTripTaskExecuteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action_from, actionFrom_);
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(task_action, taskAction_);
      DARABONBA_PTR_FROM_JSON(task_id, taskId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    ApplyTripTaskExecuteRequest() = default ;
    ApplyTripTaskExecuteRequest(const ApplyTripTaskExecuteRequest &) = default ;
    ApplyTripTaskExecuteRequest(ApplyTripTaskExecuteRequest &&) = default ;
    ApplyTripTaskExecuteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyTripTaskExecuteRequest() = default ;
    ApplyTripTaskExecuteRequest& operator=(const ApplyTripTaskExecuteRequest &) = default ;
    ApplyTripTaskExecuteRequest& operator=(ApplyTripTaskExecuteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionFrom_ != nullptr
        && this->comment_ != nullptr && this->taskAction_ != nullptr && this->taskId_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // actionFrom Field Functions 
    bool hasActionFrom() const { return this->actionFrom_ != nullptr;};
    void deleteActionFrom() { this->actionFrom_ = nullptr;};
    inline string actionFrom() const { DARABONBA_PTR_GET_DEFAULT(actionFrom_, "") };
    inline ApplyTripTaskExecuteRequest& setActionFrom(string actionFrom) { DARABONBA_PTR_SET_VALUE(actionFrom_, actionFrom) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ApplyTripTaskExecuteRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline ApplyTripTaskExecuteRequest& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ApplyTripTaskExecuteRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ApplyTripTaskExecuteRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ApplyTripTaskExecuteRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> actionFrom_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskAction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
