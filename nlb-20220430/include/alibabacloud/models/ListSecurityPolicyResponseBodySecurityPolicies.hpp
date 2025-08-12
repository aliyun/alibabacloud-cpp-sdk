// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRESPONSEBODYSECURITYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRESPONSEBODYSECURITYPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners.hpp>
#include <alibabacloud/models/ListSecurityPolicyResponseBodySecurityPoliciesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListSecurityPolicyResponseBodySecurityPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityPolicyResponseBodySecurityPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelatedListeners, relatedListeners_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyName, securityPolicyName_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyStatus, securityPolicyStatus_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TlsVersion, tlsVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityPolicyResponseBodySecurityPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelatedListeners, relatedListeners_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyName, securityPolicyName_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyStatus, securityPolicyStatus_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TlsVersion, tlsVersion_);
    };
    ListSecurityPolicyResponseBodySecurityPolicies() = default ;
    ListSecurityPolicyResponseBodySecurityPolicies(const ListSecurityPolicyResponseBodySecurityPolicies &) = default ;
    ListSecurityPolicyResponseBodySecurityPolicies(ListSecurityPolicyResponseBodySecurityPolicies &&) = default ;
    ListSecurityPolicyResponseBodySecurityPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityPolicyResponseBodySecurityPolicies() = default ;
    ListSecurityPolicyResponseBodySecurityPolicies& operator=(const ListSecurityPolicyResponseBodySecurityPolicies &) = default ;
    ListSecurityPolicyResponseBodySecurityPolicies& operator=(ListSecurityPolicyResponseBodySecurityPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ciphers_ != nullptr
        && this->regionId_ != nullptr && this->relatedListeners_ != nullptr && this->resourceGroupId_ != nullptr && this->securityPolicyId_ != nullptr && this->securityPolicyName_ != nullptr
        && this->securityPolicyStatus_ != nullptr && this->tags_ != nullptr && this->tlsVersion_ != nullptr; };
    // ciphers Field Functions 
    bool hasCiphers() const { return this->ciphers_ != nullptr;};
    void deleteCiphers() { this->ciphers_ = nullptr;};
    inline string ciphers() const { DARABONBA_PTR_GET_DEFAULT(ciphers_, "") };
    inline ListSecurityPolicyResponseBodySecurityPolicies& setCiphers(string ciphers) { DARABONBA_PTR_SET_VALUE(ciphers_, ciphers) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSecurityPolicyResponseBodySecurityPolicies& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relatedListeners Field Functions 
    bool hasRelatedListeners() const { return this->relatedListeners_ != nullptr;};
    void deleteRelatedListeners() { this->relatedListeners_ = nullptr;};
    inline const vector<Models::ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners> & relatedListeners() const { DARABONBA_PTR_GET_CONST(relatedListeners_, vector<Models::ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners>) };
    inline vector<Models::ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners> relatedListeners() { DARABONBA_PTR_GET(relatedListeners_, vector<Models::ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners>) };
    inline ListSecurityPolicyResponseBodySecurityPolicies& setRelatedListeners(const vector<Models::ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners> & relatedListeners) { DARABONBA_PTR_SET_VALUE(relatedListeners_, relatedListeners) };
    inline ListSecurityPolicyResponseBodySecurityPolicies& setRelatedListeners(vector<Models::ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners> && relatedListeners) { DARABONBA_PTR_SET_RVALUE(relatedListeners_, relatedListeners) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListSecurityPolicyResponseBodySecurityPolicies& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string securityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline ListSecurityPolicyResponseBodySecurityPolicies& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // securityPolicyName Field Functions 
    bool hasSecurityPolicyName() const { return this->securityPolicyName_ != nullptr;};
    void deleteSecurityPolicyName() { this->securityPolicyName_ = nullptr;};
    inline string securityPolicyName() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyName_, "") };
    inline ListSecurityPolicyResponseBodySecurityPolicies& setSecurityPolicyName(string securityPolicyName) { DARABONBA_PTR_SET_VALUE(securityPolicyName_, securityPolicyName) };


    // securityPolicyStatus Field Functions 
    bool hasSecurityPolicyStatus() const { return this->securityPolicyStatus_ != nullptr;};
    void deleteSecurityPolicyStatus() { this->securityPolicyStatus_ = nullptr;};
    inline string securityPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyStatus_, "") };
    inline ListSecurityPolicyResponseBodySecurityPolicies& setSecurityPolicyStatus(string securityPolicyStatus) { DARABONBA_PTR_SET_VALUE(securityPolicyStatus_, securityPolicyStatus) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListSecurityPolicyResponseBodySecurityPoliciesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListSecurityPolicyResponseBodySecurityPoliciesTags>) };
    inline vector<Models::ListSecurityPolicyResponseBodySecurityPoliciesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListSecurityPolicyResponseBodySecurityPoliciesTags>) };
    inline ListSecurityPolicyResponseBodySecurityPolicies& setTags(const vector<Models::ListSecurityPolicyResponseBodySecurityPoliciesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListSecurityPolicyResponseBodySecurityPolicies& setTags(vector<Models::ListSecurityPolicyResponseBodySecurityPoliciesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tlsVersion Field Functions 
    bool hasTlsVersion() const { return this->tlsVersion_ != nullptr;};
    void deleteTlsVersion() { this->tlsVersion_ = nullptr;};
    inline string tlsVersion() const { DARABONBA_PTR_GET_DEFAULT(tlsVersion_, "") };
    inline ListSecurityPolicyResponseBodySecurityPolicies& setTlsVersion(string tlsVersion) { DARABONBA_PTR_SET_VALUE(tlsVersion_, tlsVersion) };


  protected:
    // The cipher suites supported by the security policy. Valid values of this parameter vary based on the value of TlsVersions. A security policy supports up to 32 cipher suites.
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
    std::shared_ptr<string> ciphers_ = nullptr;
    // The region ID of the NLB instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The listeners that are associated with the NLB instance.
    std::shared_ptr<vector<Models::ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners>> relatedListeners_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the TLS security policy.
    std::shared_ptr<string> securityPolicyId_ = nullptr;
    // The name of the TLS security policy.
    std::shared_ptr<string> securityPolicyName_ = nullptr;
    // The status of the TLS security policy. Valid values:
    // 
    // *   **Configuring**
    // *   **Available**
    std::shared_ptr<string> securityPolicyStatus_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListSecurityPolicyResponseBodySecurityPoliciesTags>> tags_ = nullptr;
    // The supported versions of the TLS protocol. Valid values: **TLSv1.0**, **TLSv1.1**, **TLSv1.2**, and **TLSv1.3**.
    std::shared_ptr<string> tlsVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
