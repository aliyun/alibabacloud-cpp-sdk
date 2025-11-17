// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETINFORESPONSEBODYRESULTDIMENSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETINFORESPONSEBODYRESULTDIMENSIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetInfoResponseBodyResultDimensionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetInfoResponseBodyResultDimensionList& obj) { 
      DARABONBA_PTR_TO_JSON(Caption, caption_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(DimensionType, dimensionType_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(ExpressionV2, expressionV2_);
      DARABONBA_PTR_TO_JSON(FactColumn, factColumn_);
      DARABONBA_PTR_TO_JSON(FieldDescription, fieldDescription_);
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(RefUid, refUid_);
      DARABONBA_PTR_TO_JSON(TableUniqueId, tableUniqueId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetInfoResponseBodyResultDimensionList& obj) { 
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(DimensionType, dimensionType_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(ExpressionV2, expressionV2_);
      DARABONBA_PTR_FROM_JSON(FactColumn, factColumn_);
      DARABONBA_PTR_FROM_JSON(FieldDescription, fieldDescription_);
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(RefUid, refUid_);
      DARABONBA_PTR_FROM_JSON(TableUniqueId, tableUniqueId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    QueryDatasetInfoResponseBodyResultDimensionList() = default ;
    QueryDatasetInfoResponseBodyResultDimensionList(const QueryDatasetInfoResponseBodyResultDimensionList &) = default ;
    QueryDatasetInfoResponseBodyResultDimensionList(QueryDatasetInfoResponseBodyResultDimensionList &&) = default ;
    QueryDatasetInfoResponseBodyResultDimensionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetInfoResponseBodyResultDimensionList() = default ;
    QueryDatasetInfoResponseBodyResultDimensionList& operator=(const QueryDatasetInfoResponseBodyResultDimensionList &) = default ;
    QueryDatasetInfoResponseBodyResultDimensionList& operator=(QueryDatasetInfoResponseBodyResultDimensionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caption_ == nullptr
        && return this->dataType_ == nullptr && return this->dimensionType_ == nullptr && return this->expression_ == nullptr && return this->expressionV2_ == nullptr && return this->factColumn_ == nullptr
        && return this->fieldDescription_ == nullptr && return this->granularity_ == nullptr && return this->refUid_ == nullptr && return this->tableUniqueId_ == nullptr && return this->uid_ == nullptr; };
    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline string caption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
    inline QueryDatasetInfoResponseBodyResultDimensionList& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline QueryDatasetInfoResponseBodyResultDimensionList& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // dimensionType Field Functions 
    bool hasDimensionType() const { return this->dimensionType_ != nullptr;};
    void deleteDimensionType() { this->dimensionType_ = nullptr;};
    inline string dimensionType() const { DARABONBA_PTR_GET_DEFAULT(dimensionType_, "") };
    inline QueryDatasetInfoResponseBodyResultDimensionList& setDimensionType(string dimensionType) { DARABONBA_PTR_SET_VALUE(dimensionType_, dimensionType) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline QueryDatasetInfoResponseBodyResultDimensionList& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // expressionV2 Field Functions 
    bool hasExpressionV2() const { return this->expressionV2_ != nullptr;};
    void deleteExpressionV2() { this->expressionV2_ = nullptr;};
    inline string expressionV2() const { DARABONBA_PTR_GET_DEFAULT(expressionV2_, "") };
    inline QueryDatasetInfoResponseBodyResultDimensionList& setExpressionV2(string expressionV2) { DARABONBA_PTR_SET_VALUE(expressionV2_, expressionV2) };


    // factColumn Field Functions 
    bool hasFactColumn() const { return this->factColumn_ != nullptr;};
    void deleteFactColumn() { this->factColumn_ = nullptr;};
    inline string factColumn() const { DARABONBA_PTR_GET_DEFAULT(factColumn_, "") };
    inline QueryDatasetInfoResponseBodyResultDimensionList& setFactColumn(string factColumn) { DARABONBA_PTR_SET_VALUE(factColumn_, factColumn) };


    // fieldDescription Field Functions 
    bool hasFieldDescription() const { return this->fieldDescription_ != nullptr;};
    void deleteFieldDescription() { this->fieldDescription_ = nullptr;};
    inline string fieldDescription() const { DARABONBA_PTR_GET_DEFAULT(fieldDescription_, "") };
    inline QueryDatasetInfoResponseBodyResultDimensionList& setFieldDescription(string fieldDescription) { DARABONBA_PTR_SET_VALUE(fieldDescription_, fieldDescription) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string granularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline QueryDatasetInfoResponseBodyResultDimensionList& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // refUid Field Functions 
    bool hasRefUid() const { return this->refUid_ != nullptr;};
    void deleteRefUid() { this->refUid_ = nullptr;};
    inline string refUid() const { DARABONBA_PTR_GET_DEFAULT(refUid_, "") };
    inline QueryDatasetInfoResponseBodyResultDimensionList& setRefUid(string refUid) { DARABONBA_PTR_SET_VALUE(refUid_, refUid) };


    // tableUniqueId Field Functions 
    bool hasTableUniqueId() const { return this->tableUniqueId_ != nullptr;};
    void deleteTableUniqueId() { this->tableUniqueId_ = nullptr;};
    inline string tableUniqueId() const { DARABONBA_PTR_GET_DEFAULT(tableUniqueId_, "") };
    inline QueryDatasetInfoResponseBodyResultDimensionList& setTableUniqueId(string tableUniqueId) { DARABONBA_PTR_SET_VALUE(tableUniqueId_, tableUniqueId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline QueryDatasetInfoResponseBodyResultDimensionList& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The unique ID of the field that is referenced by the group measure. Non-NULL if and only if the metric is a grouping metric.
    std::shared_ptr<string> caption_ = nullptr;
    // A list of all dimensions in the dataset.
    std::shared_ptr<string> dataType_ = nullptr;
    // The actual physical field.
    std::shared_ptr<string> dimensionType_ = nullptr;
    // Data type; value:
    // 
    // *   string: character
    // *   number: a number
    // *   datetime: time
    std::shared_ptr<string> expression_ = nullptr;
    // Expression for the flattened calculation dimensions.
    std::shared_ptr<string> expressionV2_ = nullptr;
    // Expression for a calculated dimension; valid only for calculated dimensions.
    std::shared_ptr<string> factColumn_ = nullptr;
    // The description of the field.
    std::shared_ptr<string> fieldDescription_ = nullptr;
    // The type of the dimension. Valid values:
    // 
    // *   standard_dimension: General Dimension
    // *   calculate_dimension: calculating dimensions
    // *   group_dimension: grouping dimensions
    std::shared_ptr<string> granularity_ = nullptr;
    // The granularity.
    std::shared_ptr<string> refUid_ = nullptr;
    // The ARN.
    std::shared_ptr<string> tableUniqueId_ = nullptr;
    // The display name of the dimension.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
