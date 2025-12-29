// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSTARTAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHSTARTAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BatchStartApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchStartApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchStartApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    BatchStartApplicationsResponseBody() = default ;
    BatchStartApplicationsResponseBody(const BatchStartApplicationsResponseBody &) = default ;
    BatchStartApplicationsResponseBody(BatchStartApplicationsResponseBody &&) = default ;
    BatchStartApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchStartApplicationsResponseBody() = default ;
    BatchStartApplicationsResponseBody& operator=(const BatchStartApplicationsResponseBody &) = default ;
    BatchStartApplicationsResponseBody& operator=(BatchStartApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
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
      virtual bool empty() const override { return this->changeOrderId_ == nullptr; };
      // changeOrderId Field Functions 
      bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
      void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
      inline string getChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
      inline Data& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    protected:
      // The HTTP status code. Valid values:
      // 
      // *   **2xx**: indicates that the request was successful.
      // *   **3xx**: indicates that the request was redirected.
      // *   **4xx**: indicates that the request was invalid.
      // *   **5xx**: indicates that a server error occurred.
      shared_ptr<string> changeOrderId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchStartApplicationsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BatchStartApplicationsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BatchStartApplicationsResponseBody::Data) };
    inline BatchStartApplicationsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BatchStartApplicationsResponseBody::Data) };
    inline BatchStartApplicationsResponseBody& setData(const BatchStartApplicationsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchStartApplicationsResponseBody& setData(BatchStartApplicationsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline BatchStartApplicationsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchStartApplicationsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchStartApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchStartApplicationsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline BatchStartApplicationsResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Take note of the following rules:
    // 
    // - **2xx**: The call was successful.
    // - **3xx**: The call was redirected.
    // - **4xx**: The call failed.
    // - **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The error code.
    // 
    // *   If the request is successful, this parameter is not returned.****
    // *   This parameter is returned only if the request failed.**** For more information, see **Error codes** in this topic.
    shared_ptr<BatchStartApplicationsResponseBody::Data> data_ {};
    // The error code returned if the request failed. Take note of the following rules:
    // 
    // - The ErrorCode parameter is not returned if the request succeeds.
    // - If the call fails, the ErrorCode parameter is returned. For more information, see the "Error codes" section of this topic.
    shared_ptr<string> errorCode_ {};
    // The returned data.
    shared_ptr<string> message_ {};
    // The ID of the trace. It is used to query the details of a request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the application deployment is successful. Take note of the following rules:
    // 
    // - **true**
    // - **false**
    shared_ptr<bool> success_ {};
    // The ID of the change order.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
