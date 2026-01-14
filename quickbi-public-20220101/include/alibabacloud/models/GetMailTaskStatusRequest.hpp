// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMAILTASKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMAILTASKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class GetMailTaskStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMailTaskStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MailId, mailId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMailTaskStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MailId, mailId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetMailTaskStatusRequest() = default ;
    GetMailTaskStatusRequest(const GetMailTaskStatusRequest &) = default ;
    GetMailTaskStatusRequest(GetMailTaskStatusRequest &&) = default ;
    GetMailTaskStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMailTaskStatusRequest() = default ;
    GetMailTaskStatusRequest& operator=(const GetMailTaskStatusRequest &) = default ;
    GetMailTaskStatusRequest& operator=(GetMailTaskStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mailId_ == nullptr
        && this->taskId_ == nullptr; };
    // mailId Field Functions 
    bool hasMailId() const { return this->mailId_ != nullptr;};
    void deleteMailId() { this->mailId_ = nullptr;};
    inline string getMailId() const { DARABONBA_PTR_GET_DEFAULT(mailId_, "") };
    inline GetMailTaskStatusRequest& setMailId(string mailId) { DARABONBA_PTR_SET_VALUE(mailId_, mailId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetMailTaskStatusRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Mail ID
    // 
    // This parameter is required.
    shared_ptr<string> mailId_ {};
    // Task ID
    // 
    // > - If the task ID is not provided, the latest task status will be returned by default;
    // > - If the task ID is provided, the status of the specified task will be returned.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
