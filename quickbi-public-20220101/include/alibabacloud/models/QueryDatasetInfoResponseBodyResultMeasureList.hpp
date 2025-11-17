// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETINFORESPONSEBODYRESULTMEASURELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETINFORESPONSEBODYRESULTMEASURELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetInfoResponseBodyResultMeasureList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetInfoResponseBodyResultMeasureList& obj) { 
      DARABONBA_PTR_TO_JSON(Caption, caption_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(ExpressionV2, expressionV2_);
      DARABONBA_PTR_TO_JSON(FactColumn, factColumn_);
      DARABONBA_PTR_TO_JSON(FieldDescription, fieldDescription_);
      DARABONBA_PTR_TO_JSON(MeasureType, measureType_);
      DARABONBA_PTR_TO_JSON(TableUniqueId, tableUniqueId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetInfoResponseBodyResultMeasureList& obj) { 
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(ExpressionV2, expressionV2_);
      DARABONBA_PTR_FROM_JSON(FactColumn, factColumn_);
      DARABONBA_PTR_FROM_JSON(FieldDescription, fieldDescription_);
      DARABONBA_PTR_FROM_JSON(MeasureType, measureType_);
      DARABONBA_PTR_FROM_JSON(TableUniqueId, tableUniqueId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    QueryDatasetInfoResponseBodyResultMeasureList() = default ;
    QueryDatasetInfoResponseBodyResultMeasureList(const QueryDatasetInfoResponseBodyResultMeasureList &) = default ;
    QueryDatasetInfoResponseBodyResultMeasureList(QueryDatasetInfoResponseBodyResultMeasureList &&) = default ;
    QueryDatasetInfoResponseBodyResultMeasureList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetInfoResponseBodyResultMeasureList() = default ;
    QueryDatasetInfoResponseBodyResultMeasureList& operator=(const QueryDatasetInfoResponseBodyResultMeasureList &) = default ;
    QueryDatasetInfoResponseBodyResultMeasureList& operator=(QueryDatasetInfoResponseBodyResultMeasureList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caption_ == nullptr
        && return this->dataType_ == nullptr && return this->expression_ == nullptr && return this->expressionV2_ == nullptr && return this->factColumn_ == nullptr && return this->fieldDescription_ == nullptr
        && return this->measureType_ == nullptr && return this->tableUniqueId_ == nullptr && return this->uid_ == nullptr; };
    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline string caption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
    inline QueryDatasetInfoResponseBodyResultMeasureList& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline QueryDatasetInfoResponseBodyResultMeasureList& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline QueryDatasetInfoResponseBodyResultMeasureList& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // expressionV2 Field Functions 
    bool hasExpressionV2() const { return this->expressionV2_ != nullptr;};
    void deleteExpressionV2() { this->expressionV2_ = nullptr;};
    inline string expressionV2() const { DARABONBA_PTR_GET_DEFAULT(expressionV2_, "") };
    inline QueryDatasetInfoResponseBodyResultMeasureList& setExpressionV2(string expressionV2) { DARABONBA_PTR_SET_VALUE(expressionV2_, expressionV2) };


    // factColumn Field Functions 
    bool hasFactColumn() const { return this->factColumn_ != nullptr;};
    void deleteFactColumn() { this->factColumn_ = nullptr;};
    inline string factColumn() const { DARABONBA_PTR_GET_DEFAULT(factColumn_, "") };
    inline QueryDatasetInfoResponseBodyResultMeasureList& setFactColumn(string factColumn) { DARABONBA_PTR_SET_VALUE(factColumn_, factColumn) };


    // fieldDescription Field Functions 
    bool hasFieldDescription() const { return this->fieldDescription_ != nullptr;};
    void deleteFieldDescription() { this->fieldDescription_ = nullptr;};
    inline string fieldDescription() const { DARABONBA_PTR_GET_DEFAULT(fieldDescription_, "") };
    inline QueryDatasetInfoResponseBodyResultMeasureList& setFieldDescription(string fieldDescription) { DARABONBA_PTR_SET_VALUE(fieldDescription_, fieldDescription) };


    // measureType Field Functions 
    bool hasMeasureType() const { return this->measureType_ != nullptr;};
    void deleteMeasureType() { this->measureType_ = nullptr;};
    inline string measureType() const { DARABONBA_PTR_GET_DEFAULT(measureType_, "") };
    inline QueryDatasetInfoResponseBodyResultMeasureList& setMeasureType(string measureType) { DARABONBA_PTR_SET_VALUE(measureType_, measureType) };


    // tableUniqueId Field Functions 
    bool hasTableUniqueId() const { return this->tableUniqueId_ != nullptr;};
    void deleteTableUniqueId() { this->tableUniqueId_ = nullptr;};
    inline string tableUniqueId() const { DARABONBA_PTR_GET_DEFAULT(tableUniqueId_, "") };
    inline QueryDatasetInfoResponseBodyResultMeasureList& setTableUniqueId(string tableUniqueId) { DARABONBA_PTR_SET_VALUE(tableUniqueId_, tableUniqueId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline QueryDatasetInfoResponseBodyResultMeasureList& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The actual physical field.
    std::shared_ptr<string> caption_ = nullptr;
    // A list of all measures for the dataset.
    std::shared_ptr<string> dataType_ = nullptr;
    // Data type; value:
    // 
    // *   string: character
    // *   number: a number
    // *   datetime: time
    std::shared_ptr<string> expression_ = nullptr;
    // Expression for flattened computation metrics.
    std::shared_ptr<string> expressionV2_ = nullptr;
    // The type of the measure. Valid values:
    // 
    // *   standard_measure: General Metrics
    // *   calculate_measure: Calculating Measures
    std::shared_ptr<string> factColumn_ = nullptr;
    // The description of the field.
    std::shared_ptr<string> fieldDescription_ = nullptr;
    // An expression that calculates a measure; valid only for calculated measures.
    std::shared_ptr<string> measureType_ = nullptr;
    // The display name of the metric.
    std::shared_ptr<string> tableUniqueId_ = nullptr;
    // The unique ID of the table to which the table belongs, which corresponds to the UniqueId of the CubeTypeList.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
