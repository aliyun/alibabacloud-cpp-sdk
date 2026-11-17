// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BANKMETAVERIFYINTLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BANKMETAVERIFYINTLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class BankMetaVerifyIntlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BankMetaVerifyIntlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, BankMetaVerifyIntlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    BankMetaVerifyIntlResponseBody() = default ;
    BankMetaVerifyIntlResponseBody(const BankMetaVerifyIntlResponseBody &) = default ;
    BankMetaVerifyIntlResponseBody(BankMetaVerifyIntlResponseBody &&) = default ;
    BankMetaVerifyIntlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BankMetaVerifyIntlResponseBody() = default ;
    BankMetaVerifyIntlResponseBody& operator=(const BankMetaVerifyIntlResponseBody &) = default ;
    BankMetaVerifyIntlResponseBody& operator=(BankMetaVerifyIntlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->subCode_ == nullptr; };
      // bizCode Field Functions 
      bool hasBizCode() const { return this->bizCode_ != nullptr;};
      void deleteBizCode() { this->bizCode_ = nullptr;};
      inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
      inline ResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


      // subCode Field Functions 
      bool hasSubCode() const { return this->subCode_ != nullptr;};
      void deleteSubCode() { this->subCode_ = nullptr;};
      inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
      inline ResultObject& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    protected:
      // The verification result code. Valid values:
      // - 1: The verification is consistent. You are billed for this call.
      // - 2: The verification is inconsistent. You are billed for this call.
      // - 3: No record is found. You are not billed for this call.
      shared_ptr<string> bizCode_ {};
      // The verification details. Valid values:
      // 
      // - **101**: The verification is successful.
      // - **201**: The authentication information is inconsistent. The cardholder information is incorrect.
      // - **202**: The authentication information is inconsistent. The bank card is not enabled for authenticated payment.
      // - **203**: The authentication information is inconsistent. The bank card has expired.
      // - **204**: The authentication information is inconsistent. The bank card is restricted.
      // - **205**: The authentication information is inconsistent. The bank card has been confiscated.
      // - **206**: The authentication information is inconsistent. The bank card is invalid.
      // - **207**: The authentication information is inconsistent. The bank card has no corresponding issuing bank.
      // - **208**: The authentication information is inconsistent. The bank card is not initialized or is a dormant card.
      // - **209**: The authentication information is inconsistent. The bank card is a fraudulent or captured card.
      // - **210**: The authentication information is inconsistent. The bank card has been reported as lost.
      // - **211**: The authentication information is inconsistent. The number of incorrect password attempts has exceeded the limit.
      // - **212**: The authentication information is inconsistent. The issuing bank does not support this transaction.
      // - **213**: The authentication information is inconsistent. The card status is abnormal or the card is invalid.
      // - **214**: The authentication information is inconsistent. No mobile phone number is reserved.
      // - **215**: The authentication information is inconsistent. The entered password, expiration date, or CVN2 is incorrect.
      // - **216**: The authentication information is inconsistent. Other card exceptions occurred.
      // - **301**: The verification cannot be performed. The bank card does not support this service.
      // - **302**: The verification cannot be performed. The verification failed or the bank rejected the verification. Contact the issuing bank.
      // - **303**: The verification cannot be performed. The bank card does not support mobile phone number verification.
      // - **304**: The verification cannot be performed. The bank card number is incorrect.
      // - **305**: The verification cannot be performed. Other reasons.
      // - **306**: The verification cannot be performed. The number of verification attempts has exceeded the limit.
      shared_ptr<string> subCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BankMetaVerifyIntlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BankMetaVerifyIntlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BankMetaVerifyIntlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const BankMetaVerifyIntlResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, BankMetaVerifyIntlResponseBody::ResultObject) };
    inline BankMetaVerifyIntlResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, BankMetaVerifyIntlResponseBody::ResultObject) };
    inline BankMetaVerifyIntlResponseBody& setResultObject(const BankMetaVerifyIntlResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline BankMetaVerifyIntlResponseBody& setResultObject(BankMetaVerifyIntlResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // The return code. A value of 200 indicates success, and other values indicate failure.
    shared_ptr<string> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result information.
    shared_ptr<BankMetaVerifyIntlResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
