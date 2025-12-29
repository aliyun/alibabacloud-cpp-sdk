// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMPIPELINEBATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMPIPELINEBATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ConfirmPipelineBatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmPipelineBatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmPipelineBatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ConfirmPipelineBatchResponseBody() = default ;
    ConfirmPipelineBatchResponseBody(const ConfirmPipelineBatchResponseBody &) = default ;
    ConfirmPipelineBatchResponseBody(ConfirmPipelineBatchResponseBody &&) = default ;
    ConfirmPipelineBatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmPipelineBatchResponseBody() = default ;
    ConfirmPipelineBatchResponseBody& operator=(const ConfirmPipelineBatchResponseBody &) = default ;
    ConfirmPipelineBatchResponseBody& operator=(ConfirmPipelineBatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
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
      virtual bool empty() const override { return this->pipelineId_ == nullptr; };
      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline Data& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    protected:
      // The ID of the batch.
      shared_ptr<string> pipelineId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ConfirmPipelineBatchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ConfirmPipelineBatchResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ConfirmPipelineBatchResponseBody::Data) };
    inline ConfirmPipelineBatchResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ConfirmPipelineBatchResponseBody::Data) };
    inline ConfirmPipelineBatchResponseBody& setData(const ConfirmPipelineBatchResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ConfirmPipelineBatchResponseBody& setData(ConfirmPipelineBatchResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ConfirmPipelineBatchResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ConfirmPipelineBatchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConfirmPipelineBatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ConfirmPipelineBatchResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ConfirmPipelineBatchResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: indicates that the request was successful.
    // *   **3xx**: indicates that the request was redirected.
    // *   **4xx**: indicates that the request was invalid.
    // *   **5xx**: indicates that a server error occurred.
    shared_ptr<string> code_ {};
    // The batch information.
    shared_ptr<ConfirmPipelineBatchResponseBody::Data> data_ {};
    // The error code.
    // 
    // *   The **ErrorCode** parameter is not returned when the request succeeds.
    // *   The **ErrorCode** parameter is returned when the request fails. For more information, see **Error codes** in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the processing of the next batch started as required. Valid values:
    // 
    // *   **true**: The processing started.
    // *   **false**: The processing could not start.
    shared_ptr<bool> success_ {};
    // The ID of the trace. It is used to query the details of a request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
