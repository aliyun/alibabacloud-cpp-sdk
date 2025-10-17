// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METAVERIFYINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ID2METAVERIFYINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class Id2MetaVerifyIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaVerifyIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaVerifyIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    Id2MetaVerifyIntlRequest() = default ;
    Id2MetaVerifyIntlRequest(const Id2MetaVerifyIntlRequest &) = default ;
    Id2MetaVerifyIntlRequest(Id2MetaVerifyIntlRequest &&) = default ;
    Id2MetaVerifyIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaVerifyIntlRequest() = default ;
    Id2MetaVerifyIntlRequest& operator=(const Id2MetaVerifyIntlRequest &) = default ;
    Id2MetaVerifyIntlRequest& operator=(Id2MetaVerifyIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifyNum_ == nullptr
        && return this->paramType_ == nullptr && return this->productCode_ == nullptr && return this->userName_ == nullptr; };
    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string identifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline Id2MetaVerifyIntlRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline Id2MetaVerifyIntlRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline Id2MetaVerifyIntlRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline Id2MetaVerifyIntlRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The ID card number.
    // 
    // > Only ID cards of residents in the Chinese mainland are supported.
    std::shared_ptr<string> identifyNum_ = nullptr;
    // The parameter type.
    // 
    // **normal**: The original value in plaintext.
    // 
    // > Due to limitations of the authoritative data source, two-factor ID verification does not support MD5 encryption.
    std::shared_ptr<string> paramType_ = nullptr;
    // The product plan. This is a static field. Set the value to **ID_2META**.
    std::shared_ptr<string> productCode_ = nullptr;
    // The name.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
