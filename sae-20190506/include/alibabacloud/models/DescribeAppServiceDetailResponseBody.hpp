// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSERVICEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSERVICEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAppServiceDetailResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeAppServiceDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppServiceDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppServiceDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeAppServiceDetailResponseBody() = default ;
    DescribeAppServiceDetailResponseBody(const DescribeAppServiceDetailResponseBody &) = default ;
    DescribeAppServiceDetailResponseBody(DescribeAppServiceDetailResponseBody &&) = default ;
    DescribeAppServiceDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppServiceDetailResponseBody() = default ;
    DescribeAppServiceDetailResponseBody& operator=(const DescribeAppServiceDetailResponseBody &) = default ;
    DescribeAppServiceDetailResponseBody& operator=(DescribeAppServiceDetailResponseBody &&) = default ;
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
    inline DescribeAppServiceDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAppServiceDetailResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeAppServiceDetailResponseBodyData) };
    inline DescribeAppServiceDetailResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeAppServiceDetailResponseBodyData) };
    inline DescribeAppServiceDetailResponseBody& setData(const DescribeAppServiceDetailResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAppServiceDetailResponseBody& setData(DescribeAppServiceDetailResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeAppServiceDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAppServiceDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppServiceDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAppServiceDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeAppServiceDetailResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // - **2xx**: indicates that the call was successful.
    // - **3xx**: indicates that the call was redirected.
    // - **4xx**: indicates that the call failed.
    // - **5xx**: indicates that a server error occurred.
    std::shared_ptr<string> code_ = nullptr;
    // The data that is returned.
    std::shared_ptr<DescribeAppServiceDetailResponseBodyData> data_ = nullptr;
    // The returned error code. Valid values:
    // 
    // - If the call is successful, the **ErrorCode** parameter is not returned.
    // - If the call fails, the **ErrorCode** parameter is returned. For more information, see the "**Error codes**" section of this topic.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The returned information.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the meta data was obtained. Valid values:
    // 
    // *   **true**: The metadata was obtained.
    // *   **false**: The metadata failed to be obtained.
    std::shared_ptr<bool> success_ = nullptr;
    // The ID of the trace. The ID is used to query the details of a request.
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
