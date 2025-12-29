// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class EdgeImprovedNodepoolQuota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EdgeImprovedNodepoolQuota& obj) { 
        DARABONBA_PTR_TO_JSON(bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(count, count_);
        DARABONBA_PTR_TO_JSON(period, period_);
      };
      friend void from_json(const Darabonba::Json& j, EdgeImprovedNodepoolQuota& obj) { 
        DARABONBA_PTR_FROM_JSON(bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(count, count_);
        DARABONBA_PTR_FROM_JSON(period, period_);
      };
      EdgeImprovedNodepoolQuota() = default ;
      EdgeImprovedNodepoolQuota(const EdgeImprovedNodepoolQuota &) = default ;
      EdgeImprovedNodepoolQuota(EdgeImprovedNodepoolQuota &&) = default ;
      EdgeImprovedNodepoolQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EdgeImprovedNodepoolQuota() = default ;
      EdgeImprovedNodepoolQuota& operator=(const EdgeImprovedNodepoolQuota &) = default ;
      EdgeImprovedNodepoolQuota& operator=(EdgeImprovedNodepoolQuota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->count_ == nullptr && this->period_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline EdgeImprovedNodepoolQuota& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline EdgeImprovedNodepoolQuota& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline EdgeImprovedNodepoolQuota& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    protected:
      // This parameter is discontinued.
      // 
      // The maximum bandwidth of each enhanced edge node pool. Unit: Mbit/s.
      shared_ptr<int32_t> bandwidth_ {};
      // This parameter is discontinued.
      // 
      // The maximum number of enhanced edge node pools that you can create within an Alibaba Cloud account.
      shared_ptr<int32_t> count_ {};
      // This parameter is discontinued.
      // 
      // The maximum subscription duration of an enhanced edge node pool. Unit: months.
      // 
      // >  You are charged for enhanced edge node pools based on the pay-as-you-go billing method. Therefore, you can ignore this parameter.
      shared_ptr<int32_t> period_ {};
    };

    virtual bool empty() const override { return this->amkClusterQuota_ == nullptr
        && this->askClusterQuota_ == nullptr && this->clusterNodepoolQuota_ == nullptr && this->clusterQuota_ == nullptr && this->edgeImprovedNodepoolQuota_ == nullptr && this->nodeQuota_ == nullptr
        && this->quotas_ == nullptr; };
    // amkClusterQuota Field Functions 
    bool hasAmkClusterQuota() const { return this->amkClusterQuota_ != nullptr;};
    void deleteAmkClusterQuota() { this->amkClusterQuota_ = nullptr;};
    inline int64_t getAmkClusterQuota() const { DARABONBA_PTR_GET_DEFAULT(amkClusterQuota_, 0L) };
    inline DescribeUserQuotaResponseBody& setAmkClusterQuota(int64_t amkClusterQuota) { DARABONBA_PTR_SET_VALUE(amkClusterQuota_, amkClusterQuota) };


    // askClusterQuota Field Functions 
    bool hasAskClusterQuota() const { return this->askClusterQuota_ != nullptr;};
    void deleteAskClusterQuota() { this->askClusterQuota_ = nullptr;};
    inline int64_t getAskClusterQuota() const { DARABONBA_PTR_GET_DEFAULT(askClusterQuota_, 0L) };
    inline DescribeUserQuotaResponseBody& setAskClusterQuota(int64_t askClusterQuota) { DARABONBA_PTR_SET_VALUE(askClusterQuota_, askClusterQuota) };


    // clusterNodepoolQuota Field Functions 
    bool hasClusterNodepoolQuota() const { return this->clusterNodepoolQuota_ != nullptr;};
    void deleteClusterNodepoolQuota() { this->clusterNodepoolQuota_ = nullptr;};
    inline int64_t getClusterNodepoolQuota() const { DARABONBA_PTR_GET_DEFAULT(clusterNodepoolQuota_, 0L) };
    inline DescribeUserQuotaResponseBody& setClusterNodepoolQuota(int64_t clusterNodepoolQuota) { DARABONBA_PTR_SET_VALUE(clusterNodepoolQuota_, clusterNodepoolQuota) };


    // clusterQuota Field Functions 
    bool hasClusterQuota() const { return this->clusterQuota_ != nullptr;};
    void deleteClusterQuota() { this->clusterQuota_ = nullptr;};
    inline int64_t getClusterQuota() const { DARABONBA_PTR_GET_DEFAULT(clusterQuota_, 0L) };
    inline DescribeUserQuotaResponseBody& setClusterQuota(int64_t clusterQuota) { DARABONBA_PTR_SET_VALUE(clusterQuota_, clusterQuota) };


    // edgeImprovedNodepoolQuota Field Functions 
    bool hasEdgeImprovedNodepoolQuota() const { return this->edgeImprovedNodepoolQuota_ != nullptr;};
    void deleteEdgeImprovedNodepoolQuota() { this->edgeImprovedNodepoolQuota_ = nullptr;};
    inline const DescribeUserQuotaResponseBody::EdgeImprovedNodepoolQuota & getEdgeImprovedNodepoolQuota() const { DARABONBA_PTR_GET_CONST(edgeImprovedNodepoolQuota_, DescribeUserQuotaResponseBody::EdgeImprovedNodepoolQuota) };
    inline DescribeUserQuotaResponseBody::EdgeImprovedNodepoolQuota getEdgeImprovedNodepoolQuota() { DARABONBA_PTR_GET(edgeImprovedNodepoolQuota_, DescribeUserQuotaResponseBody::EdgeImprovedNodepoolQuota) };
    inline DescribeUserQuotaResponseBody& setEdgeImprovedNodepoolQuota(const DescribeUserQuotaResponseBody::EdgeImprovedNodepoolQuota & edgeImprovedNodepoolQuota) { DARABONBA_PTR_SET_VALUE(edgeImprovedNodepoolQuota_, edgeImprovedNodepoolQuota) };
    inline DescribeUserQuotaResponseBody& setEdgeImprovedNodepoolQuota(DescribeUserQuotaResponseBody::EdgeImprovedNodepoolQuota && edgeImprovedNodepoolQuota) { DARABONBA_PTR_SET_RVALUE(edgeImprovedNodepoolQuota_, edgeImprovedNodepoolQuota) };


    // nodeQuota Field Functions 
    bool hasNodeQuota() const { return this->nodeQuota_ != nullptr;};
    void deleteNodeQuota() { this->nodeQuota_ = nullptr;};
    inline int64_t getNodeQuota() const { DARABONBA_PTR_GET_DEFAULT(nodeQuota_, 0L) };
    inline DescribeUserQuotaResponseBody& setNodeQuota(int64_t nodeQuota) { DARABONBA_PTR_SET_VALUE(nodeQuota_, nodeQuota) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const map<string, QuotasValue> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, map<string, QuotasValue>) };
    inline map<string, QuotasValue> getQuotas() { DARABONBA_PTR_GET(quotas_, map<string, QuotasValue>) };
    inline DescribeUserQuotaResponseBody& setQuotas(const map<string, QuotasValue> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline DescribeUserQuotaResponseBody& setQuotas(map<string, QuotasValue> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


  protected:
    // The quota of Container Service for Kubernetes (ACK) managed clusters. Default value: 20. If the default quota limit is reached, submit an application in the [Quota Center console](https://quotas.console.aliyun.com/products/csk/quotas) to increase the quota.
    shared_ptr<int64_t> amkClusterQuota_ {};
    // The quota of ACK Serverless clusters. Default value: 20. If the default quota limit is reached, submit an application in the [Quota Center console](https://quotas.console.aliyun.com/products/csk/quotas) to increase the quota.
    shared_ptr<int64_t> askClusterQuota_ {};
    // The quota of node pools in an ACK cluster. Default value: 20. If the default quota limit is reached, submit an application in the [Quota Center console](https://quotas.console.aliyun.com/products/csk/quotas) to increase the quota.
    shared_ptr<int64_t> clusterNodepoolQuota_ {};
    // The quota of clusters that belong to an Alibaba Cloud account. Default value: 50. If the default quota limit is reached, submit an application in the [Quota Center console](https://quotas.console.aliyun.com/products/csk/quotas) to increase the quota.
    shared_ptr<int64_t> clusterQuota_ {};
    // This parameter is discontinued.
    // 
    // The quotas of enhanced edge node pools.
    shared_ptr<DescribeUserQuotaResponseBody::EdgeImprovedNodepoolQuota> edgeImprovedNodepoolQuota_ {};
    // The quota of nodes in an ACK cluster. Default value: 100. If the default quota limit is reached, submit an application in the [Quota Center console](https://quotas.console.aliyun.com/products/csk/quotas) to increase the quota.
    shared_ptr<int64_t> nodeQuota_ {};
    // Information about the new quota.
    shared_ptr<map<string, QuotasValue>> quotas_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
