// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTABMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListABMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListABMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ABMetrics, ABMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListABMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ABMetrics, ABMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListABMetricsResponseBody() = default ;
    ListABMetricsResponseBody(const ListABMetricsResponseBody &) = default ;
    ListABMetricsResponseBody(ListABMetricsResponseBody &&) = default ;
    ListABMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListABMetricsResponseBody() = default ;
    ListABMetricsResponseBody& operator=(const ListABMetricsResponseBody &) = default ;
    ListABMetricsResponseBody& operator=(ListABMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ABMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ABMetrics& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ABMetrics& obj) { 
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
      ABMetrics() = default ;
      ABMetrics(const ABMetrics &) = default ;
      ABMetrics(ABMetrics &&) = default ;
      ABMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ABMetrics() = default ;
      ABMetrics& operator=(const ABMetrics &) = default ;
      ABMetrics& operator=(ABMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ABMetricId_ == nullptr
        && this->definition_ == nullptr && this->description_ == nullptr && this->leftMetricId_ == nullptr && this->name_ == nullptr && this->operator_ == nullptr
        && this->realtime_ == nullptr && this->resultResourceId_ == nullptr && this->resultTableMetaId_ == nullptr && this->rightMetricId_ == nullptr && this->sceneId_ == nullptr
        && this->sceneName_ == nullptr && this->statisticsCycle_ == nullptr && this->tableMetaId_ == nullptr && this->type_ == nullptr; };
      // ABMetricId Field Functions 
      bool hasABMetricId() const { return this->ABMetricId_ != nullptr;};
      void deleteABMetricId() { this->ABMetricId_ = nullptr;};
      inline string getABMetricId() const { DARABONBA_PTR_GET_DEFAULT(ABMetricId_, "") };
      inline ABMetrics& setABMetricId(string ABMetricId) { DARABONBA_PTR_SET_VALUE(ABMetricId_, ABMetricId) };


      // definition Field Functions 
      bool hasDefinition() const { return this->definition_ != nullptr;};
      void deleteDefinition() { this->definition_ = nullptr;};
      inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
      inline ABMetrics& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ABMetrics& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // leftMetricId Field Functions 
      bool hasLeftMetricId() const { return this->leftMetricId_ != nullptr;};
      void deleteLeftMetricId() { this->leftMetricId_ = nullptr;};
      inline string getLeftMetricId() const { DARABONBA_PTR_GET_DEFAULT(leftMetricId_, "") };
      inline ABMetrics& setLeftMetricId(string leftMetricId) { DARABONBA_PTR_SET_VALUE(leftMetricId_, leftMetricId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ABMetrics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline ABMetrics& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // realtime Field Functions 
      bool hasRealtime() const { return this->realtime_ != nullptr;};
      void deleteRealtime() { this->realtime_ = nullptr;};
      inline string getRealtime() const { DARABONBA_PTR_GET_DEFAULT(realtime_, "") };
      inline ABMetrics& setRealtime(string realtime) { DARABONBA_PTR_SET_VALUE(realtime_, realtime) };


      // resultResourceId Field Functions 
      bool hasResultResourceId() const { return this->resultResourceId_ != nullptr;};
      void deleteResultResourceId() { this->resultResourceId_ = nullptr;};
      inline string getResultResourceId() const { DARABONBA_PTR_GET_DEFAULT(resultResourceId_, "") };
      inline ABMetrics& setResultResourceId(string resultResourceId) { DARABONBA_PTR_SET_VALUE(resultResourceId_, resultResourceId) };


      // resultTableMetaId Field Functions 
      bool hasResultTableMetaId() const { return this->resultTableMetaId_ != nullptr;};
      void deleteResultTableMetaId() { this->resultTableMetaId_ = nullptr;};
      inline string getResultTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(resultTableMetaId_, "") };
      inline ABMetrics& setResultTableMetaId(string resultTableMetaId) { DARABONBA_PTR_SET_VALUE(resultTableMetaId_, resultTableMetaId) };


      // rightMetricId Field Functions 
      bool hasRightMetricId() const { return this->rightMetricId_ != nullptr;};
      void deleteRightMetricId() { this->rightMetricId_ = nullptr;};
      inline string getRightMetricId() const { DARABONBA_PTR_GET_DEFAULT(rightMetricId_, "") };
      inline ABMetrics& setRightMetricId(string rightMetricId) { DARABONBA_PTR_SET_VALUE(rightMetricId_, rightMetricId) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
      inline ABMetrics& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


      // sceneName Field Functions 
      bool hasSceneName() const { return this->sceneName_ != nullptr;};
      void deleteSceneName() { this->sceneName_ = nullptr;};
      inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
      inline ABMetrics& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      // statisticsCycle Field Functions 
      bool hasStatisticsCycle() const { return this->statisticsCycle_ != nullptr;};
      void deleteStatisticsCycle() { this->statisticsCycle_ = nullptr;};
      inline int32_t getStatisticsCycle() const { DARABONBA_PTR_GET_DEFAULT(statisticsCycle_, 0) };
      inline ABMetrics& setStatisticsCycle(int32_t statisticsCycle) { DARABONBA_PTR_SET_VALUE(statisticsCycle_, statisticsCycle) };


      // tableMetaId Field Functions 
      bool hasTableMetaId() const { return this->tableMetaId_ != nullptr;};
      void deleteTableMetaId() { this->tableMetaId_ = nullptr;};
      inline string getTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(tableMetaId_, "") };
      inline ABMetrics& setTableMetaId(string tableMetaId) { DARABONBA_PTR_SET_VALUE(tableMetaId_, tableMetaId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ABMetrics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> ABMetricId_ {};
      shared_ptr<string> definition_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> leftMetricId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> operator_ {};
      shared_ptr<string> realtime_ {};
      shared_ptr<string> resultResourceId_ {};
      shared_ptr<string> resultTableMetaId_ {};
      shared_ptr<string> rightMetricId_ {};
      shared_ptr<string> sceneId_ {};
      shared_ptr<string> sceneName_ {};
      shared_ptr<int32_t> statisticsCycle_ {};
      shared_ptr<string> tableMetaId_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->ABMetrics_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ABMetrics Field Functions 
    bool hasABMetrics() const { return this->ABMetrics_ != nullptr;};
    void deleteABMetrics() { this->ABMetrics_ = nullptr;};
    inline const vector<ListABMetricsResponseBody::ABMetrics> & getABMetrics() const { DARABONBA_PTR_GET_CONST(ABMetrics_, vector<ListABMetricsResponseBody::ABMetrics>) };
    inline vector<ListABMetricsResponseBody::ABMetrics> getABMetrics() { DARABONBA_PTR_GET(ABMetrics_, vector<ListABMetricsResponseBody::ABMetrics>) };
    inline ListABMetricsResponseBody& setABMetrics(const vector<ListABMetricsResponseBody::ABMetrics> & aBMetrics) { DARABONBA_PTR_SET_VALUE(ABMetrics_, aBMetrics) };
    inline ListABMetricsResponseBody& setABMetrics(vector<ListABMetricsResponseBody::ABMetrics> && aBMetrics) { DARABONBA_PTR_SET_RVALUE(ABMetrics_, aBMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListABMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListABMetricsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListABMetricsResponseBody::ABMetrics>> ABMetrics_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
