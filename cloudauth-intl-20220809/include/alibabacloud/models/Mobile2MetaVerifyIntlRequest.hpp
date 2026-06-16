// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILE2METAVERIFYINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOBILE2METAVERIFYINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class Mobile2MetaVerifyIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Mobile2MetaVerifyIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, Mobile2MetaVerifyIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    Mobile2MetaVerifyIntlRequest() = default ;
    Mobile2MetaVerifyIntlRequest(const Mobile2MetaVerifyIntlRequest &) = default ;
    Mobile2MetaVerifyIntlRequest(Mobile2MetaVerifyIntlRequest &&) = default ;
    Mobile2MetaVerifyIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Mobile2MetaVerifyIntlRequest() = default ;
    Mobile2MetaVerifyIntlRequest& operator=(const Mobile2MetaVerifyIntlRequest &) = default ;
    Mobile2MetaVerifyIntlRequest& operator=(Mobile2MetaVerifyIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mobile_ == nullptr
        && this->paramType_ == nullptr && this->productCode_ == nullptr && this->userName_ == nullptr; };
    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline Mobile2MetaVerifyIntlRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline Mobile2MetaVerifyIntlRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline Mobile2MetaVerifyIntlRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline Mobile2MetaVerifyIntlRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The phone number.
    // 
    // - If ParamType is set to normal, pass in the phone number in plaintext.
    // - If ParamType is set to md5, pass in the phone number in ciphertext as a 32-character lowercase MD5 string.
    // 
    // This parameter is required.
    shared_ptr<string> mobile_ {};
    // The parameter type. Valid values:
    // 
    // - normal: not encrypted
    // - md5: MD5-encrypted.
    // 
    // This parameter is required.
    shared_ptr<string> paramType_ {};
    // The product code. Set this parameter to MOBILE_2META.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The name. Valid values:
    // 
    // - If ParamType is set to normal, pass in the name in plaintext.
    // - If ParamType is set to md5, pass in the name in ciphertext as a 32-character lowercase MD5 string.
    // 
    // This parameter is required.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
