// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METAVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ID2METAVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id2MetaVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    Id2MetaVerifyRequest() = default ;
    Id2MetaVerifyRequest(const Id2MetaVerifyRequest &) = default ;
    Id2MetaVerifyRequest(Id2MetaVerifyRequest &&) = default ;
    Id2MetaVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaVerifyRequest() = default ;
    Id2MetaVerifyRequest& operator=(const Id2MetaVerifyRequest &) = default ;
    Id2MetaVerifyRequest& operator=(Id2MetaVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifyNum_ == nullptr
        && return this->paramType_ == nullptr && return this->userName_ == nullptr; };
    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string identifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline Id2MetaVerifyRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline Id2MetaVerifyRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline Id2MetaVerifyRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // ID number:
    // 
    // Note
    // Only supports the ID numbers of second-generation resident IDs and Hong Kong, Macao, and Taiwan residence permits.
    // 
    // - When paramType is normal: enter the plaintext ID number.
    // 
    // - When paramType is md5: first 6 digits of the ID number (plaintext) + date of birth (ciphertext) + last 4 digits of the ID number (plaintext).
    std::shared_ptr<string> identifyNum_ = nullptr;
    // Encryption method:
    // 
    // - normal: plaintext, no encryption
    // 
    // - md5: MD5 encryption
    std::shared_ptr<string> paramType_ = nullptr;
    // Name:
    // 
    // - When paramType is normal: enter the plaintext name.
    // 
    // - When paramType is md5: first character of the name in ciphertext + rest of the name in plaintext.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
