// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILE3METADETAILSTANDARDVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOBILE3METADETAILSTANDARDVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Mobile3MetaDetailStandardVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Mobile3MetaDetailStandardVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, Mobile3MetaDetailStandardVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    Mobile3MetaDetailStandardVerifyRequest() = default ;
    Mobile3MetaDetailStandardVerifyRequest(const Mobile3MetaDetailStandardVerifyRequest &) = default ;
    Mobile3MetaDetailStandardVerifyRequest(Mobile3MetaDetailStandardVerifyRequest &&) = default ;
    Mobile3MetaDetailStandardVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Mobile3MetaDetailStandardVerifyRequest() = default ;
    Mobile3MetaDetailStandardVerifyRequest& operator=(const Mobile3MetaDetailStandardVerifyRequest &) = default ;
    Mobile3MetaDetailStandardVerifyRequest& operator=(Mobile3MetaDetailStandardVerifyRequest &&) = default ;
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
    inline Mobile3MetaDetailStandardVerifyRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline Mobile3MetaDetailStandardVerifyRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline Mobile3MetaDetailStandardVerifyRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline Mobile3MetaDetailStandardVerifyRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // ID number:
    // 
    // - When `paramType` is `normal`: Input the plain text of the ID number.
    // - When `paramType` is `md5`: Input the encrypted text of the ID number.
    shared_ptr<string> identifyNum_ {};
    // Phone number:
    // 
    // - When `paramType` is `normal`: Input the plain text of the phone number.
    // - When `paramType` is `md5`: Input the encrypted text of the phone number.
    shared_ptr<string> mobile_ {};
    // Parameter type:
    // 
    // - normal: Unencrypted.
    // - md5: Encrypted with MD5.
    shared_ptr<string> paramType_ {};
    // Name:
    // 
    // - When `paramType` is `normal`: Input the plain text of the name.
    // - When `paramType` is `md5`: Input the encrypted text of the name.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
