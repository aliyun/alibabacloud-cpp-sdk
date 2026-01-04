// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEUPLOADAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEUPLOADAUTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GenerateUploadAuthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateUploadAuthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(DownLoadUrl, downLoadUrl_);
      DARABONBA_PTR_TO_JSON(EncryptedKey, encryptedKey_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(PlaintextKey, plaintextKey_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateUploadAuthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(DownLoadUrl, downLoadUrl_);
      DARABONBA_PTR_FROM_JSON(EncryptedKey, encryptedKey_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(PlaintextKey, plaintextKey_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
    };
    GenerateUploadAuthResponseBody() = default ;
    GenerateUploadAuthResponseBody(const GenerateUploadAuthResponseBody &) = default ;
    GenerateUploadAuthResponseBody(GenerateUploadAuthResponseBody &&) = default ;
    GenerateUploadAuthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateUploadAuthResponseBody() = default ;
    GenerateUploadAuthResponseBody& operator=(const GenerateUploadAuthResponseBody &) = default ;
    GenerateUploadAuthResponseBody& operator=(GenerateUploadAuthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && this->downLoadUrl_ == nullptr && this->encryptedKey_ == nullptr && this->expire_ == nullptr && this->host_ == nullptr && this->key_ == nullptr
        && this->plaintextKey_ == nullptr && this->policy_ == nullptr && this->requestId_ == nullptr && this->securityToken_ == nullptr && this->signature_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline GenerateUploadAuthResponseBody& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // downLoadUrl Field Functions 
    bool hasDownLoadUrl() const { return this->downLoadUrl_ != nullptr;};
    void deleteDownLoadUrl() { this->downLoadUrl_ = nullptr;};
    inline string getDownLoadUrl() const { DARABONBA_PTR_GET_DEFAULT(downLoadUrl_, "") };
    inline GenerateUploadAuthResponseBody& setDownLoadUrl(string downLoadUrl) { DARABONBA_PTR_SET_VALUE(downLoadUrl_, downLoadUrl) };


    // encryptedKey Field Functions 
    bool hasEncryptedKey() const { return this->encryptedKey_ != nullptr;};
    void deleteEncryptedKey() { this->encryptedKey_ = nullptr;};
    inline string getEncryptedKey() const { DARABONBA_PTR_GET_DEFAULT(encryptedKey_, "") };
    inline GenerateUploadAuthResponseBody& setEncryptedKey(string encryptedKey) { DARABONBA_PTR_SET_VALUE(encryptedKey_, encryptedKey) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline GenerateUploadAuthResponseBody& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GenerateUploadAuthResponseBody& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GenerateUploadAuthResponseBody& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // plaintextKey Field Functions 
    bool hasPlaintextKey() const { return this->plaintextKey_ != nullptr;};
    void deletePlaintextKey() { this->plaintextKey_ = nullptr;};
    inline string getPlaintextKey() const { DARABONBA_PTR_GET_DEFAULT(plaintextKey_, "") };
    inline GenerateUploadAuthResponseBody& setPlaintextKey(string plaintextKey) { DARABONBA_PTR_SET_VALUE(plaintextKey_, plaintextKey) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GenerateUploadAuthResponseBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateUploadAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline GenerateUploadAuthResponseBody& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GenerateUploadAuthResponseBody& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    // 认证的AccessId
    shared_ptr<string> accessId_ {};
    // 预下载地址
    shared_ptr<string> downLoadUrl_ {};
    shared_ptr<string> encryptedKey_ {};
    // 过期时间
    shared_ptr<int64_t> expire_ {};
    // bucket地址host
    shared_ptr<string> host_ {};
    // 认证对应的key
    shared_ptr<string> key_ {};
    shared_ptr<string> plaintextKey_ {};
    // 认证的policy
    shared_ptr<string> policy_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> securityToken_ {};
    // 认证的签名
    shared_ptr<string> signature_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
