// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeUsersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(ExcludeEndUserIds, excludeEndUserIds_);
      DARABONBA_PTR_TO_JSON(ExcludeGroupId, excludeGroupId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(FilterWithAssignedResource, filterWithAssignedResourceShrink_);
      DARABONBA_PTR_TO_JSON(FilterWithAssignedResources, filterWithAssignedResourcesShrink_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IsQueryAllSubOrgs, isQueryAllSubOrgs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(ShowExtras, showExtrasShrink_);
      DARABONBA_PTR_TO_JSON(SolutionId, solutionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(ExcludeEndUserIds, excludeEndUserIds_);
      DARABONBA_PTR_FROM_JSON(ExcludeGroupId, excludeGroupId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(FilterWithAssignedResource, filterWithAssignedResourceShrink_);
      DARABONBA_PTR_FROM_JSON(FilterWithAssignedResources, filterWithAssignedResourcesShrink_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IsQueryAllSubOrgs, isQueryAllSubOrgs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(ShowExtras, showExtrasShrink_);
      DARABONBA_PTR_FROM_JSON(SolutionId, solutionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeUsersShrinkRequest() = default ;
    DescribeUsersShrinkRequest(const DescribeUsersShrinkRequest &) = default ;
    DescribeUsersShrinkRequest(DescribeUsersShrinkRequest &&) = default ;
    DescribeUsersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersShrinkRequest() = default ;
    DescribeUsersShrinkRequest& operator=(const DescribeUsersShrinkRequest &) = default ;
    DescribeUsersShrinkRequest& operator=(DescribeUsersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->endUserIds_ != nullptr && this->excludeEndUserIds_ != nullptr && this->excludeGroupId_ != nullptr && this->filter_ != nullptr && this->filterWithAssignedResourceShrink_ != nullptr
        && this->filterWithAssignedResourcesShrink_ != nullptr && this->groupId_ != nullptr && this->isQueryAllSubOrgs_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr
        && this->orgId_ != nullptr && this->showExtrasShrink_ != nullptr && this->solutionId_ != nullptr && this->status_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeUsersShrinkRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & endUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> endUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline DescribeUsersShrinkRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline DescribeUsersShrinkRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // excludeEndUserIds Field Functions 
    bool hasExcludeEndUserIds() const { return this->excludeEndUserIds_ != nullptr;};
    void deleteExcludeEndUserIds() { this->excludeEndUserIds_ = nullptr;};
    inline const vector<string> & excludeEndUserIds() const { DARABONBA_PTR_GET_CONST(excludeEndUserIds_, vector<string>) };
    inline vector<string> excludeEndUserIds() { DARABONBA_PTR_GET(excludeEndUserIds_, vector<string>) };
    inline DescribeUsersShrinkRequest& setExcludeEndUserIds(const vector<string> & excludeEndUserIds) { DARABONBA_PTR_SET_VALUE(excludeEndUserIds_, excludeEndUserIds) };
    inline DescribeUsersShrinkRequest& setExcludeEndUserIds(vector<string> && excludeEndUserIds) { DARABONBA_PTR_SET_RVALUE(excludeEndUserIds_, excludeEndUserIds) };


    // excludeGroupId Field Functions 
    bool hasExcludeGroupId() const { return this->excludeGroupId_ != nullptr;};
    void deleteExcludeGroupId() { this->excludeGroupId_ = nullptr;};
    inline string excludeGroupId() const { DARABONBA_PTR_GET_DEFAULT(excludeGroupId_, "") };
    inline DescribeUsersShrinkRequest& setExcludeGroupId(string excludeGroupId) { DARABONBA_PTR_SET_VALUE(excludeGroupId_, excludeGroupId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline DescribeUsersShrinkRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // filterWithAssignedResourceShrink Field Functions 
    bool hasFilterWithAssignedResourceShrink() const { return this->filterWithAssignedResourceShrink_ != nullptr;};
    void deleteFilterWithAssignedResourceShrink() { this->filterWithAssignedResourceShrink_ = nullptr;};
    inline string filterWithAssignedResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(filterWithAssignedResourceShrink_, "") };
    inline DescribeUsersShrinkRequest& setFilterWithAssignedResourceShrink(string filterWithAssignedResourceShrink) { DARABONBA_PTR_SET_VALUE(filterWithAssignedResourceShrink_, filterWithAssignedResourceShrink) };


    // filterWithAssignedResourcesShrink Field Functions 
    bool hasFilterWithAssignedResourcesShrink() const { return this->filterWithAssignedResourcesShrink_ != nullptr;};
    void deleteFilterWithAssignedResourcesShrink() { this->filterWithAssignedResourcesShrink_ = nullptr;};
    inline string filterWithAssignedResourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(filterWithAssignedResourcesShrink_, "") };
    inline DescribeUsersShrinkRequest& setFilterWithAssignedResourcesShrink(string filterWithAssignedResourcesShrink) { DARABONBA_PTR_SET_VALUE(filterWithAssignedResourcesShrink_, filterWithAssignedResourcesShrink) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeUsersShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isQueryAllSubOrgs Field Functions 
    bool hasIsQueryAllSubOrgs() const { return this->isQueryAllSubOrgs_ != nullptr;};
    void deleteIsQueryAllSubOrgs() { this->isQueryAllSubOrgs_ = nullptr;};
    inline bool isQueryAllSubOrgs() const { DARABONBA_PTR_GET_DEFAULT(isQueryAllSubOrgs_, false) };
    inline DescribeUsersShrinkRequest& setIsQueryAllSubOrgs(bool isQueryAllSubOrgs) { DARABONBA_PTR_SET_VALUE(isQueryAllSubOrgs_, isQueryAllSubOrgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeUsersShrinkRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUsersShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline DescribeUsersShrinkRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // showExtrasShrink Field Functions 
    bool hasShowExtrasShrink() const { return this->showExtrasShrink_ != nullptr;};
    void deleteShowExtrasShrink() { this->showExtrasShrink_ = nullptr;};
    inline string showExtrasShrink() const { DARABONBA_PTR_GET_DEFAULT(showExtrasShrink_, "") };
    inline DescribeUsersShrinkRequest& setShowExtrasShrink(string showExtrasShrink) { DARABONBA_PTR_SET_VALUE(showExtrasShrink_, showExtrasShrink) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline DescribeUsersShrinkRequest& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeUsersShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> bizType_ = nullptr;
    // The usernames that must be exactly matched.
    std::shared_ptr<vector<string>> endUserIds_ = nullptr;
    // The usernames that must be exactly excluded.
    std::shared_ptr<vector<string>> excludeEndUserIds_ = nullptr;
    std::shared_ptr<string> excludeGroupId_ = nullptr;
    // The string that is used for fuzzy search. You perform fuzzy search by username (EndUserId) and email address (Email). Wildcard characters (\\*) are supported. For example, if you set this parameter to `a*m`, usernames or email addresses that start with `a` and end with `m` are returned.
    std::shared_ptr<string> filter_ = nullptr;
    std::shared_ptr<string> filterWithAssignedResourceShrink_ = nullptr;
    std::shared_ptr<string> filterWithAssignedResourcesShrink_ = nullptr;
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
    std::shared_ptr<string> showExtrasShrink_ = nullptr;
    std::shared_ptr<string> solutionId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
