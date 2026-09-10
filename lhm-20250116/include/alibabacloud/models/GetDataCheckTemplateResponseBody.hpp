// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACHECKTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACHECKTEMPLATERESPONSEBODY_HPP_
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
  class GetDataCheckTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCheckTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCheckTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetDataCheckTemplateResponseBody() = default ;
    GetDataCheckTemplateResponseBody(const GetDataCheckTemplateResponseBody &) = default ;
    GetDataCheckTemplateResponseBody(GetDataCheckTemplateResponseBody &&) = default ;
    GetDataCheckTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCheckTemplateResponseBody() = default ;
    GetDataCheckTemplateResponseBody& operator=(const GetDataCheckTemplateResponseBody &) = default ;
    GetDataCheckTemplateResponseBody& operator=(GetDataCheckTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(basicMetricRules, basicMetricRules_);
        DARABONBA_PTR_TO_JSON(checkType, checkType_);
        DARABONBA_PTR_TO_JSON(checkTypeExport, checkTypeExport_);
        DARABONBA_PTR_TO_JSON(checkTypeName, checkTypeName_);
        DARABONBA_PTR_TO_JSON(complexMetricRules, complexMetricRules_);
        DARABONBA_PTR_TO_JSON(dsEngineRels, dsEngineRels_);
        DARABONBA_PTR_TO_JSON(fulltextRule, fulltextRule_);
        DARABONBA_PTR_TO_JSON(metricRules, metricRules_);
        DARABONBA_PTR_TO_JSON(nullRules, nullRules_);
        DARABONBA_PTR_TO_JSON(templateDesc, templateDesc_);
        DARABONBA_PTR_TO_JSON(templateId, templateId_);
        DARABONBA_PTR_TO_JSON(templateName, templateName_);
        DARABONBA_PTR_TO_JSON(weakContentRule, weakContentRule_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(basicMetricRules, basicMetricRules_);
        DARABONBA_PTR_FROM_JSON(checkType, checkType_);
        DARABONBA_PTR_FROM_JSON(checkTypeExport, checkTypeExport_);
        DARABONBA_PTR_FROM_JSON(checkTypeName, checkTypeName_);
        DARABONBA_PTR_FROM_JSON(complexMetricRules, complexMetricRules_);
        DARABONBA_PTR_FROM_JSON(dsEngineRels, dsEngineRels_);
        DARABONBA_PTR_FROM_JSON(fulltextRule, fulltextRule_);
        DARABONBA_PTR_FROM_JSON(metricRules, metricRules_);
        DARABONBA_PTR_FROM_JSON(nullRules, nullRules_);
        DARABONBA_PTR_FROM_JSON(templateDesc, templateDesc_);
        DARABONBA_PTR_FROM_JSON(templateId, templateId_);
        DARABONBA_PTR_FROM_JSON(templateName, templateName_);
        DARABONBA_PTR_FROM_JSON(weakContentRule, weakContentRule_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
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
        // The filter column name expression.
        shared_ptr<string> filterColumnExpression_ {};
        // The filter column types, separated by vertical bars (|).
        shared_ptr<vector<string>> filterColumnTypes_ {};
        // The rule ID that uniquely identifies a check rule.
        shared_ptr<string> ruleId_ {};
        // The weak content algorithm name. Valid values: md5 and crc32.
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
        // The data type group that identifies the data type category to which the check rule applies. The value is an integer from 0 to 7. For the meaning of each value, refer to the valid values.
        shared_ptr<int32_t> dataTypeGroup_ {};
        // The null values, stored in JSON format.
        shared_ptr<string> nullValues_ {};
        // The rule ID that uniquely identifies a check rule.
        shared_ptr<string> ruleId_ {};
      };

      class MetricRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetricRules& obj) { 
          DARABONBA_PTR_TO_JSON(checkMethods, checkMethods_);
          DARABONBA_PTR_TO_JSON(dataTypeClassify, dataTypeClassify_);
          DARABONBA_PTR_TO_JSON(dataTypeGroup, dataTypeGroup_);
          DARABONBA_PTR_TO_JSON(dataTypeList, dataTypeList_);
          DARABONBA_PTR_TO_JSON(dataTypes, dataTypes_);
          DARABONBA_PTR_TO_JSON(diffTolerateType, diffTolerateType_);
          DARABONBA_ANY_TO_JSON(diffTolerateValues, diffTolerateValues_);
          DARABONBA_PTR_TO_JSON(enableDecimalScale, enableDecimalScale_);
          DARABONBA_PTR_TO_JSON(filterColumnName, filterColumnName_);
          DARABONBA_PTR_TO_JSON(ignoreDecimalScaleSuffixZero, ignoreDecimalScaleSuffixZero_);
          DARABONBA_PTR_TO_JSON(ignoreNumericZero, ignoreNumericZero_);
          DARABONBA_PTR_TO_JSON(ignoreStringEmpty, ignoreStringEmpty_);
          DARABONBA_PTR_TO_JSON(isCountCheck, isCountCheck_);
          DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
          DARABONBA_PTR_TO_JSON(setDecimalScale, setDecimalScale_);
        };
        friend void from_json(const Darabonba::Json& j, MetricRules& obj) { 
          DARABONBA_PTR_FROM_JSON(checkMethods, checkMethods_);
          DARABONBA_PTR_FROM_JSON(dataTypeClassify, dataTypeClassify_);
          DARABONBA_PTR_FROM_JSON(dataTypeGroup, dataTypeGroup_);
          DARABONBA_PTR_FROM_JSON(dataTypeList, dataTypeList_);
          DARABONBA_PTR_FROM_JSON(dataTypes, dataTypes_);
          DARABONBA_PTR_FROM_JSON(diffTolerateType, diffTolerateType_);
          DARABONBA_ANY_FROM_JSON(diffTolerateValues, diffTolerateValues_);
          DARABONBA_PTR_FROM_JSON(enableDecimalScale, enableDecimalScale_);
          DARABONBA_PTR_FROM_JSON(filterColumnName, filterColumnName_);
          DARABONBA_PTR_FROM_JSON(ignoreDecimalScaleSuffixZero, ignoreDecimalScaleSuffixZero_);
          DARABONBA_PTR_FROM_JSON(ignoreNumericZero, ignoreNumericZero_);
          DARABONBA_PTR_FROM_JSON(ignoreStringEmpty, ignoreStringEmpty_);
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
        && this->dataTypeClassify_ == nullptr && this->dataTypeGroup_ == nullptr && this->dataTypeList_ == nullptr && this->dataTypes_ == nullptr && this->diffTolerateType_ == nullptr
        && this->diffTolerateValues_ == nullptr && this->enableDecimalScale_ == nullptr && this->filterColumnName_ == nullptr && this->ignoreDecimalScaleSuffixZero_ == nullptr && this->ignoreNumericZero_ == nullptr
        && this->ignoreStringEmpty_ == nullptr && this->isCountCheck_ == nullptr && this->ruleId_ == nullptr && this->setDecimalScale_ == nullptr; };
        // checkMethods Field Functions 
        bool hasCheckMethods() const { return this->checkMethods_ != nullptr;};
        void deleteCheckMethods() { this->checkMethods_ = nullptr;};
        inline string getCheckMethods() const { DARABONBA_PTR_GET_DEFAULT(checkMethods_, "") };
        inline MetricRules& setCheckMethods(string checkMethods) { DARABONBA_PTR_SET_VALUE(checkMethods_, checkMethods) };


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
        inline         const Darabonba::Json & getDiffTolerateValues() const { DARABONBA_GET(diffTolerateValues_) };
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


        // ignoreDecimalScaleSuffixZero Field Functions 
        bool hasIgnoreDecimalScaleSuffixZero() const { return this->ignoreDecimalScaleSuffixZero_ != nullptr;};
        void deleteIgnoreDecimalScaleSuffixZero() { this->ignoreDecimalScaleSuffixZero_ = nullptr;};
        inline int32_t getIgnoreDecimalScaleSuffixZero() const { DARABONBA_PTR_GET_DEFAULT(ignoreDecimalScaleSuffixZero_, 0) };
        inline MetricRules& setIgnoreDecimalScaleSuffixZero(int32_t ignoreDecimalScaleSuffixZero) { DARABONBA_PTR_SET_VALUE(ignoreDecimalScaleSuffixZero_, ignoreDecimalScaleSuffixZero) };


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
        // The check methods (metric calculation methods). Multiple values are separated by commas (,), such as SUM,AVG,MIN,MAX. The values must be within the range allowed by the templatetype.
        shared_ptr<string> checkMethods_ {};
        // The data type category. Valid values: 0: primitive data type. 1: composite data type.
        shared_ptr<int32_t> dataTypeClassify_ {};
        // The data type group that identifies the data type category to which the check rule applies. The value is an integer from 0 to 7. For the meaning of each value, refer to the valid values.
        shared_ptr<int32_t> dataTypeGroup_ {};
        // The list of data types to which the check rule applies. Configure this field as needed.
        shared_ptr<vector<string>> dataTypeList_ {};
        // The data types. Configure this field as needed.
        shared_ptr<string> dataTypes_ {};
        // The difference tolerance rate type. Valid values: 0: unified. 1: custom. Default value: 0.
        shared_ptr<int32_t> diffTolerateType_ {};
        // The difference tolerance rate values. When the type is unified, one value is used. When the type is custom, values are set by the configured tolerance type, such as sum:33,avg:99.
        Darabonba::Json diffTolerateValues_ {};
        // Specifies whether to enable decimal scale control for DECIMAL type comparison. Valid values: 0: no. 1: yes.
        shared_ptr<int32_t> enableDecimalScale_ {};
        // The filter column names, separated by commas.
        shared_ptr<string> filterColumnName_ {};
        // Specifies whether to ignore trailing zeros in decimal places for DECIMAL type comparison. Valid values: 0: no. 1: yes.
        shared_ptr<int32_t> ignoreDecimalScaleSuffixZero_ {};
        // Specifies whether to ignore zero values for numeric types. Valid values: 0: no. 1: yes.
        shared_ptr<int32_t> ignoreNumericZero_ {};
        // Specifies whether to ignore empty strings and null for string types. Valid values: 0: no. 1: yes.
        shared_ptr<int32_t> ignoreStringEmpty_ {};
        // Specifies whether to enable count (data volume) check. Valid values: 0: no. 1: yes. Default value: 1.
        shared_ptr<int32_t> isCountCheck_ {};
        // The rule ID that uniquely identifies a check rule.
        shared_ptr<string> ruleId_ {};
        // The specific number of decimal places for DECIMAL type comparison.
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
        // The check mode. Valid values: 0: row-level overall comparison. 1: row-level column-by-column comparison. 2: both row-level overall comparison and row-level column-by-column comparison.
        shared_ptr<int32_t> checkMode_ {};
        // The equality comparison type for row-level column-by-column comparison. Valid values: 0: all field types. 1: primitive basic data types. 2: composite data types. 3: custom.
        shared_ptr<int32_t> columnEqualCmpType_ {};
        // The custom type list for equality comparison during row-level column-by-column comparison. Multiple values are separated by commas.
        shared_ptr<string> columnEqualCmpValues_ {};
        // Specifies whether to enable cosine similarity for row-level column-by-column comparison. Valid values: 0: no. 1: yes.
        shared_ptr<int32_t> columnIsCosine_ {};
        // Specifies whether to ignore differences between null values and empty strings during row-by-row and column-by-column comparison. Valid values: 0: No. 1: Yes.
        shared_ptr<int32_t> columnIsIgnoreNull_ {};
        // Specifies whether to ignore differences between null values and 0 values during row-by-row and column-by-column comparison. Valid values: 0: No. 1: Yes.
        shared_ptr<int32_t> columnIsIgnoreZero_ {};
        // Specifies whether to enable sampling during row-by-row and column-by-column comparison. Valid values: 0: No. 1: Yes.
        shared_ptr<int32_t> columnIsSamples_ {};
        // The sampling method during row-by-row and column-by-column comparison. Valid values: 0: by row. 1: by percentage.
        shared_ptr<int32_t> columnSamplesType_ {};
        // The sampling value during row-by-row and column-by-column comparison. The meaning depends on the sampling method. When sampling by row, this value represents the number of rows. When sampling by percentage, this value represents the percentage.
        shared_ptr<int32_t> columnSamplesValue_ {};
        // The size comparison type during row-by-row and column-by-column comparison. Valid values: 0: all composite data types. 1: custom.
        shared_ptr<int32_t> columnSizeCmpType_ {};
        // The custom type list for size comparison during row-by-row and column-by-column comparison. Multiple values are separated by commas (,).
        shared_ptr<string> columnSizeCmpValues_ {};
        // Specifies whether to enable the existence check for primary keys or composite primary keys. Valid values: 0: No. 1: Yes.
        shared_ptr<int32_t> isPrimaryKeyCheck_ {};
        // The row-by-row comparison method. Valid values: 0: md5. 1: crc32.
        shared_ptr<int32_t> lineCheckType_ {};
        // Specifies whether to print all columns in the difference details during row-by-row comparison. Valid values: 0: No. 1: Yes.
        shared_ptr<int32_t> lineIsPrintAll_ {};
        // Specifies whether to enable sampling during row-by-row comparison. Valid values: 0: No. 1: Yes.
        shared_ptr<int32_t> lineIsSamples_ {};
        // The sampling method during row-by-row comparison. Valid values: 0: by row. 1: by percentage.
        shared_ptr<int32_t> lineSamplesType_ {};
        // The sampling value during row-by-row comparison. The meaning depends on the sampling method. When sampling by row, this value represents the number of rows. When sampling by percentage, this value represents the percentage.
        shared_ptr<int32_t> lineSamplesValue_ {};
        // The rule ID that uniquely identifies a check rule.
        shared_ptr<string> ruleId_ {};
      };

      class DsEngineRels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DsEngineRels& obj) { 
          DARABONBA_PTR_TO_JSON(dsType, dsType_);
          DARABONBA_PTR_TO_JSON(engineTypes, engineTypes_);
        };
        friend void from_json(const Darabonba::Json& j, DsEngineRels& obj) { 
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
        virtual bool empty() const override { return this->dsType_ == nullptr
        && this->engineTypes_ == nullptr; };
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
        // The data source type, such as Hive or MaxCompute.
        shared_ptr<string> dsType_ {};
        // The list of covered check engine types, such as Tez or MapReduce. When in string format, multiple values are separated by commas.
        shared_ptr<vector<string>> engineTypes_ {};
      };

      class ComplexMetricRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComplexMetricRules& obj) { 
          DARABONBA_PTR_TO_JSON(checkMethods, checkMethods_);
          DARABONBA_PTR_TO_JSON(dataTypeClassify, dataTypeClassify_);
          DARABONBA_PTR_TO_JSON(dataTypeGroup, dataTypeGroup_);
          DARABONBA_PTR_TO_JSON(dataTypeList, dataTypeList_);
          DARABONBA_PTR_TO_JSON(dataTypes, dataTypes_);
          DARABONBA_PTR_TO_JSON(diffTolerateType, diffTolerateType_);
          DARABONBA_ANY_TO_JSON(diffTolerateValues, diffTolerateValues_);
          DARABONBA_PTR_TO_JSON(enableDecimalScale, enableDecimalScale_);
          DARABONBA_PTR_TO_JSON(filterColumnName, filterColumnName_);
          DARABONBA_PTR_TO_JSON(ignoreDecimalScaleSuffixZero, ignoreDecimalScaleSuffixZero_);
          DARABONBA_PTR_TO_JSON(ignoreNumericZero, ignoreNumericZero_);
          DARABONBA_PTR_TO_JSON(ignoreStringEmpty, ignoreStringEmpty_);
          DARABONBA_PTR_TO_JSON(isCountCheck, isCountCheck_);
          DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
          DARABONBA_PTR_TO_JSON(setDecimalScale, setDecimalScale_);
        };
        friend void from_json(const Darabonba::Json& j, ComplexMetricRules& obj) { 
          DARABONBA_PTR_FROM_JSON(checkMethods, checkMethods_);
          DARABONBA_PTR_FROM_JSON(dataTypeClassify, dataTypeClassify_);
          DARABONBA_PTR_FROM_JSON(dataTypeGroup, dataTypeGroup_);
          DARABONBA_PTR_FROM_JSON(dataTypeList, dataTypeList_);
          DARABONBA_PTR_FROM_JSON(dataTypes, dataTypes_);
          DARABONBA_PTR_FROM_JSON(diffTolerateType, diffTolerateType_);
          DARABONBA_ANY_FROM_JSON(diffTolerateValues, diffTolerateValues_);
          DARABONBA_PTR_FROM_JSON(enableDecimalScale, enableDecimalScale_);
          DARABONBA_PTR_FROM_JSON(filterColumnName, filterColumnName_);
          DARABONBA_PTR_FROM_JSON(ignoreDecimalScaleSuffixZero, ignoreDecimalScaleSuffixZero_);
          DARABONBA_PTR_FROM_JSON(ignoreNumericZero, ignoreNumericZero_);
          DARABONBA_PTR_FROM_JSON(ignoreStringEmpty, ignoreStringEmpty_);
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
        && this->dataTypeClassify_ == nullptr && this->dataTypeGroup_ == nullptr && this->dataTypeList_ == nullptr && this->dataTypes_ == nullptr && this->diffTolerateType_ == nullptr
        && this->diffTolerateValues_ == nullptr && this->enableDecimalScale_ == nullptr && this->filterColumnName_ == nullptr && this->ignoreDecimalScaleSuffixZero_ == nullptr && this->ignoreNumericZero_ == nullptr
        && this->ignoreStringEmpty_ == nullptr && this->isCountCheck_ == nullptr && this->ruleId_ == nullptr && this->setDecimalScale_ == nullptr; };
        // checkMethods Field Functions 
        bool hasCheckMethods() const { return this->checkMethods_ != nullptr;};
        void deleteCheckMethods() { this->checkMethods_ = nullptr;};
        inline string getCheckMethods() const { DARABONBA_PTR_GET_DEFAULT(checkMethods_, "") };
        inline ComplexMetricRules& setCheckMethods(string checkMethods) { DARABONBA_PTR_SET_VALUE(checkMethods_, checkMethods) };


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
        inline         const Darabonba::Json & getDiffTolerateValues() const { DARABONBA_GET(diffTolerateValues_) };
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


        // ignoreDecimalScaleSuffixZero Field Functions 
        bool hasIgnoreDecimalScaleSuffixZero() const { return this->ignoreDecimalScaleSuffixZero_ != nullptr;};
        void deleteIgnoreDecimalScaleSuffixZero() { this->ignoreDecimalScaleSuffixZero_ = nullptr;};
        inline int32_t getIgnoreDecimalScaleSuffixZero() const { DARABONBA_PTR_GET_DEFAULT(ignoreDecimalScaleSuffixZero_, 0) };
        inline ComplexMetricRules& setIgnoreDecimalScaleSuffixZero(int32_t ignoreDecimalScaleSuffixZero) { DARABONBA_PTR_SET_VALUE(ignoreDecimalScaleSuffixZero_, ignoreDecimalScaleSuffixZero) };


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
        // The check methods (metric calculation methods). Multiple values are separated by commas, such as SUM,AVG,MIN,MAX. The values must be within the range allowed by the templatetype.
        shared_ptr<string> checkMethods_ {};
        // The data type category. Valid values: 0: primitive data type. 1: composite data type.
        shared_ptr<int32_t> dataTypeClassify_ {};
        // The data type group that identifies the data type category to which the check rule applies. The value is an integer from 0 to 7. For the meaning of each value, refer to the valid values.
        shared_ptr<int32_t> dataTypeGroup_ {};
        // The list of data types to which the check rule applies. Configure this field as needed.
        shared_ptr<vector<string>> dataTypeList_ {};
        // The data types. Configure this field as needed.
        shared_ptr<string> dataTypes_ {};
        // The difference tolerance rate type. Valid values: 0: unified. 1: custom. Default value: 0.
        shared_ptr<int32_t> diffTolerateType_ {};
        // The difference tolerance rate values. When the type is unified, one value is used. When the type is custom, values are set by the configured tolerance type, such as sum:33,avg:99.
        Darabonba::Json diffTolerateValues_ {};
        // Specifies whether to enable decimal scale control for DECIMAL type comparison. Valid values: 0: no. 1: yes.
        shared_ptr<int32_t> enableDecimalScale_ {};
        // The filter column names, separated by commas.
        shared_ptr<string> filterColumnName_ {};
        // Specifies whether to ignore trailing zeros in decimal places for DECIMAL type comparison. Valid values: 0: no. 1: yes.
        shared_ptr<int32_t> ignoreDecimalScaleSuffixZero_ {};
        // Specifies whether to ignore zero values for numeric types. Valid values: 0: no. 1: yes.
        shared_ptr<int32_t> ignoreNumericZero_ {};
        // Specifies whether to ignore empty strings and null for string types. Valid values: 0: no. 1: yes.
        shared_ptr<int32_t> ignoreStringEmpty_ {};
        // Specifies whether to enable count (data volume) check. Valid values: 0: no. 1: yes. Default value: 1.
        shared_ptr<int32_t> isCountCheck_ {};
        // The rule ID that uniquely identifies a check rule.
        shared_ptr<string> ruleId_ {};
        // The specific number of decimal places for DECIMAL type comparison.
        shared_ptr<int32_t> setDecimalScale_ {};
      };

      class BasicMetricRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BasicMetricRules& obj) { 
          DARABONBA_PTR_TO_JSON(checkMethods, checkMethods_);
          DARABONBA_PTR_TO_JSON(dataTypeClassify, dataTypeClassify_);
          DARABONBA_PTR_TO_JSON(dataTypeGroup, dataTypeGroup_);
          DARABONBA_PTR_TO_JSON(dataTypeList, dataTypeList_);
          DARABONBA_PTR_TO_JSON(dataTypes, dataTypes_);
          DARABONBA_PTR_TO_JSON(diffTolerateType, diffTolerateType_);
          DARABONBA_ANY_TO_JSON(diffTolerateValues, diffTolerateValues_);
          DARABONBA_PTR_TO_JSON(enableDecimalScale, enableDecimalScale_);
          DARABONBA_PTR_TO_JSON(filterColumnName, filterColumnName_);
          DARABONBA_PTR_TO_JSON(ignoreDecimalScaleSuffixZero, ignoreDecimalScaleSuffixZero_);
          DARABONBA_PTR_TO_JSON(ignoreNumericZero, ignoreNumericZero_);
          DARABONBA_PTR_TO_JSON(ignoreStringEmpty, ignoreStringEmpty_);
          DARABONBA_PTR_TO_JSON(isCountCheck, isCountCheck_);
          DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
          DARABONBA_PTR_TO_JSON(setDecimalScale, setDecimalScale_);
        };
        friend void from_json(const Darabonba::Json& j, BasicMetricRules& obj) { 
          DARABONBA_PTR_FROM_JSON(checkMethods, checkMethods_);
          DARABONBA_PTR_FROM_JSON(dataTypeClassify, dataTypeClassify_);
          DARABONBA_PTR_FROM_JSON(dataTypeGroup, dataTypeGroup_);
          DARABONBA_PTR_FROM_JSON(dataTypeList, dataTypeList_);
          DARABONBA_PTR_FROM_JSON(dataTypes, dataTypes_);
          DARABONBA_PTR_FROM_JSON(diffTolerateType, diffTolerateType_);
          DARABONBA_ANY_FROM_JSON(diffTolerateValues, diffTolerateValues_);
          DARABONBA_PTR_FROM_JSON(enableDecimalScale, enableDecimalScale_);
          DARABONBA_PTR_FROM_JSON(filterColumnName, filterColumnName_);
          DARABONBA_PTR_FROM_JSON(ignoreDecimalScaleSuffixZero, ignoreDecimalScaleSuffixZero_);
          DARABONBA_PTR_FROM_JSON(ignoreNumericZero, ignoreNumericZero_);
          DARABONBA_PTR_FROM_JSON(ignoreStringEmpty, ignoreStringEmpty_);
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
        && this->dataTypeClassify_ == nullptr && this->dataTypeGroup_ == nullptr && this->dataTypeList_ == nullptr && this->dataTypes_ == nullptr && this->diffTolerateType_ == nullptr
        && this->diffTolerateValues_ == nullptr && this->enableDecimalScale_ == nullptr && this->filterColumnName_ == nullptr && this->ignoreDecimalScaleSuffixZero_ == nullptr && this->ignoreNumericZero_ == nullptr
        && this->ignoreStringEmpty_ == nullptr && this->isCountCheck_ == nullptr && this->ruleId_ == nullptr && this->setDecimalScale_ == nullptr; };
        // checkMethods Field Functions 
        bool hasCheckMethods() const { return this->checkMethods_ != nullptr;};
        void deleteCheckMethods() { this->checkMethods_ = nullptr;};
        inline string getCheckMethods() const { DARABONBA_PTR_GET_DEFAULT(checkMethods_, "") };
        inline BasicMetricRules& setCheckMethods(string checkMethods) { DARABONBA_PTR_SET_VALUE(checkMethods_, checkMethods) };


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
        inline         const Darabonba::Json & getDiffTolerateValues() const { DARABONBA_GET(diffTolerateValues_) };
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


        // ignoreDecimalScaleSuffixZero Field Functions 
        bool hasIgnoreDecimalScaleSuffixZero() const { return this->ignoreDecimalScaleSuffixZero_ != nullptr;};
        void deleteIgnoreDecimalScaleSuffixZero() { this->ignoreDecimalScaleSuffixZero_ = nullptr;};
        inline int32_t getIgnoreDecimalScaleSuffixZero() const { DARABONBA_PTR_GET_DEFAULT(ignoreDecimalScaleSuffixZero_, 0) };
        inline BasicMetricRules& setIgnoreDecimalScaleSuffixZero(int32_t ignoreDecimalScaleSuffixZero) { DARABONBA_PTR_SET_VALUE(ignoreDecimalScaleSuffixZero_, ignoreDecimalScaleSuffixZero) };


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
        // The check methods (metric calculation methods). Multiple values are separated by commas, such as SUM,AVG,MIN,MAX. The values must be within the range allowed by the templatetype.
        shared_ptr<string> checkMethods_ {};
        // The data type category. Valid values: 0: primitive data type. 1: composite data type.
        shared_ptr<int32_t> dataTypeClassify_ {};
        // The data type group that identifies the data type category to which the check rule applies. The value is an integer from 0 to 7. For the meaning of each value, refer to the valid values.
        shared_ptr<int32_t> dataTypeGroup_ {};
        // The list of data types to which the check rule applies. Configure this field as needed.
        shared_ptr<vector<string>> dataTypeList_ {};
        // The data types. Configure this field as needed.
        shared_ptr<string> dataTypes_ {};
        // The difference tolerance rate type. Valid values: 0: unified. 1: custom. Default value: 0.
        shared_ptr<int32_t> diffTolerateType_ {};
        // The difference tolerance rate values. When the type is unified, one value is used. When the type is custom, values are set by the configured tolerance type, such as sum:33,avg:99.
        Darabonba::Json diffTolerateValues_ {};
        // Specifies whether to enable decimal scale control for DECIMAL type comparison. Valid values: 0: no. 1: yes.
        shared_ptr<int32_t> enableDecimalScale_ {};
        // The filter column names, separated by commas.
        shared_ptr<string> filterColumnName_ {};
        // Specifies whether to ignore trailing zeros in decimal places for DECIMAL type comparison. Valid values: 0: no. 1: yes.
        shared_ptr<int32_t> ignoreDecimalScaleSuffixZero_ {};
        // Specifies whether to ignore zero values for numeric types. Valid values: 0: no. 1: yes.
        shared_ptr<int32_t> ignoreNumericZero_ {};
        // Specifies whether to ignore empty strings and null for string types. Valid values: 0: no. 1: yes.
        shared_ptr<int32_t> ignoreStringEmpty_ {};
        // Specifies whether to enable count (data volume) check. Valid values: 0: no. 1: yes. Default value: 1.
        shared_ptr<int32_t> isCountCheck_ {};
        // The rule ID that uniquely identifies a check rule.
        shared_ptr<string> ruleId_ {};
        // The specific number of decimal places for DECIMAL type comparison.
        shared_ptr<int32_t> setDecimalScale_ {};
      };

      virtual bool empty() const override { return this->basicMetricRules_ == nullptr
        && this->checkType_ == nullptr && this->checkTypeExport_ == nullptr && this->checkTypeName_ == nullptr && this->complexMetricRules_ == nullptr && this->dsEngineRels_ == nullptr
        && this->fulltextRule_ == nullptr && this->metricRules_ == nullptr && this->nullRules_ == nullptr && this->templateDesc_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->weakContentRule_ == nullptr; };
      // basicMetricRules Field Functions 
      bool hasBasicMetricRules() const { return this->basicMetricRules_ != nullptr;};
      void deleteBasicMetricRules() { this->basicMetricRules_ = nullptr;};
      inline const vector<Data::BasicMetricRules> & getBasicMetricRules() const { DARABONBA_PTR_GET_CONST(basicMetricRules_, vector<Data::BasicMetricRules>) };
      inline vector<Data::BasicMetricRules> getBasicMetricRules() { DARABONBA_PTR_GET(basicMetricRules_, vector<Data::BasicMetricRules>) };
      inline Data& setBasicMetricRules(const vector<Data::BasicMetricRules> & basicMetricRules) { DARABONBA_PTR_SET_VALUE(basicMetricRules_, basicMetricRules) };
      inline Data& setBasicMetricRules(vector<Data::BasicMetricRules> && basicMetricRules) { DARABONBA_PTR_SET_RVALUE(basicMetricRules_, basicMetricRules) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
      inline Data& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // checkTypeExport Field Functions 
      bool hasCheckTypeExport() const { return this->checkTypeExport_ != nullptr;};
      void deleteCheckTypeExport() { this->checkTypeExport_ = nullptr;};
      inline string getCheckTypeExport() const { DARABONBA_PTR_GET_DEFAULT(checkTypeExport_, "") };
      inline Data& setCheckTypeExport(string checkTypeExport) { DARABONBA_PTR_SET_VALUE(checkTypeExport_, checkTypeExport) };


      // checkTypeName Field Functions 
      bool hasCheckTypeName() const { return this->checkTypeName_ != nullptr;};
      void deleteCheckTypeName() { this->checkTypeName_ = nullptr;};
      inline int32_t getCheckTypeName() const { DARABONBA_PTR_GET_DEFAULT(checkTypeName_, 0) };
      inline Data& setCheckTypeName(int32_t checkTypeName) { DARABONBA_PTR_SET_VALUE(checkTypeName_, checkTypeName) };


      // complexMetricRules Field Functions 
      bool hasComplexMetricRules() const { return this->complexMetricRules_ != nullptr;};
      void deleteComplexMetricRules() { this->complexMetricRules_ = nullptr;};
      inline const vector<Data::ComplexMetricRules> & getComplexMetricRules() const { DARABONBA_PTR_GET_CONST(complexMetricRules_, vector<Data::ComplexMetricRules>) };
      inline vector<Data::ComplexMetricRules> getComplexMetricRules() { DARABONBA_PTR_GET(complexMetricRules_, vector<Data::ComplexMetricRules>) };
      inline Data& setComplexMetricRules(const vector<Data::ComplexMetricRules> & complexMetricRules) { DARABONBA_PTR_SET_VALUE(complexMetricRules_, complexMetricRules) };
      inline Data& setComplexMetricRules(vector<Data::ComplexMetricRules> && complexMetricRules) { DARABONBA_PTR_SET_RVALUE(complexMetricRules_, complexMetricRules) };


      // dsEngineRels Field Functions 
      bool hasDsEngineRels() const { return this->dsEngineRels_ != nullptr;};
      void deleteDsEngineRels() { this->dsEngineRels_ = nullptr;};
      inline const vector<Data::DsEngineRels> & getDsEngineRels() const { DARABONBA_PTR_GET_CONST(dsEngineRels_, vector<Data::DsEngineRels>) };
      inline vector<Data::DsEngineRels> getDsEngineRels() { DARABONBA_PTR_GET(dsEngineRels_, vector<Data::DsEngineRels>) };
      inline Data& setDsEngineRels(const vector<Data::DsEngineRels> & dsEngineRels) { DARABONBA_PTR_SET_VALUE(dsEngineRels_, dsEngineRels) };
      inline Data& setDsEngineRels(vector<Data::DsEngineRels> && dsEngineRels) { DARABONBA_PTR_SET_RVALUE(dsEngineRels_, dsEngineRels) };


      // fulltextRule Field Functions 
      bool hasFulltextRule() const { return this->fulltextRule_ != nullptr;};
      void deleteFulltextRule() { this->fulltextRule_ = nullptr;};
      inline const Data::FulltextRule & getFulltextRule() const { DARABONBA_PTR_GET_CONST(fulltextRule_, Data::FulltextRule) };
      inline Data::FulltextRule getFulltextRule() { DARABONBA_PTR_GET(fulltextRule_, Data::FulltextRule) };
      inline Data& setFulltextRule(const Data::FulltextRule & fulltextRule) { DARABONBA_PTR_SET_VALUE(fulltextRule_, fulltextRule) };
      inline Data& setFulltextRule(Data::FulltextRule && fulltextRule) { DARABONBA_PTR_SET_RVALUE(fulltextRule_, fulltextRule) };


      // metricRules Field Functions 
      bool hasMetricRules() const { return this->metricRules_ != nullptr;};
      void deleteMetricRules() { this->metricRules_ = nullptr;};
      inline const vector<Data::MetricRules> & getMetricRules() const { DARABONBA_PTR_GET_CONST(metricRules_, vector<Data::MetricRules>) };
      inline vector<Data::MetricRules> getMetricRules() { DARABONBA_PTR_GET(metricRules_, vector<Data::MetricRules>) };
      inline Data& setMetricRules(const vector<Data::MetricRules> & metricRules) { DARABONBA_PTR_SET_VALUE(metricRules_, metricRules) };
      inline Data& setMetricRules(vector<Data::MetricRules> && metricRules) { DARABONBA_PTR_SET_RVALUE(metricRules_, metricRules) };


      // nullRules Field Functions 
      bool hasNullRules() const { return this->nullRules_ != nullptr;};
      void deleteNullRules() { this->nullRules_ = nullptr;};
      inline const vector<Data::NullRules> & getNullRules() const { DARABONBA_PTR_GET_CONST(nullRules_, vector<Data::NullRules>) };
      inline vector<Data::NullRules> getNullRules() { DARABONBA_PTR_GET(nullRules_, vector<Data::NullRules>) };
      inline Data& setNullRules(const vector<Data::NullRules> & nullRules) { DARABONBA_PTR_SET_VALUE(nullRules_, nullRules) };
      inline Data& setNullRules(vector<Data::NullRules> && nullRules) { DARABONBA_PTR_SET_RVALUE(nullRules_, nullRules) };


      // templateDesc Field Functions 
      bool hasTemplateDesc() const { return this->templateDesc_ != nullptr;};
      void deleteTemplateDesc() { this->templateDesc_ = nullptr;};
      inline string getTemplateDesc() const { DARABONBA_PTR_GET_DEFAULT(templateDesc_, "") };
      inline Data& setTemplateDesc(string templateDesc) { DARABONBA_PTR_SET_VALUE(templateDesc_, templateDesc) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Data& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // weakContentRule Field Functions 
      bool hasWeakContentRule() const { return this->weakContentRule_ != nullptr;};
      void deleteWeakContentRule() { this->weakContentRule_ = nullptr;};
      inline const Data::WeakContentRule & getWeakContentRule() const { DARABONBA_PTR_GET_CONST(weakContentRule_, Data::WeakContentRule) };
      inline Data::WeakContentRule getWeakContentRule() { DARABONBA_PTR_GET(weakContentRule_, Data::WeakContentRule) };
      inline Data& setWeakContentRule(const Data::WeakContentRule & weakContentRule) { DARABONBA_PTR_SET_VALUE(weakContentRule_, weakContentRule) };
      inline Data& setWeakContentRule(Data::WeakContentRule && weakContentRule) { DARABONBA_PTR_SET_RVALUE(weakContentRule_, weakContentRule) };


    protected:
      // The list of check rules for basic data type metrics. This field is required when checkType is set to 1 (metric comparison).
      shared_ptr<vector<Data::BasicMetricRules>> basicMetricRules_ {};
      // The check rule type. Valid values: 0: data volume comparison. 1: metric comparison. 2: weak content comparison. 3: custom comparison. 4: full-text comparison. 5: null rate comparison.
      shared_ptr<int32_t> checkType_ {};
      // The Chinese name of the check type (used in export report fields).
      shared_ptr<string> checkTypeExport_ {};
      // The check type name.
      shared_ptr<int32_t> checkTypeName_ {};
      // The list of check rules for composite data type metrics. This field is used when checkType is set to 1 (metric comparison).
      shared_ptr<vector<Data::ComplexMetricRules>> complexMetricRules_ {};
      // The list of data source engine relationships (data source engines associated with the template).
      shared_ptr<vector<Data::DsEngineRels>> dsEngineRels_ {};
      // The full-text comparison rule. This field has a value when checkType is set to 4 (full-text comparison). For the field structure, refer to the child field descriptions below.
      shared_ptr<Data::FulltextRule> fulltextRule_ {};
      // The list of metric check rules. This parameter has a value when checkType is set to 1 (metric comparison).
      shared_ptr<vector<Data::MetricRules>> metricRules_ {};
      // The list of null rate check rules. This parameter has a value when checkType is set to 5 (null rate comparison).
      shared_ptr<vector<Data::NullRules>> nullRules_ {};
      // The template description.
      shared_ptr<string> templateDesc_ {};
      // The check template ID (logical foreign key) that uniquely identifies a check template.
      shared_ptr<string> templateId_ {};
      // The name of the check template.
      shared_ptr<string> templateName_ {};
      // The weak content check rule. This parameter has a value and is required when checkType is set to 2 (weak content comparison). For the field structure, see the child field descriptions.
      shared_ptr<Data::WeakContentRule> weakContentRule_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataCheckTemplateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataCheckTemplateResponseBody::Data) };
    inline GetDataCheckTemplateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataCheckTemplateResponseBody::Data) };
    inline GetDataCheckTemplateResponseBody& setData(const GetDataCheckTemplateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataCheckTemplateResponseBody& setData(GetDataCheckTemplateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetDataCheckTemplateResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetDataCheckTemplateResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCheckTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCheckTemplateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data body returned by the operation. For the field structure, refer to the child field descriptions below.
    shared_ptr<GetDataCheckTemplateResponseBody::Data> data_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values: true: The call is successful. false: The call failed. If the call failed, check errCode and errMessage for details.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
