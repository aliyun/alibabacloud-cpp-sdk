// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELOUTPUTCONTENTDETECTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODELOUTPUTCONTENTDETECTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModelOutputContentDetectResultResponseBodyDetectResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetModelOutputContentDetectResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelOutputContentDetectResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DetectResultList, detectResultList_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ProcessedCount, processedCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelOutputContentDetectResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DetectResultList, detectResultList_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ProcessedCount, processedCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetModelOutputContentDetectResultResponseBody() = default ;
    GetModelOutputContentDetectResultResponseBody(const GetModelOutputContentDetectResultResponseBody &) = default ;
    GetModelOutputContentDetectResultResponseBody(GetModelOutputContentDetectResultResponseBody &&) = default ;
    GetModelOutputContentDetectResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelOutputContentDetectResultResponseBody() = default ;
    GetModelOutputContentDetectResultResponseBody& operator=(const GetModelOutputContentDetectResultResponseBody &) = default ;
    GetModelOutputContentDetectResultResponseBody& operator=(GetModelOutputContentDetectResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->detectResultList_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->processedCount_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr && return this->taskId_ == nullptr && return this->taskStatus_ == nullptr && return this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetModelOutputContentDetectResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // detectResultList Field Functions 
    bool hasDetectResultList() const { return this->detectResultList_ != nullptr;};
    void deleteDetectResultList() { this->detectResultList_ = nullptr;};
    inline const vector<GetModelOutputContentDetectResultResponseBodyDetectResultList> & detectResultList() const { DARABONBA_PTR_GET_CONST(detectResultList_, vector<GetModelOutputContentDetectResultResponseBodyDetectResultList>) };
    inline vector<GetModelOutputContentDetectResultResponseBodyDetectResultList> detectResultList() { DARABONBA_PTR_GET(detectResultList_, vector<GetModelOutputContentDetectResultResponseBodyDetectResultList>) };
    inline GetModelOutputContentDetectResultResponseBody& setDetectResultList(const vector<GetModelOutputContentDetectResultResponseBodyDetectResultList> & detectResultList) { DARABONBA_PTR_SET_VALUE(detectResultList_, detectResultList) };
    inline GetModelOutputContentDetectResultResponseBody& setDetectResultList(vector<GetModelOutputContentDetectResultResponseBodyDetectResultList> && detectResultList) { DARABONBA_PTR_SET_RVALUE(detectResultList_, detectResultList) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetModelOutputContentDetectResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetModelOutputContentDetectResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // processedCount Field Functions 
    bool hasProcessedCount() const { return this->processedCount_ != nullptr;};
    void deleteProcessedCount() { this->processedCount_ = nullptr;};
    inline int32_t processedCount() const { DARABONBA_PTR_GET_DEFAULT(processedCount_, 0) };
    inline GetModelOutputContentDetectResultResponseBody& setProcessedCount(int32_t processedCount) { DARABONBA_PTR_SET_VALUE(processedCount_, processedCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelOutputContentDetectResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetModelOutputContentDetectResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetModelOutputContentDetectResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline GetModelOutputContentDetectResultResponseBody& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetModelOutputContentDetectResultResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Status code, 00000 indicates success; others indicate failure.
    std::shared_ptr<string> code_ = nullptr;
    // List of detection result objects
    std::shared_ptr<vector<GetModelOutputContentDetectResultResponseBodyDetectResultList>> detectResultList_ = nullptr;
    // HTTP status code
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // Error message.
    std::shared_ptr<string> message_ = nullptr;
    // Number of processed items in the task.
    std::shared_ptr<int32_t> processedCount_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Whether the operation was successful. true indicates success, false indicates failure.
    std::shared_ptr<bool> success_ = nullptr;
    // Task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // Task processing status:
    // 0: Queued
    // 1: Processing
    // 2: Completed
    // 3: Failed
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    // Total number of items
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
