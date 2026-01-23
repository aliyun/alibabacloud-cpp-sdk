// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTQUALITYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSERTQUALITYRULEREQUEST_HPP_
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
  class UpsertQualityRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertQualityRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpsertCommand, upsertCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertQualityRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpsertCommand, upsertCommand_);
    };
    UpsertQualityRuleRequest() = default ;
    UpsertQualityRuleRequest(const UpsertQualityRuleRequest &) = default ;
    UpsertQualityRuleRequest(UpsertQualityRuleRequest &&) = default ;
    UpsertQualityRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertQualityRuleRequest() = default ;
    UpsertQualityRuleRequest& operator=(const UpsertQualityRuleRequest &) = default ;
    UpsertQualityRuleRequest& operator=(UpsertQualityRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpsertCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpsertCommand& obj) { 
        DARABONBA_PTR_TO_JSON(AttributeWithValueList, attributeWithValueList_);
        DARABONBA_PTR_TO_JSON(CatalogList, catalogList_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnableErrorArchive, enableErrorArchive_);
        DARABONBA_PTR_TO_JSON(FormPropertyList, formPropertyList_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Strength, strength_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
        DARABONBA_PTR_TO_JSON(ValidateConditionList, validateConditionList_);
        DARABONBA_PTR_TO_JSON(WatchId, watchId_);
      };
      friend void from_json(const Darabonba::Json& j, UpsertCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(AttributeWithValueList, attributeWithValueList_);
        DARABONBA_PTR_FROM_JSON(CatalogList, catalogList_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnableErrorArchive, enableErrorArchive_);
        DARABONBA_PTR_FROM_JSON(FormPropertyList, formPropertyList_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Strength, strength_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
        DARABONBA_PTR_FROM_JSON(ValidateConditionList, validateConditionList_);
        DARABONBA_PTR_FROM_JSON(WatchId, watchId_);
      };
      UpsertCommand() = default ;
      UpsertCommand(const UpsertCommand &) = default ;
      UpsertCommand(UpsertCommand &&) = default ;
      UpsertCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpsertCommand() = default ;
      UpsertCommand& operator=(const UpsertCommand &) = default ;
      UpsertCommand& operator=(UpsertCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ValidateConditionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ValidateConditionList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Metric, metric_);
          DARABONBA_PTR_TO_JSON(Operator, operator_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ValidateConditionList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Metric, metric_);
          DARABONBA_PTR_FROM_JSON(Operator, operator_);
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
        && this->metric_ == nullptr && this->operator_ == nullptr && this->parentId_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
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


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline ValidateConditionList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


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
        shared_ptr<string> operator_ {};
        shared_ptr<string> parentId_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> value_ {};
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
        && this->catalogList_ == nullptr && this->description_ == nullptr && this->enableErrorArchive_ == nullptr && this->formPropertyList_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->strength_ == nullptr && this->templateId_ == nullptr && this->templateType_ == nullptr && this->validateConditionList_ == nullptr
        && this->watchId_ == nullptr; };
      // attributeWithValueList Field Functions 
      bool hasAttributeWithValueList() const { return this->attributeWithValueList_ != nullptr;};
      void deleteAttributeWithValueList() { this->attributeWithValueList_ = nullptr;};
      inline const vector<UpsertCommand::AttributeWithValueList> & getAttributeWithValueList() const { DARABONBA_PTR_GET_CONST(attributeWithValueList_, vector<UpsertCommand::AttributeWithValueList>) };
      inline vector<UpsertCommand::AttributeWithValueList> getAttributeWithValueList() { DARABONBA_PTR_GET(attributeWithValueList_, vector<UpsertCommand::AttributeWithValueList>) };
      inline UpsertCommand& setAttributeWithValueList(const vector<UpsertCommand::AttributeWithValueList> & attributeWithValueList) { DARABONBA_PTR_SET_VALUE(attributeWithValueList_, attributeWithValueList) };
      inline UpsertCommand& setAttributeWithValueList(vector<UpsertCommand::AttributeWithValueList> && attributeWithValueList) { DARABONBA_PTR_SET_RVALUE(attributeWithValueList_, attributeWithValueList) };


      // catalogList Field Functions 
      bool hasCatalogList() const { return this->catalogList_ != nullptr;};
      void deleteCatalogList() { this->catalogList_ = nullptr;};
      inline const vector<string> & getCatalogList() const { DARABONBA_PTR_GET_CONST(catalogList_, vector<string>) };
      inline vector<string> getCatalogList() { DARABONBA_PTR_GET(catalogList_, vector<string>) };
      inline UpsertCommand& setCatalogList(const vector<string> & catalogList) { DARABONBA_PTR_SET_VALUE(catalogList_, catalogList) };
      inline UpsertCommand& setCatalogList(vector<string> && catalogList) { DARABONBA_PTR_SET_RVALUE(catalogList_, catalogList) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UpsertCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enableErrorArchive Field Functions 
      bool hasEnableErrorArchive() const { return this->enableErrorArchive_ != nullptr;};
      void deleteEnableErrorArchive() { this->enableErrorArchive_ = nullptr;};
      inline bool getEnableErrorArchive() const { DARABONBA_PTR_GET_DEFAULT(enableErrorArchive_, false) };
      inline UpsertCommand& setEnableErrorArchive(bool enableErrorArchive) { DARABONBA_PTR_SET_VALUE(enableErrorArchive_, enableErrorArchive) };


      // formPropertyList Field Functions 
      bool hasFormPropertyList() const { return this->formPropertyList_ != nullptr;};
      void deleteFormPropertyList() { this->formPropertyList_ = nullptr;};
      inline const vector<UpsertCommand::FormPropertyList> & getFormPropertyList() const { DARABONBA_PTR_GET_CONST(formPropertyList_, vector<UpsertCommand::FormPropertyList>) };
      inline vector<UpsertCommand::FormPropertyList> getFormPropertyList() { DARABONBA_PTR_GET(formPropertyList_, vector<UpsertCommand::FormPropertyList>) };
      inline UpsertCommand& setFormPropertyList(const vector<UpsertCommand::FormPropertyList> & formPropertyList) { DARABONBA_PTR_SET_VALUE(formPropertyList_, formPropertyList) };
      inline UpsertCommand& setFormPropertyList(vector<UpsertCommand::FormPropertyList> && formPropertyList) { DARABONBA_PTR_SET_RVALUE(formPropertyList_, formPropertyList) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UpsertCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpsertCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // strength Field Functions 
      bool hasStrength() const { return this->strength_ != nullptr;};
      void deleteStrength() { this->strength_ = nullptr;};
      inline string getStrength() const { DARABONBA_PTR_GET_DEFAULT(strength_, "") };
      inline UpsertCommand& setStrength(string strength) { DARABONBA_PTR_SET_VALUE(strength_, strength) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline UpsertCommand& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline UpsertCommand& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // validateConditionList Field Functions 
      bool hasValidateConditionList() const { return this->validateConditionList_ != nullptr;};
      void deleteValidateConditionList() { this->validateConditionList_ = nullptr;};
      inline const vector<UpsertCommand::ValidateConditionList> & getValidateConditionList() const { DARABONBA_PTR_GET_CONST(validateConditionList_, vector<UpsertCommand::ValidateConditionList>) };
      inline vector<UpsertCommand::ValidateConditionList> getValidateConditionList() { DARABONBA_PTR_GET(validateConditionList_, vector<UpsertCommand::ValidateConditionList>) };
      inline UpsertCommand& setValidateConditionList(const vector<UpsertCommand::ValidateConditionList> & validateConditionList) { DARABONBA_PTR_SET_VALUE(validateConditionList_, validateConditionList) };
      inline UpsertCommand& setValidateConditionList(vector<UpsertCommand::ValidateConditionList> && validateConditionList) { DARABONBA_PTR_SET_RVALUE(validateConditionList_, validateConditionList) };


      // watchId Field Functions 
      bool hasWatchId() const { return this->watchId_ != nullptr;};
      void deleteWatchId() { this->watchId_ = nullptr;};
      inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
      inline UpsertCommand& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


    protected:
      shared_ptr<vector<UpsertCommand::AttributeWithValueList>> attributeWithValueList_ {};
      // This parameter is required.
      shared_ptr<vector<string>> catalogList_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> enableErrorArchive_ {};
      shared_ptr<vector<UpsertCommand::FormPropertyList>> formPropertyList_ {};
      shared_ptr<int64_t> id_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<string> strength_ {};
      // This parameter is required.
      shared_ptr<int64_t> templateId_ {};
      // This parameter is required.
      shared_ptr<string> templateType_ {};
      shared_ptr<vector<UpsertCommand::ValidateConditionList>> validateConditionList_ {};
      // This parameter is required.
      shared_ptr<int64_t> watchId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->upsertCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpsertQualityRuleRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // upsertCommand Field Functions 
    bool hasUpsertCommand() const { return this->upsertCommand_ != nullptr;};
    void deleteUpsertCommand() { this->upsertCommand_ = nullptr;};
    inline const UpsertQualityRuleRequest::UpsertCommand & getUpsertCommand() const { DARABONBA_PTR_GET_CONST(upsertCommand_, UpsertQualityRuleRequest::UpsertCommand) };
    inline UpsertQualityRuleRequest::UpsertCommand getUpsertCommand() { DARABONBA_PTR_GET(upsertCommand_, UpsertQualityRuleRequest::UpsertCommand) };
    inline UpsertQualityRuleRequest& setUpsertCommand(const UpsertQualityRuleRequest::UpsertCommand & upsertCommand) { DARABONBA_PTR_SET_VALUE(upsertCommand_, upsertCommand) };
    inline UpsertQualityRuleRequest& setUpsertCommand(UpsertQualityRuleRequest::UpsertCommand && upsertCommand) { DARABONBA_PTR_SET_RVALUE(upsertCommand_, upsertCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpsertQualityRuleRequest::UpsertCommand> upsertCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
