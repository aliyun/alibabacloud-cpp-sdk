// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancesShrinkRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceCategories, DBInstanceCategoriesShrink_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceIds, DBInstanceIds_);
      DARABONBA_PTR_TO_JSON(DBInstanceModes, DBInstanceModesShrink_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatuses, DBInstanceStatusesShrink_);
      DARABONBA_PTR_TO_JSON(InstanceDeployTypes, instanceDeployTypesShrink_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceCategories, DBInstanceCategoriesShrink_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceIds, DBInstanceIds_);
      DARABONBA_PTR_FROM_JSON(DBInstanceModes, DBInstanceModesShrink_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatuses, DBInstanceStatusesShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceDeployTypes, instanceDeployTypesShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeDBInstancesShrinkRequest() = default ;
    DescribeDBInstancesShrinkRequest(const DescribeDBInstancesShrinkRequest &) = default ;
    DescribeDBInstancesShrinkRequest(DescribeDBInstancesShrinkRequest &&) = default ;
    DescribeDBInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesShrinkRequest() = default ;
    DescribeDBInstancesShrinkRequest& operator=(const DescribeDBInstancesShrinkRequest &) = default ;
    DescribeDBInstancesShrinkRequest& operator=(DescribeDBInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceCategoriesShrink_ != nullptr
        && this->DBInstanceDescription_ != nullptr && this->DBInstanceIds_ != nullptr && this->DBInstanceModesShrink_ != nullptr && this->DBInstanceStatusesShrink_ != nullptr && this->instanceDeployTypesShrink_ != nullptr
        && this->instanceNetworkType_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->tag_ != nullptr && this->vpcId_ != nullptr; };
    // DBInstanceCategoriesShrink Field Functions 
    bool hasDBInstanceCategoriesShrink() const { return this->DBInstanceCategoriesShrink_ != nullptr;};
    void deleteDBInstanceCategoriesShrink() { this->DBInstanceCategoriesShrink_ = nullptr;};
    inline string DBInstanceCategoriesShrink() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCategoriesShrink_, "") };
    inline DescribeDBInstancesShrinkRequest& setDBInstanceCategoriesShrink(string DBInstanceCategoriesShrink) { DARABONBA_PTR_SET_VALUE(DBInstanceCategoriesShrink_, DBInstanceCategoriesShrink) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeDBInstancesShrinkRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceIds Field Functions 
    bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
    void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
    inline string DBInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceIds_, "") };
    inline DescribeDBInstancesShrinkRequest& setDBInstanceIds(string DBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, DBInstanceIds) };


    // DBInstanceModesShrink Field Functions 
    bool hasDBInstanceModesShrink() const { return this->DBInstanceModesShrink_ != nullptr;};
    void deleteDBInstanceModesShrink() { this->DBInstanceModesShrink_ = nullptr;};
    inline string DBInstanceModesShrink() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceModesShrink_, "") };
    inline DescribeDBInstancesShrinkRequest& setDBInstanceModesShrink(string DBInstanceModesShrink) { DARABONBA_PTR_SET_VALUE(DBInstanceModesShrink_, DBInstanceModesShrink) };


    // DBInstanceStatusesShrink Field Functions 
    bool hasDBInstanceStatusesShrink() const { return this->DBInstanceStatusesShrink_ != nullptr;};
    void deleteDBInstanceStatusesShrink() { this->DBInstanceStatusesShrink_ = nullptr;};
    inline string DBInstanceStatusesShrink() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatusesShrink_, "") };
    inline DescribeDBInstancesShrinkRequest& setDBInstanceStatusesShrink(string DBInstanceStatusesShrink) { DARABONBA_PTR_SET_VALUE(DBInstanceStatusesShrink_, DBInstanceStatusesShrink) };


    // instanceDeployTypesShrink Field Functions 
    bool hasInstanceDeployTypesShrink() const { return this->instanceDeployTypesShrink_ != nullptr;};
    void deleteInstanceDeployTypesShrink() { this->instanceDeployTypesShrink_ = nullptr;};
    inline string instanceDeployTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceDeployTypesShrink_, "") };
    inline DescribeDBInstancesShrinkRequest& setInstanceDeployTypesShrink(string instanceDeployTypesShrink) { DARABONBA_PTR_SET_VALUE(instanceDeployTypesShrink_, instanceDeployTypesShrink) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeDBInstancesShrinkRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDBInstancesShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstancesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBInstancesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstancesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstancesShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDBInstancesShrinkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDBInstancesShrinkRequestTag>) };
    inline vector<DescribeDBInstancesShrinkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeDBInstancesShrinkRequestTag>) };
    inline DescribeDBInstancesShrinkRequest& setTag(const vector<DescribeDBInstancesShrinkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDBInstancesShrinkRequest& setTag(vector<DescribeDBInstancesShrinkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBInstancesShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The edition of the instance. Separate multiple values with commas (,).
    std::shared_ptr<string> DBInstanceCategoriesShrink_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // The instance ID. Separate multiple values with commas (,).
    std::shared_ptr<string> DBInstanceIds_ = nullptr;
    // The resource type of the instance. Separate multiple values with commas (,).
    std::shared_ptr<string> DBInstanceModesShrink_ = nullptr;
    // The state of the instance.
    std::shared_ptr<string> DBInstanceStatusesShrink_ = nullptr;
    // This parameter is no longer used.
    std::shared_ptr<string> instanceDeployTypesShrink_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   **VPC**: virtual private cloud (VPC).
    // *   **Classic**: classic network.
    // 
    // > If you do not specify this parameter, instances of all network types are returned.
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Pages start from page 1. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   **30**
    // *   **50**
    // *   **100**
    // 
    // Default value: **30**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<DescribeDBInstancesShrinkRequestTag>> tag_ = nullptr;
    // The VPC ID. You can use this parameter to filter instances that reside in the specified VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
