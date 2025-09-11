// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINEWITHASSETSCODEVERSIONRESPONSEBODYOSSPOSTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINEWITHASSETSCODEVERSIONRESPONSEBODYOSSPOSTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(OSSAccessKeyId, OSSAccessKeyId_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(XOssSecurityToken, XOssSecurityToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(OSSAccessKeyId, OSSAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(XOssSecurityToken, XOssSecurityToken_);
    };
    CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig() = default ;
    CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig(const CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig &) = default ;
    CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig(CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig &&) = default ;
    CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig() = default ;
    CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig& operator=(const CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig &) = default ;
    CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig& operator=(CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->OSSAccessKeyId_ != nullptr && this->policy_ != nullptr && this->signature_ != nullptr && this->url_ != nullptr && this->XOssSecurityToken_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // OSSAccessKeyId Field Functions 
    bool hasOSSAccessKeyId() const { return this->OSSAccessKeyId_ != nullptr;};
    void deleteOSSAccessKeyId() { this->OSSAccessKeyId_ = nullptr;};
    inline string OSSAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(OSSAccessKeyId_, "") };
    inline CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig& setOSSAccessKeyId(string OSSAccessKeyId) { DARABONBA_PTR_SET_VALUE(OSSAccessKeyId_, OSSAccessKeyId) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // XOssSecurityToken Field Functions 
    bool hasXOssSecurityToken() const { return this->XOssSecurityToken_ != nullptr;};
    void deleteXOssSecurityToken() { this->XOssSecurityToken_ = nullptr;};
    inline string XOssSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(XOssSecurityToken_, "") };
    inline CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig& setXOssSecurityToken(string XOssSecurityToken) { DARABONBA_PTR_SET_VALUE(XOssSecurityToken_, XOssSecurityToken) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> OSSAccessKeyId_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    std::shared_ptr<string> signature_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<string> XOssSecurityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
