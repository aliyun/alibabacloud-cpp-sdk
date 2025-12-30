// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class UpdateClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(ClusterCustomConfiguration, clusterCustomConfigurationShrink_);
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
      DARABONBA_PTR_TO_JSON(MonitorSpec, monitorSpecShrink_);
      DARABONBA_PTR_TO_JSON(SchedulerSpec, schedulerSpecShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(ClusterCustomConfiguration, clusterCustomConfigurationShrink_);
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
      DARABONBA_PTR_FROM_JSON(MonitorSpec, monitorSpecShrink_);
      DARABONBA_PTR_FROM_JSON(SchedulerSpec, schedulerSpecShrink_);
    };
    UpdateClusterShrinkRequest() = default ;
    UpdateClusterShrinkRequest(const UpdateClusterShrinkRequest &) = default ;
    UpdateClusterShrinkRequest(UpdateClusterShrinkRequest &&) = default ;
    UpdateClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClusterShrinkRequest() = default ;
    UpdateClusterShrinkRequest& operator=(const UpdateClusterShrinkRequest &) = default ;
    UpdateClusterShrinkRequest& operator=(UpdateClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientVersion_ == nullptr
        && this->clusterCustomConfigurationShrink_ == nullptr && this->clusterDescription_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->deletionProtection_ == nullptr
        && this->enableScaleIn_ == nullptr && this->enableScaleOut_ == nullptr && this->growInterval_ == nullptr && this->idleInterval_ == nullptr && this->maxCoreCount_ == nullptr
        && this->maxCount_ == nullptr && this->monitorSpecShrink_ == nullptr && this->schedulerSpecShrink_ == nullptr; };
    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline UpdateClusterShrinkRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // clusterCustomConfigurationShrink Field Functions 
    bool hasClusterCustomConfigurationShrink() const { return this->clusterCustomConfigurationShrink_ != nullptr;};
    void deleteClusterCustomConfigurationShrink() { this->clusterCustomConfigurationShrink_ = nullptr;};
    inline string getClusterCustomConfigurationShrink() const { DARABONBA_PTR_GET_DEFAULT(clusterCustomConfigurationShrink_, "") };
    inline UpdateClusterShrinkRequest& setClusterCustomConfigurationShrink(string clusterCustomConfigurationShrink) { DARABONBA_PTR_SET_VALUE(clusterCustomConfigurationShrink_, clusterCustomConfigurationShrink) };


    // clusterDescription Field Functions 
    bool hasClusterDescription() const { return this->clusterDescription_ != nullptr;};
    void deleteClusterDescription() { this->clusterDescription_ = nullptr;};
    inline string getClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(clusterDescription_, "") };
    inline UpdateClusterShrinkRequest& setClusterDescription(string clusterDescription) { DARABONBA_PTR_SET_VALUE(clusterDescription_, clusterDescription) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateClusterShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline UpdateClusterShrinkRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline UpdateClusterShrinkRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // enableScaleIn Field Functions 
    bool hasEnableScaleIn() const { return this->enableScaleIn_ != nullptr;};
    void deleteEnableScaleIn() { this->enableScaleIn_ = nullptr;};
    inline bool getEnableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(enableScaleIn_, false) };
    inline UpdateClusterShrinkRequest& setEnableScaleIn(bool enableScaleIn) { DARABONBA_PTR_SET_VALUE(enableScaleIn_, enableScaleIn) };


    // enableScaleOut Field Functions 
    bool hasEnableScaleOut() const { return this->enableScaleOut_ != nullptr;};
    void deleteEnableScaleOut() { this->enableScaleOut_ = nullptr;};
    inline bool getEnableScaleOut() const { DARABONBA_PTR_GET_DEFAULT(enableScaleOut_, false) };
    inline UpdateClusterShrinkRequest& setEnableScaleOut(bool enableScaleOut) { DARABONBA_PTR_SET_VALUE(enableScaleOut_, enableScaleOut) };


    // growInterval Field Functions 
    bool hasGrowInterval() const { return this->growInterval_ != nullptr;};
    void deleteGrowInterval() { this->growInterval_ = nullptr;};
    inline int32_t getGrowInterval() const { DARABONBA_PTR_GET_DEFAULT(growInterval_, 0) };
    inline UpdateClusterShrinkRequest& setGrowInterval(int32_t growInterval) { DARABONBA_PTR_SET_VALUE(growInterval_, growInterval) };


    // idleInterval Field Functions 
    bool hasIdleInterval() const { return this->idleInterval_ != nullptr;};
    void deleteIdleInterval() { this->idleInterval_ = nullptr;};
    inline int32_t getIdleInterval() const { DARABONBA_PTR_GET_DEFAULT(idleInterval_, 0) };
    inline UpdateClusterShrinkRequest& setIdleInterval(int32_t idleInterval) { DARABONBA_PTR_SET_VALUE(idleInterval_, idleInterval) };


    // maxCoreCount Field Functions 
    bool hasMaxCoreCount() const { return this->maxCoreCount_ != nullptr;};
    void deleteMaxCoreCount() { this->maxCoreCount_ = nullptr;};
    inline int32_t getMaxCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maxCoreCount_, 0) };
    inline UpdateClusterShrinkRequest& setMaxCoreCount(int32_t maxCoreCount) { DARABONBA_PTR_SET_VALUE(maxCoreCount_, maxCoreCount) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline int32_t getMaxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
    inline UpdateClusterShrinkRequest& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


    // monitorSpecShrink Field Functions 
    bool hasMonitorSpecShrink() const { return this->monitorSpecShrink_ != nullptr;};
    void deleteMonitorSpecShrink() { this->monitorSpecShrink_ = nullptr;};
    inline string getMonitorSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(monitorSpecShrink_, "") };
    inline UpdateClusterShrinkRequest& setMonitorSpecShrink(string monitorSpecShrink) { DARABONBA_PTR_SET_VALUE(monitorSpecShrink_, monitorSpecShrink) };


    // schedulerSpecShrink Field Functions 
    bool hasSchedulerSpecShrink() const { return this->schedulerSpecShrink_ != nullptr;};
    void deleteSchedulerSpecShrink() { this->schedulerSpecShrink_ = nullptr;};
    inline string getSchedulerSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(schedulerSpecShrink_, "") };
    inline UpdateClusterShrinkRequest& setSchedulerSpecShrink(string schedulerSpecShrink) { DARABONBA_PTR_SET_VALUE(schedulerSpecShrink_, schedulerSpecShrink) };


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
    shared_ptr<string> clusterCustomConfigurationShrink_ {};
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
    shared_ptr<string> monitorSpecShrink_ {};
    // The scheduler specifications of the cluster.
    shared_ptr<string> schedulerSpecShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
