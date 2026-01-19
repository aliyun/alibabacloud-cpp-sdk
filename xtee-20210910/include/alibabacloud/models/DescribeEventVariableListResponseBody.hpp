// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventVariableListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeEventVariableListResponseBody() = default ;
    DescribeEventVariableListResponseBody(const DescribeEventVariableListResponseBody &) = default ;
    DescribeEventVariableListResponseBody(DescribeEventVariableListResponseBody &&) = default ;
    DescribeEventVariableListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableListResponseBody() = default ;
    DescribeEventVariableListResponseBody& operator=(const DescribeEventVariableListResponseBody &) = default ;
    DescribeEventVariableListResponseBody& operator=(DescribeEventVariableListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(actions, actions_);
        DARABONBA_PTR_TO_JSON(deviceVariables, deviceVariables_);
        DARABONBA_PTR_TO_JSON(expressionVariables, expressionVariables_);
        DARABONBA_PTR_TO_JSON(favoriteVariables, favoriteVariables_);
        DARABONBA_PTR_TO_JSON(middleVariables, middleVariables_);
        DARABONBA_PTR_TO_JSON(modelVariables, modelVariables_);
        DARABONBA_PTR_TO_JSON(nameList, nameList_);
        DARABONBA_PTR_TO_JSON(nativeVariableFunctions, nativeVariableFunctions_);
        DARABONBA_PTR_TO_JSON(nativeVariables, nativeVariables_);
        DARABONBA_PTR_TO_JSON(queryVariables, queryVariables_);
        DARABONBA_PTR_TO_JSON(selfVariables, selfVariables_);
        DARABONBA_PTR_TO_JSON(sysVariables, sysVariables_);
        DARABONBA_ANY_TO_JSON(thirdVariables, thirdVariables_);
        DARABONBA_PTR_TO_JSON(velocityVariables, velocityVariables_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(actions, actions_);
        DARABONBA_PTR_FROM_JSON(deviceVariables, deviceVariables_);
        DARABONBA_PTR_FROM_JSON(expressionVariables, expressionVariables_);
        DARABONBA_PTR_FROM_JSON(favoriteVariables, favoriteVariables_);
        DARABONBA_PTR_FROM_JSON(middleVariables, middleVariables_);
        DARABONBA_PTR_FROM_JSON(modelVariables, modelVariables_);
        DARABONBA_PTR_FROM_JSON(nameList, nameList_);
        DARABONBA_PTR_FROM_JSON(nativeVariableFunctions, nativeVariableFunctions_);
        DARABONBA_PTR_FROM_JSON(nativeVariables, nativeVariables_);
        DARABONBA_PTR_FROM_JSON(queryVariables, queryVariables_);
        DARABONBA_PTR_FROM_JSON(selfVariables, selfVariables_);
        DARABONBA_PTR_FROM_JSON(sysVariables, sysVariables_);
        DARABONBA_ANY_FROM_JSON(thirdVariables, thirdVariables_);
        DARABONBA_PTR_FROM_JSON(velocityVariables, velocityVariables_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VelocityVariables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VelocityVariables& obj) { 
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
        friend void from_json(const Darabonba::Json& j, VelocityVariables& obj) { 
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
        VelocityVariables() = default ;
        VelocityVariables(const VelocityVariables &) = default ;
        VelocityVariables(VelocityVariables &&) = default ;
        VelocityVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VelocityVariables() = default ;
        VelocityVariables& operator=(const VelocityVariables &) = default ;
        VelocityVariables& operator=(VelocityVariables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VariableVelocity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VariableVelocity& obj) { 
            DARABONBA_PTR_TO_JSON(iv, iv_);
          };
          friend void from_json(const Darabonba::Json& j, VariableVelocity& obj) { 
            DARABONBA_PTR_FROM_JSON(iv, iv_);
          };
          VariableVelocity() = default ;
          VariableVelocity(const VariableVelocity &) = default ;
          VariableVelocity(VariableVelocity &&) = default ;
          VariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VariableVelocity() = default ;
          VariableVelocity& operator=(const VariableVelocity &) = default ;
          VariableVelocity& operator=(VariableVelocity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->iv_ == nullptr; };
          // iv Field Functions 
          bool hasIv() const { return this->iv_ != nullptr;};
          void deleteIv() { this->iv_ = nullptr;};
          inline string getIv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
          inline VariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


        protected:
          // The IV value. This field is not returned for this type of variable.
          shared_ptr<string> iv_ {};
        };

        class OutputThreshold : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputThreshold& obj) { 
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
          };
          friend void from_json(const Darabonba::Json& j, OutputThreshold& obj) { 
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
          };
          OutputThreshold() = default ;
          OutputThreshold(const OutputThreshold &) = default ;
          OutputThreshold(OutputThreshold &&) = default ;
          OutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputThreshold() = default ;
          OutputThreshold& operator=(const OutputThreshold &) = default ;
          OutputThreshold& operator=(OutputThreshold &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr; };
          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
          inline OutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
          inline OutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        protected:
          // The maximum value.
          shared_ptr<double> maxValue_ {};
          // The minimum value.
          shared_ptr<double> minValue_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataDisplay_ == nullptr && this->defineId_ == nullptr && this->description_ == nullptr && this->displayType_ == nullptr && this->expressionTitle_ == nullptr
        && this->favoriteFlag_ == nullptr && this->fieldDetail_ == nullptr && this->fieldRank_ == nullptr && this->fieldSource_ == nullptr && this->fieldType_ == nullptr
        && this->id_ == nullptr && this->inputFieldType_ == nullptr && this->inputRequired_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr
        && this->outlier_ == nullptr && this->outputThreshold_ == nullptr && this->parentName_ == nullptr && this->sourceType_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr && this->variableVelocity_ == nullptr && this->xLabel_ == nullptr && this->yLabel_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline VelocityVariables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataDisplay Field Functions 
        bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
        void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
        inline string getDataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
        inline VelocityVariables& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


        // defineId Field Functions 
        bool hasDefineId() const { return this->defineId_ != nullptr;};
        void deleteDefineId() { this->defineId_ = nullptr;};
        inline string getDefineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
        inline VelocityVariables& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline VelocityVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayType Field Functions 
        bool hasDisplayType() const { return this->displayType_ != nullptr;};
        void deleteDisplayType() { this->displayType_ = nullptr;};
        inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
        inline VelocityVariables& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


        // expressionTitle Field Functions 
        bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
        void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
        inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
        inline VelocityVariables& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


        // favoriteFlag Field Functions 
        bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
        void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
        inline bool getFavoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
        inline VelocityVariables& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


        // fieldDetail Field Functions 
        bool hasFieldDetail() const { return this->fieldDetail_ != nullptr;};
        void deleteFieldDetail() { this->fieldDetail_ = nullptr;};
        inline string getFieldDetail() const { DARABONBA_PTR_GET_DEFAULT(fieldDetail_, "") };
        inline VelocityVariables& setFieldDetail(string fieldDetail) { DARABONBA_PTR_SET_VALUE(fieldDetail_, fieldDetail) };


        // fieldRank Field Functions 
        bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
        void deleteFieldRank() { this->fieldRank_ = nullptr;};
        inline int32_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
        inline VelocityVariables& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


        // fieldSource Field Functions 
        bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
        void deleteFieldSource() { this->fieldSource_ = nullptr;};
        inline string getFieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
        inline VelocityVariables& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline VelocityVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline VelocityVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputFieldType Field Functions 
        bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
        void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
        inline string getInputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
        inline VelocityVariables& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


        // inputRequired Field Functions 
        bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
        void deleteInputRequired() { this->inputRequired_ = nullptr;};
        inline string getInputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
        inline VelocityVariables& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
        inline VelocityVariables& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VelocityVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outlier Field Functions 
        bool hasOutlier() const { return this->outlier_ != nullptr;};
        void deleteOutlier() { this->outlier_ = nullptr;};
        inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
        inline VelocityVariables& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


        // outputThreshold Field Functions 
        bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
        void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
        inline const VelocityVariables::OutputThreshold & getOutputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, VelocityVariables::OutputThreshold) };
        inline VelocityVariables::OutputThreshold getOutputThreshold() { DARABONBA_PTR_GET(outputThreshold_, VelocityVariables::OutputThreshold) };
        inline VelocityVariables& setOutputThreshold(const VelocityVariables::OutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
        inline VelocityVariables& setOutputThreshold(VelocityVariables::OutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


        // parentName Field Functions 
        bool hasParentName() const { return this->parentName_ != nullptr;};
        void deleteParentName() { this->parentName_ = nullptr;};
        inline string getParentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
        inline VelocityVariables& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline VelocityVariables& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline VelocityVariables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline VelocityVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // variableVelocity Field Functions 
        bool hasVariableVelocity() const { return this->variableVelocity_ != nullptr;};
        void deleteVariableVelocity() { this->variableVelocity_ = nullptr;};
        inline const VelocityVariables::VariableVelocity & getVariableVelocity() const { DARABONBA_PTR_GET_CONST(variableVelocity_, VelocityVariables::VariableVelocity) };
        inline VelocityVariables::VariableVelocity getVariableVelocity() { DARABONBA_PTR_GET(variableVelocity_, VelocityVariables::VariableVelocity) };
        inline VelocityVariables& setVariableVelocity(const VelocityVariables::VariableVelocity & variableVelocity) { DARABONBA_PTR_SET_VALUE(variableVelocity_, variableVelocity) };
        inline VelocityVariables& setVariableVelocity(VelocityVariables::VariableVelocity && variableVelocity) { DARABONBA_PTR_SET_RVALUE(variableVelocity_, variableVelocity) };


        // xLabel Field Functions 
        bool hasXLabel() const { return this->xLabel_ != nullptr;};
        void deleteXLabel() { this->xLabel_ = nullptr;};
        inline string getXLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
        inline VelocityVariables& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


        // yLabel Field Functions 
        bool hasYLabel() const { return this->yLabel_ != nullptr;};
        void deleteYLabel() { this->yLabel_ = nullptr;};
        inline string getYLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
        inline VelocityVariables& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


      protected:
        // The code of the variable.
        shared_ptr<string> code_ {};
        // Data distribution display, in JSON format. This field is not returned for this type of variable.
        shared_ptr<string> dataDisplay_ {};
        // The definition ID of the variable. This field is not returned for this type of variable.
        shared_ptr<string> defineId_ {};
        // The description of the variable.
        shared_ptr<string> description_ {};
        // The display type and grouping label.
        shared_ptr<string> displayType_ {};
        // The display value of the calculation expression. This field is not returned for this type of variable.
        shared_ptr<string> expressionTitle_ {};
        // The favorite flag.
        shared_ptr<bool> favoriteFlag_ {};
        // The detailed information of the field in the field pool. This field is not returned for this type of variable.
        shared_ptr<string> fieldDetail_ {};
        // The field rank.
        shared_ptr<int32_t> fieldRank_ {};
        // The source of the field. This field is not returned for this type of variable.
        shared_ptr<string> fieldSource_ {};
        // The type of the field.
        shared_ptr<string> fieldType_ {};
        // The primary key ID.
        shared_ptr<int64_t> id_ {};
        // The input type of the parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputFieldType_ {};
        // The required parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputRequired_ {};
        // Multiple input parameters separated by commas. This field is not returned for this type of variable.
        shared_ptr<string> inputs_ {};
        // The name of the variable.
        shared_ptr<string> name_ {};
        // The outlier value. This field is not returned for this type of variable.
        shared_ptr<string> outlier_ {};
        // The output value threshold.
        shared_ptr<VelocityVariables::OutputThreshold> outputThreshold_ {};
        // The parent node. This field is not returned for this type of variable.
        shared_ptr<string> parentName_ {};
        // The source type.
        shared_ptr<string> sourceType_ {};
        // The title of the variable.
        shared_ptr<string> title_ {};
        // The type of the variable.
        shared_ptr<string> type_ {};
        // The variable metric information. This field is not returned for this type of variable.
        shared_ptr<VelocityVariables::VariableVelocity> variableVelocity_ {};
        // The X label. This field is not returned for this type of variable.
        shared_ptr<string> xLabel_ {};
        // The Y label. This field is not returned for this type of variable.
        shared_ptr<string> yLabel_ {};
      };

      class SysVariables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SysVariables& obj) { 
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
        friend void from_json(const Darabonba::Json& j, SysVariables& obj) { 
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
        SysVariables() = default ;
        SysVariables(const SysVariables &) = default ;
        SysVariables(SysVariables &&) = default ;
        SysVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SysVariables() = default ;
        SysVariables& operator=(const SysVariables &) = default ;
        SysVariables& operator=(SysVariables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VariableVelocity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VariableVelocity& obj) { 
            DARABONBA_PTR_TO_JSON(iv, iv_);
          };
          friend void from_json(const Darabonba::Json& j, VariableVelocity& obj) { 
            DARABONBA_PTR_FROM_JSON(iv, iv_);
          };
          VariableVelocity() = default ;
          VariableVelocity(const VariableVelocity &) = default ;
          VariableVelocity(VariableVelocity &&) = default ;
          VariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VariableVelocity() = default ;
          VariableVelocity& operator=(const VariableVelocity &) = default ;
          VariableVelocity& operator=(VariableVelocity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->iv_ == nullptr; };
          // iv Field Functions 
          bool hasIv() const { return this->iv_ != nullptr;};
          void deleteIv() { this->iv_ = nullptr;};
          inline string getIv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
          inline VariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


        protected:
          // iv value. This type of variable does not return this field.
          shared_ptr<string> iv_ {};
        };

        class OutputThreshold : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputThreshold& obj) { 
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
          };
          friend void from_json(const Darabonba::Json& j, OutputThreshold& obj) { 
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
          };
          OutputThreshold() = default ;
          OutputThreshold(const OutputThreshold &) = default ;
          OutputThreshold(OutputThreshold &&) = default ;
          OutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputThreshold() = default ;
          OutputThreshold& operator=(const OutputThreshold &) = default ;
          OutputThreshold& operator=(OutputThreshold &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr; };
          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
          inline OutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
          inline OutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        protected:
          // Maximum value.
          shared_ptr<double> maxValue_ {};
          // Minimum value.
          shared_ptr<double> minValue_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataDisplay_ == nullptr && this->defineId_ == nullptr && this->description_ == nullptr && this->displayType_ == nullptr && this->expressionTitle_ == nullptr
        && this->favoriteFlag_ == nullptr && this->fieldDetail_ == nullptr && this->fieldRank_ == nullptr && this->fieldSource_ == nullptr && this->fieldType_ == nullptr
        && this->id_ == nullptr && this->inputFieldType_ == nullptr && this->inputRequired_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr
        && this->outlier_ == nullptr && this->outputThreshold_ == nullptr && this->parentName_ == nullptr && this->sourceType_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr && this->variableVelocity_ == nullptr && this->xLabel_ == nullptr && this->yLabel_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline SysVariables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataDisplay Field Functions 
        bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
        void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
        inline string getDataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
        inline SysVariables& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


        // defineId Field Functions 
        bool hasDefineId() const { return this->defineId_ != nullptr;};
        void deleteDefineId() { this->defineId_ = nullptr;};
        inline string getDefineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
        inline SysVariables& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SysVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayType Field Functions 
        bool hasDisplayType() const { return this->displayType_ != nullptr;};
        void deleteDisplayType() { this->displayType_ = nullptr;};
        inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
        inline SysVariables& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


        // expressionTitle Field Functions 
        bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
        void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
        inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
        inline SysVariables& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


        // favoriteFlag Field Functions 
        bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
        void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
        inline bool getFavoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
        inline SysVariables& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


        // fieldDetail Field Functions 
        bool hasFieldDetail() const { return this->fieldDetail_ != nullptr;};
        void deleteFieldDetail() { this->fieldDetail_ = nullptr;};
        inline string getFieldDetail() const { DARABONBA_PTR_GET_DEFAULT(fieldDetail_, "") };
        inline SysVariables& setFieldDetail(string fieldDetail) { DARABONBA_PTR_SET_VALUE(fieldDetail_, fieldDetail) };


        // fieldRank Field Functions 
        bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
        void deleteFieldRank() { this->fieldRank_ = nullptr;};
        inline int32_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
        inline SysVariables& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


        // fieldSource Field Functions 
        bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
        void deleteFieldSource() { this->fieldSource_ = nullptr;};
        inline string getFieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
        inline SysVariables& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline SysVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline SysVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputFieldType Field Functions 
        bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
        void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
        inline string getInputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
        inline SysVariables& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


        // inputRequired Field Functions 
        bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
        void deleteInputRequired() { this->inputRequired_ = nullptr;};
        inline string getInputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
        inline SysVariables& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
        inline SysVariables& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SysVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outlier Field Functions 
        bool hasOutlier() const { return this->outlier_ != nullptr;};
        void deleteOutlier() { this->outlier_ = nullptr;};
        inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
        inline SysVariables& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


        // outputThreshold Field Functions 
        bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
        void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
        inline const SysVariables::OutputThreshold & getOutputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, SysVariables::OutputThreshold) };
        inline SysVariables::OutputThreshold getOutputThreshold() { DARABONBA_PTR_GET(outputThreshold_, SysVariables::OutputThreshold) };
        inline SysVariables& setOutputThreshold(const SysVariables::OutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
        inline SysVariables& setOutputThreshold(SysVariables::OutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


        // parentName Field Functions 
        bool hasParentName() const { return this->parentName_ != nullptr;};
        void deleteParentName() { this->parentName_ = nullptr;};
        inline string getParentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
        inline SysVariables& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline SysVariables& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline SysVariables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SysVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // variableVelocity Field Functions 
        bool hasVariableVelocity() const { return this->variableVelocity_ != nullptr;};
        void deleteVariableVelocity() { this->variableVelocity_ = nullptr;};
        inline const SysVariables::VariableVelocity & getVariableVelocity() const { DARABONBA_PTR_GET_CONST(variableVelocity_, SysVariables::VariableVelocity) };
        inline SysVariables::VariableVelocity getVariableVelocity() { DARABONBA_PTR_GET(variableVelocity_, SysVariables::VariableVelocity) };
        inline SysVariables& setVariableVelocity(const SysVariables::VariableVelocity & variableVelocity) { DARABONBA_PTR_SET_VALUE(variableVelocity_, variableVelocity) };
        inline SysVariables& setVariableVelocity(SysVariables::VariableVelocity && variableVelocity) { DARABONBA_PTR_SET_RVALUE(variableVelocity_, variableVelocity) };


        // xLabel Field Functions 
        bool hasXLabel() const { return this->xLabel_ != nullptr;};
        void deleteXLabel() { this->xLabel_ = nullptr;};
        inline string getXLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
        inline SysVariables& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


        // yLabel Field Functions 
        bool hasYLabel() const { return this->yLabel_ != nullptr;};
        void deleteYLabel() { this->yLabel_ = nullptr;};
        inline string getYLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
        inline SysVariables& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


      protected:
        // Variable code.
        shared_ptr<string> code_ {};
        // Data distribution display, in JSON format. This field is not returned for this type of variable.
        shared_ptr<string> dataDisplay_ {};
        // ID of the bound variable definition.
        shared_ptr<string> defineId_ {};
        // Description of the variable.
        shared_ptr<string> description_ {};
        // Display type and group label.
        shared_ptr<string> displayType_ {};
        // Calculate the expression display value. This type of variable does not return this field.
        shared_ptr<string> expressionTitle_ {};
        // Favorite identifier.
        shared_ptr<bool> favoriteFlag_ {};
        // Details of the field pool. This type of variable does not return this field.
        shared_ptr<string> fieldDetail_ {};
        // Field sorting.
        shared_ptr<int32_t> fieldRank_ {};
        // Source of the field. This type of variable does not return this field.
        shared_ptr<string> fieldSource_ {};
        // Field type.
        shared_ptr<string> fieldType_ {};
        // Variable ID.
        shared_ptr<int64_t> id_ {};
        // Input type of the parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputFieldType_ {};
        // Required parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputRequired_ {};
        // Variable value input.
        shared_ptr<string> inputs_ {};
        // Variable name.
        shared_ptr<string> name_ {};
        // Outlier value. This field is not returned for this type of variable.
        shared_ptr<string> outlier_ {};
        // Output value threshold.
        shared_ptr<SysVariables::OutputThreshold> outputThreshold_ {};
        // Parent name.
        shared_ptr<string> parentName_ {};
        // Source type.
        shared_ptr<string> sourceType_ {};
        // Title.
        shared_ptr<string> title_ {};
        // Variable type.
        shared_ptr<string> type_ {};
        // Variable metric information. This field is not returned for this type of variable.
        shared_ptr<SysVariables::VariableVelocity> variableVelocity_ {};
        // x label. This type of variable does not return this field.
        shared_ptr<string> xLabel_ {};
        // y label. This type of variable does not return this field.
        shared_ptr<string> yLabel_ {};
      };

      class SelfVariables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SelfVariables& obj) { 
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
        friend void from_json(const Darabonba::Json& j, SelfVariables& obj) { 
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
        SelfVariables() = default ;
        SelfVariables(const SelfVariables &) = default ;
        SelfVariables(SelfVariables &&) = default ;
        SelfVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SelfVariables() = default ;
        SelfVariables& operator=(const SelfVariables &) = default ;
        SelfVariables& operator=(SelfVariables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VariableVelocity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VariableVelocity& obj) { 
            DARABONBA_PTR_TO_JSON(iv, iv_);
          };
          friend void from_json(const Darabonba::Json& j, VariableVelocity& obj) { 
            DARABONBA_PTR_FROM_JSON(iv, iv_);
          };
          VariableVelocity() = default ;
          VariableVelocity(const VariableVelocity &) = default ;
          VariableVelocity(VariableVelocity &&) = default ;
          VariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VariableVelocity() = default ;
          VariableVelocity& operator=(const VariableVelocity &) = default ;
          VariableVelocity& operator=(VariableVelocity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->iv_ == nullptr; };
          // iv Field Functions 
          bool hasIv() const { return this->iv_ != nullptr;};
          void deleteIv() { this->iv_ = nullptr;};
          inline string getIv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
          inline VariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


        protected:
          // iv value. This type of variable does not return this field.
          shared_ptr<string> iv_ {};
        };

        class OutputThreshold : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputThreshold& obj) { 
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
          };
          friend void from_json(const Darabonba::Json& j, OutputThreshold& obj) { 
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
          };
          OutputThreshold() = default ;
          OutputThreshold(const OutputThreshold &) = default ;
          OutputThreshold(OutputThreshold &&) = default ;
          OutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputThreshold() = default ;
          OutputThreshold& operator=(const OutputThreshold &) = default ;
          OutputThreshold& operator=(OutputThreshold &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr; };
          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
          inline OutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
          inline OutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        protected:
          // Maximum value.
          shared_ptr<double> maxValue_ {};
          // Minimum value.
          shared_ptr<double> minValue_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataDisplay_ == nullptr && this->defineId_ == nullptr && this->description_ == nullptr && this->displayType_ == nullptr && this->expressionTitle_ == nullptr
        && this->favoriteFlag_ == nullptr && this->fieldDetail_ == nullptr && this->fieldRank_ == nullptr && this->fieldSource_ == nullptr && this->fieldType_ == nullptr
        && this->id_ == nullptr && this->inputFieldType_ == nullptr && this->inputRequired_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr
        && this->outlier_ == nullptr && this->outputThreshold_ == nullptr && this->parentName_ == nullptr && this->sourceType_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr && this->variableVelocity_ == nullptr && this->xLabel_ == nullptr && this->yLabel_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline SelfVariables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataDisplay Field Functions 
        bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
        void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
        inline string getDataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
        inline SelfVariables& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


        // defineId Field Functions 
        bool hasDefineId() const { return this->defineId_ != nullptr;};
        void deleteDefineId() { this->defineId_ = nullptr;};
        inline string getDefineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
        inline SelfVariables& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SelfVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayType Field Functions 
        bool hasDisplayType() const { return this->displayType_ != nullptr;};
        void deleteDisplayType() { this->displayType_ = nullptr;};
        inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
        inline SelfVariables& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


        // expressionTitle Field Functions 
        bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
        void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
        inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
        inline SelfVariables& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


        // favoriteFlag Field Functions 
        bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
        void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
        inline bool getFavoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
        inline SelfVariables& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


        // fieldDetail Field Functions 
        bool hasFieldDetail() const { return this->fieldDetail_ != nullptr;};
        void deleteFieldDetail() { this->fieldDetail_ = nullptr;};
        inline string getFieldDetail() const { DARABONBA_PTR_GET_DEFAULT(fieldDetail_, "") };
        inline SelfVariables& setFieldDetail(string fieldDetail) { DARABONBA_PTR_SET_VALUE(fieldDetail_, fieldDetail) };


        // fieldRank Field Functions 
        bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
        void deleteFieldRank() { this->fieldRank_ = nullptr;};
        inline int32_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
        inline SelfVariables& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


        // fieldSource Field Functions 
        bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
        void deleteFieldSource() { this->fieldSource_ = nullptr;};
        inline string getFieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
        inline SelfVariables& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline SelfVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline SelfVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputFieldType Field Functions 
        bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
        void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
        inline string getInputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
        inline SelfVariables& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


        // inputRequired Field Functions 
        bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
        void deleteInputRequired() { this->inputRequired_ = nullptr;};
        inline string getInputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
        inline SelfVariables& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
        inline SelfVariables& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SelfVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outlier Field Functions 
        bool hasOutlier() const { return this->outlier_ != nullptr;};
        void deleteOutlier() { this->outlier_ = nullptr;};
        inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
        inline SelfVariables& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


        // outputThreshold Field Functions 
        bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
        void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
        inline const SelfVariables::OutputThreshold & getOutputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, SelfVariables::OutputThreshold) };
        inline SelfVariables::OutputThreshold getOutputThreshold() { DARABONBA_PTR_GET(outputThreshold_, SelfVariables::OutputThreshold) };
        inline SelfVariables& setOutputThreshold(const SelfVariables::OutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
        inline SelfVariables& setOutputThreshold(SelfVariables::OutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


        // parentName Field Functions 
        bool hasParentName() const { return this->parentName_ != nullptr;};
        void deleteParentName() { this->parentName_ = nullptr;};
        inline string getParentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
        inline SelfVariables& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline SelfVariables& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline SelfVariables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SelfVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // variableVelocity Field Functions 
        bool hasVariableVelocity() const { return this->variableVelocity_ != nullptr;};
        void deleteVariableVelocity() { this->variableVelocity_ = nullptr;};
        inline const SelfVariables::VariableVelocity & getVariableVelocity() const { DARABONBA_PTR_GET_CONST(variableVelocity_, SelfVariables::VariableVelocity) };
        inline SelfVariables::VariableVelocity getVariableVelocity() { DARABONBA_PTR_GET(variableVelocity_, SelfVariables::VariableVelocity) };
        inline SelfVariables& setVariableVelocity(const SelfVariables::VariableVelocity & variableVelocity) { DARABONBA_PTR_SET_VALUE(variableVelocity_, variableVelocity) };
        inline SelfVariables& setVariableVelocity(SelfVariables::VariableVelocity && variableVelocity) { DARABONBA_PTR_SET_RVALUE(variableVelocity_, variableVelocity) };


        // xLabel Field Functions 
        bool hasXLabel() const { return this->xLabel_ != nullptr;};
        void deleteXLabel() { this->xLabel_ = nullptr;};
        inline string getXLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
        inline SelfVariables& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


        // yLabel Field Functions 
        bool hasYLabel() const { return this->yLabel_ != nullptr;};
        void deleteYLabel() { this->yLabel_ = nullptr;};
        inline string getYLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
        inline SelfVariables& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


      protected:
        // Variable code.
        shared_ptr<string> code_ {};
        // Data distribution display, in JSON format. This field is not returned for this type of variable.
        shared_ptr<string> dataDisplay_ {};
        // Variable definition ID. Only returned for custom system variables.
        shared_ptr<string> defineId_ {};
        // Description of the variable.
        shared_ptr<string> description_ {};
        // Display type and group label.
        shared_ptr<string> displayType_ {};
        // Expression name.
        shared_ptr<string> expressionTitle_ {};
        // Favorite identifier.
        shared_ptr<bool> favoriteFlag_ {};
        // Details of the field pool. This type of variable does not return this field.
        shared_ptr<string> fieldDetail_ {};
        // Field sorting.
        shared_ptr<int32_t> fieldRank_ {};
        // Source of the field. This type of variable does not return this field.
        shared_ptr<string> fieldSource_ {};
        // Field type.
        shared_ptr<string> fieldType_ {};
        // Variable ID.
        shared_ptr<int64_t> id_ {};
        // The input type of the parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputFieldType_ {};
        // Required parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputRequired_ {};
        // Input parameters. Only returned when custom system variables are defined.
        shared_ptr<string> inputs_ {};
        // Variable name.
        shared_ptr<string> name_ {};
        // Anomaly value. Returned when the variable is a custom variable (type= EXPRESSION).
        shared_ptr<string> outlier_ {};
        // Output value threshold.
        shared_ptr<SelfVariables::OutputThreshold> outputThreshold_ {};
        // Parent node. This field is not returned currently.
        shared_ptr<string> parentName_ {};
        // Source type.
        shared_ptr<string> sourceType_ {};
        // Title.
        shared_ptr<string> title_ {};
        // Variable type.
        shared_ptr<string> type_ {};
        // Variable metric information. This field is not returned for this type of variable.
        shared_ptr<SelfVariables::VariableVelocity> variableVelocity_ {};
        // x label. This type of variable does not return this field.
        shared_ptr<string> xLabel_ {};
        // y label. This type of variable does not return this field.
        shared_ptr<string> yLabel_ {};
      };

      class QueryVariables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueryVariables& obj) { 
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
        friend void from_json(const Darabonba::Json& j, QueryVariables& obj) { 
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
        QueryVariables() = default ;
        QueryVariables(const QueryVariables &) = default ;
        QueryVariables(QueryVariables &&) = default ;
        QueryVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QueryVariables() = default ;
        QueryVariables& operator=(const QueryVariables &) = default ;
        QueryVariables& operator=(QueryVariables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VariableVelocity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VariableVelocity& obj) { 
            DARABONBA_PTR_TO_JSON(iv, iv_);
          };
          friend void from_json(const Darabonba::Json& j, VariableVelocity& obj) { 
            DARABONBA_PTR_FROM_JSON(iv, iv_);
          };
          VariableVelocity() = default ;
          VariableVelocity(const VariableVelocity &) = default ;
          VariableVelocity(VariableVelocity &&) = default ;
          VariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VariableVelocity() = default ;
          VariableVelocity& operator=(const VariableVelocity &) = default ;
          VariableVelocity& operator=(VariableVelocity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->iv_ == nullptr; };
          // iv Field Functions 
          bool hasIv() const { return this->iv_ != nullptr;};
          void deleteIv() { this->iv_ = nullptr;};
          inline string getIv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
          inline VariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


        protected:
          // The IV value. This field is not returned for this type of variable.
          shared_ptr<string> iv_ {};
        };

        class OutputThreshold : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputThreshold& obj) { 
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
          };
          friend void from_json(const Darabonba::Json& j, OutputThreshold& obj) { 
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
          };
          OutputThreshold() = default ;
          OutputThreshold(const OutputThreshold &) = default ;
          OutputThreshold(OutputThreshold &&) = default ;
          OutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputThreshold() = default ;
          OutputThreshold& operator=(const OutputThreshold &) = default ;
          OutputThreshold& operator=(OutputThreshold &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr; };
          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
          inline OutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
          inline OutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        protected:
          // The maximum value.
          shared_ptr<double> maxValue_ {};
          // The minimum value.
          shared_ptr<double> minValue_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataDisplay_ == nullptr && this->defineId_ == nullptr && this->description_ == nullptr && this->displayType_ == nullptr && this->expressionTitle_ == nullptr
        && this->favoriteFlag_ == nullptr && this->fieldDetail_ == nullptr && this->fieldRank_ == nullptr && this->fieldSource_ == nullptr && this->fieldType_ == nullptr
        && this->id_ == nullptr && this->inputFieldType_ == nullptr && this->inputRequired_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr
        && this->outlier_ == nullptr && this->outputThreshold_ == nullptr && this->parentName_ == nullptr && this->sourceType_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr && this->variableVelocity_ == nullptr && this->xLabel_ == nullptr && this->yLabel_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline QueryVariables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataDisplay Field Functions 
        bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
        void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
        inline string getDataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
        inline QueryVariables& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


        // defineId Field Functions 
        bool hasDefineId() const { return this->defineId_ != nullptr;};
        void deleteDefineId() { this->defineId_ = nullptr;};
        inline string getDefineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
        inline QueryVariables& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline QueryVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayType Field Functions 
        bool hasDisplayType() const { return this->displayType_ != nullptr;};
        void deleteDisplayType() { this->displayType_ = nullptr;};
        inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
        inline QueryVariables& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


        // expressionTitle Field Functions 
        bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
        void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
        inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
        inline QueryVariables& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


        // favoriteFlag Field Functions 
        bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
        void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
        inline bool getFavoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
        inline QueryVariables& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


        // fieldDetail Field Functions 
        bool hasFieldDetail() const { return this->fieldDetail_ != nullptr;};
        void deleteFieldDetail() { this->fieldDetail_ = nullptr;};
        inline string getFieldDetail() const { DARABONBA_PTR_GET_DEFAULT(fieldDetail_, "") };
        inline QueryVariables& setFieldDetail(string fieldDetail) { DARABONBA_PTR_SET_VALUE(fieldDetail_, fieldDetail) };


        // fieldRank Field Functions 
        bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
        void deleteFieldRank() { this->fieldRank_ = nullptr;};
        inline int32_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
        inline QueryVariables& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


        // fieldSource Field Functions 
        bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
        void deleteFieldSource() { this->fieldSource_ = nullptr;};
        inline string getFieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
        inline QueryVariables& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline QueryVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline QueryVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputFieldType Field Functions 
        bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
        void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
        inline string getInputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
        inline QueryVariables& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


        // inputRequired Field Functions 
        bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
        void deleteInputRequired() { this->inputRequired_ = nullptr;};
        inline string getInputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
        inline QueryVariables& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
        inline QueryVariables& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline QueryVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outlier Field Functions 
        bool hasOutlier() const { return this->outlier_ != nullptr;};
        void deleteOutlier() { this->outlier_ = nullptr;};
        inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
        inline QueryVariables& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


        // outputThreshold Field Functions 
        bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
        void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
        inline const QueryVariables::OutputThreshold & getOutputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, QueryVariables::OutputThreshold) };
        inline QueryVariables::OutputThreshold getOutputThreshold() { DARABONBA_PTR_GET(outputThreshold_, QueryVariables::OutputThreshold) };
        inline QueryVariables& setOutputThreshold(const QueryVariables::OutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
        inline QueryVariables& setOutputThreshold(QueryVariables::OutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


        // parentName Field Functions 
        bool hasParentName() const { return this->parentName_ != nullptr;};
        void deleteParentName() { this->parentName_ = nullptr;};
        inline string getParentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
        inline QueryVariables& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline QueryVariables& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline QueryVariables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline QueryVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // variableVelocity Field Functions 
        bool hasVariableVelocity() const { return this->variableVelocity_ != nullptr;};
        void deleteVariableVelocity() { this->variableVelocity_ = nullptr;};
        inline const QueryVariables::VariableVelocity & getVariableVelocity() const { DARABONBA_PTR_GET_CONST(variableVelocity_, QueryVariables::VariableVelocity) };
        inline QueryVariables::VariableVelocity getVariableVelocity() { DARABONBA_PTR_GET(variableVelocity_, QueryVariables::VariableVelocity) };
        inline QueryVariables& setVariableVelocity(const QueryVariables::VariableVelocity & variableVelocity) { DARABONBA_PTR_SET_VALUE(variableVelocity_, variableVelocity) };
        inline QueryVariables& setVariableVelocity(QueryVariables::VariableVelocity && variableVelocity) { DARABONBA_PTR_SET_RVALUE(variableVelocity_, variableVelocity) };


        // xLabel Field Functions 
        bool hasXLabel() const { return this->xLabel_ != nullptr;};
        void deleteXLabel() { this->xLabel_ = nullptr;};
        inline string getXLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
        inline QueryVariables& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


        // yLabel Field Functions 
        bool hasYLabel() const { return this->yLabel_ != nullptr;};
        void deleteYLabel() { this->yLabel_ = nullptr;};
        inline string getYLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
        inline QueryVariables& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


      protected:
        // The code of the query variable.
        shared_ptr<string> code_ {};
        // Data distribution display, in JSON format. This field is not returned for this type of variable.
        shared_ptr<string> dataDisplay_ {};
        // The definition ID of the query variable. This field is not returned for this type of variable.
        shared_ptr<string> defineId_ {};
        // The description of the query variable.
        shared_ptr<string> description_ {};
        // The display type and grouping label.
        shared_ptr<string> displayType_ {};
        // The display value of the calculation expression. This field is not returned for this type of variable.
        shared_ptr<string> expressionTitle_ {};
        // The favorite flag.
        shared_ptr<bool> favoriteFlag_ {};
        // The detailed information of the field in the field pool. This field is not returned for this type of variable.
        shared_ptr<string> fieldDetail_ {};
        // The field rank.
        shared_ptr<int32_t> fieldRank_ {};
        // The source of the field. This field is not returned for this type of variable.
        shared_ptr<string> fieldSource_ {};
        // The type of the field.
        shared_ptr<string> fieldType_ {};
        // The primary key ID of the query variable.
        shared_ptr<int64_t> id_ {};
        // The input type of the parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputFieldType_ {};
        // The required parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputRequired_ {};
        // Multiple input parameters separated by commas. This field is not returned for this type of variable.
        shared_ptr<string> inputs_ {};
        // The name of the query variable.
        shared_ptr<string> name_ {};
        // The outlier value.
        shared_ptr<string> outlier_ {};
        // The output value threshold.
        shared_ptr<QueryVariables::OutputThreshold> outputThreshold_ {};
        // The parent node. This field is not returned for this type of variable.
        shared_ptr<string> parentName_ {};
        // The source type.
        shared_ptr<string> sourceType_ {};
        // The title of the query variable. The title of the query variable.
        shared_ptr<string> title_ {};
        // The type of the query variable.
        shared_ptr<string> type_ {};
        // The variable metric information. This field is not returned for this type of variable.
        shared_ptr<QueryVariables::VariableVelocity> variableVelocity_ {};
        // The X label. This field is not returned for this type of variable.
        shared_ptr<string> xLabel_ {};
        // The Y label. This field is not returned for this type of variable.
        shared_ptr<string> yLabel_ {};
      };

      class NativeVariables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NativeVariables& obj) { 
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
        friend void from_json(const Darabonba::Json& j, NativeVariables& obj) { 
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
        NativeVariables() = default ;
        NativeVariables(const NativeVariables &) = default ;
        NativeVariables(NativeVariables &&) = default ;
        NativeVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NativeVariables() = default ;
        NativeVariables& operator=(const NativeVariables &) = default ;
        NativeVariables& operator=(NativeVariables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VariableVelocity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VariableVelocity& obj) { 
            DARABONBA_PTR_TO_JSON(iv, iv_);
          };
          friend void from_json(const Darabonba::Json& j, VariableVelocity& obj) { 
            DARABONBA_PTR_FROM_JSON(iv, iv_);
          };
          VariableVelocity() = default ;
          VariableVelocity(const VariableVelocity &) = default ;
          VariableVelocity(VariableVelocity &&) = default ;
          VariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VariableVelocity() = default ;
          VariableVelocity& operator=(const VariableVelocity &) = default ;
          VariableVelocity& operator=(VariableVelocity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->iv_ == nullptr; };
          // iv Field Functions 
          bool hasIv() const { return this->iv_ != nullptr;};
          void deleteIv() { this->iv_ = nullptr;};
          inline string getIv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
          inline VariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


        protected:
          // iv value.
          shared_ptr<string> iv_ {};
        };

        class OutputThreshold : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputThreshold& obj) { 
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
          };
          friend void from_json(const Darabonba::Json& j, OutputThreshold& obj) { 
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
          };
          OutputThreshold() = default ;
          OutputThreshold(const OutputThreshold &) = default ;
          OutputThreshold(OutputThreshold &&) = default ;
          OutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputThreshold() = default ;
          OutputThreshold& operator=(const OutputThreshold &) = default ;
          OutputThreshold& operator=(OutputThreshold &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr; };
          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
          inline OutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
          inline OutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        protected:
          // Maximum value.
          shared_ptr<double> maxValue_ {};
          // Minimum value.
          shared_ptr<double> minValue_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataDisplay_ == nullptr && this->defineId_ == nullptr && this->description_ == nullptr && this->displayType_ == nullptr && this->expressionTitle_ == nullptr
        && this->favoriteFlag_ == nullptr && this->fieldDetail_ == nullptr && this->fieldRank_ == nullptr && this->fieldSource_ == nullptr && this->fieldType_ == nullptr
        && this->id_ == nullptr && this->inputFieldType_ == nullptr && this->inputRequired_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr
        && this->outlier_ == nullptr && this->outputThreshold_ == nullptr && this->parentName_ == nullptr && this->sourceType_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr && this->variableVelocity_ == nullptr && this->xLabel_ == nullptr && this->yLabel_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline NativeVariables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataDisplay Field Functions 
        bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
        void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
        inline string getDataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
        inline NativeVariables& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


        // defineId Field Functions 
        bool hasDefineId() const { return this->defineId_ != nullptr;};
        void deleteDefineId() { this->defineId_ = nullptr;};
        inline string getDefineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
        inline NativeVariables& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline NativeVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayType Field Functions 
        bool hasDisplayType() const { return this->displayType_ != nullptr;};
        void deleteDisplayType() { this->displayType_ = nullptr;};
        inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
        inline NativeVariables& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


        // expressionTitle Field Functions 
        bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
        void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
        inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
        inline NativeVariables& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


        // favoriteFlag Field Functions 
        bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
        void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
        inline bool getFavoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
        inline NativeVariables& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


        // fieldDetail Field Functions 
        bool hasFieldDetail() const { return this->fieldDetail_ != nullptr;};
        void deleteFieldDetail() { this->fieldDetail_ = nullptr;};
        inline string getFieldDetail() const { DARABONBA_PTR_GET_DEFAULT(fieldDetail_, "") };
        inline NativeVariables& setFieldDetail(string fieldDetail) { DARABONBA_PTR_SET_VALUE(fieldDetail_, fieldDetail) };


        // fieldRank Field Functions 
        bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
        void deleteFieldRank() { this->fieldRank_ = nullptr;};
        inline int32_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
        inline NativeVariables& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


        // fieldSource Field Functions 
        bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
        void deleteFieldSource() { this->fieldSource_ = nullptr;};
        inline string getFieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
        inline NativeVariables& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline NativeVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline NativeVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputFieldType Field Functions 
        bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
        void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
        inline string getInputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
        inline NativeVariables& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


        // inputRequired Field Functions 
        bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
        void deleteInputRequired() { this->inputRequired_ = nullptr;};
        inline string getInputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
        inline NativeVariables& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
        inline NativeVariables& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline NativeVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outlier Field Functions 
        bool hasOutlier() const { return this->outlier_ != nullptr;};
        void deleteOutlier() { this->outlier_ = nullptr;};
        inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
        inline NativeVariables& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


        // outputThreshold Field Functions 
        bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
        void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
        inline const NativeVariables::OutputThreshold & getOutputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, NativeVariables::OutputThreshold) };
        inline NativeVariables::OutputThreshold getOutputThreshold() { DARABONBA_PTR_GET(outputThreshold_, NativeVariables::OutputThreshold) };
        inline NativeVariables& setOutputThreshold(const NativeVariables::OutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
        inline NativeVariables& setOutputThreshold(NativeVariables::OutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


        // parentName Field Functions 
        bool hasParentName() const { return this->parentName_ != nullptr;};
        void deleteParentName() { this->parentName_ = nullptr;};
        inline string getParentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
        inline NativeVariables& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline NativeVariables& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline NativeVariables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline NativeVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // variableVelocity Field Functions 
        bool hasVariableVelocity() const { return this->variableVelocity_ != nullptr;};
        void deleteVariableVelocity() { this->variableVelocity_ = nullptr;};
        inline const NativeVariables::VariableVelocity & getVariableVelocity() const { DARABONBA_PTR_GET_CONST(variableVelocity_, NativeVariables::VariableVelocity) };
        inline NativeVariables::VariableVelocity getVariableVelocity() { DARABONBA_PTR_GET(variableVelocity_, NativeVariables::VariableVelocity) };
        inline NativeVariables& setVariableVelocity(const NativeVariables::VariableVelocity & variableVelocity) { DARABONBA_PTR_SET_VALUE(variableVelocity_, variableVelocity) };
        inline NativeVariables& setVariableVelocity(NativeVariables::VariableVelocity && variableVelocity) { DARABONBA_PTR_SET_RVALUE(variableVelocity_, variableVelocity) };


        // xLabel Field Functions 
        bool hasXLabel() const { return this->xLabel_ != nullptr;};
        void deleteXLabel() { this->xLabel_ = nullptr;};
        inline string getXLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
        inline NativeVariables& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


        // yLabel Field Functions 
        bool hasYLabel() const { return this->yLabel_ != nullptr;};
        void deleteYLabel() { this->yLabel_ = nullptr;};
        inline string getYLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
        inline NativeVariables& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


      protected:
        // variable code.
        shared_ptr<string> code_ {};
        // Data distribution display, in JSON format.
        shared_ptr<string> dataDisplay_ {};
        // Associated variable definition ID.
        shared_ptr<string> defineId_ {};
        // Variable description.
        shared_ptr<string> description_ {};
        // Display type and group label.
        shared_ptr<string> displayType_ {};
        // Calculate expression display value.
        shared_ptr<string> expressionTitle_ {};
        // Favorite Identifier.
        shared_ptr<bool> favoriteFlag_ {};
        // Field pool field details.
        shared_ptr<string> fieldDetail_ {};
        // Field Sorting.
        shared_ptr<int32_t> fieldRank_ {};
        // Variable source.
        shared_ptr<string> fieldSource_ {};
        // Field type.
        shared_ptr<string> fieldType_ {};
        // Variable ID.
        shared_ptr<int64_t> id_ {};
        // Input field type, indicating the type of input parameters, mainly used for function categorization.
        shared_ptr<string> inputFieldType_ {};
        // Required parameters.
        shared_ptr<string> inputRequired_ {};
        // Input of the variable. Event field is not present.
        shared_ptr<string> inputs_ {};
        // variable name.
        shared_ptr<string> name_ {};
        // outlier.
        shared_ptr<string> outlier_ {};
        // Output score threshold.
        shared_ptr<NativeVariables::OutputThreshold> outputThreshold_ {};
        // Parent name.
        shared_ptr<string> parentName_ {};
        // Variable source type.
        shared_ptr<string> sourceType_ {};
        // Variable name.
        shared_ptr<string> title_ {};
        // Variable type.
        shared_ptr<string> type_ {};
        // Variable indicator information.
        shared_ptr<NativeVariables::VariableVelocity> variableVelocity_ {};
        // x label.
        shared_ptr<string> xLabel_ {};
        // y label.
        shared_ptr<string> yLabel_ {};
      };

      class NativeVariableFunctions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NativeVariableFunctions& obj) { 
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
        friend void from_json(const Darabonba::Json& j, NativeVariableFunctions& obj) { 
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
        NativeVariableFunctions() = default ;
        NativeVariableFunctions(const NativeVariableFunctions &) = default ;
        NativeVariableFunctions(NativeVariableFunctions &&) = default ;
        NativeVariableFunctions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NativeVariableFunctions() = default ;
        NativeVariableFunctions& operator=(const NativeVariableFunctions &) = default ;
        NativeVariableFunctions& operator=(NativeVariableFunctions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VariableVelocity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VariableVelocity& obj) { 
            DARABONBA_PTR_TO_JSON(iv, iv_);
          };
          friend void from_json(const Darabonba::Json& j, VariableVelocity& obj) { 
            DARABONBA_PTR_FROM_JSON(iv, iv_);
          };
          VariableVelocity() = default ;
          VariableVelocity(const VariableVelocity &) = default ;
          VariableVelocity(VariableVelocity &&) = default ;
          VariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VariableVelocity() = default ;
          VariableVelocity& operator=(const VariableVelocity &) = default ;
          VariableVelocity& operator=(VariableVelocity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->iv_ == nullptr; };
          // iv Field Functions 
          bool hasIv() const { return this->iv_ != nullptr;};
          void deleteIv() { this->iv_ = nullptr;};
          inline string getIv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
          inline VariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


        protected:
          // iv value. This type of variable does not return this field.
          shared_ptr<string> iv_ {};
        };

        class OutputThreshold : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputThreshold& obj) { 
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
          };
          friend void from_json(const Darabonba::Json& j, OutputThreshold& obj) { 
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
          };
          OutputThreshold() = default ;
          OutputThreshold(const OutputThreshold &) = default ;
          OutputThreshold(OutputThreshold &&) = default ;
          OutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputThreshold() = default ;
          OutputThreshold& operator=(const OutputThreshold &) = default ;
          OutputThreshold& operator=(OutputThreshold &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr; };
          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
          inline OutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
          inline OutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        protected:
          // Maximum value.
          shared_ptr<double> maxValue_ {};
          // Minimum value.
          shared_ptr<double> minValue_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataDisplay_ == nullptr && this->defineId_ == nullptr && this->description_ == nullptr && this->displayType_ == nullptr && this->expressionTitle_ == nullptr
        && this->favoriteFlag_ == nullptr && this->fieldDetail_ == nullptr && this->fieldRank_ == nullptr && this->fieldSource_ == nullptr && this->fieldType_ == nullptr
        && this->id_ == nullptr && this->inputFieldType_ == nullptr && this->inputRequired_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr
        && this->outlier_ == nullptr && this->outputThreshold_ == nullptr && this->parentName_ == nullptr && this->sourceType_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr && this->variableVelocity_ == nullptr && this->xLabel_ == nullptr && this->yLabel_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline NativeVariableFunctions& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataDisplay Field Functions 
        bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
        void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
        inline string getDataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
        inline NativeVariableFunctions& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


        // defineId Field Functions 
        bool hasDefineId() const { return this->defineId_ != nullptr;};
        void deleteDefineId() { this->defineId_ = nullptr;};
        inline string getDefineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
        inline NativeVariableFunctions& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline NativeVariableFunctions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayType Field Functions 
        bool hasDisplayType() const { return this->displayType_ != nullptr;};
        void deleteDisplayType() { this->displayType_ = nullptr;};
        inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
        inline NativeVariableFunctions& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


        // expressionTitle Field Functions 
        bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
        void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
        inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
        inline NativeVariableFunctions& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


        // favoriteFlag Field Functions 
        bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
        void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
        inline bool getFavoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
        inline NativeVariableFunctions& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


        // fieldDetail Field Functions 
        bool hasFieldDetail() const { return this->fieldDetail_ != nullptr;};
        void deleteFieldDetail() { this->fieldDetail_ = nullptr;};
        inline string getFieldDetail() const { DARABONBA_PTR_GET_DEFAULT(fieldDetail_, "") };
        inline NativeVariableFunctions& setFieldDetail(string fieldDetail) { DARABONBA_PTR_SET_VALUE(fieldDetail_, fieldDetail) };


        // fieldRank Field Functions 
        bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
        void deleteFieldRank() { this->fieldRank_ = nullptr;};
        inline int32_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
        inline NativeVariableFunctions& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


        // fieldSource Field Functions 
        bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
        void deleteFieldSource() { this->fieldSource_ = nullptr;};
        inline string getFieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
        inline NativeVariableFunctions& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline NativeVariableFunctions& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline NativeVariableFunctions& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputFieldType Field Functions 
        bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
        void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
        inline string getInputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
        inline NativeVariableFunctions& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


        // inputRequired Field Functions 
        bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
        void deleteInputRequired() { this->inputRequired_ = nullptr;};
        inline string getInputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
        inline NativeVariableFunctions& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
        inline NativeVariableFunctions& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline NativeVariableFunctions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outlier Field Functions 
        bool hasOutlier() const { return this->outlier_ != nullptr;};
        void deleteOutlier() { this->outlier_ = nullptr;};
        inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
        inline NativeVariableFunctions& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


        // outputThreshold Field Functions 
        bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
        void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
        inline const NativeVariableFunctions::OutputThreshold & getOutputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, NativeVariableFunctions::OutputThreshold) };
        inline NativeVariableFunctions::OutputThreshold getOutputThreshold() { DARABONBA_PTR_GET(outputThreshold_, NativeVariableFunctions::OutputThreshold) };
        inline NativeVariableFunctions& setOutputThreshold(const NativeVariableFunctions::OutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
        inline NativeVariableFunctions& setOutputThreshold(NativeVariableFunctions::OutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


        // parentName Field Functions 
        bool hasParentName() const { return this->parentName_ != nullptr;};
        void deleteParentName() { this->parentName_ = nullptr;};
        inline string getParentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
        inline NativeVariableFunctions& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline NativeVariableFunctions& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline NativeVariableFunctions& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline NativeVariableFunctions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // variableVelocity Field Functions 
        bool hasVariableVelocity() const { return this->variableVelocity_ != nullptr;};
        void deleteVariableVelocity() { this->variableVelocity_ = nullptr;};
        inline const NativeVariableFunctions::VariableVelocity & getVariableVelocity() const { DARABONBA_PTR_GET_CONST(variableVelocity_, NativeVariableFunctions::VariableVelocity) };
        inline NativeVariableFunctions::VariableVelocity getVariableVelocity() { DARABONBA_PTR_GET(variableVelocity_, NativeVariableFunctions::VariableVelocity) };
        inline NativeVariableFunctions& setVariableVelocity(const NativeVariableFunctions::VariableVelocity & variableVelocity) { DARABONBA_PTR_SET_VALUE(variableVelocity_, variableVelocity) };
        inline NativeVariableFunctions& setVariableVelocity(NativeVariableFunctions::VariableVelocity && variableVelocity) { DARABONBA_PTR_SET_RVALUE(variableVelocity_, variableVelocity) };


        // xLabel Field Functions 
        bool hasXLabel() const { return this->xLabel_ != nullptr;};
        void deleteXLabel() { this->xLabel_ = nullptr;};
        inline string getXLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
        inline NativeVariableFunctions& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


        // yLabel Field Functions 
        bool hasYLabel() const { return this->yLabel_ != nullptr;};
        void deleteYLabel() { this->yLabel_ = nullptr;};
        inline string getYLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
        inline NativeVariableFunctions& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


      protected:
        // Variable code.
        shared_ptr<string> code_ {};
        // Data distribution display in JSON format. This field is not returned for this type of variable.
        shared_ptr<string> dataDisplay_ {};
        // Variable definition ID. This type of variable does not return this field.
        shared_ptr<string> defineId_ {};
        // Description information.
        shared_ptr<string> description_ {};
        // Display type and group label.
        shared_ptr<string> displayType_ {};
        // Calculate the expression display value. This field is not returned for this type of variable.
        shared_ptr<string> expressionTitle_ {};
        // Favorite identifier.
        shared_ptr<bool> favoriteFlag_ {};
        // Details of the field pool. This type of variable does not return this field.
        shared_ptr<string> fieldDetail_ {};
        // Field sorting.
        shared_ptr<int32_t> fieldRank_ {};
        // Source of the field. This type of variable does not return this field.
        shared_ptr<string> fieldSource_ {};
        // Variable return type.
        shared_ptr<string> fieldType_ {};
        // Primary key ID.
        shared_ptr<int64_t> id_ {};
        // The input type of the parameter.
        shared_ptr<string> inputFieldType_ {};
        // Required parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputRequired_ {};
        // Input field. This type of variable does not return this field.
        shared_ptr<string> inputs_ {};
        // Variable name.
        shared_ptr<string> name_ {};
        // Exception value. This type of variable does not return this field.
        shared_ptr<string> outlier_ {};
        // Output value threshold.
        shared_ptr<NativeVariableFunctions::OutputThreshold> outputThreshold_ {};
        // Parent node. This field is not returned for this type of variable.
        shared_ptr<string> parentName_ {};
        // Source type.
        shared_ptr<string> sourceType_ {};
        // Variable title.
        shared_ptr<string> title_ {};
        // Variable type.
        shared_ptr<string> type_ {};
        // Variable metric information. This type of variable does not return this field.
        shared_ptr<NativeVariableFunctions::VariableVelocity> variableVelocity_ {};
        // x label. This type of variable does not return this field.
        shared_ptr<string> xLabel_ {};
        // y label. This type of variable does not return this field.
        shared_ptr<string> yLabel_ {};
      };

      class NameList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NameList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, NameList& obj) { 
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
        NameList() = default ;
        NameList(const NameList &) = default ;
        NameList(NameList &&) = default ;
        NameList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NameList() = default ;
        NameList& operator=(const NameList &) = default ;
        NameList& operator=(NameList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VariableVelocity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VariableVelocity& obj) { 
            DARABONBA_PTR_TO_JSON(iv, iv_);
          };
          friend void from_json(const Darabonba::Json& j, VariableVelocity& obj) { 
            DARABONBA_PTR_FROM_JSON(iv, iv_);
          };
          VariableVelocity() = default ;
          VariableVelocity(const VariableVelocity &) = default ;
          VariableVelocity(VariableVelocity &&) = default ;
          VariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VariableVelocity() = default ;
          VariableVelocity& operator=(const VariableVelocity &) = default ;
          VariableVelocity& operator=(VariableVelocity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->iv_ == nullptr; };
          // iv Field Functions 
          bool hasIv() const { return this->iv_ != nullptr;};
          void deleteIv() { this->iv_ = nullptr;};
          inline string getIv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
          inline VariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


        protected:
          // iv value. This type of variable does not return this field.
          shared_ptr<string> iv_ {};
        };

        class OutputThreshold : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputThreshold& obj) { 
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
          };
          friend void from_json(const Darabonba::Json& j, OutputThreshold& obj) { 
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
          };
          OutputThreshold() = default ;
          OutputThreshold(const OutputThreshold &) = default ;
          OutputThreshold(OutputThreshold &&) = default ;
          OutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputThreshold() = default ;
          OutputThreshold& operator=(const OutputThreshold &) = default ;
          OutputThreshold& operator=(OutputThreshold &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr; };
          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
          inline OutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
          inline OutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        protected:
          // Maximum value.
          shared_ptr<double> maxValue_ {};
          // Minimum value.
          shared_ptr<double> minValue_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataDisplay_ == nullptr && this->defineId_ == nullptr && this->description_ == nullptr && this->displayType_ == nullptr && this->expressionTitle_ == nullptr
        && this->favoriteFlag_ == nullptr && this->fieldDetail_ == nullptr && this->fieldRank_ == nullptr && this->fieldSource_ == nullptr && this->fieldType_ == nullptr
        && this->id_ == nullptr && this->inputFieldType_ == nullptr && this->inputRequired_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr
        && this->outlier_ == nullptr && this->outputThreshold_ == nullptr && this->parentName_ == nullptr && this->sourceType_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr && this->variableVelocity_ == nullptr && this->xLabel_ == nullptr && this->yLabel_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline NameList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataDisplay Field Functions 
        bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
        void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
        inline string getDataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
        inline NameList& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


        // defineId Field Functions 
        bool hasDefineId() const { return this->defineId_ != nullptr;};
        void deleteDefineId() { this->defineId_ = nullptr;};
        inline string getDefineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
        inline NameList& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline NameList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayType Field Functions 
        bool hasDisplayType() const { return this->displayType_ != nullptr;};
        void deleteDisplayType() { this->displayType_ = nullptr;};
        inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
        inline NameList& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


        // expressionTitle Field Functions 
        bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
        void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
        inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
        inline NameList& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


        // favoriteFlag Field Functions 
        bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
        void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
        inline bool getFavoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
        inline NameList& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


        // fieldDetail Field Functions 
        bool hasFieldDetail() const { return this->fieldDetail_ != nullptr;};
        void deleteFieldDetail() { this->fieldDetail_ = nullptr;};
        inline string getFieldDetail() const { DARABONBA_PTR_GET_DEFAULT(fieldDetail_, "") };
        inline NameList& setFieldDetail(string fieldDetail) { DARABONBA_PTR_SET_VALUE(fieldDetail_, fieldDetail) };


        // fieldRank Field Functions 
        bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
        void deleteFieldRank() { this->fieldRank_ = nullptr;};
        inline int32_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
        inline NameList& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


        // fieldSource Field Functions 
        bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
        void deleteFieldSource() { this->fieldSource_ = nullptr;};
        inline string getFieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
        inline NameList& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline NameList& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline NameList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputFieldType Field Functions 
        bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
        void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
        inline string getInputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
        inline NameList& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


        // inputRequired Field Functions 
        bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
        void deleteInputRequired() { this->inputRequired_ = nullptr;};
        inline string getInputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
        inline NameList& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
        inline NameList& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline NameList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outlier Field Functions 
        bool hasOutlier() const { return this->outlier_ != nullptr;};
        void deleteOutlier() { this->outlier_ = nullptr;};
        inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
        inline NameList& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


        // outputThreshold Field Functions 
        bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
        void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
        inline const NameList::OutputThreshold & getOutputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, NameList::OutputThreshold) };
        inline NameList::OutputThreshold getOutputThreshold() { DARABONBA_PTR_GET(outputThreshold_, NameList::OutputThreshold) };
        inline NameList& setOutputThreshold(const NameList::OutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
        inline NameList& setOutputThreshold(NameList::OutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


        // parentName Field Functions 
        bool hasParentName() const { return this->parentName_ != nullptr;};
        void deleteParentName() { this->parentName_ = nullptr;};
        inline string getParentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
        inline NameList& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline NameList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline NameList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline NameList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // variableVelocity Field Functions 
        bool hasVariableVelocity() const { return this->variableVelocity_ != nullptr;};
        void deleteVariableVelocity() { this->variableVelocity_ = nullptr;};
        inline const NameList::VariableVelocity & getVariableVelocity() const { DARABONBA_PTR_GET_CONST(variableVelocity_, NameList::VariableVelocity) };
        inline NameList::VariableVelocity getVariableVelocity() { DARABONBA_PTR_GET(variableVelocity_, NameList::VariableVelocity) };
        inline NameList& setVariableVelocity(const NameList::VariableVelocity & variableVelocity) { DARABONBA_PTR_SET_VALUE(variableVelocity_, variableVelocity) };
        inline NameList& setVariableVelocity(NameList::VariableVelocity && variableVelocity) { DARABONBA_PTR_SET_RVALUE(variableVelocity_, variableVelocity) };


        // xLabel Field Functions 
        bool hasXLabel() const { return this->xLabel_ != nullptr;};
        void deleteXLabel() { this->xLabel_ = nullptr;};
        inline string getXLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
        inline NameList& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


        // yLabel Field Functions 
        bool hasYLabel() const { return this->yLabel_ != nullptr;};
        void deleteYLabel() { this->yLabel_ = nullptr;};
        inline string getYLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
        inline NameList& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


      protected:
        // Variable code.
        shared_ptr<string> code_ {};
        // Data distribution display in JSON format. This field is not currently returned.
        shared_ptr<string> dataDisplay_ {};
        // Variable definition ID. This type of variable does not return this field.
        shared_ptr<string> defineId_ {};
        // Description information.
        shared_ptr<string> description_ {};
        // Display type and group label.
        shared_ptr<string> displayType_ {};
        // Calculate the expression display value. This type of variable does not return this field.
        shared_ptr<string> expressionTitle_ {};
        // Favorite identifier.
        shared_ptr<bool> favoriteFlag_ {};
        // Details of the field pool. This type of variable does not return this field.
        shared_ptr<string> fieldDetail_ {};
        // Field sorting.
        shared_ptr<int32_t> fieldRank_ {};
        // Source of the field. This type of variable does not return this field.
        shared_ptr<string> fieldSource_ {};
        // Field type. This field is not returned for this type of variable.
        shared_ptr<string> fieldType_ {};
        // Primary key ID.
        shared_ptr<int64_t> id_ {};
        // Input type of the parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputFieldType_ {};
        // Required parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputRequired_ {};
        // Input parameters. This field is not returned for this type of variable.
        shared_ptr<string> inputs_ {};
        // Variable name.
        shared_ptr<string> name_ {};
        // Outlier value. This field is not returned for this type of variable.
        shared_ptr<string> outlier_ {};
        // Output value threshold.
        shared_ptr<NameList::OutputThreshold> outputThreshold_ {};
        // Parent node. This field is not returned currently.
        shared_ptr<string> parentName_ {};
        // Source type.
        shared_ptr<string> sourceType_ {};
        // Title.
        shared_ptr<string> title_ {};
        // Variable type.
        shared_ptr<string> type_ {};
        // Variable metric information. This field is not returned for this type of variable.
        shared_ptr<NameList::VariableVelocity> variableVelocity_ {};
        // x label. This type of variable does not return this field.
        shared_ptr<string> xLabel_ {};
        // y label. This type of variable does not return this field.
        shared_ptr<string> yLabel_ {};
      };

      class ModelVariables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelVariables& obj) { 
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
        friend void from_json(const Darabonba::Json& j, ModelVariables& obj) { 
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
        ModelVariables() = default ;
        ModelVariables(const ModelVariables &) = default ;
        ModelVariables(ModelVariables &&) = default ;
        ModelVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelVariables() = default ;
        ModelVariables& operator=(const ModelVariables &) = default ;
        ModelVariables& operator=(ModelVariables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VariableVelocity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VariableVelocity& obj) { 
            DARABONBA_PTR_TO_JSON(iv, iv_);
          };
          friend void from_json(const Darabonba::Json& j, VariableVelocity& obj) { 
            DARABONBA_PTR_FROM_JSON(iv, iv_);
          };
          VariableVelocity() = default ;
          VariableVelocity(const VariableVelocity &) = default ;
          VariableVelocity(VariableVelocity &&) = default ;
          VariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VariableVelocity() = default ;
          VariableVelocity& operator=(const VariableVelocity &) = default ;
          VariableVelocity& operator=(VariableVelocity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->iv_ == nullptr; };
          // iv Field Functions 
          bool hasIv() const { return this->iv_ != nullptr;};
          void deleteIv() { this->iv_ = nullptr;};
          inline string getIv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
          inline VariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


        protected:
          // The IV value. This field is not returned for this type of variable.
          shared_ptr<string> iv_ {};
        };

        class OutputThreshold : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputThreshold& obj) { 
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
          };
          friend void from_json(const Darabonba::Json& j, OutputThreshold& obj) { 
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
          };
          OutputThreshold() = default ;
          OutputThreshold(const OutputThreshold &) = default ;
          OutputThreshold(OutputThreshold &&) = default ;
          OutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputThreshold() = default ;
          OutputThreshold& operator=(const OutputThreshold &) = default ;
          OutputThreshold& operator=(OutputThreshold &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr; };
          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
          inline OutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
          inline OutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        protected:
          // The maximum value.
          shared_ptr<double> maxValue_ {};
          // The minimum value.
          shared_ptr<double> minValue_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataDisplay_ == nullptr && this->defineId_ == nullptr && this->description_ == nullptr && this->displayType_ == nullptr && this->expressionTitle_ == nullptr
        && this->favoriteFlag_ == nullptr && this->fieldDetail_ == nullptr && this->fieldRank_ == nullptr && this->fieldSource_ == nullptr && this->fieldType_ == nullptr
        && this->id_ == nullptr && this->inputFieldType_ == nullptr && this->inputRequired_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr
        && this->outlier_ == nullptr && this->outputThreshold_ == nullptr && this->parentName_ == nullptr && this->sourceType_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr && this->variableVelocity_ == nullptr && this->xLabel_ == nullptr && this->yLabel_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline ModelVariables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataDisplay Field Functions 
        bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
        void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
        inline string getDataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
        inline ModelVariables& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


        // defineId Field Functions 
        bool hasDefineId() const { return this->defineId_ != nullptr;};
        void deleteDefineId() { this->defineId_ = nullptr;};
        inline string getDefineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
        inline ModelVariables& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ModelVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayType Field Functions 
        bool hasDisplayType() const { return this->displayType_ != nullptr;};
        void deleteDisplayType() { this->displayType_ = nullptr;};
        inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
        inline ModelVariables& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


        // expressionTitle Field Functions 
        bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
        void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
        inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
        inline ModelVariables& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


        // favoriteFlag Field Functions 
        bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
        void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
        inline bool getFavoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
        inline ModelVariables& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


        // fieldDetail Field Functions 
        bool hasFieldDetail() const { return this->fieldDetail_ != nullptr;};
        void deleteFieldDetail() { this->fieldDetail_ = nullptr;};
        inline string getFieldDetail() const { DARABONBA_PTR_GET_DEFAULT(fieldDetail_, "") };
        inline ModelVariables& setFieldDetail(string fieldDetail) { DARABONBA_PTR_SET_VALUE(fieldDetail_, fieldDetail) };


        // fieldRank Field Functions 
        bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
        void deleteFieldRank() { this->fieldRank_ = nullptr;};
        inline int32_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
        inline ModelVariables& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


        // fieldSource Field Functions 
        bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
        void deleteFieldSource() { this->fieldSource_ = nullptr;};
        inline string getFieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
        inline ModelVariables& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline ModelVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ModelVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputFieldType Field Functions 
        bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
        void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
        inline string getInputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
        inline ModelVariables& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


        // inputRequired Field Functions 
        bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
        void deleteInputRequired() { this->inputRequired_ = nullptr;};
        inline string getInputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
        inline ModelVariables& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
        inline ModelVariables& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ModelVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outlier Field Functions 
        bool hasOutlier() const { return this->outlier_ != nullptr;};
        void deleteOutlier() { this->outlier_ = nullptr;};
        inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
        inline ModelVariables& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


        // outputThreshold Field Functions 
        bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
        void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
        inline const ModelVariables::OutputThreshold & getOutputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, ModelVariables::OutputThreshold) };
        inline ModelVariables::OutputThreshold getOutputThreshold() { DARABONBA_PTR_GET(outputThreshold_, ModelVariables::OutputThreshold) };
        inline ModelVariables& setOutputThreshold(const ModelVariables::OutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
        inline ModelVariables& setOutputThreshold(ModelVariables::OutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


        // parentName Field Functions 
        bool hasParentName() const { return this->parentName_ != nullptr;};
        void deleteParentName() { this->parentName_ = nullptr;};
        inline string getParentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
        inline ModelVariables& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline ModelVariables& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline ModelVariables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ModelVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // variableVelocity Field Functions 
        bool hasVariableVelocity() const { return this->variableVelocity_ != nullptr;};
        void deleteVariableVelocity() { this->variableVelocity_ = nullptr;};
        inline const ModelVariables::VariableVelocity & getVariableVelocity() const { DARABONBA_PTR_GET_CONST(variableVelocity_, ModelVariables::VariableVelocity) };
        inline ModelVariables::VariableVelocity getVariableVelocity() { DARABONBA_PTR_GET(variableVelocity_, ModelVariables::VariableVelocity) };
        inline ModelVariables& setVariableVelocity(const ModelVariables::VariableVelocity & variableVelocity) { DARABONBA_PTR_SET_VALUE(variableVelocity_, variableVelocity) };
        inline ModelVariables& setVariableVelocity(ModelVariables::VariableVelocity && variableVelocity) { DARABONBA_PTR_SET_RVALUE(variableVelocity_, variableVelocity) };


        // xLabel Field Functions 
        bool hasXLabel() const { return this->xLabel_ != nullptr;};
        void deleteXLabel() { this->xLabel_ = nullptr;};
        inline string getXLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
        inline ModelVariables& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


        // yLabel Field Functions 
        bool hasYLabel() const { return this->yLabel_ != nullptr;};
        void deleteYLabel() { this->yLabel_ = nullptr;};
        inline string getYLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
        inline ModelVariables& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


      protected:
        // The code of the model variable.
        shared_ptr<string> code_ {};
        // Data distribution display, in JSON format. This field is not returned for this type of variable.
        shared_ptr<string> dataDisplay_ {};
        // The definition ID of the model variable. This field is not returned for this type of variable.
        shared_ptr<string> defineId_ {};
        // The description of the model variable.
        shared_ptr<string> description_ {};
        // The display type and grouping label.
        shared_ptr<string> displayType_ {};
        // The display value of the calculation expression. This field is not returned for this type of variable.
        shared_ptr<string> expressionTitle_ {};
        // The favorite flag.
        shared_ptr<bool> favoriteFlag_ {};
        // The detailed information of the field in the field pool. This field is not returned for this type of variable.
        shared_ptr<string> fieldDetail_ {};
        // The field rank.
        shared_ptr<int32_t> fieldRank_ {};
        // The source of the field. This field is not returned for this type of variable.
        shared_ptr<string> fieldSource_ {};
        // The type of the field.
        shared_ptr<string> fieldType_ {};
        // The primary key ID of the model variable.
        shared_ptr<int64_t> id_ {};
        // The input type of the parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputFieldType_ {};
        // The required parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputRequired_ {};
        // Multiple input parameters separated by commas. This field is not returned for this type of variable.
        shared_ptr<string> inputs_ {};
        // The name of the model variable.
        shared_ptr<string> name_ {};
        // The outlier value. This field is not returned for this type of variable.
        shared_ptr<string> outlier_ {};
        // The output value threshold.
        shared_ptr<ModelVariables::OutputThreshold> outputThreshold_ {};
        // The parent node. This field is not returned for this type of variable.
        shared_ptr<string> parentName_ {};
        // The source type.
        shared_ptr<string> sourceType_ {};
        // The title of the model variable.
        shared_ptr<string> title_ {};
        // The type of the model variable.
        shared_ptr<string> type_ {};
        // The variable metric information. This field is not returned for this type of variable.
        shared_ptr<ModelVariables::VariableVelocity> variableVelocity_ {};
        // The X label. This field is not returned for this type of variable.
        shared_ptr<string> xLabel_ {};
        // The Y label. This field is not returned for this type of variable.
        shared_ptr<string> yLabel_ {};
      };

      class MiddleVariables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MiddleVariables& obj) { 
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
        friend void from_json(const Darabonba::Json& j, MiddleVariables& obj) { 
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
        MiddleVariables() = default ;
        MiddleVariables(const MiddleVariables &) = default ;
        MiddleVariables(MiddleVariables &&) = default ;
        MiddleVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MiddleVariables() = default ;
        MiddleVariables& operator=(const MiddleVariables &) = default ;
        MiddleVariables& operator=(MiddleVariables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VariableVelocity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VariableVelocity& obj) { 
            DARABONBA_PTR_TO_JSON(iv, iv_);
          };
          friend void from_json(const Darabonba::Json& j, VariableVelocity& obj) { 
            DARABONBA_PTR_FROM_JSON(iv, iv_);
          };
          VariableVelocity() = default ;
          VariableVelocity(const VariableVelocity &) = default ;
          VariableVelocity(VariableVelocity &&) = default ;
          VariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VariableVelocity() = default ;
          VariableVelocity& operator=(const VariableVelocity &) = default ;
          VariableVelocity& operator=(VariableVelocity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->iv_ == nullptr; };
          // iv Field Functions 
          bool hasIv() const { return this->iv_ != nullptr;};
          void deleteIv() { this->iv_ = nullptr;};
          inline string getIv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
          inline VariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


        protected:
          // id value. This type of variable does not return this field.
          shared_ptr<string> iv_ {};
        };

        class OutputThreshold : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputThreshold& obj) { 
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
          };
          friend void from_json(const Darabonba::Json& j, OutputThreshold& obj) { 
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
          };
          OutputThreshold() = default ;
          OutputThreshold(const OutputThreshold &) = default ;
          OutputThreshold(OutputThreshold &&) = default ;
          OutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputThreshold() = default ;
          OutputThreshold& operator=(const OutputThreshold &) = default ;
          OutputThreshold& operator=(OutputThreshold &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr; };
          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
          inline OutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
          inline OutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        protected:
          // Maximum value.
          shared_ptr<double> maxValue_ {};
          // Minimum value.
          shared_ptr<double> minValue_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataDisplay_ == nullptr && this->defineId_ == nullptr && this->description_ == nullptr && this->displayType_ == nullptr && this->expressionTitle_ == nullptr
        && this->favoriteFlag_ == nullptr && this->fieldDetail_ == nullptr && this->fieldRank_ == nullptr && this->fieldSource_ == nullptr && this->fieldType_ == nullptr
        && this->id_ == nullptr && this->inputFieldType_ == nullptr && this->inputRequired_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr
        && this->outlier_ == nullptr && this->outputThreshold_ == nullptr && this->parentName_ == nullptr && this->sourceType_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr && this->variableVelocity_ == nullptr && this->xLabel_ == nullptr && this->yLabel_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline MiddleVariables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataDisplay Field Functions 
        bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
        void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
        inline string getDataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
        inline MiddleVariables& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


        // defineId Field Functions 
        bool hasDefineId() const { return this->defineId_ != nullptr;};
        void deleteDefineId() { this->defineId_ = nullptr;};
        inline string getDefineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
        inline MiddleVariables& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline MiddleVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayType Field Functions 
        bool hasDisplayType() const { return this->displayType_ != nullptr;};
        void deleteDisplayType() { this->displayType_ = nullptr;};
        inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
        inline MiddleVariables& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


        // expressionTitle Field Functions 
        bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
        void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
        inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
        inline MiddleVariables& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


        // favoriteFlag Field Functions 
        bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
        void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
        inline bool getFavoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
        inline MiddleVariables& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


        // fieldDetail Field Functions 
        bool hasFieldDetail() const { return this->fieldDetail_ != nullptr;};
        void deleteFieldDetail() { this->fieldDetail_ = nullptr;};
        inline string getFieldDetail() const { DARABONBA_PTR_GET_DEFAULT(fieldDetail_, "") };
        inline MiddleVariables& setFieldDetail(string fieldDetail) { DARABONBA_PTR_SET_VALUE(fieldDetail_, fieldDetail) };


        // fieldRank Field Functions 
        bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
        void deleteFieldRank() { this->fieldRank_ = nullptr;};
        inline int32_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
        inline MiddleVariables& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


        // fieldSource Field Functions 
        bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
        void deleteFieldSource() { this->fieldSource_ = nullptr;};
        inline string getFieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
        inline MiddleVariables& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline MiddleVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline MiddleVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputFieldType Field Functions 
        bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
        void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
        inline string getInputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
        inline MiddleVariables& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


        // inputRequired Field Functions 
        bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
        void deleteInputRequired() { this->inputRequired_ = nullptr;};
        inline string getInputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
        inline MiddleVariables& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
        inline MiddleVariables& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MiddleVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outlier Field Functions 
        bool hasOutlier() const { return this->outlier_ != nullptr;};
        void deleteOutlier() { this->outlier_ = nullptr;};
        inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
        inline MiddleVariables& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


        // outputThreshold Field Functions 
        bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
        void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
        inline const MiddleVariables::OutputThreshold & getOutputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, MiddleVariables::OutputThreshold) };
        inline MiddleVariables::OutputThreshold getOutputThreshold() { DARABONBA_PTR_GET(outputThreshold_, MiddleVariables::OutputThreshold) };
        inline MiddleVariables& setOutputThreshold(const MiddleVariables::OutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
        inline MiddleVariables& setOutputThreshold(MiddleVariables::OutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


        // parentName Field Functions 
        bool hasParentName() const { return this->parentName_ != nullptr;};
        void deleteParentName() { this->parentName_ = nullptr;};
        inline string getParentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
        inline MiddleVariables& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline MiddleVariables& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline MiddleVariables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline MiddleVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // variableVelocity Field Functions 
        bool hasVariableVelocity() const { return this->variableVelocity_ != nullptr;};
        void deleteVariableVelocity() { this->variableVelocity_ = nullptr;};
        inline const MiddleVariables::VariableVelocity & getVariableVelocity() const { DARABONBA_PTR_GET_CONST(variableVelocity_, MiddleVariables::VariableVelocity) };
        inline MiddleVariables::VariableVelocity getVariableVelocity() { DARABONBA_PTR_GET(variableVelocity_, MiddleVariables::VariableVelocity) };
        inline MiddleVariables& setVariableVelocity(const MiddleVariables::VariableVelocity & variableVelocity) { DARABONBA_PTR_SET_VALUE(variableVelocity_, variableVelocity) };
        inline MiddleVariables& setVariableVelocity(MiddleVariables::VariableVelocity && variableVelocity) { DARABONBA_PTR_SET_RVALUE(variableVelocity_, variableVelocity) };


        // xLabel Field Functions 
        bool hasXLabel() const { return this->xLabel_ != nullptr;};
        void deleteXLabel() { this->xLabel_ = nullptr;};
        inline string getXLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
        inline MiddleVariables& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


        // yLabel Field Functions 
        bool hasYLabel() const { return this->yLabel_ != nullptr;};
        void deleteYLabel() { this->yLabel_ = nullptr;};
        inline string getYLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
        inline MiddleVariables& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


      protected:
        // Variable code.
        shared_ptr<string> code_ {};
        // Data distribution display in JSON format. This field is not returned for this type of variable.
        shared_ptr<string> dataDisplay_ {};
        // Variable definition ID.
        shared_ptr<string> defineId_ {};
        // Variable description.
        shared_ptr<string> description_ {};
        // Display type and group label.
        shared_ptr<string> displayType_ {};
        // Calculate the display value of the expression. This type of variable does not return this field.
        shared_ptr<string> expressionTitle_ {};
        // Favorite identifier.
        shared_ptr<bool> favoriteFlag_ {};
        // Details of the field pool. This type of variable does not return this field.
        shared_ptr<string> fieldDetail_ {};
        // Field sorting.
        shared_ptr<int32_t> fieldRank_ {};
        // Variable source.
        shared_ptr<string> fieldSource_ {};
        // Field type.
        shared_ptr<string> fieldType_ {};
        // Primary key ID.
        shared_ptr<int64_t> id_ {};
        // Input field type, indicating the type of input parameters, mainly used for function classification. This type of variable does not return this field.
        shared_ptr<string> inputFieldType_ {};
        // Required parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputRequired_ {};
        // Input of the variable.
        shared_ptr<string> inputs_ {};
        // Variable name.
        shared_ptr<string> name_ {};
        // Outlier value. This field is not returned for this type of variable.
        shared_ptr<string> outlier_ {};
        // Output value threshold.
        shared_ptr<MiddleVariables::OutputThreshold> outputThreshold_ {};
        // Parent node. This field is not returned for this type of variable.
        shared_ptr<string> parentName_ {};
        // Source type.
        shared_ptr<string> sourceType_ {};
        // Title.
        shared_ptr<string> title_ {};
        // Variable type.
        shared_ptr<string> type_ {};
        // Variable metric information. This type of variable does not return this field.
        shared_ptr<MiddleVariables::VariableVelocity> variableVelocity_ {};
        // x label. This type of variable does not return this field.
        shared_ptr<string> xLabel_ {};
        // y label. This type of variable does not return this field.
        shared_ptr<string> yLabel_ {};
      };

      class FavoriteVariables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FavoriteVariables& obj) { 
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
        friend void from_json(const Darabonba::Json& j, FavoriteVariables& obj) { 
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
        FavoriteVariables() = default ;
        FavoriteVariables(const FavoriteVariables &) = default ;
        FavoriteVariables(FavoriteVariables &&) = default ;
        FavoriteVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FavoriteVariables() = default ;
        FavoriteVariables& operator=(const FavoriteVariables &) = default ;
        FavoriteVariables& operator=(FavoriteVariables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VariableVelocity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VariableVelocity& obj) { 
            DARABONBA_PTR_TO_JSON(iv, iv_);
          };
          friend void from_json(const Darabonba::Json& j, VariableVelocity& obj) { 
            DARABONBA_PTR_FROM_JSON(iv, iv_);
          };
          VariableVelocity() = default ;
          VariableVelocity(const VariableVelocity &) = default ;
          VariableVelocity(VariableVelocity &&) = default ;
          VariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VariableVelocity() = default ;
          VariableVelocity& operator=(const VariableVelocity &) = default ;
          VariableVelocity& operator=(VariableVelocity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->iv_ == nullptr; };
          // iv Field Functions 
          bool hasIv() const { return this->iv_ != nullptr;};
          void deleteIv() { this->iv_ = nullptr;};
          inline string getIv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
          inline VariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


        protected:
          // iv value. This type of variable does not return this field.
          shared_ptr<string> iv_ {};
        };

        class OutputThreshold : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputThreshold& obj) { 
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
          };
          friend void from_json(const Darabonba::Json& j, OutputThreshold& obj) { 
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
          };
          OutputThreshold() = default ;
          OutputThreshold(const OutputThreshold &) = default ;
          OutputThreshold(OutputThreshold &&) = default ;
          OutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputThreshold() = default ;
          OutputThreshold& operator=(const OutputThreshold &) = default ;
          OutputThreshold& operator=(OutputThreshold &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr; };
          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
          inline OutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
          inline OutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        protected:
          // Maximum value.
          shared_ptr<double> maxValue_ {};
          // Minimum value.
          shared_ptr<double> minValue_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataDisplay_ == nullptr && this->defineId_ == nullptr && this->description_ == nullptr && this->displayType_ == nullptr && this->expressionTitle_ == nullptr
        && this->favoriteFlag_ == nullptr && this->fieldDetail_ == nullptr && this->fieldRank_ == nullptr && this->fieldSource_ == nullptr && this->fieldType_ == nullptr
        && this->id_ == nullptr && this->inputFieldType_ == nullptr && this->inputRequired_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr
        && this->outlier_ == nullptr && this->outputThreshold_ == nullptr && this->parentName_ == nullptr && this->sourceType_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr && this->variableVelocity_ == nullptr && this->xLabel_ == nullptr && this->yLabel_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline FavoriteVariables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataDisplay Field Functions 
        bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
        void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
        inline string getDataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
        inline FavoriteVariables& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


        // defineId Field Functions 
        bool hasDefineId() const { return this->defineId_ != nullptr;};
        void deleteDefineId() { this->defineId_ = nullptr;};
        inline string getDefineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
        inline FavoriteVariables& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline FavoriteVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayType Field Functions 
        bool hasDisplayType() const { return this->displayType_ != nullptr;};
        void deleteDisplayType() { this->displayType_ = nullptr;};
        inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
        inline FavoriteVariables& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


        // expressionTitle Field Functions 
        bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
        void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
        inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
        inline FavoriteVariables& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


        // favoriteFlag Field Functions 
        bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
        void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
        inline bool getFavoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
        inline FavoriteVariables& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


        // fieldDetail Field Functions 
        bool hasFieldDetail() const { return this->fieldDetail_ != nullptr;};
        void deleteFieldDetail() { this->fieldDetail_ = nullptr;};
        inline string getFieldDetail() const { DARABONBA_PTR_GET_DEFAULT(fieldDetail_, "") };
        inline FavoriteVariables& setFieldDetail(string fieldDetail) { DARABONBA_PTR_SET_VALUE(fieldDetail_, fieldDetail) };


        // fieldRank Field Functions 
        bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
        void deleteFieldRank() { this->fieldRank_ = nullptr;};
        inline int32_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
        inline FavoriteVariables& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


        // fieldSource Field Functions 
        bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
        void deleteFieldSource() { this->fieldSource_ = nullptr;};
        inline string getFieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
        inline FavoriteVariables& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline FavoriteVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline FavoriteVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputFieldType Field Functions 
        bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
        void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
        inline string getInputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
        inline FavoriteVariables& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


        // inputRequired Field Functions 
        bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
        void deleteInputRequired() { this->inputRequired_ = nullptr;};
        inline string getInputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
        inline FavoriteVariables& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
        inline FavoriteVariables& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FavoriteVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outlier Field Functions 
        bool hasOutlier() const { return this->outlier_ != nullptr;};
        void deleteOutlier() { this->outlier_ = nullptr;};
        inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
        inline FavoriteVariables& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


        // outputThreshold Field Functions 
        bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
        void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
        inline const FavoriteVariables::OutputThreshold & getOutputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, FavoriteVariables::OutputThreshold) };
        inline FavoriteVariables::OutputThreshold getOutputThreshold() { DARABONBA_PTR_GET(outputThreshold_, FavoriteVariables::OutputThreshold) };
        inline FavoriteVariables& setOutputThreshold(const FavoriteVariables::OutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
        inline FavoriteVariables& setOutputThreshold(FavoriteVariables::OutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


        // parentName Field Functions 
        bool hasParentName() const { return this->parentName_ != nullptr;};
        void deleteParentName() { this->parentName_ = nullptr;};
        inline string getParentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
        inline FavoriteVariables& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline FavoriteVariables& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline FavoriteVariables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline FavoriteVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // variableVelocity Field Functions 
        bool hasVariableVelocity() const { return this->variableVelocity_ != nullptr;};
        void deleteVariableVelocity() { this->variableVelocity_ = nullptr;};
        inline const FavoriteVariables::VariableVelocity & getVariableVelocity() const { DARABONBA_PTR_GET_CONST(variableVelocity_, FavoriteVariables::VariableVelocity) };
        inline FavoriteVariables::VariableVelocity getVariableVelocity() { DARABONBA_PTR_GET(variableVelocity_, FavoriteVariables::VariableVelocity) };
        inline FavoriteVariables& setVariableVelocity(const FavoriteVariables::VariableVelocity & variableVelocity) { DARABONBA_PTR_SET_VALUE(variableVelocity_, variableVelocity) };
        inline FavoriteVariables& setVariableVelocity(FavoriteVariables::VariableVelocity && variableVelocity) { DARABONBA_PTR_SET_RVALUE(variableVelocity_, variableVelocity) };


        // xLabel Field Functions 
        bool hasXLabel() const { return this->xLabel_ != nullptr;};
        void deleteXLabel() { this->xLabel_ = nullptr;};
        inline string getXLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
        inline FavoriteVariables& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


        // yLabel Field Functions 
        bool hasYLabel() const { return this->yLabel_ != nullptr;};
        void deleteYLabel() { this->yLabel_ = nullptr;};
        inline string getYLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
        inline FavoriteVariables& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


      protected:
        // Variable code.
        shared_ptr<string> code_ {};
        // Data distribution display in JSON format. This field is not returned for this type of variable.
        shared_ptr<string> dataDisplay_ {};
        // Variable definition ID.
        shared_ptr<string> defineId_ {};
        // Description of the variable.
        shared_ptr<string> description_ {};
        // Display type and group label.
        shared_ptr<string> displayType_ {};
        // Expression display value. This type of variable does not return this field.
        shared_ptr<string> expressionTitle_ {};
        // Favorite identifier.
        shared_ptr<bool> favoriteFlag_ {};
        // Details of the field pool. This type of variable does not return this field.
        shared_ptr<string> fieldDetail_ {};
        // Field sorting.
        shared_ptr<int32_t> fieldRank_ {};
        // Source of the field. This type of variable does not return this field.
        shared_ptr<string> fieldSource_ {};
        // Field type.
        shared_ptr<string> fieldType_ {};
        // Primary key ID.
        shared_ptr<int64_t> id_ {};
        // Input type of the parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputFieldType_ {};
        // Required parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputRequired_ {};
        // Input parameters should be separated by commas. Some variables may not have this field.
        shared_ptr<string> inputs_ {};
        // Variable name.
        shared_ptr<string> name_ {};
        // Anomaly value. This field is not returned for this type of variable.
        shared_ptr<string> outlier_ {};
        // Output value threshold.
        shared_ptr<FavoriteVariables::OutputThreshold> outputThreshold_ {};
        // Parent node. This field is not returned for this type of variable.
        shared_ptr<string> parentName_ {};
        // Source type.
        shared_ptr<string> sourceType_ {};
        // Title.
        shared_ptr<string> title_ {};
        // Variable type.
        shared_ptr<string> type_ {};
        // Variable metric information. This field is not returned for this type of variable.
        shared_ptr<FavoriteVariables::VariableVelocity> variableVelocity_ {};
        // x label. This type of variable does not return this field.
        shared_ptr<string> xLabel_ {};
        // y label. This type of variable does not return this field.
        shared_ptr<string> yLabel_ {};
      };

      class ExpressionVariables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExpressionVariables& obj) { 
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
        friend void from_json(const Darabonba::Json& j, ExpressionVariables& obj) { 
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
        ExpressionVariables() = default ;
        ExpressionVariables(const ExpressionVariables &) = default ;
        ExpressionVariables(ExpressionVariables &&) = default ;
        ExpressionVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExpressionVariables() = default ;
        ExpressionVariables& operator=(const ExpressionVariables &) = default ;
        ExpressionVariables& operator=(ExpressionVariables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VariableVelocity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VariableVelocity& obj) { 
            DARABONBA_PTR_TO_JSON(iv, iv_);
          };
          friend void from_json(const Darabonba::Json& j, VariableVelocity& obj) { 
            DARABONBA_PTR_FROM_JSON(iv, iv_);
          };
          VariableVelocity() = default ;
          VariableVelocity(const VariableVelocity &) = default ;
          VariableVelocity(VariableVelocity &&) = default ;
          VariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VariableVelocity() = default ;
          VariableVelocity& operator=(const VariableVelocity &) = default ;
          VariableVelocity& operator=(VariableVelocity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->iv_ == nullptr; };
          // iv Field Functions 
          bool hasIv() const { return this->iv_ != nullptr;};
          void deleteIv() { this->iv_ = nullptr;};
          inline string getIv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
          inline VariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


        protected:
          // The IV value. This field is not returned for this type of variable.
          shared_ptr<string> iv_ {};
        };

        class OutputThreshold : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputThreshold& obj) { 
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
          };
          friend void from_json(const Darabonba::Json& j, OutputThreshold& obj) { 
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
          };
          OutputThreshold() = default ;
          OutputThreshold(const OutputThreshold &) = default ;
          OutputThreshold(OutputThreshold &&) = default ;
          OutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputThreshold() = default ;
          OutputThreshold& operator=(const OutputThreshold &) = default ;
          OutputThreshold& operator=(OutputThreshold &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr; };
          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
          inline OutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
          inline OutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        protected:
          // The maximum value.
          shared_ptr<double> maxValue_ {};
          // The minimum value.
          shared_ptr<double> minValue_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataDisplay_ == nullptr && this->defineId_ == nullptr && this->description_ == nullptr && this->displayType_ == nullptr && this->expressionTitle_ == nullptr
        && this->favoriteFlag_ == nullptr && this->fieldDetail_ == nullptr && this->fieldRank_ == nullptr && this->fieldSource_ == nullptr && this->fieldType_ == nullptr
        && this->id_ == nullptr && this->inputFieldType_ == nullptr && this->inputRequired_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr
        && this->outlier_ == nullptr && this->outputThreshold_ == nullptr && this->parentName_ == nullptr && this->sourceType_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr && this->variableVelocity_ == nullptr && this->xLabel_ == nullptr && this->yLabel_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline ExpressionVariables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataDisplay Field Functions 
        bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
        void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
        inline string getDataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
        inline ExpressionVariables& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


        // defineId Field Functions 
        bool hasDefineId() const { return this->defineId_ != nullptr;};
        void deleteDefineId() { this->defineId_ = nullptr;};
        inline string getDefineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
        inline ExpressionVariables& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ExpressionVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayType Field Functions 
        bool hasDisplayType() const { return this->displayType_ != nullptr;};
        void deleteDisplayType() { this->displayType_ = nullptr;};
        inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
        inline ExpressionVariables& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


        // expressionTitle Field Functions 
        bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
        void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
        inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
        inline ExpressionVariables& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


        // favoriteFlag Field Functions 
        bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
        void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
        inline bool getFavoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
        inline ExpressionVariables& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


        // fieldDetail Field Functions 
        bool hasFieldDetail() const { return this->fieldDetail_ != nullptr;};
        void deleteFieldDetail() { this->fieldDetail_ = nullptr;};
        inline string getFieldDetail() const { DARABONBA_PTR_GET_DEFAULT(fieldDetail_, "") };
        inline ExpressionVariables& setFieldDetail(string fieldDetail) { DARABONBA_PTR_SET_VALUE(fieldDetail_, fieldDetail) };


        // fieldRank Field Functions 
        bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
        void deleteFieldRank() { this->fieldRank_ = nullptr;};
        inline int32_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
        inline ExpressionVariables& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


        // fieldSource Field Functions 
        bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
        void deleteFieldSource() { this->fieldSource_ = nullptr;};
        inline string getFieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
        inline ExpressionVariables& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline ExpressionVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ExpressionVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputFieldType Field Functions 
        bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
        void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
        inline string getInputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
        inline ExpressionVariables& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


        // inputRequired Field Functions 
        bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
        void deleteInputRequired() { this->inputRequired_ = nullptr;};
        inline string getInputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
        inline ExpressionVariables& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
        inline ExpressionVariables& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ExpressionVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outlier Field Functions 
        bool hasOutlier() const { return this->outlier_ != nullptr;};
        void deleteOutlier() { this->outlier_ = nullptr;};
        inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
        inline ExpressionVariables& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


        // outputThreshold Field Functions 
        bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
        void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
        inline const ExpressionVariables::OutputThreshold & getOutputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, ExpressionVariables::OutputThreshold) };
        inline ExpressionVariables::OutputThreshold getOutputThreshold() { DARABONBA_PTR_GET(outputThreshold_, ExpressionVariables::OutputThreshold) };
        inline ExpressionVariables& setOutputThreshold(const ExpressionVariables::OutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
        inline ExpressionVariables& setOutputThreshold(ExpressionVariables::OutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


        // parentName Field Functions 
        bool hasParentName() const { return this->parentName_ != nullptr;};
        void deleteParentName() { this->parentName_ = nullptr;};
        inline string getParentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
        inline ExpressionVariables& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline ExpressionVariables& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline ExpressionVariables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ExpressionVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // variableVelocity Field Functions 
        bool hasVariableVelocity() const { return this->variableVelocity_ != nullptr;};
        void deleteVariableVelocity() { this->variableVelocity_ = nullptr;};
        inline const ExpressionVariables::VariableVelocity & getVariableVelocity() const { DARABONBA_PTR_GET_CONST(variableVelocity_, ExpressionVariables::VariableVelocity) };
        inline ExpressionVariables::VariableVelocity getVariableVelocity() { DARABONBA_PTR_GET(variableVelocity_, ExpressionVariables::VariableVelocity) };
        inline ExpressionVariables& setVariableVelocity(const ExpressionVariables::VariableVelocity & variableVelocity) { DARABONBA_PTR_SET_VALUE(variableVelocity_, variableVelocity) };
        inline ExpressionVariables& setVariableVelocity(ExpressionVariables::VariableVelocity && variableVelocity) { DARABONBA_PTR_SET_RVALUE(variableVelocity_, variableVelocity) };


        // xLabel Field Functions 
        bool hasXLabel() const { return this->xLabel_ != nullptr;};
        void deleteXLabel() { this->xLabel_ = nullptr;};
        inline string getXLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
        inline ExpressionVariables& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


        // yLabel Field Functions 
        bool hasYLabel() const { return this->yLabel_ != nullptr;};
        void deleteYLabel() { this->yLabel_ = nullptr;};
        inline string getYLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
        inline ExpressionVariables& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


      protected:
        // The code of the variable.
        shared_ptr<string> code_ {};
        // Data distribution display, in JSON format. This field is not returned for this type of variable.
        shared_ptr<string> dataDisplay_ {};
        // The definition ID of the variable. This field is not returned for this type of variable.
        shared_ptr<string> defineId_ {};
        // The description of the variable.
        shared_ptr<string> description_ {};
        // The display type and grouping label.
        shared_ptr<string> displayType_ {};
        // The display value of the calculation expression.
        shared_ptr<string> expressionTitle_ {};
        // The favorite flag.
        shared_ptr<bool> favoriteFlag_ {};
        // The detailed information of the field in the field pool. This field is not returned for this type of variable.
        shared_ptr<string> fieldDetail_ {};
        // The field rank.
        shared_ptr<int32_t> fieldRank_ {};
        // The source of the field. This field is not returned for this type of variable.
        shared_ptr<string> fieldSource_ {};
        // The input type of the variable.
        shared_ptr<string> fieldType_ {};
        // Primary key ID.
        shared_ptr<int64_t> id_ {};
        // The input type of the parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputFieldType_ {};
        // The required parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputRequired_ {};
        // Multiple input parameters separated by commas. This field is not returned for this type of variable.
        shared_ptr<string> inputs_ {};
        // The name of the variable.
        shared_ptr<string> name_ {};
        // The outlier value.
        shared_ptr<string> outlier_ {};
        // The output value threshold.
        shared_ptr<ExpressionVariables::OutputThreshold> outputThreshold_ {};
        // The parent node. This field is not returned for this type of variable.
        shared_ptr<string> parentName_ {};
        // The source type.
        shared_ptr<string> sourceType_ {};
        // Title.
        shared_ptr<string> title_ {};
        // The type of the variable.
        shared_ptr<string> type_ {};
        // The variable metric information. This field is not returned for this type of variable.
        shared_ptr<ExpressionVariables::VariableVelocity> variableVelocity_ {};
        // The X label. This field is not returned for this type of variable.
        shared_ptr<string> xLabel_ {};
        // The Y label. This field is not returned for this type of variable.
        shared_ptr<string> yLabel_ {};
      };

      class DeviceVariables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceVariables& obj) { 
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
        friend void from_json(const Darabonba::Json& j, DeviceVariables& obj) { 
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
        DeviceVariables() = default ;
        DeviceVariables(const DeviceVariables &) = default ;
        DeviceVariables(DeviceVariables &&) = default ;
        DeviceVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceVariables() = default ;
        DeviceVariables& operator=(const DeviceVariables &) = default ;
        DeviceVariables& operator=(DeviceVariables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VariableVelocity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VariableVelocity& obj) { 
            DARABONBA_PTR_TO_JSON(iv, iv_);
          };
          friend void from_json(const Darabonba::Json& j, VariableVelocity& obj) { 
            DARABONBA_PTR_FROM_JSON(iv, iv_);
          };
          VariableVelocity() = default ;
          VariableVelocity(const VariableVelocity &) = default ;
          VariableVelocity(VariableVelocity &&) = default ;
          VariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VariableVelocity() = default ;
          VariableVelocity& operator=(const VariableVelocity &) = default ;
          VariableVelocity& operator=(VariableVelocity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->iv_ == nullptr; };
          // iv Field Functions 
          bool hasIv() const { return this->iv_ != nullptr;};
          void deleteIv() { this->iv_ = nullptr;};
          inline string getIv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
          inline VariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


        protected:
          // The IV value. This field is not returned for this type of variable.
          shared_ptr<string> iv_ {};
        };

        class OutputThreshold : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputThreshold& obj) { 
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
          };
          friend void from_json(const Darabonba::Json& j, OutputThreshold& obj) { 
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
          };
          OutputThreshold() = default ;
          OutputThreshold(const OutputThreshold &) = default ;
          OutputThreshold(OutputThreshold &&) = default ;
          OutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputThreshold() = default ;
          OutputThreshold& operator=(const OutputThreshold &) = default ;
          OutputThreshold& operator=(OutputThreshold &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr; };
          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
          inline OutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
          inline OutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        protected:
          // The minimum value.
          shared_ptr<double> maxValue_ {};
          // The minimum value.
          shared_ptr<double> minValue_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataDisplay_ == nullptr && this->defineId_ == nullptr && this->description_ == nullptr && this->displayType_ == nullptr && this->expressionTitle_ == nullptr
        && this->favoriteFlag_ == nullptr && this->fieldDetail_ == nullptr && this->fieldRank_ == nullptr && this->fieldSource_ == nullptr && this->fieldType_ == nullptr
        && this->id_ == nullptr && this->inputFieldType_ == nullptr && this->inputRequired_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr
        && this->outlier_ == nullptr && this->outputThreshold_ == nullptr && this->parentName_ == nullptr && this->sourceType_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr && this->variableVelocity_ == nullptr && this->xLabel_ == nullptr && this->yLabel_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline DeviceVariables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataDisplay Field Functions 
        bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
        void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
        inline string getDataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
        inline DeviceVariables& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


        // defineId Field Functions 
        bool hasDefineId() const { return this->defineId_ != nullptr;};
        void deleteDefineId() { this->defineId_ = nullptr;};
        inline string getDefineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
        inline DeviceVariables& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DeviceVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayType Field Functions 
        bool hasDisplayType() const { return this->displayType_ != nullptr;};
        void deleteDisplayType() { this->displayType_ = nullptr;};
        inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
        inline DeviceVariables& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


        // expressionTitle Field Functions 
        bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
        void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
        inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
        inline DeviceVariables& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


        // favoriteFlag Field Functions 
        bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
        void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
        inline bool getFavoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
        inline DeviceVariables& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


        // fieldDetail Field Functions 
        bool hasFieldDetail() const { return this->fieldDetail_ != nullptr;};
        void deleteFieldDetail() { this->fieldDetail_ = nullptr;};
        inline string getFieldDetail() const { DARABONBA_PTR_GET_DEFAULT(fieldDetail_, "") };
        inline DeviceVariables& setFieldDetail(string fieldDetail) { DARABONBA_PTR_SET_VALUE(fieldDetail_, fieldDetail) };


        // fieldRank Field Functions 
        bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
        void deleteFieldRank() { this->fieldRank_ = nullptr;};
        inline int32_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
        inline DeviceVariables& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


        // fieldSource Field Functions 
        bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
        void deleteFieldSource() { this->fieldSource_ = nullptr;};
        inline string getFieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
        inline DeviceVariables& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline DeviceVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DeviceVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputFieldType Field Functions 
        bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
        void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
        inline string getInputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
        inline DeviceVariables& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


        // inputRequired Field Functions 
        bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
        void deleteInputRequired() { this->inputRequired_ = nullptr;};
        inline string getInputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
        inline DeviceVariables& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
        inline DeviceVariables& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DeviceVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outlier Field Functions 
        bool hasOutlier() const { return this->outlier_ != nullptr;};
        void deleteOutlier() { this->outlier_ = nullptr;};
        inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
        inline DeviceVariables& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


        // outputThreshold Field Functions 
        bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
        void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
        inline const DeviceVariables::OutputThreshold & getOutputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, DeviceVariables::OutputThreshold) };
        inline DeviceVariables::OutputThreshold getOutputThreshold() { DARABONBA_PTR_GET(outputThreshold_, DeviceVariables::OutputThreshold) };
        inline DeviceVariables& setOutputThreshold(const DeviceVariables::OutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
        inline DeviceVariables& setOutputThreshold(DeviceVariables::OutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


        // parentName Field Functions 
        bool hasParentName() const { return this->parentName_ != nullptr;};
        void deleteParentName() { this->parentName_ = nullptr;};
        inline string getParentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
        inline DeviceVariables& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline DeviceVariables& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline DeviceVariables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DeviceVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // variableVelocity Field Functions 
        bool hasVariableVelocity() const { return this->variableVelocity_ != nullptr;};
        void deleteVariableVelocity() { this->variableVelocity_ = nullptr;};
        inline const DeviceVariables::VariableVelocity & getVariableVelocity() const { DARABONBA_PTR_GET_CONST(variableVelocity_, DeviceVariables::VariableVelocity) };
        inline DeviceVariables::VariableVelocity getVariableVelocity() { DARABONBA_PTR_GET(variableVelocity_, DeviceVariables::VariableVelocity) };
        inline DeviceVariables& setVariableVelocity(const DeviceVariables::VariableVelocity & variableVelocity) { DARABONBA_PTR_SET_VALUE(variableVelocity_, variableVelocity) };
        inline DeviceVariables& setVariableVelocity(DeviceVariables::VariableVelocity && variableVelocity) { DARABONBA_PTR_SET_RVALUE(variableVelocity_, variableVelocity) };


        // xLabel Field Functions 
        bool hasXLabel() const { return this->xLabel_ != nullptr;};
        void deleteXLabel() { this->xLabel_ = nullptr;};
        inline string getXLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
        inline DeviceVariables& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


        // yLabel Field Functions 
        bool hasYLabel() const { return this->yLabel_ != nullptr;};
        void deleteYLabel() { this->yLabel_ = nullptr;};
        inline string getYLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
        inline DeviceVariables& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


      protected:
        // Variable code.
        shared_ptr<string> code_ {};
        // Data distribution display in JSON format. This field is not returned for this type of variable.
        shared_ptr<string> dataDisplay_ {};
        // Variable definition ID. This type of variable does not return this field.
        shared_ptr<string> defineId_ {};
        // Description information.
        shared_ptr<string> description_ {};
        // The display type and grouping label.
        shared_ptr<string> displayType_ {};
        // The display value of the calculation expression. This field is not returned for this type of variable.
        shared_ptr<string> expressionTitle_ {};
        // The favorite flag.
        shared_ptr<bool> favoriteFlag_ {};
        // The detailed information of the field in the field pool. This field is not returned for this type of variable.
        shared_ptr<string> fieldDetail_ {};
        // The field rank.
        shared_ptr<int32_t> fieldRank_ {};
        // The source of the field. This field is not returned for this type of variable.
        shared_ptr<string> fieldSource_ {};
        // Field type.
        shared_ptr<string> fieldType_ {};
        // Primary key ID.
        shared_ptr<int64_t> id_ {};
        // The input type of the parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputFieldType_ {};
        // The required parameter. This field is not returned for this type of variable.
        shared_ptr<string> inputRequired_ {};
        // Input for the variable. This field is not returned for this type of variable.
        shared_ptr<string> inputs_ {};
        // Variable name.
        shared_ptr<string> name_ {};
        // The outlier value. This field is not returned for this type of variable.
        shared_ptr<string> outlier_ {};
        // The output value threshold.
        shared_ptr<DeviceVariables::OutputThreshold> outputThreshold_ {};
        // Parent node. This field is not returned for this type of variable.
        shared_ptr<string> parentName_ {};
        // The source type.
        shared_ptr<string> sourceType_ {};
        // Title.
        shared_ptr<string> title_ {};
        // Variable type.
        shared_ptr<string> type_ {};
        // The variable metric information. This field is not returned for this type of variable.
        shared_ptr<DeviceVariables::VariableVelocity> variableVelocity_ {};
        // The X label. This field is not returned for this type of variable.
        shared_ptr<string> xLabel_ {};
        // The Y label. This field is not returned for this type of variable.
        shared_ptr<string> yLabel_ {};
      };

      class Actions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Actions& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Actions& obj) { 
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
        Actions() = default ;
        Actions(const Actions &) = default ;
        Actions(Actions &&) = default ;
        Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Actions() = default ;
        Actions& operator=(const Actions &) = default ;
        Actions& operator=(Actions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VariableVelocity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VariableVelocity& obj) { 
            DARABONBA_PTR_TO_JSON(iv, iv_);
          };
          friend void from_json(const Darabonba::Json& j, VariableVelocity& obj) { 
            DARABONBA_PTR_FROM_JSON(iv, iv_);
          };
          VariableVelocity() = default ;
          VariableVelocity(const VariableVelocity &) = default ;
          VariableVelocity(VariableVelocity &&) = default ;
          VariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VariableVelocity() = default ;
          VariableVelocity& operator=(const VariableVelocity &) = default ;
          VariableVelocity& operator=(VariableVelocity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->iv_ == nullptr; };
          // iv Field Functions 
          bool hasIv() const { return this->iv_ != nullptr;};
          void deleteIv() { this->iv_ = nullptr;};
          inline string getIv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
          inline VariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


        protected:
          // iv value. This type of variable does not return this field.
          shared_ptr<string> iv_ {};
        };

        class OutputThreshold : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputThreshold& obj) { 
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
          };
          friend void from_json(const Darabonba::Json& j, OutputThreshold& obj) { 
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
          };
          OutputThreshold() = default ;
          OutputThreshold(const OutputThreshold &) = default ;
          OutputThreshold(OutputThreshold &&) = default ;
          OutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputThreshold() = default ;
          OutputThreshold& operator=(const OutputThreshold &) = default ;
          OutputThreshold& operator=(OutputThreshold &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr; };
          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
          inline OutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
          inline OutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        protected:
          // Maximum value.
          shared_ptr<double> maxValue_ {};
          // Minimum value.
          shared_ptr<double> minValue_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataDisplay_ == nullptr && this->defineId_ == nullptr && this->description_ == nullptr && this->displayType_ == nullptr && this->expressionTitle_ == nullptr
        && this->favoriteFlag_ == nullptr && this->fieldDetail_ == nullptr && this->fieldRank_ == nullptr && this->fieldSource_ == nullptr && this->fieldType_ == nullptr
        && this->id_ == nullptr && this->inputFieldType_ == nullptr && this->inputRequired_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr
        && this->outlier_ == nullptr && this->outputThreshold_ == nullptr && this->parentName_ == nullptr && this->sourceType_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr && this->variableVelocity_ == nullptr && this->xLabel_ == nullptr && this->yLabel_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Actions& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataDisplay Field Functions 
        bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
        void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
        inline string getDataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
        inline Actions& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


        // defineId Field Functions 
        bool hasDefineId() const { return this->defineId_ != nullptr;};
        void deleteDefineId() { this->defineId_ = nullptr;};
        inline string getDefineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
        inline Actions& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Actions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayType Field Functions 
        bool hasDisplayType() const { return this->displayType_ != nullptr;};
        void deleteDisplayType() { this->displayType_ = nullptr;};
        inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
        inline Actions& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


        // expressionTitle Field Functions 
        bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
        void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
        inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
        inline Actions& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


        // favoriteFlag Field Functions 
        bool hasFavoriteFlag() const { return this->favoriteFlag_ != nullptr;};
        void deleteFavoriteFlag() { this->favoriteFlag_ = nullptr;};
        inline bool getFavoriteFlag() const { DARABONBA_PTR_GET_DEFAULT(favoriteFlag_, false) };
        inline Actions& setFavoriteFlag(bool favoriteFlag) { DARABONBA_PTR_SET_VALUE(favoriteFlag_, favoriteFlag) };


        // fieldDetail Field Functions 
        bool hasFieldDetail() const { return this->fieldDetail_ != nullptr;};
        void deleteFieldDetail() { this->fieldDetail_ = nullptr;};
        inline string getFieldDetail() const { DARABONBA_PTR_GET_DEFAULT(fieldDetail_, "") };
        inline Actions& setFieldDetail(string fieldDetail) { DARABONBA_PTR_SET_VALUE(fieldDetail_, fieldDetail) };


        // fieldRank Field Functions 
        bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
        void deleteFieldRank() { this->fieldRank_ = nullptr;};
        inline int32_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
        inline Actions& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


        // fieldSource Field Functions 
        bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
        void deleteFieldSource() { this->fieldSource_ = nullptr;};
        inline string getFieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
        inline Actions& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline Actions& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Actions& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputFieldType Field Functions 
        bool hasInputFieldType() const { return this->inputFieldType_ != nullptr;};
        void deleteInputFieldType() { this->inputFieldType_ = nullptr;};
        inline string getInputFieldType() const { DARABONBA_PTR_GET_DEFAULT(inputFieldType_, "") };
        inline Actions& setInputFieldType(string inputFieldType) { DARABONBA_PTR_SET_VALUE(inputFieldType_, inputFieldType) };


        // inputRequired Field Functions 
        bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
        void deleteInputRequired() { this->inputRequired_ = nullptr;};
        inline string getInputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
        inline Actions& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
        inline Actions& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Actions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outlier Field Functions 
        bool hasOutlier() const { return this->outlier_ != nullptr;};
        void deleteOutlier() { this->outlier_ = nullptr;};
        inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
        inline Actions& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


        // outputThreshold Field Functions 
        bool hasOutputThreshold() const { return this->outputThreshold_ != nullptr;};
        void deleteOutputThreshold() { this->outputThreshold_ = nullptr;};
        inline const Actions::OutputThreshold & getOutputThreshold() const { DARABONBA_PTR_GET_CONST(outputThreshold_, Actions::OutputThreshold) };
        inline Actions::OutputThreshold getOutputThreshold() { DARABONBA_PTR_GET(outputThreshold_, Actions::OutputThreshold) };
        inline Actions& setOutputThreshold(const Actions::OutputThreshold & outputThreshold) { DARABONBA_PTR_SET_VALUE(outputThreshold_, outputThreshold) };
        inline Actions& setOutputThreshold(Actions::OutputThreshold && outputThreshold) { DARABONBA_PTR_SET_RVALUE(outputThreshold_, outputThreshold) };


        // parentName Field Functions 
        bool hasParentName() const { return this->parentName_ != nullptr;};
        void deleteParentName() { this->parentName_ = nullptr;};
        inline string getParentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
        inline Actions& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Actions& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Actions& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Actions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // variableVelocity Field Functions 
        bool hasVariableVelocity() const { return this->variableVelocity_ != nullptr;};
        void deleteVariableVelocity() { this->variableVelocity_ = nullptr;};
        inline const Actions::VariableVelocity & getVariableVelocity() const { DARABONBA_PTR_GET_CONST(variableVelocity_, Actions::VariableVelocity) };
        inline Actions::VariableVelocity getVariableVelocity() { DARABONBA_PTR_GET(variableVelocity_, Actions::VariableVelocity) };
        inline Actions& setVariableVelocity(const Actions::VariableVelocity & variableVelocity) { DARABONBA_PTR_SET_VALUE(variableVelocity_, variableVelocity) };
        inline Actions& setVariableVelocity(Actions::VariableVelocity && variableVelocity) { DARABONBA_PTR_SET_RVALUE(variableVelocity_, variableVelocity) };


        // xLabel Field Functions 
        bool hasXLabel() const { return this->xLabel_ != nullptr;};
        void deleteXLabel() { this->xLabel_ = nullptr;};
        inline string getXLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
        inline Actions& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


        // yLabel Field Functions 
        bool hasYLabel() const { return this->yLabel_ != nullptr;};
        void deleteYLabel() { this->yLabel_ = nullptr;};
        inline string getYLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
        inline Actions& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


      protected:
        // Variable code.
        shared_ptr<string> code_ {};
        // Data distribution display in JSON format. This field is not returned for this type of variable.
        shared_ptr<string> dataDisplay_ {};
        // Variable definition ID. This type of variable does not return this field.
        shared_ptr<string> defineId_ {};
        // Description information.
        shared_ptr<string> description_ {};
        // Display type and group label.
        shared_ptr<string> displayType_ {};
        // Expression display. This type of variable does not return this field.
        shared_ptr<string> expressionTitle_ {};
        // Favorite identifier.
        shared_ptr<bool> favoriteFlag_ {};
        // Details of the field pool. This type of variable does not return this field.
        shared_ptr<string> fieldDetail_ {};
        // Field sorting.
        shared_ptr<int32_t> fieldRank_ {};
        // Source of the field. This type of variable does not return this field.
        shared_ptr<string> fieldSource_ {};
        // Field type. This field is not returned for this type of variable.
        shared_ptr<string> fieldType_ {};
        // Primary key ID.
        shared_ptr<int64_t> id_ {};
        // Input type of the parameter.
        shared_ptr<string> inputFieldType_ {};
        // Required parameter. This type of variable does not return this field.
        shared_ptr<string> inputRequired_ {};
        // Input parameters. This field is not returned for this type of variable.
        shared_ptr<string> inputs_ {};
        // Variable name.
        shared_ptr<string> name_ {};
        // Anomaly value. This field is not returned for this type of variable.
        shared_ptr<string> outlier_ {};
        // Output value threshold.
        shared_ptr<Actions::OutputThreshold> outputThreshold_ {};
        // Parent node. This field is not returned for this type of variable.
        shared_ptr<string> parentName_ {};
        // Source type.
        shared_ptr<string> sourceType_ {};
        // Title.
        shared_ptr<string> title_ {};
        // Variable type.
        shared_ptr<string> type_ {};
        // Variable metric information. This field is not returned for this type of variable.
        shared_ptr<Actions::VariableVelocity> variableVelocity_ {};
        // x label. This type of variable does not return this field.
        shared_ptr<string> xLabel_ {};
        // y label. This type of variable does not return this field.
        shared_ptr<string> yLabel_ {};
      };

      virtual bool empty() const override { return this->actions_ == nullptr
        && this->deviceVariables_ == nullptr && this->expressionVariables_ == nullptr && this->favoriteVariables_ == nullptr && this->middleVariables_ == nullptr && this->modelVariables_ == nullptr
        && this->nameList_ == nullptr && this->nativeVariableFunctions_ == nullptr && this->nativeVariables_ == nullptr && this->queryVariables_ == nullptr && this->selfVariables_ == nullptr
        && this->sysVariables_ == nullptr && this->thirdVariables_ == nullptr && this->velocityVariables_ == nullptr; };
      // actions Field Functions 
      bool hasActions() const { return this->actions_ != nullptr;};
      void deleteActions() { this->actions_ = nullptr;};
      inline const vector<ResultObject::Actions> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<ResultObject::Actions>) };
      inline vector<ResultObject::Actions> getActions() { DARABONBA_PTR_GET(actions_, vector<ResultObject::Actions>) };
      inline ResultObject& setActions(const vector<ResultObject::Actions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
      inline ResultObject& setActions(vector<ResultObject::Actions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


      // deviceVariables Field Functions 
      bool hasDeviceVariables() const { return this->deviceVariables_ != nullptr;};
      void deleteDeviceVariables() { this->deviceVariables_ = nullptr;};
      inline const vector<ResultObject::DeviceVariables> & getDeviceVariables() const { DARABONBA_PTR_GET_CONST(deviceVariables_, vector<ResultObject::DeviceVariables>) };
      inline vector<ResultObject::DeviceVariables> getDeviceVariables() { DARABONBA_PTR_GET(deviceVariables_, vector<ResultObject::DeviceVariables>) };
      inline ResultObject& setDeviceVariables(const vector<ResultObject::DeviceVariables> & deviceVariables) { DARABONBA_PTR_SET_VALUE(deviceVariables_, deviceVariables) };
      inline ResultObject& setDeviceVariables(vector<ResultObject::DeviceVariables> && deviceVariables) { DARABONBA_PTR_SET_RVALUE(deviceVariables_, deviceVariables) };


      // expressionVariables Field Functions 
      bool hasExpressionVariables() const { return this->expressionVariables_ != nullptr;};
      void deleteExpressionVariables() { this->expressionVariables_ = nullptr;};
      inline const vector<ResultObject::ExpressionVariables> & getExpressionVariables() const { DARABONBA_PTR_GET_CONST(expressionVariables_, vector<ResultObject::ExpressionVariables>) };
      inline vector<ResultObject::ExpressionVariables> getExpressionVariables() { DARABONBA_PTR_GET(expressionVariables_, vector<ResultObject::ExpressionVariables>) };
      inline ResultObject& setExpressionVariables(const vector<ResultObject::ExpressionVariables> & expressionVariables) { DARABONBA_PTR_SET_VALUE(expressionVariables_, expressionVariables) };
      inline ResultObject& setExpressionVariables(vector<ResultObject::ExpressionVariables> && expressionVariables) { DARABONBA_PTR_SET_RVALUE(expressionVariables_, expressionVariables) };


      // favoriteVariables Field Functions 
      bool hasFavoriteVariables() const { return this->favoriteVariables_ != nullptr;};
      void deleteFavoriteVariables() { this->favoriteVariables_ = nullptr;};
      inline const vector<ResultObject::FavoriteVariables> & getFavoriteVariables() const { DARABONBA_PTR_GET_CONST(favoriteVariables_, vector<ResultObject::FavoriteVariables>) };
      inline vector<ResultObject::FavoriteVariables> getFavoriteVariables() { DARABONBA_PTR_GET(favoriteVariables_, vector<ResultObject::FavoriteVariables>) };
      inline ResultObject& setFavoriteVariables(const vector<ResultObject::FavoriteVariables> & favoriteVariables) { DARABONBA_PTR_SET_VALUE(favoriteVariables_, favoriteVariables) };
      inline ResultObject& setFavoriteVariables(vector<ResultObject::FavoriteVariables> && favoriteVariables) { DARABONBA_PTR_SET_RVALUE(favoriteVariables_, favoriteVariables) };


      // middleVariables Field Functions 
      bool hasMiddleVariables() const { return this->middleVariables_ != nullptr;};
      void deleteMiddleVariables() { this->middleVariables_ = nullptr;};
      inline const vector<ResultObject::MiddleVariables> & getMiddleVariables() const { DARABONBA_PTR_GET_CONST(middleVariables_, vector<ResultObject::MiddleVariables>) };
      inline vector<ResultObject::MiddleVariables> getMiddleVariables() { DARABONBA_PTR_GET(middleVariables_, vector<ResultObject::MiddleVariables>) };
      inline ResultObject& setMiddleVariables(const vector<ResultObject::MiddleVariables> & middleVariables) { DARABONBA_PTR_SET_VALUE(middleVariables_, middleVariables) };
      inline ResultObject& setMiddleVariables(vector<ResultObject::MiddleVariables> && middleVariables) { DARABONBA_PTR_SET_RVALUE(middleVariables_, middleVariables) };


      // modelVariables Field Functions 
      bool hasModelVariables() const { return this->modelVariables_ != nullptr;};
      void deleteModelVariables() { this->modelVariables_ = nullptr;};
      inline const vector<ResultObject::ModelVariables> & getModelVariables() const { DARABONBA_PTR_GET_CONST(modelVariables_, vector<ResultObject::ModelVariables>) };
      inline vector<ResultObject::ModelVariables> getModelVariables() { DARABONBA_PTR_GET(modelVariables_, vector<ResultObject::ModelVariables>) };
      inline ResultObject& setModelVariables(const vector<ResultObject::ModelVariables> & modelVariables) { DARABONBA_PTR_SET_VALUE(modelVariables_, modelVariables) };
      inline ResultObject& setModelVariables(vector<ResultObject::ModelVariables> && modelVariables) { DARABONBA_PTR_SET_RVALUE(modelVariables_, modelVariables) };


      // nameList Field Functions 
      bool hasNameList() const { return this->nameList_ != nullptr;};
      void deleteNameList() { this->nameList_ = nullptr;};
      inline const vector<ResultObject::NameList> & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<ResultObject::NameList>) };
      inline vector<ResultObject::NameList> getNameList() { DARABONBA_PTR_GET(nameList_, vector<ResultObject::NameList>) };
      inline ResultObject& setNameList(const vector<ResultObject::NameList> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
      inline ResultObject& setNameList(vector<ResultObject::NameList> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


      // nativeVariableFunctions Field Functions 
      bool hasNativeVariableFunctions() const { return this->nativeVariableFunctions_ != nullptr;};
      void deleteNativeVariableFunctions() { this->nativeVariableFunctions_ = nullptr;};
      inline const vector<ResultObject::NativeVariableFunctions> & getNativeVariableFunctions() const { DARABONBA_PTR_GET_CONST(nativeVariableFunctions_, vector<ResultObject::NativeVariableFunctions>) };
      inline vector<ResultObject::NativeVariableFunctions> getNativeVariableFunctions() { DARABONBA_PTR_GET(nativeVariableFunctions_, vector<ResultObject::NativeVariableFunctions>) };
      inline ResultObject& setNativeVariableFunctions(const vector<ResultObject::NativeVariableFunctions> & nativeVariableFunctions) { DARABONBA_PTR_SET_VALUE(nativeVariableFunctions_, nativeVariableFunctions) };
      inline ResultObject& setNativeVariableFunctions(vector<ResultObject::NativeVariableFunctions> && nativeVariableFunctions) { DARABONBA_PTR_SET_RVALUE(nativeVariableFunctions_, nativeVariableFunctions) };


      // nativeVariables Field Functions 
      bool hasNativeVariables() const { return this->nativeVariables_ != nullptr;};
      void deleteNativeVariables() { this->nativeVariables_ = nullptr;};
      inline const vector<ResultObject::NativeVariables> & getNativeVariables() const { DARABONBA_PTR_GET_CONST(nativeVariables_, vector<ResultObject::NativeVariables>) };
      inline vector<ResultObject::NativeVariables> getNativeVariables() { DARABONBA_PTR_GET(nativeVariables_, vector<ResultObject::NativeVariables>) };
      inline ResultObject& setNativeVariables(const vector<ResultObject::NativeVariables> & nativeVariables) { DARABONBA_PTR_SET_VALUE(nativeVariables_, nativeVariables) };
      inline ResultObject& setNativeVariables(vector<ResultObject::NativeVariables> && nativeVariables) { DARABONBA_PTR_SET_RVALUE(nativeVariables_, nativeVariables) };


      // queryVariables Field Functions 
      bool hasQueryVariables() const { return this->queryVariables_ != nullptr;};
      void deleteQueryVariables() { this->queryVariables_ = nullptr;};
      inline const vector<ResultObject::QueryVariables> & getQueryVariables() const { DARABONBA_PTR_GET_CONST(queryVariables_, vector<ResultObject::QueryVariables>) };
      inline vector<ResultObject::QueryVariables> getQueryVariables() { DARABONBA_PTR_GET(queryVariables_, vector<ResultObject::QueryVariables>) };
      inline ResultObject& setQueryVariables(const vector<ResultObject::QueryVariables> & queryVariables) { DARABONBA_PTR_SET_VALUE(queryVariables_, queryVariables) };
      inline ResultObject& setQueryVariables(vector<ResultObject::QueryVariables> && queryVariables) { DARABONBA_PTR_SET_RVALUE(queryVariables_, queryVariables) };


      // selfVariables Field Functions 
      bool hasSelfVariables() const { return this->selfVariables_ != nullptr;};
      void deleteSelfVariables() { this->selfVariables_ = nullptr;};
      inline const vector<ResultObject::SelfVariables> & getSelfVariables() const { DARABONBA_PTR_GET_CONST(selfVariables_, vector<ResultObject::SelfVariables>) };
      inline vector<ResultObject::SelfVariables> getSelfVariables() { DARABONBA_PTR_GET(selfVariables_, vector<ResultObject::SelfVariables>) };
      inline ResultObject& setSelfVariables(const vector<ResultObject::SelfVariables> & selfVariables) { DARABONBA_PTR_SET_VALUE(selfVariables_, selfVariables) };
      inline ResultObject& setSelfVariables(vector<ResultObject::SelfVariables> && selfVariables) { DARABONBA_PTR_SET_RVALUE(selfVariables_, selfVariables) };


      // sysVariables Field Functions 
      bool hasSysVariables() const { return this->sysVariables_ != nullptr;};
      void deleteSysVariables() { this->sysVariables_ = nullptr;};
      inline const vector<ResultObject::SysVariables> & getSysVariables() const { DARABONBA_PTR_GET_CONST(sysVariables_, vector<ResultObject::SysVariables>) };
      inline vector<ResultObject::SysVariables> getSysVariables() { DARABONBA_PTR_GET(sysVariables_, vector<ResultObject::SysVariables>) };
      inline ResultObject& setSysVariables(const vector<ResultObject::SysVariables> & sysVariables) { DARABONBA_PTR_SET_VALUE(sysVariables_, sysVariables) };
      inline ResultObject& setSysVariables(vector<ResultObject::SysVariables> && sysVariables) { DARABONBA_PTR_SET_RVALUE(sysVariables_, sysVariables) };


      // thirdVariables Field Functions 
      bool hasThirdVariables() const { return this->thirdVariables_ != nullptr;};
      void deleteThirdVariables() { this->thirdVariables_ = nullptr;};
      inline       const Darabonba::Json & getThirdVariables() const { DARABONBA_GET(thirdVariables_) };
      Darabonba::Json & getThirdVariables() { DARABONBA_GET(thirdVariables_) };
      inline ResultObject& setThirdVariables(const Darabonba::Json & thirdVariables) { DARABONBA_SET_VALUE(thirdVariables_, thirdVariables) };
      inline ResultObject& setThirdVariables(Darabonba::Json && thirdVariables) { DARABONBA_SET_RVALUE(thirdVariables_, thirdVariables) };


      // velocityVariables Field Functions 
      bool hasVelocityVariables() const { return this->velocityVariables_ != nullptr;};
      void deleteVelocityVariables() { this->velocityVariables_ = nullptr;};
      inline const vector<ResultObject::VelocityVariables> & getVelocityVariables() const { DARABONBA_PTR_GET_CONST(velocityVariables_, vector<ResultObject::VelocityVariables>) };
      inline vector<ResultObject::VelocityVariables> getVelocityVariables() { DARABONBA_PTR_GET(velocityVariables_, vector<ResultObject::VelocityVariables>) };
      inline ResultObject& setVelocityVariables(const vector<ResultObject::VelocityVariables> & velocityVariables) { DARABONBA_PTR_SET_VALUE(velocityVariables_, velocityVariables) };
      inline ResultObject& setVelocityVariables(vector<ResultObject::VelocityVariables> && velocityVariables) { DARABONBA_PTR_SET_RVALUE(velocityVariables_, velocityVariables) };


    protected:
      // Action variable.
      shared_ptr<vector<ResultObject::Actions>> actions_ {};
      // Device variable.
      shared_ptr<vector<ResultObject::DeviceVariables>> deviceVariables_ {};
      // Custom variable.
      shared_ptr<vector<ResultObject::ExpressionVariables>> expressionVariables_ {};
      // Favorite variables.
      shared_ptr<vector<ResultObject::FavoriteVariables>> favoriteVariables_ {};
      // Intermediate variable return object.
      shared_ptr<vector<ResultObject::MiddleVariables>> middleVariables_ {};
      // An array of model variables.
      shared_ptr<vector<ResultObject::ModelVariables>> modelVariables_ {};
      // List of name variables.
      shared_ptr<vector<ResultObject::NameList>> nameList_ {};
      // List of available functions for the original variable.
      shared_ptr<vector<ResultObject::NativeVariableFunctions>> nativeVariableFunctions_ {};
      // List of event fields.
      shared_ptr<vector<ResultObject::NativeVariables>> nativeVariables_ {};
      // An array of custom query variables.
      shared_ptr<vector<ResultObject::QueryVariables>> queryVariables_ {};
      // Custom variables (custom variables, cumulative variables, custom system variables).
      shared_ptr<vector<ResultObject::SelfVariables>> selfVariables_ {};
      // System variables.
      shared_ptr<vector<ResultObject::SysVariables>> sysVariables_ {};
      // Other related variables.
      Darabonba::Json thirdVariables_ {};
      // An array of accumulated variables.
      shared_ptr<vector<ResultObject::VelocityVariables>> velocityVariables_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventVariableListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeEventVariableListResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeEventVariableListResponseBody::ResultObject) };
    inline DescribeEventVariableListResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeEventVariableListResponseBody::ResultObject) };
    inline DescribeEventVariableListResponseBody& setResultObject(const DescribeEventVariableListResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeEventVariableListResponseBody& setResultObject(DescribeEventVariableListResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object.
    shared_ptr<DescribeEventVariableListResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
