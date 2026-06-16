// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BANKMETAVERIFYINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BANKMETAVERIFYINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class BankMetaVerifyIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BankMetaVerifyIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BankCard, bankCard_);
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VerifyMode, verifyMode_);
    };
    friend void from_json(const Darabonba::Json& j, BankMetaVerifyIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BankCard, bankCard_);
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VerifyMode, verifyMode_);
    };
    BankMetaVerifyIntlRequest() = default ;
    BankMetaVerifyIntlRequest(const BankMetaVerifyIntlRequest &) = default ;
    BankMetaVerifyIntlRequest(BankMetaVerifyIntlRequest &&) = default ;
    BankMetaVerifyIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BankMetaVerifyIntlRequest() = default ;
    BankMetaVerifyIntlRequest& operator=(const BankMetaVerifyIntlRequest &) = default ;
    BankMetaVerifyIntlRequest& operator=(BankMetaVerifyIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bankCard_ == nullptr
        && this->identifyNum_ == nullptr && this->identityType_ == nullptr && this->mobile_ == nullptr && this->paramType_ == nullptr && this->productCode_ == nullptr
        && this->productType_ == nullptr && this->userName_ == nullptr && this->verifyMode_ == nullptr; };
    // bankCard Field Functions 
    bool hasBankCard() const { return this->bankCard_ != nullptr;};
    void deleteBankCard() { this->bankCard_ = nullptr;};
    inline string getBankCard() const { DARABONBA_PTR_GET_DEFAULT(bankCard_, "") };
    inline BankMetaVerifyIntlRequest& setBankCard(string bankCard) { DARABONBA_PTR_SET_VALUE(bankCard_, bankCard) };


    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string getIdentifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline BankMetaVerifyIntlRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline BankMetaVerifyIntlRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline BankMetaVerifyIntlRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline BankMetaVerifyIntlRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline BankMetaVerifyIntlRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline BankMetaVerifyIntlRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline BankMetaVerifyIntlRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // verifyMode Field Functions 
    bool hasVerifyMode() const { return this->verifyMode_ != nullptr;};
    void deleteVerifyMode() { this->verifyMode_ = nullptr;};
    inline string getVerifyMode() const { DARABONBA_PTR_GET_DEFAULT(verifyMode_, "") };
    inline BankMetaVerifyIntlRequest& setVerifyMode(string verifyMode) { DARABONBA_PTR_SET_VALUE(verifyMode_, verifyMode) };


  protected:
    // The bank card number.
    // 
    // - If paramType is set to normal, enter the bank card number in plaintext.
    // - If paramType is set to md5, provide the plaintext of all digits except the last 6 digits + the MD5 value (32-character lowercase) of the last 6 digits.
    // 
    // This parameter is required.
    shared_ptr<string> bankCard_ {};
    // The ID document number.
    // - If paramType is set to normal, enter the ID document number in plaintext.
    // - If paramType is set to md5:
    //     - For ID cards: the first 6 digits (plaintext) + date of birth (ciphertext) + the last 4 digits (plaintext).
    //     - For other documents: the last 2 characters are MD5-encrypted.
    // 
    // Important:
    // This parameter is required when ProductType is set to one of the following values:
    // - BANK_CARD_3_META
    // - BANK_CARD_4_META.
    shared_ptr<string> identifyNum_ {};
    // The ID document type. If left empty, the default value is ID card. For other document types, refer to the table below.
    shared_ptr<string> identityType_ {};
    // The phone number.
    // - If paramType is set to normal, enter the phone number in plaintext.
    // - If paramType is set to md5, enter the phone number in ciphertext.
    // 
    // Important:
    // 
    // - This parameter is required when ProductType is set to BANK_CARD_4_META.
    shared_ptr<string> mobile_ {};
    // The encryption method. Valid values:
    // - normal: no encryption
    // - md5: MD5 encryption
    // 
    // Important:
    // 
    // - All encrypted parameter values must be 32-character lowercase MD5 strings.
    // - Different MD5 tools may produce different ciphertext. If the API call succeeds before encryption but fails after encryption, try a different MD5 tool.
    // 
    // This parameter is required.
    shared_ptr<string> paramType_ {};
    // Fixed value: BANK_CARD_N_META.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The product type to call. Valid values:
    // 
    // - BANK_CARD_2_META: Bank card number + name verification.
    // - BANK_CARD_3_META: Bank card number + name + ID card number verification.
    // - BANK_CARD_4_META: Bank card number + name + ID card number + phone number verification.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The name.
    // 
    // - If paramType is set to normal, enter the name in plaintext.
    // - If paramType is set to md5, provide the MD5-encrypted first character of the name (32-character lowercase MD5) + the plaintext of the remaining characters.
    // 
    // This parameter is required.
    shared_ptr<string> userName_ {};
    // VERIFY_BANK_CARD: bank card authentication mode. Indicates whether the provided bank card number matches the user\\"s real name, ID card number, and phone number.
    // 
    // This parameter is required.
    shared_ptr<string> verifyMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
