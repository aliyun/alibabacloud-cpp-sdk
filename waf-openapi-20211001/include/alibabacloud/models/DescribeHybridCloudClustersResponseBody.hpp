// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterInfos, clusterInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterInfos, clusterInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridCloudClustersResponseBody() = default ;
    DescribeHybridCloudClustersResponseBody(const DescribeHybridCloudClustersResponseBody &) = default ;
    DescribeHybridCloudClustersResponseBody(DescribeHybridCloudClustersResponseBody &&) = default ;
    DescribeHybridCloudClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudClustersResponseBody() = default ;
    DescribeHybridCloudClustersResponseBody& operator=(const DescribeHybridCloudClustersResponseBody &) = default ;
    DescribeHybridCloudClustersResponseBody& operator=(DescribeHybridCloudClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterInfos& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ClusterInfos& obj) { 
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
      ClusterInfos() = default ;
      ClusterInfos(const ClusterInfos &) = default ;
      ClusterInfos(ClusterInfos &&) = default ;
      ClusterInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterInfos() = default ;
      ClusterInfos& operator=(const ClusterInfos &) = default ;
      ClusterInfos& operator=(ClusterInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessMode_ == nullptr
        && this->accessRegion_ == nullptr && this->clusterName_ == nullptr && this->clusterResourceId_ == nullptr && this->httpPorts_ == nullptr && this->httpsPorts_ == nullptr
        && this->id_ == nullptr && this->protectionServerCount_ == nullptr && this->proxyStatus_ == nullptr && this->proxyType_ == nullptr && this->remark_ == nullptr
        && this->ruleConfig_ == nullptr && this->ruleStatus_ == nullptr && this->ruleType_ == nullptr; };
      // accessMode Field Functions 
      bool hasAccessMode() const { return this->accessMode_ != nullptr;};
      void deleteAccessMode() { this->accessMode_ = nullptr;};
      inline string getAccessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, "") };
      inline ClusterInfos& setAccessMode(string accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


      // accessRegion Field Functions 
      bool hasAccessRegion() const { return this->accessRegion_ != nullptr;};
      void deleteAccessRegion() { this->accessRegion_ = nullptr;};
      inline string getAccessRegion() const { DARABONBA_PTR_GET_DEFAULT(accessRegion_, "") };
      inline ClusterInfos& setAccessRegion(string accessRegion) { DARABONBA_PTR_SET_VALUE(accessRegion_, accessRegion) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline ClusterInfos& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterResourceId Field Functions 
      bool hasClusterResourceId() const { return this->clusterResourceId_ != nullptr;};
      void deleteClusterResourceId() { this->clusterResourceId_ = nullptr;};
      inline string getClusterResourceId() const { DARABONBA_PTR_GET_DEFAULT(clusterResourceId_, "") };
      inline ClusterInfos& setClusterResourceId(string clusterResourceId) { DARABONBA_PTR_SET_VALUE(clusterResourceId_, clusterResourceId) };


      // httpPorts Field Functions 
      bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
      void deleteHttpPorts() { this->httpPorts_ = nullptr;};
      inline string getHttpPorts() const { DARABONBA_PTR_GET_DEFAULT(httpPorts_, "") };
      inline ClusterInfos& setHttpPorts(string httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };


      // httpsPorts Field Functions 
      bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
      void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
      inline string getHttpsPorts() const { DARABONBA_PTR_GET_DEFAULT(httpsPorts_, "") };
      inline ClusterInfos& setHttpsPorts(string httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ClusterInfos& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // protectionServerCount Field Functions 
      bool hasProtectionServerCount() const { return this->protectionServerCount_ != nullptr;};
      void deleteProtectionServerCount() { this->protectionServerCount_ = nullptr;};
      inline int32_t getProtectionServerCount() const { DARABONBA_PTR_GET_DEFAULT(protectionServerCount_, 0) };
      inline ClusterInfos& setProtectionServerCount(int32_t protectionServerCount) { DARABONBA_PTR_SET_VALUE(protectionServerCount_, protectionServerCount) };


      // proxyStatus Field Functions 
      bool hasProxyStatus() const { return this->proxyStatus_ != nullptr;};
      void deleteProxyStatus() { this->proxyStatus_ = nullptr;};
      inline string getProxyStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyStatus_, "") };
      inline ClusterInfos& setProxyStatus(string proxyStatus) { DARABONBA_PTR_SET_VALUE(proxyStatus_, proxyStatus) };


      // proxyType Field Functions 
      bool hasProxyType() const { return this->proxyType_ != nullptr;};
      void deleteProxyType() { this->proxyType_ = nullptr;};
      inline string getProxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
      inline ClusterInfos& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline ClusterInfos& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // ruleConfig Field Functions 
      bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
      void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
      inline string getRuleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
      inline ClusterInfos& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


      // ruleStatus Field Functions 
      bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
      void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
      inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
      inline ClusterInfos& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline ClusterInfos& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    protected:
      // The network access mode. Valid values:
      // 
      // - **internet**: Internet access.
      // 
      // - **vpc**: leased line-based private network access.
      shared_ptr<string> accessMode_ {};
      // The region where the leased line is connected. Valid values:
      // 
      // - **cn-hangzhou**: Hangzhou
      // 
      // - **cn-beijing**: Beijing
      // 
      // - **cn-shanghai**: Shanghai
      shared_ptr<string> accessRegion_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The resource ID of the hybrid cloud cluster.
      shared_ptr<string> clusterResourceId_ {};
      // The ports that use the HTTP protocol. The value is a string. If multiple ports are returned, they are separated by commas in the **port1,port2,port3** format.
      shared_ptr<string> httpPorts_ {};
      // The ports that use the HTTPS protocol. The value is a string. If multiple ports are returned, they are separated by commas in the **port1,port2,port3** format.
      shared_ptr<string> httpsPorts_ {};
      // The cluster ID.
      shared_ptr<int64_t> id_ {};
      // The number of protection nodes that you can add to the cluster.
      shared_ptr<int32_t> protectionServerCount_ {};
      // The status of the proxy. Valid values:
      // 
      // - **on**: enabled
      // 
      // - **off**: disabled
      shared_ptr<string> proxyStatus_ {};
      // The type of the cluster. Valid values:
      // 
      // - **cname**: reverse proxy cluster
      // 
      // - **service**: service cluster
      shared_ptr<string> proxyType_ {};
      // The remarks.
      shared_ptr<string> remark_ {};
      // The rule configuration.
      shared_ptr<string> ruleConfig_ {};
      // The status of the manual bypass setting. Valid values:
      // 
      // - **on**: enabled.
      // 
      // - **off**: disabled.
      shared_ptr<string> ruleStatus_ {};
      // The type of the rule. Valid values:
      // 
      // - **bypass**: WAF does not perform security checks and allows traffic to pass through.
      shared_ptr<string> ruleType_ {};
    };

    virtual bool empty() const override { return this->clusterInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // clusterInfos Field Functions 
    bool hasClusterInfos() const { return this->clusterInfos_ != nullptr;};
    void deleteClusterInfos() { this->clusterInfos_ = nullptr;};
    inline const vector<DescribeHybridCloudClustersResponseBody::ClusterInfos> & getClusterInfos() const { DARABONBA_PTR_GET_CONST(clusterInfos_, vector<DescribeHybridCloudClustersResponseBody::ClusterInfos>) };
    inline vector<DescribeHybridCloudClustersResponseBody::ClusterInfos> getClusterInfos() { DARABONBA_PTR_GET(clusterInfos_, vector<DescribeHybridCloudClustersResponseBody::ClusterInfos>) };
    inline DescribeHybridCloudClustersResponseBody& setClusterInfos(const vector<DescribeHybridCloudClustersResponseBody::ClusterInfos> & clusterInfos) { DARABONBA_PTR_SET_VALUE(clusterInfos_, clusterInfos) };
    inline DescribeHybridCloudClustersResponseBody& setClusterInfos(vector<DescribeHybridCloudClustersResponseBody::ClusterInfos> && clusterInfos) { DARABONBA_PTR_SET_RVALUE(clusterInfos_, clusterInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of clusters.
    shared_ptr<vector<DescribeHybridCloudClustersResponseBody::ClusterInfos>> clusterInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
