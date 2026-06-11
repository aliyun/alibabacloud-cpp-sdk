// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIRFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIRFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataMountInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateAirflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAirflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AirflowName, airflowName_);
      DARABONBA_PTR_TO_JSON(AirflowVersion, airflowVersion_);
      DARABONBA_PTR_TO_JSON(AppSpec, appSpec_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DagsDir, dagsDir_);
      DARABONBA_PTR_TO_JSON(DataMountInfoList, dataMountInfoList_);
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
    friend void from_json(const Darabonba::Json& j, CreateAirflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AirflowName, airflowName_);
      DARABONBA_PTR_FROM_JSON(AirflowVersion, airflowVersion_);
      DARABONBA_PTR_FROM_JSON(AppSpec, appSpec_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DagsDir, dagsDir_);
      DARABONBA_PTR_FROM_JSON(DataMountInfoList, dataMountInfoList_);
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
    CreateAirflowRequest() = default ;
    CreateAirflowRequest(const CreateAirflowRequest &) = default ;
    CreateAirflowRequest(CreateAirflowRequest &&) = default ;
    CreateAirflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAirflowRequest() = default ;
    CreateAirflowRequest& operator=(const CreateAirflowRequest &) = default ;
    CreateAirflowRequest& operator=(CreateAirflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->airflowName_ == nullptr
        && this->airflowVersion_ == nullptr && this->appSpec_ == nullptr && this->clientToken_ == nullptr && this->dagsDir_ == nullptr && this->dataMountInfoList_ == nullptr
        && this->description_ == nullptr && this->enableServerless_ == nullptr && this->gracefulShutdownTimeout_ == nullptr && this->ossBucketName_ == nullptr && this->ossPath_ == nullptr
        && this->pluginsDir_ == nullptr && this->requirementFile_ == nullptr && this->securityGroupId_ == nullptr && this->startupFile_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr && this->workerServerlessReplicas_ == nullptr && this->workspaceId_ == nullptr && this->zoneId_ == nullptr; };
    // airflowName Field Functions 
    bool hasAirflowName() const { return this->airflowName_ != nullptr;};
    void deleteAirflowName() { this->airflowName_ = nullptr;};
    inline string getAirflowName() const { DARABONBA_PTR_GET_DEFAULT(airflowName_, "") };
    inline CreateAirflowRequest& setAirflowName(string airflowName) { DARABONBA_PTR_SET_VALUE(airflowName_, airflowName) };


    // airflowVersion Field Functions 
    bool hasAirflowVersion() const { return this->airflowVersion_ != nullptr;};
    void deleteAirflowVersion() { this->airflowVersion_ = nullptr;};
    inline string getAirflowVersion() const { DARABONBA_PTR_GET_DEFAULT(airflowVersion_, "") };
    inline CreateAirflowRequest& setAirflowVersion(string airflowVersion) { DARABONBA_PTR_SET_VALUE(airflowVersion_, airflowVersion) };


    // appSpec Field Functions 
    bool hasAppSpec() const { return this->appSpec_ != nullptr;};
    void deleteAppSpec() { this->appSpec_ = nullptr;};
    inline string getAppSpec() const { DARABONBA_PTR_GET_DEFAULT(appSpec_, "") };
    inline CreateAirflowRequest& setAppSpec(string appSpec) { DARABONBA_PTR_SET_VALUE(appSpec_, appSpec) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAirflowRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dagsDir Field Functions 
    bool hasDagsDir() const { return this->dagsDir_ != nullptr;};
    void deleteDagsDir() { this->dagsDir_ = nullptr;};
    inline string getDagsDir() const { DARABONBA_PTR_GET_DEFAULT(dagsDir_, "") };
    inline CreateAirflowRequest& setDagsDir(string dagsDir) { DARABONBA_PTR_SET_VALUE(dagsDir_, dagsDir) };


    // dataMountInfoList Field Functions 
    bool hasDataMountInfoList() const { return this->dataMountInfoList_ != nullptr;};
    void deleteDataMountInfoList() { this->dataMountInfoList_ = nullptr;};
    inline const vector<DataMountInfo> & getDataMountInfoList() const { DARABONBA_PTR_GET_CONST(dataMountInfoList_, vector<DataMountInfo>) };
    inline vector<DataMountInfo> getDataMountInfoList() { DARABONBA_PTR_GET(dataMountInfoList_, vector<DataMountInfo>) };
    inline CreateAirflowRequest& setDataMountInfoList(const vector<DataMountInfo> & dataMountInfoList) { DARABONBA_PTR_SET_VALUE(dataMountInfoList_, dataMountInfoList) };
    inline CreateAirflowRequest& setDataMountInfoList(vector<DataMountInfo> && dataMountInfoList) { DARABONBA_PTR_SET_RVALUE(dataMountInfoList_, dataMountInfoList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAirflowRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableServerless Field Functions 
    bool hasEnableServerless() const { return this->enableServerless_ != nullptr;};
    void deleteEnableServerless() { this->enableServerless_ = nullptr;};
    inline bool getEnableServerless() const { DARABONBA_PTR_GET_DEFAULT(enableServerless_, false) };
    inline CreateAirflowRequest& setEnableServerless(bool enableServerless) { DARABONBA_PTR_SET_VALUE(enableServerless_, enableServerless) };


    // gracefulShutdownTimeout Field Functions 
    bool hasGracefulShutdownTimeout() const { return this->gracefulShutdownTimeout_ != nullptr;};
    void deleteGracefulShutdownTimeout() { this->gracefulShutdownTimeout_ = nullptr;};
    inline int32_t getGracefulShutdownTimeout() const { DARABONBA_PTR_GET_DEFAULT(gracefulShutdownTimeout_, 0) };
    inline CreateAirflowRequest& setGracefulShutdownTimeout(int32_t gracefulShutdownTimeout) { DARABONBA_PTR_SET_VALUE(gracefulShutdownTimeout_, gracefulShutdownTimeout) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline CreateAirflowRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string getOssPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline CreateAirflowRequest& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // pluginsDir Field Functions 
    bool hasPluginsDir() const { return this->pluginsDir_ != nullptr;};
    void deletePluginsDir() { this->pluginsDir_ = nullptr;};
    inline string getPluginsDir() const { DARABONBA_PTR_GET_DEFAULT(pluginsDir_, "") };
    inline CreateAirflowRequest& setPluginsDir(string pluginsDir) { DARABONBA_PTR_SET_VALUE(pluginsDir_, pluginsDir) };


    // requirementFile Field Functions 
    bool hasRequirementFile() const { return this->requirementFile_ != nullptr;};
    void deleteRequirementFile() { this->requirementFile_ = nullptr;};
    inline string getRequirementFile() const { DARABONBA_PTR_GET_DEFAULT(requirementFile_, "") };
    inline CreateAirflowRequest& setRequirementFile(string requirementFile) { DARABONBA_PTR_SET_VALUE(requirementFile_, requirementFile) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateAirflowRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // startupFile Field Functions 
    bool hasStartupFile() const { return this->startupFile_ != nullptr;};
    void deleteStartupFile() { this->startupFile_ = nullptr;};
    inline string getStartupFile() const { DARABONBA_PTR_GET_DEFAULT(startupFile_, "") };
    inline CreateAirflowRequest& setStartupFile(string startupFile) { DARABONBA_PTR_SET_VALUE(startupFile_, startupFile) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateAirflowRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateAirflowRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workerServerlessReplicas Field Functions 
    bool hasWorkerServerlessReplicas() const { return this->workerServerlessReplicas_ != nullptr;};
    void deleteWorkerServerlessReplicas() { this->workerServerlessReplicas_ = nullptr;};
    inline int32_t getWorkerServerlessReplicas() const { DARABONBA_PTR_GET_DEFAULT(workerServerlessReplicas_, 0) };
    inline CreateAirflowRequest& setWorkerServerlessReplicas(int32_t workerServerlessReplicas) { DARABONBA_PTR_SET_VALUE(workerServerlessReplicas_, workerServerlessReplicas) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateAirflowRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateAirflowRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The name of the Airflow instance.
    // 
    // This parameter is required.
    shared_ptr<string> airflowName_ {};
    // The Airflow version. Supported versions: 2.10 and 3.1.
    shared_ptr<string> airflowVersion_ {};
    // The compute specifications for the Airflow instance. Valid values: **SMALL**, **MEDIUM**, **LARGE**, **XLARGE**, or **X2LARGE**.
    // 
    // This parameter is required.
    shared_ptr<string> appSpec_ {};
    // A client token to ensure request idempotence.
    shared_ptr<string> clientToken_ {};
    // The path to the DAG directory for Airflow to scan.
    shared_ptr<string> dagsDir_ {};
    // A list of data mount configurations.
    shared_ptr<vector<DataMountInfo>> dataMountInfoList_ {};
    // The description of the Airflow instance.
    shared_ptr<string> description_ {};
    // Specifies whether to enable worker elasticity.
    shared_ptr<bool> enableServerless_ {};
    // The graceful shutdown timeout for workers, in seconds.
    shared_ptr<int32_t> gracefulShutdownTimeout_ {};
    // The name of the OSS bucket.
    // 
    // This parameter is required.
    shared_ptr<string> ossBucketName_ {};
    // The OSS path for log storage.
    // 
    // This parameter is required.
    shared_ptr<string> ossPath_ {};
    // The path to the plugin directory for the Airflow instance to scan.
    shared_ptr<string> pluginsDir_ {};
    // The path to the Python requirements file.
    shared_ptr<string> requirementFile_ {};
    // The security group ID.
    // 
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
    // The path to the startup script in the Airflow container.
    shared_ptr<string> startupFile_ {};
    // The vSwitch ID.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The number of elastic worker nodes.
    // 
    // This parameter is required.
    shared_ptr<int32_t> workerServerlessReplicas_ {};
    // The ID of the DMS workspace.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
    // The ID of the zone where the instance will be created.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
