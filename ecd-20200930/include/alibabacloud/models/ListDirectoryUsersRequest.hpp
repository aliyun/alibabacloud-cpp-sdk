// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIRECTORYUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIRECTORYUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListDirectoryUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDirectoryUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssignedInfo, assignedInfo_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(IncludeAssignedUser, includeAssignedUser_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OUPath, OUPath_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDirectoryUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignedInfo, assignedInfo_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(IncludeAssignedUser, includeAssignedUser_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OUPath, OUPath_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
    };
    ListDirectoryUsersRequest() = default ;
    ListDirectoryUsersRequest(const ListDirectoryUsersRequest &) = default ;
    ListDirectoryUsersRequest(ListDirectoryUsersRequest &&) = default ;
    ListDirectoryUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDirectoryUsersRequest() = default ;
    ListDirectoryUsersRequest& operator=(const ListDirectoryUsersRequest &) = default ;
    ListDirectoryUsersRequest& operator=(ListDirectoryUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assignedInfo_ != nullptr
        && this->directoryId_ != nullptr && this->filter_ != nullptr && this->includeAssignedUser_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr
        && this->OUPath_ != nullptr && this->regionId_ != nullptr && this->sortType_ != nullptr; };
    // assignedInfo Field Functions 
    bool hasAssignedInfo() const { return this->assignedInfo_ != nullptr;};
    void deleteAssignedInfo() { this->assignedInfo_ = nullptr;};
    inline string assignedInfo() const { DARABONBA_PTR_GET_DEFAULT(assignedInfo_, "") };
    inline ListDirectoryUsersRequest& setAssignedInfo(string assignedInfo) { DARABONBA_PTR_SET_VALUE(assignedInfo_, assignedInfo) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline ListDirectoryUsersRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListDirectoryUsersRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // includeAssignedUser Field Functions 
    bool hasIncludeAssignedUser() const { return this->includeAssignedUser_ != nullptr;};
    void deleteIncludeAssignedUser() { this->includeAssignedUser_ = nullptr;};
    inline bool includeAssignedUser() const { DARABONBA_PTR_GET_DEFAULT(includeAssignedUser_, false) };
    inline ListDirectoryUsersRequest& setIncludeAssignedUser(bool includeAssignedUser) { DARABONBA_PTR_SET_VALUE(includeAssignedUser_, includeAssignedUser) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDirectoryUsersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDirectoryUsersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // OUPath Field Functions 
    bool hasOUPath() const { return this->OUPath_ != nullptr;};
    void deleteOUPath() { this->OUPath_ = nullptr;};
    inline string OUPath() const { DARABONBA_PTR_GET_DEFAULT(OUPath_, "") };
    inline ListDirectoryUsersRequest& setOUPath(string OUPath) { DARABONBA_PTR_SET_VALUE(OUPath_, OUPath) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDirectoryUsersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string sortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline ListDirectoryUsersRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


  protected:
    // > This parameter is not publicly available. The value can be 1 or left empty.
    std::shared_ptr<string> assignedInfo_ = nullptr;
    // The ID of the AD directory.
    // 
    // This parameter is required.
    std::shared_ptr<string> directoryId_ = nullptr;
    // The query string for fuzzy match. If you specify this parameter, the system returns all results that contain the string.
    std::shared_ptr<string> filter_ = nullptr;
    // Specifies whether to return the users with assigned cloud computers only.
    std::shared_ptr<bool> includeAssignedUser_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token used to start the next query. If the value of this parameter is empty, all results are returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The organizational unit (OU) in the specified AD domain.
    std::shared_ptr<string> OUPath_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The sort type.
    // 
    // Valide values:
    // 
    // - asc: cloud computers assigned to users on bottom
    // - desc: cloud computers assigned to users on top
    std::shared_ptr<string> sortType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
