// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEABMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEABMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UpdateABMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateABMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregationByUser, aggregationByUser_);
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(Denominator, denominator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsBinomialDistribution, isBinomialDistribution_);
      DARABONBA_PTR_TO_JSON(LeftMetricId, leftMetricId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NeedSignificance, needSignificance_);
      DARABONBA_PTR_TO_JSON(Numerator, numerator_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Realtime, realtime_);
      DARABONBA_PTR_TO_JSON(ResultResourceId, resultResourceId_);
      DARABONBA_PTR_TO_JSON(RightMetricId, rightMetricId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(StatisticsCycle, statisticsCycle_);
      DARABONBA_PTR_TO_JSON(TableMetaId, tableMetaId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateABMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregationByUser, aggregationByUser_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(Denominator, denominator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsBinomialDistribution, isBinomialDistribution_);
      DARABONBA_PTR_FROM_JSON(LeftMetricId, leftMetricId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NeedSignificance, needSignificance_);
      DARABONBA_PTR_FROM_JSON(Numerator, numerator_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Realtime, realtime_);
      DARABONBA_PTR_FROM_JSON(ResultResourceId, resultResourceId_);
      DARABONBA_PTR_FROM_JSON(RightMetricId, rightMetricId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(StatisticsCycle, statisticsCycle_);
      DARABONBA_PTR_FROM_JSON(TableMetaId, tableMetaId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateABMetricRequest() = default ;
    UpdateABMetricRequest(const UpdateABMetricRequest &) = default ;
    UpdateABMetricRequest(UpdateABMetricRequest &&) = default ;
    UpdateABMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateABMetricRequest() = default ;
    UpdateABMetricRequest& operator=(const UpdateABMetricRequest &) = default ;
    UpdateABMetricRequest& operator=(UpdateABMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregationByUser_ == nullptr
        && this->definition_ == nullptr && this->denominator_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->isBinomialDistribution_ == nullptr
        && this->leftMetricId_ == nullptr && this->name_ == nullptr && this->needSignificance_ == nullptr && this->numerator_ == nullptr && this->operator_ == nullptr
        && this->realtime_ == nullptr && this->resultResourceId_ == nullptr && this->rightMetricId_ == nullptr && this->sceneId_ == nullptr && this->statisticsCycle_ == nullptr
        && this->tableMetaId_ == nullptr && this->type_ == nullptr; };
    // aggregationByUser Field Functions 
    bool hasAggregationByUser() const { return this->aggregationByUser_ != nullptr;};
    void deleteAggregationByUser() { this->aggregationByUser_ = nullptr;};
    inline bool getAggregationByUser() const { DARABONBA_PTR_GET_DEFAULT(aggregationByUser_, false) };
    inline UpdateABMetricRequest& setAggregationByUser(bool aggregationByUser) { DARABONBA_PTR_SET_VALUE(aggregationByUser_, aggregationByUser) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline UpdateABMetricRequest& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // denominator Field Functions 
    bool hasDenominator() const { return this->denominator_ != nullptr;};
    void deleteDenominator() { this->denominator_ = nullptr;};
    inline string getDenominator() const { DARABONBA_PTR_GET_DEFAULT(denominator_, "") };
    inline UpdateABMetricRequest& setDenominator(string denominator) { DARABONBA_PTR_SET_VALUE(denominator_, denominator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateABMetricRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateABMetricRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isBinomialDistribution Field Functions 
    bool hasIsBinomialDistribution() const { return this->isBinomialDistribution_ != nullptr;};
    void deleteIsBinomialDistribution() { this->isBinomialDistribution_ = nullptr;};
    inline bool getIsBinomialDistribution() const { DARABONBA_PTR_GET_DEFAULT(isBinomialDistribution_, false) };
    inline UpdateABMetricRequest& setIsBinomialDistribution(bool isBinomialDistribution) { DARABONBA_PTR_SET_VALUE(isBinomialDistribution_, isBinomialDistribution) };


    // leftMetricId Field Functions 
    bool hasLeftMetricId() const { return this->leftMetricId_ != nullptr;};
    void deleteLeftMetricId() { this->leftMetricId_ = nullptr;};
    inline string getLeftMetricId() const { DARABONBA_PTR_GET_DEFAULT(leftMetricId_, "") };
    inline UpdateABMetricRequest& setLeftMetricId(string leftMetricId) { DARABONBA_PTR_SET_VALUE(leftMetricId_, leftMetricId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateABMetricRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // needSignificance Field Functions 
    bool hasNeedSignificance() const { return this->needSignificance_ != nullptr;};
    void deleteNeedSignificance() { this->needSignificance_ = nullptr;};
    inline bool getNeedSignificance() const { DARABONBA_PTR_GET_DEFAULT(needSignificance_, false) };
    inline UpdateABMetricRequest& setNeedSignificance(bool needSignificance) { DARABONBA_PTR_SET_VALUE(needSignificance_, needSignificance) };


    // numerator Field Functions 
    bool hasNumerator() const { return this->numerator_ != nullptr;};
    void deleteNumerator() { this->numerator_ = nullptr;};
    inline string getNumerator() const { DARABONBA_PTR_GET_DEFAULT(numerator_, "") };
    inline UpdateABMetricRequest& setNumerator(string numerator) { DARABONBA_PTR_SET_VALUE(numerator_, numerator) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline UpdateABMetricRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // realtime Field Functions 
    bool hasRealtime() const { return this->realtime_ != nullptr;};
    void deleteRealtime() { this->realtime_ = nullptr;};
    inline bool getRealtime() const { DARABONBA_PTR_GET_DEFAULT(realtime_, false) };
    inline UpdateABMetricRequest& setRealtime(bool realtime) { DARABONBA_PTR_SET_VALUE(realtime_, realtime) };


    // resultResourceId Field Functions 
    bool hasResultResourceId() const { return this->resultResourceId_ != nullptr;};
    void deleteResultResourceId() { this->resultResourceId_ = nullptr;};
    inline string getResultResourceId() const { DARABONBA_PTR_GET_DEFAULT(resultResourceId_, "") };
    inline UpdateABMetricRequest& setResultResourceId(string resultResourceId) { DARABONBA_PTR_SET_VALUE(resultResourceId_, resultResourceId) };


    // rightMetricId Field Functions 
    bool hasRightMetricId() const { return this->rightMetricId_ != nullptr;};
    void deleteRightMetricId() { this->rightMetricId_ = nullptr;};
    inline string getRightMetricId() const { DARABONBA_PTR_GET_DEFAULT(rightMetricId_, "") };
    inline UpdateABMetricRequest& setRightMetricId(string rightMetricId) { DARABONBA_PTR_SET_VALUE(rightMetricId_, rightMetricId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline UpdateABMetricRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // statisticsCycle Field Functions 
    bool hasStatisticsCycle() const { return this->statisticsCycle_ != nullptr;};
    void deleteStatisticsCycle() { this->statisticsCycle_ = nullptr;};
    inline int32_t getStatisticsCycle() const { DARABONBA_PTR_GET_DEFAULT(statisticsCycle_, 0) };
    inline UpdateABMetricRequest& setStatisticsCycle(int32_t statisticsCycle) { DARABONBA_PTR_SET_VALUE(statisticsCycle_, statisticsCycle) };


    // tableMetaId Field Functions 
    bool hasTableMetaId() const { return this->tableMetaId_ != nullptr;};
    void deleteTableMetaId() { this->tableMetaId_ = nullptr;};
    inline string getTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(tableMetaId_, "") };
    inline UpdateABMetricRequest& setTableMetaId(string tableMetaId) { DARABONBA_PTR_SET_VALUE(tableMetaId_, tableMetaId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateABMetricRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to aggregate by user dimension when calculating significance. Two aggregation methods are supported: by user and by sample.
    shared_ptr<bool> aggregationByUser_ {};
    // The metric definition.
    // 
    // This parameter is required.
    shared_ptr<string> definition_ {};
    // The denominator used in significance calculation.
    shared_ptr<string> denominator_ {};
    // The metric description.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The instance ID. You can obtain it by calling the [ListInstances](https://help.aliyun.com/document_detail/2411819.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies whether the current metric follows a binomial distribution when the metric type is a derived metric. If set to true, the mean and variance of the metric are calculated based on the binomial distribution.
    shared_ptr<bool> isBinomialDistribution_ {};
    // The left metric ID of the derived metric.
    shared_ptr<string> leftMetricId_ {};
    // The metric name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // Specifies whether to calculate significance.
    shared_ptr<bool> needSignificance_ {};
    // The numerator used in significance calculation.
    shared_ptr<string> numerator_ {};
    // The operator for derived metric calculation. Valid values:
    // 
    // - Plus: addition
    // 
    // - Minus: subtraction
    // 
    // - Multiplication: multiplication
    // 
    // - Division: division
    shared_ptr<string> operator_ {};
    // Specifies whether the metric is a real-time metric. Valid values:
    // 
    // - true
    // 
    // - false
    // 
    // This parameter is required.
    shared_ptr<bool> realtime_ {};
    // The ID of the data source for the write-back data table. You can obtain it by calling the ListInstanceResources operation.
    shared_ptr<string> resultResourceId_ {};
    // The right metric ID of the derived metric.
    shared_ptr<string> rightMetricId_ {};
    // The scene ID. You can obtain it by calling the [ListScenes](https://help.aliyun.com/document_detail/2402581.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> sceneId_ {};
    // The statistical period.
    shared_ptr<int32_t> statisticsCycle_ {};
    // The data table ID. You can obtain it by calling the ListTableMetas operation.
    // 
    // This parameter is required.
    shared_ptr<string> tableMetaId_ {};
    // The metric type. Valid values:
    // 
    // - Single: single metric.
    // 
    // - Derived: derived metric.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
