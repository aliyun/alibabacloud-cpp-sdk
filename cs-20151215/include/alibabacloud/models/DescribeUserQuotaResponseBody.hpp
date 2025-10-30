// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota.hpp>
#include <map>
#include <alibabacloud/models/QuotasValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeUserQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(amk_cluster_quota, amkClusterQuota_);
      DARABONBA_PTR_TO_JSON(ask_cluster_quota, askClusterQuota_);
      DARABONBA_PTR_TO_JSON(cluster_nodepool_quota, clusterNodepoolQuota_);
      DARABONBA_PTR_TO_JSON(cluster_quota, clusterQuota_);
      DARABONBA_PTR_TO_JSON(edge_improved_nodepool_quota, edgeImprovedNodepoolQuota_);
      DARABONBA_PTR_TO_JSON(node_quota, nodeQuota_);
      DARABONBA_PTR_TO_JSON(quotas, quotas_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(amk_cluster_quota, amkClusterQuota_);
      DARABONBA_PTR_FROM_JSON(ask_cluster_quota, askClusterQuota_);
      DARABONBA_PTR_FROM_JSON(cluster_nodepool_quota, clusterNodepoolQuota_);
      DARABONBA_PTR_FROM_JSON(cluster_quota, clusterQuota_);
      DARABONBA_PTR_FROM_JSON(edge_improved_nodepool_quota, edgeImprovedNodepoolQuota_);
      DARABONBA_PTR_FROM_JSON(node_quota, nodeQuota_);
      DARABONBA_PTR_FROM_JSON(quotas, quotas_);
    };
    DescribeUserQuotaResponseBody() = default ;
    DescribeUserQuotaResponseBody(const DescribeUserQuotaResponseBody &) = default ;
    DescribeUserQuotaResponseBody(DescribeUserQuotaResponseBody &&) = default ;
    DescribeUserQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserQuotaResponseBody() = default ;
    DescribeUserQuotaResponseBody& operator=(const DescribeUserQuotaResponseBody &) = default ;
    DescribeUserQuotaResponseBody& operator=(DescribeUserQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amkClusterQuota_ == nullptr
        && return this->askClusterQuota_ == nullptr && return this->clusterNodepoolQuota_ == nullptr && return this->clusterQuota_ == nullptr && return this->edgeImprovedNodepoolQuota_ == nullptr && return this->nodeQuota_ == nullptr
        && return this->quotas_ == nullptr; };
    // amkClusterQuota Field Functions 
    bool hasAmkClusterQuota() const { return this->amkClusterQuota_ != nullptr;};
    void deleteAmkClusterQuota() { this->amkClusterQuota_ = nullptr;};
    inline int64_t amkClusterQuota() const { DARABONBA_PTR_GET_DEFAULT(amkClusterQuota_, 0L) };
    inline DescribeUserQuotaResponseBody& setAmkClusterQuota(int64_t amkClusterQuota) { DARABONBA_PTR_SET_VALUE(amkClusterQuota_, amkClusterQuota) };


    // askClusterQuota Field Functions 
    bool hasAskClusterQuota() const { return this->askClusterQuota_ != nullptr;};
    void deleteAskClusterQuota() { this->askClusterQuota_ = nullptr;};
    inline int64_t askClusterQuota() const { DARABONBA_PTR_GET_DEFAULT(askClusterQuota_, 0L) };
    inline DescribeUserQuotaResponseBody& setAskClusterQuota(int64_t askClusterQuota) { DARABONBA_PTR_SET_VALUE(askClusterQuota_, askClusterQuota) };


    // clusterNodepoolQuota Field Functions 
    bool hasClusterNodepoolQuota() const { return this->clusterNodepoolQuota_ != nullptr;};
    void deleteClusterNodepoolQuota() { this->clusterNodepoolQuota_ = nullptr;};
    inline int64_t clusterNodepoolQuota() const { DARABONBA_PTR_GET_DEFAULT(clusterNodepoolQuota_, 0L) };
    inline DescribeUserQuotaResponseBody& setClusterNodepoolQuota(int64_t clusterNodepoolQuota) { DARABONBA_PTR_SET_VALUE(clusterNodepoolQuota_, clusterNodepoolQuota) };


    // clusterQuota Field Functions 
    bool hasClusterQuota() const { return this->clusterQuota_ != nullptr;};
    void deleteClusterQuota() { this->clusterQuota_ = nullptr;};
    inline int64_t clusterQuota() const { DARABONBA_PTR_GET_DEFAULT(clusterQuota_, 0L) };
    inline DescribeUserQuotaResponseBody& setClusterQuota(int64_t clusterQuota) { DARABONBA_PTR_SET_VALUE(clusterQuota_, clusterQuota) };


    // edgeImprovedNodepoolQuota Field Functions 
    bool hasEdgeImprovedNodepoolQuota() const { return this->edgeImprovedNodepoolQuota_ != nullptr;};
    void deleteEdgeImprovedNodepoolQuota() { this->edgeImprovedNodepoolQuota_ = nullptr;};
    inline const DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota & edgeImprovedNodepoolQuota() const { DARABONBA_PTR_GET_CONST(edgeImprovedNodepoolQuota_, DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota) };
    inline DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota edgeImprovedNodepoolQuota() { DARABONBA_PTR_GET(edgeImprovedNodepoolQuota_, DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota) };
    inline DescribeUserQuotaResponseBody& setEdgeImprovedNodepoolQuota(const DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota & edgeImprovedNodepoolQuota) { DARABONBA_PTR_SET_VALUE(edgeImprovedNodepoolQuota_, edgeImprovedNodepoolQuota) };
    inline DescribeUserQuotaResponseBody& setEdgeImprovedNodepoolQuota(DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota && edgeImprovedNodepoolQuota) { DARABONBA_PTR_SET_RVALUE(edgeImprovedNodepoolQuota_, edgeImprovedNodepoolQuota) };


    // nodeQuota Field Functions 
    bool hasNodeQuota() const { return this->nodeQuota_ != nullptr;};
    void deleteNodeQuota() { this->nodeQuota_ = nullptr;};
    inline int64_t nodeQuota() const { DARABONBA_PTR_GET_DEFAULT(nodeQuota_, 0L) };
    inline DescribeUserQuotaResponseBody& setNodeQuota(int64_t nodeQuota) { DARABONBA_PTR_SET_VALUE(nodeQuota_, nodeQuota) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const map<string, QuotasValue> & quotas() const { DARABONBA_PTR_GET_CONST(quotas_, map<string, QuotasValue>) };
    inline map<string, QuotasValue> quotas() { DARABONBA_PTR_GET(quotas_, map<string, QuotasValue>) };
    inline DescribeUserQuotaResponseBody& setQuotas(const map<string, QuotasValue> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline DescribeUserQuotaResponseBody& setQuotas(map<string, QuotasValue> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


  protected:
    // The quota of Container Service for Kubernetes (ACK) managed clusters. Default value: 20. If the default quota limit is reached, submit an application in the [Quota Center console](https://quotas.console.aliyun.com/products/csk/quotas) to increase the quota.
    std::shared_ptr<int64_t> amkClusterQuota_ = nullptr;
    // The quota of ACK Serverless clusters. Default value: 20. If the default quota limit is reached, submit an application in the [Quota Center console](https://quotas.console.aliyun.com/products/csk/quotas) to increase the quota.
    std::shared_ptr<int64_t> askClusterQuota_ = nullptr;
    // The quota of node pools in an ACK cluster. Default value: 20. If the default quota limit is reached, submit an application in the [Quota Center console](https://quotas.console.aliyun.com/products/csk/quotas) to increase the quota.
    std::shared_ptr<int64_t> clusterNodepoolQuota_ = nullptr;
    // The quota of clusters that belong to an Alibaba Cloud account. Default value: 50. If the default quota limit is reached, submit an application in the [Quota Center console](https://quotas.console.aliyun.com/products/csk/quotas) to increase the quota.
    std::shared_ptr<int64_t> clusterQuota_ = nullptr;
    // This parameter is discontinued.
    // 
    // The quotas of enhanced edge node pools.
    std::shared_ptr<DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota> edgeImprovedNodepoolQuota_ = nullptr;
    // The quota of nodes in an ACK cluster. Default value: 100. If the default quota limit is reached, submit an application in the [Quota Center console](https://quotas.console.aliyun.com/products/csk/quotas) to increase the quota.
    std::shared_ptr<int64_t> nodeQuota_ = nullptr;
    // Information about the new quota.
    std::shared_ptr<map<string, QuotasValue>> quotas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
