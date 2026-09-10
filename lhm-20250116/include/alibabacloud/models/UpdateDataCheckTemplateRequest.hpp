// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATACHECKTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATACHECKTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class UpdateDataCheckTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataCheckTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(basicMetricRules, basicMetricRules_);
      DARABONBA_PTR_TO_JSON(checkType, checkType_);
      DARABONBA_PTR_TO_JSON(complexMetricRules, complexMetricRules_);
      DARABONBA_PTR_TO_JSON(dsEngineRels, dsEngineRels_);
      DARABONBA_PTR_TO_JSON(fulltextRule, fulltextRule_);
      DARABONBA_PTR_TO_JSON(metricRules, metricRules_);
      DARABONBA_PTR_TO_JSON(nullRules, nullRules_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(templateDesc, templateDesc_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(weakContentRule, weakContentRule_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataCheckTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(basicMetricRules, basicMetricRules_);
      DARABONBA_PTR_FROM_JSON(checkType, checkType_);
      DARABONBA_PTR_FROM_JSON(complexMetricRules, complexMetricRules_);
      DARABONBA_PTR_FROM_JSON(dsEngineRels, dsEngineRels_);
      DARABONBA_PTR_FROM_JSON(fulltextRule, fulltextRule_);
      DARABONBA_PTR_FROM_JSON(metricRules, metricRules_);
      DARABONBA_PTR_FROM_JSON(nullRules, nullRules_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(templateDesc, templateDesc_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(weakContentRule, weakContentRule_);
    };
    UpdateDataCheckTemplateRequest() = default ;
    UpdateDataCheckTemplateRequest(const UpdateDataCheckTemplateRequest &) = default ;
    UpdateDataCheckTemplateRequest(UpdateDataCheckTemplateRequest &&) = default ;
    UpdateDataCheckTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataCheckTemplateRequest() = default ;
    UpdateDataCheckTemplateRequest& operator=(const UpdateDataCheckTemplateRequest &) = default ;
    UpdateDataCheckTemplateRequest& operator=(UpdateDataCheckTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WeakContentRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WeakContentRule& obj) { 
        DARABONBA_PTR_TO_JSON(filterColumnExpression, filterColumnExpression_);
        DARABONBA_PTR_TO_JSON(filterColumnTypes, filterColumnTypes_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(weakContentAlgorithm, weakContentAlgorithm_);
      };
      friend void from_json(const Darabonba::Json& j, WeakContentRule& obj) { 
        DARABONBA_PTR_FROM_JSON(filterColumnExpression, filterColumnExpression_);
        DARABONBA_PTR_FROM_JSON(filterColumnTypes, filterColumnTypes_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(weakContentAlgorithm, weakContentAlgorithm_);
      };
      WeakContentRule() = default ;
      WeakContentRule(const WeakContentRule &) = default ;
      WeakContentRule(WeakContentRule &&) = default ;
      WeakContentRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WeakContentRule() = default ;
      WeakContentRule& operator=(const WeakContentRule &) = default ;
      WeakContentRule& operator=(WeakContentRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->filterColumnExpression_ == nullptr
        && this->filterColumnTypes_ == nullptr && this->ruleId_ == nullptr && this->weakContentAlgorithm_ == nullptr; };
      // filterColumnExpression Field Functions 
      bool hasFilterColumnExpression() const { return this->filterColumnExpression_ != nullptr;};
      void deleteFilterColumnExpression() { this->filterColumnExpression_ = nullptr;};
      inline string getFilterColumnExpression() const { DARABONBA_PTR_GET_DEFAULT(filterColumnExpression_, "") };
      inline WeakContentRule& setFilterColumnExpression(string filterColumnExpression) { DARABONBA_PTR_SET_VALUE(filterColumnExpression_, filterColumnExpression) };


      // filterColumnTypes Field Functions 
      bool hasFilterColumnTypes() const { return this->filterColumnTypes_ != nullptr;};
      void deleteFilterColumnTypes() { this->filterColumnTypes_ = nullptr;};
      inline const vector<string> & getFilterColumnTypes() const { DARABONBA_PTR_GET_CONST(filterColumnTypes_, vector<string>) };
      inline vector<string> getFilterColumnTypes() { DARABONBA_PTR_GET(filterColumnTypes_, vector<string>) };
      inline WeakContentRule& setFilterColumnTypes(const vector<string> & filterColumnTypes) { DARABONBA_PTR_SET_VALUE(filterColumnTypes_, filterColumnTypes) };
      inline WeakContentRule& setFilterColumnTypes(vector<string> && filterColumnTypes) { DARABONBA_PTR_SET_RVALUE(filterColumnTypes_, filterColumnTypes) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline WeakContentRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // weakContentAlgorithm Field Functions 
      bool hasWeakContentAlgorithm() const { return this->weakContentAlgorithm_ != nullptr;};
      void deleteWeakContentAlgorithm() { this->weakContentAlgorithm_ = nullptr;};
      inline string getWeakContentAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(weakContentAlgorithm_, "") };
      inline WeakContentRule& setWeakContentAlgorithm(string weakContentAlgorithm) { DARABONBA_PTR_SET_VALUE(weakContentAlgorithm_, weakContentAlgorithm) };


    protected:
      shared_ptr<string> filterColumnExpression_ {};
      shared_ptr<vector<string>> filterColumnTypes_ {};
      shared_ptr<string> ruleId_ {};
      shared_ptr<string> weakContentAlgorithm_ {};
    };

    class NullRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NullRules& obj) { 
        DARABONBA_PTR_TO_JSON(dataTypeGroup, dataTypeGroup_);
        DARABONBA_PTR_TO_JSON(nullValues, nullValues_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      };
      friend void from_json(const Darabonba::Json& j, NullRules& obj) { 
        DARABONBA_PTR_FROM_JSON(dataTypeGroup, dataTypeGroup_);
        DARABONBA_PTR_FROM_JSON(nullValues, nullValues_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      };
      NullRules() = default ;
      NullRules(const NullRules &) = default ;
      NullRules(NullRules &&) = default ;
      NullRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NullRules() = default ;
      NullRules& operator=(const NullRules &) = default ;
      NullRules& operator=(NullRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataTypeGroup_ == nullptr
        && this->nullValues_ == nullptr && this->ruleId_ == nullptr; };
      // dataTypeGroup Field Functions 
      bool hasDataTypeGroup() const { return this->dataTypeGroup_ != nullptr;};
      void deleteDataTypeGroup() { this->dataTypeGroup_ = nullptr;};
      inline int32_t getDataTypeGroup() const { DARABONBA_PTR_GET_DEFAULT(dataTypeGroup_, 0) };
      inline NullRules& setDataTypeGroup(int32_t dataTypeGroup) { DARABONBA_PTR_SET_VALUE(dataTypeGroup_, dataTypeGroup) };


      // nullValues Field Functions 
      bool hasNullValues() const { return this->nullValues_ != nullptr;};
      void deleteNullValues() { this->nullValues_ = nullptr;};
      inline string getNullValues() const { DARABONBA_PTR_GET_DEFAULT(nullValues_, "") };
      inline NullRules& setNullValues(string nullValues) { DARABONBA_PTR_SET_VALUE(nullValues_, nullValues) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline NullRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    protected:
      shared_ptr<int32_t> dataTypeGroup_ {};
      shared_ptr<string> nullValues_ {};
      shared_ptr<string> ruleId_ {};
    };

    class MetricRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricRules& obj) { 
        DARABONBA_PTR_TO_JSON(checkMethods, checkMethods_);
        DARABONBA_PTR_TO_JSON(controlFloatPrecision, controlFloatPrecision_);
        DARABONBA_PTR_TO_JSON(dataTypeClassify, dataTypeClassify_);
        DARABONBA_PTR_TO_JSON(dataTypeGroup, dataTypeGroup_);
        DARABONBA_PTR_TO_JSON(dataTypeList, dataTypeList_);
        DARABONBA_PTR_TO_JSON(dataTypes, dataTypes_);
        DARABONBA_PTR_TO_JSON(diffTolerateType, diffTolerateType_);
        DARABONBA_ANY_TO_JSON(diffTolerateValues, diffTolerateValues_);
        DARABONBA_PTR_TO_JSON(enableDecimalScale, enableDecimalScale_);
        DARABONBA_PTR_TO_JSON(filterColumnName, filterColumnName_);
        DARABONBA_PTR_TO_JSON(filterColumns, filterColumns_);
        DARABONBA_PTR_TO_JSON(floatPrecision, floatPrecision_);
        DARABONBA_PTR_TO_JSON(ignoreDecimalDiff, ignoreDecimalDiff_);
        DARABONBA_PTR_TO_JSON(ignoreDecimalScaleSuffixZero, ignoreDecimalScaleSuffixZero_);
        DARABONBA_PTR_TO_JSON(ignoreEmptyDiff, ignoreEmptyDiff_);
        DARABONBA_PTR_TO_JSON(ignoreNumericZero, ignoreNumericZero_);
        DARABONBA_PTR_TO_JSON(ignoreStringEmpty, ignoreStringEmpty_);
        DARABONBA_PTR_TO_JSON(ignoreZeroDiff, ignoreZeroDiff_);
        DARABONBA_PTR_TO_JSON(isCountCheck, isCountCheck_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(setDecimalScale, setDecimalScale_);
      };
      friend void from_json(const Darabonba::Json& j, MetricRules& obj) { 
        DARABONBA_PTR_FROM_JSON(checkMethods, checkMethods_);
        DARABONBA_PTR_FROM_JSON(controlFloatPrecision, controlFloatPrecision_);
        DARABONBA_PTR_FROM_JSON(dataTypeClassify, dataTypeClassify_);
        DARABONBA_PTR_FROM_JSON(dataTypeGroup, dataTypeGroup_);
        DARABONBA_PTR_FROM_JSON(dataTypeList, dataTypeList_);
        DARABONBA_PTR_FROM_JSON(dataTypes, dataTypes_);
        DARABONBA_PTR_FROM_JSON(diffTolerateType, diffTolerateType_);
        DARABONBA_ANY_FROM_JSON(diffTolerateValues, diffTolerateValues_);
        DARABONBA_PTR_FROM_JSON(enableDecimalScale, enableDecimalScale_);
        DARABONBA_PTR_FROM_JSON(filterColumnName, filterColumnName_);
        DARABONBA_PTR_FROM_JSON(filterColumns, filterColumns_);
        DARABONBA_PTR_FROM_JSON(floatPrecision, floatPrecision_);
        DARABONBA_PTR_FROM_JSON(ignoreDecimalDiff, ignoreDecimalDiff_);
        DARABONBA_PTR_FROM_JSON(ignoreDecimalScaleSuffixZero, ignoreDecimalScaleSuffixZero_);
        DARABONBA_PTR_FROM_JSON(ignoreEmptyDiff, ignoreEmptyDiff_);
        DARABONBA_PTR_FROM_JSON(ignoreNumericZero, ignoreNumericZero_);
        DARABONBA_PTR_FROM_JSON(ignoreStringEmpty, ignoreStringEmpty_);
        DARABONBA_PTR_FROM_JSON(ignoreZeroDiff, ignoreZeroDiff_);
        DARABONBA_PTR_FROM_JSON(isCountCheck, isCountCheck_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(setDecimalScale, setDecimalScale_);
      };
      MetricRules() = default ;
      MetricRules(const MetricRules &) = default ;
      MetricRules(MetricRules &&) = default ;
      MetricRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricRules() = default ;
      MetricRules& operator=(const MetricRules &) = default ;
      MetricRules& operator=(MetricRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkMethods_ == nullptr
        && this->controlFloatPrecision_ == nullptr && this->dataTypeClassify_ == nullptr && this->dataTypeGroup_ == nullptr && this->dataTypeList_ == nullptr && this->dataTypes_ == nullptr
        && this->diffTolerateType_ == nullptr && this->diffTolerateValues_ == nullptr && this->enableDecimalScale_ == nullptr && this->filterColumnName_ == nullptr && this->filterColumns_ == nullptr
        && this->floatPrecision_ == nullptr && this->ignoreDecimalDiff_ == nullptr && this->ignoreDecimalScaleSuffixZero_ == nullptr && this->ignoreEmptyDiff_ == nullptr && this->ignoreNumericZero_ == nullptr
        && this->ignoreStringEmpty_ == nullptr && this->ignoreZeroDiff_ == nullptr && this->isCountCheck_ == nullptr && this->ruleId_ == nullptr && this->setDecimalScale_ == nullptr; };
      // checkMethods Field Functions 
      bool hasCheckMethods() const { return this->checkMethods_ != nullptr;};
      void deleteCheckMethods() { this->checkMethods_ = nullptr;};
      inline string getCheckMethods() const { DARABONBA_PTR_GET_DEFAULT(checkMethods_, "") };
      inline MetricRules& setCheckMethods(string checkMethods) { DARABONBA_PTR_SET_VALUE(checkMethods_, checkMethods) };


      // controlFloatPrecision Field Functions 
      bool hasControlFloatPrecision() const { return this->controlFloatPrecision_ != nullptr;};
      void deleteControlFloatPrecision() { this->controlFloatPrecision_ = nullptr;};
      inline int32_t getControlFloatPrecision() const { DARABONBA_PTR_GET_DEFAULT(controlFloatPrecision_, 0) };
      inline MetricRules& setControlFloatPrecision(int32_t controlFloatPrecision) { DARABONBA_PTR_SET_VALUE(controlFloatPrecision_, controlFloatPrecision) };


      // dataTypeClassify Field Functions 
      bool hasDataTypeClassify() const { return this->dataTypeClassify_ != nullptr;};
      void deleteDataTypeClassify() { this->dataTypeClassify_ = nullptr;};
      inline int32_t getDataTypeClassify() const { DARABONBA_PTR_GET_DEFAULT(dataTypeClassify_, 0) };
      inline MetricRules& setDataTypeClassify(int32_t dataTypeClassify) { DARABONBA_PTR_SET_VALUE(dataTypeClassify_, dataTypeClassify) };


      // dataTypeGroup Field Functions 
      bool hasDataTypeGroup() const { return this->dataTypeGroup_ != nullptr;};
      void deleteDataTypeGroup() { this->dataTypeGroup_ = nullptr;};
      inline int32_t getDataTypeGroup() const { DARABONBA_PTR_GET_DEFAULT(dataTypeGroup_, 0) };
      inline MetricRules& setDataTypeGroup(int32_t dataTypeGroup) { DARABONBA_PTR_SET_VALUE(dataTypeGroup_, dataTypeGroup) };


      // dataTypeList Field Functions 
      bool hasDataTypeList() const { return this->dataTypeList_ != nullptr;};
      void deleteDataTypeList() { this->dataTypeList_ = nullptr;};
      inline const vector<string> & getDataTypeList() const { DARABONBA_PTR_GET_CONST(dataTypeList_, vector<string>) };
      inline vector<string> getDataTypeList() { DARABONBA_PTR_GET(dataTypeList_, vector<string>) };
      inline MetricRules& setDataTypeList(const vector<string> & dataTypeList) { DARABONBA_PTR_SET_VALUE(dataTypeList_, dataTypeList) };
      inline MetricRules& setDataTypeList(vector<string> && dataTypeList) { DARABONBA_PTR_SET_RVALUE(dataTypeList_, dataTypeList) };


      // dataTypes Field Functions 
      bool hasDataTypes() const { return this->dataTypes_ != nullptr;};
      void deleteDataTypes() { this->dataTypes_ = nullptr;};
      inline string getDataTypes() const { DARABONBA_PTR_GET_DEFAULT(dataTypes_, "") };
      inline MetricRules& setDataTypes(string dataTypes) { DARABONBA_PTR_SET_VALUE(dataTypes_, dataTypes) };


      // diffTolerateType Field Functions 
      bool hasDiffTolerateType() const { return this->diffTolerateType_ != nullptr;};
      void deleteDiffTolerateType() { this->diffTolerateType_ = nullptr;};
      inline int32_t getDiffTolerateType() const { DARABONBA_PTR_GET_DEFAULT(diffTolerateType_, 0) };
      inline MetricRules& setDiffTolerateType(int32_t diffTolerateType) { DARABONBA_PTR_SET_VALUE(diffTolerateType_, diffTolerateType) };


      // diffTolerateValues Field Functions 
      bool hasDiffTolerateValues() const { return this->diffTolerateValues_ != nullptr;};
      void deleteDiffTolerateValues() { this->diffTolerateValues_ = nullptr;};
      inline       const Darabonba::Json & getDiffTolerateValues() const { DARABONBA_GET(diffTolerateValues_) };
      Darabonba::Json & getDiffTolerateValues() { DARABONBA_GET(diffTolerateValues_) };
      inline MetricRules& setDiffTolerateValues(const Darabonba::Json & diffTolerateValues) { DARABONBA_SET_VALUE(diffTolerateValues_, diffTolerateValues) };
      inline MetricRules& setDiffTolerateValues(Darabonba::Json && diffTolerateValues) { DARABONBA_SET_RVALUE(diffTolerateValues_, diffTolerateValues) };


      // enableDecimalScale Field Functions 
      bool hasEnableDecimalScale() const { return this->enableDecimalScale_ != nullptr;};
      void deleteEnableDecimalScale() { this->enableDecimalScale_ = nullptr;};
      inline int32_t getEnableDecimalScale() const { DARABONBA_PTR_GET_DEFAULT(enableDecimalScale_, 0) };
      inline MetricRules& setEnableDecimalScale(int32_t enableDecimalScale) { DARABONBA_PTR_SET_VALUE(enableDecimalScale_, enableDecimalScale) };


      // filterColumnName Field Functions 
      bool hasFilterColumnName() const { return this->filterColumnName_ != nullptr;};
      void deleteFilterColumnName() { this->filterColumnName_ = nullptr;};
      inline string getFilterColumnName() const { DARABONBA_PTR_GET_DEFAULT(filterColumnName_, "") };
      inline MetricRules& setFilterColumnName(string filterColumnName) { DARABONBA_PTR_SET_VALUE(filterColumnName_, filterColumnName) };


      // filterColumns Field Functions 
      bool hasFilterColumns() const { return this->filterColumns_ != nullptr;};
      void deleteFilterColumns() { this->filterColumns_ = nullptr;};
      inline string getFilterColumns() const { DARABONBA_PTR_GET_DEFAULT(filterColumns_, "") };
      inline MetricRules& setFilterColumns(string filterColumns) { DARABONBA_PTR_SET_VALUE(filterColumns_, filterColumns) };


      // floatPrecision Field Functions 
      bool hasFloatPrecision() const { return this->floatPrecision_ != nullptr;};
      void deleteFloatPrecision() { this->floatPrecision_ = nullptr;};
      inline int32_t getFloatPrecision() const { DARABONBA_PTR_GET_DEFAULT(floatPrecision_, 0) };
      inline MetricRules& setFloatPrecision(int32_t floatPrecision) { DARABONBA_PTR_SET_VALUE(floatPrecision_, floatPrecision) };


      // ignoreDecimalDiff Field Functions 
      bool hasIgnoreDecimalDiff() const { return this->ignoreDecimalDiff_ != nullptr;};
      void deleteIgnoreDecimalDiff() { this->ignoreDecimalDiff_ = nullptr;};
      inline int32_t getIgnoreDecimalDiff() const { DARABONBA_PTR_GET_DEFAULT(ignoreDecimalDiff_, 0) };
      inline MetricRules& setIgnoreDecimalDiff(int32_t ignoreDecimalDiff) { DARABONBA_PTR_SET_VALUE(ignoreDecimalDiff_, ignoreDecimalDiff) };


      // ignoreDecimalScaleSuffixZero Field Functions 
      bool hasIgnoreDecimalScaleSuffixZero() const { return this->ignoreDecimalScaleSuffixZero_ != nullptr;};
      void deleteIgnoreDecimalScaleSuffixZero() { this->ignoreDecimalScaleSuffixZero_ = nullptr;};
      inline int32_t getIgnoreDecimalScaleSuffixZero() const { DARABONBA_PTR_GET_DEFAULT(ignoreDecimalScaleSuffixZero_, 0) };
      inline MetricRules& setIgnoreDecimalScaleSuffixZero(int32_t ignoreDecimalScaleSuffixZero) { DARABONBA_PTR_SET_VALUE(ignoreDecimalScaleSuffixZero_, ignoreDecimalScaleSuffixZero) };


      // ignoreEmptyDiff Field Functions 
      bool hasIgnoreEmptyDiff() const { return this->ignoreEmptyDiff_ != nullptr;};
      void deleteIgnoreEmptyDiff() { this->ignoreEmptyDiff_ = nullptr;};
      inline int32_t getIgnoreEmptyDiff() const { DARABONBA_PTR_GET_DEFAULT(ignoreEmptyDiff_, 0) };
      inline MetricRules& setIgnoreEmptyDiff(int32_t ignoreEmptyDiff) { DARABONBA_PTR_SET_VALUE(ignoreEmptyDiff_, ignoreEmptyDiff) };


      // ignoreNumericZero Field Functions 
      bool hasIgnoreNumericZero() const { return this->ignoreNumericZero_ != nullptr;};
      void deleteIgnoreNumericZero() { this->ignoreNumericZero_ = nullptr;};
      inline int32_t getIgnoreNumericZero() const { DARABONBA_PTR_GET_DEFAULT(ignoreNumericZero_, 0) };
      inline MetricRules& setIgnoreNumericZero(int32_t ignoreNumericZero) { DARABONBA_PTR_SET_VALUE(ignoreNumericZero_, ignoreNumericZero) };


      // ignoreStringEmpty Field Functions 
      bool hasIgnoreStringEmpty() const { return this->ignoreStringEmpty_ != nullptr;};
      void deleteIgnoreStringEmpty() { this->ignoreStringEmpty_ = nullptr;};
      inline int32_t getIgnoreStringEmpty() const { DARABONBA_PTR_GET_DEFAULT(ignoreStringEmpty_, 0) };
      inline MetricRules& setIgnoreStringEmpty(int32_t ignoreStringEmpty) { DARABONBA_PTR_SET_VALUE(ignoreStringEmpty_, ignoreStringEmpty) };


      // ignoreZeroDiff Field Functions 
      bool hasIgnoreZeroDiff() const { return this->ignoreZeroDiff_ != nullptr;};
      void deleteIgnoreZeroDiff() { this->ignoreZeroDiff_ = nullptr;};
      inline int32_t getIgnoreZeroDiff() const { DARABONBA_PTR_GET_DEFAULT(ignoreZeroDiff_, 0) };
      inline MetricRules& setIgnoreZeroDiff(int32_t ignoreZeroDiff) { DARABONBA_PTR_SET_VALUE(ignoreZeroDiff_, ignoreZeroDiff) };


      // isCountCheck Field Functions 
      bool hasIsCountCheck() const { return this->isCountCheck_ != nullptr;};
      void deleteIsCountCheck() { this->isCountCheck_ = nullptr;};
      inline int32_t getIsCountCheck() const { DARABONBA_PTR_GET_DEFAULT(isCountCheck_, 0) };
      inline MetricRules& setIsCountCheck(int32_t isCountCheck) { DARABONBA_PTR_SET_VALUE(isCountCheck_, isCountCheck) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline MetricRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // setDecimalScale Field Functions 
      bool hasSetDecimalScale() const { return this->setDecimalScale_ != nullptr;};
      void deleteSetDecimalScale() { this->setDecimalScale_ = nullptr;};
      inline int32_t getSetDecimalScale() const { DARABONBA_PTR_GET_DEFAULT(setDecimalScale_, 0) };
      inline MetricRules& setSetDecimalScale(int32_t setDecimalScale) { DARABONBA_PTR_SET_VALUE(setDecimalScale_, setDecimalScale) };


    protected:
      shared_ptr<string> checkMethods_ {};
      shared_ptr<int32_t> controlFloatPrecision_ {};
      shared_ptr<int32_t> dataTypeClassify_ {};
      shared_ptr<int32_t> dataTypeGroup_ {};
      shared_ptr<vector<string>> dataTypeList_ {};
      shared_ptr<string> dataTypes_ {};
      shared_ptr<int32_t> diffTolerateType_ {};
      Darabonba::Json diffTolerateValues_ {};
      shared_ptr<int32_t> enableDecimalScale_ {};
      shared_ptr<string> filterColumnName_ {};
      shared_ptr<string> filterColumns_ {};
      shared_ptr<int32_t> floatPrecision_ {};
      shared_ptr<int32_t> ignoreDecimalDiff_ {};
      shared_ptr<int32_t> ignoreDecimalScaleSuffixZero_ {};
      shared_ptr<int32_t> ignoreEmptyDiff_ {};
      shared_ptr<int32_t> ignoreNumericZero_ {};
      shared_ptr<int32_t> ignoreStringEmpty_ {};
      shared_ptr<int32_t> ignoreZeroDiff_ {};
      shared_ptr<int32_t> isCountCheck_ {};
      shared_ptr<string> ruleId_ {};
      shared_ptr<int32_t> setDecimalScale_ {};
    };

    class FulltextRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FulltextRule& obj) { 
        DARABONBA_PTR_TO_JSON(checkMode, checkMode_);
        DARABONBA_PTR_TO_JSON(columnEqualCmpType, columnEqualCmpType_);
        DARABONBA_PTR_TO_JSON(columnEqualCmpValues, columnEqualCmpValues_);
        DARABONBA_PTR_TO_JSON(columnIsCosine, columnIsCosine_);
        DARABONBA_PTR_TO_JSON(columnIsIgnoreNull, columnIsIgnoreNull_);
        DARABONBA_PTR_TO_JSON(columnIsIgnoreZero, columnIsIgnoreZero_);
        DARABONBA_PTR_TO_JSON(columnIsSamples, columnIsSamples_);
        DARABONBA_PTR_TO_JSON(columnSamplesType, columnSamplesType_);
        DARABONBA_PTR_TO_JSON(columnSamplesValue, columnSamplesValue_);
        DARABONBA_PTR_TO_JSON(columnSizeCmpType, columnSizeCmpType_);
        DARABONBA_PTR_TO_JSON(columnSizeCmpValues, columnSizeCmpValues_);
        DARABONBA_PTR_TO_JSON(isPrimaryKeyCheck, isPrimaryKeyCheck_);
        DARABONBA_PTR_TO_JSON(lineCheckType, lineCheckType_);
        DARABONBA_PTR_TO_JSON(lineIsPrintAll, lineIsPrintAll_);
        DARABONBA_PTR_TO_JSON(lineIsSamples, lineIsSamples_);
        DARABONBA_PTR_TO_JSON(lineSamplesType, lineSamplesType_);
        DARABONBA_PTR_TO_JSON(lineSamplesValue, lineSamplesValue_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      };
      friend void from_json(const Darabonba::Json& j, FulltextRule& obj) { 
        DARABONBA_PTR_FROM_JSON(checkMode, checkMode_);
        DARABONBA_PTR_FROM_JSON(columnEqualCmpType, columnEqualCmpType_);
        DARABONBA_PTR_FROM_JSON(columnEqualCmpValues, columnEqualCmpValues_);
        DARABONBA_PTR_FROM_JSON(columnIsCosine, columnIsCosine_);
        DARABONBA_PTR_FROM_JSON(columnIsIgnoreNull, columnIsIgnoreNull_);
        DARABONBA_PTR_FROM_JSON(columnIsIgnoreZero, columnIsIgnoreZero_);
        DARABONBA_PTR_FROM_JSON(columnIsSamples, columnIsSamples_);
        DARABONBA_PTR_FROM_JSON(columnSamplesType, columnSamplesType_);
        DARABONBA_PTR_FROM_JSON(columnSamplesValue, columnSamplesValue_);
        DARABONBA_PTR_FROM_JSON(columnSizeCmpType, columnSizeCmpType_);
        DARABONBA_PTR_FROM_JSON(columnSizeCmpValues, columnSizeCmpValues_);
        DARABONBA_PTR_FROM_JSON(isPrimaryKeyCheck, isPrimaryKeyCheck_);
        DARABONBA_PTR_FROM_JSON(lineCheckType, lineCheckType_);
        DARABONBA_PTR_FROM_JSON(lineIsPrintAll, lineIsPrintAll_);
        DARABONBA_PTR_FROM_JSON(lineIsSamples, lineIsSamples_);
        DARABONBA_PTR_FROM_JSON(lineSamplesType, lineSamplesType_);
        DARABONBA_PTR_FROM_JSON(lineSamplesValue, lineSamplesValue_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      };
      FulltextRule() = default ;
      FulltextRule(const FulltextRule &) = default ;
      FulltextRule(FulltextRule &&) = default ;
      FulltextRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FulltextRule() = default ;
      FulltextRule& operator=(const FulltextRule &) = default ;
      FulltextRule& operator=(FulltextRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkMode_ == nullptr
        && this->columnEqualCmpType_ == nullptr && this->columnEqualCmpValues_ == nullptr && this->columnIsCosine_ == nullptr && this->columnIsIgnoreNull_ == nullptr && this->columnIsIgnoreZero_ == nullptr
        && this->columnIsSamples_ == nullptr && this->columnSamplesType_ == nullptr && this->columnSamplesValue_ == nullptr && this->columnSizeCmpType_ == nullptr && this->columnSizeCmpValues_ == nullptr
        && this->isPrimaryKeyCheck_ == nullptr && this->lineCheckType_ == nullptr && this->lineIsPrintAll_ == nullptr && this->lineIsSamples_ == nullptr && this->lineSamplesType_ == nullptr
        && this->lineSamplesValue_ == nullptr && this->ruleId_ == nullptr; };
      // checkMode Field Functions 
      bool hasCheckMode() const { return this->checkMode_ != nullptr;};
      void deleteCheckMode() { this->checkMode_ = nullptr;};
      inline int32_t getCheckMode() const { DARABONBA_PTR_GET_DEFAULT(checkMode_, 0) };
      inline FulltextRule& setCheckMode(int32_t checkMode) { DARABONBA_PTR_SET_VALUE(checkMode_, checkMode) };


      // columnEqualCmpType Field Functions 
      bool hasColumnEqualCmpType() const { return this->columnEqualCmpType_ != nullptr;};
      void deleteColumnEqualCmpType() { this->columnEqualCmpType_ = nullptr;};
      inline int32_t getColumnEqualCmpType() const { DARABONBA_PTR_GET_DEFAULT(columnEqualCmpType_, 0) };
      inline FulltextRule& setColumnEqualCmpType(int32_t columnEqualCmpType) { DARABONBA_PTR_SET_VALUE(columnEqualCmpType_, columnEqualCmpType) };


      // columnEqualCmpValues Field Functions 
      bool hasColumnEqualCmpValues() const { return this->columnEqualCmpValues_ != nullptr;};
      void deleteColumnEqualCmpValues() { this->columnEqualCmpValues_ = nullptr;};
      inline string getColumnEqualCmpValues() const { DARABONBA_PTR_GET_DEFAULT(columnEqualCmpValues_, "") };
      inline FulltextRule& setColumnEqualCmpValues(string columnEqualCmpValues) { DARABONBA_PTR_SET_VALUE(columnEqualCmpValues_, columnEqualCmpValues) };


      // columnIsCosine Field Functions 
      bool hasColumnIsCosine() const { return this->columnIsCosine_ != nullptr;};
      void deleteColumnIsCosine() { this->columnIsCosine_ = nullptr;};
      inline int32_t getColumnIsCosine() const { DARABONBA_PTR_GET_DEFAULT(columnIsCosine_, 0) };
      inline FulltextRule& setColumnIsCosine(int32_t columnIsCosine) { DARABONBA_PTR_SET_VALUE(columnIsCosine_, columnIsCosine) };


      // columnIsIgnoreNull Field Functions 
      bool hasColumnIsIgnoreNull() const { return this->columnIsIgnoreNull_ != nullptr;};
      void deleteColumnIsIgnoreNull() { this->columnIsIgnoreNull_ = nullptr;};
      inline int32_t getColumnIsIgnoreNull() const { DARABONBA_PTR_GET_DEFAULT(columnIsIgnoreNull_, 0) };
      inline FulltextRule& setColumnIsIgnoreNull(int32_t columnIsIgnoreNull) { DARABONBA_PTR_SET_VALUE(columnIsIgnoreNull_, columnIsIgnoreNull) };


      // columnIsIgnoreZero Field Functions 
      bool hasColumnIsIgnoreZero() const { return this->columnIsIgnoreZero_ != nullptr;};
      void deleteColumnIsIgnoreZero() { this->columnIsIgnoreZero_ = nullptr;};
      inline int32_t getColumnIsIgnoreZero() const { DARABONBA_PTR_GET_DEFAULT(columnIsIgnoreZero_, 0) };
      inline FulltextRule& setColumnIsIgnoreZero(int32_t columnIsIgnoreZero) { DARABONBA_PTR_SET_VALUE(columnIsIgnoreZero_, columnIsIgnoreZero) };


      // columnIsSamples Field Functions 
      bool hasColumnIsSamples() const { return this->columnIsSamples_ != nullptr;};
      void deleteColumnIsSamples() { this->columnIsSamples_ = nullptr;};
      inline int32_t getColumnIsSamples() const { DARABONBA_PTR_GET_DEFAULT(columnIsSamples_, 0) };
      inline FulltextRule& setColumnIsSamples(int32_t columnIsSamples) { DARABONBA_PTR_SET_VALUE(columnIsSamples_, columnIsSamples) };


      // columnSamplesType Field Functions 
      bool hasColumnSamplesType() const { return this->columnSamplesType_ != nullptr;};
      void deleteColumnSamplesType() { this->columnSamplesType_ = nullptr;};
      inline int32_t getColumnSamplesType() const { DARABONBA_PTR_GET_DEFAULT(columnSamplesType_, 0) };
      inline FulltextRule& setColumnSamplesType(int32_t columnSamplesType) { DARABONBA_PTR_SET_VALUE(columnSamplesType_, columnSamplesType) };


      // columnSamplesValue Field Functions 
      bool hasColumnSamplesValue() const { return this->columnSamplesValue_ != nullptr;};
      void deleteColumnSamplesValue() { this->columnSamplesValue_ = nullptr;};
      inline int32_t getColumnSamplesValue() const { DARABONBA_PTR_GET_DEFAULT(columnSamplesValue_, 0) };
      inline FulltextRule& setColumnSamplesValue(int32_t columnSamplesValue) { DARABONBA_PTR_SET_VALUE(columnSamplesValue_, columnSamplesValue) };


      // columnSizeCmpType Field Functions 
      bool hasColumnSizeCmpType() const { return this->columnSizeCmpType_ != nullptr;};
      void deleteColumnSizeCmpType() { this->columnSizeCmpType_ = nullptr;};
      inline int32_t getColumnSizeCmpType() const { DARABONBA_PTR_GET_DEFAULT(columnSizeCmpType_, 0) };
      inline FulltextRule& setColumnSizeCmpType(int32_t columnSizeCmpType) { DARABONBA_PTR_SET_VALUE(columnSizeCmpType_, columnSizeCmpType) };


      // columnSizeCmpValues Field Functions 
      bool hasColumnSizeCmpValues() const { return this->columnSizeCmpValues_ != nullptr;};
      void deleteColumnSizeCmpValues() { this->columnSizeCmpValues_ = nullptr;};
      inline string getColumnSizeCmpValues() const { DARABONBA_PTR_GET_DEFAULT(columnSizeCmpValues_, "") };
      inline FulltextRule& setColumnSizeCmpValues(string columnSizeCmpValues) { DARABONBA_PTR_SET_VALUE(columnSizeCmpValues_, columnSizeCmpValues) };


      // isPrimaryKeyCheck Field Functions 
      bool hasIsPrimaryKeyCheck() const { return this->isPrimaryKeyCheck_ != nullptr;};
      void deleteIsPrimaryKeyCheck() { this->isPrimaryKeyCheck_ = nullptr;};
      inline int32_t getIsPrimaryKeyCheck() const { DARABONBA_PTR_GET_DEFAULT(isPrimaryKeyCheck_, 0) };
      inline FulltextRule& setIsPrimaryKeyCheck(int32_t isPrimaryKeyCheck) { DARABONBA_PTR_SET_VALUE(isPrimaryKeyCheck_, isPrimaryKeyCheck) };


      // lineCheckType Field Functions 
      bool hasLineCheckType() const { return this->lineCheckType_ != nullptr;};
      void deleteLineCheckType() { this->lineCheckType_ = nullptr;};
      inline int32_t getLineCheckType() const { DARABONBA_PTR_GET_DEFAULT(lineCheckType_, 0) };
      inline FulltextRule& setLineCheckType(int32_t lineCheckType) { DARABONBA_PTR_SET_VALUE(lineCheckType_, lineCheckType) };


      // lineIsPrintAll Field Functions 
      bool hasLineIsPrintAll() const { return this->lineIsPrintAll_ != nullptr;};
      void deleteLineIsPrintAll() { this->lineIsPrintAll_ = nullptr;};
      inline int32_t getLineIsPrintAll() const { DARABONBA_PTR_GET_DEFAULT(lineIsPrintAll_, 0) };
      inline FulltextRule& setLineIsPrintAll(int32_t lineIsPrintAll) { DARABONBA_PTR_SET_VALUE(lineIsPrintAll_, lineIsPrintAll) };


      // lineIsSamples Field Functions 
      bool hasLineIsSamples() const { return this->lineIsSamples_ != nullptr;};
      void deleteLineIsSamples() { this->lineIsSamples_ = nullptr;};
      inline int32_t getLineIsSamples() const { DARABONBA_PTR_GET_DEFAULT(lineIsSamples_, 0) };
      inline FulltextRule& setLineIsSamples(int32_t lineIsSamples) { DARABONBA_PTR_SET_VALUE(lineIsSamples_, lineIsSamples) };


      // lineSamplesType Field Functions 
      bool hasLineSamplesType() const { return this->lineSamplesType_ != nullptr;};
      void deleteLineSamplesType() { this->lineSamplesType_ = nullptr;};
      inline int32_t getLineSamplesType() const { DARABONBA_PTR_GET_DEFAULT(lineSamplesType_, 0) };
      inline FulltextRule& setLineSamplesType(int32_t lineSamplesType) { DARABONBA_PTR_SET_VALUE(lineSamplesType_, lineSamplesType) };


      // lineSamplesValue Field Functions 
      bool hasLineSamplesValue() const { return this->lineSamplesValue_ != nullptr;};
      void deleteLineSamplesValue() { this->lineSamplesValue_ = nullptr;};
      inline int32_t getLineSamplesValue() const { DARABONBA_PTR_GET_DEFAULT(lineSamplesValue_, 0) };
      inline FulltextRule& setLineSamplesValue(int32_t lineSamplesValue) { DARABONBA_PTR_SET_VALUE(lineSamplesValue_, lineSamplesValue) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline FulltextRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    protected:
      shared_ptr<int32_t> checkMode_ {};
      shared_ptr<int32_t> columnEqualCmpType_ {};
      shared_ptr<string> columnEqualCmpValues_ {};
      shared_ptr<int32_t> columnIsCosine_ {};
      shared_ptr<int32_t> columnIsIgnoreNull_ {};
      shared_ptr<int32_t> columnIsIgnoreZero_ {};
      shared_ptr<int32_t> columnIsSamples_ {};
      shared_ptr<int32_t> columnSamplesType_ {};
      shared_ptr<int32_t> columnSamplesValue_ {};
      shared_ptr<int32_t> columnSizeCmpType_ {};
      shared_ptr<string> columnSizeCmpValues_ {};
      shared_ptr<int32_t> isPrimaryKeyCheck_ {};
      shared_ptr<int32_t> lineCheckType_ {};
      shared_ptr<int32_t> lineIsPrintAll_ {};
      shared_ptr<int32_t> lineIsSamples_ {};
      shared_ptr<int32_t> lineSamplesType_ {};
      shared_ptr<int32_t> lineSamplesValue_ {};
      shared_ptr<string> ruleId_ {};
    };

    class DsEngineRels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DsEngineRels& obj) { 
        DARABONBA_PTR_TO_JSON(dsEngineId, dsEngineId_);
        DARABONBA_PTR_TO_JSON(dsType, dsType_);
        DARABONBA_PTR_TO_JSON(engineTypes, engineTypes_);
      };
      friend void from_json(const Darabonba::Json& j, DsEngineRels& obj) { 
        DARABONBA_PTR_FROM_JSON(dsEngineId, dsEngineId_);
        DARABONBA_PTR_FROM_JSON(dsType, dsType_);
        DARABONBA_PTR_FROM_JSON(engineTypes, engineTypes_);
      };
      DsEngineRels() = default ;
      DsEngineRels(const DsEngineRels &) = default ;
      DsEngineRels(DsEngineRels &&) = default ;
      DsEngineRels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DsEngineRels() = default ;
      DsEngineRels& operator=(const DsEngineRels &) = default ;
      DsEngineRels& operator=(DsEngineRels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dsEngineId_ == nullptr
        && this->dsType_ == nullptr && this->engineTypes_ == nullptr; };
      // dsEngineId Field Functions 
      bool hasDsEngineId() const { return this->dsEngineId_ != nullptr;};
      void deleteDsEngineId() { this->dsEngineId_ = nullptr;};
      inline string getDsEngineId() const { DARABONBA_PTR_GET_DEFAULT(dsEngineId_, "") };
      inline DsEngineRels& setDsEngineId(string dsEngineId) { DARABONBA_PTR_SET_VALUE(dsEngineId_, dsEngineId) };


      // dsType Field Functions 
      bool hasDsType() const { return this->dsType_ != nullptr;};
      void deleteDsType() { this->dsType_ = nullptr;};
      inline string getDsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
      inline DsEngineRels& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


      // engineTypes Field Functions 
      bool hasEngineTypes() const { return this->engineTypes_ != nullptr;};
      void deleteEngineTypes() { this->engineTypes_ = nullptr;};
      inline const vector<string> & getEngineTypes() const { DARABONBA_PTR_GET_CONST(engineTypes_, vector<string>) };
      inline vector<string> getEngineTypes() { DARABONBA_PTR_GET(engineTypes_, vector<string>) };
      inline DsEngineRels& setEngineTypes(const vector<string> & engineTypes) { DARABONBA_PTR_SET_VALUE(engineTypes_, engineTypes) };
      inline DsEngineRels& setEngineTypes(vector<string> && engineTypes) { DARABONBA_PTR_SET_RVALUE(engineTypes_, engineTypes) };


    protected:
      shared_ptr<string> dsEngineId_ {};
      shared_ptr<string> dsType_ {};
      shared_ptr<vector<string>> engineTypes_ {};
    };

    class ComplexMetricRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComplexMetricRules& obj) { 
        DARABONBA_PTR_TO_JSON(checkMethods, checkMethods_);
        DARABONBA_PTR_TO_JSON(controlFloatPrecision, controlFloatPrecision_);
        DARABONBA_PTR_TO_JSON(dataTypeClassify, dataTypeClassify_);
        DARABONBA_PTR_TO_JSON(dataTypeGroup, dataTypeGroup_);
        DARABONBA_PTR_TO_JSON(dataTypeList, dataTypeList_);
        DARABONBA_PTR_TO_JSON(dataTypes, dataTypes_);
        DARABONBA_PTR_TO_JSON(diffTolerateType, diffTolerateType_);
        DARABONBA_ANY_TO_JSON(diffTolerateValues, diffTolerateValues_);
        DARABONBA_PTR_TO_JSON(enableDecimalScale, enableDecimalScale_);
        DARABONBA_PTR_TO_JSON(filterColumnName, filterColumnName_);
        DARABONBA_PTR_TO_JSON(filterColumns, filterColumns_);
        DARABONBA_PTR_TO_JSON(floatPrecision, floatPrecision_);
        DARABONBA_PTR_TO_JSON(ignoreDecimalDiff, ignoreDecimalDiff_);
        DARABONBA_PTR_TO_JSON(ignoreDecimalScaleSuffixZero, ignoreDecimalScaleSuffixZero_);
        DARABONBA_PTR_TO_JSON(ignoreEmptyDiff, ignoreEmptyDiff_);
        DARABONBA_PTR_TO_JSON(ignoreNumericZero, ignoreNumericZero_);
        DARABONBA_PTR_TO_JSON(ignoreStringEmpty, ignoreStringEmpty_);
        DARABONBA_PTR_TO_JSON(ignoreZeroDiff, ignoreZeroDiff_);
        DARABONBA_PTR_TO_JSON(isCountCheck, isCountCheck_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(setDecimalScale, setDecimalScale_);
      };
      friend void from_json(const Darabonba::Json& j, ComplexMetricRules& obj) { 
        DARABONBA_PTR_FROM_JSON(checkMethods, checkMethods_);
        DARABONBA_PTR_FROM_JSON(controlFloatPrecision, controlFloatPrecision_);
        DARABONBA_PTR_FROM_JSON(dataTypeClassify, dataTypeClassify_);
        DARABONBA_PTR_FROM_JSON(dataTypeGroup, dataTypeGroup_);
        DARABONBA_PTR_FROM_JSON(dataTypeList, dataTypeList_);
        DARABONBA_PTR_FROM_JSON(dataTypes, dataTypes_);
        DARABONBA_PTR_FROM_JSON(diffTolerateType, diffTolerateType_);
        DARABONBA_ANY_FROM_JSON(diffTolerateValues, diffTolerateValues_);
        DARABONBA_PTR_FROM_JSON(enableDecimalScale, enableDecimalScale_);
        DARABONBA_PTR_FROM_JSON(filterColumnName, filterColumnName_);
        DARABONBA_PTR_FROM_JSON(filterColumns, filterColumns_);
        DARABONBA_PTR_FROM_JSON(floatPrecision, floatPrecision_);
        DARABONBA_PTR_FROM_JSON(ignoreDecimalDiff, ignoreDecimalDiff_);
        DARABONBA_PTR_FROM_JSON(ignoreDecimalScaleSuffixZero, ignoreDecimalScaleSuffixZero_);
        DARABONBA_PTR_FROM_JSON(ignoreEmptyDiff, ignoreEmptyDiff_);
        DARABONBA_PTR_FROM_JSON(ignoreNumericZero, ignoreNumericZero_);
        DARABONBA_PTR_FROM_JSON(ignoreStringEmpty, ignoreStringEmpty_);
        DARABONBA_PTR_FROM_JSON(ignoreZeroDiff, ignoreZeroDiff_);
        DARABONBA_PTR_FROM_JSON(isCountCheck, isCountCheck_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(setDecimalScale, setDecimalScale_);
      };
      ComplexMetricRules() = default ;
      ComplexMetricRules(const ComplexMetricRules &) = default ;
      ComplexMetricRules(ComplexMetricRules &&) = default ;
      ComplexMetricRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComplexMetricRules() = default ;
      ComplexMetricRules& operator=(const ComplexMetricRules &) = default ;
      ComplexMetricRules& operator=(ComplexMetricRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkMethods_ == nullptr
        && this->controlFloatPrecision_ == nullptr && this->dataTypeClassify_ == nullptr && this->dataTypeGroup_ == nullptr && this->dataTypeList_ == nullptr && this->dataTypes_ == nullptr
        && this->diffTolerateType_ == nullptr && this->diffTolerateValues_ == nullptr && this->enableDecimalScale_ == nullptr && this->filterColumnName_ == nullptr && this->filterColumns_ == nullptr
        && this->floatPrecision_ == nullptr && this->ignoreDecimalDiff_ == nullptr && this->ignoreDecimalScaleSuffixZero_ == nullptr && this->ignoreEmptyDiff_ == nullptr && this->ignoreNumericZero_ == nullptr
        && this->ignoreStringEmpty_ == nullptr && this->ignoreZeroDiff_ == nullptr && this->isCountCheck_ == nullptr && this->ruleId_ == nullptr && this->setDecimalScale_ == nullptr; };
      // checkMethods Field Functions 
      bool hasCheckMethods() const { return this->checkMethods_ != nullptr;};
      void deleteCheckMethods() { this->checkMethods_ = nullptr;};
      inline string getCheckMethods() const { DARABONBA_PTR_GET_DEFAULT(checkMethods_, "") };
      inline ComplexMetricRules& setCheckMethods(string checkMethods) { DARABONBA_PTR_SET_VALUE(checkMethods_, checkMethods) };


      // controlFloatPrecision Field Functions 
      bool hasControlFloatPrecision() const { return this->controlFloatPrecision_ != nullptr;};
      void deleteControlFloatPrecision() { this->controlFloatPrecision_ = nullptr;};
      inline int32_t getControlFloatPrecision() const { DARABONBA_PTR_GET_DEFAULT(controlFloatPrecision_, 0) };
      inline ComplexMetricRules& setControlFloatPrecision(int32_t controlFloatPrecision) { DARABONBA_PTR_SET_VALUE(controlFloatPrecision_, controlFloatPrecision) };


      // dataTypeClassify Field Functions 
      bool hasDataTypeClassify() const { return this->dataTypeClassify_ != nullptr;};
      void deleteDataTypeClassify() { this->dataTypeClassify_ = nullptr;};
      inline int32_t getDataTypeClassify() const { DARABONBA_PTR_GET_DEFAULT(dataTypeClassify_, 0) };
      inline ComplexMetricRules& setDataTypeClassify(int32_t dataTypeClassify) { DARABONBA_PTR_SET_VALUE(dataTypeClassify_, dataTypeClassify) };


      // dataTypeGroup Field Functions 
      bool hasDataTypeGroup() const { return this->dataTypeGroup_ != nullptr;};
      void deleteDataTypeGroup() { this->dataTypeGroup_ = nullptr;};
      inline int32_t getDataTypeGroup() const { DARABONBA_PTR_GET_DEFAULT(dataTypeGroup_, 0) };
      inline ComplexMetricRules& setDataTypeGroup(int32_t dataTypeGroup) { DARABONBA_PTR_SET_VALUE(dataTypeGroup_, dataTypeGroup) };


      // dataTypeList Field Functions 
      bool hasDataTypeList() const { return this->dataTypeList_ != nullptr;};
      void deleteDataTypeList() { this->dataTypeList_ = nullptr;};
      inline const vector<string> & getDataTypeList() const { DARABONBA_PTR_GET_CONST(dataTypeList_, vector<string>) };
      inline vector<string> getDataTypeList() { DARABONBA_PTR_GET(dataTypeList_, vector<string>) };
      inline ComplexMetricRules& setDataTypeList(const vector<string> & dataTypeList) { DARABONBA_PTR_SET_VALUE(dataTypeList_, dataTypeList) };
      inline ComplexMetricRules& setDataTypeList(vector<string> && dataTypeList) { DARABONBA_PTR_SET_RVALUE(dataTypeList_, dataTypeList) };


      // dataTypes Field Functions 
      bool hasDataTypes() const { return this->dataTypes_ != nullptr;};
      void deleteDataTypes() { this->dataTypes_ = nullptr;};
      inline string getDataTypes() const { DARABONBA_PTR_GET_DEFAULT(dataTypes_, "") };
      inline ComplexMetricRules& setDataTypes(string dataTypes) { DARABONBA_PTR_SET_VALUE(dataTypes_, dataTypes) };


      // diffTolerateType Field Functions 
      bool hasDiffTolerateType() const { return this->diffTolerateType_ != nullptr;};
      void deleteDiffTolerateType() { this->diffTolerateType_ = nullptr;};
      inline int32_t getDiffTolerateType() const { DARABONBA_PTR_GET_DEFAULT(diffTolerateType_, 0) };
      inline ComplexMetricRules& setDiffTolerateType(int32_t diffTolerateType) { DARABONBA_PTR_SET_VALUE(diffTolerateType_, diffTolerateType) };


      // diffTolerateValues Field Functions 
      bool hasDiffTolerateValues() const { return this->diffTolerateValues_ != nullptr;};
      void deleteDiffTolerateValues() { this->diffTolerateValues_ = nullptr;};
      inline       const Darabonba::Json & getDiffTolerateValues() const { DARABONBA_GET(diffTolerateValues_) };
      Darabonba::Json & getDiffTolerateValues() { DARABONBA_GET(diffTolerateValues_) };
      inline ComplexMetricRules& setDiffTolerateValues(const Darabonba::Json & diffTolerateValues) { DARABONBA_SET_VALUE(diffTolerateValues_, diffTolerateValues) };
      inline ComplexMetricRules& setDiffTolerateValues(Darabonba::Json && diffTolerateValues) { DARABONBA_SET_RVALUE(diffTolerateValues_, diffTolerateValues) };


      // enableDecimalScale Field Functions 
      bool hasEnableDecimalScale() const { return this->enableDecimalScale_ != nullptr;};
      void deleteEnableDecimalScale() { this->enableDecimalScale_ = nullptr;};
      inline int32_t getEnableDecimalScale() const { DARABONBA_PTR_GET_DEFAULT(enableDecimalScale_, 0) };
      inline ComplexMetricRules& setEnableDecimalScale(int32_t enableDecimalScale) { DARABONBA_PTR_SET_VALUE(enableDecimalScale_, enableDecimalScale) };


      // filterColumnName Field Functions 
      bool hasFilterColumnName() const { return this->filterColumnName_ != nullptr;};
      void deleteFilterColumnName() { this->filterColumnName_ = nullptr;};
      inline string getFilterColumnName() const { DARABONBA_PTR_GET_DEFAULT(filterColumnName_, "") };
      inline ComplexMetricRules& setFilterColumnName(string filterColumnName) { DARABONBA_PTR_SET_VALUE(filterColumnName_, filterColumnName) };


      // filterColumns Field Functions 
      bool hasFilterColumns() const { return this->filterColumns_ != nullptr;};
      void deleteFilterColumns() { this->filterColumns_ = nullptr;};
      inline string getFilterColumns() const { DARABONBA_PTR_GET_DEFAULT(filterColumns_, "") };
      inline ComplexMetricRules& setFilterColumns(string filterColumns) { DARABONBA_PTR_SET_VALUE(filterColumns_, filterColumns) };


      // floatPrecision Field Functions 
      bool hasFloatPrecision() const { return this->floatPrecision_ != nullptr;};
      void deleteFloatPrecision() { this->floatPrecision_ = nullptr;};
      inline int32_t getFloatPrecision() const { DARABONBA_PTR_GET_DEFAULT(floatPrecision_, 0) };
      inline ComplexMetricRules& setFloatPrecision(int32_t floatPrecision) { DARABONBA_PTR_SET_VALUE(floatPrecision_, floatPrecision) };


      // ignoreDecimalDiff Field Functions 
      bool hasIgnoreDecimalDiff() const { return this->ignoreDecimalDiff_ != nullptr;};
      void deleteIgnoreDecimalDiff() { this->ignoreDecimalDiff_ = nullptr;};
      inline int32_t getIgnoreDecimalDiff() const { DARABONBA_PTR_GET_DEFAULT(ignoreDecimalDiff_, 0) };
      inline ComplexMetricRules& setIgnoreDecimalDiff(int32_t ignoreDecimalDiff) { DARABONBA_PTR_SET_VALUE(ignoreDecimalDiff_, ignoreDecimalDiff) };


      // ignoreDecimalScaleSuffixZero Field Functions 
      bool hasIgnoreDecimalScaleSuffixZero() const { return this->ignoreDecimalScaleSuffixZero_ != nullptr;};
      void deleteIgnoreDecimalScaleSuffixZero() { this->ignoreDecimalScaleSuffixZero_ = nullptr;};
      inline int32_t getIgnoreDecimalScaleSuffixZero() const { DARABONBA_PTR_GET_DEFAULT(ignoreDecimalScaleSuffixZero_, 0) };
      inline ComplexMetricRules& setIgnoreDecimalScaleSuffixZero(int32_t ignoreDecimalScaleSuffixZero) { DARABONBA_PTR_SET_VALUE(ignoreDecimalScaleSuffixZero_, ignoreDecimalScaleSuffixZero) };


      // ignoreEmptyDiff Field Functions 
      bool hasIgnoreEmptyDiff() const { return this->ignoreEmptyDiff_ != nullptr;};
      void deleteIgnoreEmptyDiff() { this->ignoreEmptyDiff_ = nullptr;};
      inline int32_t getIgnoreEmptyDiff() const { DARABONBA_PTR_GET_DEFAULT(ignoreEmptyDiff_, 0) };
      inline ComplexMetricRules& setIgnoreEmptyDiff(int32_t ignoreEmptyDiff) { DARABONBA_PTR_SET_VALUE(ignoreEmptyDiff_, ignoreEmptyDiff) };


      // ignoreNumericZero Field Functions 
      bool hasIgnoreNumericZero() const { return this->ignoreNumericZero_ != nullptr;};
      void deleteIgnoreNumericZero() { this->ignoreNumericZero_ = nullptr;};
      inline int32_t getIgnoreNumericZero() const { DARABONBA_PTR_GET_DEFAULT(ignoreNumericZero_, 0) };
      inline ComplexMetricRules& setIgnoreNumericZero(int32_t ignoreNumericZero) { DARABONBA_PTR_SET_VALUE(ignoreNumericZero_, ignoreNumericZero) };


      // ignoreStringEmpty Field Functions 
      bool hasIgnoreStringEmpty() const { return this->ignoreStringEmpty_ != nullptr;};
      void deleteIgnoreStringEmpty() { this->ignoreStringEmpty_ = nullptr;};
      inline int32_t getIgnoreStringEmpty() const { DARABONBA_PTR_GET_DEFAULT(ignoreStringEmpty_, 0) };
      inline ComplexMetricRules& setIgnoreStringEmpty(int32_t ignoreStringEmpty) { DARABONBA_PTR_SET_VALUE(ignoreStringEmpty_, ignoreStringEmpty) };


      // ignoreZeroDiff Field Functions 
      bool hasIgnoreZeroDiff() const { return this->ignoreZeroDiff_ != nullptr;};
      void deleteIgnoreZeroDiff() { this->ignoreZeroDiff_ = nullptr;};
      inline int32_t getIgnoreZeroDiff() const { DARABONBA_PTR_GET_DEFAULT(ignoreZeroDiff_, 0) };
      inline ComplexMetricRules& setIgnoreZeroDiff(int32_t ignoreZeroDiff) { DARABONBA_PTR_SET_VALUE(ignoreZeroDiff_, ignoreZeroDiff) };


      // isCountCheck Field Functions 
      bool hasIsCountCheck() const { return this->isCountCheck_ != nullptr;};
      void deleteIsCountCheck() { this->isCountCheck_ = nullptr;};
      inline int32_t getIsCountCheck() const { DARABONBA_PTR_GET_DEFAULT(isCountCheck_, 0) };
      inline ComplexMetricRules& setIsCountCheck(int32_t isCountCheck) { DARABONBA_PTR_SET_VALUE(isCountCheck_, isCountCheck) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline ComplexMetricRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // setDecimalScale Field Functions 
      bool hasSetDecimalScale() const { return this->setDecimalScale_ != nullptr;};
      void deleteSetDecimalScale() { this->setDecimalScale_ = nullptr;};
      inline int32_t getSetDecimalScale() const { DARABONBA_PTR_GET_DEFAULT(setDecimalScale_, 0) };
      inline ComplexMetricRules& setSetDecimalScale(int32_t setDecimalScale) { DARABONBA_PTR_SET_VALUE(setDecimalScale_, setDecimalScale) };


    protected:
      shared_ptr<string> checkMethods_ {};
      shared_ptr<int32_t> controlFloatPrecision_ {};
      shared_ptr<int32_t> dataTypeClassify_ {};
      shared_ptr<int32_t> dataTypeGroup_ {};
      shared_ptr<vector<string>> dataTypeList_ {};
      shared_ptr<string> dataTypes_ {};
      shared_ptr<int32_t> diffTolerateType_ {};
      Darabonba::Json diffTolerateValues_ {};
      shared_ptr<int32_t> enableDecimalScale_ {};
      shared_ptr<string> filterColumnName_ {};
      shared_ptr<string> filterColumns_ {};
      shared_ptr<int32_t> floatPrecision_ {};
      shared_ptr<int32_t> ignoreDecimalDiff_ {};
      shared_ptr<int32_t> ignoreDecimalScaleSuffixZero_ {};
      shared_ptr<int32_t> ignoreEmptyDiff_ {};
      shared_ptr<int32_t> ignoreNumericZero_ {};
      shared_ptr<int32_t> ignoreStringEmpty_ {};
      shared_ptr<int32_t> ignoreZeroDiff_ {};
      shared_ptr<int32_t> isCountCheck_ {};
      shared_ptr<string> ruleId_ {};
      shared_ptr<int32_t> setDecimalScale_ {};
    };

    class BasicMetricRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BasicMetricRules& obj) { 
        DARABONBA_PTR_TO_JSON(checkMethods, checkMethods_);
        DARABONBA_PTR_TO_JSON(controlFloatPrecision, controlFloatPrecision_);
        DARABONBA_PTR_TO_JSON(dataTypeClassify, dataTypeClassify_);
        DARABONBA_PTR_TO_JSON(dataTypeGroup, dataTypeGroup_);
        DARABONBA_PTR_TO_JSON(dataTypeList, dataTypeList_);
        DARABONBA_PTR_TO_JSON(dataTypes, dataTypes_);
        DARABONBA_PTR_TO_JSON(diffTolerateType, diffTolerateType_);
        DARABONBA_ANY_TO_JSON(diffTolerateValues, diffTolerateValues_);
        DARABONBA_PTR_TO_JSON(enableDecimalScale, enableDecimalScale_);
        DARABONBA_PTR_TO_JSON(filterColumnName, filterColumnName_);
        DARABONBA_PTR_TO_JSON(filterColumns, filterColumns_);
        DARABONBA_PTR_TO_JSON(floatPrecision, floatPrecision_);
        DARABONBA_PTR_TO_JSON(ignoreDecimalDiff, ignoreDecimalDiff_);
        DARABONBA_PTR_TO_JSON(ignoreDecimalScaleSuffixZero, ignoreDecimalScaleSuffixZero_);
        DARABONBA_PTR_TO_JSON(ignoreEmptyDiff, ignoreEmptyDiff_);
        DARABONBA_PTR_TO_JSON(ignoreNumericZero, ignoreNumericZero_);
        DARABONBA_PTR_TO_JSON(ignoreStringEmpty, ignoreStringEmpty_);
        DARABONBA_PTR_TO_JSON(ignoreZeroDiff, ignoreZeroDiff_);
        DARABONBA_PTR_TO_JSON(isCountCheck, isCountCheck_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(setDecimalScale, setDecimalScale_);
      };
      friend void from_json(const Darabonba::Json& j, BasicMetricRules& obj) { 
        DARABONBA_PTR_FROM_JSON(checkMethods, checkMethods_);
        DARABONBA_PTR_FROM_JSON(controlFloatPrecision, controlFloatPrecision_);
        DARABONBA_PTR_FROM_JSON(dataTypeClassify, dataTypeClassify_);
        DARABONBA_PTR_FROM_JSON(dataTypeGroup, dataTypeGroup_);
        DARABONBA_PTR_FROM_JSON(dataTypeList, dataTypeList_);
        DARABONBA_PTR_FROM_JSON(dataTypes, dataTypes_);
        DARABONBA_PTR_FROM_JSON(diffTolerateType, diffTolerateType_);
        DARABONBA_ANY_FROM_JSON(diffTolerateValues, diffTolerateValues_);
        DARABONBA_PTR_FROM_JSON(enableDecimalScale, enableDecimalScale_);
        DARABONBA_PTR_FROM_JSON(filterColumnName, filterColumnName_);
        DARABONBA_PTR_FROM_JSON(filterColumns, filterColumns_);
        DARABONBA_PTR_FROM_JSON(floatPrecision, floatPrecision_);
        DARABONBA_PTR_FROM_JSON(ignoreDecimalDiff, ignoreDecimalDiff_);
        DARABONBA_PTR_FROM_JSON(ignoreDecimalScaleSuffixZero, ignoreDecimalScaleSuffixZero_);
        DARABONBA_PTR_FROM_JSON(ignoreEmptyDiff, ignoreEmptyDiff_);
        DARABONBA_PTR_FROM_JSON(ignoreNumericZero, ignoreNumericZero_);
        DARABONBA_PTR_FROM_JSON(ignoreStringEmpty, ignoreStringEmpty_);
        DARABONBA_PTR_FROM_JSON(ignoreZeroDiff, ignoreZeroDiff_);
        DARABONBA_PTR_FROM_JSON(isCountCheck, isCountCheck_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(setDecimalScale, setDecimalScale_);
      };
      BasicMetricRules() = default ;
      BasicMetricRules(const BasicMetricRules &) = default ;
      BasicMetricRules(BasicMetricRules &&) = default ;
      BasicMetricRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BasicMetricRules() = default ;
      BasicMetricRules& operator=(const BasicMetricRules &) = default ;
      BasicMetricRules& operator=(BasicMetricRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkMethods_ == nullptr
        && this->controlFloatPrecision_ == nullptr && this->dataTypeClassify_ == nullptr && this->dataTypeGroup_ == nullptr && this->dataTypeList_ == nullptr && this->dataTypes_ == nullptr
        && this->diffTolerateType_ == nullptr && this->diffTolerateValues_ == nullptr && this->enableDecimalScale_ == nullptr && this->filterColumnName_ == nullptr && this->filterColumns_ == nullptr
        && this->floatPrecision_ == nullptr && this->ignoreDecimalDiff_ == nullptr && this->ignoreDecimalScaleSuffixZero_ == nullptr && this->ignoreEmptyDiff_ == nullptr && this->ignoreNumericZero_ == nullptr
        && this->ignoreStringEmpty_ == nullptr && this->ignoreZeroDiff_ == nullptr && this->isCountCheck_ == nullptr && this->ruleId_ == nullptr && this->setDecimalScale_ == nullptr; };
      // checkMethods Field Functions 
      bool hasCheckMethods() const { return this->checkMethods_ != nullptr;};
      void deleteCheckMethods() { this->checkMethods_ = nullptr;};
      inline string getCheckMethods() const { DARABONBA_PTR_GET_DEFAULT(checkMethods_, "") };
      inline BasicMetricRules& setCheckMethods(string checkMethods) { DARABONBA_PTR_SET_VALUE(checkMethods_, checkMethods) };


      // controlFloatPrecision Field Functions 
      bool hasControlFloatPrecision() const { return this->controlFloatPrecision_ != nullptr;};
      void deleteControlFloatPrecision() { this->controlFloatPrecision_ = nullptr;};
      inline int32_t getControlFloatPrecision() const { DARABONBA_PTR_GET_DEFAULT(controlFloatPrecision_, 0) };
      inline BasicMetricRules& setControlFloatPrecision(int32_t controlFloatPrecision) { DARABONBA_PTR_SET_VALUE(controlFloatPrecision_, controlFloatPrecision) };


      // dataTypeClassify Field Functions 
      bool hasDataTypeClassify() const { return this->dataTypeClassify_ != nullptr;};
      void deleteDataTypeClassify() { this->dataTypeClassify_ = nullptr;};
      inline int32_t getDataTypeClassify() const { DARABONBA_PTR_GET_DEFAULT(dataTypeClassify_, 0) };
      inline BasicMetricRules& setDataTypeClassify(int32_t dataTypeClassify) { DARABONBA_PTR_SET_VALUE(dataTypeClassify_, dataTypeClassify) };


      // dataTypeGroup Field Functions 
      bool hasDataTypeGroup() const { return this->dataTypeGroup_ != nullptr;};
      void deleteDataTypeGroup() { this->dataTypeGroup_ = nullptr;};
      inline int32_t getDataTypeGroup() const { DARABONBA_PTR_GET_DEFAULT(dataTypeGroup_, 0) };
      inline BasicMetricRules& setDataTypeGroup(int32_t dataTypeGroup) { DARABONBA_PTR_SET_VALUE(dataTypeGroup_, dataTypeGroup) };


      // dataTypeList Field Functions 
      bool hasDataTypeList() const { return this->dataTypeList_ != nullptr;};
      void deleteDataTypeList() { this->dataTypeList_ = nullptr;};
      inline const vector<string> & getDataTypeList() const { DARABONBA_PTR_GET_CONST(dataTypeList_, vector<string>) };
      inline vector<string> getDataTypeList() { DARABONBA_PTR_GET(dataTypeList_, vector<string>) };
      inline BasicMetricRules& setDataTypeList(const vector<string> & dataTypeList) { DARABONBA_PTR_SET_VALUE(dataTypeList_, dataTypeList) };
      inline BasicMetricRules& setDataTypeList(vector<string> && dataTypeList) { DARABONBA_PTR_SET_RVALUE(dataTypeList_, dataTypeList) };


      // dataTypes Field Functions 
      bool hasDataTypes() const { return this->dataTypes_ != nullptr;};
      void deleteDataTypes() { this->dataTypes_ = nullptr;};
      inline string getDataTypes() const { DARABONBA_PTR_GET_DEFAULT(dataTypes_, "") };
      inline BasicMetricRules& setDataTypes(string dataTypes) { DARABONBA_PTR_SET_VALUE(dataTypes_, dataTypes) };


      // diffTolerateType Field Functions 
      bool hasDiffTolerateType() const { return this->diffTolerateType_ != nullptr;};
      void deleteDiffTolerateType() { this->diffTolerateType_ = nullptr;};
      inline int32_t getDiffTolerateType() const { DARABONBA_PTR_GET_DEFAULT(diffTolerateType_, 0) };
      inline BasicMetricRules& setDiffTolerateType(int32_t diffTolerateType) { DARABONBA_PTR_SET_VALUE(diffTolerateType_, diffTolerateType) };


      // diffTolerateValues Field Functions 
      bool hasDiffTolerateValues() const { return this->diffTolerateValues_ != nullptr;};
      void deleteDiffTolerateValues() { this->diffTolerateValues_ = nullptr;};
      inline       const Darabonba::Json & getDiffTolerateValues() const { DARABONBA_GET(diffTolerateValues_) };
      Darabonba::Json & getDiffTolerateValues() { DARABONBA_GET(diffTolerateValues_) };
      inline BasicMetricRules& setDiffTolerateValues(const Darabonba::Json & diffTolerateValues) { DARABONBA_SET_VALUE(diffTolerateValues_, diffTolerateValues) };
      inline BasicMetricRules& setDiffTolerateValues(Darabonba::Json && diffTolerateValues) { DARABONBA_SET_RVALUE(diffTolerateValues_, diffTolerateValues) };


      // enableDecimalScale Field Functions 
      bool hasEnableDecimalScale() const { return this->enableDecimalScale_ != nullptr;};
      void deleteEnableDecimalScale() { this->enableDecimalScale_ = nullptr;};
      inline int32_t getEnableDecimalScale() const { DARABONBA_PTR_GET_DEFAULT(enableDecimalScale_, 0) };
      inline BasicMetricRules& setEnableDecimalScale(int32_t enableDecimalScale) { DARABONBA_PTR_SET_VALUE(enableDecimalScale_, enableDecimalScale) };


      // filterColumnName Field Functions 
      bool hasFilterColumnName() const { return this->filterColumnName_ != nullptr;};
      void deleteFilterColumnName() { this->filterColumnName_ = nullptr;};
      inline string getFilterColumnName() const { DARABONBA_PTR_GET_DEFAULT(filterColumnName_, "") };
      inline BasicMetricRules& setFilterColumnName(string filterColumnName) { DARABONBA_PTR_SET_VALUE(filterColumnName_, filterColumnName) };


      // filterColumns Field Functions 
      bool hasFilterColumns() const { return this->filterColumns_ != nullptr;};
      void deleteFilterColumns() { this->filterColumns_ = nullptr;};
      inline string getFilterColumns() const { DARABONBA_PTR_GET_DEFAULT(filterColumns_, "") };
      inline BasicMetricRules& setFilterColumns(string filterColumns) { DARABONBA_PTR_SET_VALUE(filterColumns_, filterColumns) };


      // floatPrecision Field Functions 
      bool hasFloatPrecision() const { return this->floatPrecision_ != nullptr;};
      void deleteFloatPrecision() { this->floatPrecision_ = nullptr;};
      inline int32_t getFloatPrecision() const { DARABONBA_PTR_GET_DEFAULT(floatPrecision_, 0) };
      inline BasicMetricRules& setFloatPrecision(int32_t floatPrecision) { DARABONBA_PTR_SET_VALUE(floatPrecision_, floatPrecision) };


      // ignoreDecimalDiff Field Functions 
      bool hasIgnoreDecimalDiff() const { return this->ignoreDecimalDiff_ != nullptr;};
      void deleteIgnoreDecimalDiff() { this->ignoreDecimalDiff_ = nullptr;};
      inline int32_t getIgnoreDecimalDiff() const { DARABONBA_PTR_GET_DEFAULT(ignoreDecimalDiff_, 0) };
      inline BasicMetricRules& setIgnoreDecimalDiff(int32_t ignoreDecimalDiff) { DARABONBA_PTR_SET_VALUE(ignoreDecimalDiff_, ignoreDecimalDiff) };


      // ignoreDecimalScaleSuffixZero Field Functions 
      bool hasIgnoreDecimalScaleSuffixZero() const { return this->ignoreDecimalScaleSuffixZero_ != nullptr;};
      void deleteIgnoreDecimalScaleSuffixZero() { this->ignoreDecimalScaleSuffixZero_ = nullptr;};
      inline int32_t getIgnoreDecimalScaleSuffixZero() const { DARABONBA_PTR_GET_DEFAULT(ignoreDecimalScaleSuffixZero_, 0) };
      inline BasicMetricRules& setIgnoreDecimalScaleSuffixZero(int32_t ignoreDecimalScaleSuffixZero) { DARABONBA_PTR_SET_VALUE(ignoreDecimalScaleSuffixZero_, ignoreDecimalScaleSuffixZero) };


      // ignoreEmptyDiff Field Functions 
      bool hasIgnoreEmptyDiff() const { return this->ignoreEmptyDiff_ != nullptr;};
      void deleteIgnoreEmptyDiff() { this->ignoreEmptyDiff_ = nullptr;};
      inline int32_t getIgnoreEmptyDiff() const { DARABONBA_PTR_GET_DEFAULT(ignoreEmptyDiff_, 0) };
      inline BasicMetricRules& setIgnoreEmptyDiff(int32_t ignoreEmptyDiff) { DARABONBA_PTR_SET_VALUE(ignoreEmptyDiff_, ignoreEmptyDiff) };


      // ignoreNumericZero Field Functions 
      bool hasIgnoreNumericZero() const { return this->ignoreNumericZero_ != nullptr;};
      void deleteIgnoreNumericZero() { this->ignoreNumericZero_ = nullptr;};
      inline int32_t getIgnoreNumericZero() const { DARABONBA_PTR_GET_DEFAULT(ignoreNumericZero_, 0) };
      inline BasicMetricRules& setIgnoreNumericZero(int32_t ignoreNumericZero) { DARABONBA_PTR_SET_VALUE(ignoreNumericZero_, ignoreNumericZero) };


      // ignoreStringEmpty Field Functions 
      bool hasIgnoreStringEmpty() const { return this->ignoreStringEmpty_ != nullptr;};
      void deleteIgnoreStringEmpty() { this->ignoreStringEmpty_ = nullptr;};
      inline int32_t getIgnoreStringEmpty() const { DARABONBA_PTR_GET_DEFAULT(ignoreStringEmpty_, 0) };
      inline BasicMetricRules& setIgnoreStringEmpty(int32_t ignoreStringEmpty) { DARABONBA_PTR_SET_VALUE(ignoreStringEmpty_, ignoreStringEmpty) };


      // ignoreZeroDiff Field Functions 
      bool hasIgnoreZeroDiff() const { return this->ignoreZeroDiff_ != nullptr;};
      void deleteIgnoreZeroDiff() { this->ignoreZeroDiff_ = nullptr;};
      inline int32_t getIgnoreZeroDiff() const { DARABONBA_PTR_GET_DEFAULT(ignoreZeroDiff_, 0) };
      inline BasicMetricRules& setIgnoreZeroDiff(int32_t ignoreZeroDiff) { DARABONBA_PTR_SET_VALUE(ignoreZeroDiff_, ignoreZeroDiff) };


      // isCountCheck Field Functions 
      bool hasIsCountCheck() const { return this->isCountCheck_ != nullptr;};
      void deleteIsCountCheck() { this->isCountCheck_ = nullptr;};
      inline int32_t getIsCountCheck() const { DARABONBA_PTR_GET_DEFAULT(isCountCheck_, 0) };
      inline BasicMetricRules& setIsCountCheck(int32_t isCountCheck) { DARABONBA_PTR_SET_VALUE(isCountCheck_, isCountCheck) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline BasicMetricRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // setDecimalScale Field Functions 
      bool hasSetDecimalScale() const { return this->setDecimalScale_ != nullptr;};
      void deleteSetDecimalScale() { this->setDecimalScale_ = nullptr;};
      inline int32_t getSetDecimalScale() const { DARABONBA_PTR_GET_DEFAULT(setDecimalScale_, 0) };
      inline BasicMetricRules& setSetDecimalScale(int32_t setDecimalScale) { DARABONBA_PTR_SET_VALUE(setDecimalScale_, setDecimalScale) };


    protected:
      shared_ptr<string> checkMethods_ {};
      shared_ptr<int32_t> controlFloatPrecision_ {};
      shared_ptr<int32_t> dataTypeClassify_ {};
      shared_ptr<int32_t> dataTypeGroup_ {};
      shared_ptr<vector<string>> dataTypeList_ {};
      shared_ptr<string> dataTypes_ {};
      shared_ptr<int32_t> diffTolerateType_ {};
      Darabonba::Json diffTolerateValues_ {};
      shared_ptr<int32_t> enableDecimalScale_ {};
      shared_ptr<string> filterColumnName_ {};
      shared_ptr<string> filterColumns_ {};
      shared_ptr<int32_t> floatPrecision_ {};
      shared_ptr<int32_t> ignoreDecimalDiff_ {};
      shared_ptr<int32_t> ignoreDecimalScaleSuffixZero_ {};
      shared_ptr<int32_t> ignoreEmptyDiff_ {};
      shared_ptr<int32_t> ignoreNumericZero_ {};
      shared_ptr<int32_t> ignoreStringEmpty_ {};
      shared_ptr<int32_t> ignoreZeroDiff_ {};
      shared_ptr<int32_t> isCountCheck_ {};
      shared_ptr<string> ruleId_ {};
      shared_ptr<int32_t> setDecimalScale_ {};
    };

    virtual bool empty() const override { return this->basicMetricRules_ == nullptr
        && this->checkType_ == nullptr && this->complexMetricRules_ == nullptr && this->dsEngineRels_ == nullptr && this->fulltextRule_ == nullptr && this->metricRules_ == nullptr
        && this->nullRules_ == nullptr && this->requestId_ == nullptr && this->templateDesc_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr
        && this->weakContentRule_ == nullptr; };
    // basicMetricRules Field Functions 
    bool hasBasicMetricRules() const { return this->basicMetricRules_ != nullptr;};
    void deleteBasicMetricRules() { this->basicMetricRules_ = nullptr;};
    inline const vector<UpdateDataCheckTemplateRequest::BasicMetricRules> & getBasicMetricRules() const { DARABONBA_PTR_GET_CONST(basicMetricRules_, vector<UpdateDataCheckTemplateRequest::BasicMetricRules>) };
    inline vector<UpdateDataCheckTemplateRequest::BasicMetricRules> getBasicMetricRules() { DARABONBA_PTR_GET(basicMetricRules_, vector<UpdateDataCheckTemplateRequest::BasicMetricRules>) };
    inline UpdateDataCheckTemplateRequest& setBasicMetricRules(const vector<UpdateDataCheckTemplateRequest::BasicMetricRules> & basicMetricRules) { DARABONBA_PTR_SET_VALUE(basicMetricRules_, basicMetricRules) };
    inline UpdateDataCheckTemplateRequest& setBasicMetricRules(vector<UpdateDataCheckTemplateRequest::BasicMetricRules> && basicMetricRules) { DARABONBA_PTR_SET_RVALUE(basicMetricRules_, basicMetricRules) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline UpdateDataCheckTemplateRequest& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // complexMetricRules Field Functions 
    bool hasComplexMetricRules() const { return this->complexMetricRules_ != nullptr;};
    void deleteComplexMetricRules() { this->complexMetricRules_ = nullptr;};
    inline const vector<UpdateDataCheckTemplateRequest::ComplexMetricRules> & getComplexMetricRules() const { DARABONBA_PTR_GET_CONST(complexMetricRules_, vector<UpdateDataCheckTemplateRequest::ComplexMetricRules>) };
    inline vector<UpdateDataCheckTemplateRequest::ComplexMetricRules> getComplexMetricRules() { DARABONBA_PTR_GET(complexMetricRules_, vector<UpdateDataCheckTemplateRequest::ComplexMetricRules>) };
    inline UpdateDataCheckTemplateRequest& setComplexMetricRules(const vector<UpdateDataCheckTemplateRequest::ComplexMetricRules> & complexMetricRules) { DARABONBA_PTR_SET_VALUE(complexMetricRules_, complexMetricRules) };
    inline UpdateDataCheckTemplateRequest& setComplexMetricRules(vector<UpdateDataCheckTemplateRequest::ComplexMetricRules> && complexMetricRules) { DARABONBA_PTR_SET_RVALUE(complexMetricRules_, complexMetricRules) };


    // dsEngineRels Field Functions 
    bool hasDsEngineRels() const { return this->dsEngineRels_ != nullptr;};
    void deleteDsEngineRels() { this->dsEngineRels_ = nullptr;};
    inline const vector<UpdateDataCheckTemplateRequest::DsEngineRels> & getDsEngineRels() const { DARABONBA_PTR_GET_CONST(dsEngineRels_, vector<UpdateDataCheckTemplateRequest::DsEngineRels>) };
    inline vector<UpdateDataCheckTemplateRequest::DsEngineRels> getDsEngineRels() { DARABONBA_PTR_GET(dsEngineRels_, vector<UpdateDataCheckTemplateRequest::DsEngineRels>) };
    inline UpdateDataCheckTemplateRequest& setDsEngineRels(const vector<UpdateDataCheckTemplateRequest::DsEngineRels> & dsEngineRels) { DARABONBA_PTR_SET_VALUE(dsEngineRels_, dsEngineRels) };
    inline UpdateDataCheckTemplateRequest& setDsEngineRels(vector<UpdateDataCheckTemplateRequest::DsEngineRels> && dsEngineRels) { DARABONBA_PTR_SET_RVALUE(dsEngineRels_, dsEngineRels) };


    // fulltextRule Field Functions 
    bool hasFulltextRule() const { return this->fulltextRule_ != nullptr;};
    void deleteFulltextRule() { this->fulltextRule_ = nullptr;};
    inline const UpdateDataCheckTemplateRequest::FulltextRule & getFulltextRule() const { DARABONBA_PTR_GET_CONST(fulltextRule_, UpdateDataCheckTemplateRequest::FulltextRule) };
    inline UpdateDataCheckTemplateRequest::FulltextRule getFulltextRule() { DARABONBA_PTR_GET(fulltextRule_, UpdateDataCheckTemplateRequest::FulltextRule) };
    inline UpdateDataCheckTemplateRequest& setFulltextRule(const UpdateDataCheckTemplateRequest::FulltextRule & fulltextRule) { DARABONBA_PTR_SET_VALUE(fulltextRule_, fulltextRule) };
    inline UpdateDataCheckTemplateRequest& setFulltextRule(UpdateDataCheckTemplateRequest::FulltextRule && fulltextRule) { DARABONBA_PTR_SET_RVALUE(fulltextRule_, fulltextRule) };


    // metricRules Field Functions 
    bool hasMetricRules() const { return this->metricRules_ != nullptr;};
    void deleteMetricRules() { this->metricRules_ = nullptr;};
    inline const vector<UpdateDataCheckTemplateRequest::MetricRules> & getMetricRules() const { DARABONBA_PTR_GET_CONST(metricRules_, vector<UpdateDataCheckTemplateRequest::MetricRules>) };
    inline vector<UpdateDataCheckTemplateRequest::MetricRules> getMetricRules() { DARABONBA_PTR_GET(metricRules_, vector<UpdateDataCheckTemplateRequest::MetricRules>) };
    inline UpdateDataCheckTemplateRequest& setMetricRules(const vector<UpdateDataCheckTemplateRequest::MetricRules> & metricRules) { DARABONBA_PTR_SET_VALUE(metricRules_, metricRules) };
    inline UpdateDataCheckTemplateRequest& setMetricRules(vector<UpdateDataCheckTemplateRequest::MetricRules> && metricRules) { DARABONBA_PTR_SET_RVALUE(metricRules_, metricRules) };


    // nullRules Field Functions 
    bool hasNullRules() const { return this->nullRules_ != nullptr;};
    void deleteNullRules() { this->nullRules_ = nullptr;};
    inline const vector<UpdateDataCheckTemplateRequest::NullRules> & getNullRules() const { DARABONBA_PTR_GET_CONST(nullRules_, vector<UpdateDataCheckTemplateRequest::NullRules>) };
    inline vector<UpdateDataCheckTemplateRequest::NullRules> getNullRules() { DARABONBA_PTR_GET(nullRules_, vector<UpdateDataCheckTemplateRequest::NullRules>) };
    inline UpdateDataCheckTemplateRequest& setNullRules(const vector<UpdateDataCheckTemplateRequest::NullRules> & nullRules) { DARABONBA_PTR_SET_VALUE(nullRules_, nullRules) };
    inline UpdateDataCheckTemplateRequest& setNullRules(vector<UpdateDataCheckTemplateRequest::NullRules> && nullRules) { DARABONBA_PTR_SET_RVALUE(nullRules_, nullRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateDataCheckTemplateRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateDesc Field Functions 
    bool hasTemplateDesc() const { return this->templateDesc_ != nullptr;};
    void deleteTemplateDesc() { this->templateDesc_ = nullptr;};
    inline string getTemplateDesc() const { DARABONBA_PTR_GET_DEFAULT(templateDesc_, "") };
    inline UpdateDataCheckTemplateRequest& setTemplateDesc(string templateDesc) { DARABONBA_PTR_SET_VALUE(templateDesc_, templateDesc) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateDataCheckTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateDataCheckTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // weakContentRule Field Functions 
    bool hasWeakContentRule() const { return this->weakContentRule_ != nullptr;};
    void deleteWeakContentRule() { this->weakContentRule_ = nullptr;};
    inline const UpdateDataCheckTemplateRequest::WeakContentRule & getWeakContentRule() const { DARABONBA_PTR_GET_CONST(weakContentRule_, UpdateDataCheckTemplateRequest::WeakContentRule) };
    inline UpdateDataCheckTemplateRequest::WeakContentRule getWeakContentRule() { DARABONBA_PTR_GET(weakContentRule_, UpdateDataCheckTemplateRequest::WeakContentRule) };
    inline UpdateDataCheckTemplateRequest& setWeakContentRule(const UpdateDataCheckTemplateRequest::WeakContentRule & weakContentRule) { DARABONBA_PTR_SET_VALUE(weakContentRule_, weakContentRule) };
    inline UpdateDataCheckTemplateRequest& setWeakContentRule(UpdateDataCheckTemplateRequest::WeakContentRule && weakContentRule) { DARABONBA_PTR_SET_RVALUE(weakContentRule_, weakContentRule) };


  protected:
    shared_ptr<vector<UpdateDataCheckTemplateRequest::BasicMetricRules>> basicMetricRules_ {};
    shared_ptr<int32_t> checkType_ {};
    shared_ptr<vector<UpdateDataCheckTemplateRequest::ComplexMetricRules>> complexMetricRules_ {};
    shared_ptr<vector<UpdateDataCheckTemplateRequest::DsEngineRels>> dsEngineRels_ {};
    shared_ptr<UpdateDataCheckTemplateRequest::FulltextRule> fulltextRule_ {};
    shared_ptr<vector<UpdateDataCheckTemplateRequest::MetricRules>> metricRules_ {};
    shared_ptr<vector<UpdateDataCheckTemplateRequest::NullRules>> nullRules_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> templateDesc_ {};
    shared_ptr<string> templateId_ {};
    shared_ptr<string> templateName_ {};
    shared_ptr<UpdateDataCheckTemplateRequest::WeakContentRule> weakContentRule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
