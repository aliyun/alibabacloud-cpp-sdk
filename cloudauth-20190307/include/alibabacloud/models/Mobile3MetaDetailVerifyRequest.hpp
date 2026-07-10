// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILE3METADETAILVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOBILE3METADETAILVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Mobile3MetaDetailVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Mobile3MetaDetailVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, Mobile3MetaDetailVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    Mobile3MetaDetailVerifyRequest() = default ;
    Mobile3MetaDetailVerifyRequest(const Mobile3MetaDetailVerifyRequest &) = default ;
    Mobile3MetaDetailVerifyRequest(Mobile3MetaDetailVerifyRequest &&) = default ;
    Mobile3MetaDetailVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Mobile3MetaDetailVerifyRequest() = default ;
    Mobile3MetaDetailVerifyRequest& operator=(const Mobile3MetaDetailVerifyRequest &) = default ;
    Mobile3MetaDetailVerifyRequest& operator=(Mobile3MetaDetailVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifyNum_ == nullptr
        && this->mobile_ == nullptr && this->paramType_ == nullptr && this->userName_ == nullptr; };
    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string getIdentifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline Mobile3MetaDetailVerifyRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline Mobile3MetaDetailVerifyRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline Mobile3MetaDetailVerifyRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline Mobile3MetaDetailVerifyRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The ID card number.
    // 
    // > Note: Only second-generation resident ID card numbers and Hong Kong, Macao, or Taiwan residence permit numbers are supported.
    // 
    // - If ParamType is set to normal, pass in the ID card number in plaintext.
    // 
    // - If ParamType is set to md5, pass in the ID card number in ciphertext.
    shared_ptr<string> identifyNum_ {};
    // The phone number.
    // 
    // - If ParamType is set to normal, pass in the phone number in plaintext.
    // 
    // - If ParamType is set to md5, pass in the phone number in ciphertext.
    shared_ptr<string> mobile_ {};
    // The encryption method. Valid values:
    // 
    // - normal: plaintext without encryption
    // 
    // - md5: MD5 encryption.
    shared_ptr<string> paramType_ {};
    // The name.
    // 
    // - If ParamType is set to normal, pass in the name in plaintext.
    // 
    // - If ParamType is set to md5, pass in the name in ciphertext.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
