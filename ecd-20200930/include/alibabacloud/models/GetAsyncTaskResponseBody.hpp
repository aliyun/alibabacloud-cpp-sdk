// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASYNCTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASYNCTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GetAsyncTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsyncTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsyncTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAsyncTaskResponseBody() = default ;
    GetAsyncTaskResponseBody(const GetAsyncTaskResponseBody &) = default ;
    GetAsyncTaskResponseBody(GetAsyncTaskResponseBody &&) = default ;
    GetAsyncTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsyncTaskResponseBody() = default ;
    GetAsyncTaskResponseBody& operator=(const GetAsyncTaskResponseBody &) = default ;
    GetAsyncTaskResponseBody& operator=(GetAsyncTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
        DARABONBA_PTR_TO_JSON(ConsumedProcess, consumedProcess_);
        DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalProcess, totalProcess_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
        DARABONBA_PTR_FROM_JSON(ConsumedProcess, consumedProcess_);
        DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalProcess, totalProcess_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asyncTaskId_ == nullptr
        && this->consumedProcess_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->status_ == nullptr && this->totalProcess_ == nullptr
        && this->url_ == nullptr; };
      // asyncTaskId Field Functions 
      bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
      void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
      inline string getAsyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
      inline Data& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


      // consumedProcess Field Functions 
      bool hasConsumedProcess() const { return this->consumedProcess_ != nullptr;};
      void deleteConsumedProcess() { this->consumedProcess_ = nullptr;};
      inline string getConsumedProcess() const { DARABONBA_PTR_GET_DEFAULT(consumedProcess_, "") };
      inline Data& setConsumedProcess(string consumedProcess) { DARABONBA_PTR_SET_VALUE(consumedProcess_, consumedProcess) };


      // errCode Field Functions 
      bool hasErrCode() const { return this->errCode_ != nullptr;};
      void deleteErrCode() { this->errCode_ = nullptr;};
      inline int64_t getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, 0L) };
      inline Data& setErrCode(int64_t errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalProcess Field Functions 
      bool hasTotalProcess() const { return this->totalProcess_ != nullptr;};
      void deleteTotalProcess() { this->totalProcess_ = nullptr;};
      inline int64_t getTotalProcess() const { DARABONBA_PTR_GET_DEFAULT(totalProcess_, 0L) };
      inline Data& setTotalProcess(int64_t totalProcess) { DARABONBA_PTR_SET_VALUE(totalProcess_, totalProcess) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The asynchronous task ID.
      shared_ptr<string> asyncTaskId_ {};
      // The total number of asynchronous tasks that are processed. Example: the number of files that are packaged and downloaded on the server.
      shared_ptr<string> consumedProcess_ {};
      // The error code of the asynchronous task.
      shared_ptr<int64_t> errCode_ {};
      // The error message of the asynchronous task.
      shared_ptr<string> message_ {};
      // The task status.
      // 
      // Valid values:
      // 
      // *   Failed: The task failed.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Running: The task was running.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   PartialSucceed: The task did not completely succeed.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Succeed: The task succeeded.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> status_ {};
      // The total number of asynchronous tasks to be processed, such as the amount of files to be downloaded and packaged on the server.
      shared_ptr<int64_t> totalProcess_ {};
      // The URL to download data generated by the asynchronous task. Example: the URL to package and download tasks on the server.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAsyncTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAsyncTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAsyncTaskResponseBody::Data) };
    inline GetAsyncTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAsyncTaskResponseBody::Data) };
    inline GetAsyncTaskResponseBody& setData(const GetAsyncTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAsyncTaskResponseBody& setData(GetAsyncTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAsyncTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetAsyncTaskResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The operation result. If the request was successful, a success message is returned. If the request failed, an error message is returned.
    shared_ptr<string> code_ {};
    // The data information.
    shared_ptr<GetAsyncTaskResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
