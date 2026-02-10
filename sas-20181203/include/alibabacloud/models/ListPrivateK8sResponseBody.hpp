// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEK8SRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEK8SRESPONSEBODY_HPP_
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
  class ListPrivateK8sResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateK8sResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateK8sInfos, privateK8sInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateK8sResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateK8sInfos, privateK8sInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrivateK8sResponseBody() = default ;
    ListPrivateK8sResponseBody(const ListPrivateK8sResponseBody &) = default ;
    ListPrivateK8sResponseBody(ListPrivateK8sResponseBody &&) = default ;
    ListPrivateK8sResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateK8sResponseBody() = default ;
    ListPrivateK8sResponseBody& operator=(const ListPrivateK8sResponseBody &) = default ;
    ListPrivateK8sResponseBody& operator=(ListPrivateK8sResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrivateK8sInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivateK8sInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(ApiServerIp, apiServerIp_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(K8sVersion, k8sVersion_);
        DARABONBA_PTR_TO_JSON(KubeConfig, kubeConfig_);
        DARABONBA_PTR_TO_JSON(NetType, netType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, PrivateK8sInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(ApiServerIp, apiServerIp_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(K8sVersion, k8sVersion_);
        DARABONBA_PTR_FROM_JSON(KubeConfig, kubeConfig_);
        DARABONBA_PTR_FROM_JSON(NetType, netType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      PrivateK8sInfos() = default ;
      PrivateK8sInfos(const PrivateK8sInfos &) = default ;
      PrivateK8sInfos(PrivateK8sInfos &&) = default ;
      PrivateK8sInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivateK8sInfos() = default ;
      PrivateK8sInfos& operator=(const PrivateK8sInfos &) = default ;
      PrivateK8sInfos& operator=(PrivateK8sInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->apiServerIp_ == nullptr && this->clusterName_ == nullptr && this->id_ == nullptr && this->k8sVersion_ == nullptr && this->kubeConfig_ == nullptr
        && this->netType_ == nullptr && this->regionId_ == nullptr && this->vpcId_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline PrivateK8sInfos& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // apiServerIp Field Functions 
      bool hasApiServerIp() const { return this->apiServerIp_ != nullptr;};
      void deleteApiServerIp() { this->apiServerIp_ = nullptr;};
      inline string getApiServerIp() const { DARABONBA_PTR_GET_DEFAULT(apiServerIp_, "") };
      inline PrivateK8sInfos& setApiServerIp(string apiServerIp) { DARABONBA_PTR_SET_VALUE(apiServerIp_, apiServerIp) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline PrivateK8sInfos& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline PrivateK8sInfos& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // k8sVersion Field Functions 
      bool hasK8sVersion() const { return this->k8sVersion_ != nullptr;};
      void deleteK8sVersion() { this->k8sVersion_ = nullptr;};
      inline string getK8sVersion() const { DARABONBA_PTR_GET_DEFAULT(k8sVersion_, "") };
      inline PrivateK8sInfos& setK8sVersion(string k8sVersion) { DARABONBA_PTR_SET_VALUE(k8sVersion_, k8sVersion) };


      // kubeConfig Field Functions 
      bool hasKubeConfig() const { return this->kubeConfig_ != nullptr;};
      void deleteKubeConfig() { this->kubeConfig_ = nullptr;};
      inline string getKubeConfig() const { DARABONBA_PTR_GET_DEFAULT(kubeConfig_, "") };
      inline PrivateK8sInfos& setKubeConfig(string kubeConfig) { DARABONBA_PTR_SET_VALUE(kubeConfig_, kubeConfig) };


      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline int64_t getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, 0L) };
      inline PrivateK8sInfos& setNetType(int64_t netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline PrivateK8sInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline PrivateK8sInfos& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<int64_t> aliUid_ {};
      // The IP address of the API server.
      shared_ptr<string> apiServerIp_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The ID of the policy.
      shared_ptr<int64_t> id_ {};
      // The version of Kubernetes.
      shared_ptr<string> k8sVersion_ {};
      // The server configuration of Kubernetes.
      shared_ptr<string> kubeConfig_ {};
      // The network type. Valid values:
      // 
      // *   **1**: Internet.
      // *   **2**: VPC.
      shared_ptr<int64_t> netType_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
      // The ID of the virtual private cloud (VPC).
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->privateK8sInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // privateK8sInfos Field Functions 
    bool hasPrivateK8sInfos() const { return this->privateK8sInfos_ != nullptr;};
    void deletePrivateK8sInfos() { this->privateK8sInfos_ = nullptr;};
    inline const vector<ListPrivateK8sResponseBody::PrivateK8sInfos> & getPrivateK8sInfos() const { DARABONBA_PTR_GET_CONST(privateK8sInfos_, vector<ListPrivateK8sResponseBody::PrivateK8sInfos>) };
    inline vector<ListPrivateK8sResponseBody::PrivateK8sInfos> getPrivateK8sInfos() { DARABONBA_PTR_GET(privateK8sInfos_, vector<ListPrivateK8sResponseBody::PrivateK8sInfos>) };
    inline ListPrivateK8sResponseBody& setPrivateK8sInfos(const vector<ListPrivateK8sResponseBody::PrivateK8sInfos> & privateK8sInfos) { DARABONBA_PTR_SET_VALUE(privateK8sInfos_, privateK8sInfos) };
    inline ListPrivateK8sResponseBody& setPrivateK8sInfos(vector<ListPrivateK8sResponseBody::PrivateK8sInfos> && privateK8sInfos) { DARABONBA_PTR_SET_RVALUE(privateK8sInfos_, privateK8sInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateK8sResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the self-managed Kubernetes clusters.
    shared_ptr<vector<ListPrivateK8sResponseBody::PrivateK8sInfos>> privateK8sInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
