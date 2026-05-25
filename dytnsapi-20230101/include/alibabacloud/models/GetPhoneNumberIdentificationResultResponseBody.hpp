// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHONENUMBERIDENTIFICATIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPHONENUMBERIDENTIFICATIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20230101
{
namespace Models
{
  class GetPhoneNumberIdentificationResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhoneNumberIdentificationResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhoneNumberIdentificationResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPhoneNumberIdentificationResultResponseBody() = default ;
    GetPhoneNumberIdentificationResultResponseBody(const GetPhoneNumberIdentificationResultResponseBody &) = default ;
    GetPhoneNumberIdentificationResultResponseBody(GetPhoneNumberIdentificationResultResponseBody &&) = default ;
    GetPhoneNumberIdentificationResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhoneNumberIdentificationResultResponseBody() = default ;
    GetPhoneNumberIdentificationResultResponseBody& operator=(const GetPhoneNumberIdentificationResultResponseBody &) = default ;
    GetPhoneNumberIdentificationResultResponseBody& operator=(GetPhoneNumberIdentificationResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(IsIdentified, isIdentified_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(IsIdentified, isIdentified_);
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
      virtual bool empty() const override { return this->isIdentified_ == nullptr; };
      // isIdentified Field Functions 
      bool hasIsIdentified() const { return this->isIdentified_ != nullptr;};
      void deleteIsIdentified() { this->isIdentified_ = nullptr;};
      inline string getIsIdentified() const { DARABONBA_PTR_GET_DEFAULT(isIdentified_, "") };
      inline Data& setIsIdentified(string isIdentified) { DARABONBA_PTR_SET_VALUE(isIdentified_, isIdentified) };


    protected:
      // Indicates whether the phone number passed the verification.
      shared_ptr<string> isIdentified_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPhoneNumberIdentificationResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPhoneNumberIdentificationResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPhoneNumberIdentificationResultResponseBody::Data) };
    inline GetPhoneNumberIdentificationResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPhoneNumberIdentificationResultResponseBody::Data) };
    inline GetPhoneNumberIdentificationResultResponseBody& setData(const GetPhoneNumberIdentificationResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPhoneNumberIdentificationResultResponseBody& setData(GetPhoneNumberIdentificationResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPhoneNumberIdentificationResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPhoneNumberIdentificationResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The return code. Valid values:
    // 
    // *   OK: The request is successful.
    // *   NoIdentificationResult: No verification result is available or the verification failed.
    // *   SessionNotValid: The session is invalid or expired.
    // *   MobileNumberIllegal: The format of the phone number is invalid.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetPhoneNumberIdentificationResultResponseBody::Data> data_ {};
    // The description of the return code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20230101
#endif
