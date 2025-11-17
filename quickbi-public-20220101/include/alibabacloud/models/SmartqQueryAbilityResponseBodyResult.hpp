// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMARTQQUERYABILITYRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_SMARTQQUERYABILITYRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SmartqQueryAbilityResponseBodyResultMetaType.hpp>
#include <alibabacloud/models/SmartqQueryAbilityResponseBodyResultValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class SmartqQueryAbilityResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmartqQueryAbilityResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ChartType, chartType_);
      DARABONBA_PTR_TO_JSON(ConclusionText, conclusionText_);
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(LogicSql, logicSql_);
      DARABONBA_PTR_TO_JSON(MetaType, metaType_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, SmartqQueryAbilityResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ChartType, chartType_);
      DARABONBA_PTR_FROM_JSON(ConclusionText, conclusionText_);
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(LogicSql, logicSql_);
      DARABONBA_PTR_FROM_JSON(MetaType, metaType_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    SmartqQueryAbilityResponseBodyResult() = default ;
    SmartqQueryAbilityResponseBodyResult(const SmartqQueryAbilityResponseBodyResult &) = default ;
    SmartqQueryAbilityResponseBodyResult(SmartqQueryAbilityResponseBodyResult &&) = default ;
    SmartqQueryAbilityResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmartqQueryAbilityResponseBodyResult() = default ;
    SmartqQueryAbilityResponseBodyResult& operator=(const SmartqQueryAbilityResponseBodyResult &) = default ;
    SmartqQueryAbilityResponseBodyResult& operator=(SmartqQueryAbilityResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chartType_ == nullptr
        && return this->conclusionText_ == nullptr && return this->dataList_ == nullptr && return this->logicSql_ == nullptr && return this->metaType_ == nullptr && return this->values_ == nullptr; };
    // chartType Field Functions 
    bool hasChartType() const { return this->chartType_ != nullptr;};
    void deleteChartType() { this->chartType_ = nullptr;};
    inline string chartType() const { DARABONBA_PTR_GET_DEFAULT(chartType_, "") };
    inline SmartqQueryAbilityResponseBodyResult& setChartType(string chartType) { DARABONBA_PTR_SET_VALUE(chartType_, chartType) };


    // conclusionText Field Functions 
    bool hasConclusionText() const { return this->conclusionText_ != nullptr;};
    void deleteConclusionText() { this->conclusionText_ = nullptr;};
    inline string conclusionText() const { DARABONBA_PTR_GET_DEFAULT(conclusionText_, "") };
    inline SmartqQueryAbilityResponseBodyResult& setConclusionText(string conclusionText) { DARABONBA_PTR_SET_VALUE(conclusionText_, conclusionText) };


    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<string> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<string>) };
    inline vector<string> dataList() { DARABONBA_PTR_GET(dataList_, vector<string>) };
    inline SmartqQueryAbilityResponseBodyResult& setDataList(const vector<string> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline SmartqQueryAbilityResponseBodyResult& setDataList(vector<string> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // logicSql Field Functions 
    bool hasLogicSql() const { return this->logicSql_ != nullptr;};
    void deleteLogicSql() { this->logicSql_ = nullptr;};
    inline string logicSql() const { DARABONBA_PTR_GET_DEFAULT(logicSql_, "") };
    inline SmartqQueryAbilityResponseBodyResult& setLogicSql(string logicSql) { DARABONBA_PTR_SET_VALUE(logicSql_, logicSql) };


    // metaType Field Functions 
    bool hasMetaType() const { return this->metaType_ != nullptr;};
    void deleteMetaType() { this->metaType_ = nullptr;};
    inline const vector<Models::SmartqQueryAbilityResponseBodyResultMetaType> & metaType() const { DARABONBA_PTR_GET_CONST(metaType_, vector<Models::SmartqQueryAbilityResponseBodyResultMetaType>) };
    inline vector<Models::SmartqQueryAbilityResponseBodyResultMetaType> metaType() { DARABONBA_PTR_GET(metaType_, vector<Models::SmartqQueryAbilityResponseBodyResultMetaType>) };
    inline SmartqQueryAbilityResponseBodyResult& setMetaType(const vector<Models::SmartqQueryAbilityResponseBodyResultMetaType> & metaType) { DARABONBA_PTR_SET_VALUE(metaType_, metaType) };
    inline SmartqQueryAbilityResponseBodyResult& setMetaType(vector<Models::SmartqQueryAbilityResponseBodyResultMetaType> && metaType) { DARABONBA_PTR_SET_RVALUE(metaType_, metaType) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::SmartqQueryAbilityResponseBodyResultValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::SmartqQueryAbilityResponseBodyResultValues>) };
    inline vector<Models::SmartqQueryAbilityResponseBodyResultValues> values() { DARABONBA_PTR_GET(values_, vector<Models::SmartqQueryAbilityResponseBodyResultValues>) };
    inline SmartqQueryAbilityResponseBodyResult& setValues(const vector<Models::SmartqQueryAbilityResponseBodyResultValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline SmartqQueryAbilityResponseBodyResult& setValues(vector<Models::SmartqQueryAbilityResponseBodyResultValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // Suggested chart type.
    std::shared_ptr<string> chartType_ = nullptr;
    // Summary information.
    std::shared_ptr<string> conclusionText_ = nullptr;
    std::shared_ptr<vector<string>> dataList_ = nullptr;
    // Visualized logical SQL.
    std::shared_ptr<string> logicSql_ = nullptr;
    // List of column tuple types.
    std::shared_ptr<vector<Models::SmartqQueryAbilityResponseBodyResultMetaType>> metaType_ = nullptr;
    // Array of data value lists.
    std::shared_ptr<vector<Models::SmartqQueryAbilityResponseBodyResultValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
