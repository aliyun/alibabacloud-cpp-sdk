// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPoliciesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPoliciesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addonName, addonName_);
      DARABONBA_PTR_TO_JSON(bindResourceId, bindResourceId_);
      DARABONBA_PTR_TO_JSON(entityGroupIds, entityGroupIds_);
      DARABONBA_PTR_TO_JSON(filterRegionIds, filterRegionIds_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
      DARABONBA_PTR_TO_JSON(policyName, policyName_);
      DARABONBA_PTR_TO_JSON(policyType, policyType_);
      DARABONBA_PTR_TO_JSON(prometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tag, tagShrink_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPoliciesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addonName, addonName_);
      DARABONBA_PTR_FROM_JSON(bindResourceId, bindResourceId_);
      DARABONBA_PTR_FROM_JSON(entityGroupIds, entityGroupIds_);
      DARABONBA_PTR_FROM_JSON(filterRegionIds, filterRegionIds_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
      DARABONBA_PTR_FROM_JSON(policyName, policyName_);
      DARABONBA_PTR_FROM_JSON(policyType, policyType_);
      DARABONBA_PTR_FROM_JSON(prometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tag, tagShrink_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListIntegrationPoliciesShrinkRequest() = default ;
    ListIntegrationPoliciesShrinkRequest(const ListIntegrationPoliciesShrinkRequest &) = default ;
    ListIntegrationPoliciesShrinkRequest(ListIntegrationPoliciesShrinkRequest &&) = default ;
    ListIntegrationPoliciesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPoliciesShrinkRequest() = default ;
    ListIntegrationPoliciesShrinkRequest& operator=(const ListIntegrationPoliciesShrinkRequest &) = default ;
    ListIntegrationPoliciesShrinkRequest& operator=(ListIntegrationPoliciesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonName_ == nullptr
        && return this->bindResourceId_ == nullptr && return this->entityGroupIds_ == nullptr && return this->filterRegionIds_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->policyId_ == nullptr && return this->policyName_ == nullptr && return this->policyType_ == nullptr && return this->prometheusInstanceId_ == nullptr && return this->query_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->tagShrink_ == nullptr && return this->workspace_ == nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListIntegrationPoliciesShrinkRequest& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // bindResourceId Field Functions 
    bool hasBindResourceId() const { return this->bindResourceId_ != nullptr;};
    void deleteBindResourceId() { this->bindResourceId_ = nullptr;};
    inline string bindResourceId() const { DARABONBA_PTR_GET_DEFAULT(bindResourceId_, "") };
    inline ListIntegrationPoliciesShrinkRequest& setBindResourceId(string bindResourceId) { DARABONBA_PTR_SET_VALUE(bindResourceId_, bindResourceId) };


    // entityGroupIds Field Functions 
    bool hasEntityGroupIds() const { return this->entityGroupIds_ != nullptr;};
    void deleteEntityGroupIds() { this->entityGroupIds_ = nullptr;};
    inline string entityGroupIds() const { DARABONBA_PTR_GET_DEFAULT(entityGroupIds_, "") };
    inline ListIntegrationPoliciesShrinkRequest& setEntityGroupIds(string entityGroupIds) { DARABONBA_PTR_SET_VALUE(entityGroupIds_, entityGroupIds) };


    // filterRegionIds Field Functions 
    bool hasFilterRegionIds() const { return this->filterRegionIds_ != nullptr;};
    void deleteFilterRegionIds() { this->filterRegionIds_ = nullptr;};
    inline string filterRegionIds() const { DARABONBA_PTR_GET_DEFAULT(filterRegionIds_, "") };
    inline ListIntegrationPoliciesShrinkRequest& setFilterRegionIds(string filterRegionIds) { DARABONBA_PTR_SET_VALUE(filterRegionIds_, filterRegionIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIntegrationPoliciesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIntegrationPoliciesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListIntegrationPoliciesShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListIntegrationPoliciesShrinkRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListIntegrationPoliciesShrinkRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // prometheusInstanceId Field Functions 
    bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
    void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
    inline string prometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
    inline ListIntegrationPoliciesShrinkRequest& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListIntegrationPoliciesShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIntegrationPoliciesShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string tagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline ListIntegrationPoliciesShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListIntegrationPoliciesShrinkRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Addon name.
    std::shared_ptr<string> addonName_ = nullptr;
    // Bound resource ID
    std::shared_ptr<string> bindResourceId_ = nullptr;
    // Filter for entity IDs, separated by commas
    std::shared_ptr<string> entityGroupIds_ = nullptr;
    // Used for Region query, separated by commas
    std::shared_ptr<string> filterRegionIds_ = nullptr;
    // Maximum number of results to return. Default is 30, with a maximum of 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Used to return more results. This parameter is not required for the first query. For subsequent queries, use the Token obtained from the response.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Policy ID.
    std::shared_ptr<string> policyId_ = nullptr;
    // Rule name.
    std::shared_ptr<string> policyName_ = nullptr;
    // Policy type
    std::shared_ptr<string> policyType_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> prometheusInstanceId_ = nullptr;
    // Used for general queries
    std::shared_ptr<string> query_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Tag list.
    std::shared_ptr<string> tagShrink_ = nullptr;
    // Workspace.
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
