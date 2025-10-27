// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTUPLOADPOLICYINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTUPLOADPOLICYINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneyPotUploadPolicyInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneyPotUploadPolicyInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Accessid, accessid_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneyPotUploadPolicyInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessid, accessid_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
    };
    GetHoneyPotUploadPolicyInfoResponseBodyData() = default ;
    GetHoneyPotUploadPolicyInfoResponseBodyData(const GetHoneyPotUploadPolicyInfoResponseBodyData &) = default ;
    GetHoneyPotUploadPolicyInfoResponseBodyData(GetHoneyPotUploadPolicyInfoResponseBodyData &&) = default ;
    GetHoneyPotUploadPolicyInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneyPotUploadPolicyInfoResponseBodyData() = default ;
    GetHoneyPotUploadPolicyInfoResponseBodyData& operator=(const GetHoneyPotUploadPolicyInfoResponseBodyData &) = default ;
    GetHoneyPotUploadPolicyInfoResponseBodyData& operator=(GetHoneyPotUploadPolicyInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessid_ == nullptr
        && return this->expire_ == nullptr && return this->host_ == nullptr && return this->key_ == nullptr && return this->policy_ == nullptr && return this->securityToken_ == nullptr
        && return this->signature_ == nullptr; };
    // accessid Field Functions 
    bool hasAccessid() const { return this->accessid_ != nullptr;};
    void deleteAccessid() { this->accessid_ = nullptr;};
    inline string accessid() const { DARABONBA_PTR_GET_DEFAULT(accessid_, "") };
    inline GetHoneyPotUploadPolicyInfoResponseBodyData& setAccessid(string accessid) { DARABONBA_PTR_SET_VALUE(accessid_, accessid) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline string expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
    inline GetHoneyPotUploadPolicyInfoResponseBodyData& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetHoneyPotUploadPolicyInfoResponseBodyData& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetHoneyPotUploadPolicyInfoResponseBodyData& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GetHoneyPotUploadPolicyInfoResponseBodyData& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline GetHoneyPotUploadPolicyInfoResponseBodyData& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetHoneyPotUploadPolicyInfoResponseBodyData& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    // The key ID that is required for the file upload.
    std::shared_ptr<string> accessid_ = nullptr;
    // The expiration time of the URL. The value is a timestamp. You can use the value to determine whether the URL expires. If the expiration time arrives, you can no longer use the URL to upload files.
    std::shared_ptr<string> expire_ = nullptr;
    // The request URL during the upload.
    std::shared_ptr<string> host_ = nullptr;
    // The full path of the file in OSS. The file is uploaded by calling the OSS PostObject operation.
    std::shared_ptr<string> key_ = nullptr;
    // The limits that are imposed on the file upload. The limits include the file size.
    std::shared_ptr<string> policy_ = nullptr;
    // The security token.
    std::shared_ptr<string> securityToken_ = nullptr;
    // The signature that is calculated based on **AccessKeySecret** and **Policy**. When you call an Object Storage Service (OSS) API operation, OSS uses the signature information to verify the POST request.
    std::shared_ptr<string> signature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
