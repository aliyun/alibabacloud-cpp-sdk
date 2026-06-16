// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILE3METAVERIFYINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOBILE3METAVERIFYINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class Mobile3MetaVerifyIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Mobile3MetaVerifyIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, Mobile3MetaVerifyIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    Mobile3MetaVerifyIntlRequest() = default ;
    Mobile3MetaVerifyIntlRequest(const Mobile3MetaVerifyIntlRequest &) = default ;
    Mobile3MetaVerifyIntlRequest(Mobile3MetaVerifyIntlRequest &&) = default ;
    Mobile3MetaVerifyIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Mobile3MetaVerifyIntlRequest() = default ;
    Mobile3MetaVerifyIntlRequest& operator=(const Mobile3MetaVerifyIntlRequest &) = default ;
    Mobile3MetaVerifyIntlRequest& operator=(Mobile3MetaVerifyIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifyNum_ == nullptr
        && this->mobile_ == nullptr && this->paramType_ == nullptr && this->productCode_ == nullptr && this->userName_ == nullptr; };
    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string getIdentifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline Mobile3MetaVerifyIntlRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline Mobile3MetaVerifyIntlRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline Mobile3MetaVerifyIntlRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline Mobile3MetaVerifyIntlRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline Mobile3MetaVerifyIntlRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The ID card number.
    // 
    // - If ParamType is set to normal, enter the plaintext value.
    // - If ParamType is set to md5, enter a 32-character lowercase MD5 string.
    shared_ptr<string> identifyNum_ {};
    // The phone number.
    // 
    // - If ParamType is set to normal, enter the plaintext value.
    // - If ParamType is set to md5, enter a 32-character lowercase MD5 string.
    shared_ptr<string> mobile_ {};
    // The parameter type. Valid values:
    // 
    // - normal: not encrypted
    // - md5: MD5-encrypted.
    shared_ptr<string> paramType_ {};
    // The product solution code. Fixed value: MOBILE_3META.
    shared_ptr<string> productCode_ {};
    // The name.
    // 
    // - If ParamType is set to normal, enter the plaintext value.
    // - If ParamType is set to md5, enter a 32-character lowercase MD5 string.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
