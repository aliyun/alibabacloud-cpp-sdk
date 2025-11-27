// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(ExcludeEndUserIds, excludeEndUserIds_);
      DARABONBA_PTR_TO_JSON(ExcludeGroupId, excludeGroupId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(FilterWithAssignedResource, filterWithAssignedResource_);
      DARABONBA_PTR_TO_JSON(FilterWithAssignedResources, filterWithAssignedResources_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IsQueryAllSubOrgs, isQueryAllSubOrgs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_ANY_TO_JSON(ShowExtras, showExtras_);
      DARABONBA_PTR_TO_JSON(SolutionId, solutionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(ExcludeEndUserIds, excludeEndUserIds_);
      DARABONBA_PTR_FROM_JSON(ExcludeGroupId, excludeGroupId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(FilterWithAssignedResource, filterWithAssignedResource_);
      DARABONBA_PTR_FROM_JSON(FilterWithAssignedResources, filterWithAssignedResources_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IsQueryAllSubOrgs, isQueryAllSubOrgs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_ANY_FROM_JSON(ShowExtras, showExtras_);
      DARABONBA_PTR_FROM_JSON(SolutionId, solutionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeUsersRequest() = default ;
    DescribeUsersRequest(const DescribeUsersRequest &) = default ;
    DescribeUsersRequest(DescribeUsersRequest &&) = default ;
    DescribeUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersRequest() = default ;
    DescribeUsersRequest& operator=(const DescribeUsersRequest &) = default ;
    DescribeUsersRequest& operator=(DescribeUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && return this->endUserIds_ == nullptr && return this->excludeEndUserIds_ == nullptr && return this->excludeGroupId_ == nullptr && return this->filter_ == nullptr && return this->filterWithAssignedResource_ == nullptr
        && return this->filterWithAssignedResources_ == nullptr && return this->groupId_ == nullptr && return this->isQueryAllSubOrgs_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->orgId_ == nullptr && return this->showExtras_ == nullptr && return this->solutionId_ == nullptr && return this->status_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeUsersRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & endUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> endUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline DescribeUsersRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline DescribeUsersRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // excludeEndUserIds Field Functions 
    bool hasExcludeEndUserIds() const { return this->excludeEndUserIds_ != nullptr;};
    void deleteExcludeEndUserIds() { this->excludeEndUserIds_ = nullptr;};
    inline const vector<string> & excludeEndUserIds() const { DARABONBA_PTR_GET_CONST(excludeEndUserIds_, vector<string>) };
    inline vector<string> excludeEndUserIds() { DARABONBA_PTR_GET(excludeEndUserIds_, vector<string>) };
    inline DescribeUsersRequest& setExcludeEndUserIds(const vector<string> & excludeEndUserIds) { DARABONBA_PTR_SET_VALUE(excludeEndUserIds_, excludeEndUserIds) };
    inline DescribeUsersRequest& setExcludeEndUserIds(vector<string> && excludeEndUserIds) { DARABONBA_PTR_SET_RVALUE(excludeEndUserIds_, excludeEndUserIds) };


    // excludeGroupId Field Functions 
    bool hasExcludeGroupId() const { return this->excludeGroupId_ != nullptr;};
    void deleteExcludeGroupId() { this->excludeGroupId_ = nullptr;};
    inline string excludeGroupId() const { DARABONBA_PTR_GET_DEFAULT(excludeGroupId_, "") };
    inline DescribeUsersRequest& setExcludeGroupId(string excludeGroupId) { DARABONBA_PTR_SET_VALUE(excludeGroupId_, excludeGroupId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline DescribeUsersRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // filterWithAssignedResource Field Functions 
    bool hasFilterWithAssignedResource() const { return this->filterWithAssignedResource_ != nullptr;};
    void deleteFilterWithAssignedResource() { this->filterWithAssignedResource_ = nullptr;};
    inline const map<string, string> & filterWithAssignedResource() const { DARABONBA_PTR_GET_CONST(filterWithAssignedResource_, map<string, string>) };
    inline map<string, string> filterWithAssignedResource() { DARABONBA_PTR_GET(filterWithAssignedResource_, map<string, string>) };
    inline DescribeUsersRequest& setFilterWithAssignedResource(const map<string, string> & filterWithAssignedResource) { DARABONBA_PTR_SET_VALUE(filterWithAssignedResource_, filterWithAssignedResource) };
    inline DescribeUsersRequest& setFilterWithAssignedResource(map<string, string> && filterWithAssignedResource) { DARABONBA_PTR_SET_RVALUE(filterWithAssignedResource_, filterWithAssignedResource) };


    // filterWithAssignedResources Field Functions 
    bool hasFilterWithAssignedResources() const { return this->filterWithAssignedResources_ != nullptr;};
    void deleteFilterWithAssignedResources() { this->filterWithAssignedResources_ = nullptr;};
    inline const map<string, bool> & filterWithAssignedResources() const { DARABONBA_PTR_GET_CONST(filterWithAssignedResources_, map<string, bool>) };
    inline map<string, bool> filterWithAssignedResources() { DARABONBA_PTR_GET(filterWithAssignedResources_, map<string, bool>) };
    inline DescribeUsersRequest& setFilterWithAssignedResources(const map<string, bool> & filterWithAssignedResources) { DARABONBA_PTR_SET_VALUE(filterWithAssignedResources_, filterWithAssignedResources) };
    inline DescribeUsersRequest& setFilterWithAssignedResources(map<string, bool> && filterWithAssignedResources) { DARABONBA_PTR_SET_RVALUE(filterWithAssignedResources_, filterWithAssignedResources) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeUsersRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isQueryAllSubOrgs Field Functions 
    bool hasIsQueryAllSubOrgs() const { return this->isQueryAllSubOrgs_ != nullptr;};
    void deleteIsQueryAllSubOrgs() { this->isQueryAllSubOrgs_ = nullptr;};
    inline bool isQueryAllSubOrgs() const { DARABONBA_PTR_GET_DEFAULT(isQueryAllSubOrgs_, false) };
    inline DescribeUsersRequest& setIsQueryAllSubOrgs(bool isQueryAllSubOrgs) { DARABONBA_PTR_SET_VALUE(isQueryAllSubOrgs_, isQueryAllSubOrgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeUsersRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUsersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline DescribeUsersRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // showExtras Field Functions 
    bool hasShowExtras() const { return this->showExtras_ != nullptr;};
    void deleteShowExtras() { this->showExtras_ = nullptr;};
    inline     const Darabonba::Json & showExtras() const { DARABONBA_GET(showExtras_) };
    Darabonba::Json & showExtras() { DARABONBA_GET(showExtras_) };
    inline DescribeUsersRequest& setShowExtras(const Darabonba::Json & showExtras) { DARABONBA_SET_VALUE(showExtras_, showExtras) };
    inline DescribeUsersRequest& setShowExtras(Darabonba::Json & showExtras) { DARABONBA_SET_RVALUE(showExtras_, showExtras) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline DescribeUsersRequest& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeUsersRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> bizType_ = nullptr;
    // The usernames that must be exactly matched.
    std::shared_ptr<vector<string>> endUserIds_ = nullptr;
    // The usernames that must be exactly excluded.
    std::shared_ptr<vector<string>> excludeEndUserIds_ = nullptr;
    std::shared_ptr<string> excludeGroupId_ = nullptr;
    // The string that is used for fuzzy search. You perform fuzzy search by username (EndUserId) and email address (Email). Wildcard characters (\\*) are supported. For example, if you set this parameter to `a*m`, usernames or email addresses that start with `a` and end with `m` are returned.
    std::shared_ptr<string> filter_ = nullptr;
    std::shared_ptr<map<string, string>> filterWithAssignedResource_ = nullptr;
    std::shared_ptr<map<string, bool>> filterWithAssignedResources_ = nullptr;
    // The ID of the organization in which you want to query convenience users.
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<bool> isQueryAllSubOrgs_ = nullptr;
    // The maximum number of entries per page.
    // 
    // *   Valid values: 1 to 500.
    // *   Default value: 500.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request.\\
    // If not all results are returned in a query, a value is returned for the NextToken parameter. In this case, you can use the return value of NextToken to perform the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the organization in which you want to query users.
    std::shared_ptr<string> orgId_ = nullptr;
    Darabonba::Json showExtras_ = nullptr;
    std::shared_ptr<string> solutionId_ = nullptr;
    // The status.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
