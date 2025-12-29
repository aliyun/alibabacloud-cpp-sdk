// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILE2METAVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOBILE2METAVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Mobile2MetaVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Mobile2MetaVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, Mobile2MetaVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    Mobile2MetaVerifyRequest() = default ;
    Mobile2MetaVerifyRequest(const Mobile2MetaVerifyRequest &) = default ;
    Mobile2MetaVerifyRequest(Mobile2MetaVerifyRequest &&) = default ;
    Mobile2MetaVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Mobile2MetaVerifyRequest() = default ;
    Mobile2MetaVerifyRequest& operator=(const Mobile2MetaVerifyRequest &) = default ;
    Mobile2MetaVerifyRequest& operator=(Mobile2MetaVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mobile_ == nullptr
        && this->paramType_ == nullptr && this->userName_ == nullptr; };
    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline Mobile2MetaVerifyRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline Mobile2MetaVerifyRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline Mobile2MetaVerifyRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Phone number:
    // - When paramType is normal: input the plaintext phone number.
    // - When paramType is md5: input the encrypted phone number.
    // 
    // This parameter is required.
    shared_ptr<string> mobile_ {};
    // Encryption method:
    // - normal: plaintext without encryption
    // - md5: MD5 encryption
    // 
    // This parameter is required.
    shared_ptr<string> paramType_ {};
    // Name:
    // - When paramType is normal: input the plaintext name.
    // - When paramType is md5: input the encrypted name.
    // 
    // This parameter is required.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
