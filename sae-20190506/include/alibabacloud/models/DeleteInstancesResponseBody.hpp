// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteInstancesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DeleteInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DeleteInstancesResponseBody() = default ;
    DeleteInstancesResponseBody(const DeleteInstancesResponseBody &) = default ;
    DeleteInstancesResponseBody(DeleteInstancesResponseBody &&) = default ;
    DeleteInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstancesResponseBody() = default ;
    DeleteInstancesResponseBody& operator=(const DeleteInstancesResponseBody &) = default ;
    DeleteInstancesResponseBody& operator=(DeleteInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->errorCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteInstancesResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DeleteInstancesResponseBodyData) };
    inline DeleteInstancesResponseBodyData data() { DARABONBA_PTR_GET(data_, DeleteInstancesResponseBodyData) };
    inline DeleteInstancesResponseBody& setData(const DeleteInstancesResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteInstancesResponseBody& setData(DeleteInstancesResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DeleteInstancesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DeleteInstancesResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code or the error code. Valid values:
    // 
    // *   **2xx**: The request was successful.
    // *   **3xx**: The request was redirected.
    // *   **4xx**: The request failed.
    // *   **5xx**: A server error occurred.
    std::shared_ptr<string> code_ = nullptr;
    // Responses.
    std::shared_ptr<DeleteInstancesResponseBodyData> data_ = nullptr;
    // Error code. Valid values:
    // 
    // *   If the request was successful, **ErrorCode** is not returned.
    // *   If the request failed, **ErrorCode** is returned. For more information, see **Error codes** in this topic.
    std::shared_ptr<string> errorCode_ = nullptr;
    // Additional information about the call result. Valid values:
    // 
    // *   If the request is normal, success is returned.
    // *   If the request is abnormal, the specific exception error code is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Whether the instance is deleted successfully. Valid values:
    // 
    // *   **true**: The namespace was deleted.
    // *   **false**: The namespace failed to be deleted.
    std::shared_ptr<bool> success_ = nullptr;
    // The ID of the trace. This parameter is used to query the exact call information.
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
