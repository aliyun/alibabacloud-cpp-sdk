// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOFFICESITEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOFFICESITEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListOfficeSiteUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOfficeSiteUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssignedInfo, assignedInfo_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(IncludeAssignedUser, includeAssignedUser_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OUPath, OUPath_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
    };
    friend void from_json(const Darabonba::Json& j, ListOfficeSiteUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignedInfo, assignedInfo_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(IncludeAssignedUser, includeAssignedUser_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OUPath, OUPath_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
    };
    ListOfficeSiteUsersRequest() = default ;
    ListOfficeSiteUsersRequest(const ListOfficeSiteUsersRequest &) = default ;
    ListOfficeSiteUsersRequest(ListOfficeSiteUsersRequest &&) = default ;
    ListOfficeSiteUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOfficeSiteUsersRequest() = default ;
    ListOfficeSiteUsersRequest& operator=(const ListOfficeSiteUsersRequest &) = default ;
    ListOfficeSiteUsersRequest& operator=(ListOfficeSiteUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedInfo_ == nullptr
        && this->filter_ == nullptr && this->includeAssignedUser_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->OUPath_ == nullptr
        && this->officeSiteId_ == nullptr && this->regionId_ == nullptr && this->sortType_ == nullptr; };
    // assignedInfo Field Functions 
    bool hasAssignedInfo() const { return this->assignedInfo_ != nullptr;};
    void deleteAssignedInfo() { this->assignedInfo_ = nullptr;};
    inline string getAssignedInfo() const { DARABONBA_PTR_GET_DEFAULT(assignedInfo_, "") };
    inline ListOfficeSiteUsersRequest& setAssignedInfo(string assignedInfo) { DARABONBA_PTR_SET_VALUE(assignedInfo_, assignedInfo) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListOfficeSiteUsersRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // includeAssignedUser Field Functions 
    bool hasIncludeAssignedUser() const { return this->includeAssignedUser_ != nullptr;};
    void deleteIncludeAssignedUser() { this->includeAssignedUser_ = nullptr;};
    inline bool getIncludeAssignedUser() const { DARABONBA_PTR_GET_DEFAULT(includeAssignedUser_, false) };
    inline ListOfficeSiteUsersRequest& setIncludeAssignedUser(bool includeAssignedUser) { DARABONBA_PTR_SET_VALUE(includeAssignedUser_, includeAssignedUser) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOfficeSiteUsersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOfficeSiteUsersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // OUPath Field Functions 
    bool hasOUPath() const { return this->OUPath_ != nullptr;};
    void deleteOUPath() { this->OUPath_ = nullptr;};
    inline string getOUPath() const { DARABONBA_PTR_GET_DEFAULT(OUPath_, "") };
    inline ListOfficeSiteUsersRequest& setOUPath(string OUPath) { DARABONBA_PTR_SET_VALUE(OUPath_, OUPath) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ListOfficeSiteUsersRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOfficeSiteUsersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline ListOfficeSiteUsersRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


  protected:
    shared_ptr<string> assignedInfo_ {};
    // The query string for fuzzy query.
    shared_ptr<string> filter_ {};
    shared_ptr<bool> includeAssignedUser_ {};
    // The number of entries per page.
    // 
    // *   Valid values: 1 to 100.
    // *   Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request or if no next query exists. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The organizational unit (OU) of the specified AD domain.
    shared_ptr<string> OUPath_ {};
    // The office network ID. The office network must be of the enterprise AD account type.
    // 
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> sortType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
