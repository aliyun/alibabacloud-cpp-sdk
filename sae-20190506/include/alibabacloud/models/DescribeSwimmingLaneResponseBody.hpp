// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESWIMMINGLANERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESWIMMINGLANERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSwimmingLaneResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeSwimmingLaneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSwimmingLaneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSwimmingLaneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeSwimmingLaneResponseBody() = default ;
    DescribeSwimmingLaneResponseBody(const DescribeSwimmingLaneResponseBody &) = default ;
    DescribeSwimmingLaneResponseBody(DescribeSwimmingLaneResponseBody &&) = default ;
    DescribeSwimmingLaneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSwimmingLaneResponseBody() = default ;
    DescribeSwimmingLaneResponseBody& operator=(const DescribeSwimmingLaneResponseBody &) = default ;
    DescribeSwimmingLaneResponseBody& operator=(DescribeSwimmingLaneResponseBody &&) = default ;
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
    inline DescribeSwimmingLaneResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSwimmingLaneResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeSwimmingLaneResponseBodyData) };
    inline DescribeSwimmingLaneResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeSwimmingLaneResponseBodyData) };
    inline DescribeSwimmingLaneResponseBody& setData(const DescribeSwimmingLaneResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSwimmingLaneResponseBody& setData(DescribeSwimmingLaneResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeSwimmingLaneResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSwimmingLaneResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSwimmingLaneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSwimmingLaneResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeSwimmingLaneResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code or the error code. Valid values:
    // 
    // *   **2xx**: The request was successful.
    // *   **3xx**: The request was redirected.
    // *   **4xx**: The request failed.
    // *   **5xx**: A server error occurred.
    std::shared_ptr<string> code_ = nullptr;
    // Responses.
    std::shared_ptr<DescribeSwimmingLaneResponseBodyData> data_ = nullptr;
    // The status code. Value values:
    // 
    // *   If the request was successful, **ErrorCode** is not returned.
    // *   If the request failed, **ErrorCode** is returned. For more information, see **Error codes** in this topic.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The returned message. Valid values:
    // 
    // *   The error message returned because the request is normal and **success** is returned.
    // *   If the request is abnormal, the specific exception error code is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: Valid values:
    // 
    // *   **true**: The information was queried.
    // *   **false**: Query failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The ID of the trace. This parameter is used to query the exact call information.
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
