// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTANDARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTANDARDREQUEST_HPP_
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
  class CreateStandardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStandardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStandardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateStandardRequest() = default ;
    CreateStandardRequest(const CreateStandardRequest &) = default ;
    CreateStandardRequest(CreateStandardRequest &&) = default ;
    CreateStandardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStandardRequest() = default ;
    CreateStandardRequest& operator=(const CreateStandardRequest &) = default ;
    CreateStandardRequest& operator=(CreateStandardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EffectiveTimeConfig, effectiveTimeConfig_);
        DARABONBA_PTR_TO_JSON(NeedGenerateStandardCode, needGenerateStandardCode_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(StandardGeneralMonitorConfig, standardGeneralMonitorConfig_);
        DARABONBA_PTR_TO_JSON(StandardSetReference, standardSetReference_);
        DARABONBA_PTR_TO_JSON(StandardTemplateReference, standardTemplateReference_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EffectiveTimeConfig, effectiveTimeConfig_);
        DARABONBA_PTR_FROM_JSON(NeedGenerateStandardCode, needGenerateStandardCode_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(StandardGeneralMonitorConfig, standardGeneralMonitorConfig_);
        DARABONBA_PTR_FROM_JSON(StandardSetReference, standardSetReference_);
        DARABONBA_PTR_FROM_JSON(StandardTemplateReference, standardTemplateReference_);
      };
      CreateCommand() = default ;
      CreateCommand(const CreateCommand &) = default ;
      CreateCommand(CreateCommand &&) = default ;
      CreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateCommand() = default ;
      CreateCommand& operator=(const CreateCommand &) = default ;
      CreateCommand& operator=(CreateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StandardTemplateReference : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StandardTemplateReference& obj) { 
          DARABONBA_PTR_TO_JSON(AttributeValueList, attributeValueList_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, StandardTemplateReference& obj) { 
          DARABONBA_PTR_FROM_JSON(AttributeValueList, attributeValueList_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        StandardTemplateReference() = default ;
        StandardTemplateReference(const StandardTemplateReference &) = default ;
        StandardTemplateReference(StandardTemplateReference &&) = default ;
        StandardTemplateReference(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StandardTemplateReference() = default ;
        StandardTemplateReference& operator=(const StandardTemplateReference &) = default ;
        StandardTemplateReference& operator=(StandardTemplateReference &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AttributeValueList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AttributeValueList& obj) { 
            DARABONBA_PTR_TO_JSON(AttributeId, attributeId_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, AttributeValueList& obj) { 
            DARABONBA_PTR_FROM_JSON(AttributeId, attributeId_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          AttributeValueList() = default ;
          AttributeValueList(const AttributeValueList &) = default ;
          AttributeValueList(AttributeValueList &&) = default ;
          AttributeValueList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AttributeValueList() = default ;
          AttributeValueList& operator=(const AttributeValueList &) = default ;
          AttributeValueList& operator=(AttributeValueList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attributeId_ == nullptr
        && this->value_ == nullptr; };
          // attributeId Field Functions 
          bool hasAttributeId() const { return this->attributeId_ != nullptr;};
          void deleteAttributeId() { this->attributeId_ = nullptr;};
          inline int64_t getAttributeId() const { DARABONBA_PTR_GET_DEFAULT(attributeId_, 0L) };
          inline AttributeValueList& setAttributeId(int64_t attributeId) { DARABONBA_PTR_SET_VALUE(attributeId_, attributeId) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline AttributeValueList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<int64_t> attributeId_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->attributeValueList_ == nullptr
        && this->id_ == nullptr && this->version_ == nullptr; };
        // attributeValueList Field Functions 
        bool hasAttributeValueList() const { return this->attributeValueList_ != nullptr;};
        void deleteAttributeValueList() { this->attributeValueList_ = nullptr;};
        inline const vector<StandardTemplateReference::AttributeValueList> & getAttributeValueList() const { DARABONBA_PTR_GET_CONST(attributeValueList_, vector<StandardTemplateReference::AttributeValueList>) };
        inline vector<StandardTemplateReference::AttributeValueList> getAttributeValueList() { DARABONBA_PTR_GET(attributeValueList_, vector<StandardTemplateReference::AttributeValueList>) };
        inline StandardTemplateReference& setAttributeValueList(const vector<StandardTemplateReference::AttributeValueList> & attributeValueList) { DARABONBA_PTR_SET_VALUE(attributeValueList_, attributeValueList) };
        inline StandardTemplateReference& setAttributeValueList(vector<StandardTemplateReference::AttributeValueList> && attributeValueList) { DARABONBA_PTR_SET_RVALUE(attributeValueList_, attributeValueList) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline StandardTemplateReference& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline StandardTemplateReference& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<vector<StandardTemplateReference::AttributeValueList>> attributeValueList_ {};
        // This parameter is required.
        shared_ptr<int64_t> id_ {};
        shared_ptr<int32_t> version_ {};
      };

      class StandardSetReference : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StandardSetReference& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, StandardSetReference& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        StandardSetReference() = default ;
        StandardSetReference(const StandardSetReference &) = default ;
        StandardSetReference(StandardSetReference &&) = default ;
        StandardSetReference(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StandardSetReference() = default ;
        StandardSetReference& operator=(const StandardSetReference &) = default ;
        StandardSetReference& operator=(StandardSetReference &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline StandardSetReference& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        // This parameter is required.
        shared_ptr<int64_t> id_ {};
      };

      class StandardGeneralMonitorConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StandardGeneralMonitorConfig& obj) { 
          DARABONBA_PTR_TO_JSON(StandardMonitorConfigList, standardMonitorConfigList_);
        };
        friend void from_json(const Darabonba::Json& j, StandardGeneralMonitorConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(StandardMonitorConfigList, standardMonitorConfigList_);
        };
        StandardGeneralMonitorConfig() = default ;
        StandardGeneralMonitorConfig(const StandardGeneralMonitorConfig &) = default ;
        StandardGeneralMonitorConfig(StandardGeneralMonitorConfig &&) = default ;
        StandardGeneralMonitorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StandardGeneralMonitorConfig() = default ;
        StandardGeneralMonitorConfig& operator=(const StandardGeneralMonitorConfig &) = default ;
        StandardGeneralMonitorConfig& operator=(StandardGeneralMonitorConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StandardMonitorConfigList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StandardMonitorConfigList& obj) { 
            DARABONBA_PTR_TO_JSON(AttributeId, attributeId_);
            DARABONBA_PTR_TO_JSON(AttributeMonitorConfig, attributeMonitorConfig_);
            DARABONBA_PTR_TO_JSON(AttributeName, attributeName_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(MonitorFrom, monitorFrom_);
            DARABONBA_PTR_TO_JSON(QualityRuleTemplate, qualityRuleTemplate_);
            DARABONBA_PTR_TO_JSON(RuleConfigList, ruleConfigList_);
            DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
            DARABONBA_PTR_TO_JSON(RuleSubType, ruleSubType_);
            DARABONBA_PTR_TO_JSON(RuleValidateConfigList, ruleValidateConfigList_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, StandardMonitorConfigList& obj) { 
            DARABONBA_PTR_FROM_JSON(AttributeId, attributeId_);
            DARABONBA_PTR_FROM_JSON(AttributeMonitorConfig, attributeMonitorConfig_);
            DARABONBA_PTR_FROM_JSON(AttributeName, attributeName_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(MonitorFrom, monitorFrom_);
            DARABONBA_PTR_FROM_JSON(QualityRuleTemplate, qualityRuleTemplate_);
            DARABONBA_PTR_FROM_JSON(RuleConfigList, ruleConfigList_);
            DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
            DARABONBA_PTR_FROM_JSON(RuleSubType, ruleSubType_);
            DARABONBA_PTR_FROM_JSON(RuleValidateConfigList, ruleValidateConfigList_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          StandardMonitorConfigList() = default ;
          StandardMonitorConfigList(const StandardMonitorConfigList &) = default ;
          StandardMonitorConfigList(StandardMonitorConfigList &&) = default ;
          StandardMonitorConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StandardMonitorConfigList() = default ;
          StandardMonitorConfigList& operator=(const StandardMonitorConfigList &) = default ;
          StandardMonitorConfigList& operator=(StandardMonitorConfigList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RuleValidateConfigList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RuleValidateConfigList& obj) { 
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Metric, metric_);
              DARABONBA_PTR_TO_JSON(MetricName, metricName_);
              DARABONBA_PTR_TO_JSON(Operator, operator_);
              DARABONBA_PTR_TO_JSON(ParentId, parentId_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, RuleValidateConfigList& obj) { 
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Metric, metric_);
              DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
              DARABONBA_PTR_FROM_JSON(Operator, operator_);
              DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            RuleValidateConfigList() = default ;
            RuleValidateConfigList(const RuleValidateConfigList &) = default ;
            RuleValidateConfigList(RuleValidateConfigList &&) = default ;
            RuleValidateConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RuleValidateConfigList() = default ;
            RuleValidateConfigList& operator=(const RuleValidateConfigList &) = default ;
            RuleValidateConfigList& operator=(RuleValidateConfigList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->id_ == nullptr
        && this->metric_ == nullptr && this->metricName_ == nullptr && this->operator_ == nullptr && this->parentId_ == nullptr && this->type_ == nullptr
        && this->value_ == nullptr; };
            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline RuleValidateConfigList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // metric Field Functions 
            bool hasMetric() const { return this->metric_ != nullptr;};
            void deleteMetric() { this->metric_ = nullptr;};
            inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
            inline RuleValidateConfigList& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


            // metricName Field Functions 
            bool hasMetricName() const { return this->metricName_ != nullptr;};
            void deleteMetricName() { this->metricName_ = nullptr;};
            inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
            inline RuleValidateConfigList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
            inline RuleValidateConfigList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


            // parentId Field Functions 
            bool hasParentId() const { return this->parentId_ != nullptr;};
            void deleteParentId() { this->parentId_ = nullptr;};
            inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
            inline RuleValidateConfigList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline RuleValidateConfigList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline RuleValidateConfigList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // This parameter is required.
            shared_ptr<string> id_ {};
            shared_ptr<string> metric_ {};
            shared_ptr<string> metricName_ {};
            // This parameter is required.
            shared_ptr<string> operator_ {};
            shared_ptr<string> parentId_ {};
            // This parameter is required.
            shared_ptr<string> type_ {};
            shared_ptr<string> value_ {};
          };

          class RuleConfigList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RuleConfigList& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, RuleConfigList& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            RuleConfigList() = default ;
            RuleConfigList(const RuleConfigList &) = default ;
            RuleConfigList(RuleConfigList &&) = default ;
            RuleConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RuleConfigList() = default ;
            RuleConfigList& operator=(const RuleConfigList &) = default ;
            RuleConfigList& operator=(RuleConfigList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline RuleConfigList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline RuleConfigList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // This parameter is required.
            shared_ptr<string> key_ {};
            // This parameter is required.
            shared_ptr<string> value_ {};
          };

          class QualityRuleTemplate : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const QualityRuleTemplate& obj) { 
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, QualityRuleTemplate& obj) { 
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            QualityRuleTemplate() = default ;
            QualityRuleTemplate(const QualityRuleTemplate &) = default ;
            QualityRuleTemplate(QualityRuleTemplate &&) = default ;
            QualityRuleTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~QualityRuleTemplate() = default ;
            QualityRuleTemplate& operator=(const QualityRuleTemplate &) = default ;
            QualityRuleTemplate& operator=(QualityRuleTemplate &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline QualityRuleTemplate& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline QualityRuleTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline QualityRuleTemplate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // This parameter is required.
            shared_ptr<int64_t> id_ {};
            // This parameter is required.
            shared_ptr<string> name_ {};
            // This parameter is required.
            shared_ptr<string> type_ {};
          };

          class AttributeMonitorConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AttributeMonitorConfig& obj) { 
              DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
              DARABONBA_PTR_TO_JSON(IsCaseSensitive, isCaseSensitive_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, AttributeMonitorConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
              DARABONBA_PTR_FROM_JSON(IsCaseSensitive, isCaseSensitive_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            AttributeMonitorConfig() = default ;
            AttributeMonitorConfig(const AttributeMonitorConfig &) = default ;
            AttributeMonitorConfig(AttributeMonitorConfig &&) = default ;
            AttributeMonitorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AttributeMonitorConfig() = default ;
            AttributeMonitorConfig& operator=(const AttributeMonitorConfig &) = default ;
            AttributeMonitorConfig& operator=(AttributeMonitorConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->columnName_ == nullptr
        && this->isCaseSensitive_ == nullptr && this->type_ == nullptr; };
            // columnName Field Functions 
            bool hasColumnName() const { return this->columnName_ != nullptr;};
            void deleteColumnName() { this->columnName_ = nullptr;};
            inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
            inline AttributeMonitorConfig& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


            // isCaseSensitive Field Functions 
            bool hasIsCaseSensitive() const { return this->isCaseSensitive_ != nullptr;};
            void deleteIsCaseSensitive() { this->isCaseSensitive_ = nullptr;};
            inline bool getIsCaseSensitive() const { DARABONBA_PTR_GET_DEFAULT(isCaseSensitive_, false) };
            inline AttributeMonitorConfig& setIsCaseSensitive(bool isCaseSensitive) { DARABONBA_PTR_SET_VALUE(isCaseSensitive_, isCaseSensitive) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline AttributeMonitorConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> columnName_ {};
            // This parameter is required.
            shared_ptr<bool> isCaseSensitive_ {};
            // This parameter is required.
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->attributeId_ == nullptr
        && this->attributeMonitorConfig_ == nullptr && this->attributeName_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->monitorFrom_ == nullptr
        && this->qualityRuleTemplate_ == nullptr && this->ruleConfigList_ == nullptr && this->ruleName_ == nullptr && this->ruleSubType_ == nullptr && this->ruleValidateConfigList_ == nullptr
        && this->type_ == nullptr; };
          // attributeId Field Functions 
          bool hasAttributeId() const { return this->attributeId_ != nullptr;};
          void deleteAttributeId() { this->attributeId_ = nullptr;};
          inline int64_t getAttributeId() const { DARABONBA_PTR_GET_DEFAULT(attributeId_, 0L) };
          inline StandardMonitorConfigList& setAttributeId(int64_t attributeId) { DARABONBA_PTR_SET_VALUE(attributeId_, attributeId) };


          // attributeMonitorConfig Field Functions 
          bool hasAttributeMonitorConfig() const { return this->attributeMonitorConfig_ != nullptr;};
          void deleteAttributeMonitorConfig() { this->attributeMonitorConfig_ = nullptr;};
          inline const StandardMonitorConfigList::AttributeMonitorConfig & getAttributeMonitorConfig() const { DARABONBA_PTR_GET_CONST(attributeMonitorConfig_, StandardMonitorConfigList::AttributeMonitorConfig) };
          inline StandardMonitorConfigList::AttributeMonitorConfig getAttributeMonitorConfig() { DARABONBA_PTR_GET(attributeMonitorConfig_, StandardMonitorConfigList::AttributeMonitorConfig) };
          inline StandardMonitorConfigList& setAttributeMonitorConfig(const StandardMonitorConfigList::AttributeMonitorConfig & attributeMonitorConfig) { DARABONBA_PTR_SET_VALUE(attributeMonitorConfig_, attributeMonitorConfig) };
          inline StandardMonitorConfigList& setAttributeMonitorConfig(StandardMonitorConfigList::AttributeMonitorConfig && attributeMonitorConfig) { DARABONBA_PTR_SET_RVALUE(attributeMonitorConfig_, attributeMonitorConfig) };


          // attributeName Field Functions 
          bool hasAttributeName() const { return this->attributeName_ != nullptr;};
          void deleteAttributeName() { this->attributeName_ = nullptr;};
          inline string getAttributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
          inline StandardMonitorConfigList& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline StandardMonitorConfigList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline StandardMonitorConfigList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // monitorFrom Field Functions 
          bool hasMonitorFrom() const { return this->monitorFrom_ != nullptr;};
          void deleteMonitorFrom() { this->monitorFrom_ = nullptr;};
          inline string getMonitorFrom() const { DARABONBA_PTR_GET_DEFAULT(monitorFrom_, "") };
          inline StandardMonitorConfigList& setMonitorFrom(string monitorFrom) { DARABONBA_PTR_SET_VALUE(monitorFrom_, monitorFrom) };


          // qualityRuleTemplate Field Functions 
          bool hasQualityRuleTemplate() const { return this->qualityRuleTemplate_ != nullptr;};
          void deleteQualityRuleTemplate() { this->qualityRuleTemplate_ = nullptr;};
          inline const StandardMonitorConfigList::QualityRuleTemplate & getQualityRuleTemplate() const { DARABONBA_PTR_GET_CONST(qualityRuleTemplate_, StandardMonitorConfigList::QualityRuleTemplate) };
          inline StandardMonitorConfigList::QualityRuleTemplate getQualityRuleTemplate() { DARABONBA_PTR_GET(qualityRuleTemplate_, StandardMonitorConfigList::QualityRuleTemplate) };
          inline StandardMonitorConfigList& setQualityRuleTemplate(const StandardMonitorConfigList::QualityRuleTemplate & qualityRuleTemplate) { DARABONBA_PTR_SET_VALUE(qualityRuleTemplate_, qualityRuleTemplate) };
          inline StandardMonitorConfigList& setQualityRuleTemplate(StandardMonitorConfigList::QualityRuleTemplate && qualityRuleTemplate) { DARABONBA_PTR_SET_RVALUE(qualityRuleTemplate_, qualityRuleTemplate) };


          // ruleConfigList Field Functions 
          bool hasRuleConfigList() const { return this->ruleConfigList_ != nullptr;};
          void deleteRuleConfigList() { this->ruleConfigList_ = nullptr;};
          inline const vector<StandardMonitorConfigList::RuleConfigList> & getRuleConfigList() const { DARABONBA_PTR_GET_CONST(ruleConfigList_, vector<StandardMonitorConfigList::RuleConfigList>) };
          inline vector<StandardMonitorConfigList::RuleConfigList> getRuleConfigList() { DARABONBA_PTR_GET(ruleConfigList_, vector<StandardMonitorConfigList::RuleConfigList>) };
          inline StandardMonitorConfigList& setRuleConfigList(const vector<StandardMonitorConfigList::RuleConfigList> & ruleConfigList) { DARABONBA_PTR_SET_VALUE(ruleConfigList_, ruleConfigList) };
          inline StandardMonitorConfigList& setRuleConfigList(vector<StandardMonitorConfigList::RuleConfigList> && ruleConfigList) { DARABONBA_PTR_SET_RVALUE(ruleConfigList_, ruleConfigList) };


          // ruleName Field Functions 
          bool hasRuleName() const { return this->ruleName_ != nullptr;};
          void deleteRuleName() { this->ruleName_ = nullptr;};
          inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
          inline StandardMonitorConfigList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


          // ruleSubType Field Functions 
          bool hasRuleSubType() const { return this->ruleSubType_ != nullptr;};
          void deleteRuleSubType() { this->ruleSubType_ = nullptr;};
          inline string getRuleSubType() const { DARABONBA_PTR_GET_DEFAULT(ruleSubType_, "") };
          inline StandardMonitorConfigList& setRuleSubType(string ruleSubType) { DARABONBA_PTR_SET_VALUE(ruleSubType_, ruleSubType) };


          // ruleValidateConfigList Field Functions 
          bool hasRuleValidateConfigList() const { return this->ruleValidateConfigList_ != nullptr;};
          void deleteRuleValidateConfigList() { this->ruleValidateConfigList_ = nullptr;};
          inline const vector<StandardMonitorConfigList::RuleValidateConfigList> & getRuleValidateConfigList() const { DARABONBA_PTR_GET_CONST(ruleValidateConfigList_, vector<StandardMonitorConfigList::RuleValidateConfigList>) };
          inline vector<StandardMonitorConfigList::RuleValidateConfigList> getRuleValidateConfigList() { DARABONBA_PTR_GET(ruleValidateConfigList_, vector<StandardMonitorConfigList::RuleValidateConfigList>) };
          inline StandardMonitorConfigList& setRuleValidateConfigList(const vector<StandardMonitorConfigList::RuleValidateConfigList> & ruleValidateConfigList) { DARABONBA_PTR_SET_VALUE(ruleValidateConfigList_, ruleValidateConfigList) };
          inline StandardMonitorConfigList& setRuleValidateConfigList(vector<StandardMonitorConfigList::RuleValidateConfigList> && ruleValidateConfigList) { DARABONBA_PTR_SET_RVALUE(ruleValidateConfigList_, ruleValidateConfigList) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline StandardMonitorConfigList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<int64_t> attributeId_ {};
          shared_ptr<StandardMonitorConfigList::AttributeMonitorConfig> attributeMonitorConfig_ {};
          shared_ptr<string> attributeName_ {};
          shared_ptr<string> description_ {};
          shared_ptr<int64_t> id_ {};
          // This parameter is required.
          shared_ptr<string> monitorFrom_ {};
          shared_ptr<StandardMonitorConfigList::QualityRuleTemplate> qualityRuleTemplate_ {};
          shared_ptr<vector<StandardMonitorConfigList::RuleConfigList>> ruleConfigList_ {};
          // This parameter is required.
          shared_ptr<string> ruleName_ {};
          shared_ptr<string> ruleSubType_ {};
          shared_ptr<vector<StandardMonitorConfigList::RuleValidateConfigList>> ruleValidateConfigList_ {};
          // This parameter is required.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->standardMonitorConfigList_ == nullptr; };
        // standardMonitorConfigList Field Functions 
        bool hasStandardMonitorConfigList() const { return this->standardMonitorConfigList_ != nullptr;};
        void deleteStandardMonitorConfigList() { this->standardMonitorConfigList_ = nullptr;};
        inline const vector<StandardGeneralMonitorConfig::StandardMonitorConfigList> & getStandardMonitorConfigList() const { DARABONBA_PTR_GET_CONST(standardMonitorConfigList_, vector<StandardGeneralMonitorConfig::StandardMonitorConfigList>) };
        inline vector<StandardGeneralMonitorConfig::StandardMonitorConfigList> getStandardMonitorConfigList() { DARABONBA_PTR_GET(standardMonitorConfigList_, vector<StandardGeneralMonitorConfig::StandardMonitorConfigList>) };
        inline StandardGeneralMonitorConfig& setStandardMonitorConfigList(const vector<StandardGeneralMonitorConfig::StandardMonitorConfigList> & standardMonitorConfigList) { DARABONBA_PTR_SET_VALUE(standardMonitorConfigList_, standardMonitorConfigList) };
        inline StandardGeneralMonitorConfig& setStandardMonitorConfigList(vector<StandardGeneralMonitorConfig::StandardMonitorConfigList> && standardMonitorConfigList) { DARABONBA_PTR_SET_RVALUE(standardMonitorConfigList_, standardMonitorConfigList) };


      protected:
        // This parameter is required.
        shared_ptr<vector<StandardGeneralMonitorConfig::StandardMonitorConfigList>> standardMonitorConfigList_ {};
      };

      class EffectiveTimeConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EffectiveTimeConfig& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, EffectiveTimeConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        EffectiveTimeConfig() = default ;
        EffectiveTimeConfig(const EffectiveTimeConfig &) = default ;
        EffectiveTimeConfig(EffectiveTimeConfig &&) = default ;
        EffectiveTimeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EffectiveTimeConfig() = default ;
        EffectiveTimeConfig& operator=(const EffectiveTimeConfig &) = default ;
        EffectiveTimeConfig& operator=(EffectiveTimeConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr && this->type_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline EffectiveTimeConfig& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline EffectiveTimeConfig& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline EffectiveTimeConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> endTime_ {};
        shared_ptr<string> startTime_ {};
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->effectiveTimeConfig_ == nullptr && this->needGenerateStandardCode_ == nullptr && this->owner_ == nullptr && this->standardGeneralMonitorConfig_ == nullptr && this->standardSetReference_ == nullptr
        && this->standardTemplateReference_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // effectiveTimeConfig Field Functions 
      bool hasEffectiveTimeConfig() const { return this->effectiveTimeConfig_ != nullptr;};
      void deleteEffectiveTimeConfig() { this->effectiveTimeConfig_ = nullptr;};
      inline const CreateCommand::EffectiveTimeConfig & getEffectiveTimeConfig() const { DARABONBA_PTR_GET_CONST(effectiveTimeConfig_, CreateCommand::EffectiveTimeConfig) };
      inline CreateCommand::EffectiveTimeConfig getEffectiveTimeConfig() { DARABONBA_PTR_GET(effectiveTimeConfig_, CreateCommand::EffectiveTimeConfig) };
      inline CreateCommand& setEffectiveTimeConfig(const CreateCommand::EffectiveTimeConfig & effectiveTimeConfig) { DARABONBA_PTR_SET_VALUE(effectiveTimeConfig_, effectiveTimeConfig) };
      inline CreateCommand& setEffectiveTimeConfig(CreateCommand::EffectiveTimeConfig && effectiveTimeConfig) { DARABONBA_PTR_SET_RVALUE(effectiveTimeConfig_, effectiveTimeConfig) };


      // needGenerateStandardCode Field Functions 
      bool hasNeedGenerateStandardCode() const { return this->needGenerateStandardCode_ != nullptr;};
      void deleteNeedGenerateStandardCode() { this->needGenerateStandardCode_ = nullptr;};
      inline bool getNeedGenerateStandardCode() const { DARABONBA_PTR_GET_DEFAULT(needGenerateStandardCode_, false) };
      inline CreateCommand& setNeedGenerateStandardCode(bool needGenerateStandardCode) { DARABONBA_PTR_SET_VALUE(needGenerateStandardCode_, needGenerateStandardCode) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline CreateCommand& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // standardGeneralMonitorConfig Field Functions 
      bool hasStandardGeneralMonitorConfig() const { return this->standardGeneralMonitorConfig_ != nullptr;};
      void deleteStandardGeneralMonitorConfig() { this->standardGeneralMonitorConfig_ = nullptr;};
      inline const CreateCommand::StandardGeneralMonitorConfig & getStandardGeneralMonitorConfig() const { DARABONBA_PTR_GET_CONST(standardGeneralMonitorConfig_, CreateCommand::StandardGeneralMonitorConfig) };
      inline CreateCommand::StandardGeneralMonitorConfig getStandardGeneralMonitorConfig() { DARABONBA_PTR_GET(standardGeneralMonitorConfig_, CreateCommand::StandardGeneralMonitorConfig) };
      inline CreateCommand& setStandardGeneralMonitorConfig(const CreateCommand::StandardGeneralMonitorConfig & standardGeneralMonitorConfig) { DARABONBA_PTR_SET_VALUE(standardGeneralMonitorConfig_, standardGeneralMonitorConfig) };
      inline CreateCommand& setStandardGeneralMonitorConfig(CreateCommand::StandardGeneralMonitorConfig && standardGeneralMonitorConfig) { DARABONBA_PTR_SET_RVALUE(standardGeneralMonitorConfig_, standardGeneralMonitorConfig) };


      // standardSetReference Field Functions 
      bool hasStandardSetReference() const { return this->standardSetReference_ != nullptr;};
      void deleteStandardSetReference() { this->standardSetReference_ = nullptr;};
      inline const CreateCommand::StandardSetReference & getStandardSetReference() const { DARABONBA_PTR_GET_CONST(standardSetReference_, CreateCommand::StandardSetReference) };
      inline CreateCommand::StandardSetReference getStandardSetReference() { DARABONBA_PTR_GET(standardSetReference_, CreateCommand::StandardSetReference) };
      inline CreateCommand& setStandardSetReference(const CreateCommand::StandardSetReference & standardSetReference) { DARABONBA_PTR_SET_VALUE(standardSetReference_, standardSetReference) };
      inline CreateCommand& setStandardSetReference(CreateCommand::StandardSetReference && standardSetReference) { DARABONBA_PTR_SET_RVALUE(standardSetReference_, standardSetReference) };


      // standardTemplateReference Field Functions 
      bool hasStandardTemplateReference() const { return this->standardTemplateReference_ != nullptr;};
      void deleteStandardTemplateReference() { this->standardTemplateReference_ = nullptr;};
      inline const CreateCommand::StandardTemplateReference & getStandardTemplateReference() const { DARABONBA_PTR_GET_CONST(standardTemplateReference_, CreateCommand::StandardTemplateReference) };
      inline CreateCommand::StandardTemplateReference getStandardTemplateReference() { DARABONBA_PTR_GET(standardTemplateReference_, CreateCommand::StandardTemplateReference) };
      inline CreateCommand& setStandardTemplateReference(const CreateCommand::StandardTemplateReference & standardTemplateReference) { DARABONBA_PTR_SET_VALUE(standardTemplateReference_, standardTemplateReference) };
      inline CreateCommand& setStandardTemplateReference(CreateCommand::StandardTemplateReference && standardTemplateReference) { DARABONBA_PTR_SET_RVALUE(standardTemplateReference_, standardTemplateReference) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<CreateCommand::EffectiveTimeConfig> effectiveTimeConfig_ {};
      shared_ptr<bool> needGenerateStandardCode_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<CreateCommand::StandardGeneralMonitorConfig> standardGeneralMonitorConfig_ {};
      // This parameter is required.
      shared_ptr<CreateCommand::StandardSetReference> standardSetReference_ {};
      // This parameter is required.
      shared_ptr<CreateCommand::StandardTemplateReference> standardTemplateReference_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateStandardRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateStandardRequest::CreateCommand) };
    inline CreateStandardRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateStandardRequest::CreateCommand) };
    inline CreateStandardRequest& setCreateCommand(const CreateStandardRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateStandardRequest& setCreateCommand(CreateStandardRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateStandardRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateStandardRequest::CreateCommand> createCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
