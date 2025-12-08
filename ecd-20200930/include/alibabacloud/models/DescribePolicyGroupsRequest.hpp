// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePolicyGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(ExternalPolicyGroupIds, externalPolicyGroupIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(ExternalPolicyGroupIds, externalPolicyGroupIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    DescribePolicyGroupsRequest() = default ;
    DescribePolicyGroupsRequest(const DescribePolicyGroupsRequest &) = default ;
    DescribePolicyGroupsRequest(DescribePolicyGroupsRequest &&) = default ;
    DescribePolicyGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGroupsRequest() = default ;
    DescribePolicyGroupsRequest& operator=(const DescribePolicyGroupsRequest &) = default ;
    DescribePolicyGroupsRequest& operator=(DescribePolicyGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && return this->externalPolicyGroupIds_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->policyGroupId_ == nullptr && return this->regionId_ == nullptr && return this->scope_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string businessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline DescribePolicyGroupsRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // externalPolicyGroupIds Field Functions 
    bool hasExternalPolicyGroupIds() const { return this->externalPolicyGroupIds_ != nullptr;};
    void deleteExternalPolicyGroupIds() { this->externalPolicyGroupIds_ = nullptr;};
    inline const vector<string> & externalPolicyGroupIds() const { DARABONBA_PTR_GET_CONST(externalPolicyGroupIds_, vector<string>) };
    inline vector<string> externalPolicyGroupIds() { DARABONBA_PTR_GET(externalPolicyGroupIds_, vector<string>) };
    inline DescribePolicyGroupsRequest& setExternalPolicyGroupIds(const vector<string> & externalPolicyGroupIds) { DARABONBA_PTR_SET_VALUE(externalPolicyGroupIds_, externalPolicyGroupIds) };
    inline DescribePolicyGroupsRequest& setExternalPolicyGroupIds(vector<string> && externalPolicyGroupIds) { DARABONBA_PTR_SET_RVALUE(externalPolicyGroupIds_, externalPolicyGroupIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePolicyGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePolicyGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePolicyGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePolicyGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline const vector<string> & policyGroupId() const { DARABONBA_PTR_GET_CONST(policyGroupId_, vector<string>) };
    inline vector<string> policyGroupId() { DARABONBA_PTR_GET(policyGroupId_, vector<string>) };
    inline DescribePolicyGroupsRequest& setPolicyGroupId(const vector<string> & policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };
    inline DescribePolicyGroupsRequest& setPolicyGroupId(vector<string> && policyGroupId) { DARABONBA_PTR_SET_RVALUE(policyGroupId_, policyGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePolicyGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribePolicyGroupsRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    std::shared_ptr<string> businessChannel_ = nullptr;
    // The array of cloud computer policy IDs to be excluded.
    std::shared_ptr<vector<string>> externalPolicyGroupIds_ = nullptr;
    // The number of entries per page.
    // 
    // *   Valid values: 1 to 100
    // *   Default value: 10
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The IDs of the cloud computer policies.
    std::shared_ptr<vector<string>> policyGroupId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the regions supported by Elastic Desktop Service (EDS).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The effective scope of the cloud computer policy.
    // 
    // Valid values:
    // 
    // *   ALL
    // *   IP
    // *   GLOBAL
    std::shared_ptr<string> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
