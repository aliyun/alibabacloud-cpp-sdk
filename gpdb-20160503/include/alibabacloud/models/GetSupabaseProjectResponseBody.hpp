// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPABASEPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUPABASEPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetSupabaseProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupabaseProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DashboardPassword, dashboardPassword_);
      DARABONBA_PTR_TO_JSON(DashboardUserName, dashboardUserName_);
      DARABONBA_PTR_TO_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(Eni, eni_);
      DARABONBA_PTR_TO_JSON(InstanceVersion, instanceVersion_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PrivateConnectUrl, privateConnectUrl_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ProjectSpec, projectSpec_);
      DARABONBA_PTR_TO_JSON(PublicConnectUrl, publicConnectUrl_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityIpList, securityIpList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupabaseProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DashboardPassword, dashboardPassword_);
      DARABONBA_PTR_FROM_JSON(DashboardUserName, dashboardUserName_);
      DARABONBA_PTR_FROM_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(Eni, eni_);
      DARABONBA_PTR_FROM_JSON(InstanceVersion, instanceVersion_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PrivateConnectUrl, privateConnectUrl_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ProjectSpec, projectSpec_);
      DARABONBA_PTR_FROM_JSON(PublicConnectUrl, publicConnectUrl_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityIpList, securityIpList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetSupabaseProjectResponseBody() = default ;
    GetSupabaseProjectResponseBody(const GetSupabaseProjectResponseBody &) = default ;
    GetSupabaseProjectResponseBody(GetSupabaseProjectResponseBody &&) = default ;
    GetSupabaseProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupabaseProjectResponseBody() = default ;
    GetSupabaseProjectResponseBody& operator=(const GetSupabaseProjectResponseBody &) = default ;
    GetSupabaseProjectResponseBody& operator=(GetSupabaseProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dashboardPassword_ == nullptr && this->dashboardUserName_ == nullptr && this->diskPerformanceLevel_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr
        && this->eni_ == nullptr && this->instanceVersion_ == nullptr && this->payType_ == nullptr && this->privateConnectUrl_ == nullptr && this->projectId_ == nullptr
        && this->projectName_ == nullptr && this->projectSpec_ == nullptr && this->publicConnectUrl_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->securityIpList_ == nullptr && this->status_ == nullptr && this->storageSize_ == nullptr && this->storageType_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetSupabaseProjectResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dashboardPassword Field Functions 
    bool hasDashboardPassword() const { return this->dashboardPassword_ != nullptr;};
    void deleteDashboardPassword() { this->dashboardPassword_ = nullptr;};
    inline string getDashboardPassword() const { DARABONBA_PTR_GET_DEFAULT(dashboardPassword_, "") };
    inline GetSupabaseProjectResponseBody& setDashboardPassword(string dashboardPassword) { DARABONBA_PTR_SET_VALUE(dashboardPassword_, dashboardPassword) };


    // dashboardUserName Field Functions 
    bool hasDashboardUserName() const { return this->dashboardUserName_ != nullptr;};
    void deleteDashboardUserName() { this->dashboardUserName_ = nullptr;};
    inline string getDashboardUserName() const { DARABONBA_PTR_GET_DEFAULT(dashboardUserName_, "") };
    inline GetSupabaseProjectResponseBody& setDashboardUserName(string dashboardUserName) { DARABONBA_PTR_SET_VALUE(dashboardUserName_, dashboardUserName) };


    // diskPerformanceLevel Field Functions 
    bool hasDiskPerformanceLevel() const { return this->diskPerformanceLevel_ != nullptr;};
    void deleteDiskPerformanceLevel() { this->diskPerformanceLevel_ = nullptr;};
    inline string getDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(diskPerformanceLevel_, "") };
    inline GetSupabaseProjectResponseBody& setDiskPerformanceLevel(string diskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(diskPerformanceLevel_, diskPerformanceLevel) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetSupabaseProjectResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline GetSupabaseProjectResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // eni Field Functions 
    bool hasEni() const { return this->eni_ != nullptr;};
    void deleteEni() { this->eni_ = nullptr;};
    inline string getEni() const { DARABONBA_PTR_GET_DEFAULT(eni_, "") };
    inline GetSupabaseProjectResponseBody& setEni(string eni) { DARABONBA_PTR_SET_VALUE(eni_, eni) };


    // instanceVersion Field Functions 
    bool hasInstanceVersion() const { return this->instanceVersion_ != nullptr;};
    void deleteInstanceVersion() { this->instanceVersion_ = nullptr;};
    inline string getInstanceVersion() const { DARABONBA_PTR_GET_DEFAULT(instanceVersion_, "") };
    inline GetSupabaseProjectResponseBody& setInstanceVersion(string instanceVersion) { DARABONBA_PTR_SET_VALUE(instanceVersion_, instanceVersion) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline GetSupabaseProjectResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // privateConnectUrl Field Functions 
    bool hasPrivateConnectUrl() const { return this->privateConnectUrl_ != nullptr;};
    void deletePrivateConnectUrl() { this->privateConnectUrl_ = nullptr;};
    inline string getPrivateConnectUrl() const { DARABONBA_PTR_GET_DEFAULT(privateConnectUrl_, "") };
    inline GetSupabaseProjectResponseBody& setPrivateConnectUrl(string privateConnectUrl) { DARABONBA_PTR_SET_VALUE(privateConnectUrl_, privateConnectUrl) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetSupabaseProjectResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetSupabaseProjectResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // projectSpec Field Functions 
    bool hasProjectSpec() const { return this->projectSpec_ != nullptr;};
    void deleteProjectSpec() { this->projectSpec_ = nullptr;};
    inline string getProjectSpec() const { DARABONBA_PTR_GET_DEFAULT(projectSpec_, "") };
    inline GetSupabaseProjectResponseBody& setProjectSpec(string projectSpec) { DARABONBA_PTR_SET_VALUE(projectSpec_, projectSpec) };


    // publicConnectUrl Field Functions 
    bool hasPublicConnectUrl() const { return this->publicConnectUrl_ != nullptr;};
    void deletePublicConnectUrl() { this->publicConnectUrl_ = nullptr;};
    inline string getPublicConnectUrl() const { DARABONBA_PTR_GET_DEFAULT(publicConnectUrl_, "") };
    inline GetSupabaseProjectResponseBody& setPublicConnectUrl(string publicConnectUrl) { DARABONBA_PTR_SET_VALUE(publicConnectUrl_, publicConnectUrl) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSupabaseProjectResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSupabaseProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityIpList Field Functions 
    bool hasSecurityIpList() const { return this->securityIpList_ != nullptr;};
    void deleteSecurityIpList() { this->securityIpList_ = nullptr;};
    inline string getSecurityIpList() const { DARABONBA_PTR_GET_DEFAULT(securityIpList_, "") };
    inline GetSupabaseProjectResponseBody& setSecurityIpList(string securityIpList) { DARABONBA_PTR_SET_VALUE(securityIpList_, securityIpList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSupabaseProjectResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline GetSupabaseProjectResponseBody& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline GetSupabaseProjectResponseBody& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetSupabaseProjectResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetSupabaseProjectResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetSupabaseProjectResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The creation time.
    shared_ptr<string> createTime_ {};
    // The Supabase Dashboard password (Not Used)
    shared_ptr<string> dashboardPassword_ {};
    // The Supabase Dashboard user name (Not Used)
    shared_ptr<string> dashboardUserName_ {};
    // The Enterprise SSD (ESSD) performance level of the cluster. Valid values:
    // 
    // *   PL0
    // *   PL1
    shared_ptr<string> diskPerformanceLevel_ {};
    // The type of the database engine.
    shared_ptr<string> engine_ {};
    // The version of the database engine.
    shared_ptr<string> engineVersion_ {};
    shared_ptr<string> eni_ {};
    shared_ptr<string> instanceVersion_ {};
    shared_ptr<string> payType_ {};
    // The private (VPC) connection URL for the Supabase Dashboard.
    shared_ptr<string> privateConnectUrl_ {};
    // The Supabase instance ID.
    shared_ptr<string> projectId_ {};
    // The name of the Supabase project.
    shared_ptr<string> projectName_ {};
    // The performance level of the Supabase instance.
    shared_ptr<string> projectSpec_ {};
    // The public connection URL for the Supabase Dashboard.
    shared_ptr<string> publicConnectUrl_ {};
    // The region ID of the cluster.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // A comma-separated list of IP addresses and CIDR blocks allowed to connect.
    shared_ptr<string> securityIpList_ {};
    // The status of the Supabase instance.
    shared_ptr<string> status_ {};
    // The storage capacity of the instance. Unit: GB.
    shared_ptr<int64_t> storageSize_ {};
    shared_ptr<string> storageType_ {};
    // The vSwitch ID of the instance. This parameter must be specified when VPCId is specified.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID.
    // 
    // > 
    // 
    // *   You can call the [DescribeRdsVpcs](https://help.aliyun.com/document_detail/208327.html) operation to query the available VPC IDs.
    // 
    // *   This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The zone ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list and zone list.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
