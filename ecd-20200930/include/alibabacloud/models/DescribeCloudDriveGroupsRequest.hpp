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
    // The enterprise cloud drive ID.
    // 
    // This parameter is required.
    shared_ptr<string> cdsId_ {};
    // The office network ID.
    shared_ptr<string> directoryId_ {};
    // The office network name.
    shared_ptr<string> directoryName_ {};
    // The team space status.
    shared_ptr<string> driveStatus_ {};
    // Specifies whether a space is added. Default value: empty, which indicates that all types are queried.
    shared_ptr<string> driveType_ {};
    // The list of team space IDs.
    shared_ptr<vector<string>> groupId_ {};
    // The team space name. Fuzzy match is supported.
    shared_ptr<string> groupName_ {};
    // The team type. Default value: empty, which indicates that all types are queried.
    shared_ptr<string> groupType_ {};
    // The number of entries per page for a paged query.
    // 
    // - Maximum value: 100.
    // - Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Set this parameter to the value of `NextToken` that was returned in the previous call. You do not need to set this parameter for the first request.
    shared_ptr<string> nextToken_ {};
    // The ID of the parent node of the object to query. To query the root node, set this parameter to `root`.
    // 
    // Default value: empty, which indicates that all team spaces are queried.
    shared_ptr<string> parentGroupId_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
