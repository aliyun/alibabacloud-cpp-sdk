// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADINFO_HPP_
#define ALIBABACLOUD_MODELS_UPLOADINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class UploadInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadInfo& obj) { 
      DARABONBA_PTR_TO_JSON(accessId, accessId_);
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(policySignature, policySignature_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, UploadInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(accessId, accessId_);
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(policySignature, policySignature_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    UploadInfo() = default ;
    UploadInfo(const UploadInfo &) = default ;
    UploadInfo(UploadInfo &&) = default ;
    UploadInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadInfo() = default ;
    UploadInfo& operator=(const UploadInfo &) = default ;
    UploadInfo& operator=(UploadInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && this->host_ == nullptr && this->key_ == nullptr && this->policy_ == nullptr && this->policySignature_ == nullptr && this->url_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline UploadInfo& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline UploadInfo& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline UploadInfo& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline UploadInfo& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // policySignature Field Functions 
    bool hasPolicySignature() const { return this->policySignature_ != nullptr;};
    void deletePolicySignature() { this->policySignature_ = nullptr;};
    inline string getPolicySignature() const { DARABONBA_PTR_GET_DEFAULT(policySignature_, "") };
    inline UploadInfo& setPolicySignature(string policySignature) { DARABONBA_PTR_SET_VALUE(policySignature_, policySignature) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline UploadInfo& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // This parameter is required.
    shared_ptr<string> accessId_ {};
    // This parameter is required.
    shared_ptr<string> host_ {};
    // This parameter is required.
    shared_ptr<string> key_ {};
    // This parameter is required.
    shared_ptr<string> policy_ {};
    // This parameter is required.
    shared_ptr<string> policySignature_ {};
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
