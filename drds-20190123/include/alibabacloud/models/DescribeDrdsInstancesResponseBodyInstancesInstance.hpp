// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCESRESPONSEBODYINSTANCESINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCESRESPONSEBODYINSTANCESINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds.hpp>
#include <alibabacloud/models/DescribeDrdsInstancesResponseBodyInstancesInstanceVips.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstancesResponseBodyInstancesInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstancesResponseBodyInstancesInstance& obj) { 
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
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OrderInstanceId, orderInstanceId_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceIds, readOnlyDBInstanceIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionAction, versionAction_);
      DARABONBA_PTR_TO_JSON(Vips, vips_);
      DARABONBA_PTR_TO_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(series, series_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstancesResponseBodyInstancesInstance& obj) { 
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
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OrderInstanceId, orderInstanceId_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceIds, readOnlyDBInstanceIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionAction, versionAction_);
      DARABONBA_PTR_FROM_JSON(Vips, vips_);
      DARABONBA_PTR_FROM_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(series, series_);
    };
    DescribeDrdsInstancesResponseBodyInstancesInstance() = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstance(const DescribeDrdsInstancesResponseBodyInstancesInstance &) = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstance(DescribeDrdsInstancesResponseBodyInstancesInstance &&) = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstancesResponseBodyInstancesInstance() = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstance& operator=(const DescribeDrdsInstancesResponseBodyInstancesInstance &) = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstance& operator=(DescribeDrdsInstancesResponseBodyInstancesInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->drdsInstanceId_ != nullptr && this->expireDate_ != nullptr && this->instRole_ != nullptr
        && this->instanceSeries_ != nullptr && this->instanceSpec_ != nullptr && this->label_ != nullptr && this->machineType_ != nullptr && this->masterInstanceId_ != nullptr
        && this->networkType_ != nullptr && this->orderInstanceId_ != nullptr && this->productVersion_ != nullptr && this->readOnlyDBInstanceIds_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->version_ != nullptr && this->versionAction_ != nullptr
        && this->vips_ != nullptr && this->vpcCloudInstanceId_ != nullptr && this->vpcId_ != nullptr && this->zoneId_ != nullptr && this->series_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline int64_t expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, 0L) };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setExpireDate(int64_t expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // instRole Field Functions 
    bool hasInstRole() const { return this->instRole_ != nullptr;};
    void deleteInstRole() { this->instRole_ = nullptr;};
    inline string instRole() const { DARABONBA_PTR_GET_DEFAULT(instRole_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setInstRole(string instRole) { DARABONBA_PTR_SET_VALUE(instRole_, instRole) };


    // instanceSeries Field Functions 
    bool hasInstanceSeries() const { return this->instanceSeries_ != nullptr;};
    void deleteInstanceSeries() { this->instanceSeries_ = nullptr;};
    inline string instanceSeries() const { DARABONBA_PTR_GET_DEFAULT(instanceSeries_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setInstanceSeries(string instanceSeries) { DARABONBA_PTR_SET_VALUE(instanceSeries_, instanceSeries) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string machineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // masterInstanceId Field Functions 
    bool hasMasterInstanceId() const { return this->masterInstanceId_ != nullptr;};
    void deleteMasterInstanceId() { this->masterInstanceId_ = nullptr;};
    inline string masterInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceId_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setMasterInstanceId(string masterInstanceId) { DARABONBA_PTR_SET_VALUE(masterInstanceId_, masterInstanceId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // orderInstanceId Field Functions 
    bool hasOrderInstanceId() const { return this->orderInstanceId_ != nullptr;};
    void deleteOrderInstanceId() { this->orderInstanceId_ = nullptr;};
    inline string orderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceId_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setOrderInstanceId(string orderInstanceId) { DARABONBA_PTR_SET_VALUE(orderInstanceId_, orderInstanceId) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // readOnlyDBInstanceIds Field Functions 
    bool hasReadOnlyDBInstanceIds() const { return this->readOnlyDBInstanceIds_ != nullptr;};
    void deleteReadOnlyDBInstanceIds() { this->readOnlyDBInstanceIds_ = nullptr;};
    inline const Models::DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds & readOnlyDBInstanceIds() const { DARABONBA_PTR_GET_CONST(readOnlyDBInstanceIds_, Models::DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds) };
    inline Models::DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds readOnlyDBInstanceIds() { DARABONBA_PTR_GET(readOnlyDBInstanceIds_, Models::DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds) };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setReadOnlyDBInstanceIds(const Models::DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds & readOnlyDBInstanceIds) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceIds_, readOnlyDBInstanceIds) };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setReadOnlyDBInstanceIds(Models::DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds && readOnlyDBInstanceIds) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceIds_, readOnlyDBInstanceIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionAction Field Functions 
    bool hasVersionAction() const { return this->versionAction_ != nullptr;};
    void deleteVersionAction() { this->versionAction_ = nullptr;};
    inline string versionAction() const { DARABONBA_PTR_GET_DEFAULT(versionAction_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setVersionAction(string versionAction) { DARABONBA_PTR_SET_VALUE(versionAction_, versionAction) };


    // vips Field Functions 
    bool hasVips() const { return this->vips_ != nullptr;};
    void deleteVips() { this->vips_ = nullptr;};
    inline const Models::DescribeDrdsInstancesResponseBodyInstancesInstanceVips & vips() const { DARABONBA_PTR_GET_CONST(vips_, Models::DescribeDrdsInstancesResponseBodyInstancesInstanceVips) };
    inline Models::DescribeDrdsInstancesResponseBodyInstancesInstanceVips vips() { DARABONBA_PTR_GET(vips_, Models::DescribeDrdsInstancesResponseBodyInstancesInstanceVips) };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setVips(const Models::DescribeDrdsInstancesResponseBodyInstancesInstanceVips & vips) { DARABONBA_PTR_SET_VALUE(vips_, vips) };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setVips(Models::DescribeDrdsInstancesResponseBodyInstancesInstanceVips && vips) { DARABONBA_PTR_SET_RVALUE(vips_, vips) };


    // vpcCloudInstanceId Field Functions 
    bool hasVpcCloudInstanceId() const { return this->vpcCloudInstanceId_ != nullptr;};
    void deleteVpcCloudInstanceId() { this->vpcCloudInstanceId_ = nullptr;};
    inline string vpcCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcCloudInstanceId_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setVpcCloudInstanceId(string vpcCloudInstanceId) { DARABONBA_PTR_SET_VALUE(vpcCloudInstanceId_, vpcCloudInstanceId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline string series() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
    inline DescribeDrdsInstancesResponseBodyInstancesInstance& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


  protected:
    // The commodity code of the service.
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
    // *   MASTER: The instance is a primary instance.
    // *   SLAVE: The instance is a read-only instance to analyze complex queries.
    // *   SLAVE_FLOW: The instance is a read-only instance for high-concurrency scenarios.
    std::shared_ptr<string> instRole_ = nullptr;
    // The instance series.
    std::shared_ptr<string> instanceSeries_ = nullptr;
    // The specification of the instance.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // The tag of the instance. Valid values:
    // 
    // *   **NORMAL**: The instance is a standard instance.
    // *   **HA**: The instance is a high-availability (HA) instance.
    // *   **VPC**: The instance is a VPC-based instance.
    std::shared_ptr<string> label_ = nullptr;
    // The machine type of the instance. Valid value: ecs.
    std::shared_ptr<string> machineType_ = nullptr;
    // The ID of the primary instance.
    std::shared_ptr<string> masterInstanceId_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   **CLASSIC**
    // *   **VPC**
    std::shared_ptr<string> networkType_ = nullptr;
    // The ID of the purchased instance.
    std::shared_ptr<string> orderInstanceId_ = nullptr;
    // The version of the service.
    std::shared_ptr<string> productVersion_ = nullptr;
    // The IDs of read-only instances that are associated with the instance.
    std::shared_ptr<Models::DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds> readOnlyDBInstanceIds_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the instance.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the instance. Valid values:
    // 
    // *   **PUBLIC**: The returned instance is a shared instance.
    // *   **PRIVATE**: The returned instance is a dedicated instance.
    std::shared_ptr<string> type_ = nullptr;
    // The version of the instance.
    std::shared_ptr<int64_t> version_ = nullptr;
    // Indicates whether the version of the instance can be upgraded.
    std::shared_ptr<string> versionAction_ = nullptr;
    // The list of returned virtual IP addresses (VIPs).
    std::shared_ptr<Models::DescribeDrdsInstancesResponseBodyInstancesInstanceVips> vips_ = nullptr;
    // The ID of the instance that is deployed in the VPC.
    std::shared_ptr<string> vpcCloudInstanceId_ = nullptr;
    // The ID of the VPC to which the instance belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the zone in which the resource is located.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The edition of the instance. Valid values:
    // 
    // *   **starter**: Starter Edition
    // *   **enterprise**: Enterprise Edition
    // *   **standard**: Standard Edition
    std::shared_ptr<string> series_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
