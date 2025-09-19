// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERINTERCEPTIONCONFIGRESPONSEBODYCLUSTERCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERINTERCEPTIONCONFIGRESPONSEBODYCLUSTERCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListClusterInterceptionConfigResponseBodyClusterConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterInterceptionConfigResponseBodyClusterConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterCNNFStatus, clusterCNNFStatus_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(InterceptionSwitch, interceptionSwitch_);
      DARABONBA_PTR_TO_JSON(OpenRuleCount, openRuleCount_);
      DARABONBA_PTR_TO_JSON(SupportCNNF, supportCNNF_);
      DARABONBA_PTR_TO_JSON(TotalRuleCount, totalRuleCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterInterceptionConfigResponseBodyClusterConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterCNNFStatus, clusterCNNFStatus_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(InterceptionSwitch, interceptionSwitch_);
      DARABONBA_PTR_FROM_JSON(OpenRuleCount, openRuleCount_);
      DARABONBA_PTR_FROM_JSON(SupportCNNF, supportCNNF_);
      DARABONBA_PTR_FROM_JSON(TotalRuleCount, totalRuleCount_);
    };
    ListClusterInterceptionConfigResponseBodyClusterConfigList() = default ;
    ListClusterInterceptionConfigResponseBodyClusterConfigList(const ListClusterInterceptionConfigResponseBodyClusterConfigList &) = default ;
    ListClusterInterceptionConfigResponseBodyClusterConfigList(ListClusterInterceptionConfigResponseBodyClusterConfigList &&) = default ;
    ListClusterInterceptionConfigResponseBodyClusterConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterInterceptionConfigResponseBodyClusterConfigList() = default ;
    ListClusterInterceptionConfigResponseBodyClusterConfigList& operator=(const ListClusterInterceptionConfigResponseBodyClusterConfigList &) = default ;
    ListClusterInterceptionConfigResponseBodyClusterConfigList& operator=(ListClusterInterceptionConfigResponseBodyClusterConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterCNNFStatus_ != nullptr
        && this->clusterId_ != nullptr && this->clusterName_ != nullptr && this->clusterType_ != nullptr && this->interceptionSwitch_ != nullptr && this->openRuleCount_ != nullptr
        && this->supportCNNF_ != nullptr && this->totalRuleCount_ != nullptr; };
    // clusterCNNFStatus Field Functions 
    bool hasClusterCNNFStatus() const { return this->clusterCNNFStatus_ != nullptr;};
    void deleteClusterCNNFStatus() { this->clusterCNNFStatus_ = nullptr;};
    inline int32_t clusterCNNFStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterCNNFStatus_, 0) };
    inline ListClusterInterceptionConfigResponseBodyClusterConfigList& setClusterCNNFStatus(int32_t clusterCNNFStatus) { DARABONBA_PTR_SET_VALUE(clusterCNNFStatus_, clusterCNNFStatus) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListClusterInterceptionConfigResponseBodyClusterConfigList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListClusterInterceptionConfigResponseBodyClusterConfigList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListClusterInterceptionConfigResponseBodyClusterConfigList& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // interceptionSwitch Field Functions 
    bool hasInterceptionSwitch() const { return this->interceptionSwitch_ != nullptr;};
    void deleteInterceptionSwitch() { this->interceptionSwitch_ = nullptr;};
    inline int32_t interceptionSwitch() const { DARABONBA_PTR_GET_DEFAULT(interceptionSwitch_, 0) };
    inline ListClusterInterceptionConfigResponseBodyClusterConfigList& setInterceptionSwitch(int32_t interceptionSwitch) { DARABONBA_PTR_SET_VALUE(interceptionSwitch_, interceptionSwitch) };


    // openRuleCount Field Functions 
    bool hasOpenRuleCount() const { return this->openRuleCount_ != nullptr;};
    void deleteOpenRuleCount() { this->openRuleCount_ = nullptr;};
    inline int64_t openRuleCount() const { DARABONBA_PTR_GET_DEFAULT(openRuleCount_, 0L) };
    inline ListClusterInterceptionConfigResponseBodyClusterConfigList& setOpenRuleCount(int64_t openRuleCount) { DARABONBA_PTR_SET_VALUE(openRuleCount_, openRuleCount) };


    // supportCNNF Field Functions 
    bool hasSupportCNNF() const { return this->supportCNNF_ != nullptr;};
    void deleteSupportCNNF() { this->supportCNNF_ = nullptr;};
    inline bool supportCNNF() const { DARABONBA_PTR_GET_DEFAULT(supportCNNF_, false) };
    inline ListClusterInterceptionConfigResponseBodyClusterConfigList& setSupportCNNF(bool supportCNNF) { DARABONBA_PTR_SET_VALUE(supportCNNF_, supportCNNF) };


    // totalRuleCount Field Functions 
    bool hasTotalRuleCount() const { return this->totalRuleCount_ != nullptr;};
    void deleteTotalRuleCount() { this->totalRuleCount_ = nullptr;};
    inline int64_t totalRuleCount() const { DARABONBA_PTR_GET_DEFAULT(totalRuleCount_, 0L) };
    inline ListClusterInterceptionConfigResponseBodyClusterConfigList& setTotalRuleCount(int64_t totalRuleCount) { DARABONBA_PTR_SET_VALUE(totalRuleCount_, totalRuleCount) };


  protected:
    // The status of the container firewall feature. Valid values:
    // 
    // *   **-1**: unknown
    // *   **0**: abnormal
    // *   **1**: normal
    // *   **2**: normal to be confirmed
    std::shared_ptr<int32_t> clusterCNNFStatus_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   **ManagedKubernetes**: managed Kubernetes cluster
    // *   **NotManagedKubernetes**: non-managed Kubernetes cluster
    // *   **PrivateKubernetes**: private cluster
    // *   **kubernetes**: dedicated Kubernetes cluster
    // *   **ask**: dedicated serverless Kubernetes (ASK) cluster
    std::shared_ptr<string> clusterType_ = nullptr;
    // The status of the defense rule. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    std::shared_ptr<int32_t> interceptionSwitch_ = nullptr;
    // The number of defense rules that are in effect.
    std::shared_ptr<int64_t> openRuleCount_ = nullptr;
    // Indicates whether the container firewall feature is supported.
    std::shared_ptr<bool> supportCNNF_ = nullptr;
    // The total number of defense rules.
    std::shared_ptr<int64_t> totalRuleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
