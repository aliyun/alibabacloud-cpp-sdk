// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEACTIVEMETRICRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEACTIVEMETRICRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class EnableActiveMetricRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableActiveMetricRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableActiveMetricRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    EnableActiveMetricRuleRequest() = default ;
    EnableActiveMetricRuleRequest(const EnableActiveMetricRuleRequest &) = default ;
    EnableActiveMetricRuleRequest(EnableActiveMetricRuleRequest &&) = default ;
    EnableActiveMetricRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableActiveMetricRuleRequest() = default ;
    EnableActiveMetricRuleRequest& operator=(const EnableActiveMetricRuleRequest &) = default ;
    EnableActiveMetricRuleRequest& operator=(EnableActiveMetricRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->product_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline EnableActiveMetricRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline EnableActiveMetricRuleRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline EnableActiveMetricRuleRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableActiveMetricRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the value of this parameter on the client side. Make sure that the value is unique across different requests. The value can be up to 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to check the availability of the webhook.
    shared_ptr<bool> dryRun_ {};
    // The name of the Alibaba Cloud service that supports one-click alert rules. Valid values:
    // 
    // * ecs: Elastic Compute Service (ECS).
    // * rds: ApsaraDB RDS.
    // * slb: Server Load Balancer (SLB).
    // * redis_standard: Standard architecture of open-source Redis.
    // * redis_sharding: Cluster architecture of open-source Redis.
    // * redis_splitrw: Read/write splitting architecture of open-source Redis.
    // * mongodb: ApsaraDB for MongoDB (replica set).
    // * mongodb_sharding: ApsaraDB for MongoDB (sharded cluster).
    // * hbase: ApsaraDB for HBase.
    // * elasticsearch: Elasticsearch.
    // * opensearch: OpenSearch.
    // 
    // This parameter is required.
    shared_ptr<string> product_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
