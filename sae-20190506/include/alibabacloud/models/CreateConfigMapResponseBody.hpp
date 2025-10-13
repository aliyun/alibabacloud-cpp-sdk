// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONFIGMAPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECONFIGMAPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateConfigMapResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateConfigMapResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConfigMapResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConfigMapResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    CreateConfigMapResponseBody() = default ;
    CreateConfigMapResponseBody(const CreateConfigMapResponseBody &) = default ;
    CreateConfigMapResponseBody(CreateConfigMapResponseBody &&) = default ;
    CreateConfigMapResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConfigMapResponseBody() = default ;
    CreateConfigMapResponseBody& operator=(const CreateConfigMapResponseBody &) = default ;
    CreateConfigMapResponseBody& operator=(CreateConfigMapResponseBody &&) = default ;
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
    inline CreateConfigMapResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateConfigMapResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateConfigMapResponseBodyData) };
    inline CreateConfigMapResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateConfigMapResponseBodyData) };
    inline CreateConfigMapResponseBody& setData(const CreateConfigMapResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateConfigMapResponseBody& setData(CreateConfigMapResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateConfigMapResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateConfigMapResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateConfigMapResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateConfigMapResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CreateConfigMapResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // Empty
    std::shared_ptr<string> code_ = nullptr;
    // The trace ID that is used to query the details of the request.
    std::shared_ptr<CreateConfigMapResponseBodyData> data_ = nullptr;
    // The ID of the ConfigMap that was created.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> message_ = nullptr;
    // The returned data.
    std::shared_ptr<string> requestId_ = nullptr;
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    std::shared_ptr<bool> success_ = nullptr;
    // The returned message.
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
