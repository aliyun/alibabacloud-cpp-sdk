// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIRFLOWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIRFLOWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateAirflowShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAirflowShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AirflowName, airflowName_);
      DARABONBA_PTR_TO_JSON(AirflowVersion, airflowVersion_);
      DARABONBA_PTR_TO_JSON(AppSpec, appSpec_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DagsDir, dagsDir_);
      DARABONBA_PTR_TO_JSON(DataMountInfoList, dataMountInfoListShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableServerless, enableServerless_);
      DARABONBA_PTR_TO_JSON(GracefulShutdownTimeout, gracefulShutdownTimeout_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
      DARABONBA_PTR_TO_JSON(PluginsDir, pluginsDir_);
      DARABONBA_PTR_TO_JSON(RequirementFile, requirementFile_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(StartupFile, startupFile_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WorkerServerlessReplicas, workerServerlessReplicas_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAirflowShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AirflowName, airflowName_);
      DARABONBA_PTR_FROM_JSON(AirflowVersion, airflowVersion_);
      DARABONBA_PTR_FROM_JSON(AppSpec, appSpec_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DagsDir, dagsDir_);
      DARABONBA_PTR_FROM_JSON(DataMountInfoList, dataMountInfoListShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableServerless, enableServerless_);
      DARABONBA_PTR_FROM_JSON(GracefulShutdownTimeout, gracefulShutdownTimeout_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(PluginsDir, pluginsDir_);
      DARABONBA_PTR_FROM_JSON(RequirementFile, requirementFile_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(StartupFile, startupFile_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WorkerServerlessReplicas, workerServerlessReplicas_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateAirflowShrinkRequest() = default ;
    CreateAirflowShrinkRequest(const CreateAirflowShrinkRequest &) = default ;
    CreateAirflowShrinkRequest(CreateAirflowShrinkRequest &&) = default ;
    CreateAirflowShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAirflowShrinkRequest() = default ;
    CreateAirflowShrinkRequest& operator=(const CreateAirflowShrinkRequest &) = default ;
    CreateAirflowShrinkRequest& operator=(CreateAirflowShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->airflowName_ == nullptr
        && this->airflowVersion_ == nullptr && this->appSpec_ == nullptr && this->clientToken_ == nullptr && this->dagsDir_ == nullptr && this->dataMountInfoListShrink_ == nullptr
        && this->description_ == nullptr && this->enableServerless_ == nullptr && this->gracefulShutdownTimeout_ == nullptr && this->ossBucketName_ == nullptr && this->ossPath_ == nullptr
        && this->pluginsDir_ == nullptr && this->requirementFile_ == nullptr && this->securityGroupId_ == nullptr && this->startupFile_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr && this->workerServerlessReplicas_ == nullptr && this->workspaceId_ == nullptr && this->zoneId_ == nullptr; };
    // airflowName Field Functions 
    bool hasAirflowName() const { return this->airflowName_ != nullptr;};
    void deleteAirflowName() { this->airflowName_ = nullptr;};
    inline string getAirflowName() const { DARABONBA_PTR_GET_DEFAULT(airflowName_, "") };
    inline CreateAirflowShrinkRequest& setAirflowName(string airflowName) { DARABONBA_PTR_SET_VALUE(airflowName_, airflowName) };


    // airflowVersion Field Functions 
    bool hasAirflowVersion() const { return this->airflowVersion_ != nullptr;};
    void deleteAirflowVersion() { this->airflowVersion_ = nullptr;};
    inline string getAirflowVersion() const { DARABONBA_PTR_GET_DEFAULT(airflowVersion_, "") };
    inline CreateAirflowShrinkRequest& setAirflowVersion(string airflowVersion) { DARABONBA_PTR_SET_VALUE(airflowVersion_, airflowVersion) };


    // appSpec Field Functions 
    bool hasAppSpec() const { return this->appSpec_ != nullptr;};
    void deleteAppSpec() { this->appSpec_ = nullptr;};
    inline string getAppSpec() const { DARABONBA_PTR_GET_DEFAULT(appSpec_, "") };
    inline CreateAirflowShrinkRequest& setAppSpec(string appSpec) { DARABONBA_PTR_SET_VALUE(appSpec_, appSpec) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAirflowShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dagsDir Field Functions 
    bool hasDagsDir() const { return this->dagsDir_ != nullptr;};
    void deleteDagsDir() { this->dagsDir_ = nullptr;};
    inline string getDagsDir() const { DARABONBA_PTR_GET_DEFAULT(dagsDir_, "") };
    inline CreateAirflowShrinkRequest& setDagsDir(string dagsDir) { DARABONBA_PTR_SET_VALUE(dagsDir_, dagsDir) };


    // dataMountInfoListShrink Field Functions 
    bool hasDataMountInfoListShrink() const { return this->dataMountInfoListShrink_ != nullptr;};
    void deleteDataMountInfoListShrink() { this->dataMountInfoListShrink_ = nullptr;};
    inline string getDataMountInfoListShrink() const { DARABONBA_PTR_GET_DEFAULT(dataMountInfoListShrink_, "") };
    inline CreateAirflowShrinkRequest& setDataMountInfoListShrink(string dataMountInfoListShrink) { DARABONBA_PTR_SET_VALUE(dataMountInfoListShrink_, dataMountInfoListShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAirflowShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableServerless Field Functions 
    bool hasEnableServerless() const { return this->enableServerless_ != nullptr;};
    void deleteEnableServerless() { this->enableServerless_ = nullptr;};
    inline bool getEnableServerless() const { DARABONBA_PTR_GET_DEFAULT(enableServerless_, false) };
    inline CreateAirflowShrinkRequest& setEnableServerless(bool enableServerless) { DARABONBA_PTR_SET_VALUE(enableServerless_, enableServerless) };


    // gracefulShutdownTimeout Field Functions 
    bool hasGracefulShutdownTimeout() const { return this->gracefulShutdownTimeout_ != nullptr;};
    void deleteGracefulShutdownTimeout() { this->gracefulShutdownTimeout_ = nullptr;};
    inline int32_t getGracefulShutdownTimeout() const { DARABONBA_PTR_GET_DEFAULT(gracefulShutdownTimeout_, 0) };
    inline CreateAirflowShrinkRequest& setGracefulShutdownTimeout(int32_t gracefulShutdownTimeout) { DARABONBA_PTR_SET_VALUE(gracefulShutdownTimeout_, gracefulShutdownTimeout) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline CreateAirflowShrinkRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string getOssPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline CreateAirflowShrinkRequest& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // pluginsDir Field Functions 
    bool hasPluginsDir() const { return this->pluginsDir_ != nullptr;};
    void deletePluginsDir() { this->pluginsDir_ = nullptr;};
    inline string getPluginsDir() const { DARABONBA_PTR_GET_DEFAULT(pluginsDir_, "") };
    inline CreateAirflowShrinkRequest& setPluginsDir(string pluginsDir) { DARABONBA_PTR_SET_VALUE(pluginsDir_, pluginsDir) };


    // requirementFile Field Functions 
    bool hasRequirementFile() const { return this->requirementFile_ != nullptr;};
    void deleteRequirementFile() { this->requirementFile_ = nullptr;};
    inline string getRequirementFile() const { DARABONBA_PTR_GET_DEFAULT(requirementFile_, "") };
    inline CreateAirflowShrinkRequest& setRequirementFile(string requirementFile) { DARABONBA_PTR_SET_VALUE(requirementFile_, requirementFile) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateAirflowShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // startupFile Field Functions 
    bool hasStartupFile() const { return this->startupFile_ != nullptr;};
    void deleteStartupFile() { this->startupFile_ = nullptr;};
    inline string getStartupFile() const { DARABONBA_PTR_GET_DEFAULT(startupFile_, "") };
    inline CreateAirflowShrinkRequest& setStartupFile(string startupFile) { DARABONBA_PTR_SET_VALUE(startupFile_, startupFile) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateAirflowShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateAirflowShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workerServerlessReplicas Field Functions 
    bool hasWorkerServerlessReplicas() const { return this->workerServerlessReplicas_ != nullptr;};
    void deleteWorkerServerlessReplicas() { this->workerServerlessReplicas_ = nullptr;};
    inline int32_t getWorkerServerlessReplicas() const { DARABONBA_PTR_GET_DEFAULT(workerServerlessReplicas_, 0) };
    inline CreateAirflowShrinkRequest& setWorkerServerlessReplicas(int32_t workerServerlessReplicas) { DARABONBA_PTR_SET_VALUE(workerServerlessReplicas_, workerServerlessReplicas) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateAirflowShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateAirflowShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // This parameter is required.
    shared_ptr<string> airflowName_ {};
    shared_ptr<string> airflowVersion_ {};
    // This parameter is required.
    shared_ptr<string> appSpec_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> dagsDir_ {};
    shared_ptr<string> dataMountInfoListShrink_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enableServerless_ {};
    shared_ptr<int32_t> gracefulShutdownTimeout_ {};
    // This parameter is required.
    shared_ptr<string> ossBucketName_ {};
    // This parameter is required.
    shared_ptr<string> ossPath_ {};
    shared_ptr<string> pluginsDir_ {};
    shared_ptr<string> requirementFile_ {};
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
    shared_ptr<string> startupFile_ {};
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // VPC ID。
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // This parameter is required.
    shared_ptr<int32_t> workerServerlessReplicas_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
