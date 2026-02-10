// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERINFOLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERINFOLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterInfoListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterInfoListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterInfoListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterInfoListResponseBody() = default ;
    DescribeClusterInfoListResponseBody(const DescribeClusterInfoListResponseBody &) = default ;
    DescribeClusterInfoListResponseBody(DescribeClusterInfoListResponseBody &&) = default ;
    DescribeClusterInfoListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterInfoListResponseBody() = default ;
    DescribeClusterInfoListResponseBody& operator=(const DescribeClusterInfoListResponseBody &) = default ;
    DescribeClusterInfoListResponseBody& operator=(DescribeClusterInfoListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterList& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TargetResult, targetResult_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterList& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TargetResult, targetResult_);
      };
      ClusterList() = default ;
      ClusterList(const ClusterList &) = default ;
      ClusterList(ClusterList &&) = default ;
      ClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterList() = default ;
      ClusterList& operator=(const ClusterList &) = default ;
      ClusterList& operator=(ClusterList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->clusterType_ == nullptr && this->regionId_ == nullptr && this->state_ == nullptr && this->targetResult_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline ClusterList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline ClusterList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline ClusterList& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ClusterList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline ClusterList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // targetResult Field Functions 
      bool hasTargetResult() const { return this->targetResult_ != nullptr;};
      void deleteTargetResult() { this->targetResult_ = nullptr;};
      inline bool getTargetResult() const { DARABONBA_PTR_GET_DEFAULT(targetResult_, false) };
      inline ClusterList& setTargetResult(bool targetResult) { DARABONBA_PTR_SET_VALUE(targetResult_, targetResult) };


    protected:
      // The ID of the container cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the container cluster.
      shared_ptr<string> clusterName_ {};
      // The type of the cluster. Valid values:
      // 
      // *   **ManagedKubernetes**: managed Kubernetes cluster.
      // *   **NotManagedKubernetes**: non-managed Kubernetes cluster.
      // *   **PrivateKubernetes**: private cluster.
      // *   **kubernetes**: dedicated Kubernetes cluster.
      // *   **ask**: dedicated serverless Kubernetes (ASK) cluster.
      shared_ptr<string> clusterType_ {};
      // The region in which the cluster resides.
      shared_ptr<string> regionId_ {};
      // The status of the cluster. Valid values:
      // 
      // *   **unavailable**: The cluster is unavailable.
      // *   **Available**: The cluster is available.
      // *   **Creating**: The cluster is being created.
      // *   **CreateFailed**: The cluster failed to be created.
      shared_ptr<string> state_ {};
      // Indicates whether container network topology was enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> targetResult_ {};
    };

    virtual bool empty() const override { return this->clusterList_ == nullptr
        && this->requestId_ == nullptr; };
    // clusterList Field Functions 
    bool hasClusterList() const { return this->clusterList_ != nullptr;};
    void deleteClusterList() { this->clusterList_ = nullptr;};
    inline const vector<DescribeClusterInfoListResponseBody::ClusterList> & getClusterList() const { DARABONBA_PTR_GET_CONST(clusterList_, vector<DescribeClusterInfoListResponseBody::ClusterList>) };
    inline vector<DescribeClusterInfoListResponseBody::ClusterList> getClusterList() { DARABONBA_PTR_GET(clusterList_, vector<DescribeClusterInfoListResponseBody::ClusterList>) };
    inline DescribeClusterInfoListResponseBody& setClusterList(const vector<DescribeClusterInfoListResponseBody::ClusterList> & clusterList) { DARABONBA_PTR_SET_VALUE(clusterList_, clusterList) };
    inline DescribeClusterInfoListResponseBody& setClusterList(vector<DescribeClusterInfoListResponseBody::ClusterList> && clusterList) { DARABONBA_PTR_SET_RVALUE(clusterList_, clusterList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterInfoListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about clusters.
    shared_ptr<vector<DescribeClusterInfoListResponseBody::ClusterList>> clusterList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
