// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BANKMETAVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BANKMETAVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class BankMetaVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BankMetaVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, BankMetaVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    BankMetaVerifyResponseBody() = default ;
    BankMetaVerifyResponseBody(const BankMetaVerifyResponseBody &) = default ;
    BankMetaVerifyResponseBody(BankMetaVerifyResponseBody &&) = default ;
    BankMetaVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BankMetaVerifyResponseBody() = default ;
    BankMetaVerifyResponseBody& operator=(const BankMetaVerifyResponseBody &) = default ;
    BankMetaVerifyResponseBody& operator=(BankMetaVerifyResponseBody &&) = default ;
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
      // Verification result.
      // 
      // - 1: Consistent (billable)
      // - 2: Inconsistent (billable)
      // - 3: No record found (non-billable)
      shared_ptr<string> bizCode_ {};
      // Verification details:
      // 
      // - **101**: Verification passed.
      // - **201**: Authentication information does not match, cardholder information is incorrect.
      // - **202**: Authentication information does not match, bank card has not enabled authentication payment.
      // - **203**: Authentication information does not match, bank card has expired.
      // - **204**: Authentication information does not match, bank card is a restricted card.
      // - **205**: Authentication information does not match, this card has been confiscated.
      // - **206**: Authentication information does not match, bank card is invalid.
      // - **207**: Authentication information does not match, this card has no corresponding issuing bank.
      // - **208**: Authentication information does not match, the card is uninitialized or a dormant card.
      // - **209**: Authentication information does not match, this card is a cheating card or swallowed card.
      // - **210**: Authentication information does not match, this card has been reported lost.
      // - **211**: Authentication information does not match, the number of password errors exceeds the limit.
      // - **212**: Authentication information does not match, the issuing bank does not support this transaction.
      // - **213**: Authentication information does not match, the card status is abnormal or the card is invalid.
      // - **214**: Authentication information does not match, no mobile phone number reserved.
      // - **215**: Authentication information does not match, the entered password, expiration date, or CVN2 is incorrect.
      // - **216**: Authentication information does not match, other card anomalies.
      // - **301**: Unable to verify, the bank card does not support this service.
      // - **302**: Unable to verify, verification failed or the bank refused to verify, please contact the issuing bank.
      // - **303**: Unable to verify, the bank card does not currently support mobile phone number verification.
      // - **304**: Unable to verify, the bank card number is incorrect.
      // - **305**: Unable to verify, other reasons.
      // - **306**: Unable to verify, the number of verifications exceeds the limit.
      shared_ptr<string> subCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BankMetaVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BankMetaVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BankMetaVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const BankMetaVerifyResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, BankMetaVerifyResponseBody::ResultObject) };
    inline BankMetaVerifyResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, BankMetaVerifyResponseBody::ResultObject) };
    inline BankMetaVerifyResponseBody& setResultObject(const BankMetaVerifyResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline BankMetaVerifyResponseBody& setResultObject(BankMetaVerifyResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 for success, others for failure.
    shared_ptr<string> code_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned result information
    shared_ptr<BankMetaVerifyResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
