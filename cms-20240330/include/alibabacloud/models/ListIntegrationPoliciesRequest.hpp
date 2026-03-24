// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPoliciesRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPoliciesRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListIntegrationPoliciesRequest() = default ;
    ListIntegrationPoliciesRequest(const ListIntegrationPoliciesRequest &) = default ;
    ListIntegrationPoliciesRequest(ListIntegrationPoliciesRequest &&) = default ;
    ListIntegrationPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPoliciesRequest() = default ;
    ListIntegrationPoliciesRequest& operator=(const ListIntegrationPoliciesRequest &) = default ;
    ListIntegrationPoliciesRequest& operator=(ListIntegrationPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
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
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->addonName_ == nullptr
        && this->bindResourceId_ == nullptr && this->entityGroupIds_ == nullptr && this->filterRegionIds_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->policyId_ == nullptr && this->policyName_ == nullptr && this->policyType_ == nullptr && this->prometheusInstanceId_ == nullptr && this->query_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tag_ == nullptr && this->workspace_ == nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string getAddonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListIntegrationPoliciesRequest& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // bindResourceId Field Functions 
    bool hasBindResourceId() const { return this->bindResourceId_ != nullptr;};
    void deleteBindResourceId() { this->bindResourceId_ = nullptr;};
    inline string getBindResourceId() const { DARABONBA_PTR_GET_DEFAULT(bindResourceId_, "") };
    inline ListIntegrationPoliciesRequest& setBindResourceId(string bindResourceId) { DARABONBA_PTR_SET_VALUE(bindResourceId_, bindResourceId) };


    // entityGroupIds Field Functions 
    bool hasEntityGroupIds() const { return this->entityGroupIds_ != nullptr;};
    void deleteEntityGroupIds() { this->entityGroupIds_ = nullptr;};
    inline string getEntityGroupIds() const { DARABONBA_PTR_GET_DEFAULT(entityGroupIds_, "") };
    inline ListIntegrationPoliciesRequest& setEntityGroupIds(string entityGroupIds) { DARABONBA_PTR_SET_VALUE(entityGroupIds_, entityGroupIds) };


    // filterRegionIds Field Functions 
    bool hasFilterRegionIds() const { return this->filterRegionIds_ != nullptr;};
    void deleteFilterRegionIds() { this->filterRegionIds_ = nullptr;};
    inline string getFilterRegionIds() const { DARABONBA_PTR_GET_DEFAULT(filterRegionIds_, "") };
    inline ListIntegrationPoliciesRequest& setFilterRegionIds(string filterRegionIds) { DARABONBA_PTR_SET_VALUE(filterRegionIds_, filterRegionIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIntegrationPoliciesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIntegrationPoliciesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListIntegrationPoliciesRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListIntegrationPoliciesRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListIntegrationPoliciesRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // prometheusInstanceId Field Functions 
    bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
    void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
    inline string getPrometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
    inline ListIntegrationPoliciesRequest& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListIntegrationPoliciesRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIntegrationPoliciesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListIntegrationPoliciesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListIntegrationPoliciesRequest::Tag>) };
    inline vector<ListIntegrationPoliciesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListIntegrationPoliciesRequest::Tag>) };
    inline ListIntegrationPoliciesRequest& setTag(const vector<ListIntegrationPoliciesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListIntegrationPoliciesRequest& setTag(vector<ListIntegrationPoliciesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListIntegrationPoliciesRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The add-on name.
    shared_ptr<string> addonName_ {};
    // The ID of the attached resource.
    shared_ptr<string> bindResourceId_ {};
    // The IDs of the entity groups to filter by. Separate multiple IDs with commas.
    shared_ptr<string> entityGroupIds_ {};
    // The IDs of the regions to query. Separate multiple region IDs with commas.
    shared_ptr<string> filterRegionIds_ {};
    // The maximum number of entries to return on each page. The default value is 30. The maximum value is 100.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results. You do not need to specify this parameter for the first request. You can obtain the token from the response to the previous request.
    shared_ptr<string> nextToken_ {};
    // The policy ID.
    shared_ptr<string> policyId_ {};
    // The policy name.
    shared_ptr<string> policyName_ {};
    // The policy type.
    shared_ptr<string> policyType_ {};
    // The instance ID.
    shared_ptr<string> prometheusInstanceId_ {};
    // A general-purpose query string.
    shared_ptr<string> query_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The list of tags.
    shared_ptr<vector<ListIntegrationPoliciesRequest::Tag>> tag_ {};
    // The workspace.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
