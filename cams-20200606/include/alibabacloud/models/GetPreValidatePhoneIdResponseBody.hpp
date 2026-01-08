// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPREVALIDATEPHONEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPREVALIDATEPHONEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetPreValidatePhoneIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPreValidatePhoneIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPreValidatePhoneIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPreValidatePhoneIdResponseBody() = default ;
    GetPreValidatePhoneIdResponseBody(const GetPreValidatePhoneIdResponseBody &) = default ;
    GetPreValidatePhoneIdResponseBody(GetPreValidatePhoneIdResponseBody &&) = default ;
    GetPreValidatePhoneIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPreValidatePhoneIdResponseBody() = default ;
    GetPreValidatePhoneIdResponseBody& operator=(const GetPreValidatePhoneIdResponseBody &) = default ;
    GetPreValidatePhoneIdResponseBody& operator=(GetPreValidatePhoneIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(PhoneNumberId, phoneNumberId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(PhoneNumberId, phoneNumberId_);
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
      virtual bool empty() const override { return this->phoneNumber_ == nullptr
        && this->phoneNumberId_ == nullptr; };
      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Data& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // phoneNumberId Field Functions 
      bool hasPhoneNumberId() const { return this->phoneNumberId_ != nullptr;};
      void deletePhoneNumberId() { this->phoneNumberId_ = nullptr;};
      inline string getPhoneNumberId() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberId_, "") };
      inline Data& setPhoneNumberId(string phoneNumberId) { DARABONBA_PTR_SET_VALUE(phoneNumberId_, phoneNumberId) };


    protected:
      // The phone number.
      shared_ptr<string> phoneNumber_ {};
      // The ID of the phone number.
      shared_ptr<string> phoneNumberId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPreValidatePhoneIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPreValidatePhoneIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPreValidatePhoneIdResponseBody::Data) };
    inline GetPreValidatePhoneIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPreValidatePhoneIdResponseBody::Data) };
    inline GetPreValidatePhoneIdResponseBody& setData(const GetPreValidatePhoneIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPreValidatePhoneIdResponseBody& setData(GetPreValidatePhoneIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPreValidatePhoneIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPreValidatePhoneIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   For more information about other response codes, see [Error codes](https://www.alibabacloud.com/help/zh/cams/latest/api-error-codes).
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetPreValidatePhoneIdResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
