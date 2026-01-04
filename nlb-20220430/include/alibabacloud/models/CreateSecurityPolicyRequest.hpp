// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class CreateSecurityPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyName, securityPolicyName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TlsVersions, tlsVersions_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyName, securityPolicyName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TlsVersions, tlsVersions_);
    };
    CreateSecurityPolicyRequest() = default ;
    CreateSecurityPolicyRequest(const CreateSecurityPolicyRequest &) = default ;
    CreateSecurityPolicyRequest(CreateSecurityPolicyRequest &&) = default ;
    CreateSecurityPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityPolicyRequest() = default ;
    CreateSecurityPolicyRequest& operator=(const CreateSecurityPolicyRequest &) = default ;
    CreateSecurityPolicyRequest& operator=(CreateSecurityPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag. It must be 1 to 64 characters in length, cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`. It can contain letters, digits, underscores (_), periods (.), colons (:), forward slashes (/), equal signs (=), plus signs (+), minus signs (-), and at signs (@).
      // 
      // You can add up to 20 tags for the security policy in each call.
      shared_ptr<string> key_ {};
      // The value of the tag. It must be 1 to 128 characters in length, cannot start with `acs:` or `aliyun`, and cannot contain `http://` or `https://`. It can contain letters, digits, underscores (_), periods (.), colons (:), forward slashes (/), equal signs (=), plus signs (+), minus signs (-), and at signs (@).
      // 
      // You can add up to 20 tags for the security policy in each call.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->ciphers_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityPolicyName_ == nullptr
        && this->tag_ == nullptr && this->tlsVersions_ == nullptr; };
    // ciphers Field Functions 
    bool hasCiphers() const { return this->ciphers_ != nullptr;};
    void deleteCiphers() { this->ciphers_ = nullptr;};
    inline const vector<string> & getCiphers() const { DARABONBA_PTR_GET_CONST(ciphers_, vector<string>) };
    inline vector<string> getCiphers() { DARABONBA_PTR_GET(ciphers_, vector<string>) };
    inline CreateSecurityPolicyRequest& setCiphers(const vector<string> & ciphers) { DARABONBA_PTR_SET_VALUE(ciphers_, ciphers) };
    inline CreateSecurityPolicyRequest& setCiphers(vector<string> && ciphers) { DARABONBA_PTR_SET_RVALUE(ciphers_, ciphers) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSecurityPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateSecurityPolicyRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSecurityPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSecurityPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityPolicyName Field Functions 
    bool hasSecurityPolicyName() const { return this->securityPolicyName_ != nullptr;};
    void deleteSecurityPolicyName() { this->securityPolicyName_ = nullptr;};
    inline string getSecurityPolicyName() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyName_, "") };
    inline CreateSecurityPolicyRequest& setSecurityPolicyName(string securityPolicyName) { DARABONBA_PTR_SET_VALUE(securityPolicyName_, securityPolicyName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateSecurityPolicyRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateSecurityPolicyRequest::Tag>) };
    inline vector<CreateSecurityPolicyRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateSecurityPolicyRequest::Tag>) };
    inline CreateSecurityPolicyRequest& setTag(const vector<CreateSecurityPolicyRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateSecurityPolicyRequest& setTag(vector<CreateSecurityPolicyRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tlsVersions Field Functions 
    bool hasTlsVersions() const { return this->tlsVersions_ != nullptr;};
    void deleteTlsVersions() { this->tlsVersions_ = nullptr;};
    inline const vector<string> & getTlsVersions() const { DARABONBA_PTR_GET_CONST(tlsVersions_, vector<string>) };
    inline vector<string> getTlsVersions() { DARABONBA_PTR_GET(tlsVersions_, vector<string>) };
    inline CreateSecurityPolicyRequest& setTlsVersions(const vector<string> & tlsVersions) { DARABONBA_PTR_SET_VALUE(tlsVersions_, tlsVersions) };
    inline CreateSecurityPolicyRequest& setTlsVersions(vector<string> && tlsVersions) { DARABONBA_PTR_SET_RVALUE(tlsVersions_, tlsVersions) };


  protected:
    // The cipher suites supported by the security policy. Valid values of this parameter vary based on the value of TlsVersions. You can specify up to 32 cipher suites.
    // 
    // TLSv1.0 and TLSv1.1 support the following cipher suites:
    // 
    // *   **ECDHE-ECDSA-AES128-SHA**
    // *   **ECDHE-ECDSA-AES256-SHA**
    // *   **ECDHE-RSA-AES128-SHA**
    // *   **ECDHE-RSA-AES256-SHA**
    // *   **AES128-SHA**
    // *   **AES256-SHA**
    // *   **DES-CBC3-SHA**
    // 
    // TLSv1.2 supports the following cipher suites:
    // 
    // *   **ECDHE-ECDSA-AES128-SHA**
    // *   **ECDHE-ECDSA-AES256-SHA**
    // *   **ECDHE-RSA-AES128-SHA**
    // *   **ECDHE-RSA-AES256-SHA**
    // *   **AES128-SHA**
    // *   **AES256-SHA**
    // *   **DES-CBC3-SHA**
    // *   **ECDHE-ECDSA-AES128-GCM-SHA256**
    // *   **ECDHE-ECDSA-AES256-GCM-SHA384**
    // *   **ECDHE-ECDSA-AES128-SHA256**
    // *   **ECDHE-ECDSA-AES256-SHA384**
    // *   **ECDHE-RSA-AES128-GCM-SHA256**
    // *   **ECDHE-RSA-AES256-GCM-SHA384**
    // *   **ECDHE-RSA-AES128-SHA256**
    // *   **ECDHE-RSA-AES256-SHA384**
    // *   **AES128-GCM-SHA256**
    // *   **AES256-GCM-SHA384**
    // *   **AES128-SHA256**
    // *   **AES256-SHA256**
    // 
    // TLSv1.3 supports the following cipher suites:
    // 
    // *   **TLS_AES_128_GCM_SHA256**
    // *   **TLS_AES_256_GCM_SHA384**
    // *   **TLS_CHACHA20_POLY1305_SHA256**
    // *   **TLS_AES_128_CCM_SHA256**
    // *   **TLS_AES_128_CCM_8_SHA256**
    // 
    // This parameter is required.
    shared_ptr<vector<string>> ciphers_ {};
    // The client token used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token. Ensure that the token is unique among different requests. Only ASCII characters are allowed.
    // 
    // >  If you do not set this parameter, the value of **RequestId** is used.**** The value of **RequestId** is different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: validates the request without performing the operation. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the validation, the corresponding error message is returned. If the request passes the validation, the `DryRunOperation` error code is returned.
    // *   **false** (default): validates the request and performs the operation. If the request passes the validation, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the region where the NLB instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the security policy belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The name of the security policy.
    // 
    // It must be 1 to 200 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> securityPolicyName_ {};
    // The tags.
    shared_ptr<vector<CreateSecurityPolicyRequest::Tag>> tag_ {};
    // The Transport Layer Security (TLS) versions supported by the security policy. Valid values: **TLSv1.0**, **TLSv1.1**, **TLSv1.2**, and **TLSv1.3**.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> tlsVersions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
