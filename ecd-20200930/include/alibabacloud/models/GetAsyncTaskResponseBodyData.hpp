// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASYNCTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETASYNCTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GetAsyncTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_TO_JSON(ConsumedProcess, consumedProcess_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalProcess, totalProcess_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_FROM_JSON(ConsumedProcess, consumedProcess_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalProcess, totalProcess_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetAsyncTaskResponseBodyData() = default ;
    GetAsyncTaskResponseBodyData(const GetAsyncTaskResponseBodyData &) = default ;
    GetAsyncTaskResponseBodyData(GetAsyncTaskResponseBodyData &&) = default ;
    GetAsyncTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsyncTaskResponseBodyData() = default ;
    GetAsyncTaskResponseBodyData& operator=(const GetAsyncTaskResponseBodyData &) = default ;
    GetAsyncTaskResponseBodyData& operator=(GetAsyncTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncTaskId_ != nullptr
        && this->consumedProcess_ != nullptr && this->errCode_ != nullptr && this->message_ != nullptr && this->status_ != nullptr && this->totalProcess_ != nullptr
        && this->url_ != nullptr; };
    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline string asyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
    inline GetAsyncTaskResponseBodyData& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


    // consumedProcess Field Functions 
    bool hasConsumedProcess() const { return this->consumedProcess_ != nullptr;};
    void deleteConsumedProcess() { this->consumedProcess_ = nullptr;};
    inline string consumedProcess() const { DARABONBA_PTR_GET_DEFAULT(consumedProcess_, "") };
    inline GetAsyncTaskResponseBodyData& setConsumedProcess(string consumedProcess) { DARABONBA_PTR_SET_VALUE(consumedProcess_, consumedProcess) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline int64_t errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, 0L) };
    inline GetAsyncTaskResponseBodyData& setErrCode(int64_t errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAsyncTaskResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAsyncTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalProcess Field Functions 
    bool hasTotalProcess() const { return this->totalProcess_ != nullptr;};
    void deleteTotalProcess() { this->totalProcess_ = nullptr;};
    inline int64_t totalProcess() const { DARABONBA_PTR_GET_DEFAULT(totalProcess_, 0L) };
    inline GetAsyncTaskResponseBodyData& setTotalProcess(int64_t totalProcess) { DARABONBA_PTR_SET_VALUE(totalProcess_, totalProcess) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetAsyncTaskResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The asynchronous task ID.
    std::shared_ptr<string> asyncTaskId_ = nullptr;
    // The total number of asynchronous tasks that are processed. Example: the number of files that are packaged and downloaded on the server.
    std::shared_ptr<string> consumedProcess_ = nullptr;
    // The error code of the asynchronous task.
    std::shared_ptr<int64_t> errCode_ = nullptr;
    // The error message of the asynchronous task.
    std::shared_ptr<string> message_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
    // The total number of asynchronous tasks to be processed, such as the amount of files to be downloaded and packaged on the server.
    std::shared_ptr<int64_t> totalProcess_ = nullptr;
    // The URL to download data generated by the asynchronous task. Example: the URL to package and download tasks on the server.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
