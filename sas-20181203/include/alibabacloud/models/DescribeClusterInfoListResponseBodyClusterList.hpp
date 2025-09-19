// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERINFOLISTRESPONSEBODYCLUSTERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERINFOLISTRESPONSEBODYCLUSTERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterInfoListResponseBodyClusterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterInfoListResponseBodyClusterList& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TargetResult, targetResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterInfoListResponseBodyClusterList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TargetResult, targetResult_);
    };
    DescribeClusterInfoListResponseBodyClusterList() = default ;
    DescribeClusterInfoListResponseBodyClusterList(const DescribeClusterInfoListResponseBodyClusterList &) = default ;
    DescribeClusterInfoListResponseBodyClusterList(DescribeClusterInfoListResponseBodyClusterList &&) = default ;
    DescribeClusterInfoListResponseBodyClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterInfoListResponseBodyClusterList() = default ;
    DescribeClusterInfoListResponseBodyClusterList& operator=(const DescribeClusterInfoListResponseBodyClusterList &) = default ;
    DescribeClusterInfoListResponseBodyClusterList& operator=(DescribeClusterInfoListResponseBodyClusterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterName_ != nullptr && this->clusterType_ != nullptr && this->regionId_ != nullptr && this->state_ != nullptr && this->targetResult_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterInfoListResponseBodyClusterList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeClusterInfoListResponseBodyClusterList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClusterInfoListResponseBodyClusterList& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClusterInfoListResponseBodyClusterList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClusterInfoListResponseBodyClusterList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // targetResult Field Functions 
    bool hasTargetResult() const { return this->targetResult_ != nullptr;};
    void deleteTargetResult() { this->targetResult_ = nullptr;};
    inline bool targetResult() const { DARABONBA_PTR_GET_DEFAULT(targetResult_, false) };
    inline DescribeClusterInfoListResponseBodyClusterList& setTargetResult(bool targetResult) { DARABONBA_PTR_SET_VALUE(targetResult_, targetResult) };


  protected:
    // The ID of the container cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the container cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   **ManagedKubernetes**: managed Kubernetes cluster.
    // *   **NotManagedKubernetes**: non-managed Kubernetes cluster.
    // *   **PrivateKubernetes**: private cluster.
    // *   **kubernetes**: dedicated Kubernetes cluster.
    // *   **ask**: dedicated serverless Kubernetes (ASK) cluster.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The region in which the cluster resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   **unavailable**: The cluster is unavailable.
    // *   **Available**: The cluster is available.
    // *   **Creating**: The cluster is being created.
    // *   **CreateFailed**: The cluster failed to be created.
    std::shared_ptr<string> state_ = nullptr;
    // Indicates whether container network topology was enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> targetResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
