// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSecurityPolicyRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListSecurityPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyIds, securityPolicyIds_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyNames, securityPolicyNames_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyIds, securityPolicyIds_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyNames, securityPolicyNames_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListSecurityPolicyRequest() = default ;
    ListSecurityPolicyRequest(const ListSecurityPolicyRequest &) = default ;
    ListSecurityPolicyRequest(ListSecurityPolicyRequest &&) = default ;
    ListSecurityPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityPolicyRequest() = default ;
    ListSecurityPolicyRequest& operator=(const ListSecurityPolicyRequest &) = default ;
    ListSecurityPolicyRequest& operator=(ListSecurityPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->securityPolicyIds_ != nullptr && this->securityPolicyNames_ != nullptr
        && this->tag_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSecurityPolicyRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSecurityPolicyRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSecurityPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListSecurityPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityPolicyIds Field Functions 
    bool hasSecurityPolicyIds() const { return this->securityPolicyIds_ != nullptr;};
    void deleteSecurityPolicyIds() { this->securityPolicyIds_ = nullptr;};
    inline const vector<string> & securityPolicyIds() const { DARABONBA_PTR_GET_CONST(securityPolicyIds_, vector<string>) };
    inline vector<string> securityPolicyIds() { DARABONBA_PTR_GET(securityPolicyIds_, vector<string>) };
    inline ListSecurityPolicyRequest& setSecurityPolicyIds(const vector<string> & securityPolicyIds) { DARABONBA_PTR_SET_VALUE(securityPolicyIds_, securityPolicyIds) };
    inline ListSecurityPolicyRequest& setSecurityPolicyIds(vector<string> && securityPolicyIds) { DARABONBA_PTR_SET_RVALUE(securityPolicyIds_, securityPolicyIds) };


    // securityPolicyNames Field Functions 
    bool hasSecurityPolicyNames() const { return this->securityPolicyNames_ != nullptr;};
    void deleteSecurityPolicyNames() { this->securityPolicyNames_ = nullptr;};
    inline const vector<string> & securityPolicyNames() const { DARABONBA_PTR_GET_CONST(securityPolicyNames_, vector<string>) };
    inline vector<string> securityPolicyNames() { DARABONBA_PTR_GET(securityPolicyNames_, vector<string>) };
    inline ListSecurityPolicyRequest& setSecurityPolicyNames(const vector<string> & securityPolicyNames) { DARABONBA_PTR_SET_VALUE(securityPolicyNames_, securityPolicyNames) };
    inline ListSecurityPolicyRequest& setSecurityPolicyNames(vector<string> && securityPolicyNames) { DARABONBA_PTR_SET_RVALUE(securityPolicyNames_, securityPolicyNames) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListSecurityPolicyRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListSecurityPolicyRequestTag>) };
    inline vector<ListSecurityPolicyRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListSecurityPolicyRequestTag>) };
    inline ListSecurityPolicyRequest& setTag(const vector<ListSecurityPolicyRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListSecurityPolicyRequest& setTag(vector<ListSecurityPolicyRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The number of entries to return per page. Valid values: **1** to **100**. Default value: **20**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID of the NLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The IDs of the TLS security policies. You can specify at most 20 policy IDs in each call.
    std::shared_ptr<vector<string>> securityPolicyIds_ = nullptr;
    // The names of the TLS security policies. You can specify at most 20 policy names.
    std::shared_ptr<vector<string>> securityPolicyNames_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListSecurityPolicyRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
