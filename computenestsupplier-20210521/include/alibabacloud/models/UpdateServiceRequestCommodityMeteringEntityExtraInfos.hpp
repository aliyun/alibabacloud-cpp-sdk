// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTCOMMODITYMETERINGENTITYEXTRAINFOS_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTCOMMODITYMETERINGENTITYEXTRAINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceRequestCommodityMeteringEntityExtraInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRequestCommodityMeteringEntityExtraInfos& obj) { 
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Promql, promql_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRequestCommodityMeteringEntityExtraInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Promql, promql_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateServiceRequestCommodityMeteringEntityExtraInfos() = default ;
    UpdateServiceRequestCommodityMeteringEntityExtraInfos(const UpdateServiceRequestCommodityMeteringEntityExtraInfos &) = default ;
    UpdateServiceRequestCommodityMeteringEntityExtraInfos(UpdateServiceRequestCommodityMeteringEntityExtraInfos &&) = default ;
    UpdateServiceRequestCommodityMeteringEntityExtraInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRequestCommodityMeteringEntityExtraInfos() = default ;
    UpdateServiceRequestCommodityMeteringEntityExtraInfos& operator=(const UpdateServiceRequestCommodityMeteringEntityExtraInfos &) = default ;
    UpdateServiceRequestCommodityMeteringEntityExtraInfos& operator=(UpdateServiceRequestCommodityMeteringEntityExtraInfos &&) = default ;
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
    inline UpdateServiceRequestCommodityMeteringEntityExtraInfos& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline UpdateServiceRequestCommodityMeteringEntityExtraInfos& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // promql Field Functions 
    bool hasPromql() const { return this->promql_ != nullptr;};
    void deletePromql() { this->promql_ = nullptr;};
    inline string promql() const { DARABONBA_PTR_GET_DEFAULT(promql_, "") };
    inline UpdateServiceRequestCommodityMeteringEntityExtraInfos& setPromql(string promql) { DARABONBA_PTR_SET_VALUE(promql_, promql) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateServiceRequestCommodityMeteringEntityExtraInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Metering entity ID.
    std::shared_ptr<string> entityId_ = nullptr;
    // Metric name, required when type is ComputeNestBill or ComputeNestPrometheus.
    std::shared_ptr<string> metricName_ = nullptr;
    // Promql statement.
    std::shared_ptr<string> promql_ = nullptr;
    // Type. Valid values:
    // 
    // - Custom
    // - ComputeNestBill
    // - ComputeNestPrometheus
    // - ComputeNestTime
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
