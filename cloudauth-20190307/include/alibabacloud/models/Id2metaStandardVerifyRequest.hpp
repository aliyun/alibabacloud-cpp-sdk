// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METASTANDARDVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ID2METASTANDARDVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id2MetaStandardVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaStandardVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaStandardVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    Id2MetaStandardVerifyRequest() = default ;
    Id2MetaStandardVerifyRequest(const Id2MetaStandardVerifyRequest &) = default ;
    Id2MetaStandardVerifyRequest(Id2MetaStandardVerifyRequest &&) = default ;
    Id2MetaStandardVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaStandardVerifyRequest() = default ;
    Id2MetaStandardVerifyRequest& operator=(const Id2MetaStandardVerifyRequest &) = default ;
    Id2MetaStandardVerifyRequest& operator=(Id2MetaStandardVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->identifyNum_ != nullptr
        && this->paramType_ != nullptr && this->userName_ != nullptr; };
    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string identifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline Id2MetaStandardVerifyRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline Id2MetaStandardVerifyRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline Id2MetaStandardVerifyRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // ID number:
    // 
    // - When `paramType` is normal: enter the plain text of the ID number.
    // - When `paramType` is md5:
    // The first 6 digits (plain text) + date of birth (encrypted) + last 4 digits (plain text).
    std::shared_ptr<string> identifyNum_ = nullptr;
    // Parameter type:
    // 
    // - normal: unencrypted.
    // - md5: md5 encrypted.
    std::shared_ptr<string> paramType_ = nullptr;
    // Name:
    // 
    // - When `paramType` is normal: enter the plain text of the name.
    // - When `paramType` is md5: the first character of the name (encrypted) + the rest of the name (plain text).
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
