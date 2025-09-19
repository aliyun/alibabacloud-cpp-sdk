// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODYRESULTOBJECTQUERYVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODYRESULTOBJECTQUERYVARIABLES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold.hpp>
#include <alibabacloud/models/DescribeEventVariableListResponseBodyResultObjectQueryVariablesVariableVelocity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventVariableListResponseBodyResultObjectQueryVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableListResponseBodyResultObjectQueryVariables& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(dataDisplay, dataDisplay_);
      DARABONBA_PTR_TO_JSON(defineId, defineId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayType, displayType_);
      DARABONBA_PTR_TO_JSON(expressionTitle, expressionTitle_);
      DARABONBA_PTR_TO_JSON(favoriteFlag, favoriteFlag_);
      DARABONBA_PTR_TO_JSON(fieldDetail, fieldDetail_);
      DARABONBA_PTR_TO_JSON(fieldRank, fieldRank_);
      DARABONBA_PTR_TO_JSON(fieldSource, fieldSource_);
      DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(inputFieldType, inputFieldType_);
      DARABONBA_PTR_TO_JSON(inputRequired, inputRequired_);
      DARABONBA_PTR_TO_JSON(inputs, inputs_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(outlier, outlier_);
      DARABONBA_PTR_TO_JSON(outputThreshold, outputThreshold_);
      DARABONBA_PTR_TO_JSON(parentName, parentName_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(variableVelocity, variableVelocity_);
      DARABONBA_PTR_TO_JSON(xLabel, xLabel_);
      DARABONBA_PTR_TO_JSON(yLabel, yLabel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableListResponseBodyResultObjectQueryVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(dataDisplay, dataDisplay_);
      DARABONBA_PTR_FROM_JSON(defineId, defineId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayType, displayType_);
      DARABONBA_PTR_FROM_JSON(expressionTitle, expressionTitle_);
      DARABONBA_PTR_FROM_JSON(favoriteFlag, favoriteFlag_);
      DARABONBA_PTR_FROM_JSON(fieldDetail, fieldDetail_);
      DARABONBA_PTR_FROM_JSON(fieldRank, fieldRank_);
      DARABONBA_PTR_FROM_JSON(fieldSource, fieldSource_);
      DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(inputFieldType, inputFieldType_);
      DARABONBA_PTR_FROM_JSON(inputRequired, inputRequired_);
      DARABONBA_PTR_FROM_JSON(inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(outlier, outlier_);
      DARABONBA_PTR_FROM_JSON(outputThreshold, outputThreshold_);
      DARABONBA_PTR_FROM_JSON(parentName, parentName_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(variableVelocity, variableVelocity_);
      DARABONBA_PTR_FROM_JSON(xLabel, xLabel_);
      DARABONBA_PTR_FROM_JSON(yLabel, yLabel_);
    };
    DescribeEventVariableListResponseBodyResultObjectQueryVariables() = default ;
    DescribeEventVariableListResponseBodyResultObjectQueryVariables(const DescribeEventVariableListResponseBodyResultObjectQueryVariables &) = default ;
    DescribeEventVariableListResponseBodyResultObjectQueryVariables(DescribeEventVariableListResponseBodyResultObjectQueryVariables &&) = default ;
    DescribeEventVariableListResponseBodyResultObjectQueryVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableListResponseBodyResultObjectQueryVariables() = default ;
    DescribeEventVariableListResponseBodyResultObjectQueryVariables& operator=(const DescribeEventVariableListResponseBodyResultObjectQueryVariables &) = default ;
    DescribeEventVariableListResponseBodyResultObjectQueryVariables& operator=(DescribeEventVariableListResponseBodyResultObjectQueryVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->dataDisplay_ != nullptr && this->defineId_ != nullptr && this->description_ != nullptr && this->displayType_ != nullptr && this->expressionTitle_ != nullptr
        && this->favoriteFlag_ != nullptr && this->fieldDetail_ != nullptr && this->fieldRank_ != nullptr && this->fieldSource_ != nullptr && this->fieldType_ != nullptr
        && this->id_ != nullptr && this->inputFieldType_ != nullptr && this->inputRequired_ != nullptr && this->inputs_ != nullptr && this->name_ != nullptr
        && this->outlier_ != nullptr && this->outputThreshold_ != nullptr && this->parentName_ != nullptr && this->sourceType_ != nullptr && this->title_ != nullptr
        && this->type_ != nullptr && this->variableVelocity_ != nullptr && this->xLabel_ != nullptr && this->yLabel_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataDisplay Field Functions 
    bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
    void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
    inline string dataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


    // defineId Field Functions 
    bool hasDefineId() const { return this->defineId_ != nullptr;};
    void deleteDefineId() { this->defineId_ = nullptr;};
    inline string defineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayType Field Functions 
    bool hasDisplayType() const { return this->displayType_ != nullptr;};
    void deleteDisplayType() { this->displayType_ = nullptr;};
    inline string displayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


    // expressionTitle Field Functions 
    bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
    void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
    inline string expressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


    // favoriteFlag Field Functions 
    bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
    void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
    inline bool favoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


    // fieldDetail Field Functions 
    bool hasFieldDetail() const { return this->fieldDetail_ != nullptr;};
    void deleteFieldDetail() { this->fieldDetail_ = nullptr;};
    inline string fieldDetail() const { DARABONBA_PTR_GET_DEFAULT(fieldDetail_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setFieldDetail(string fieldDetail) { DARABONBA_PTR_SET_VALUE(fieldDetail_, fieldDetail) };


    // fieldRank Field Functions 
    bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
    void deleteFieldRank() { this->fieldRank_ = nullptr;};
    inline int32_t fieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


    // fieldSource Field Functions 
    bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
    void deleteFieldSource() { this->fieldSource_ = nullptr;};
    inline string fieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputFieldType Field Functions 
    bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
    void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
    inline string inputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


    // inputRequired Field Functions 
    bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
    void deleteInputRequired() { this->inputRequired_ = nullptr;};
    inline string inputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline string inputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outlier Field Functions 
    bool hasOutlier() const { return this->outlier_ != nullptr;};
    void deleteOutlier() { this->outlier_ = nullptr;};
    inline string outlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


    // outputThreshold Field Functions 
    bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
    void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
    inline const Models::DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold & outputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, Models::DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold) };
    inline Models::DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold outputThreshold() { DARABONBA_PTR_GET(outputThreshold_, Models::DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold) };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setOutputThreshold(const Models::DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setOutputThreshold(Models::DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


    // parentName Field Functions 
    bool hasParentName() const { return this->parentName_ != nullptr;};
    void deleteParentName() { this->parentName_ = nullptr;};
    inline string parentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // variableVelocity Field Functions 
    bool hasVariableVelocity() const { return this->variableVelocity_ != nullptr;};
    void deleteVariableVelocity() { this->variableVelocity_ = nullptr;};
    inline const Models::DescribeEventVariableListResponseBodyResultObjectQueryVariablesVariableVelocity & variableVelocity() const { DARABONBA_PTR_GET_CONST(variableVelocity_, Models::DescribeEventVariableListResponseBodyResultObjectQueryVariablesVariableVelocity) };
    inline Models::DescribeEventVariableListResponseBodyResultObjectQueryVariablesVariableVelocity variableVelocity() { DARABONBA_PTR_GET(variableVelocity_, Models::DescribeEventVariableListResponseBodyResultObjectQueryVariablesVariableVelocity) };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setVariableVelocity(const Models::DescribeEventVariableListResponseBodyResultObjectQueryVariablesVariableVelocity & variableVelocity) { DARABONBA_PTR_SET_VALUE(variableVelocity_, variableVelocity) };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setVariableVelocity(Models::DescribeEventVariableListResponseBodyResultObjectQueryVariablesVariableVelocity && variableVelocity) { DARABONBA_PTR_SET_RVALUE(variableVelocity_, variableVelocity) };


    // xLabel Field Functions 
    bool hasXLabel() const { return this->xLabel_ != nullptr;};
    void deleteXLabel() { this->xLabel_ = nullptr;};
    inline string xLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


    // yLabel Field Functions 
    bool hasYLabel() const { return this->yLabel_ != nullptr;};
    void deleteYLabel() { this->yLabel_ = nullptr;};
    inline string yLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariables& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


  protected:
    // The code of the query variable.
    std::shared_ptr<string> code_ = nullptr;
    // Data distribution display, in JSON format. This field is not returned for this type of variable.
    std::shared_ptr<string> dataDisplay_ = nullptr;
    // The definition ID of the query variable. This field is not returned for this type of variable.
    std::shared_ptr<string> defineId_ = nullptr;
    // The description of the query variable.
    std::shared_ptr<string> description_ = nullptr;
    // The display type and grouping label.
    std::shared_ptr<string> displayType_ = nullptr;
    // The display value of the calculation expression. This field is not returned for this type of variable.
    std::shared_ptr<string> expressionTitle_ = nullptr;
    // The favorite flag.
    std::shared_ptr<bool> favoriteFlag_ = nullptr;
    // The detailed information of the field in the field pool. This field is not returned for this type of variable.
    std::shared_ptr<string> fieldDetail_ = nullptr;
    // The field rank.
    std::shared_ptr<int32_t> fieldRank_ = nullptr;
    // The source of the field. This field is not returned for this type of variable.
    std::shared_ptr<string> fieldSource_ = nullptr;
    // The type of the field.
    std::shared_ptr<string> fieldType_ = nullptr;
    // The primary key ID of the query variable.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The input type of the parameter. This field is not returned for this type of variable.
    std::shared_ptr<string> inputFieldType_ = nullptr;
    // The required parameter. This field is not returned for this type of variable.
    std::shared_ptr<string> inputRequired_ = nullptr;
    // Multiple input parameters separated by commas. This field is not returned for this type of variable.
    std::shared_ptr<string> inputs_ = nullptr;
    // The name of the query variable.
    std::shared_ptr<string> name_ = nullptr;
    // The outlier value.
    std::shared_ptr<string> outlier_ = nullptr;
    // The output value threshold.
    std::shared_ptr<Models::DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold> outputThreshold_ = nullptr;
    // The parent node. This field is not returned for this type of variable.
    std::shared_ptr<string> parentName_ = nullptr;
    // The source type.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The title of the query variable. The title of the query variable.
    std::shared_ptr<string> title_ = nullptr;
    // The type of the query variable.
    std::shared_ptr<string> type_ = nullptr;
    // The variable metric information. This field is not returned for this type of variable.
    std::shared_ptr<Models::DescribeEventVariableListResponseBodyResultObjectQueryVariablesVariableVelocity> variableVelocity_ = nullptr;
    // The X label. This field is not returned for this type of variable.
    std::shared_ptr<string> xLabel_ = nullptr;
    // The Y label. This field is not returned for this type of variable.
    std::shared_ptr<string> yLabel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
