// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABMETRICSRESPONSEBODYABMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTABMETRICSRESPONSEBODYABMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListABMetricsResponseBodyABMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListABMetricsResponseBodyABMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(ABMetricId, ABMetricId_);
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LeftMetricId, leftMetricId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Realtime, realtime_);
      DARABONBA_PTR_TO_JSON(ResultResourceId, resultResourceId_);
      DARABONBA_PTR_TO_JSON(ResultTableMetaId, resultTableMetaId_);
      DARABONBA_PTR_TO_JSON(RightMetricId, rightMetricId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(StatisticsCycle, statisticsCycle_);
      DARABONBA_PTR_TO_JSON(TableMetaId, tableMetaId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListABMetricsResponseBodyABMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(ABMetricId, ABMetricId_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LeftMetricId, leftMetricId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Realtime, realtime_);
      DARABONBA_PTR_FROM_JSON(ResultResourceId, resultResourceId_);
      DARABONBA_PTR_FROM_JSON(ResultTableMetaId, resultTableMetaId_);
      DARABONBA_PTR_FROM_JSON(RightMetricId, rightMetricId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(StatisticsCycle, statisticsCycle_);
      DARABONBA_PTR_FROM_JSON(TableMetaId, tableMetaId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListABMetricsResponseBodyABMetrics() = default ;
    ListABMetricsResponseBodyABMetrics(const ListABMetricsResponseBodyABMetrics &) = default ;
    ListABMetricsResponseBodyABMetrics(ListABMetricsResponseBodyABMetrics &&) = default ;
    ListABMetricsResponseBodyABMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListABMetricsResponseBodyABMetrics() = default ;
    ListABMetricsResponseBodyABMetrics& operator=(const ListABMetricsResponseBodyABMetrics &) = default ;
    ListABMetricsResponseBodyABMetrics& operator=(ListABMetricsResponseBodyABMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ABMetricId_ != nullptr
        && this->definition_ != nullptr && this->description_ != nullptr && this->leftMetricId_ != nullptr && this->name_ != nullptr && this->operator_ != nullptr
        && this->realtime_ != nullptr && this->resultResourceId_ != nullptr && this->resultTableMetaId_ != nullptr && this->rightMetricId_ != nullptr && this->sceneId_ != nullptr
        && this->sceneName_ != nullptr && this->statisticsCycle_ != nullptr && this->tableMetaId_ != nullptr && this->type_ != nullptr; };
    // ABMetricId Field Functions 
    bool hasABMetricId() const { return this->ABMetricId_ != nullptr;};
    void deleteABMetricId() { this->ABMetricId_ = nullptr;};
    inline string ABMetricId() const { DARABONBA_PTR_GET_DEFAULT(ABMetricId_, "") };
    inline ListABMetricsResponseBodyABMetrics& setABMetricId(string ABMetricId) { DARABONBA_PTR_SET_VALUE(ABMetricId_, ABMetricId) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline ListABMetricsResponseBodyABMetrics& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListABMetricsResponseBodyABMetrics& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // leftMetricId Field Functions 
    bool hasLeftMetricId() const { return this->leftMetricId_ != nullptr;};
    void deleteLeftMetricId() { this->leftMetricId_ = nullptr;};
    inline string leftMetricId() const { DARABONBA_PTR_GET_DEFAULT(leftMetricId_, "") };
    inline ListABMetricsResponseBodyABMetrics& setLeftMetricId(string leftMetricId) { DARABONBA_PTR_SET_VALUE(leftMetricId_, leftMetricId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListABMetricsResponseBodyABMetrics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ListABMetricsResponseBodyABMetrics& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // realtime Field Functions 
    bool hasRealtime() const { return this->realtime_ != nullptr;};
    void deleteRealtime() { this->realtime_ = nullptr;};
    inline string realtime() const { DARABONBA_PTR_GET_DEFAULT(realtime_, "") };
    inline ListABMetricsResponseBodyABMetrics& setRealtime(string realtime) { DARABONBA_PTR_SET_VALUE(realtime_, realtime) };


    // resultResourceId Field Functions 
    bool hasResultResourceId() const { return this->resultResourceId_ != nullptr;};
    void deleteResultResourceId() { this->resultResourceId_ = nullptr;};
    inline string resultResourceId() const { DARABONBA_PTR_GET_DEFAULT(resultResourceId_, "") };
    inline ListABMetricsResponseBodyABMetrics& setResultResourceId(string resultResourceId) { DARABONBA_PTR_SET_VALUE(resultResourceId_, resultResourceId) };


    // resultTableMetaId Field Functions 
    bool hasResultTableMetaId() const { return this->resultTableMetaId_ != nullptr;};
    void deleteResultTableMetaId() { this->resultTableMetaId_ = nullptr;};
    inline string resultTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(resultTableMetaId_, "") };
    inline ListABMetricsResponseBodyABMetrics& setResultTableMetaId(string resultTableMetaId) { DARABONBA_PTR_SET_VALUE(resultTableMetaId_, resultTableMetaId) };


    // rightMetricId Field Functions 
    bool hasRightMetricId() const { return this->rightMetricId_ != nullptr;};
    void deleteRightMetricId() { this->rightMetricId_ = nullptr;};
    inline string rightMetricId() const { DARABONBA_PTR_GET_DEFAULT(rightMetricId_, "") };
    inline ListABMetricsResponseBodyABMetrics& setRightMetricId(string rightMetricId) { DARABONBA_PTR_SET_VALUE(rightMetricId_, rightMetricId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline ListABMetricsResponseBodyABMetrics& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline ListABMetricsResponseBodyABMetrics& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // statisticsCycle Field Functions 
    bool hasStatisticsCycle() const { return this->statisticsCycle_ != nullptr;};
    void deleteStatisticsCycle() { this->statisticsCycle_ = nullptr;};
    inline int32_t statisticsCycle() const { DARABONBA_PTR_GET_DEFAULT(statisticsCycle_, 0) };
    inline ListABMetricsResponseBodyABMetrics& setStatisticsCycle(int32_t statisticsCycle) { DARABONBA_PTR_SET_VALUE(statisticsCycle_, statisticsCycle) };


    // tableMetaId Field Functions 
    bool hasTableMetaId() const { return this->tableMetaId_ != nullptr;};
    void deleteTableMetaId() { this->tableMetaId_ = nullptr;};
    inline string tableMetaId() const { DARABONBA_PTR_GET_DEFAULT(tableMetaId_, "") };
    inline ListABMetricsResponseBodyABMetrics& setTableMetaId(string tableMetaId) { DARABONBA_PTR_SET_VALUE(tableMetaId_, tableMetaId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListABMetricsResponseBodyABMetrics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> ABMetricId_ = nullptr;
    std::shared_ptr<string> definition_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> leftMetricId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> realtime_ = nullptr;
    std::shared_ptr<string> resultResourceId_ = nullptr;
    std::shared_ptr<string> resultTableMetaId_ = nullptr;
    std::shared_ptr<string> rightMetricId_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> sceneName_ = nullptr;
    std::shared_ptr<int32_t> statisticsCycle_ = nullptr;
    std::shared_ptr<string> tableMetaId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
