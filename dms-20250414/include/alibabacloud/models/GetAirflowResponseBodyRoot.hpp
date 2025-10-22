// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIRFLOWRESPONSEBODYROOT_HPP_
#define ALIBABACLOUD_MODELS_GETAIRFLOWRESPONSEBODYROOT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetAirflowResponseBodyRoot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAirflowResponseBodyRoot& obj) { 
      DARABONBA_PTR_TO_JSON(AirflowId, airflowId_);
      DARABONBA_PTR_TO_JSON(AirflowName, airflowName_);
      DARABONBA_PTR_TO_JSON(AppSpec, appSpec_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CustomAirflowCfg, customAirflowCfg_);
      DARABONBA_PTR_TO_JSON(DagsDir, dagsDir_);
      DARABONBA_PTR_TO_JSON(DeployErrorMsg, deployErrorMsg_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
      DARABONBA_PTR_TO_JSON(PluginsDir, pluginsDir_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequirementFile, requirementFile_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(StartupFile, startupFile_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WorkerServerlessReplicas, workerServerlessReplicas_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAirflowResponseBodyRoot& obj) { 
      DARABONBA_PTR_FROM_JSON(AirflowId, airflowId_);
      DARABONBA_PTR_FROM_JSON(AirflowName, airflowName_);
      DARABONBA_PTR_FROM_JSON(AppSpec, appSpec_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CustomAirflowCfg, customAirflowCfg_);
      DARABONBA_PTR_FROM_JSON(DagsDir, dagsDir_);
      DARABONBA_PTR_FROM_JSON(DeployErrorMsg, deployErrorMsg_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(PluginsDir, pluginsDir_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequirementFile, requirementFile_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(StartupFile, startupFile_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WorkerServerlessReplicas, workerServerlessReplicas_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetAirflowResponseBodyRoot() = default ;
    GetAirflowResponseBodyRoot(const GetAirflowResponseBodyRoot &) = default ;
    GetAirflowResponseBodyRoot(GetAirflowResponseBodyRoot &&) = default ;
    GetAirflowResponseBodyRoot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAirflowResponseBodyRoot() = default ;
    GetAirflowResponseBodyRoot& operator=(const GetAirflowResponseBodyRoot &) = default ;
    GetAirflowResponseBodyRoot& operator=(GetAirflowResponseBodyRoot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->airflowId_ == nullptr
        && return this->airflowName_ == nullptr && return this->appSpec_ == nullptr && return this->appType_ == nullptr && return this->customAirflowCfg_ == nullptr && return this->dagsDir_ == nullptr
        && return this->deployErrorMsg_ == nullptr && return this->description_ == nullptr && return this->gmtCreated_ == nullptr && return this->ossBucketName_ == nullptr && return this->ossPath_ == nullptr
        && return this->pluginsDir_ == nullptr && return this->regionId_ == nullptr && return this->requirementFile_ == nullptr && return this->securityGroupId_ == nullptr && return this->startupFile_ == nullptr
        && return this->status_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->workerServerlessReplicas_ == nullptr && return this->workspaceId_ == nullptr
        && return this->zoneId_ == nullptr; };
    // airflowId Field Functions 
    bool hasAirflowId() const { return this->airflowId_ != nullptr;};
    void deleteAirflowId() { this->airflowId_ = nullptr;};
    inline string airflowId() const { DARABONBA_PTR_GET_DEFAULT(airflowId_, "") };
    inline GetAirflowResponseBodyRoot& setAirflowId(string airflowId) { DARABONBA_PTR_SET_VALUE(airflowId_, airflowId) };


    // airflowName Field Functions 
    bool hasAirflowName() const { return this->airflowName_ != nullptr;};
    void deleteAirflowName() { this->airflowName_ = nullptr;};
    inline string airflowName() const { DARABONBA_PTR_GET_DEFAULT(airflowName_, "") };
    inline GetAirflowResponseBodyRoot& setAirflowName(string airflowName) { DARABONBA_PTR_SET_VALUE(airflowName_, airflowName) };


    // appSpec Field Functions 
    bool hasAppSpec() const { return this->appSpec_ != nullptr;};
    void deleteAppSpec() { this->appSpec_ = nullptr;};
    inline string appSpec() const { DARABONBA_PTR_GET_DEFAULT(appSpec_, "") };
    inline GetAirflowResponseBodyRoot& setAppSpec(string appSpec) { DARABONBA_PTR_SET_VALUE(appSpec_, appSpec) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetAirflowResponseBodyRoot& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // customAirflowCfg Field Functions 
    bool hasCustomAirflowCfg() const { return this->customAirflowCfg_ != nullptr;};
    void deleteCustomAirflowCfg() { this->customAirflowCfg_ = nullptr;};
    inline const vector<string> & customAirflowCfg() const { DARABONBA_PTR_GET_CONST(customAirflowCfg_, vector<string>) };
    inline vector<string> customAirflowCfg() { DARABONBA_PTR_GET(customAirflowCfg_, vector<string>) };
    inline GetAirflowResponseBodyRoot& setCustomAirflowCfg(const vector<string> & customAirflowCfg) { DARABONBA_PTR_SET_VALUE(customAirflowCfg_, customAirflowCfg) };
    inline GetAirflowResponseBodyRoot& setCustomAirflowCfg(vector<string> && customAirflowCfg) { DARABONBA_PTR_SET_RVALUE(customAirflowCfg_, customAirflowCfg) };


    // dagsDir Field Functions 
    bool hasDagsDir() const { return this->dagsDir_ != nullptr;};
    void deleteDagsDir() { this->dagsDir_ = nullptr;};
    inline string dagsDir() const { DARABONBA_PTR_GET_DEFAULT(dagsDir_, "") };
    inline GetAirflowResponseBodyRoot& setDagsDir(string dagsDir) { DARABONBA_PTR_SET_VALUE(dagsDir_, dagsDir) };


    // deployErrorMsg Field Functions 
    bool hasDeployErrorMsg() const { return this->deployErrorMsg_ != nullptr;};
    void deleteDeployErrorMsg() { this->deployErrorMsg_ = nullptr;};
    inline string deployErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(deployErrorMsg_, "") };
    inline GetAirflowResponseBodyRoot& setDeployErrorMsg(string deployErrorMsg) { DARABONBA_PTR_SET_VALUE(deployErrorMsg_, deployErrorMsg) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAirflowResponseBodyRoot& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline GetAirflowResponseBodyRoot& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline GetAirflowResponseBodyRoot& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline GetAirflowResponseBodyRoot& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // pluginsDir Field Functions 
    bool hasPluginsDir() const { return this->pluginsDir_ != nullptr;};
    void deletePluginsDir() { this->pluginsDir_ = nullptr;};
    inline string pluginsDir() const { DARABONBA_PTR_GET_DEFAULT(pluginsDir_, "") };
    inline GetAirflowResponseBodyRoot& setPluginsDir(string pluginsDir) { DARABONBA_PTR_SET_VALUE(pluginsDir_, pluginsDir) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAirflowResponseBodyRoot& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requirementFile Field Functions 
    bool hasRequirementFile() const { return this->requirementFile_ != nullptr;};
    void deleteRequirementFile() { this->requirementFile_ = nullptr;};
    inline string requirementFile() const { DARABONBA_PTR_GET_DEFAULT(requirementFile_, "") };
    inline GetAirflowResponseBodyRoot& setRequirementFile(string requirementFile) { DARABONBA_PTR_SET_VALUE(requirementFile_, requirementFile) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetAirflowResponseBodyRoot& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // startupFile Field Functions 
    bool hasStartupFile() const { return this->startupFile_ != nullptr;};
    void deleteStartupFile() { this->startupFile_ = nullptr;};
    inline string startupFile() const { DARABONBA_PTR_GET_DEFAULT(startupFile_, "") };
    inline GetAirflowResponseBodyRoot& setStartupFile(string startupFile) { DARABONBA_PTR_SET_VALUE(startupFile_, startupFile) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAirflowResponseBodyRoot& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetAirflowResponseBodyRoot& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetAirflowResponseBodyRoot& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workerServerlessReplicas Field Functions 
    bool hasWorkerServerlessReplicas() const { return this->workerServerlessReplicas_ != nullptr;};
    void deleteWorkerServerlessReplicas() { this->workerServerlessReplicas_ = nullptr;};
    inline int32_t workerServerlessReplicas() const { DARABONBA_PTR_GET_DEFAULT(workerServerlessReplicas_, 0) };
    inline GetAirflowResponseBodyRoot& setWorkerServerlessReplicas(int32_t workerServerlessReplicas) { DARABONBA_PTR_SET_VALUE(workerServerlessReplicas_, workerServerlessReplicas) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetAirflowResponseBodyRoot& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetAirflowResponseBodyRoot& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> airflowId_ = nullptr;
    std::shared_ptr<string> airflowName_ = nullptr;
    std::shared_ptr<string> appSpec_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<vector<string>> customAirflowCfg_ = nullptr;
    std::shared_ptr<string> dagsDir_ = nullptr;
    std::shared_ptr<string> deployErrorMsg_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> ossBucketName_ = nullptr;
    std::shared_ptr<string> ossPath_ = nullptr;
    std::shared_ptr<string> pluginsDir_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> requirementFile_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> startupFile_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // VPC ID。
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<int32_t> workerServerlessReplicas_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
