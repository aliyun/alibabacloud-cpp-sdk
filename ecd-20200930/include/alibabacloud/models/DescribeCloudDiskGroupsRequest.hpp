// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKGROUPSREQUEST_HPP_
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
  class DescribeCloudDiskGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ParentOrgId, parentOrgId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ParentOrgId, parentOrgId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeCloudDiskGroupsRequest() = default ;
    DescribeCloudDiskGroupsRequest(const DescribeCloudDiskGroupsRequest &) = default ;
    DescribeCloudDiskGroupsRequest(DescribeCloudDiskGroupsRequest &&) = default ;
    DescribeCloudDiskGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskGroupsRequest() = default ;
    DescribeCloudDiskGroupsRequest& operator=(const DescribeCloudDiskGroupsRequest &) = default ;
    DescribeCloudDiskGroupsRequest& operator=(DescribeCloudDiskGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->parentOrgId_ == nullptr && return this->regionId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline DescribeCloudDiskGroupsRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline const vector<string> & groupId() const { DARABONBA_PTR_GET_CONST(groupId_, vector<string>) };
    inline vector<string> groupId() { DARABONBA_PTR_GET(groupId_, vector<string>) };
    inline DescribeCloudDiskGroupsRequest& setGroupId(const vector<string> & groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };
    inline DescribeCloudDiskGroupsRequest& setGroupId(vector<string> && groupId) { DARABONBA_PTR_SET_RVALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeCloudDiskGroupsRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // parentOrgId Field Functions 
    bool hasParentOrgId() const { return this->parentOrgId_ != nullptr;};
    void deleteParentOrgId() { this->parentOrgId_ = nullptr;};
    inline string parentOrgId() const { DARABONBA_PTR_GET_DEFAULT(parentOrgId_, "") };
    inline DescribeCloudDiskGroupsRequest& setParentOrgId(string parentOrgId) { DARABONBA_PTR_SET_VALUE(parentOrgId_, parentOrgId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCloudDiskGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cdsId_ = nullptr;
    std::shared_ptr<vector<string>> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> parentOrgId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
