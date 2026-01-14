// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREATELOGOTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCREATELOGOTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetCreateLogoTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCreateLogoTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, GetCreateLogoTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    GetCreateLogoTaskResponseBody() = default ;
    GetCreateLogoTaskResponseBody(const GetCreateLogoTaskResponseBody &) = default ;
    GetCreateLogoTaskResponseBody(GetCreateLogoTaskResponseBody &&) = default ;
    GetCreateLogoTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCreateLogoTaskResponseBody() = default ;
    GetCreateLogoTaskResponseBody& operator=(const GetCreateLogoTaskResponseBody &) = default ;
    GetCreateLogoTaskResponseBody& operator=(GetCreateLogoTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Task : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Task& obj) { 
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(Urls, urls_);
      };
      friend void from_json(const Darabonba::Json& j, Task& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(Urls, urls_);
      };
      Task() = default ;
      Task(const Task &) = default ;
      Task(Task &&) = default ;
      Task(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Task() = default ;
      Task& operator=(const Task &) = default ;
      Task& operator=(Task &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->taskId_ == nullptr
        && this->taskStatus_ == nullptr && this->urls_ == nullptr; };
      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Task& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Task& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // urls Field Functions 
      bool hasUrls() const { return this->urls_ != nullptr;};
      void deleteUrls() { this->urls_ = nullptr;};
      inline const vector<string> & getUrls() const { DARABONBA_PTR_GET_CONST(urls_, vector<string>) };
      inline vector<string> getUrls() { DARABONBA_PTR_GET(urls_, vector<string>) };
      inline Task& setUrls(const vector<string> & urls) { DARABONBA_PTR_SET_VALUE(urls_, urls) };
      inline Task& setUrls(vector<string> && urls) { DARABONBA_PTR_SET_RVALUE(urls_, urls) };


    protected:
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskStatus_ {};
      shared_ptr<vector<string>> urls_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->task_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetCreateLogoTaskResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetCreateLogoTaskResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCreateLogoTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCreateLogoTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const GetCreateLogoTaskResponseBody::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, GetCreateLogoTaskResponseBody::Task) };
    inline GetCreateLogoTaskResponseBody::Task getTask() { DARABONBA_PTR_GET(task_, GetCreateLogoTaskResponseBody::Task) };
    inline GetCreateLogoTaskResponseBody& setTask(const GetCreateLogoTaskResponseBody::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline GetCreateLogoTaskResponseBody& setTask(GetCreateLogoTaskResponseBody::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<GetCreateLogoTaskResponseBody::Task> task_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
