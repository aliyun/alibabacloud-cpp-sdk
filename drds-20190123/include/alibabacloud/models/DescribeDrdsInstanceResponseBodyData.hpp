// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds.hpp>
#include <alibabacloud/models/DescribeDrdsInstanceResponseBodyDataVips.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(InstRole, instRole_);
      DARABONBA_PTR_TO_JSON(InstanceSeries, instanceSeries_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(MasterInstanceId, masterInstanceId_);
      DARABONBA_PTR_TO_JSON(MysqlVersion, mysqlVersion_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OrderInstanceId, orderInstanceId_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceIds, readOnlyDBInstanceIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionAction, versionAction_);
      DARABONBA_PTR_TO_JSON(Vips, vips_);
      DARABONBA_PTR_TO_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(InstRole, instRole_);
      DARABONBA_PTR_FROM_JSON(InstanceSeries, instanceSeries_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceId, masterInstanceId_);
      DARABONBA_PTR_FROM_JSON(MysqlVersion, mysqlVersion_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OrderInstanceId, orderInstanceId_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceIds, readOnlyDBInstanceIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionAction, versionAction_);
      DARABONBA_PTR_FROM_JSON(Vips, vips_);
      DARABONBA_PTR_FROM_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDrdsInstanceResponseBodyData() = default ;
    DescribeDrdsInstanceResponseBodyData(const DescribeDrdsInstanceResponseBodyData &) = default ;
    DescribeDrdsInstanceResponseBodyData(DescribeDrdsInstanceResponseBodyData &&) = default ;
    DescribeDrdsInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstanceResponseBodyData() = default ;
    DescribeDrdsInstanceResponseBodyData& operator=(const DescribeDrdsInstanceResponseBodyData &) = default ;
    DescribeDrdsInstanceResponseBodyData& operator=(DescribeDrdsInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->drdsInstanceId_ != nullptr && this->expireDate_ != nullptr && this->instRole_ != nullptr
        && this->instanceSeries_ != nullptr && this->instanceSpec_ != nullptr && this->label_ != nullptr && this->machineType_ != nullptr && this->masterInstanceId_ != nullptr
        && this->mysqlVersion_ != nullptr && this->networkType_ != nullptr && this->orderInstanceId_ != nullptr && this->productVersion_ != nullptr && this->readOnlyDBInstanceIds_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->storageType_ != nullptr && this->type_ != nullptr
        && this->version_ != nullptr && this->versionAction_ != nullptr && this->vips_ != nullptr && this->vpcCloudInstanceId_ != nullptr && this->zoneId_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeDrdsInstanceResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline int64_t expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, 0L) };
    inline DescribeDrdsInstanceResponseBodyData& setExpireDate(int64_t expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // instRole Field Functions 
    bool hasInstRole() const { return this->instRole_ != nullptr;};
    void deleteInstRole() { this->instRole_ = nullptr;};
    inline string instRole() const { DARABONBA_PTR_GET_DEFAULT(instRole_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setInstRole(string instRole) { DARABONBA_PTR_SET_VALUE(instRole_, instRole) };


    // instanceSeries Field Functions 
    bool hasInstanceSeries() const { return this->instanceSeries_ != nullptr;};
    void deleteInstanceSeries() { this->instanceSeries_ = nullptr;};
    inline string instanceSeries() const { DARABONBA_PTR_GET_DEFAULT(instanceSeries_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setInstanceSeries(string instanceSeries) { DARABONBA_PTR_SET_VALUE(instanceSeries_, instanceSeries) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string machineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // masterInstanceId Field Functions 
    bool hasMasterInstanceId() const { return this->masterInstanceId_ != nullptr;};
    void deleteMasterInstanceId() { this->masterInstanceId_ = nullptr;};
    inline string masterInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceId_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setMasterInstanceId(string masterInstanceId) { DARABONBA_PTR_SET_VALUE(masterInstanceId_, masterInstanceId) };


    // mysqlVersion Field Functions 
    bool hasMysqlVersion() const { return this->mysqlVersion_ != nullptr;};
    void deleteMysqlVersion() { this->mysqlVersion_ = nullptr;};
    inline int32_t mysqlVersion() const { DARABONBA_PTR_GET_DEFAULT(mysqlVersion_, 0) };
    inline DescribeDrdsInstanceResponseBodyData& setMysqlVersion(int32_t mysqlVersion) { DARABONBA_PTR_SET_VALUE(mysqlVersion_, mysqlVersion) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // orderInstanceId Field Functions 
    bool hasOrderInstanceId() const { return this->orderInstanceId_ != nullptr;};
    void deleteOrderInstanceId() { this->orderInstanceId_ = nullptr;};
    inline string orderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceId_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setOrderInstanceId(string orderInstanceId) { DARABONBA_PTR_SET_VALUE(orderInstanceId_, orderInstanceId) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // readOnlyDBInstanceIds Field Functions 
    bool hasReadOnlyDBInstanceIds() const { return this->readOnlyDBInstanceIds_ != nullptr;};
    void deleteReadOnlyDBInstanceIds() { this->readOnlyDBInstanceIds_ = nullptr;};
    inline const Models::DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds & readOnlyDBInstanceIds() const { DARABONBA_PTR_GET_CONST(readOnlyDBInstanceIds_, Models::DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds) };
    inline Models::DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds readOnlyDBInstanceIds() { DARABONBA_PTR_GET(readOnlyDBInstanceIds_, Models::DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds) };
    inline DescribeDrdsInstanceResponseBodyData& setReadOnlyDBInstanceIds(const Models::DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds & readOnlyDBInstanceIds) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceIds_, readOnlyDBInstanceIds) };
    inline DescribeDrdsInstanceResponseBodyData& setReadOnlyDBInstanceIds(Models::DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds && readOnlyDBInstanceIds) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceIds_, readOnlyDBInstanceIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline DescribeDrdsInstanceResponseBodyData& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionAction Field Functions 
    bool hasVersionAction() const { return this->versionAction_ != nullptr;};
    void deleteVersionAction() { this->versionAction_ = nullptr;};
    inline string versionAction() const { DARABONBA_PTR_GET_DEFAULT(versionAction_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setVersionAction(string versionAction) { DARABONBA_PTR_SET_VALUE(versionAction_, versionAction) };


    // vips Field Functions 
    bool hasVips() const { return this->vips_ != nullptr;};
    void deleteVips() { this->vips_ = nullptr;};
    inline const Models::DescribeDrdsInstanceResponseBodyDataVips & vips() const { DARABONBA_PTR_GET_CONST(vips_, Models::DescribeDrdsInstanceResponseBodyDataVips) };
    inline Models::DescribeDrdsInstanceResponseBodyDataVips vips() { DARABONBA_PTR_GET(vips_, Models::DescribeDrdsInstanceResponseBodyDataVips) };
    inline DescribeDrdsInstanceResponseBodyData& setVips(const Models::DescribeDrdsInstanceResponseBodyDataVips & vips) { DARABONBA_PTR_SET_VALUE(vips_, vips) };
    inline DescribeDrdsInstanceResponseBodyData& setVips(Models::DescribeDrdsInstanceResponseBodyDataVips && vips) { DARABONBA_PTR_SET_RVALUE(vips_, vips) };


    // vpcCloudInstanceId Field Functions 
    bool hasVpcCloudInstanceId() const { return this->vpcCloudInstanceId_ != nullptr;};
    void deleteVpcCloudInstanceId() { this->vpcCloudInstanceId_ = nullptr;};
    inline string vpcCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcCloudInstanceId_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setVpcCloudInstanceId(string vpcCloudInstanceId) { DARABONBA_PTR_SET_VALUE(vpcCloudInstanceId_, vpcCloudInstanceId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDrdsInstanceResponseBodyData& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The commodity code of the instance.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The timestamp that indicates when the instance is created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The timestamp that indicates when the instance expires.
    std::shared_ptr<int64_t> expireDate_ = nullptr;
    // The role of the instance. Valid values:
    // 
    // *   **MASTER**: The instance is a primary instance.
    // *   **SLAVE**: The instance is a read-only instance to analyze complex queries
    // *   **SLAVE_FLOW**: The instance is a read-only instance for high-concurrency scenarios
    std::shared_ptr<string> instRole_ = nullptr;
    // The instance series of the instance.
    std::shared_ptr<string> instanceSeries_ = nullptr;
    // The specification of the instance.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // The tag of the instance. Valid values:
    // 
    // *   **NORMAL**: The instance is a standard instance.
    // *   **HA**: The instance is a high-availability (HA) instance.
    // *   **VPC**: The instance is a VPC-based instance.
    std::shared_ptr<string> label_ = nullptr;
    // The machine type of the instance. The value of this parameter is **ecs**.
    std::shared_ptr<string> machineType_ = nullptr;
    // The ID of the primary instance.
    // 
    // >  This parameter is returned only when the instance is a primary instance.
    std::shared_ptr<string> masterInstanceId_ = nullptr;
    // The MySQL version that is supported by the instance.
    std::shared_ptr<int32_t> mysqlVersion_ = nullptr;
    // The network type of the instance. Valid values: CLASSIC and VPC.
    std::shared_ptr<string> networkType_ = nullptr;
    // The ID of the purchased instance.
    std::shared_ptr<string> orderInstanceId_ = nullptr;
    // The version of .
    std::shared_ptr<string> productVersion_ = nullptr;
    // The details about each read-only instance that is associated with the instance.
    std::shared_ptr<Models::DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds> readOnlyDBInstanceIds_ = nullptr;
    // The ID of the region in which the instance is created.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the instance belongs. The value of this parameter can be null.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The state of the instance.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the instance used for storage.
    std::shared_ptr<string> storageType_ = nullptr;
    // The type of the instance. Valid values: PRIVATE and PUBLIC. The value of PRIVATE indicates that the instance is a dedicated instance. The value of PUBLIC indicates that the instance is a shared instance.
    std::shared_ptr<string> type_ = nullptr;
    // The version of the instance. The value of this parameter is 0.
    std::shared_ptr<int64_t> version_ = nullptr;
    // Indicates whether the version of the instance can be upgraded.
    std::shared_ptr<string> versionAction_ = nullptr;
    // The list of returned virtual IP addresses (VIPs).
    std::shared_ptr<Models::DescribeDrdsInstanceResponseBodyDataVips> vips_ = nullptr;
    // The ID of the instance that is deployed in the VPC.
    std::shared_ptr<string> vpcCloudInstanceId_ = nullptr;
    // The ID of the zone in which the instance is located.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
