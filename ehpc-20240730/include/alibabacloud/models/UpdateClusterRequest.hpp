// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateClusterRequestClusterCustomConfiguration.hpp>
#include <alibabacloud/models/UpdateClusterRequestMonitorSpec.hpp>
#include <alibabacloud/models/UpdateClusterRequestSchedulerSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class UpdateClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(ClusterCustomConfiguration, clusterCustomConfiguration_);
      DARABONBA_PTR_TO_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(EnableScaleIn, enableScaleIn_);
      DARABONBA_PTR_TO_JSON(EnableScaleOut, enableScaleOut_);
      DARABONBA_PTR_TO_JSON(GrowInterval, growInterval_);
      DARABONBA_PTR_TO_JSON(IdleInterval, idleInterval_);
      DARABONBA_PTR_TO_JSON(MaxCoreCount, maxCoreCount_);
      DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_TO_JSON(MonitorSpec, monitorSpec_);
      DARABONBA_PTR_TO_JSON(SchedulerSpec, schedulerSpec_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(ClusterCustomConfiguration, clusterCustomConfiguration_);
      DARABONBA_PTR_FROM_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(EnableScaleIn, enableScaleIn_);
      DARABONBA_PTR_FROM_JSON(EnableScaleOut, enableScaleOut_);
      DARABONBA_PTR_FROM_JSON(GrowInterval, growInterval_);
      DARABONBA_PTR_FROM_JSON(IdleInterval, idleInterval_);
      DARABONBA_PTR_FROM_JSON(MaxCoreCount, maxCoreCount_);
      DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_FROM_JSON(MonitorSpec, monitorSpec_);
      DARABONBA_PTR_FROM_JSON(SchedulerSpec, schedulerSpec_);
    };
    UpdateClusterRequest() = default ;
    UpdateClusterRequest(const UpdateClusterRequest &) = default ;
    UpdateClusterRequest(UpdateClusterRequest &&) = default ;
    UpdateClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClusterRequest() = default ;
    UpdateClusterRequest& operator=(const UpdateClusterRequest &) = default ;
    UpdateClusterRequest& operator=(UpdateClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientVersion_ == nullptr
        && return this->clusterCustomConfiguration_ == nullptr && return this->clusterDescription_ == nullptr && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->deletionProtection_ == nullptr
        && return this->enableScaleIn_ == nullptr && return this->enableScaleOut_ == nullptr && return this->growInterval_ == nullptr && return this->idleInterval_ == nullptr && return this->maxCoreCount_ == nullptr
        && return this->maxCount_ == nullptr && return this->monitorSpec_ == nullptr && return this->schedulerSpec_ == nullptr; };
    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline UpdateClusterRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // clusterCustomConfiguration Field Functions 
    bool hasClusterCustomConfiguration() const { return this->clusterCustomConfiguration_ != nullptr;};
    void deleteClusterCustomConfiguration() { this->clusterCustomConfiguration_ = nullptr;};
    inline const UpdateClusterRequestClusterCustomConfiguration & clusterCustomConfiguration() const { DARABONBA_PTR_GET_CONST(clusterCustomConfiguration_, UpdateClusterRequestClusterCustomConfiguration) };
    inline UpdateClusterRequestClusterCustomConfiguration clusterCustomConfiguration() { DARABONBA_PTR_GET(clusterCustomConfiguration_, UpdateClusterRequestClusterCustomConfiguration) };
    inline UpdateClusterRequest& setClusterCustomConfiguration(const UpdateClusterRequestClusterCustomConfiguration & clusterCustomConfiguration) { DARABONBA_PTR_SET_VALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };
    inline UpdateClusterRequest& setClusterCustomConfiguration(UpdateClusterRequestClusterCustomConfiguration && clusterCustomConfiguration) { DARABONBA_PTR_SET_RVALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };


    // clusterDescription Field Functions 
    bool hasClusterDescription() const { return this->clusterDescription_ != nullptr;};
    void deleteClusterDescription() { this->clusterDescription_ = nullptr;};
    inline string clusterDescription() const { DARABONBA_PTR_GET_DEFAULT(clusterDescription_, "") };
    inline UpdateClusterRequest& setClusterDescription(string clusterDescription) { DARABONBA_PTR_SET_VALUE(clusterDescription_, clusterDescription) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline UpdateClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline UpdateClusterRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // enableScaleIn Field Functions 
    bool hasEnableScaleIn() const { return this->enableScaleIn_ != nullptr;};
    void deleteEnableScaleIn() { this->enableScaleIn_ = nullptr;};
    inline bool enableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(enableScaleIn_, false) };
    inline UpdateClusterRequest& setEnableScaleIn(bool enableScaleIn) { DARABONBA_PTR_SET_VALUE(enableScaleIn_, enableScaleIn) };


    // enableScaleOut Field Functions 
    bool hasEnableScaleOut() const { return this->enableScaleOut_ != nullptr;};
    void deleteEnableScaleOut() { this->enableScaleOut_ = nullptr;};
    inline bool enableScaleOut() const { DARABONBA_PTR_GET_DEFAULT(enableScaleOut_, false) };
    inline UpdateClusterRequest& setEnableScaleOut(bool enableScaleOut) { DARABONBA_PTR_SET_VALUE(enableScaleOut_, enableScaleOut) };


    // growInterval Field Functions 
    bool hasGrowInterval() const { return this->growInterval_ != nullptr;};
    void deleteGrowInterval() { this->growInterval_ = nullptr;};
    inline int32_t growInterval() const { DARABONBA_PTR_GET_DEFAULT(growInterval_, 0) };
    inline UpdateClusterRequest& setGrowInterval(int32_t growInterval) { DARABONBA_PTR_SET_VALUE(growInterval_, growInterval) };


    // idleInterval Field Functions 
    bool hasIdleInterval() const { return this->idleInterval_ != nullptr;};
    void deleteIdleInterval() { this->idleInterval_ = nullptr;};
    inline int32_t idleInterval() const { DARABONBA_PTR_GET_DEFAULT(idleInterval_, 0) };
    inline UpdateClusterRequest& setIdleInterval(int32_t idleInterval) { DARABONBA_PTR_SET_VALUE(idleInterval_, idleInterval) };


    // maxCoreCount Field Functions 
    bool hasMaxCoreCount() const { return this->maxCoreCount_ != nullptr;};
    void deleteMaxCoreCount() { this->maxCoreCount_ = nullptr;};
    inline int32_t maxCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maxCoreCount_, 0) };
    inline UpdateClusterRequest& setMaxCoreCount(int32_t maxCoreCount) { DARABONBA_PTR_SET_VALUE(maxCoreCount_, maxCoreCount) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline int32_t maxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
    inline UpdateClusterRequest& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


    // monitorSpec Field Functions 
    bool hasMonitorSpec() const { return this->monitorSpec_ != nullptr;};
    void deleteMonitorSpec() { this->monitorSpec_ = nullptr;};
    inline const UpdateClusterRequestMonitorSpec & monitorSpec() const { DARABONBA_PTR_GET_CONST(monitorSpec_, UpdateClusterRequestMonitorSpec) };
    inline UpdateClusterRequestMonitorSpec monitorSpec() { DARABONBA_PTR_GET(monitorSpec_, UpdateClusterRequestMonitorSpec) };
    inline UpdateClusterRequest& setMonitorSpec(const UpdateClusterRequestMonitorSpec & monitorSpec) { DARABONBA_PTR_SET_VALUE(monitorSpec_, monitorSpec) };
    inline UpdateClusterRequest& setMonitorSpec(UpdateClusterRequestMonitorSpec && monitorSpec) { DARABONBA_PTR_SET_RVALUE(monitorSpec_, monitorSpec) };


    // schedulerSpec Field Functions 
    bool hasSchedulerSpec() const { return this->schedulerSpec_ != nullptr;};
    void deleteSchedulerSpec() { this->schedulerSpec_ = nullptr;};
    inline const UpdateClusterRequestSchedulerSpec & schedulerSpec() const { DARABONBA_PTR_GET_CONST(schedulerSpec_, UpdateClusterRequestSchedulerSpec) };
    inline UpdateClusterRequestSchedulerSpec schedulerSpec() { DARABONBA_PTR_GET(schedulerSpec_, UpdateClusterRequestSchedulerSpec) };
    inline UpdateClusterRequest& setSchedulerSpec(const UpdateClusterRequestSchedulerSpec & schedulerSpec) { DARABONBA_PTR_SET_VALUE(schedulerSpec_, schedulerSpec) };
    inline UpdateClusterRequest& setSchedulerSpec(UpdateClusterRequestSchedulerSpec && schedulerSpec) { DARABONBA_PTR_SET_RVALUE(schedulerSpec_, schedulerSpec) };


  protected:
    // Specifies whether to enable auto scale-out for the cluster. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> clientVersion_ = nullptr;
    // Specifies whether to enable auto scale-in for the cluster. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<UpdateClusterRequestClusterCustomConfiguration> clusterCustomConfiguration_ = nullptr;
    // The URL that is used to download the post-processing script.
    std::shared_ptr<string> clusterDescription_ = nullptr;
    // The client version. By default, the latest version is used.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The post-processing script of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The idle duration of the compute nodes allowed by the cluster.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The request result. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> enableScaleIn_ = nullptr;
    // The response parameters.
    std::shared_ptr<bool> enableScaleOut_ = nullptr;
    // The scheduler specifications of the cluster.
    std::shared_ptr<int32_t> growInterval_ = nullptr;
    // Specifies whether to enable the topology awareness feature. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<int32_t> idleInterval_ = nullptr;
    // The interval at which the cluster is automatically scaled out.
    std::shared_ptr<int32_t> maxCoreCount_ = nullptr;
    // The arguments that are used to run the post-processing script.
    std::shared_ptr<int32_t> maxCount_ = nullptr;
    // The monitoring details of the cluster.
    std::shared_ptr<UpdateClusterRequestMonitorSpec> monitorSpec_ = nullptr;
    // The scheduler specifications of the cluster.
    std::shared_ptr<UpdateClusterRequestSchedulerSpec> schedulerSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
