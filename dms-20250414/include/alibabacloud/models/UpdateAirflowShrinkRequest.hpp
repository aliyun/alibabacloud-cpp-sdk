// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAIRFLOWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAIRFLOWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateAirflowShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAirflowShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AirflowId, airflowId_);
      DARABONBA_PTR_TO_JSON(AirflowName, airflowName_);
      DARABONBA_PTR_TO_JSON(AppSpec, appSpec_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DagsDir, dagsDir_);
      DARABONBA_PTR_TO_JSON(DataMountInfoList, dataMountInfoListShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableServerless, enableServerless_);
      DARABONBA_PTR_TO_JSON(GracefulShutdownTimeout, gracefulShutdownTimeout_);
      DARABONBA_PTR_TO_JSON(PluginsDir, pluginsDir_);
      DARABONBA_PTR_TO_JSON(RequirementFile, requirementFile_);
      DARABONBA_PTR_TO_JSON(StartupFile, startupFile_);
      DARABONBA_PTR_TO_JSON(WorkerServerlessReplicas, workerServerlessReplicas_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAirflowShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AirflowId, airflowId_);
      DARABONBA_PTR_FROM_JSON(AirflowName, airflowName_);
      DARABONBA_PTR_FROM_JSON(AppSpec, appSpec_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DagsDir, dagsDir_);
      DARABONBA_PTR_FROM_JSON(DataMountInfoList, dataMountInfoListShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableServerless, enableServerless_);
      DARABONBA_PTR_FROM_JSON(GracefulShutdownTimeout, gracefulShutdownTimeout_);
      DARABONBA_PTR_FROM_JSON(PluginsDir, pluginsDir_);
      DARABONBA_PTR_FROM_JSON(RequirementFile, requirementFile_);
      DARABONBA_PTR_FROM_JSON(StartupFile, startupFile_);
      DARABONBA_PTR_FROM_JSON(WorkerServerlessReplicas, workerServerlessReplicas_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateAirflowShrinkRequest() = default ;
    UpdateAirflowShrinkRequest(const UpdateAirflowShrinkRequest &) = default ;
    UpdateAirflowShrinkRequest(UpdateAirflowShrinkRequest &&) = default ;
    UpdateAirflowShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAirflowShrinkRequest() = default ;
    UpdateAirflowShrinkRequest& operator=(const UpdateAirflowShrinkRequest &) = default ;
    UpdateAirflowShrinkRequest& operator=(UpdateAirflowShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->airflowId_ == nullptr
        && this->airflowName_ == nullptr && this->appSpec_ == nullptr && this->clientToken_ == nullptr && this->dagsDir_ == nullptr && this->dataMountInfoListShrink_ == nullptr
        && this->description_ == nullptr && this->enableServerless_ == nullptr && this->gracefulShutdownTimeout_ == nullptr && this->pluginsDir_ == nullptr && this->requirementFile_ == nullptr
        && this->startupFile_ == nullptr && this->workerServerlessReplicas_ == nullptr && this->workspaceId_ == nullptr; };
    // airflowId Field Functions 
    bool hasAirflowId() const { return this->airflowId_ != nullptr;};
    void deleteAirflowId() { this->airflowId_ = nullptr;};
    inline string getAirflowId() const { DARABONBA_PTR_GET_DEFAULT(airflowId_, "") };
    inline UpdateAirflowShrinkRequest& setAirflowId(string airflowId) { DARABONBA_PTR_SET_VALUE(airflowId_, airflowId) };


    // airflowName Field Functions 
    bool hasAirflowName() const { return this->airflowName_ != nullptr;};
    void deleteAirflowName() { this->airflowName_ = nullptr;};
    inline string getAirflowName() const { DARABONBA_PTR_GET_DEFAULT(airflowName_, "") };
    inline UpdateAirflowShrinkRequest& setAirflowName(string airflowName) { DARABONBA_PTR_SET_VALUE(airflowName_, airflowName) };


    // appSpec Field Functions 
    bool hasAppSpec() const { return this->appSpec_ != nullptr;};
    void deleteAppSpec() { this->appSpec_ = nullptr;};
    inline string getAppSpec() const { DARABONBA_PTR_GET_DEFAULT(appSpec_, "") };
    inline UpdateAirflowShrinkRequest& setAppSpec(string appSpec) { DARABONBA_PTR_SET_VALUE(appSpec_, appSpec) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAirflowShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dagsDir Field Functions 
    bool hasDagsDir() const { return this->dagsDir_ != nullptr;};
    void deleteDagsDir() { this->dagsDir_ = nullptr;};
    inline string getDagsDir() const { DARABONBA_PTR_GET_DEFAULT(dagsDir_, "") };
    inline UpdateAirflowShrinkRequest& setDagsDir(string dagsDir) { DARABONBA_PTR_SET_VALUE(dagsDir_, dagsDir) };


    // dataMountInfoListShrink Field Functions 
    bool hasDataMountInfoListShrink() const { return this->dataMountInfoListShrink_ != nullptr;};
    void deleteDataMountInfoListShrink() { this->dataMountInfoListShrink_ = nullptr;};
    inline string getDataMountInfoListShrink() const { DARABONBA_PTR_GET_DEFAULT(dataMountInfoListShrink_, "") };
    inline UpdateAirflowShrinkRequest& setDataMountInfoListShrink(string dataMountInfoListShrink) { DARABONBA_PTR_SET_VALUE(dataMountInfoListShrink_, dataMountInfoListShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAirflowShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableServerless Field Functions 
    bool hasEnableServerless() const { return this->enableServerless_ != nullptr;};
    void deleteEnableServerless() { this->enableServerless_ = nullptr;};
    inline bool getEnableServerless() const { DARABONBA_PTR_GET_DEFAULT(enableServerless_, false) };
    inline UpdateAirflowShrinkRequest& setEnableServerless(bool enableServerless) { DARABONBA_PTR_SET_VALUE(enableServerless_, enableServerless) };


    // gracefulShutdownTimeout Field Functions 
    bool hasGracefulShutdownTimeout() const { return this->gracefulShutdownTimeout_ != nullptr;};
    void deleteGracefulShutdownTimeout() { this->gracefulShutdownTimeout_ = nullptr;};
    inline int32_t getGracefulShutdownTimeout() const { DARABONBA_PTR_GET_DEFAULT(gracefulShutdownTimeout_, 0) };
    inline UpdateAirflowShrinkRequest& setGracefulShutdownTimeout(int32_t gracefulShutdownTimeout) { DARABONBA_PTR_SET_VALUE(gracefulShutdownTimeout_, gracefulShutdownTimeout) };


    // pluginsDir Field Functions 
    bool hasPluginsDir() const { return this->pluginsDir_ != nullptr;};
    void deletePluginsDir() { this->pluginsDir_ = nullptr;};
    inline string getPluginsDir() const { DARABONBA_PTR_GET_DEFAULT(pluginsDir_, "") };
    inline UpdateAirflowShrinkRequest& setPluginsDir(string pluginsDir) { DARABONBA_PTR_SET_VALUE(pluginsDir_, pluginsDir) };


    // requirementFile Field Functions 
    bool hasRequirementFile() const { return this->requirementFile_ != nullptr;};
    void deleteRequirementFile() { this->requirementFile_ = nullptr;};
    inline string getRequirementFile() const { DARABONBA_PTR_GET_DEFAULT(requirementFile_, "") };
    inline UpdateAirflowShrinkRequest& setRequirementFile(string requirementFile) { DARABONBA_PTR_SET_VALUE(requirementFile_, requirementFile) };


    // startupFile Field Functions 
    bool hasStartupFile() const { return this->startupFile_ != nullptr;};
    void deleteStartupFile() { this->startupFile_ = nullptr;};
    inline string getStartupFile() const { DARABONBA_PTR_GET_DEFAULT(startupFile_, "") };
    inline UpdateAirflowShrinkRequest& setStartupFile(string startupFile) { DARABONBA_PTR_SET_VALUE(startupFile_, startupFile) };


    // workerServerlessReplicas Field Functions 
    bool hasWorkerServerlessReplicas() const { return this->workerServerlessReplicas_ != nullptr;};
    void deleteWorkerServerlessReplicas() { this->workerServerlessReplicas_ = nullptr;};
    inline int32_t getWorkerServerlessReplicas() const { DARABONBA_PTR_GET_DEFAULT(workerServerlessReplicas_, 0) };
    inline UpdateAirflowShrinkRequest& setWorkerServerlessReplicas(int32_t workerServerlessReplicas) { DARABONBA_PTR_SET_VALUE(workerServerlessReplicas_, workerServerlessReplicas) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateAirflowShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> airflowId_ {};
    shared_ptr<string> airflowName_ {};
    shared_ptr<string> appSpec_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> dagsDir_ {};
    shared_ptr<string> dataMountInfoListShrink_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enableServerless_ {};
    shared_ptr<int32_t> gracefulShutdownTimeout_ {};
    shared_ptr<string> pluginsDir_ {};
    shared_ptr<string> requirementFile_ {};
    shared_ptr<string> startupFile_ {};
    shared_ptr<int32_t> workerServerlessReplicas_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
