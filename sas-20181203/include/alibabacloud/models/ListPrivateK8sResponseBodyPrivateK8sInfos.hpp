// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEK8SRESPONSEBODYPRIVATEK8SINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEK8SRESPONSEBODYPRIVATEK8SINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPrivateK8sResponseBodyPrivateK8sInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateK8sResponseBodyPrivateK8sInfos& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListPrivateK8sResponseBodyPrivateK8sInfos& obj) { 
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
    ListPrivateK8sResponseBodyPrivateK8sInfos() = default ;
    ListPrivateK8sResponseBodyPrivateK8sInfos(const ListPrivateK8sResponseBodyPrivateK8sInfos &) = default ;
    ListPrivateK8sResponseBodyPrivateK8sInfos(ListPrivateK8sResponseBodyPrivateK8sInfos &&) = default ;
    ListPrivateK8sResponseBodyPrivateK8sInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateK8sResponseBodyPrivateK8sInfos() = default ;
    ListPrivateK8sResponseBodyPrivateK8sInfos& operator=(const ListPrivateK8sResponseBodyPrivateK8sInfos &) = default ;
    ListPrivateK8sResponseBodyPrivateK8sInfos& operator=(ListPrivateK8sResponseBodyPrivateK8sInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->apiServerIp_ == nullptr && return this->clusterName_ == nullptr && return this->id_ == nullptr && return this->k8sVersion_ == nullptr && return this->kubeConfig_ == nullptr
        && return this->netType_ == nullptr && return this->regionId_ == nullptr && return this->vpcId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListPrivateK8sResponseBodyPrivateK8sInfos& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // apiServerIp Field Functions 
    bool hasApiServerIp() const { return this->apiServerIp_ != nullptr;};
    void deleteApiServerIp() { this->apiServerIp_ = nullptr;};
    inline string apiServerIp() const { DARABONBA_PTR_GET_DEFAULT(apiServerIp_, "") };
    inline ListPrivateK8sResponseBodyPrivateK8sInfos& setApiServerIp(string apiServerIp) { DARABONBA_PTR_SET_VALUE(apiServerIp_, apiServerIp) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListPrivateK8sResponseBodyPrivateK8sInfos& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListPrivateK8sResponseBodyPrivateK8sInfos& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // k8sVersion Field Functions 
    bool hasK8sVersion() const { return this->k8sVersion_ != nullptr;};
    void deleteK8sVersion() { this->k8sVersion_ = nullptr;};
    inline string k8sVersion() const { DARABONBA_PTR_GET_DEFAULT(k8sVersion_, "") };
    inline ListPrivateK8sResponseBodyPrivateK8sInfos& setK8sVersion(string k8sVersion) { DARABONBA_PTR_SET_VALUE(k8sVersion_, k8sVersion) };


    // kubeConfig Field Functions 
    bool hasKubeConfig() const { return this->kubeConfig_ != nullptr;};
    void deleteKubeConfig() { this->kubeConfig_ = nullptr;};
    inline string kubeConfig() const { DARABONBA_PTR_GET_DEFAULT(kubeConfig_, "") };
    inline ListPrivateK8sResponseBodyPrivateK8sInfos& setKubeConfig(string kubeConfig) { DARABONBA_PTR_SET_VALUE(kubeConfig_, kubeConfig) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline int64_t netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, 0L) };
    inline ListPrivateK8sResponseBodyPrivateK8sInfos& setNetType(int64_t netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPrivateK8sResponseBodyPrivateK8sInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListPrivateK8sResponseBodyPrivateK8sInfos& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The IP address of the API server.
    std::shared_ptr<string> apiServerIp_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The version of Kubernetes.
    std::shared_ptr<string> k8sVersion_ = nullptr;
    // The server configuration of Kubernetes.
    std::shared_ptr<string> kubeConfig_ = nullptr;
    // The network type. Valid values:
    // 
    // *   **1**: Internet.
    // *   **2**: VPC.
    std::shared_ptr<int64_t> netType_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
