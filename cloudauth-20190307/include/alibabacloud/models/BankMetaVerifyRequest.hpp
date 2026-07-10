// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BANKMETAVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BANKMETAVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class BankMetaVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BankMetaVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BankCard, bankCard_);
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VerifyMode, verifyMode_);
    };
    friend void from_json(const Darabonba::Json& j, BankMetaVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BankCard, bankCard_);
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VerifyMode, verifyMode_);
    };
    BankMetaVerifyRequest() = default ;
    BankMetaVerifyRequest(const BankMetaVerifyRequest &) = default ;
    BankMetaVerifyRequest(BankMetaVerifyRequest &&) = default ;
    BankMetaVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BankMetaVerifyRequest() = default ;
    BankMetaVerifyRequest& operator=(const BankMetaVerifyRequest &) = default ;
    BankMetaVerifyRequest& operator=(BankMetaVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bankCard_ == nullptr
        && this->identifyNum_ == nullptr && this->identityType_ == nullptr && this->mobile_ == nullptr && this->paramType_ == nullptr && this->productType_ == nullptr
        && this->userName_ == nullptr && this->verifyMode_ == nullptr; };
    // bankCard Field Functions 
    bool hasBankCard() const { return this->bankCard_ != nullptr;};
    void deleteBankCard() { this->bankCard_ = nullptr;};
    inline string getBankCard() const { DARABONBA_PTR_GET_DEFAULT(bankCard_, "") };
    inline BankMetaVerifyRequest& setBankCard(string bankCard) { DARABONBA_PTR_SET_VALUE(bankCard_, bankCard) };


    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string getIdentifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline BankMetaVerifyRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline BankMetaVerifyRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline BankMetaVerifyRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline BankMetaVerifyRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline BankMetaVerifyRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline BankMetaVerifyRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // verifyMode Field Functions 
    bool hasVerifyMode() const { return this->verifyMode_ != nullptr;};
    void deleteVerifyMode() { this->verifyMode_ = nullptr;};
    inline string getVerifyMode() const { DARABONBA_PTR_GET_DEFAULT(verifyMode_, "") };
    inline BankMetaVerifyRequest& setVerifyMode(string verifyMode) { DARABONBA_PTR_SET_VALUE(verifyMode_, verifyMode) };


  protected:
    // The bank card number.
    // 
    // - If paramType is set to normal, enter the bank card number in plaintext.
    // - If paramType is set to md5, enter the card number excluding the last 6 digits in plaintext + the MD5 hash (32-bit lowercase) of the last 6 digits.
    shared_ptr<string> bankCard_ {};
    // The ID card number.
    // 
    // - This parameter is required if ProductType is set to BANK_CARD_3_META.
    // - If paramType is set to normal, enter the ID card number in plaintext.
    // - If paramType is set to md5, enter the first 6 digits of the ID card number in plaintext + the MD5 hash (32-bit lowercase) of the date of birth + the last 4 digits of the ID card number.
    shared_ptr<string> identifyNum_ {};
    // The identity document type.
    shared_ptr<string> identityType_ {};
    // The phone number.
    // 
    // - This parameter is required if ProductType is set to BANK_CARD_4_META.
    // - If paramType is set to normal, enter the phone number in plaintext.
    // - If paramType is set to md5, enter the MD5 hash (32-bit lowercase) of the phone number.
    shared_ptr<string> mobile_ {};
    // The parameter type. Valid values:
    // 
    // - normal: not encrypted.
    // - md5: MD5-encrypted.
    shared_ptr<string> paramType_ {};
    // The product type. Valid values:
    // 
    // - BANK_CARD_2_META: bank card number + name verification.
    // - BANK_CARD_3_META: bank card number + name + ID card number verification.
    // - BANK_CARD_4_META: bank card number + name + ID card number + phone number verification.
    shared_ptr<string> productType_ {};
    // The name.
    // 
    // - If paramType is set to normal, enter the name in plaintext.
    // - If paramType is set to md5, enter the MD5 hash (32-bit lowercase) of the first character of the name + the remaining characters of the name in plaintext.
    shared_ptr<string> userName_ {};
    // VERIFY_BANK_CARD: bank card verification mode. Specifies whether the provided bank card number matches the real name, ID card number, and phone number of the user.
    shared_ptr<string> verifyMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
