// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class SchedulerSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SchedulerSpec& obj) { 
        DARABONBA_PTR_TO_JSON(EnableTopologyAwareness, enableTopologyAwareness_);
      };
      friend void from_json(const Darabonba::Json& j, SchedulerSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableTopologyAwareness, enableTopologyAwareness_);
      };
      SchedulerSpec() = default ;
      SchedulerSpec(const SchedulerSpec &) = default ;
      SchedulerSpec(SchedulerSpec &&) = default ;
      SchedulerSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SchedulerSpec() = default ;
      SchedulerSpec& operator=(const SchedulerSpec &) = default ;
      SchedulerSpec& operator=(SchedulerSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableTopologyAwareness_ == nullptr; };
      // enableTopologyAwareness Field Functions 
      bool hasEnableTopologyAwareness() const { return this->enableTopologyAwareness_ != nullptr;};
      void deleteEnableTopologyAwareness() { this->enableTopologyAwareness_ = nullptr;};
      inline bool getEnableTopologyAwareness() const { DARABONBA_PTR_GET_DEFAULT(enableTopologyAwareness_, false) };
      inline SchedulerSpec& setEnableTopologyAwareness(bool enableTopologyAwareness) { DARABONBA_PTR_SET_VALUE(enableTopologyAwareness_, enableTopologyAwareness) };


    protected:
      // Specifies whether to enable the topology awareness feature. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> enableTopologyAwareness_ {};
    };

    class MonitorSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitorSpec& obj) { 
        DARABONBA_PTR_TO_JSON(EnableComputeLoadMonitor, enableComputeLoadMonitor_);
      };
      friend void from_json(const Darabonba::Json& j, MonitorSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableComputeLoadMonitor, enableComputeLoadMonitor_);
      };
      MonitorSpec() = default ;
      MonitorSpec(const MonitorSpec &) = default ;
      MonitorSpec(MonitorSpec &&) = default ;
      MonitorSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonitorSpec() = default ;
      MonitorSpec& operator=(const MonitorSpec &) = default ;
      MonitorSpec& operator=(MonitorSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableComputeLoadMonitor_ == nullptr; };
      // enableComputeLoadMonitor Field Functions 
      bool hasEnableComputeLoadMonitor() const { return this->enableComputeLoadMonitor_ != nullptr;};
      void deleteEnableComputeLoadMonitor() { this->enableComputeLoadMonitor_ = nullptr;};
      inline bool getEnableComputeLoadMonitor() const { DARABONBA_PTR_GET_DEFAULT(enableComputeLoadMonitor_, false) };
      inline MonitorSpec& setEnableComputeLoadMonitor(bool enableComputeLoadMonitor) { DARABONBA_PTR_SET_VALUE(enableComputeLoadMonitor_, enableComputeLoadMonitor) };


    protected:
      // Specifies whether to enable the monitoring component of compute nodes. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> enableComputeLoadMonitor_ {};
    };

    class ClusterCustomConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterCustomConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(Args, args_);
        DARABONBA_PTR_TO_JSON(Script, script_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterCustomConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(Args, args_);
        DARABONBA_PTR_FROM_JSON(Script, script_);
      };
      ClusterCustomConfiguration() = default ;
      ClusterCustomConfiguration(const ClusterCustomConfiguration &) = default ;
      ClusterCustomConfiguration(ClusterCustomConfiguration &&) = default ;
      ClusterCustomConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterCustomConfiguration() = default ;
      ClusterCustomConfiguration& operator=(const ClusterCustomConfiguration &) = default ;
      ClusterCustomConfiguration& operator=(ClusterCustomConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->args_ == nullptr
        && this->script_ == nullptr; };
      // args Field Functions 
      bool hasArgs() const { return this->args_ != nullptr;};
      void deleteArgs() { this->args_ = nullptr;};
      inline string getArgs() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
      inline ClusterCustomConfiguration& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


      // script Field Functions 
      bool hasScript() const { return this->script_ != nullptr;};
      void deleteScript() { this->script_ = nullptr;};
      inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
      inline ClusterCustomConfiguration& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    protected:
      // Specifies whether to enable the monitoring component of compute nodes. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<string> args_ {};
      // The monitoring details of the cluster.
      shared_ptr<string> script_ {};
    };

    virtual bool empty() const override { return this->clientVersion_ == nullptr
        && this->clusterCustomConfiguration_ == nullptr && this->clusterDescription_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->deletionProtection_ == nullptr
        && this->enableScaleIn_ == nullptr && this->enableScaleOut_ == nullptr && this->growInterval_ == nullptr && this->idleInterval_ == nullptr && this->maxCoreCount_ == nullptr
        && this->maxCount_ == nullptr && this->monitorSpec_ == nullptr && this->schedulerSpec_ == nullptr; };
    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline UpdateClusterRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // clusterCustomConfiguration Field Functions 
    bool hasClusterCustomConfiguration() const { return this->clusterCustomConfiguration_ != nullptr;};
    void deleteClusterCustomConfiguration() { this->clusterCustomConfiguration_ = nullptr;};
    inline const UpdateClusterRequest::ClusterCustomConfiguration & getClusterCustomConfiguration() const { DARABONBA_PTR_GET_CONST(clusterCustomConfiguration_, UpdateClusterRequest::ClusterCustomConfiguration) };
    inline UpdateClusterRequest::ClusterCustomConfiguration getClusterCustomConfiguration() { DARABONBA_PTR_GET(clusterCustomConfiguration_, UpdateClusterRequest::ClusterCustomConfiguration) };
    inline UpdateClusterRequest& setClusterCustomConfiguration(const UpdateClusterRequest::ClusterCustomConfiguration & clusterCustomConfiguration) { DARABONBA_PTR_SET_VALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };
    inline UpdateClusterRequest& setClusterCustomConfiguration(UpdateClusterRequest::ClusterCustomConfiguration && clusterCustomConfiguration) { DARABONBA_PTR_SET_RVALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };


    // clusterDescription Field Functions 
    bool hasClusterDescription() const { return this->clusterDescription_ != nullptr;};
    void deleteClusterDescription() { this->clusterDescription_ = nullptr;};
    inline string getClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(clusterDescription_, "") };
    inline UpdateClusterRequest& setClusterDescription(string clusterDescription) { DARABONBA_PTR_SET_VALUE(clusterDescription_, clusterDescription) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline UpdateClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline UpdateClusterRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // enableScaleIn Field Functions 
    bool hasEnableScaleIn() const { return this->enableScaleIn_ != nullptr;};
    void deleteEnableScaleIn() { this->enableScaleIn_ = nullptr;};
    inline bool getEnableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(enableScaleIn_, false) };
    inline UpdateClusterRequest& setEnableScaleIn(bool enableScaleIn) { DARABONBA_PTR_SET_VALUE(enableScaleIn_, enableScaleIn) };


    // enableScaleOut Field Functions 
    bool hasEnableScaleOut() const { return this->enableScaleOut_ != nullptr;};
    void deleteEnableScaleOut() { this->enableScaleOut_ = nullptr;};
    inline bool getEnableScaleOut() const { DARABONBA_PTR_GET_DEFAULT(enableScaleOut_, false) };
    inline UpdateClusterRequest& setEnableScaleOut(bool enableScaleOut) { DARABONBA_PTR_SET_VALUE(enableScaleOut_, enableScaleOut) };


    // growInterval Field Functions 
    bool hasGrowInterval() const { return this->growInterval_ != nullptr;};
    void deleteGrowInterval() { this->growInterval_ = nullptr;};
    inline int32_t getGrowInterval() const { DARABONBA_PTR_GET_DEFAULT(growInterval_, 0) };
    inline UpdateClusterRequest& setGrowInterval(int32_t growInterval) { DARABONBA_PTR_SET_VALUE(growInterval_, growInterval) };


    // idleInterval Field Functions 
    bool hasIdleInterval() const { return this->idleInterval_ != nullptr;};
    void deleteIdleInterval() { this->idleInterval_ = nullptr;};
    inline int32_t getIdleInterval() const { DARABONBA_PTR_GET_DEFAULT(idleInterval_, 0) };
    inline UpdateClusterRequest& setIdleInterval(int32_t idleInterval) { DARABONBA_PTR_SET_VALUE(idleInterval_, idleInterval) };


    // maxCoreCount Field Functions 
    bool hasMaxCoreCount() const { return this->maxCoreCount_ != nullptr;};
    void deleteMaxCoreCount() { this->maxCoreCount_ = nullptr;};
    inline int32_t getMaxCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maxCoreCount_, 0) };
    inline UpdateClusterRequest& setMaxCoreCount(int32_t maxCoreCount) { DARABONBA_PTR_SET_VALUE(maxCoreCount_, maxCoreCount) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline int32_t getMaxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
    inline UpdateClusterRequest& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


    // monitorSpec Field Functions 
    bool hasMonitorSpec() const { return this->monitorSpec_ != nullptr;};
    void deleteMonitorSpec() { this->monitorSpec_ = nullptr;};
    inline const UpdateClusterRequest::MonitorSpec & getMonitorSpec() const { DARABONBA_PTR_GET_CONST(monitorSpec_, UpdateClusterRequest::MonitorSpec) };
    inline UpdateClusterRequest::MonitorSpec getMonitorSpec() { DARABONBA_PTR_GET(monitorSpec_, UpdateClusterRequest::MonitorSpec) };
    inline UpdateClusterRequest& setMonitorSpec(const UpdateClusterRequest::MonitorSpec & monitorSpec) { DARABONBA_PTR_SET_VALUE(monitorSpec_, monitorSpec) };
    inline UpdateClusterRequest& setMonitorSpec(UpdateClusterRequest::MonitorSpec && monitorSpec) { DARABONBA_PTR_SET_RVALUE(monitorSpec_, monitorSpec) };


    // schedulerSpec Field Functions 
    bool hasSchedulerSpec() const { return this->schedulerSpec_ != nullptr;};
    void deleteSchedulerSpec() { this->schedulerSpec_ = nullptr;};
    inline const UpdateClusterRequest::SchedulerSpec & getSchedulerSpec() const { DARABONBA_PTR_GET_CONST(schedulerSpec_, UpdateClusterRequest::SchedulerSpec) };
    inline UpdateClusterRequest::SchedulerSpec getSchedulerSpec() { DARABONBA_PTR_GET(schedulerSpec_, UpdateClusterRequest::SchedulerSpec) };
    inline UpdateClusterRequest& setSchedulerSpec(const UpdateClusterRequest::SchedulerSpec & schedulerSpec) { DARABONBA_PTR_SET_VALUE(schedulerSpec_, schedulerSpec) };
    inline UpdateClusterRequest& setSchedulerSpec(UpdateClusterRequest::SchedulerSpec && schedulerSpec) { DARABONBA_PTR_SET_RVALUE(schedulerSpec_, schedulerSpec) };


  protected:
    // Specifies whether to enable auto scale-out for the cluster. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> clientVersion_ {};
    // Specifies whether to enable auto scale-in for the cluster. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<UpdateClusterRequest::ClusterCustomConfiguration> clusterCustomConfiguration_ {};
    // The URL that is used to download the post-processing script.
    shared_ptr<string> clusterDescription_ {};
    // The client version. By default, the latest version is used.
    shared_ptr<string> clusterId_ {};
    // The post-processing script of the cluster.
    shared_ptr<string> clusterName_ {};
    // The idle duration of the compute nodes allowed by the cluster.
    shared_ptr<bool> deletionProtection_ {};
    // The request result. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> enableScaleIn_ {};
    // The response parameters.
    shared_ptr<bool> enableScaleOut_ {};
    // The scheduler specifications of the cluster.
    shared_ptr<int32_t> growInterval_ {};
    // Specifies whether to enable the topology awareness feature. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<int32_t> idleInterval_ {};
    // The interval at which the cluster is automatically scaled out.
    shared_ptr<int32_t> maxCoreCount_ {};
    // The arguments that are used to run the post-processing script.
    shared_ptr<int32_t> maxCount_ {};
    // The monitoring details of the cluster.
    shared_ptr<UpdateClusterRequest::MonitorSpec> monitorSpec_ {};
    // The scheduler specifications of the cluster.
    shared_ptr<UpdateClusterRequest::SchedulerSpec> schedulerSpec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
