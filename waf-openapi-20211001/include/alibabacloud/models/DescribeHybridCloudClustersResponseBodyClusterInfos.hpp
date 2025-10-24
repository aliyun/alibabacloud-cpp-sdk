// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERSRESPONSEBODYCLUSTERINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERSRESPONSEBODYCLUSTERINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudClustersResponseBodyClusterInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudClustersResponseBodyClusterInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(AccessRegion, accessRegion_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterResourceId, clusterResourceId_);
      DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProtectionServerCount, protectionServerCount_);
      DARABONBA_PTR_TO_JSON(ProxyStatus, proxyStatus_);
      DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudClustersResponseBodyClusterInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(AccessRegion, accessRegion_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterResourceId, clusterResourceId_);
      DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProtectionServerCount, protectionServerCount_);
      DARABONBA_PTR_FROM_JSON(ProxyStatus, proxyStatus_);
      DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    DescribeHybridCloudClustersResponseBodyClusterInfos() = default ;
    DescribeHybridCloudClustersResponseBodyClusterInfos(const DescribeHybridCloudClustersResponseBodyClusterInfos &) = default ;
    DescribeHybridCloudClustersResponseBodyClusterInfos(DescribeHybridCloudClustersResponseBodyClusterInfos &&) = default ;
    DescribeHybridCloudClustersResponseBodyClusterInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudClustersResponseBodyClusterInfos() = default ;
    DescribeHybridCloudClustersResponseBodyClusterInfos& operator=(const DescribeHybridCloudClustersResponseBodyClusterInfos &) = default ;
    DescribeHybridCloudClustersResponseBodyClusterInfos& operator=(DescribeHybridCloudClustersResponseBodyClusterInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessMode_ == nullptr
        && return this->accessRegion_ == nullptr && return this->clusterName_ == nullptr && return this->clusterResourceId_ == nullptr && return this->httpPorts_ == nullptr && return this->httpsPorts_ == nullptr
        && return this->id_ == nullptr && return this->protectionServerCount_ == nullptr && return this->proxyStatus_ == nullptr && return this->proxyType_ == nullptr && return this->remark_ == nullptr
        && return this->ruleConfig_ == nullptr && return this->ruleStatus_ == nullptr && return this->ruleType_ == nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline string accessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, "") };
    inline DescribeHybridCloudClustersResponseBodyClusterInfos& setAccessMode(string accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    // accessRegion Field Functions 
    bool hasAccessRegion() const { return this->accessRegion_ != nullptr;};
    void deleteAccessRegion() { this->accessRegion_ = nullptr;};
    inline string accessRegion() const { DARABONBA_PTR_GET_DEFAULT(accessRegion_, "") };
    inline DescribeHybridCloudClustersResponseBodyClusterInfos& setAccessRegion(string accessRegion) { DARABONBA_PTR_SET_VALUE(accessRegion_, accessRegion) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeHybridCloudClustersResponseBodyClusterInfos& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterResourceId Field Functions 
    bool hasClusterResourceId() const { return this->clusterResourceId_ != nullptr;};
    void deleteClusterResourceId() { this->clusterResourceId_ = nullptr;};
    inline string clusterResourceId() const { DARABONBA_PTR_GET_DEFAULT(clusterResourceId_, "") };
    inline DescribeHybridCloudClustersResponseBodyClusterInfos& setClusterResourceId(string clusterResourceId) { DARABONBA_PTR_SET_VALUE(clusterResourceId_, clusterResourceId) };


    // httpPorts Field Functions 
    bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
    void deleteHttpPorts() { this->httpPorts_ = nullptr;};
    inline string httpPorts() const { DARABONBA_PTR_GET_DEFAULT(httpPorts_, "") };
    inline DescribeHybridCloudClustersResponseBodyClusterInfos& setHttpPorts(string httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };


    // httpsPorts Field Functions 
    bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
    void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
    inline string httpsPorts() const { DARABONBA_PTR_GET_DEFAULT(httpsPorts_, "") };
    inline DescribeHybridCloudClustersResponseBodyClusterInfos& setHttpsPorts(string httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeHybridCloudClustersResponseBodyClusterInfos& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // protectionServerCount Field Functions 
    bool hasProtectionServerCount() const { return this->protectionServerCount_ != nullptr;};
    void deleteProtectionServerCount() { this->protectionServerCount_ = nullptr;};
    inline int32_t protectionServerCount() const { DARABONBA_PTR_GET_DEFAULT(protectionServerCount_, 0) };
    inline DescribeHybridCloudClustersResponseBodyClusterInfos& setProtectionServerCount(int32_t protectionServerCount) { DARABONBA_PTR_SET_VALUE(protectionServerCount_, protectionServerCount) };


    // proxyStatus Field Functions 
    bool hasProxyStatus() const { return this->proxyStatus_ != nullptr;};
    void deleteProxyStatus() { this->proxyStatus_ = nullptr;};
    inline string proxyStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyStatus_, "") };
    inline DescribeHybridCloudClustersResponseBodyClusterInfos& setProxyStatus(string proxyStatus) { DARABONBA_PTR_SET_VALUE(proxyStatus_, proxyStatus) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string proxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline DescribeHybridCloudClustersResponseBodyClusterInfos& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeHybridCloudClustersResponseBodyClusterInfos& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline string ruleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
    inline DescribeHybridCloudClustersResponseBodyClusterInfos& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline DescribeHybridCloudClustersResponseBodyClusterInfos& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribeHybridCloudClustersResponseBodyClusterInfos& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The network access mode. Valid values:
    // 
    // *   **internet**: Internet access.
    // *   **vpc**: internal network access by using Express Connect circuits.
    std::shared_ptr<string> accessMode_ = nullptr;
    // The region where the virtual private cloud (VPC) resides. Valid values:
    // 
    // *   **cn-hangzhou**: China (Hangzhou).
    // *   **cn-beiijng**: China (Beijing).
    // *   **cn-shanghai**: China (Shanghai).
    std::shared_ptr<string> accessRegion_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The ID of the hybrid cloud cluster resource.
    std::shared_ptr<string> clusterResourceId_ = nullptr;
    // The HTTP ports. The value is a string. If multiple ports are returned, the value is in the **port1,port2,port3** format.
    std::shared_ptr<string> httpPorts_ = nullptr;
    // The HTTPS ports. The value is a string. If multiple ports are returned, the value is in the **port1,port2,port3** format.
    std::shared_ptr<string> httpsPorts_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The number of protection nodes that can be added to the cluster.
    std::shared_ptr<int32_t> protectionServerCount_ = nullptr;
    // The status of the proxy gateway. Valid values:
    // 
    // *   **on**: enabled.
    // *   **off**: disabled.
    std::shared_ptr<string> proxyStatus_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   **cname**: reverse proxy cluster.
    // *   **service**: SDK-based traffic mirroring cluster.
    std::shared_ptr<string> proxyType_ = nullptr;
    // The remarks about the cluster.
    std::shared_ptr<string> remark_ = nullptr;
    // The configurations of the rule.
    std::shared_ptr<string> ruleConfig_ = nullptr;
    // The status of manual bypass. Valid values:
    // 
    // *   **on**: enabled.
    // *   **off**: disabled.
    std::shared_ptr<string> ruleStatus_ = nullptr;
    // The type of the rule. Valid value:
    // 
    // *   **bypass**: Requests are allowed without security checks.
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
