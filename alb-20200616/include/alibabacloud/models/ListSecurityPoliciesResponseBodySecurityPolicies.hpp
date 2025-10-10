// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYPOLICIESRESPONSEBODYSECURITYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYPOLICIESRESPONSEBODYSECURITYPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSecurityPoliciesResponseBodySecurityPoliciesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListSecurityPoliciesResponseBodySecurityPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityPoliciesResponseBodySecurityPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyName, securityPolicyName_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyStatus, securityPolicyStatus_);
      DARABONBA_PTR_TO_JSON(TLSVersions, TLSVersions_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityPoliciesResponseBodySecurityPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyName, securityPolicyName_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyStatus, securityPolicyStatus_);
      DARABONBA_PTR_FROM_JSON(TLSVersions, TLSVersions_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListSecurityPoliciesResponseBodySecurityPolicies() = default ;
    ListSecurityPoliciesResponseBodySecurityPolicies(const ListSecurityPoliciesResponseBodySecurityPolicies &) = default ;
    ListSecurityPoliciesResponseBodySecurityPolicies(ListSecurityPoliciesResponseBodySecurityPolicies &&) = default ;
    ListSecurityPoliciesResponseBodySecurityPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityPoliciesResponseBodySecurityPolicies() = default ;
    ListSecurityPoliciesResponseBodySecurityPolicies& operator=(const ListSecurityPoliciesResponseBodySecurityPolicies &) = default ;
    ListSecurityPoliciesResponseBodySecurityPolicies& operator=(ListSecurityPoliciesResponseBodySecurityPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ciphers_ != nullptr
        && this->createTime_ != nullptr && this->resourceGroupId_ != nullptr && this->securityPolicyId_ != nullptr && this->securityPolicyName_ != nullptr && this->securityPolicyStatus_ != nullptr
        && this->TLSVersions_ != nullptr && this->tags_ != nullptr; };
    // ciphers Field Functions 
    bool hasCiphers() const { return this->ciphers_ != nullptr;};
    void deleteCiphers() { this->ciphers_ = nullptr;};
    inline const vector<string> & ciphers() const { DARABONBA_PTR_GET_CONST(ciphers_, vector<string>) };
    inline vector<string> ciphers() { DARABONBA_PTR_GET(ciphers_, vector<string>) };
    inline ListSecurityPoliciesResponseBodySecurityPolicies& setCiphers(const vector<string> & ciphers) { DARABONBA_PTR_SET_VALUE(ciphers_, ciphers) };
    inline ListSecurityPoliciesResponseBodySecurityPolicies& setCiphers(vector<string> && ciphers) { DARABONBA_PTR_SET_RVALUE(ciphers_, ciphers) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSecurityPoliciesResponseBodySecurityPolicies& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListSecurityPoliciesResponseBodySecurityPolicies& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string securityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline ListSecurityPoliciesResponseBodySecurityPolicies& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // securityPolicyName Field Functions 
    bool hasSecurityPolicyName() const { return this->securityPolicyName_ != nullptr;};
    void deleteSecurityPolicyName() { this->securityPolicyName_ = nullptr;};
    inline string securityPolicyName() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyName_, "") };
    inline ListSecurityPoliciesResponseBodySecurityPolicies& setSecurityPolicyName(string securityPolicyName) { DARABONBA_PTR_SET_VALUE(securityPolicyName_, securityPolicyName) };


    // securityPolicyStatus Field Functions 
    bool hasSecurityPolicyStatus() const { return this->securityPolicyStatus_ != nullptr;};
    void deleteSecurityPolicyStatus() { this->securityPolicyStatus_ = nullptr;};
    inline string securityPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyStatus_, "") };
    inline ListSecurityPoliciesResponseBodySecurityPolicies& setSecurityPolicyStatus(string securityPolicyStatus) { DARABONBA_PTR_SET_VALUE(securityPolicyStatus_, securityPolicyStatus) };


    // TLSVersions Field Functions 
    bool hasTLSVersions() const { return this->TLSVersions_ != nullptr;};
    void deleteTLSVersions() { this->TLSVersions_ = nullptr;};
    inline const vector<string> & TLSVersions() const { DARABONBA_PTR_GET_CONST(TLSVersions_, vector<string>) };
    inline vector<string> TLSVersions() { DARABONBA_PTR_GET(TLSVersions_, vector<string>) };
    inline ListSecurityPoliciesResponseBodySecurityPolicies& setTLSVersions(const vector<string> & TLSVersions) { DARABONBA_PTR_SET_VALUE(TLSVersions_, TLSVersions) };
    inline ListSecurityPoliciesResponseBodySecurityPolicies& setTLSVersions(vector<string> && TLSVersions) { DARABONBA_PTR_SET_RVALUE(TLSVersions_, TLSVersions) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListSecurityPoliciesResponseBodySecurityPoliciesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListSecurityPoliciesResponseBodySecurityPoliciesTags>) };
    inline vector<Models::ListSecurityPoliciesResponseBodySecurityPoliciesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListSecurityPoliciesResponseBodySecurityPoliciesTags>) };
    inline ListSecurityPoliciesResponseBodySecurityPolicies& setTags(const vector<Models::ListSecurityPoliciesResponseBodySecurityPoliciesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListSecurityPoliciesResponseBodySecurityPolicies& setTags(vector<Models::ListSecurityPoliciesResponseBodySecurityPoliciesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The supported cipher suites.
    std::shared_ptr<vector<string>> ciphers_ = nullptr;
    // The time when the ACL was created. The time follows the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the security policy.
    std::shared_ptr<string> securityPolicyId_ = nullptr;
    // The name of the security policy.
    std::shared_ptr<string> securityPolicyName_ = nullptr;
    // The status of the security policy. Valid values:
    // 
    // *   **Configuring**
    // *   **Available**
    std::shared_ptr<string> securityPolicyStatus_ = nullptr;
    // The supported TLS protocol versions.
    std::shared_ptr<vector<string>> TLSVersions_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListSecurityPoliciesResponseBodySecurityPoliciesTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
