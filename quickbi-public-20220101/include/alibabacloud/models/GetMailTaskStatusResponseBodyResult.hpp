// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMAILTASKSTATUSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMAILTASKSTATUSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class GetMailTaskStatusResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMailTaskStatusResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(execTime, execTime_);
      DARABONBA_PTR_TO_JSON(mailId, mailId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMailTaskStatusResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(execTime, execTime_);
      DARABONBA_PTR_FROM_JSON(mailId, mailId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetMailTaskStatusResponseBodyResult() = default ;
    GetMailTaskStatusResponseBodyResult(const GetMailTaskStatusResponseBodyResult &) = default ;
    GetMailTaskStatusResponseBodyResult(GetMailTaskStatusResponseBodyResult &&) = default ;
    GetMailTaskStatusResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMailTaskStatusResponseBodyResult() = default ;
    GetMailTaskStatusResponseBodyResult& operator=(const GetMailTaskStatusResponseBodyResult &) = default ;
    GetMailTaskStatusResponseBodyResult& operator=(GetMailTaskStatusResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->execTime_ == nullptr
        && return this->mailId_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr; };
    // execTime Field Functions 
    bool hasExecTime() const { return this->execTime_ != nullptr;};
    void deleteExecTime() { this->execTime_ = nullptr;};
    inline string execTime() const { DARABONBA_PTR_GET_DEFAULT(execTime_, "") };
    inline GetMailTaskStatusResponseBodyResult& setExecTime(string execTime) { DARABONBA_PTR_SET_VALUE(execTime_, execTime) };


    // mailId Field Functions 
    bool hasMailId() const { return this->mailId_ != nullptr;};
    void deleteMailId() { this->mailId_ = nullptr;};
    inline string mailId() const { DARABONBA_PTR_GET_DEFAULT(mailId_, "") };
    inline GetMailTaskStatusResponseBodyResult& setMailId(string mailId) { DARABONBA_PTR_SET_VALUE(mailId_, mailId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMailTaskStatusResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetMailTaskStatusResponseBodyResult& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Execution time, in the format yyyy-MM-dd HH:mm:ss
    std::shared_ptr<string> execTime_ = nullptr;
    // Mail ID
    std::shared_ptr<string> mailId_ = nullptr;
    // Mail status. Possible values:
    // 
    // - Success: SENT
    // - Failure: FAILED 
    // - In Progress: PROCESSING
    std::shared_ptr<string> status_ = nullptr;
    // Task ID
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
