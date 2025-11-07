// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BANKMETAVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_BANKMETAVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class BankMetaVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BankMetaVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
    };
    friend void from_json(const Darabonba::Json& j, BankMetaVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
    };
    BankMetaVerifyResponseBodyResultObject() = default ;
    BankMetaVerifyResponseBodyResultObject(const BankMetaVerifyResponseBodyResultObject &) = default ;
    BankMetaVerifyResponseBodyResultObject(BankMetaVerifyResponseBodyResultObject &&) = default ;
    BankMetaVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BankMetaVerifyResponseBodyResultObject() = default ;
    BankMetaVerifyResponseBodyResultObject& operator=(const BankMetaVerifyResponseBodyResultObject &) = default ;
    BankMetaVerifyResponseBodyResultObject& operator=(BankMetaVerifyResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && return this->subCode_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline BankMetaVerifyResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline BankMetaVerifyResponseBodyResultObject& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


  protected:
    // Verification result.
    // 
    // - 1: Consistent (billable)
    // - 2: Inconsistent (billable)
    // - 3: No record found (non-billable)
    std::shared_ptr<string> bizCode_ = nullptr;
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
    std::shared_ptr<string> subCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
