// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
#include <alibabacloud/models/QuotaConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class UpdateQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableGracefulUpgrade, enableGracefulUpgrade_);
      DARABONBA_PTR_TO_JSON(GracefulUpgradeConfig, gracefulUpgradeConfig_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(PropagateDefaultGPUDriver, propagateDefaultGPUDriver_);
      DARABONBA_PTR_TO_JSON(QueueStrategy, queueStrategy_);
      DARABONBA_PTR_TO_JSON(QuotaConfig, quotaConfig_);
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableGracefulUpgrade, enableGracefulUpgrade_);
      DARABONBA_PTR_FROM_JSON(GracefulUpgradeConfig, gracefulUpgradeConfig_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(PropagateDefaultGPUDriver, propagateDefaultGPUDriver_);
      DARABONBA_PTR_FROM_JSON(QueueStrategy, queueStrategy_);
      DARABONBA_PTR_FROM_JSON(QuotaConfig, quotaConfig_);
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
    };
    UpdateQuotaRequest() = default ;
    UpdateQuotaRequest(const UpdateQuotaRequest &) = default ;
    UpdateQuotaRequest(UpdateQuotaRequest &&) = default ;
    UpdateQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateQuotaRequest() = default ;
    UpdateQuotaRequest& operator=(const UpdateQuotaRequest &) = default ;
    UpdateQuotaRequest& operator=(UpdateQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GracefulUpgradeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GracefulUpgradeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DrainTimeoutSeconds, drainTimeoutSeconds_);
        DARABONBA_PTR_TO_JSON(MaxUnavailable, maxUnavailable_);
        DARABONBA_PTR_TO_JSON(TaskDrainReserveWorkers, taskDrainReserveWorkers_);
      };
      friend void from_json(const Darabonba::Json& j, GracefulUpgradeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DrainTimeoutSeconds, drainTimeoutSeconds_);
        DARABONBA_PTR_FROM_JSON(MaxUnavailable, maxUnavailable_);
        DARABONBA_PTR_FROM_JSON(TaskDrainReserveWorkers, taskDrainReserveWorkers_);
      };
      GracefulUpgradeConfig() = default ;
      GracefulUpgradeConfig(const GracefulUpgradeConfig &) = default ;
      GracefulUpgradeConfig(GracefulUpgradeConfig &&) = default ;
      GracefulUpgradeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GracefulUpgradeConfig() = default ;
      GracefulUpgradeConfig& operator=(const GracefulUpgradeConfig &) = default ;
      GracefulUpgradeConfig& operator=(GracefulUpgradeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->drainTimeoutSeconds_ == nullptr
        && this->maxUnavailable_ == nullptr && this->taskDrainReserveWorkers_ == nullptr; };
      // drainTimeoutSeconds Field Functions 
      bool hasDrainTimeoutSeconds() const { return this->drainTimeoutSeconds_ != nullptr;};
      void deleteDrainTimeoutSeconds() { this->drainTimeoutSeconds_ = nullptr;};
      inline int64_t getDrainTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(drainTimeoutSeconds_, 0L) };
      inline GracefulUpgradeConfig& setDrainTimeoutSeconds(int64_t drainTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(drainTimeoutSeconds_, drainTimeoutSeconds) };


      // maxUnavailable Field Functions 
      bool hasMaxUnavailable() const { return this->maxUnavailable_ != nullptr;};
      void deleteMaxUnavailable() { this->maxUnavailable_ = nullptr;};
      inline string getMaxUnavailable() const { DARABONBA_PTR_GET_DEFAULT(maxUnavailable_, "") };
      inline GracefulUpgradeConfig& setMaxUnavailable(string maxUnavailable) { DARABONBA_PTR_SET_VALUE(maxUnavailable_, maxUnavailable) };


      // taskDrainReserveWorkers Field Functions 
      bool hasTaskDrainReserveWorkers() const { return this->taskDrainReserveWorkers_ != nullptr;};
      void deleteTaskDrainReserveWorkers() { this->taskDrainReserveWorkers_ = nullptr;};
      inline int64_t getTaskDrainReserveWorkers() const { DARABONBA_PTR_GET_DEFAULT(taskDrainReserveWorkers_, 0L) };
      inline GracefulUpgradeConfig& setTaskDrainReserveWorkers(int64_t taskDrainReserveWorkers) { DARABONBA_PTR_SET_VALUE(taskDrainReserveWorkers_, taskDrainReserveWorkers) };


    protected:
      // The timeout limit for Ray draining of a single node. After the timeout, the node is still directly scaled down, which does not cause the upgrade to fail.
      shared_ptr<int64_t> drainTimeoutSeconds_ {};
      // The migration window width, which is the maximum number of workers in the old cluster that are simultaneously in an unavailable state (draining or drained and pending removal), that is, the number of nodes migrated in parallel.
      shared_ptr<string> maxUnavailable_ {};
      // The number of workers in the old cluster that are kept in a schedulable state while waiting for the remaining Ray tasks in the old cluster to complete.
      shared_ptr<int64_t> taskDrainReserveWorkers_ {};
    };

    class ClusterSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterSpec& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
        DARABONBA_PTR_TO_JSON(Image, image_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
      };
      ClusterSpec() = default ;
      ClusterSpec(const ClusterSpec &) = default ;
      ClusterSpec(ClusterSpec &&) = default ;
      ClusterSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterSpec() = default ;
      ClusterSpec& operator=(const ClusterSpec &) = default ;
      ClusterSpec& operator=(ClusterSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterType_ == nullptr
        && this->dataSources_ == nullptr && this->image_ == nullptr; };
      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline ClusterSpec& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // dataSources Field Functions 
      bool hasDataSources() const { return this->dataSources_ != nullptr;};
      void deleteDataSources() { this->dataSources_ = nullptr;};
      inline const vector<string> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<string>) };
      inline vector<string> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<string>) };
      inline ClusterSpec& setDataSources(const vector<string> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
      inline ClusterSpec& setDataSources(vector<string> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline ClusterSpec& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    protected:
      // The cluster type. Currently, only RayCluster is supported.
      shared_ptr<string> clusterType_ {};
      // The list of data sources mounted to the cluster. This parameter uses the overall replacement semantics: if it is not passed, the current state is maintained; if an empty array is passed, the list is cleared. Each element is a JSON object string that contains DataSourceId or Uri (one of them is required and they are mutually exclusive) and an optional MountPath.
      shared_ptr<vector<string>> dataSources_ {};
      // The container image used by the Ray cluster. If this parameter is explicitly passed, the system switches to this image. If it is left empty and the data sources remain unchanged, and GetQuota returns UpgradeAvailable=true, this update is considered an upgrade to the platform default image. To keep the current image, explicitly pass the current value.
      shared_ptr<string> image_ {};
    };

    virtual bool empty() const override { return this->clusterSpec_ == nullptr
        && this->description_ == nullptr && this->enableGracefulUpgrade_ == nullptr && this->gracefulUpgradeConfig_ == nullptr && this->labels_ == nullptr && this->propagateDefaultGPUDriver_ == nullptr
        && this->queueStrategy_ == nullptr && this->quotaConfig_ == nullptr && this->quotaName_ == nullptr; };
    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline const UpdateQuotaRequest::ClusterSpec & getClusterSpec() const { DARABONBA_PTR_GET_CONST(clusterSpec_, UpdateQuotaRequest::ClusterSpec) };
    inline UpdateQuotaRequest::ClusterSpec getClusterSpec() { DARABONBA_PTR_GET(clusterSpec_, UpdateQuotaRequest::ClusterSpec) };
    inline UpdateQuotaRequest& setClusterSpec(const UpdateQuotaRequest::ClusterSpec & clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };
    inline UpdateQuotaRequest& setClusterSpec(UpdateQuotaRequest::ClusterSpec && clusterSpec) { DARABONBA_PTR_SET_RVALUE(clusterSpec_, clusterSpec) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateQuotaRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableGracefulUpgrade Field Functions 
    bool hasEnableGracefulUpgrade() const { return this->enableGracefulUpgrade_ != nullptr;};
    void deleteEnableGracefulUpgrade() { this->enableGracefulUpgrade_ = nullptr;};
    inline bool getEnableGracefulUpgrade() const { DARABONBA_PTR_GET_DEFAULT(enableGracefulUpgrade_, false) };
    inline UpdateQuotaRequest& setEnableGracefulUpgrade(bool enableGracefulUpgrade) { DARABONBA_PTR_SET_VALUE(enableGracefulUpgrade_, enableGracefulUpgrade) };


    // gracefulUpgradeConfig Field Functions 
    bool hasGracefulUpgradeConfig() const { return this->gracefulUpgradeConfig_ != nullptr;};
    void deleteGracefulUpgradeConfig() { this->gracefulUpgradeConfig_ = nullptr;};
    inline const UpdateQuotaRequest::GracefulUpgradeConfig & getGracefulUpgradeConfig() const { DARABONBA_PTR_GET_CONST(gracefulUpgradeConfig_, UpdateQuotaRequest::GracefulUpgradeConfig) };
    inline UpdateQuotaRequest::GracefulUpgradeConfig getGracefulUpgradeConfig() { DARABONBA_PTR_GET(gracefulUpgradeConfig_, UpdateQuotaRequest::GracefulUpgradeConfig) };
    inline UpdateQuotaRequest& setGracefulUpgradeConfig(const UpdateQuotaRequest::GracefulUpgradeConfig & gracefulUpgradeConfig) { DARABONBA_PTR_SET_VALUE(gracefulUpgradeConfig_, gracefulUpgradeConfig) };
    inline UpdateQuotaRequest& setGracefulUpgradeConfig(UpdateQuotaRequest::GracefulUpgradeConfig && gracefulUpgradeConfig) { DARABONBA_PTR_SET_RVALUE(gracefulUpgradeConfig_, gracefulUpgradeConfig) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> getLabels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline UpdateQuotaRequest& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline UpdateQuotaRequest& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // propagateDefaultGPUDriver Field Functions 
    bool hasPropagateDefaultGPUDriver() const { return this->propagateDefaultGPUDriver_ != nullptr;};
    void deletePropagateDefaultGPUDriver() { this->propagateDefaultGPUDriver_ = nullptr;};
    inline bool getPropagateDefaultGPUDriver() const { DARABONBA_PTR_GET_DEFAULT(propagateDefaultGPUDriver_, false) };
    inline UpdateQuotaRequest& setPropagateDefaultGPUDriver(bool propagateDefaultGPUDriver) { DARABONBA_PTR_SET_VALUE(propagateDefaultGPUDriver_, propagateDefaultGPUDriver) };


    // queueStrategy Field Functions 
    bool hasQueueStrategy() const { return this->queueStrategy_ != nullptr;};
    void deleteQueueStrategy() { this->queueStrategy_ = nullptr;};
    inline string getQueueStrategy() const { DARABONBA_PTR_GET_DEFAULT(queueStrategy_, "") };
    inline UpdateQuotaRequest& setQueueStrategy(string queueStrategy) { DARABONBA_PTR_SET_VALUE(queueStrategy_, queueStrategy) };


    // quotaConfig Field Functions 
    bool hasQuotaConfig() const { return this->quotaConfig_ != nullptr;};
    void deleteQuotaConfig() { this->quotaConfig_ = nullptr;};
    inline const QuotaConfig & getQuotaConfig() const { DARABONBA_PTR_GET_CONST(quotaConfig_, QuotaConfig) };
    inline QuotaConfig getQuotaConfig() { DARABONBA_PTR_GET(quotaConfig_, QuotaConfig) };
    inline UpdateQuotaRequest& setQuotaConfig(const QuotaConfig & quotaConfig) { DARABONBA_PTR_SET_VALUE(quotaConfig_, quotaConfig) };
    inline UpdateQuotaRequest& setQuotaConfig(QuotaConfig && quotaConfig) { DARABONBA_PTR_SET_RVALUE(quotaConfig_, quotaConfig) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline UpdateQuotaRequest& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


  protected:
    // The configurations of the compute cluster bound to the quota (RNQ Ray cluster). This parameter is only available for RNQ quotas and will be rejected for common quotas. It can only be modified when no operations are in progress on the quota. Unpassed sub-fields retain the current effective configurations.
    shared_ptr<UpdateQuotaRequest::ClusterSpec> clusterSpec_ {};
    // The description of the resource quota.
    shared_ptr<string> description_ {};
    // Specifies whether to execute the current ClusterSpec change as a rolling upgrade (draining and migrating nodes one by one to the new cluster) instead of the default stop-and-rebuild method.
    shared_ptr<bool> enableGracefulUpgrade_ {};
    // The tuning parameters for the migration process. This parameter is only allowed when EnableGracefulUpgrade is set to true.
    shared_ptr<UpdateQuotaRequest::GracefulUpgradeConfig> gracefulUpgradeConfig_ {};
    // The list of user-defined labels.
    // This is a full update.
    shared_ptr<vector<Label>> labels_ {};
    // Specifies whether to pass the default GPU driver configuration to child quotas.
    shared_ptr<bool> propagateDefaultGPUDriver_ {};
    // The queuing strategy for tasks on the quota.
    shared_ptr<string> queueStrategy_ {};
    // The resource quota configuration.
    shared_ptr<QuotaConfig> quotaConfig_ {};
    // The name of the resource quota.
    shared_ptr<string> quotaName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
