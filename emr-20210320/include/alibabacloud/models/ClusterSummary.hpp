// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLUSTERSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_CLUSTERSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ClusterStateChangeReason.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ClusterSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClusterSummary& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterState, clusterState_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EmrDefaultRole, emrDefaultRole_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(ReadyTime, readyTime_);
      DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StateChangeReason, stateChangeReason_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ClusterSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterState, clusterState_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EmrDefaultRole, emrDefaultRole_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(ReadyTime, readyTime_);
      DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StateChangeReason, stateChangeReason_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ClusterSummary() = default ;
    ClusterSummary(const ClusterSummary &) = default ;
    ClusterSummary(ClusterSummary &&) = default ;
    ClusterSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClusterSummary() = default ;
    ClusterSummary& operator=(const ClusterSummary &) = default ;
    ClusterSummary& operator=(ClusterSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->clusterState_ == nullptr && this->clusterType_ == nullptr && this->createTime_ == nullptr && this->deletionProtection_ == nullptr
        && this->description_ == nullptr && this->emrDefaultRole_ == nullptr && this->endTime_ == nullptr && this->expireTime_ == nullptr && this->paymentType_ == nullptr
        && this->readyTime_ == nullptr && this->releaseVersion_ == nullptr && this->resourceGroupId_ == nullptr && this->stateChangeReason_ == nullptr && this->tags_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ClusterSummary& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ClusterSummary& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterState Field Functions 
    bool hasClusterState() const { return this->clusterState_ != nullptr;};
    void deleteClusterState() { this->clusterState_ = nullptr;};
    inline string getClusterState() const { DARABONBA_PTR_GET_DEFAULT(clusterState_, "") };
    inline ClusterSummary& setClusterState(string clusterState) { DARABONBA_PTR_SET_VALUE(clusterState_, clusterState) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ClusterSummary& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ClusterSummary& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ClusterSummary& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ClusterSummary& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // emrDefaultRole Field Functions 
    bool hasEmrDefaultRole() const { return this->emrDefaultRole_ != nullptr;};
    void deleteEmrDefaultRole() { this->emrDefaultRole_ = nullptr;};
    inline string getEmrDefaultRole() const { DARABONBA_PTR_GET_DEFAULT(emrDefaultRole_, "") };
    inline ClusterSummary& setEmrDefaultRole(string emrDefaultRole) { DARABONBA_PTR_SET_VALUE(emrDefaultRole_, emrDefaultRole) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ClusterSummary& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline ClusterSummary& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ClusterSummary& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // readyTime Field Functions 
    bool hasReadyTime() const { return this->readyTime_ != nullptr;};
    void deleteReadyTime() { this->readyTime_ = nullptr;};
    inline int64_t getReadyTime() const { DARABONBA_PTR_GET_DEFAULT(readyTime_, 0L) };
    inline ClusterSummary& setReadyTime(int64_t readyTime) { DARABONBA_PTR_SET_VALUE(readyTime_, readyTime) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline ClusterSummary& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ClusterSummary& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // stateChangeReason Field Functions 
    bool hasStateChangeReason() const { return this->stateChangeReason_ != nullptr;};
    void deleteStateChangeReason() { this->stateChangeReason_ = nullptr;};
    inline const ClusterStateChangeReason & getStateChangeReason() const { DARABONBA_PTR_GET_CONST(stateChangeReason_, ClusterStateChangeReason) };
    inline ClusterStateChangeReason getStateChangeReason() { DARABONBA_PTR_GET(stateChangeReason_, ClusterStateChangeReason) };
    inline ClusterSummary& setStateChangeReason(const ClusterStateChangeReason & stateChangeReason) { DARABONBA_PTR_SET_VALUE(stateChangeReason_, stateChangeReason) };
    inline ClusterSummary& setStateChangeReason(ClusterStateChangeReason && stateChangeReason) { DARABONBA_PTR_SET_RVALUE(stateChangeReason_, stateChangeReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline ClusterSummary& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ClusterSummary& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The cluster name.
    shared_ptr<string> clusterName_ {};
    // The state of the cluster. Valid values:
    // 
    // - `STARTING`: The cluster is starting.
    // 
    // - `START_FAILED`: The cluster fails to be started.
    // 
    // - `BOOTSTRAPPING`: The cluster is being initialized.
    // 
    // - `RUNNING`: The cluster is running.
    // 
    // - `TERMINATING`: The cluster is being terminated.
    // 
    // - `TERMINATED`: The cluster is terminated.
    // 
    // - `TERMINATED_WITH_ERRORS`: The cluster is terminated with errors.
    // 
    // - `TERMINATE_FAILED`: The cluster fails to be terminated.
    shared_ptr<string> clusterState_ {};
    // The cluster type. Valid values:
    // 
    // - `DATALAKE`: data lake.
    // 
    // - `OLAP`: data analytics.
    // 
    // - `DATAFLOW`: real-time dataflow.
    // 
    // - `DATASERVING`: data serving.
    shared_ptr<string> clusterType_ {};
    // The time when the cluster was created.
    shared_ptr<int64_t> createTime_ {};
    // The release protection feature.
    shared_ptr<bool> deletionProtection_ {};
    // The description of the cluster.
    shared_ptr<string> description_ {};
    // The EMR service role.
    shared_ptr<string> emrDefaultRole_ {};
    // The time when the cluster was deleted.
    shared_ptr<int64_t> endTime_ {};
    // The expiration time.
    shared_ptr<int64_t> expireTime_ {};
    // The billing method. Valid values:
    // 
    // - `PayAsYouGo`: pay-as-you-go.
    // 
    // - `Subscription`: subscription.
    shared_ptr<string> paymentType_ {};
    // The time when the cluster is available.
    shared_ptr<int64_t> readyTime_ {};
    // The E-MapReduce (EMR) release version.
    shared_ptr<string> releaseVersion_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The reason for the failure.
    shared_ptr<ClusterStateChangeReason> stateChangeReason_ {};
    // The list of tags.
    shared_ptr<vector<Tag>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
