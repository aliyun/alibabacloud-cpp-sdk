// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEACTIVEMETRICRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEACTIVEMETRICRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DisableActiveMetricRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableActiveMetricRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableActiveMetricRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DisableActiveMetricRuleRequest() = default ;
    DisableActiveMetricRuleRequest(const DisableActiveMetricRuleRequest &) = default ;
    DisableActiveMetricRuleRequest(DisableActiveMetricRuleRequest &&) = default ;
    DisableActiveMetricRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableActiveMetricRuleRequest() = default ;
    DisableActiveMetricRuleRequest& operator=(const DisableActiveMetricRuleRequest &) = default ;
    DisableActiveMetricRuleRequest& operator=(DisableActiveMetricRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->product_ == nullptr
        && return this->regionId_ == nullptr; };
    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DisableActiveMetricRuleRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DisableActiveMetricRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cloud service for which you want to disable proactive alerting. Valid values:
    // 
    // *   ECS: Elastic Compute Service (ECS)
    // *   rds: ApsaraDB RDS
    // *   slb: Server Load Balancer (SLB)
    // *   redis_standard: Redis Open-Source Edition (standard architecture)
    // *   redis_sharding: Redis Open-Source Edition (cluster architecture)
    // *   redis_splitrw: Redis Open-Source Edition (read/write splitting architecture)
    // *   mongodb: ApsaraDB for MongoDB of the replica set architecture
    // *   mongodb_sharding: ApsaraDB for MongoDB of the sharded cluster architecture
    // *   hbase: ApsaraDB for HBase
    // *   elasticsearch: Elasticsearch
    // *   opensearch: OpenSearch
    // 
    // This parameter is required.
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
