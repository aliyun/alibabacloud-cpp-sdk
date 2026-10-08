// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSERTCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InsertClusterResponseBody() = default ;
    InsertClusterResponseBody(const InsertClusterResponseBody &) = default ;
    InsertClusterResponseBody(InsertClusterResponseBody &&) = default ;
    InsertClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertClusterResponseBody() = default ;
    InsertClusterResponseBody& operator=(const InsertClusterResponseBody &) = default ;
    InsertClusterResponseBody& operator=(InsertClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Cluster : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Cluster& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(IaasProvider, iaasProvider_);
        DARABONBA_PTR_TO_JSON(NetworkMode, networkMode_);
        DARABONBA_PTR_TO_JSON(OversoldFactor, oversoldFactor_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Cluster& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(IaasProvider, iaasProvider_);
        DARABONBA_PTR_FROM_JSON(NetworkMode, networkMode_);
        DARABONBA_PTR_FROM_JSON(OversoldFactor, oversoldFactor_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      Cluster() = default ;
      Cluster(const Cluster &) = default ;
      Cluster(Cluster &&) = default ;
      Cluster(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Cluster() = default ;
      Cluster& operator=(const Cluster &) = default ;
      Cluster& operator=(Cluster &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->clusterType_ == nullptr && this->iaasProvider_ == nullptr && this->networkMode_ == nullptr && this->oversoldFactor_ == nullptr
        && this->regionId_ == nullptr && this->vpcId_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Cluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Cluster& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline int32_t getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
      inline Cluster& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // iaasProvider Field Functions 
      bool hasIaasProvider() const { return this->iaasProvider_ != nullptr;};
      void deleteIaasProvider() { this->iaasProvider_ = nullptr;};
      inline string getIaasProvider() const { DARABONBA_PTR_GET_DEFAULT(iaasProvider_, "") };
      inline Cluster& setIaasProvider(string iaasProvider) { DARABONBA_PTR_SET_VALUE(iaasProvider_, iaasProvider) };


      // networkMode Field Functions 
      bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
      void deleteNetworkMode() { this->networkMode_ = nullptr;};
      inline int32_t getNetworkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, 0) };
      inline Cluster& setNetworkMode(int32_t networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


      // oversoldFactor Field Functions 
      bool hasOversoldFactor() const { return this->oversoldFactor_ != nullptr;};
      void deleteOversoldFactor() { this->oversoldFactor_ = nullptr;};
      inline int32_t getOversoldFactor() const { DARABONBA_PTR_GET_DEFAULT(oversoldFactor_, 0) };
      inline Cluster& setOversoldFactor(int32_t oversoldFactor) { DARABONBA_PTR_SET_VALUE(oversoldFactor_, oversoldFactor) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Cluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Cluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The ID of cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The type of the cluster. Valid values:
      // 
      // *   2: ECS cluster
      // *   3: self-managed Kubernetes cluster in EDAS
      // *   5: Kubernetes cluster
      shared_ptr<int32_t> clusterType_ {};
      // The provider of the IaaS resources that are used in the cluster.
      shared_ptr<string> iaasProvider_ {};
      // The network type of the cluster. Valid values:
      // 
      // *   1: classic network
      // *   2\\. VPC
      shared_ptr<int32_t> networkMode_ {};
      // **This parameter is deprecated.** The CPU overcommit ratio supported by the Docker cluster. Valid values:
      // 
      // *   2: 1:2, which means that resources are overcommitted by 1:2.
      // *   4: 1:4, which means that resources are overcommitted by 1:4.
      // *   8: 1:8, which means that resources are overcommitted by 1:8.
      shared_ptr<int32_t> oversoldFactor_ {};
      // The ID of the region in which the cluster resides.
      shared_ptr<string> regionId_ {};
      // The ID of the VPC.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->cluster_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const InsertClusterResponseBody::Cluster & getCluster() const { DARABONBA_PTR_GET_CONST(cluster_, InsertClusterResponseBody::Cluster) };
    inline InsertClusterResponseBody::Cluster getCluster() { DARABONBA_PTR_GET(cluster_, InsertClusterResponseBody::Cluster) };
    inline InsertClusterResponseBody& setCluster(const InsertClusterResponseBody::Cluster & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline InsertClusterResponseBody& setCluster(InsertClusterResponseBody::Cluster && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline InsertClusterResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InsertClusterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InsertClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the cluster that was created.
    shared_ptr<InsertClusterResponseBody::Cluster> cluster_ {};
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
