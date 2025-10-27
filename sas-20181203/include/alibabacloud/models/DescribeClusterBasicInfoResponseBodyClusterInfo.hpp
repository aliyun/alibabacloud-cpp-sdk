// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERBASICINFORESPONSEBODYCLUSTERINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERBASICINFORESPONSEBODYCLUSTERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterBasicInfoResponseBodyClusterInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterBasicInfoResponseBodyClusterInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TargetResult, targetResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterBasicInfoResponseBodyClusterInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TargetResult, targetResult_);
    };
    DescribeClusterBasicInfoResponseBodyClusterInfo() = default ;
    DescribeClusterBasicInfoResponseBodyClusterInfo(const DescribeClusterBasicInfoResponseBodyClusterInfo &) = default ;
    DescribeClusterBasicInfoResponseBodyClusterInfo(DescribeClusterBasicInfoResponseBodyClusterInfo &&) = default ;
    DescribeClusterBasicInfoResponseBodyClusterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterBasicInfoResponseBodyClusterInfo() = default ;
    DescribeClusterBasicInfoResponseBodyClusterInfo& operator=(const DescribeClusterBasicInfoResponseBodyClusterInfo &) = default ;
    DescribeClusterBasicInfoResponseBodyClusterInfo& operator=(DescribeClusterBasicInfoResponseBodyClusterInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->clusterType_ == nullptr && return this->createTime_ == nullptr && return this->currentVersion_ == nullptr && return this->instanceCount_ == nullptr
        && return this->regionId_ == nullptr && return this->state_ == nullptr && return this->targetResult_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterBasicInfoResponseBodyClusterInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeClusterBasicInfoResponseBodyClusterInfo& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClusterBasicInfoResponseBodyClusterInfo& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeClusterBasicInfoResponseBodyClusterInfo& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline DescribeClusterBasicInfoResponseBodyClusterInfo& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DescribeClusterBasicInfoResponseBodyClusterInfo& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClusterBasicInfoResponseBodyClusterInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClusterBasicInfoResponseBodyClusterInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // targetResult Field Functions 
    bool hasTargetResult() const { return this->targetResult_ != nullptr;};
    void deleteTargetResult() { this->targetResult_ = nullptr;};
    inline bool targetResult() const { DARABONBA_PTR_GET_DEFAULT(targetResult_, false) };
    inline DescribeClusterBasicInfoResponseBodyClusterInfo& setTargetResult(bool targetResult) { DARABONBA_PTR_SET_VALUE(targetResult_, targetResult) };


  protected:
    // The ID of cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   **ManagedKubernetes**: managed Kubernetes cluster
    // *   **NotManagedKubernetes**: non-managed Kubernetes cluster
    // *   **PrivateKubernetes**: private cluster
    // *   **kubernetes**: dedicated Kubernetes cluster
    // *   **ask**: dedicated ASK cluster
    std::shared_ptr<string> clusterType_ = nullptr;
    // The timestamp when the cluster was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The version of the cluster.
    std::shared_ptr<string> currentVersion_ = nullptr;
    // The number of instances in the cluster.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The ID of the region in which the cluster is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   **unavailable**
    // *   **Available**
    // *   **Creating**
    // *   **CreateFailed**
    std::shared_ptr<string> state_ = nullptr;
    // Indicates whether the cluster is enabled. Valid values:
    // 
    // *   **true**: The cluster is enabled.
    // *   **false**: The cluster is disabled.
    std::shared_ptr<bool> targetResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
