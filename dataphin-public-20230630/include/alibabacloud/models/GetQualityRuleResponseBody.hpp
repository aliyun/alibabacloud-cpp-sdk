// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetQualityRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(QualityRuleInfo, qualityRuleInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(QualityRuleInfo, qualityRuleInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityRuleResponseBody() = default ;
    GetQualityRuleResponseBody(const GetQualityRuleResponseBody &) = default ;
    GetQualityRuleResponseBody(GetQualityRuleResponseBody &&) = default ;
    GetQualityRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityRuleResponseBody() = default ;
    GetQualityRuleResponseBody& operator=(const GetQualityRuleResponseBody &) = default ;
    GetQualityRuleResponseBody& operator=(GetQualityRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QualityRuleInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QualityRuleInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AttributeWithValueList, attributeWithValueList_);
        DARABONBA_PTR_TO_JSON(CatalogList, catalogList_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnableErrorArchive, enableErrorArchive_);
        DARABONBA_PTR_TO_JSON(FormPropertyList, formPropertyList_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Modifier, modifier_);
        DARABONBA_PTR_TO_JSON(ModifierName, modifierName_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ScheduleBindList, scheduleBindList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Strength, strength_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TemplateScope, templateScope_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
        DARABONBA_PTR_TO_JSON(TestRunRuleTaskId, testRunRuleTaskId_);
        DARABONBA_PTR_TO_JSON(TestRunRuleTaskStatus, testRunRuleTaskStatus_);
        DARABONBA_PTR_TO_JSON(TestRunRuleValidateResult, testRunRuleValidateResult_);
        DARABONBA_PTR_TO_JSON(ValidateConditionList, validateConditionList_);
        DARABONBA_PTR_TO_JSON(ValidateObject, validateObject_);
        DARABONBA_PTR_TO_JSON(WatchId, watchId_);
      };
      friend void from_json(const Darabonba::Json& j, QualityRuleInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AttributeWithValueList, attributeWithValueList_);
        DARABONBA_PTR_FROM_JSON(CatalogList, catalogList_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnableErrorArchive, enableErrorArchive_);
        DARABONBA_PTR_FROM_JSON(FormPropertyList, formPropertyList_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
        DARABONBA_PTR_FROM_JSON(ModifierName, modifierName_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ScheduleBindList, scheduleBindList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Strength, strength_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TemplateScope, templateScope_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
        DARABONBA_PTR_FROM_JSON(TestRunRuleTaskId, testRunRuleTaskId_);
        DARABONBA_PTR_FROM_JSON(TestRunRuleTaskStatus, testRunRuleTaskStatus_);
        DARABONBA_PTR_FROM_JSON(TestRunRuleValidateResult, testRunRuleValidateResult_);
        DARABONBA_PTR_FROM_JSON(ValidateConditionList, validateConditionList_);
        DARABONBA_PTR_FROM_JSON(ValidateObject, validateObject_);
        DARABONBA_PTR_FROM_JSON(WatchId, watchId_);
      };
      QualityRuleInfo() = default ;
      QualityRuleInfo(const QualityRuleInfo &) = default ;
      QualityRuleInfo(QualityRuleInfo &&) = default ;
      QualityRuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QualityRuleInfo() = default ;
      QualityRuleInfo& operator=(const QualityRuleInfo &) = default ;
      QualityRuleInfo& operator=(QualityRuleInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ValidateObject : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ValidateObject& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ValidateObject& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        ValidateObject() = default ;
        ValidateObject(const ValidateObject &) = default ;
        ValidateObject(ValidateObject &&) = default ;
        ValidateObject(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ValidateObject() = default ;
        ValidateObject& operator=(const ValidateObject &) = default ;
        ValidateObject& operator=(ValidateObject &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ValidateObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ValidateObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
      };

      class ValidateConditionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ValidateConditionList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Metric, metric_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Operator, operator_);
          DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ValidateConditionList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Metric, metric_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Operator, operator_);
          DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        ValidateConditionList() = default ;
        ValidateConditionList(const ValidateConditionList &) = default ;
        ValidateConditionList(ValidateConditionList &&) = default ;
        ValidateConditionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ValidateConditionList() = default ;
        ValidateConditionList& operator=(const ValidateConditionList &) = default ;
        ValidateConditionList& operator=(ValidateConditionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->metric_ == nullptr && this->metricName_ == nullptr && this->operator_ == nullptr && this->operatorName_ == nullptr && this->parentId_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ValidateConditionList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // metric Field Functions 
        bool hasMetric() const { return this->metric_ != nullptr;};
        void deleteMetric() { this->metric_ = nullptr;};
        inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
        inline ValidateConditionList& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline ValidateConditionList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline ValidateConditionList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // operatorName Field Functions 
        bool hasOperatorName() const { return this->operatorName_ != nullptr;};
        void deleteOperatorName() { this->operatorName_ = nullptr;};
        inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
        inline ValidateConditionList& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
        inline ValidateConditionList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ValidateConditionList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ValidateConditionList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> metric_ {};
        shared_ptr<string> metricName_ {};
        shared_ptr<string> operator_ {};
        shared_ptr<string> operatorName_ {};
        shared_ptr<string> parentId_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> value_ {};
      };

      class ScheduleBindList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScheduleBindList& obj) { 
          DARABONBA_PTR_TO_JSON(ScheduleId, scheduleId_);
          DARABONBA_PTR_TO_JSON(ScheduleName, scheduleName_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduleBindList& obj) { 
          DARABONBA_PTR_FROM_JSON(ScheduleId, scheduleId_);
          DARABONBA_PTR_FROM_JSON(ScheduleName, scheduleName_);
        };
        ScheduleBindList() = default ;
        ScheduleBindList(const ScheduleBindList &) = default ;
        ScheduleBindList(ScheduleBindList &&) = default ;
        ScheduleBindList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScheduleBindList() = default ;
        ScheduleBindList& operator=(const ScheduleBindList &) = default ;
        ScheduleBindList& operator=(ScheduleBindList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->scheduleId_ == nullptr
        && this->scheduleName_ == nullptr; };
        // scheduleId Field Functions 
        bool hasScheduleId() const { return this->scheduleId_ != nullptr;};
        void deleteScheduleId() { this->scheduleId_ = nullptr;};
        inline int64_t getScheduleId() const { DARABONBA_PTR_GET_DEFAULT(scheduleId_, 0L) };
        inline ScheduleBindList& setScheduleId(int64_t scheduleId) { DARABONBA_PTR_SET_VALUE(scheduleId_, scheduleId) };


        // scheduleName Field Functions 
        bool hasScheduleName() const { return this->scheduleName_ != nullptr;};
        void deleteScheduleName() { this->scheduleName_ = nullptr;};
        inline string getScheduleName() const { DARABONBA_PTR_GET_DEFAULT(scheduleName_, "") };
        inline ScheduleBindList& setScheduleName(string scheduleName) { DARABONBA_PTR_SET_VALUE(scheduleName_, scheduleName) };


      protected:
        shared_ptr<int64_t> scheduleId_ {};
        shared_ptr<string> scheduleName_ {};
      };

      class FormPropertyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FormPropertyList& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, FormPropertyList& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        FormPropertyList() = default ;
        FormPropertyList(const FormPropertyList &) = default ;
        FormPropertyList(FormPropertyList &&) = default ;
        FormPropertyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FormPropertyList() = default ;
        FormPropertyList& operator=(const FormPropertyList &) = default ;
        FormPropertyList& operator=(FormPropertyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->componentType_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
        // componentType Field Functions 
        bool hasComponentType() const { return this->componentType_ != nullptr;};
        void deleteComponentType() { this->componentType_ = nullptr;};
        inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
        inline FormPropertyList& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FormPropertyList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline FormPropertyList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> componentType_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> value_ {};
      };

      class AttributeWithValueList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttributeWithValueList& obj) { 
          DARABONBA_PTR_TO_JSON(AttributeInfo, attributeInfo_);
          DARABONBA_PTR_TO_JSON(AttributeValue, attributeValue_);
        };
        friend void from_json(const Darabonba::Json& j, AttributeWithValueList& obj) { 
          DARABONBA_PTR_FROM_JSON(AttributeInfo, attributeInfo_);
          DARABONBA_PTR_FROM_JSON(AttributeValue, attributeValue_);
        };
        AttributeWithValueList() = default ;
        AttributeWithValueList(const AttributeWithValueList &) = default ;
        AttributeWithValueList(AttributeWithValueList &&) = default ;
        AttributeWithValueList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttributeWithValueList() = default ;
        AttributeWithValueList& operator=(const AttributeWithValueList &) = default ;
        AttributeWithValueList& operator=(AttributeWithValueList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AttributeValue : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AttributeValue& obj) { 
            DARABONBA_PTR_TO_JSON(IncludeMaxValue, includeMaxValue_);
            DARABONBA_PTR_TO_JSON(IncludeMinValue, includeMinValue_);
            DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(MinValue, minValue_);
            DARABONBA_PTR_TO_JSON(ValueList, valueList_);
          };
          friend void from_json(const Darabonba::Json& j, AttributeValue& obj) { 
            DARABONBA_PTR_FROM_JSON(IncludeMaxValue, includeMaxValue_);
            DARABONBA_PTR_FROM_JSON(IncludeMinValue, includeMinValue_);
            DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
            DARABONBA_PTR_FROM_JSON(ValueList, valueList_);
          };
          AttributeValue() = default ;
          AttributeValue(const AttributeValue &) = default ;
          AttributeValue(AttributeValue &&) = default ;
          AttributeValue(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AttributeValue() = default ;
          AttributeValue& operator=(const AttributeValue &) = default ;
          AttributeValue& operator=(AttributeValue &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->includeMaxValue_ == nullptr
        && this->includeMinValue_ == nullptr && this->maxValue_ == nullptr && this->minValue_ == nullptr && this->valueList_ == nullptr; };
          // includeMaxValue Field Functions 
          bool hasIncludeMaxValue() const { return this->includeMaxValue_ != nullptr;};
          void deleteIncludeMaxValue() { this->includeMaxValue_ = nullptr;};
          inline bool getIncludeMaxValue() const { DARABONBA_PTR_GET_DEFAULT(includeMaxValue_, false) };
          inline AttributeValue& setIncludeMaxValue(bool includeMaxValue) { DARABONBA_PTR_SET_VALUE(includeMaxValue_, includeMaxValue) };


          // includeMinValue Field Functions 
          bool hasIncludeMinValue() const { return this->includeMinValue_ != nullptr;};
          void deleteIncludeMinValue() { this->includeMinValue_ = nullptr;};
          inline bool getIncludeMinValue() const { DARABONBA_PTR_GET_DEFAULT(includeMinValue_, false) };
          inline AttributeValue& setIncludeMinValue(bool includeMinValue) { DARABONBA_PTR_SET_VALUE(includeMinValue_, includeMinValue) };


          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline string getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, "") };
          inline AttributeValue& setMaxValue(string maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline string getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, "") };
          inline AttributeValue& setMinValue(string minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


          // valueList Field Functions 
          bool hasValueList() const { return this->valueList_ != nullptr;};
          void deleteValueList() { this->valueList_ = nullptr;};
          inline const vector<string> & getValueList() const { DARABONBA_PTR_GET_CONST(valueList_, vector<string>) };
          inline vector<string> getValueList() { DARABONBA_PTR_GET(valueList_, vector<string>) };
          inline AttributeValue& setValueList(const vector<string> & valueList) { DARABONBA_PTR_SET_VALUE(valueList_, valueList) };
          inline AttributeValue& setValueList(vector<string> && valueList) { DARABONBA_PTR_SET_RVALUE(valueList_, valueList) };


        protected:
          shared_ptr<bool> includeMaxValue_ {};
          shared_ptr<bool> includeMinValue_ {};
          shared_ptr<string> maxValue_ {};
          shared_ptr<string> minValue_ {};
          shared_ptr<vector<string>> valueList_ {};
        };

        class AttributeInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AttributeInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Enabled, enabled_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Required, required_);
            DARABONBA_PTR_TO_JSON(Searchable, searchable_);
            DARABONBA_PTR_TO_JSON(ValueConfig, valueConfig_);
          };
          friend void from_json(const Darabonba::Json& j, AttributeInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Required, required_);
            DARABONBA_PTR_FROM_JSON(Searchable, searchable_);
            DARABONBA_PTR_FROM_JSON(ValueConfig, valueConfig_);
          };
          AttributeInfo() = default ;
          AttributeInfo(const AttributeInfo &) = default ;
          AttributeInfo(AttributeInfo &&) = default ;
          AttributeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AttributeInfo() = default ;
          AttributeInfo& operator=(const AttributeInfo &) = default ;
          AttributeInfo& operator=(AttributeInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ValueConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ValueConfig& obj) { 
              DARABONBA_PTR_TO_JSON(DataType, dataType_);
              DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_TO_JSON(Length, length_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(ValueEnumList, valueEnumList_);
            };
            friend void from_json(const Darabonba::Json& j, ValueConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(DataType, dataType_);
              DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_FROM_JSON(Length, length_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(ValueEnumList, valueEnumList_);
            };
            ValueConfig() = default ;
            ValueConfig(const ValueConfig &) = default ;
            ValueConfig(ValueConfig &&) = default ;
            ValueConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ValueConfig() = default ;
            ValueConfig& operator=(const ValueConfig &) = default ;
            ValueConfig& operator=(ValueConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class DefaultValue : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const DefaultValue& obj) { 
                DARABONBA_PTR_TO_JSON(IncludeMaxValue, includeMaxValue_);
                DARABONBA_PTR_TO_JSON(IncludeMinValue, includeMinValue_);
                DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
                DARABONBA_PTR_TO_JSON(MinValue, minValue_);
                DARABONBA_PTR_TO_JSON(ValueList, valueList_);
              };
              friend void from_json(const Darabonba::Json& j, DefaultValue& obj) { 
                DARABONBA_PTR_FROM_JSON(IncludeMaxValue, includeMaxValue_);
                DARABONBA_PTR_FROM_JSON(IncludeMinValue, includeMinValue_);
                DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
                DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
                DARABONBA_PTR_FROM_JSON(ValueList, valueList_);
              };
              DefaultValue() = default ;
              DefaultValue(const DefaultValue &) = default ;
              DefaultValue(DefaultValue &&) = default ;
              DefaultValue(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~DefaultValue() = default ;
              DefaultValue& operator=(const DefaultValue &) = default ;
              DefaultValue& operator=(DefaultValue &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->includeMaxValue_ == nullptr
        && this->includeMinValue_ == nullptr && this->maxValue_ == nullptr && this->minValue_ == nullptr && this->valueList_ == nullptr; };
              // includeMaxValue Field Functions 
              bool hasIncludeMaxValue() const { return this->includeMaxValue_ != nullptr;};
              void deleteIncludeMaxValue() { this->includeMaxValue_ = nullptr;};
              inline bool getIncludeMaxValue() const { DARABONBA_PTR_GET_DEFAULT(includeMaxValue_, false) };
              inline DefaultValue& setIncludeMaxValue(bool includeMaxValue) { DARABONBA_PTR_SET_VALUE(includeMaxValue_, includeMaxValue) };


              // includeMinValue Field Functions 
              bool hasIncludeMinValue() const { return this->includeMinValue_ != nullptr;};
              void deleteIncludeMinValue() { this->includeMinValue_ = nullptr;};
              inline bool getIncludeMinValue() const { DARABONBA_PTR_GET_DEFAULT(includeMinValue_, false) };
              inline DefaultValue& setIncludeMinValue(bool includeMinValue) { DARABONBA_PTR_SET_VALUE(includeMinValue_, includeMinValue) };


              // maxValue Field Functions 
              bool hasMaxValue() const { return this->maxValue_ != nullptr;};
              void deleteMaxValue() { this->maxValue_ = nullptr;};
              inline string getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, "") };
              inline DefaultValue& setMaxValue(string maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


              // minValue Field Functions 
              bool hasMinValue() const { return this->minValue_ != nullptr;};
              void deleteMinValue() { this->minValue_ = nullptr;};
              inline string getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, "") };
              inline DefaultValue& setMinValue(string minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


              // valueList Field Functions 
              bool hasValueList() const { return this->valueList_ != nullptr;};
              void deleteValueList() { this->valueList_ = nullptr;};
              inline const vector<string> & getValueList() const { DARABONBA_PTR_GET_CONST(valueList_, vector<string>) };
              inline vector<string> getValueList() { DARABONBA_PTR_GET(valueList_, vector<string>) };
              inline DefaultValue& setValueList(const vector<string> & valueList) { DARABONBA_PTR_SET_VALUE(valueList_, valueList) };
              inline DefaultValue& setValueList(vector<string> && valueList) { DARABONBA_PTR_SET_RVALUE(valueList_, valueList) };


            protected:
              shared_ptr<bool> includeMaxValue_ {};
              shared_ptr<bool> includeMinValue_ {};
              shared_ptr<string> maxValue_ {};
              shared_ptr<string> minValue_ {};
              shared_ptr<vector<string>> valueList_ {};
            };

            virtual bool empty() const override { return this->dataType_ == nullptr
        && this->defaultValue_ == nullptr && this->length_ == nullptr && this->type_ == nullptr && this->valueEnumList_ == nullptr; };
            // dataType Field Functions 
            bool hasDataType() const { return this->dataType_ != nullptr;};
            void deleteDataType() { this->dataType_ = nullptr;};
            inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
            inline ValueConfig& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


            // defaultValue Field Functions 
            bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
            void deleteDefaultValue() { this->defaultValue_ = nullptr;};
            inline const ValueConfig::DefaultValue & getDefaultValue() const { DARABONBA_PTR_GET_CONST(defaultValue_, ValueConfig::DefaultValue) };
            inline ValueConfig::DefaultValue getDefaultValue() { DARABONBA_PTR_GET(defaultValue_, ValueConfig::DefaultValue) };
            inline ValueConfig& setDefaultValue(const ValueConfig::DefaultValue & defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };
            inline ValueConfig& setDefaultValue(ValueConfig::DefaultValue && defaultValue) { DARABONBA_PTR_SET_RVALUE(defaultValue_, defaultValue) };


            // length Field Functions 
            bool hasLength() const { return this->length_ != nullptr;};
            void deleteLength() { this->length_ = nullptr;};
            inline int32_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
            inline ValueConfig& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline ValueConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // valueEnumList Field Functions 
            bool hasValueEnumList() const { return this->valueEnumList_ != nullptr;};
            void deleteValueEnumList() { this->valueEnumList_ = nullptr;};
            inline const vector<string> & getValueEnumList() const { DARABONBA_PTR_GET_CONST(valueEnumList_, vector<string>) };
            inline vector<string> getValueEnumList() { DARABONBA_PTR_GET(valueEnumList_, vector<string>) };
            inline ValueConfig& setValueEnumList(const vector<string> & valueEnumList) { DARABONBA_PTR_SET_VALUE(valueEnumList_, valueEnumList) };
            inline ValueConfig& setValueEnumList(vector<string> && valueEnumList) { DARABONBA_PTR_SET_RVALUE(valueEnumList_, valueEnumList) };


          protected:
            shared_ptr<string> dataType_ {};
            shared_ptr<ValueConfig::DefaultValue> defaultValue_ {};
            shared_ptr<int32_t> length_ {};
            shared_ptr<string> type_ {};
            shared_ptr<vector<string>> valueEnumList_ {};
          };

          virtual bool empty() const override { return this->description_ == nullptr
        && this->enabled_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->required_ == nullptr && this->searchable_ == nullptr
        && this->valueConfig_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline AttributeInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline AttributeInfo& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline AttributeInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline AttributeInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // required Field Functions 
          bool hasRequired() const { return this->required_ != nullptr;};
          void deleteRequired() { this->required_ = nullptr;};
          inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
          inline AttributeInfo& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


          // searchable Field Functions 
          bool hasSearchable() const { return this->searchable_ != nullptr;};
          void deleteSearchable() { this->searchable_ = nullptr;};
          inline bool getSearchable() const { DARABONBA_PTR_GET_DEFAULT(searchable_, false) };
          inline AttributeInfo& setSearchable(bool searchable) { DARABONBA_PTR_SET_VALUE(searchable_, searchable) };


          // valueConfig Field Functions 
          bool hasValueConfig() const { return this->valueConfig_ != nullptr;};
          void deleteValueConfig() { this->valueConfig_ = nullptr;};
          inline const AttributeInfo::ValueConfig & getValueConfig() const { DARABONBA_PTR_GET_CONST(valueConfig_, AttributeInfo::ValueConfig) };
          inline AttributeInfo::ValueConfig getValueConfig() { DARABONBA_PTR_GET(valueConfig_, AttributeInfo::ValueConfig) };
          inline AttributeInfo& setValueConfig(const AttributeInfo::ValueConfig & valueConfig) { DARABONBA_PTR_SET_VALUE(valueConfig_, valueConfig) };
          inline AttributeInfo& setValueConfig(AttributeInfo::ValueConfig && valueConfig) { DARABONBA_PTR_SET_RVALUE(valueConfig_, valueConfig) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<bool> enabled_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> name_ {};
          shared_ptr<bool> required_ {};
          shared_ptr<bool> searchable_ {};
          shared_ptr<AttributeInfo::ValueConfig> valueConfig_ {};
        };

        virtual bool empty() const override { return this->attributeInfo_ == nullptr
        && this->attributeValue_ == nullptr; };
        // attributeInfo Field Functions 
        bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
        void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
        inline const AttributeWithValueList::AttributeInfo & getAttributeInfo() const { DARABONBA_PTR_GET_CONST(attributeInfo_, AttributeWithValueList::AttributeInfo) };
        inline AttributeWithValueList::AttributeInfo getAttributeInfo() { DARABONBA_PTR_GET(attributeInfo_, AttributeWithValueList::AttributeInfo) };
        inline AttributeWithValueList& setAttributeInfo(const AttributeWithValueList::AttributeInfo & attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };
        inline AttributeWithValueList& setAttributeInfo(AttributeWithValueList::AttributeInfo && attributeInfo) { DARABONBA_PTR_SET_RVALUE(attributeInfo_, attributeInfo) };


        // attributeValue Field Functions 
        bool hasAttributeValue() const { return this->attributeValue_ != nullptr;};
        void deleteAttributeValue() { this->attributeValue_ = nullptr;};
        inline const AttributeWithValueList::AttributeValue & getAttributeValue() const { DARABONBA_PTR_GET_CONST(attributeValue_, AttributeWithValueList::AttributeValue) };
        inline AttributeWithValueList::AttributeValue getAttributeValue() { DARABONBA_PTR_GET(attributeValue_, AttributeWithValueList::AttributeValue) };
        inline AttributeWithValueList& setAttributeValue(const AttributeWithValueList::AttributeValue & attributeValue) { DARABONBA_PTR_SET_VALUE(attributeValue_, attributeValue) };
        inline AttributeWithValueList& setAttributeValue(AttributeWithValueList::AttributeValue && attributeValue) { DARABONBA_PTR_SET_RVALUE(attributeValue_, attributeValue) };


      protected:
        shared_ptr<AttributeWithValueList::AttributeInfo> attributeInfo_ {};
        shared_ptr<AttributeWithValueList::AttributeValue> attributeValue_ {};
      };

      virtual bool empty() const override { return this->attributeWithValueList_ == nullptr
        && this->catalogList_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->creatorName_ == nullptr && this->description_ == nullptr
        && this->enableErrorArchive_ == nullptr && this->formPropertyList_ == nullptr && this->id_ == nullptr && this->modifier_ == nullptr && this->modifierName_ == nullptr
        && this->modifyTime_ == nullptr && this->name_ == nullptr && this->scheduleBindList_ == nullptr && this->status_ == nullptr && this->strength_ == nullptr
        && this->templateId_ == nullptr && this->templateName_ == nullptr && this->templateScope_ == nullptr && this->templateType_ == nullptr && this->testRunRuleTaskId_ == nullptr
        && this->testRunRuleTaskStatus_ == nullptr && this->testRunRuleValidateResult_ == nullptr && this->validateConditionList_ == nullptr && this->validateObject_ == nullptr && this->watchId_ == nullptr; };
      // attributeWithValueList Field Functions 
      bool hasAttributeWithValueList() const { return this->attributeWithValueList_ != nullptr;};
      void deleteAttributeWithValueList() { this->attributeWithValueList_ = nullptr;};
      inline const vector<QualityRuleInfo::AttributeWithValueList> & getAttributeWithValueList() const { DARABONBA_PTR_GET_CONST(attributeWithValueList_, vector<QualityRuleInfo::AttributeWithValueList>) };
      inline vector<QualityRuleInfo::AttributeWithValueList> getAttributeWithValueList() { DARABONBA_PTR_GET(attributeWithValueList_, vector<QualityRuleInfo::AttributeWithValueList>) };
      inline QualityRuleInfo& setAttributeWithValueList(const vector<QualityRuleInfo::AttributeWithValueList> & attributeWithValueList) { DARABONBA_PTR_SET_VALUE(attributeWithValueList_, attributeWithValueList) };
      inline QualityRuleInfo& setAttributeWithValueList(vector<QualityRuleInfo::AttributeWithValueList> && attributeWithValueList) { DARABONBA_PTR_SET_RVALUE(attributeWithValueList_, attributeWithValueList) };


      // catalogList Field Functions 
      bool hasCatalogList() const { return this->catalogList_ != nullptr;};
      void deleteCatalogList() { this->catalogList_ = nullptr;};
      inline const vector<string> & getCatalogList() const { DARABONBA_PTR_GET_CONST(catalogList_, vector<string>) };
      inline vector<string> getCatalogList() { DARABONBA_PTR_GET(catalogList_, vector<string>) };
      inline QualityRuleInfo& setCatalogList(const vector<string> & catalogList) { DARABONBA_PTR_SET_VALUE(catalogList_, catalogList) };
      inline QualityRuleInfo& setCatalogList(vector<string> && catalogList) { DARABONBA_PTR_SET_RVALUE(catalogList_, catalogList) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline QualityRuleInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline QualityRuleInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline QualityRuleInfo& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline QualityRuleInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enableErrorArchive Field Functions 
      bool hasEnableErrorArchive() const { return this->enableErrorArchive_ != nullptr;};
      void deleteEnableErrorArchive() { this->enableErrorArchive_ = nullptr;};
      inline bool getEnableErrorArchive() const { DARABONBA_PTR_GET_DEFAULT(enableErrorArchive_, false) };
      inline QualityRuleInfo& setEnableErrorArchive(bool enableErrorArchive) { DARABONBA_PTR_SET_VALUE(enableErrorArchive_, enableErrorArchive) };


      // formPropertyList Field Functions 
      bool hasFormPropertyList() const { return this->formPropertyList_ != nullptr;};
      void deleteFormPropertyList() { this->formPropertyList_ = nullptr;};
      inline const vector<QualityRuleInfo::FormPropertyList> & getFormPropertyList() const { DARABONBA_PTR_GET_CONST(formPropertyList_, vector<QualityRuleInfo::FormPropertyList>) };
      inline vector<QualityRuleInfo::FormPropertyList> getFormPropertyList() { DARABONBA_PTR_GET(formPropertyList_, vector<QualityRuleInfo::FormPropertyList>) };
      inline QualityRuleInfo& setFormPropertyList(const vector<QualityRuleInfo::FormPropertyList> & formPropertyList) { DARABONBA_PTR_SET_VALUE(formPropertyList_, formPropertyList) };
      inline QualityRuleInfo& setFormPropertyList(vector<QualityRuleInfo::FormPropertyList> && formPropertyList) { DARABONBA_PTR_SET_RVALUE(formPropertyList_, formPropertyList) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline QualityRuleInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline QualityRuleInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // modifierName Field Functions 
      bool hasModifierName() const { return this->modifierName_ != nullptr;};
      void deleteModifierName() { this->modifierName_ = nullptr;};
      inline string getModifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
      inline QualityRuleInfo& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline QualityRuleInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline QualityRuleInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // scheduleBindList Field Functions 
      bool hasScheduleBindList() const { return this->scheduleBindList_ != nullptr;};
      void deleteScheduleBindList() { this->scheduleBindList_ = nullptr;};
      inline const vector<QualityRuleInfo::ScheduleBindList> & getScheduleBindList() const { DARABONBA_PTR_GET_CONST(scheduleBindList_, vector<QualityRuleInfo::ScheduleBindList>) };
      inline vector<QualityRuleInfo::ScheduleBindList> getScheduleBindList() { DARABONBA_PTR_GET(scheduleBindList_, vector<QualityRuleInfo::ScheduleBindList>) };
      inline QualityRuleInfo& setScheduleBindList(const vector<QualityRuleInfo::ScheduleBindList> & scheduleBindList) { DARABONBA_PTR_SET_VALUE(scheduleBindList_, scheduleBindList) };
      inline QualityRuleInfo& setScheduleBindList(vector<QualityRuleInfo::ScheduleBindList> && scheduleBindList) { DARABONBA_PTR_SET_RVALUE(scheduleBindList_, scheduleBindList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline QualityRuleInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // strength Field Functions 
      bool hasStrength() const { return this->strength_ != nullptr;};
      void deleteStrength() { this->strength_ = nullptr;};
      inline string getStrength() const { DARABONBA_PTR_GET_DEFAULT(strength_, "") };
      inline QualityRuleInfo& setStrength(string strength) { DARABONBA_PTR_SET_VALUE(strength_, strength) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline QualityRuleInfo& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline QualityRuleInfo& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateScope Field Functions 
      bool hasTemplateScope() const { return this->templateScope_ != nullptr;};
      void deleteTemplateScope() { this->templateScope_ = nullptr;};
      inline string getTemplateScope() const { DARABONBA_PTR_GET_DEFAULT(templateScope_, "") };
      inline QualityRuleInfo& setTemplateScope(string templateScope) { DARABONBA_PTR_SET_VALUE(templateScope_, templateScope) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline QualityRuleInfo& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // testRunRuleTaskId Field Functions 
      bool hasTestRunRuleTaskId() const { return this->testRunRuleTaskId_ != nullptr;};
      void deleteTestRunRuleTaskId() { this->testRunRuleTaskId_ = nullptr;};
      inline int64_t getTestRunRuleTaskId() const { DARABONBA_PTR_GET_DEFAULT(testRunRuleTaskId_, 0L) };
      inline QualityRuleInfo& setTestRunRuleTaskId(int64_t testRunRuleTaskId) { DARABONBA_PTR_SET_VALUE(testRunRuleTaskId_, testRunRuleTaskId) };


      // testRunRuleTaskStatus Field Functions 
      bool hasTestRunRuleTaskStatus() const { return this->testRunRuleTaskStatus_ != nullptr;};
      void deleteTestRunRuleTaskStatus() { this->testRunRuleTaskStatus_ = nullptr;};
      inline string getTestRunRuleTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(testRunRuleTaskStatus_, "") };
      inline QualityRuleInfo& setTestRunRuleTaskStatus(string testRunRuleTaskStatus) { DARABONBA_PTR_SET_VALUE(testRunRuleTaskStatus_, testRunRuleTaskStatus) };


      // testRunRuleValidateResult Field Functions 
      bool hasTestRunRuleValidateResult() const { return this->testRunRuleValidateResult_ != nullptr;};
      void deleteTestRunRuleValidateResult() { this->testRunRuleValidateResult_ = nullptr;};
      inline bool getTestRunRuleValidateResult() const { DARABONBA_PTR_GET_DEFAULT(testRunRuleValidateResult_, false) };
      inline QualityRuleInfo& setTestRunRuleValidateResult(bool testRunRuleValidateResult) { DARABONBA_PTR_SET_VALUE(testRunRuleValidateResult_, testRunRuleValidateResult) };


      // validateConditionList Field Functions 
      bool hasValidateConditionList() const { return this->validateConditionList_ != nullptr;};
      void deleteValidateConditionList() { this->validateConditionList_ = nullptr;};
      inline const vector<QualityRuleInfo::ValidateConditionList> & getValidateConditionList() const { DARABONBA_PTR_GET_CONST(validateConditionList_, vector<QualityRuleInfo::ValidateConditionList>) };
      inline vector<QualityRuleInfo::ValidateConditionList> getValidateConditionList() { DARABONBA_PTR_GET(validateConditionList_, vector<QualityRuleInfo::ValidateConditionList>) };
      inline QualityRuleInfo& setValidateConditionList(const vector<QualityRuleInfo::ValidateConditionList> & validateConditionList) { DARABONBA_PTR_SET_VALUE(validateConditionList_, validateConditionList) };
      inline QualityRuleInfo& setValidateConditionList(vector<QualityRuleInfo::ValidateConditionList> && validateConditionList) { DARABONBA_PTR_SET_RVALUE(validateConditionList_, validateConditionList) };


      // validateObject Field Functions 
      bool hasValidateObject() const { return this->validateObject_ != nullptr;};
      void deleteValidateObject() { this->validateObject_ = nullptr;};
      inline const QualityRuleInfo::ValidateObject & getValidateObject() const { DARABONBA_PTR_GET_CONST(validateObject_, QualityRuleInfo::ValidateObject) };
      inline QualityRuleInfo::ValidateObject getValidateObject() { DARABONBA_PTR_GET(validateObject_, QualityRuleInfo::ValidateObject) };
      inline QualityRuleInfo& setValidateObject(const QualityRuleInfo::ValidateObject & validateObject) { DARABONBA_PTR_SET_VALUE(validateObject_, validateObject) };
      inline QualityRuleInfo& setValidateObject(QualityRuleInfo::ValidateObject && validateObject) { DARABONBA_PTR_SET_RVALUE(validateObject_, validateObject) };


      // watchId Field Functions 
      bool hasWatchId() const { return this->watchId_ != nullptr;};
      void deleteWatchId() { this->watchId_ = nullptr;};
      inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
      inline QualityRuleInfo& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


    protected:
      shared_ptr<vector<QualityRuleInfo::AttributeWithValueList>> attributeWithValueList_ {};
      shared_ptr<vector<string>> catalogList_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> creatorName_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> enableErrorArchive_ {};
      shared_ptr<vector<QualityRuleInfo::FormPropertyList>> formPropertyList_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> modifier_ {};
      shared_ptr<string> modifierName_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<QualityRuleInfo::ScheduleBindList>> scheduleBindList_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> strength_ {};
      shared_ptr<int64_t> templateId_ {};
      shared_ptr<string> templateName_ {};
      shared_ptr<string> templateScope_ {};
      shared_ptr<string> templateType_ {};
      shared_ptr<int64_t> testRunRuleTaskId_ {};
      shared_ptr<string> testRunRuleTaskStatus_ {};
      shared_ptr<bool> testRunRuleValidateResult_ {};
      shared_ptr<vector<QualityRuleInfo::ValidateConditionList>> validateConditionList_ {};
      shared_ptr<QualityRuleInfo::ValidateObject> validateObject_ {};
      shared_ptr<int64_t> watchId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->qualityRuleInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQualityRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetQualityRuleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualityRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // qualityRuleInfo Field Functions 
    bool hasQualityRuleInfo() const { return this->qualityRuleInfo_ != nullptr;};
    void deleteQualityRuleInfo() { this->qualityRuleInfo_ = nullptr;};
    inline const GetQualityRuleResponseBody::QualityRuleInfo & getQualityRuleInfo() const { DARABONBA_PTR_GET_CONST(qualityRuleInfo_, GetQualityRuleResponseBody::QualityRuleInfo) };
    inline GetQualityRuleResponseBody::QualityRuleInfo getQualityRuleInfo() { DARABONBA_PTR_GET(qualityRuleInfo_, GetQualityRuleResponseBody::QualityRuleInfo) };
    inline GetQualityRuleResponseBody& setQualityRuleInfo(const GetQualityRuleResponseBody::QualityRuleInfo & qualityRuleInfo) { DARABONBA_PTR_SET_VALUE(qualityRuleInfo_, qualityRuleInfo) };
    inline GetQualityRuleResponseBody& setQualityRuleInfo(GetQualityRuleResponseBody::QualityRuleInfo && qualityRuleInfo) { DARABONBA_PTR_SET_RVALUE(qualityRuleInfo_, qualityRuleInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetQualityRuleResponseBody::QualityRuleInfo> qualityRuleInfo_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
