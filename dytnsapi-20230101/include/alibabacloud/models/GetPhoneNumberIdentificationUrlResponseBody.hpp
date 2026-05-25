// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHONENUMBERIDENTIFICATIONURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPHONENUMBERIDENTIFICATIONURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20230101
{
namespace Models
{
  class GetPhoneNumberIdentificationUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhoneNumberIdentificationUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhoneNumberIdentificationUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPhoneNumberIdentificationUrlResponseBody() = default ;
    GetPhoneNumberIdentificationUrlResponseBody(const GetPhoneNumberIdentificationUrlResponseBody &) = default ;
    GetPhoneNumberIdentificationUrlResponseBody(GetPhoneNumberIdentificationUrlResponseBody &&) = default ;
    GetPhoneNumberIdentificationUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhoneNumberIdentificationUrlResponseBody() = default ;
    GetPhoneNumberIdentificationUrlResponseBody& operator=(const GetPhoneNumberIdentificationUrlResponseBody &) = default ;
    GetPhoneNumberIdentificationUrlResponseBody& operator=(GetPhoneNumberIdentificationUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(IdentificationUrl, identificationUrl_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(IdentificationUrl, identificationUrl_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
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
      virtual bool empty() const override { return this->identificationUrl_ == nullptr
        && this->sessionId_ == nullptr; };
      // identificationUrl Field Functions 
      bool hasIdentificationUrl() const { return this->identificationUrl_ != nullptr;};
      void deleteIdentificationUrl() { this->identificationUrl_ = nullptr;};
      inline string getIdentificationUrl() const { DARABONBA_PTR_GET_DEFAULT(identificationUrl_, "") };
      inline Data& setIdentificationUrl(string identificationUrl) { DARABONBA_PTR_SET_VALUE(identificationUrl_, identificationUrl) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      // The verification URL.
      shared_ptr<string> identificationUrl_ {};
      // The session ID.
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPhoneNumberIdentificationUrlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPhoneNumberIdentificationUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPhoneNumberIdentificationUrlResponseBody::Data) };
    inline GetPhoneNumberIdentificationUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPhoneNumberIdentificationUrlResponseBody::Data) };
    inline GetPhoneNumberIdentificationUrlResponseBody& setData(const GetPhoneNumberIdentificationUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPhoneNumberIdentificationUrlResponseBody& setData(GetPhoneNumberIdentificationUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPhoneNumberIdentificationUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPhoneNumberIdentificationUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The return code. Valid values:
    // 
    // *   **OK**: The request is successful.
    // *   **IdentificationNotAvailable**: The verification system does not support the phone number that corresponds to the IP address.
    // *   **MobileNumberIllegal**: The format of the phone number is invalid.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetPhoneNumberIdentificationUrlResponseBody::Data> data_ {};
    // The description of the return code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20230101
#endif
