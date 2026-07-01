// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEDEPLOYMENTDRAFTASYNCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEDEPLOYMENTDRAFTASYNCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ValidateDeploymentDraftAsyncResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateDeploymentDraftAsyncResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateDeploymentDraftAsyncResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ValidateDeploymentDraftAsyncResponseBody() = default ;
    ValidateDeploymentDraftAsyncResponseBody(const ValidateDeploymentDraftAsyncResponseBody &) = default ;
    ValidateDeploymentDraftAsyncResponseBody(ValidateDeploymentDraftAsyncResponseBody &&) = default ;
    ValidateDeploymentDraftAsyncResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateDeploymentDraftAsyncResponseBody() = default ;
    ValidateDeploymentDraftAsyncResponseBody& operator=(const ValidateDeploymentDraftAsyncResponseBody &) = default ;
    ValidateDeploymentDraftAsyncResponseBody& operator=(ValidateDeploymentDraftAsyncResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ticketId, ticketId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ticketId, ticketId_);
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
      virtual bool empty() const override { return this->ticketId_ == nullptr; };
      // ticketId Field Functions 
      bool hasTicketId() const { return this->ticketId_ != nullptr;};
      void deleteTicketId() { this->ticketId_ = nullptr;};
      inline string getTicketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
      inline Data& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    protected:
      // The ID of the asynchronous ticket. Use this ID to query the result of the asynchronous operation.
      shared_ptr<string> ticketId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ValidateDeploymentDraftAsyncResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ValidateDeploymentDraftAsyncResponseBody::Data) };
    inline ValidateDeploymentDraftAsyncResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ValidateDeploymentDraftAsyncResponseBody::Data) };
    inline ValidateDeploymentDraftAsyncResponseBody& setData(const ValidateDeploymentDraftAsyncResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ValidateDeploymentDraftAsyncResponseBody& setData(ValidateDeploymentDraftAsyncResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ValidateDeploymentDraftAsyncResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ValidateDeploymentDraftAsyncResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ValidateDeploymentDraftAsyncResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateDeploymentDraftAsyncResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ValidateDeploymentDraftAsyncResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response data.
    shared_ptr<ValidateDeploymentDraftAsyncResponseBody::Data> data_ {};
    // The error code. This parameter is returned when the request fails. If the request is successful, this parameter is empty.
    shared_ptr<string> errorCode_ {};
    // The error message. This parameter is returned when the request fails. If the request is successful, this parameter is empty.
    shared_ptr<string> errorMessage_ {};
    // The status code. This is always 200. Use the success parameter to determine if the request was successful.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
