// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePickUpWaybillResponseBody() = default ;
    CreatePickUpWaybillResponseBody(const CreatePickUpWaybillResponseBody &) = default ;
    CreatePickUpWaybillResponseBody(CreatePickUpWaybillResponseBody &&) = default ;
    CreatePickUpWaybillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillResponseBody() = default ;
    CreatePickUpWaybillResponseBody& operator=(const CreatePickUpWaybillResponseBody &) = default ;
    CreatePickUpWaybillResponseBody& operator=(CreatePickUpWaybillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CpCode, cpCode_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(GotCode, gotCode_);
        DARABONBA_PTR_TO_JSON(MailNo, mailNo_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CpCode, cpCode_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(GotCode, gotCode_);
        DARABONBA_PTR_FROM_JSON(MailNo, mailNo_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->cpCode_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->gotCode_ == nullptr && this->mailNo_ == nullptr && this->success_ == nullptr; };
      // cpCode Field Functions 
      bool hasCpCode() const { return this->cpCode_ != nullptr;};
      void deleteCpCode() { this->cpCode_ = nullptr;};
      inline string getCpCode() const { DARABONBA_PTR_GET_DEFAULT(cpCode_, "") };
      inline Data& setCpCode(string cpCode) { DARABONBA_PTR_SET_VALUE(cpCode_, cpCode) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Data& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // gotCode Field Functions 
      bool hasGotCode() const { return this->gotCode_ != nullptr;};
      void deleteGotCode() { this->gotCode_ = nullptr;};
      inline string getGotCode() const { DARABONBA_PTR_GET_DEFAULT(gotCode_, "") };
      inline Data& setGotCode(string gotCode) { DARABONBA_PTR_SET_VALUE(gotCode_, gotCode) };


      // mailNo Field Functions 
      bool hasMailNo() const { return this->mailNo_ != nullptr;};
      void deleteMailNo() { this->mailNo_ = nullptr;};
      inline string getMailNo() const { DARABONBA_PTR_GET_DEFAULT(mailNo_, "") };
      inline Data& setMailNo(string mailNo) { DARABONBA_PTR_SET_VALUE(mailNo_, mailNo) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
      inline Data& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The express delivery company code.
      shared_ptr<string> cpCode_ {};
      // The error code.
      shared_ptr<string> errorCode_ {};
      // The error message.
      shared_ptr<string> errorMsg_ {};
      // The pickup code.
      shared_ptr<string> gotCode_ {};
      // The waybill number.
      shared_ptr<string> mailNo_ {};
      // Indicates whether the API call is successful.
      shared_ptr<string> success_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreatePickUpWaybillResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreatePickUpWaybillResponseBody::Data) };
    inline CreatePickUpWaybillResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreatePickUpWaybillResponseBody::Data) };
    inline CreatePickUpWaybillResponseBody& setData(const CreatePickUpWaybillResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreatePickUpWaybillResponseBody& setData(CreatePickUpWaybillResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreatePickUpWaybillResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreatePickUpWaybillResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePickUpWaybillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response data.
    shared_ptr<CreatePickUpWaybillResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
