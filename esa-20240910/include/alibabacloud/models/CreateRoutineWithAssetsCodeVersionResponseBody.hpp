// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINEWITHASSETSCODEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINEWITHASSETSCODEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRoutineWithAssetsCodeVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineWithAssetsCodeVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_TO_JSON(OssPostConfig, ossPostConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineWithAssetsCodeVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_FROM_JSON(OssPostConfig, ossPostConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateRoutineWithAssetsCodeVersionResponseBody() = default ;
    CreateRoutineWithAssetsCodeVersionResponseBody(const CreateRoutineWithAssetsCodeVersionResponseBody &) = default ;
    CreateRoutineWithAssetsCodeVersionResponseBody(CreateRoutineWithAssetsCodeVersionResponseBody &&) = default ;
    CreateRoutineWithAssetsCodeVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineWithAssetsCodeVersionResponseBody() = default ;
    CreateRoutineWithAssetsCodeVersionResponseBody& operator=(const CreateRoutineWithAssetsCodeVersionResponseBody &) = default ;
    CreateRoutineWithAssetsCodeVersionResponseBody& operator=(CreateRoutineWithAssetsCodeVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OssPostConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OssPostConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(OSSAccessKeyId, OSSAccessKeyId_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(Signature, signature_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(XOssSecurityToken, XOssSecurityToken_);
      };
      friend void from_json(const Darabonba::Json& j, OssPostConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(OSSAccessKeyId, OSSAccessKeyId_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(Signature, signature_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(XOssSecurityToken, XOssSecurityToken_);
      };
      OssPostConfig() = default ;
      OssPostConfig(const OssPostConfig &) = default ;
      OssPostConfig(OssPostConfig &&) = default ;
      OssPostConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OssPostConfig() = default ;
      OssPostConfig& operator=(const OssPostConfig &) = default ;
      OssPostConfig& operator=(OssPostConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->OSSAccessKeyId_ == nullptr && this->policy_ == nullptr && this->signature_ == nullptr && this->url_ == nullptr && this->XOssSecurityToken_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline OssPostConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // OSSAccessKeyId Field Functions 
      bool hasOSSAccessKeyId() const { return this->OSSAccessKeyId_ != nullptr;};
      void deleteOSSAccessKeyId() { this->OSSAccessKeyId_ = nullptr;};
      inline string getOSSAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(OSSAccessKeyId_, "") };
      inline OssPostConfig& setOSSAccessKeyId(string OSSAccessKeyId) { DARABONBA_PTR_SET_VALUE(OSSAccessKeyId_, OSSAccessKeyId) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline OssPostConfig& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline OssPostConfig& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline OssPostConfig& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // XOssSecurityToken Field Functions 
      bool hasXOssSecurityToken() const { return this->XOssSecurityToken_ != nullptr;};
      void deleteXOssSecurityToken() { this->XOssSecurityToken_ = nullptr;};
      inline string getXOssSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(XOssSecurityToken_, "") };
      inline OssPostConfig& setXOssSecurityToken(string XOssSecurityToken) { DARABONBA_PTR_SET_VALUE(XOssSecurityToken_, XOssSecurityToken) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> OSSAccessKeyId_ {};
      shared_ptr<string> policy_ {};
      shared_ptr<string> signature_ {};
      shared_ptr<string> url_ {};
      shared_ptr<string> XOssSecurityToken_ {};
    };

    virtual bool empty() const override { return this->codeVersion_ == nullptr
        && this->ossPostConfig_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline string getCodeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
    inline CreateRoutineWithAssetsCodeVersionResponseBody& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


    // ossPostConfig Field Functions 
    bool hasOssPostConfig() const { return this->ossPostConfig_ != nullptr;};
    void deleteOssPostConfig() { this->ossPostConfig_ = nullptr;};
    inline const CreateRoutineWithAssetsCodeVersionResponseBody::OssPostConfig & getOssPostConfig() const { DARABONBA_PTR_GET_CONST(ossPostConfig_, CreateRoutineWithAssetsCodeVersionResponseBody::OssPostConfig) };
    inline CreateRoutineWithAssetsCodeVersionResponseBody::OssPostConfig getOssPostConfig() { DARABONBA_PTR_GET(ossPostConfig_, CreateRoutineWithAssetsCodeVersionResponseBody::OssPostConfig) };
    inline CreateRoutineWithAssetsCodeVersionResponseBody& setOssPostConfig(const CreateRoutineWithAssetsCodeVersionResponseBody::OssPostConfig & ossPostConfig) { DARABONBA_PTR_SET_VALUE(ossPostConfig_, ossPostConfig) };
    inline CreateRoutineWithAssetsCodeVersionResponseBody& setOssPostConfig(CreateRoutineWithAssetsCodeVersionResponseBody::OssPostConfig && ossPostConfig) { DARABONBA_PTR_SET_RVALUE(ossPostConfig_, ossPostConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRoutineWithAssetsCodeVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateRoutineWithAssetsCodeVersionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> codeVersion_ {};
    shared_ptr<CreateRoutineWithAssetsCodeVersionResponseBody::OssPostConfig> ossPostConfig_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
