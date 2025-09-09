// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYMARKETPLACEMETADATAMETERINGENTITYEXTRAINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYMARKETPLACEMETADATAMETERINGENTITYEXTRAINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos& obj) { 
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Promql, promql_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Promql, promql_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos() = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos(const GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos &) = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos(GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos &&) = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos() = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos& operator=(const GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos &) = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos& operator=(GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityId_ != nullptr
        && this->metricName_ != nullptr && this->promql_ != nullptr && this->type_ != nullptr; };
    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // promql Field Functions 
    bool hasPromql() const { return this->promql_ != nullptr;};
    void deletePromql() { this->promql_ = nullptr;};
    inline string promql() const { DARABONBA_PTR_GET_DEFAULT(promql_, "") };
    inline GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos& setPromql(string promql) { DARABONBA_PTR_SET_VALUE(promql_, promql) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the billable item.
    std::shared_ptr<string> entityId_ = nullptr;
    // The metric name.
    std::shared_ptr<string> metricName_ = nullptr;
    // The custom prometheus statement.
    std::shared_ptr<string> promql_ = nullptr;
    // The metric.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
