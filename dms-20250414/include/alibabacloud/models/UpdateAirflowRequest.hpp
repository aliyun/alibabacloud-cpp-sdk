// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAIRFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAIRFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateAirflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAirflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AirflowId, airflowId_);
      DARABONBA_PTR_TO_JSON(AirflowName, airflowName_);
      DARABONBA_PTR_TO_JSON(AppSpec, appSpec_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DagsDir, dagsDir_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PluginsDir, pluginsDir_);
      DARABONBA_PTR_TO_JSON(RequirementFile, requirementFile_);
      DARABONBA_PTR_TO_JSON(StartupFile, startupFile_);
      DARABONBA_PTR_TO_JSON(WorkerServerlessReplicas, workerServerlessReplicas_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAirflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AirflowId, airflowId_);
      DARABONBA_PTR_FROM_JSON(AirflowName, airflowName_);
      DARABONBA_PTR_FROM_JSON(AppSpec, appSpec_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DagsDir, dagsDir_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PluginsDir, pluginsDir_);
      DARABONBA_PTR_FROM_JSON(RequirementFile, requirementFile_);
      DARABONBA_PTR_FROM_JSON(StartupFile, startupFile_);
      DARABONBA_PTR_FROM_JSON(WorkerServerlessReplicas, workerServerlessReplicas_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateAirflowRequest() = default ;
    UpdateAirflowRequest(const UpdateAirflowRequest &) = default ;
    UpdateAirflowRequest(UpdateAirflowRequest &&) = default ;
    UpdateAirflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAirflowRequest() = default ;
    UpdateAirflowRequest& operator=(const UpdateAirflowRequest &) = default ;
    UpdateAirflowRequest& operator=(UpdateAirflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->airflowId_ == nullptr
        && return this->airflowName_ == nullptr && return this->appSpec_ == nullptr && return this->clientToken_ == nullptr && return this->dagsDir_ == nullptr && return this->description_ == nullptr
        && return this->pluginsDir_ == nullptr && return this->requirementFile_ == nullptr && return this->startupFile_ == nullptr && return this->workerServerlessReplicas_ == nullptr && return this->workspaceId_ == nullptr; };
    // airflowId Field Functions 
    bool hasAirflowId() const { return this->airflowId_ != nullptr;};
    void deleteAirflowId() { this->airflowId_ = nullptr;};
    inline string airflowId() const { DARABONBA_PTR_GET_DEFAULT(airflowId_, "") };
    inline UpdateAirflowRequest& setAirflowId(string airflowId) { DARABONBA_PTR_SET_VALUE(airflowId_, airflowId) };


    // airflowName Field Functions 
    bool hasAirflowName() const { return this->airflowName_ != nullptr;};
    void deleteAirflowName() { this->airflowName_ = nullptr;};
    inline string airflowName() const { DARABONBA_PTR_GET_DEFAULT(airflowName_, "") };
    inline UpdateAirflowRequest& setAirflowName(string airflowName) { DARABONBA_PTR_SET_VALUE(airflowName_, airflowName) };


    // appSpec Field Functions 
    bool hasAppSpec() const { return this->appSpec_ != nullptr;};
    void deleteAppSpec() { this->appSpec_ = nullptr;};
    inline string appSpec() const { DARABONBA_PTR_GET_DEFAULT(appSpec_, "") };
    inline UpdateAirflowRequest& setAppSpec(string appSpec) { DARABONBA_PTR_SET_VALUE(appSpec_, appSpec) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAirflowRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dagsDir Field Functions 
    bool hasDagsDir() const { return this->dagsDir_ != nullptr;};
    void deleteDagsDir() { this->dagsDir_ = nullptr;};
    inline string dagsDir() const { DARABONBA_PTR_GET_DEFAULT(dagsDir_, "") };
    inline UpdateAirflowRequest& setDagsDir(string dagsDir) { DARABONBA_PTR_SET_VALUE(dagsDir_, dagsDir) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAirflowRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // pluginsDir Field Functions 
    bool hasPluginsDir() const { return this->pluginsDir_ != nullptr;};
    void deletePluginsDir() { this->pluginsDir_ = nullptr;};
    inline string pluginsDir() const { DARABONBA_PTR_GET_DEFAULT(pluginsDir_, "") };
    inline UpdateAirflowRequest& setPluginsDir(string pluginsDir) { DARABONBA_PTR_SET_VALUE(pluginsDir_, pluginsDir) };


    // requirementFile Field Functions 
    bool hasRequirementFile() const { return this->requirementFile_ != nullptr;};
    void deleteRequirementFile() { this->requirementFile_ = nullptr;};
    inline string requirementFile() const { DARABONBA_PTR_GET_DEFAULT(requirementFile_, "") };
    inline UpdateAirflowRequest& setRequirementFile(string requirementFile) { DARABONBA_PTR_SET_VALUE(requirementFile_, requirementFile) };


    // startupFile Field Functions 
    bool hasStartupFile() const { return this->startupFile_ != nullptr;};
    void deleteStartupFile() { this->startupFile_ = nullptr;};
    inline string startupFile() const { DARABONBA_PTR_GET_DEFAULT(startupFile_, "") };
    inline UpdateAirflowRequest& setStartupFile(string startupFile) { DARABONBA_PTR_SET_VALUE(startupFile_, startupFile) };


    // workerServerlessReplicas Field Functions 
    bool hasWorkerServerlessReplicas() const { return this->workerServerlessReplicas_ != nullptr;};
    void deleteWorkerServerlessReplicas() { this->workerServerlessReplicas_ = nullptr;};
    inline int32_t workerServerlessReplicas() const { DARABONBA_PTR_GET_DEFAULT(workerServerlessReplicas_, 0) };
    inline UpdateAirflowRequest& setWorkerServerlessReplicas(int32_t workerServerlessReplicas) { DARABONBA_PTR_SET_VALUE(workerServerlessReplicas_, workerServerlessReplicas) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateAirflowRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> airflowId_ = nullptr;
    std::shared_ptr<string> airflowName_ = nullptr;
    std::shared_ptr<string> appSpec_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> dagsDir_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> pluginsDir_ = nullptr;
    std::shared_ptr<string> requirementFile_ = nullptr;
    std::shared_ptr<string> startupFile_ = nullptr;
    std::shared_ptr<int32_t> workerServerlessReplicas_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
