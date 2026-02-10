// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERBASICINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERBASICINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterBasicInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterInfo, clusterInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterInfo, clusterInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterBasicInfoResponseBody() = default ;
    DescribeClusterBasicInfoResponseBody(const DescribeClusterBasicInfoResponseBody &) = default ;
    DescribeClusterBasicInfoResponseBody(DescribeClusterBasicInfoResponseBody &&) = default ;
    DescribeClusterBasicInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterBasicInfoResponseBody() = default ;
    DescribeClusterBasicInfoResponseBody& operator=(const DescribeClusterBasicInfoResponseBody &) = default ;
    DescribeClusterBasicInfoResponseBody& operator=(DescribeClusterBasicInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterInfo& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ClusterInfo& obj) { 
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
      ClusterInfo() = default ;
      ClusterInfo(const ClusterInfo &) = default ;
      ClusterInfo(ClusterInfo &&) = default ;
      ClusterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterInfo() = default ;
      ClusterInfo& operator=(const ClusterInfo &) = default ;
      ClusterInfo& operator=(ClusterInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->clusterType_ == nullptr && this->createTime_ == nullptr && this->currentVersion_ == nullptr && this->instanceCount_ == nullptr
        && this->regionId_ == nullptr && this->state_ == nullptr && this->targetResult_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline ClusterInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline ClusterInfo& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline ClusterInfo& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ClusterInfo& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // currentVersion Field Functions 
      bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
      void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
      inline string getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
      inline ClusterInfo& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline ClusterInfo& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ClusterInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline ClusterInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // targetResult Field Functions 
      bool hasTargetResult() const { return this->targetResult_ != nullptr;};
      void deleteTargetResult() { this->targetResult_ = nullptr;};
      inline bool getTargetResult() const { DARABONBA_PTR_GET_DEFAULT(targetResult_, false) };
      inline ClusterInfo& setTargetResult(bool targetResult) { DARABONBA_PTR_SET_VALUE(targetResult_, targetResult) };


    protected:
      // The ID of cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The type of the cluster. Valid values:
      // 
      // *   **ManagedKubernetes**: managed Kubernetes cluster
      // *   **NotManagedKubernetes**: non-managed Kubernetes cluster
      // *   **PrivateKubernetes**: private cluster
      // *   **kubernetes**: dedicated Kubernetes cluster
      // *   **ask**: dedicated ASK cluster
      shared_ptr<string> clusterType_ {};
      // The timestamp when the cluster was created. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The version of the cluster.
      shared_ptr<string> currentVersion_ {};
      // The number of instances in the cluster.
      shared_ptr<int32_t> instanceCount_ {};
      // The ID of the region in which the cluster is deployed.
      shared_ptr<string> regionId_ {};
      // The status of the cluster. Valid values:
      // 
      // *   **unavailable**
      // *   **Available**
      // *   **Creating**
      // *   **CreateFailed**
      shared_ptr<string> state_ {};
      // Indicates whether the cluster is enabled. Valid values:
      // 
      // *   **true**: The cluster is enabled.
      // *   **false**: The cluster is disabled.
      shared_ptr<bool> targetResult_ {};
    };

    virtual bool empty() const override { return this->clusterInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // clusterInfo Field Functions 
    bool hasClusterInfo() const { return this->clusterInfo_ != nullptr;};
    void deleteClusterInfo() { this->clusterInfo_ = nullptr;};
    inline const DescribeClusterBasicInfoResponseBody::ClusterInfo & getClusterInfo() const { DARABONBA_PTR_GET_CONST(clusterInfo_, DescribeClusterBasicInfoResponseBody::ClusterInfo) };
    inline DescribeClusterBasicInfoResponseBody::ClusterInfo getClusterInfo() { DARABONBA_PTR_GET(clusterInfo_, DescribeClusterBasicInfoResponseBody::ClusterInfo) };
    inline DescribeClusterBasicInfoResponseBody& setClusterInfo(const DescribeClusterBasicInfoResponseBody::ClusterInfo & clusterInfo) { DARABONBA_PTR_SET_VALUE(clusterInfo_, clusterInfo) };
    inline DescribeClusterBasicInfoResponseBody& setClusterInfo(DescribeClusterBasicInfoResponseBody::ClusterInfo && clusterInfo) { DARABONBA_PTR_SET_RVALUE(clusterInfo_, clusterInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterBasicInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information about the cluster.
    shared_ptr<DescribeClusterBasicInfoResponseBody::ClusterInfo> clusterInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
