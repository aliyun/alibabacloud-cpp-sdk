// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEGROUPSREQUEST_HPP_
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
  class DescribeCloudDriveGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDriveGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(DirectoryName, directoryName_);
      DARABONBA_PTR_TO_JSON(DriveStatus, driveStatus_);
      DARABONBA_PTR_TO_JSON(DriveType, driveType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ParentGroupId, parentGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDriveGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(DirectoryName, directoryName_);
      DARABONBA_PTR_FROM_JSON(DriveStatus, driveStatus_);
      DARABONBA_PTR_FROM_JSON(DriveType, driveType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ParentGroupId, parentGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeCloudDriveGroupsRequest() = default ;
    DescribeCloudDriveGroupsRequest(const DescribeCloudDriveGroupsRequest &) = default ;
    DescribeCloudDriveGroupsRequest(DescribeCloudDriveGroupsRequest &&) = default ;
    DescribeCloudDriveGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDriveGroupsRequest() = default ;
    DescribeCloudDriveGroupsRequest& operator=(const DescribeCloudDriveGroupsRequest &) = default ;
    DescribeCloudDriveGroupsRequest& operator=(DescribeCloudDriveGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->directoryId_ == nullptr && this->directoryName_ == nullptr && this->driveStatus_ == nullptr && this->driveType_ == nullptr && this->groupId_ == nullptr
        && this->groupName_ == nullptr && this->groupType_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->parentGroupId_ == nullptr
        && this->regionId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string getCdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline DescribeCloudDriveGroupsRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DescribeCloudDriveGroupsRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // directoryName Field Functions 
    bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
    void deleteDirectoryName() { this->directoryName_ = nullptr;};
    inline string getDirectoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
    inline DescribeCloudDriveGroupsRequest& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


    // driveStatus Field Functions 
    bool hasDriveStatus() const { return this->driveStatus_ != nullptr;};
    void deleteDriveStatus() { this->driveStatus_ = nullptr;};
    inline string getDriveStatus() const { DARABONBA_PTR_GET_DEFAULT(driveStatus_, "") };
    inline DescribeCloudDriveGroupsRequest& setDriveStatus(string driveStatus) { DARABONBA_PTR_SET_VALUE(driveStatus_, driveStatus) };


    // driveType Field Functions 
    bool hasDriveType() const { return this->driveType_ != nullptr;};
    void deleteDriveType() { this->driveType_ = nullptr;};
    inline string getDriveType() const { DARABONBA_PTR_GET_DEFAULT(driveType_, "") };
    inline DescribeCloudDriveGroupsRequest& setDriveType(string driveType) { DARABONBA_PTR_SET_VALUE(driveType_, driveType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline const vector<string> & getGroupId() const { DARABONBA_PTR_GET_CONST(groupId_, vector<string>) };
    inline vector<string> getGroupId() { DARABONBA_PTR_GET(groupId_, vector<string>) };
    inline DescribeCloudDriveGroupsRequest& setGroupId(const vector<string> & groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };
    inline DescribeCloudDriveGroupsRequest& setGroupId(vector<string> && groupId) { DARABONBA_PTR_SET_RVALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeCloudDriveGroupsRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeCloudDriveGroupsRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCloudDriveGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCloudDriveGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // parentGroupId Field Functions 
    bool hasParentGroupId() const { return this->parentGroupId_ != nullptr;};
    void deleteParentGroupId() { this->parentGroupId_ = nullptr;};
    inline string getParentGroupId() const { DARABONBA_PTR_GET_DEFAULT(parentGroupId_, "") };
    inline DescribeCloudDriveGroupsRequest& setParentGroupId(string parentGroupId) { DARABONBA_PTR_SET_VALUE(parentGroupId_, parentGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCloudDriveGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the cloud disk in Cloud Drive Service.
    // 
    // This parameter is required.
    shared_ptr<string> cdsId_ {};
    // The workspace ID.
    shared_ptr<string> directoryId_ {};
    // The workspace name.
    shared_ptr<string> directoryName_ {};
    // The team space status. Valid values:
    // 
    // *   enabled
    // *   disabled
    // 
    // Default value: enabled.
    shared_ptr<string> driveStatus_ {};
    // Specifies whether the space is increased.
    // 
    // *   binding: increased
    // *   unbound: not increased
    // 
    // Default value: null. The default value indicates that all spaces are queried.
    shared_ptr<string> driveType_ {};
    // The team ID.
    shared_ptr<vector<string>> groupId_ {};
    // The team name for fuzzy search.
    shared_ptr<string> groupName_ {};
    // The team type.
    // 
    // *   org: organizational structure
    // *   directory: workspace
    // 
    // Default value: null. The default value indicates that all types of teams are queried.
    shared_ptr<string> groupType_ {};
    // The number of entries to return on each page.
    // 
    // *   Valid values: 1 to 100
    // *   Default value: 20
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the parent node. If a parent node ID is specified, the subnodes are queried. If you set the value of this parameter to root, the root node is queried.
    // 
    // Default value: null. The default value indicates that all nodes are queried.
    shared_ptr<string> parentGroupId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
