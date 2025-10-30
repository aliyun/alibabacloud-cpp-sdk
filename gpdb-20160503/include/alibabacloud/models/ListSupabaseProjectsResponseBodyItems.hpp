// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPABASEPROJECTSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPABASEPROJECTSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListSupabaseProjectsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupabaseProjectsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DashboardPassword, dashboardPassword_);
      DARABONBA_PTR_TO_JSON(DashboardUserName, dashboardUserName_);
      DARABONBA_PTR_TO_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PrivateConnectUrl, privateConnectUrl_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ProjectSpec, projectSpec_);
      DARABONBA_PTR_TO_JSON(PublicConnectUrl, publicConnectUrl_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupabaseProjectsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DashboardPassword, dashboardPassword_);
      DARABONBA_PTR_FROM_JSON(DashboardUserName, dashboardUserName_);
      DARABONBA_PTR_FROM_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PrivateConnectUrl, privateConnectUrl_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ProjectSpec, projectSpec_);
      DARABONBA_PTR_FROM_JSON(PublicConnectUrl, publicConnectUrl_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListSupabaseProjectsResponseBodyItems() = default ;
    ListSupabaseProjectsResponseBodyItems(const ListSupabaseProjectsResponseBodyItems &) = default ;
    ListSupabaseProjectsResponseBodyItems(ListSupabaseProjectsResponseBodyItems &&) = default ;
    ListSupabaseProjectsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupabaseProjectsResponseBodyItems() = default ;
    ListSupabaseProjectsResponseBodyItems& operator=(const ListSupabaseProjectsResponseBodyItems &) = default ;
    ListSupabaseProjectsResponseBodyItems& operator=(ListSupabaseProjectsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->dashboardPassword_ == nullptr && return this->dashboardUserName_ == nullptr && return this->diskPerformanceLevel_ == nullptr && return this->engine_ == nullptr && return this->engineVersion_ == nullptr
        && return this->payType_ == nullptr && return this->privateConnectUrl_ == nullptr && return this->projectId_ == nullptr && return this->projectName_ == nullptr && return this->projectSpec_ == nullptr
        && return this->publicConnectUrl_ == nullptr && return this->regionId_ == nullptr && return this->securityIPList_ == nullptr && return this->status_ == nullptr && return this->storageSize_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dashboardPassword Field Functions 
    bool hasDashboardPassword() const { return this->dashboardPassword_ != nullptr;};
    void deleteDashboardPassword() { this->dashboardPassword_ = nullptr;};
    inline string dashboardPassword() const { DARABONBA_PTR_GET_DEFAULT(dashboardPassword_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setDashboardPassword(string dashboardPassword) { DARABONBA_PTR_SET_VALUE(dashboardPassword_, dashboardPassword) };


    // dashboardUserName Field Functions 
    bool hasDashboardUserName() const { return this->dashboardUserName_ != nullptr;};
    void deleteDashboardUserName() { this->dashboardUserName_ = nullptr;};
    inline string dashboardUserName() const { DARABONBA_PTR_GET_DEFAULT(dashboardUserName_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setDashboardUserName(string dashboardUserName) { DARABONBA_PTR_SET_VALUE(dashboardUserName_, dashboardUserName) };


    // diskPerformanceLevel Field Functions 
    bool hasDiskPerformanceLevel() const { return this->diskPerformanceLevel_ != nullptr;};
    void deleteDiskPerformanceLevel() { this->diskPerformanceLevel_ = nullptr;};
    inline string diskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(diskPerformanceLevel_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setDiskPerformanceLevel(string diskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(diskPerformanceLevel_, diskPerformanceLevel) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // privateConnectUrl Field Functions 
    bool hasPrivateConnectUrl() const { return this->privateConnectUrl_ != nullptr;};
    void deletePrivateConnectUrl() { this->privateConnectUrl_ = nullptr;};
    inline string privateConnectUrl() const { DARABONBA_PTR_GET_DEFAULT(privateConnectUrl_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setPrivateConnectUrl(string privateConnectUrl) { DARABONBA_PTR_SET_VALUE(privateConnectUrl_, privateConnectUrl) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // projectSpec Field Functions 
    bool hasProjectSpec() const { return this->projectSpec_ != nullptr;};
    void deleteProjectSpec() { this->projectSpec_ = nullptr;};
    inline string projectSpec() const { DARABONBA_PTR_GET_DEFAULT(projectSpec_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setProjectSpec(string projectSpec) { DARABONBA_PTR_SET_VALUE(projectSpec_, projectSpec) };


    // publicConnectUrl Field Functions 
    bool hasPublicConnectUrl() const { return this->publicConnectUrl_ != nullptr;};
    void deletePublicConnectUrl() { this->publicConnectUrl_ = nullptr;};
    inline string publicConnectUrl() const { DARABONBA_PTR_GET_DEFAULT(publicConnectUrl_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setPublicConnectUrl(string publicConnectUrl) { DARABONBA_PTR_SET_VALUE(publicConnectUrl_, publicConnectUrl) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline ListSupabaseProjectsResponseBodyItems& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListSupabaseProjectsResponseBodyItems& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> dashboardPassword_ = nullptr;
    std::shared_ptr<string> dashboardUserName_ = nullptr;
    std::shared_ptr<string> diskPerformanceLevel_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> privateConnectUrl_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> projectSpec_ = nullptr;
    std::shared_ptr<string> publicConnectUrl_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> securityIPList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> storageSize_ = nullptr;
    // vSwitch ID。
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // VPC ID。
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
