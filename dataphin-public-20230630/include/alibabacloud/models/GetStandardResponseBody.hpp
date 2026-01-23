// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTANDARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTANDARDRESPONSEBODY_HPP_
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
  class GetStandardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStandardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StandardInfo, standardInfo_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStandardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StandardInfo, standardInfo_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStandardResponseBody() = default ;
    GetStandardResponseBody(const GetStandardResponseBody &) = default ;
    GetStandardResponseBody(GetStandardResponseBody &&) = default ;
    GetStandardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStandardResponseBody() = default ;
    GetStandardResponseBody& operator=(const GetStandardResponseBody &) = default ;
    GetStandardResponseBody& operator=(GetStandardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StandardInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StandardInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AttributeWithValueList, attributeWithValueList_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EffectiveTimeConfig, effectiveTimeConfig_);
        DARABONBA_PTR_TO_JSON(EnglishName, englishName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
        DARABONBA_PTR_TO_JSON(LookupTableRelations, lookupTableRelations_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Stage, stage_);
        DARABONBA_PTR_TO_JSON(StandardGeneralMonitorConfig, standardGeneralMonitorConfig_);
        DARABONBA_PTR_TO_JSON(StandardRelations, standardRelations_);
        DARABONBA_PTR_TO_JSON(StandardSet, standardSet_);
        DARABONBA_PTR_TO_JSON(StandardTemplate, standardTemplate_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, StandardInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AttributeWithValueList, attributeWithValueList_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EffectiveTimeConfig, effectiveTimeConfig_);
        DARABONBA_PTR_FROM_JSON(EnglishName, englishName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
        DARABONBA_PTR_FROM_JSON(LookupTableRelations, lookupTableRelations_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Stage, stage_);
        DARABONBA_PTR_FROM_JSON(StandardGeneralMonitorConfig, standardGeneralMonitorConfig_);
        DARABONBA_PTR_FROM_JSON(StandardRelations, standardRelations_);
        DARABONBA_PTR_FROM_JSON(StandardSet, standardSet_);
        DARABONBA_PTR_FROM_JSON(StandardTemplate, standardTemplate_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      StandardInfo() = default ;
      StandardInfo(const StandardInfo &) = default ;
      StandardInfo(StandardInfo &&) = default ;
      StandardInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StandardInfo() = default ;
      StandardInfo& operator=(const StandardInfo &) = default ;
      StandardInfo& operator=(StandardInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StandardTemplate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StandardTemplate& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(TemplateFrom, templateFrom_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, StandardTemplate& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(TemplateFrom, templateFrom_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        StandardTemplate() = default ;
        StandardTemplate(const StandardTemplate &) = default ;
        StandardTemplate(StandardTemplate &&) = default ;
        StandardTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StandardTemplate() = default ;
        StandardTemplate& operator=(const StandardTemplate &) = default ;
        StandardTemplate& operator=(StandardTemplate &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->templateFrom_ == nullptr && this->version_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline StandardTemplate& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline StandardTemplate& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline StandardTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // templateFrom Field Functions 
        bool hasTemplateFrom() const { return this->templateFrom_ != nullptr;};
        void deleteTemplateFrom() { this->templateFrom_ = nullptr;};
        inline string getTemplateFrom() const { DARABONBA_PTR_GET_DEFAULT(templateFrom_, "") };
        inline StandardTemplate& setTemplateFrom(string templateFrom) { DARABONBA_PTR_SET_VALUE(templateFrom_, templateFrom) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline StandardTemplate& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> templateFrom_ {};
        shared_ptr<int32_t> version_ {};
      };

      class StandardSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StandardSet& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Directory, directory_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, StandardSet& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Directory, directory_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        StandardSet() = default ;
        StandardSet(const StandardSet &) = default ;
        StandardSet(StandardSet &&) = default ;
        StandardSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StandardSet() = default ;
        StandardSet& operator=(const StandardSet &) = default ;
        StandardSet& operator=(StandardSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->directory_ == nullptr && this->id_ == nullptr && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline StandardSet& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // directory Field Functions 
        bool hasDirectory() const { return this->directory_ != nullptr;};
        void deleteDirectory() { this->directory_ = nullptr;};
        inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
        inline StandardSet& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline StandardSet& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline StandardSet& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> directory_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
      };

      class StandardRelations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StandardRelations& obj) { 
          DARABONBA_PTR_TO_JSON(RelationType, relationType_);
          DARABONBA_PTR_TO_JSON(StandardId, standardId_);
          DARABONBA_PTR_TO_JSON(StandardStage, standardStage_);
          DARABONBA_PTR_TO_JSON(StandardStatus, standardStatus_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, StandardRelations& obj) { 
          DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
          DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
          DARABONBA_PTR_FROM_JSON(StandardStage, standardStage_);
          DARABONBA_PTR_FROM_JSON(StandardStatus, standardStatus_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        StandardRelations() = default ;
        StandardRelations(const StandardRelations &) = default ;
        StandardRelations(StandardRelations &&) = default ;
        StandardRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StandardRelations() = default ;
        StandardRelations& operator=(const StandardRelations &) = default ;
        StandardRelations& operator=(StandardRelations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->relationType_ == nullptr
        && this->standardId_ == nullptr && this->standardStage_ == nullptr && this->standardStatus_ == nullptr && this->version_ == nullptr; };
        // relationType Field Functions 
        bool hasRelationType() const { return this->relationType_ != nullptr;};
        void deleteRelationType() { this->relationType_ = nullptr;};
        inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
        inline StandardRelations& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


        // standardId Field Functions 
        bool hasStandardId() const { return this->standardId_ != nullptr;};
        void deleteStandardId() { this->standardId_ = nullptr;};
        inline int64_t getStandardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
        inline StandardRelations& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


        // standardStage Field Functions 
        bool hasStandardStage() const { return this->standardStage_ != nullptr;};
        void deleteStandardStage() { this->standardStage_ = nullptr;};
        inline string getStandardStage() const { DARABONBA_PTR_GET_DEFAULT(standardStage_, "") };
        inline StandardRelations& setStandardStage(string standardStage) { DARABONBA_PTR_SET_VALUE(standardStage_, standardStage) };


        // standardStatus Field Functions 
        bool hasStandardStatus() const { return this->standardStatus_ != nullptr;};
        void deleteStandardStatus() { this->standardStatus_ = nullptr;};
        inline string getStandardStatus() const { DARABONBA_PTR_GET_DEFAULT(standardStatus_, "") };
        inline StandardRelations& setStandardStatus(string standardStatus) { DARABONBA_PTR_SET_VALUE(standardStatus_, standardStatus) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline StandardRelations& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> relationType_ {};
        shared_ptr<int64_t> standardId_ {};
        shared_ptr<string> standardStage_ {};
        shared_ptr<string> standardStatus_ {};
        shared_ptr<int32_t> version_ {};
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
            shared_ptr<string> id_ {};
            shared_ptr<string> metric_ {};
            shared_ptr<string> metricName_ {};
            shared_ptr<string> operator_ {};
            shared_ptr<string> parentId_ {};
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
            shared_ptr<string> key_ {};
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
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> name_ {};
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
            shared_ptr<bool> isCaseSensitive_ {};
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
          shared_ptr<string> monitorFrom_ {};
          shared_ptr<StandardMonitorConfigList::QualityRuleTemplate> qualityRuleTemplate_ {};
          shared_ptr<vector<StandardMonitorConfigList::RuleConfigList>> ruleConfigList_ {};
          shared_ptr<string> ruleName_ {};
          shared_ptr<string> ruleSubType_ {};
          shared_ptr<vector<StandardMonitorConfigList::RuleValidateConfigList>> ruleValidateConfigList_ {};
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
        shared_ptr<vector<StandardGeneralMonitorConfig::StandardMonitorConfigList>> standardMonitorConfigList_ {};
      };

      class Owner : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Owner& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Owner& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Owner() = default ;
        Owner(const Owner &) = default ;
        Owner(Owner &&) = default ;
        Owner(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Owner() = default ;
        Owner& operator=(const Owner &) = default ;
        Owner& operator=(Owner &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Owner& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Owner& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      class LookupTableRelations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LookupTableRelations& obj) { 
          DARABONBA_PTR_TO_JSON(AttributeCode, attributeCode_);
          DARABONBA_PTR_TO_JSON(AttributeId, attributeId_);
          DARABONBA_PTR_TO_JSON(AttributeName, attributeName_);
          DARABONBA_PTR_TO_JSON(LookupTableCode, lookupTableCode_);
          DARABONBA_PTR_TO_JSON(LookupTableId, lookupTableId_);
        };
        friend void from_json(const Darabonba::Json& j, LookupTableRelations& obj) { 
          DARABONBA_PTR_FROM_JSON(AttributeCode, attributeCode_);
          DARABONBA_PTR_FROM_JSON(AttributeId, attributeId_);
          DARABONBA_PTR_FROM_JSON(AttributeName, attributeName_);
          DARABONBA_PTR_FROM_JSON(LookupTableCode, lookupTableCode_);
          DARABONBA_PTR_FROM_JSON(LookupTableId, lookupTableId_);
        };
        LookupTableRelations() = default ;
        LookupTableRelations(const LookupTableRelations &) = default ;
        LookupTableRelations(LookupTableRelations &&) = default ;
        LookupTableRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LookupTableRelations() = default ;
        LookupTableRelations& operator=(const LookupTableRelations &) = default ;
        LookupTableRelations& operator=(LookupTableRelations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attributeCode_ == nullptr
        && this->attributeId_ == nullptr && this->attributeName_ == nullptr && this->lookupTableCode_ == nullptr && this->lookupTableId_ == nullptr; };
        // attributeCode Field Functions 
        bool hasAttributeCode() const { return this->attributeCode_ != nullptr;};
        void deleteAttributeCode() { this->attributeCode_ = nullptr;};
        inline string getAttributeCode() const { DARABONBA_PTR_GET_DEFAULT(attributeCode_, "") };
        inline LookupTableRelations& setAttributeCode(string attributeCode) { DARABONBA_PTR_SET_VALUE(attributeCode_, attributeCode) };


        // attributeId Field Functions 
        bool hasAttributeId() const { return this->attributeId_ != nullptr;};
        void deleteAttributeId() { this->attributeId_ = nullptr;};
        inline int64_t getAttributeId() const { DARABONBA_PTR_GET_DEFAULT(attributeId_, 0L) };
        inline LookupTableRelations& setAttributeId(int64_t attributeId) { DARABONBA_PTR_SET_VALUE(attributeId_, attributeId) };


        // attributeName Field Functions 
        bool hasAttributeName() const { return this->attributeName_ != nullptr;};
        void deleteAttributeName() { this->attributeName_ = nullptr;};
        inline string getAttributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
        inline LookupTableRelations& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


        // lookupTableCode Field Functions 
        bool hasLookupTableCode() const { return this->lookupTableCode_ != nullptr;};
        void deleteLookupTableCode() { this->lookupTableCode_ = nullptr;};
        inline string getLookupTableCode() const { DARABONBA_PTR_GET_DEFAULT(lookupTableCode_, "") };
        inline LookupTableRelations& setLookupTableCode(string lookupTableCode) { DARABONBA_PTR_SET_VALUE(lookupTableCode_, lookupTableCode) };


        // lookupTableId Field Functions 
        bool hasLookupTableId() const { return this->lookupTableId_ != nullptr;};
        void deleteLookupTableId() { this->lookupTableId_ = nullptr;};
        inline int64_t getLookupTableId() const { DARABONBA_PTR_GET_DEFAULT(lookupTableId_, 0L) };
        inline LookupTableRelations& setLookupTableId(int64_t lookupTableId) { DARABONBA_PTR_SET_VALUE(lookupTableId_, lookupTableId) };


      protected:
        shared_ptr<string> attributeCode_ {};
        shared_ptr<int64_t> attributeId_ {};
        shared_ptr<string> attributeName_ {};
        shared_ptr<string> lookupTableCode_ {};
        shared_ptr<int64_t> lookupTableId_ {};
      };

      class LastModifier : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LastModifier& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, LastModifier& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        LastModifier() = default ;
        LastModifier(const LastModifier &) = default ;
        LastModifier(LastModifier &&) = default ;
        LastModifier(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LastModifier() = default ;
        LastModifier& operator=(const LastModifier &) = default ;
        LastModifier& operator=(LastModifier &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline LastModifier& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline LastModifier& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
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
        shared_ptr<string> type_ {};
      };

      class Creator : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Creator& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Creator& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Creator() = default ;
        Creator(const Creator &) = default ;
        Creator(Creator &&) = default ;
        Creator(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Creator() = default ;
        Creator& operator=(const Creator &) = default ;
        Creator& operator=(Creator &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Creator& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Creator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      class AttributeWithValueList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttributeWithValueList& obj) { 
          DARABONBA_PTR_TO_JSON(Attribute, attribute_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AttributeWithValueList& obj) { 
          DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        class Attribute : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Attribute& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(EnableMonitorConfig, enableMonitorConfig_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(MonitorConfig, monitorConfig_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(RefAttribute, refAttribute_);
            DARABONBA_PTR_TO_JSON(Required, required_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(ValueConfig, valueConfig_);
          };
          friend void from_json(const Darabonba::Json& j, Attribute& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(EnableMonitorConfig, enableMonitorConfig_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(MonitorConfig, monitorConfig_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(RefAttribute, refAttribute_);
            DARABONBA_PTR_FROM_JSON(Required, required_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(ValueConfig, valueConfig_);
          };
          Attribute() = default ;
          Attribute(const Attribute &) = default ;
          Attribute(Attribute &&) = default ;
          Attribute(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Attribute() = default ;
          Attribute& operator=(const Attribute &) = default ;
          Attribute& operator=(Attribute &&) = default ;
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
              DARABONBA_PTR_TO_JSON(ValueRange, valueRange_);
            };
            friend void from_json(const Darabonba::Json& j, ValueConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(DataType, dataType_);
              DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_FROM_JSON(Length, length_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(ValueRange, valueRange_);
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
            class ValueRange : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ValueRange& obj) { 
                DARABONBA_PTR_TO_JSON(DataphinAttributeType, dataphinAttributeType_);
                DARABONBA_PTR_TO_JSON(LookupTableReference, lookupTableReference_);
                DARABONBA_PTR_TO_JSON(MinMaxValueConfig, minMaxValueConfig_);
                DARABONBA_PTR_TO_JSON(ValueConstraint, valueConstraint_);
                DARABONBA_PTR_TO_JSON(ValueList, valueList_);
              };
              friend void from_json(const Darabonba::Json& j, ValueRange& obj) { 
                DARABONBA_PTR_FROM_JSON(DataphinAttributeType, dataphinAttributeType_);
                DARABONBA_PTR_FROM_JSON(LookupTableReference, lookupTableReference_);
                DARABONBA_PTR_FROM_JSON(MinMaxValueConfig, minMaxValueConfig_);
                DARABONBA_PTR_FROM_JSON(ValueConstraint, valueConstraint_);
                DARABONBA_PTR_FROM_JSON(ValueList, valueList_);
              };
              ValueRange() = default ;
              ValueRange(const ValueRange &) = default ;
              ValueRange(ValueRange &&) = default ;
              ValueRange(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ValueRange() = default ;
              ValueRange& operator=(const ValueRange &) = default ;
              ValueRange& operator=(ValueRange &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class MinMaxValueConfig : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const MinMaxValueConfig& obj) { 
                  DARABONBA_PTR_TO_JSON(IncludeMaxValue, includeMaxValue_);
                  DARABONBA_PTR_TO_JSON(IncludeMinValue, includeMinValue_);
                  DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
                  DARABONBA_PTR_TO_JSON(MinValue, minValue_);
                };
                friend void from_json(const Darabonba::Json& j, MinMaxValueConfig& obj) { 
                  DARABONBA_PTR_FROM_JSON(IncludeMaxValue, includeMaxValue_);
                  DARABONBA_PTR_FROM_JSON(IncludeMinValue, includeMinValue_);
                  DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
                  DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
                };
                MinMaxValueConfig() = default ;
                MinMaxValueConfig(const MinMaxValueConfig &) = default ;
                MinMaxValueConfig(MinMaxValueConfig &&) = default ;
                MinMaxValueConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~MinMaxValueConfig() = default ;
                MinMaxValueConfig& operator=(const MinMaxValueConfig &) = default ;
                MinMaxValueConfig& operator=(MinMaxValueConfig &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->includeMaxValue_ == nullptr
        && this->includeMinValue_ == nullptr && this->maxValue_ == nullptr && this->minValue_ == nullptr; };
                // includeMaxValue Field Functions 
                bool hasIncludeMaxValue() const { return this->includeMaxValue_ != nullptr;};
                void deleteIncludeMaxValue() { this->includeMaxValue_ = nullptr;};
                inline bool getIncludeMaxValue() const { DARABONBA_PTR_GET_DEFAULT(includeMaxValue_, false) };
                inline MinMaxValueConfig& setIncludeMaxValue(bool includeMaxValue) { DARABONBA_PTR_SET_VALUE(includeMaxValue_, includeMaxValue) };


                // includeMinValue Field Functions 
                bool hasIncludeMinValue() const { return this->includeMinValue_ != nullptr;};
                void deleteIncludeMinValue() { this->includeMinValue_ = nullptr;};
                inline bool getIncludeMinValue() const { DARABONBA_PTR_GET_DEFAULT(includeMinValue_, false) };
                inline MinMaxValueConfig& setIncludeMinValue(bool includeMinValue) { DARABONBA_PTR_SET_VALUE(includeMinValue_, includeMinValue) };


                // maxValue Field Functions 
                bool hasMaxValue() const { return this->maxValue_ != nullptr;};
                void deleteMaxValue() { this->maxValue_ = nullptr;};
                inline string getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, "") };
                inline MinMaxValueConfig& setMaxValue(string maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


                // minValue Field Functions 
                bool hasMinValue() const { return this->minValue_ != nullptr;};
                void deleteMinValue() { this->minValue_ = nullptr;};
                inline string getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, "") };
                inline MinMaxValueConfig& setMinValue(string minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


              protected:
                shared_ptr<bool> includeMaxValue_ {};
                shared_ptr<bool> includeMinValue_ {};
                shared_ptr<string> maxValue_ {};
                shared_ptr<string> minValue_ {};
              };

              class LookupTableReference : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const LookupTableReference& obj) { 
                  DARABONBA_PTR_TO_JSON(Column, column_);
                  DARABONBA_PTR_TO_JSON(LookupTableId, lookupTableId_);
                };
                friend void from_json(const Darabonba::Json& j, LookupTableReference& obj) { 
                  DARABONBA_PTR_FROM_JSON(Column, column_);
                  DARABONBA_PTR_FROM_JSON(LookupTableId, lookupTableId_);
                };
                LookupTableReference() = default ;
                LookupTableReference(const LookupTableReference &) = default ;
                LookupTableReference(LookupTableReference &&) = default ;
                LookupTableReference(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~LookupTableReference() = default ;
                LookupTableReference& operator=(const LookupTableReference &) = default ;
                LookupTableReference& operator=(LookupTableReference &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->column_ == nullptr
        && this->lookupTableId_ == nullptr; };
                // column Field Functions 
                bool hasColumn() const { return this->column_ != nullptr;};
                void deleteColumn() { this->column_ = nullptr;};
                inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
                inline LookupTableReference& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


                // lookupTableId Field Functions 
                bool hasLookupTableId() const { return this->lookupTableId_ != nullptr;};
                void deleteLookupTableId() { this->lookupTableId_ = nullptr;};
                inline int64_t getLookupTableId() const { DARABONBA_PTR_GET_DEFAULT(lookupTableId_, 0L) };
                inline LookupTableReference& setLookupTableId(int64_t lookupTableId) { DARABONBA_PTR_SET_VALUE(lookupTableId_, lookupTableId) };


              protected:
                shared_ptr<string> column_ {};
                shared_ptr<int64_t> lookupTableId_ {};
              };

              virtual bool empty() const override { return this->dataphinAttributeType_ == nullptr
        && this->lookupTableReference_ == nullptr && this->minMaxValueConfig_ == nullptr && this->valueConstraint_ == nullptr && this->valueList_ == nullptr; };
              // dataphinAttributeType Field Functions 
              bool hasDataphinAttributeType() const { return this->dataphinAttributeType_ != nullptr;};
              void deleteDataphinAttributeType() { this->dataphinAttributeType_ = nullptr;};
              inline string getDataphinAttributeType() const { DARABONBA_PTR_GET_DEFAULT(dataphinAttributeType_, "") };
              inline ValueRange& setDataphinAttributeType(string dataphinAttributeType) { DARABONBA_PTR_SET_VALUE(dataphinAttributeType_, dataphinAttributeType) };


              // lookupTableReference Field Functions 
              bool hasLookupTableReference() const { return this->lookupTableReference_ != nullptr;};
              void deleteLookupTableReference() { this->lookupTableReference_ = nullptr;};
              inline const ValueRange::LookupTableReference & getLookupTableReference() const { DARABONBA_PTR_GET_CONST(lookupTableReference_, ValueRange::LookupTableReference) };
              inline ValueRange::LookupTableReference getLookupTableReference() { DARABONBA_PTR_GET(lookupTableReference_, ValueRange::LookupTableReference) };
              inline ValueRange& setLookupTableReference(const ValueRange::LookupTableReference & lookupTableReference) { DARABONBA_PTR_SET_VALUE(lookupTableReference_, lookupTableReference) };
              inline ValueRange& setLookupTableReference(ValueRange::LookupTableReference && lookupTableReference) { DARABONBA_PTR_SET_RVALUE(lookupTableReference_, lookupTableReference) };


              // minMaxValueConfig Field Functions 
              bool hasMinMaxValueConfig() const { return this->minMaxValueConfig_ != nullptr;};
              void deleteMinMaxValueConfig() { this->minMaxValueConfig_ = nullptr;};
              inline const ValueRange::MinMaxValueConfig & getMinMaxValueConfig() const { DARABONBA_PTR_GET_CONST(minMaxValueConfig_, ValueRange::MinMaxValueConfig) };
              inline ValueRange::MinMaxValueConfig getMinMaxValueConfig() { DARABONBA_PTR_GET(minMaxValueConfig_, ValueRange::MinMaxValueConfig) };
              inline ValueRange& setMinMaxValueConfig(const ValueRange::MinMaxValueConfig & minMaxValueConfig) { DARABONBA_PTR_SET_VALUE(minMaxValueConfig_, minMaxValueConfig) };
              inline ValueRange& setMinMaxValueConfig(ValueRange::MinMaxValueConfig && minMaxValueConfig) { DARABONBA_PTR_SET_RVALUE(minMaxValueConfig_, minMaxValueConfig) };


              // valueConstraint Field Functions 
              bool hasValueConstraint() const { return this->valueConstraint_ != nullptr;};
              void deleteValueConstraint() { this->valueConstraint_ = nullptr;};
              inline string getValueConstraint() const { DARABONBA_PTR_GET_DEFAULT(valueConstraint_, "") };
              inline ValueRange& setValueConstraint(string valueConstraint) { DARABONBA_PTR_SET_VALUE(valueConstraint_, valueConstraint) };


              // valueList Field Functions 
              bool hasValueList() const { return this->valueList_ != nullptr;};
              void deleteValueList() { this->valueList_ = nullptr;};
              inline const vector<string> & getValueList() const { DARABONBA_PTR_GET_CONST(valueList_, vector<string>) };
              inline vector<string> getValueList() { DARABONBA_PTR_GET(valueList_, vector<string>) };
              inline ValueRange& setValueList(const vector<string> & valueList) { DARABONBA_PTR_SET_VALUE(valueList_, valueList) };
              inline ValueRange& setValueList(vector<string> && valueList) { DARABONBA_PTR_SET_RVALUE(valueList_, valueList) };


            protected:
              shared_ptr<string> dataphinAttributeType_ {};
              shared_ptr<ValueRange::LookupTableReference> lookupTableReference_ {};
              shared_ptr<ValueRange::MinMaxValueConfig> minMaxValueConfig_ {};
              shared_ptr<string> valueConstraint_ {};
              shared_ptr<vector<string>> valueList_ {};
            };

            virtual bool empty() const override { return this->dataType_ == nullptr
        && this->defaultValue_ == nullptr && this->length_ == nullptr && this->type_ == nullptr && this->valueRange_ == nullptr; };
            // dataType Field Functions 
            bool hasDataType() const { return this->dataType_ != nullptr;};
            void deleteDataType() { this->dataType_ = nullptr;};
            inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
            inline ValueConfig& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


            // defaultValue Field Functions 
            bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
            void deleteDefaultValue() { this->defaultValue_ = nullptr;};
            inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
            inline ValueConfig& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


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


            // valueRange Field Functions 
            bool hasValueRange() const { return this->valueRange_ != nullptr;};
            void deleteValueRange() { this->valueRange_ = nullptr;};
            inline const ValueConfig::ValueRange & getValueRange() const { DARABONBA_PTR_GET_CONST(valueRange_, ValueConfig::ValueRange) };
            inline ValueConfig::ValueRange getValueRange() { DARABONBA_PTR_GET(valueRange_, ValueConfig::ValueRange) };
            inline ValueConfig& setValueRange(const ValueConfig::ValueRange & valueRange) { DARABONBA_PTR_SET_VALUE(valueRange_, valueRange) };
            inline ValueConfig& setValueRange(ValueConfig::ValueRange && valueRange) { DARABONBA_PTR_SET_RVALUE(valueRange_, valueRange) };


          protected:
            shared_ptr<string> dataType_ {};
            shared_ptr<string> defaultValue_ {};
            shared_ptr<int32_t> length_ {};
            shared_ptr<string> type_ {};
            shared_ptr<ValueConfig::ValueRange> valueRange_ {};
          };

          class RefAttribute : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RefAttribute& obj) { 
              DARABONBA_PTR_TO_JSON(AttributeFromInfo, attributeFromInfo_);
              DARABONBA_PTR_TO_JSON(AttributeId, attributeId_);
            };
            friend void from_json(const Darabonba::Json& j, RefAttribute& obj) { 
              DARABONBA_PTR_FROM_JSON(AttributeFromInfo, attributeFromInfo_);
              DARABONBA_PTR_FROM_JSON(AttributeId, attributeId_);
            };
            RefAttribute() = default ;
            RefAttribute(const RefAttribute &) = default ;
            RefAttribute(RefAttribute &&) = default ;
            RefAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RefAttribute() = default ;
            RefAttribute& operator=(const RefAttribute &) = default ;
            RefAttribute& operator=(RefAttribute &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class AttributeFromInfo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const AttributeFromInfo& obj) { 
                DARABONBA_PTR_TO_JSON(AttributeFrom, attributeFrom_);
                DARABONBA_PTR_TO_JSON(StandardReference, standardReference_);
              };
              friend void from_json(const Darabonba::Json& j, AttributeFromInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(AttributeFrom, attributeFrom_);
                DARABONBA_PTR_FROM_JSON(StandardReference, standardReference_);
              };
              AttributeFromInfo() = default ;
              AttributeFromInfo(const AttributeFromInfo &) = default ;
              AttributeFromInfo(AttributeFromInfo &&) = default ;
              AttributeFromInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~AttributeFromInfo() = default ;
              AttributeFromInfo& operator=(const AttributeFromInfo &) = default ;
              AttributeFromInfo& operator=(AttributeFromInfo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class StandardReference : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const StandardReference& obj) { 
                  DARABONBA_PTR_TO_JSON(StandardId, standardId_);
                  DARABONBA_PTR_TO_JSON(Version, version_);
                };
                friend void from_json(const Darabonba::Json& j, StandardReference& obj) { 
                  DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
                  DARABONBA_PTR_FROM_JSON(Version, version_);
                };
                StandardReference() = default ;
                StandardReference(const StandardReference &) = default ;
                StandardReference(StandardReference &&) = default ;
                StandardReference(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~StandardReference() = default ;
                StandardReference& operator=(const StandardReference &) = default ;
                StandardReference& operator=(StandardReference &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->standardId_ == nullptr
        && this->version_ == nullptr; };
                // standardId Field Functions 
                bool hasStandardId() const { return this->standardId_ != nullptr;};
                void deleteStandardId() { this->standardId_ = nullptr;};
                inline int64_t getStandardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
                inline StandardReference& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


                // version Field Functions 
                bool hasVersion() const { return this->version_ != nullptr;};
                void deleteVersion() { this->version_ = nullptr;};
                inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
                inline StandardReference& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


              protected:
                shared_ptr<int64_t> standardId_ {};
                shared_ptr<int32_t> version_ {};
              };

              virtual bool empty() const override { return this->attributeFrom_ == nullptr
        && this->standardReference_ == nullptr; };
              // attributeFrom Field Functions 
              bool hasAttributeFrom() const { return this->attributeFrom_ != nullptr;};
              void deleteAttributeFrom() { this->attributeFrom_ = nullptr;};
              inline string getAttributeFrom() const { DARABONBA_PTR_GET_DEFAULT(attributeFrom_, "") };
              inline AttributeFromInfo& setAttributeFrom(string attributeFrom) { DARABONBA_PTR_SET_VALUE(attributeFrom_, attributeFrom) };


              // standardReference Field Functions 
              bool hasStandardReference() const { return this->standardReference_ != nullptr;};
              void deleteStandardReference() { this->standardReference_ = nullptr;};
              inline const AttributeFromInfo::StandardReference & getStandardReference() const { DARABONBA_PTR_GET_CONST(standardReference_, AttributeFromInfo::StandardReference) };
              inline AttributeFromInfo::StandardReference getStandardReference() { DARABONBA_PTR_GET(standardReference_, AttributeFromInfo::StandardReference) };
              inline AttributeFromInfo& setStandardReference(const AttributeFromInfo::StandardReference & standardReference) { DARABONBA_PTR_SET_VALUE(standardReference_, standardReference) };
              inline AttributeFromInfo& setStandardReference(AttributeFromInfo::StandardReference && standardReference) { DARABONBA_PTR_SET_RVALUE(standardReference_, standardReference) };


            protected:
              shared_ptr<string> attributeFrom_ {};
              shared_ptr<AttributeFromInfo::StandardReference> standardReference_ {};
            };

            virtual bool empty() const override { return this->attributeFromInfo_ == nullptr
        && this->attributeId_ == nullptr; };
            // attributeFromInfo Field Functions 
            bool hasAttributeFromInfo() const { return this->attributeFromInfo_ != nullptr;};
            void deleteAttributeFromInfo() { this->attributeFromInfo_ = nullptr;};
            inline const RefAttribute::AttributeFromInfo & getAttributeFromInfo() const { DARABONBA_PTR_GET_CONST(attributeFromInfo_, RefAttribute::AttributeFromInfo) };
            inline RefAttribute::AttributeFromInfo getAttributeFromInfo() { DARABONBA_PTR_GET(attributeFromInfo_, RefAttribute::AttributeFromInfo) };
            inline RefAttribute& setAttributeFromInfo(const RefAttribute::AttributeFromInfo & attributeFromInfo) { DARABONBA_PTR_SET_VALUE(attributeFromInfo_, attributeFromInfo) };
            inline RefAttribute& setAttributeFromInfo(RefAttribute::AttributeFromInfo && attributeFromInfo) { DARABONBA_PTR_SET_RVALUE(attributeFromInfo_, attributeFromInfo) };


            // attributeId Field Functions 
            bool hasAttributeId() const { return this->attributeId_ != nullptr;};
            void deleteAttributeId() { this->attributeId_ = nullptr;};
            inline int64_t getAttributeId() const { DARABONBA_PTR_GET_DEFAULT(attributeId_, 0L) };
            inline RefAttribute& setAttributeId(int64_t attributeId) { DARABONBA_PTR_SET_VALUE(attributeId_, attributeId) };


          protected:
            shared_ptr<RefAttribute::AttributeFromInfo> attributeFromInfo_ {};
            shared_ptr<int64_t> attributeId_ {};
          };

          class MonitorConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MonitorConfig& obj) { 
              DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
              DARABONBA_PTR_TO_JSON(IsCaseSensitive, isCaseSensitive_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, MonitorConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
              DARABONBA_PTR_FROM_JSON(IsCaseSensitive, isCaseSensitive_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            MonitorConfig() = default ;
            MonitorConfig(const MonitorConfig &) = default ;
            MonitorConfig(MonitorConfig &&) = default ;
            MonitorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MonitorConfig() = default ;
            MonitorConfig& operator=(const MonitorConfig &) = default ;
            MonitorConfig& operator=(MonitorConfig &&) = default ;
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
            inline MonitorConfig& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


            // isCaseSensitive Field Functions 
            bool hasIsCaseSensitive() const { return this->isCaseSensitive_ != nullptr;};
            void deleteIsCaseSensitive() { this->isCaseSensitive_ = nullptr;};
            inline bool getIsCaseSensitive() const { DARABONBA_PTR_GET_DEFAULT(isCaseSensitive_, false) };
            inline MonitorConfig& setIsCaseSensitive(bool isCaseSensitive) { DARABONBA_PTR_SET_VALUE(isCaseSensitive_, isCaseSensitive) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline MonitorConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> columnName_ {};
            shared_ptr<bool> isCaseSensitive_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->enableMonitorConfig_ == nullptr && this->id_ == nullptr && this->monitorConfig_ == nullptr && this->name_ == nullptr
        && this->refAttribute_ == nullptr && this->required_ == nullptr && this->type_ == nullptr && this->valueConfig_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Attribute& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Attribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // enableMonitorConfig Field Functions 
          bool hasEnableMonitorConfig() const { return this->enableMonitorConfig_ != nullptr;};
          void deleteEnableMonitorConfig() { this->enableMonitorConfig_ = nullptr;};
          inline bool getEnableMonitorConfig() const { DARABONBA_PTR_GET_DEFAULT(enableMonitorConfig_, false) };
          inline Attribute& setEnableMonitorConfig(bool enableMonitorConfig) { DARABONBA_PTR_SET_VALUE(enableMonitorConfig_, enableMonitorConfig) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Attribute& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // monitorConfig Field Functions 
          bool hasMonitorConfig() const { return this->monitorConfig_ != nullptr;};
          void deleteMonitorConfig() { this->monitorConfig_ = nullptr;};
          inline const Attribute::MonitorConfig & getMonitorConfig() const { DARABONBA_PTR_GET_CONST(monitorConfig_, Attribute::MonitorConfig) };
          inline Attribute::MonitorConfig getMonitorConfig() { DARABONBA_PTR_GET(monitorConfig_, Attribute::MonitorConfig) };
          inline Attribute& setMonitorConfig(const Attribute::MonitorConfig & monitorConfig) { DARABONBA_PTR_SET_VALUE(monitorConfig_, monitorConfig) };
          inline Attribute& setMonitorConfig(Attribute::MonitorConfig && monitorConfig) { DARABONBA_PTR_SET_RVALUE(monitorConfig_, monitorConfig) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Attribute& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // refAttribute Field Functions 
          bool hasRefAttribute() const { return this->refAttribute_ != nullptr;};
          void deleteRefAttribute() { this->refAttribute_ = nullptr;};
          inline const Attribute::RefAttribute & getRefAttribute() const { DARABONBA_PTR_GET_CONST(refAttribute_, Attribute::RefAttribute) };
          inline Attribute::RefAttribute getRefAttribute() { DARABONBA_PTR_GET(refAttribute_, Attribute::RefAttribute) };
          inline Attribute& setRefAttribute(const Attribute::RefAttribute & refAttribute) { DARABONBA_PTR_SET_VALUE(refAttribute_, refAttribute) };
          inline Attribute& setRefAttribute(Attribute::RefAttribute && refAttribute) { DARABONBA_PTR_SET_RVALUE(refAttribute_, refAttribute) };


          // required Field Functions 
          bool hasRequired() const { return this->required_ != nullptr;};
          void deleteRequired() { this->required_ = nullptr;};
          inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
          inline Attribute& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Attribute& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // valueConfig Field Functions 
          bool hasValueConfig() const { return this->valueConfig_ != nullptr;};
          void deleteValueConfig() { this->valueConfig_ = nullptr;};
          inline const Attribute::ValueConfig & getValueConfig() const { DARABONBA_PTR_GET_CONST(valueConfig_, Attribute::ValueConfig) };
          inline Attribute::ValueConfig getValueConfig() { DARABONBA_PTR_GET(valueConfig_, Attribute::ValueConfig) };
          inline Attribute& setValueConfig(const Attribute::ValueConfig & valueConfig) { DARABONBA_PTR_SET_VALUE(valueConfig_, valueConfig) };
          inline Attribute& setValueConfig(Attribute::ValueConfig && valueConfig) { DARABONBA_PTR_SET_RVALUE(valueConfig_, valueConfig) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<string> description_ {};
          shared_ptr<bool> enableMonitorConfig_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<Attribute::MonitorConfig> monitorConfig_ {};
          shared_ptr<string> name_ {};
          shared_ptr<Attribute::RefAttribute> refAttribute_ {};
          shared_ptr<bool> required_ {};
          shared_ptr<string> type_ {};
          shared_ptr<Attribute::ValueConfig> valueConfig_ {};
        };

        virtual bool empty() const override { return this->attribute_ == nullptr
        && this->value_ == nullptr; };
        // attribute Field Functions 
        bool hasAttribute() const { return this->attribute_ != nullptr;};
        void deleteAttribute() { this->attribute_ = nullptr;};
        inline const AttributeWithValueList::Attribute & getAttribute() const { DARABONBA_PTR_GET_CONST(attribute_, AttributeWithValueList::Attribute) };
        inline AttributeWithValueList::Attribute getAttribute() { DARABONBA_PTR_GET(attribute_, AttributeWithValueList::Attribute) };
        inline AttributeWithValueList& setAttribute(const AttributeWithValueList::Attribute & attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };
        inline AttributeWithValueList& setAttribute(AttributeWithValueList::Attribute && attribute) { DARABONBA_PTR_SET_RVALUE(attribute_, attribute) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline AttributeWithValueList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<AttributeWithValueList::Attribute> attribute_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->attributeWithValueList_ == nullptr
        && this->code_ == nullptr && this->creator_ == nullptr && this->description_ == nullptr && this->effectiveTimeConfig_ == nullptr && this->englishName_ == nullptr
        && this->id_ == nullptr && this->lastModifier_ == nullptr && this->lookupTableRelations_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr && this->stage_ == nullptr && this->standardGeneralMonitorConfig_ == nullptr && this->standardRelations_ == nullptr && this->standardSet_ == nullptr
        && this->standardTemplate_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
      // attributeWithValueList Field Functions 
      bool hasAttributeWithValueList() const { return this->attributeWithValueList_ != nullptr;};
      void deleteAttributeWithValueList() { this->attributeWithValueList_ = nullptr;};
      inline const vector<StandardInfo::AttributeWithValueList> & getAttributeWithValueList() const { DARABONBA_PTR_GET_CONST(attributeWithValueList_, vector<StandardInfo::AttributeWithValueList>) };
      inline vector<StandardInfo::AttributeWithValueList> getAttributeWithValueList() { DARABONBA_PTR_GET(attributeWithValueList_, vector<StandardInfo::AttributeWithValueList>) };
      inline StandardInfo& setAttributeWithValueList(const vector<StandardInfo::AttributeWithValueList> & attributeWithValueList) { DARABONBA_PTR_SET_VALUE(attributeWithValueList_, attributeWithValueList) };
      inline StandardInfo& setAttributeWithValueList(vector<StandardInfo::AttributeWithValueList> && attributeWithValueList) { DARABONBA_PTR_SET_RVALUE(attributeWithValueList_, attributeWithValueList) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline StandardInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline const StandardInfo::Creator & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, StandardInfo::Creator) };
      inline StandardInfo::Creator getCreator() { DARABONBA_PTR_GET(creator_, StandardInfo::Creator) };
      inline StandardInfo& setCreator(const StandardInfo::Creator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
      inline StandardInfo& setCreator(StandardInfo::Creator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline StandardInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // effectiveTimeConfig Field Functions 
      bool hasEffectiveTimeConfig() const { return this->effectiveTimeConfig_ != nullptr;};
      void deleteEffectiveTimeConfig() { this->effectiveTimeConfig_ = nullptr;};
      inline const StandardInfo::EffectiveTimeConfig & getEffectiveTimeConfig() const { DARABONBA_PTR_GET_CONST(effectiveTimeConfig_, StandardInfo::EffectiveTimeConfig) };
      inline StandardInfo::EffectiveTimeConfig getEffectiveTimeConfig() { DARABONBA_PTR_GET(effectiveTimeConfig_, StandardInfo::EffectiveTimeConfig) };
      inline StandardInfo& setEffectiveTimeConfig(const StandardInfo::EffectiveTimeConfig & effectiveTimeConfig) { DARABONBA_PTR_SET_VALUE(effectiveTimeConfig_, effectiveTimeConfig) };
      inline StandardInfo& setEffectiveTimeConfig(StandardInfo::EffectiveTimeConfig && effectiveTimeConfig) { DARABONBA_PTR_SET_RVALUE(effectiveTimeConfig_, effectiveTimeConfig) };


      // englishName Field Functions 
      bool hasEnglishName() const { return this->englishName_ != nullptr;};
      void deleteEnglishName() { this->englishName_ = nullptr;};
      inline string getEnglishName() const { DARABONBA_PTR_GET_DEFAULT(englishName_, "") };
      inline StandardInfo& setEnglishName(string englishName) { DARABONBA_PTR_SET_VALUE(englishName_, englishName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline StandardInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lastModifier Field Functions 
      bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
      void deleteLastModifier() { this->lastModifier_ = nullptr;};
      inline const StandardInfo::LastModifier & getLastModifier() const { DARABONBA_PTR_GET_CONST(lastModifier_, StandardInfo::LastModifier) };
      inline StandardInfo::LastModifier getLastModifier() { DARABONBA_PTR_GET(lastModifier_, StandardInfo::LastModifier) };
      inline StandardInfo& setLastModifier(const StandardInfo::LastModifier & lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };
      inline StandardInfo& setLastModifier(StandardInfo::LastModifier && lastModifier) { DARABONBA_PTR_SET_RVALUE(lastModifier_, lastModifier) };


      // lookupTableRelations Field Functions 
      bool hasLookupTableRelations() const { return this->lookupTableRelations_ != nullptr;};
      void deleteLookupTableRelations() { this->lookupTableRelations_ = nullptr;};
      inline const vector<StandardInfo::LookupTableRelations> & getLookupTableRelations() const { DARABONBA_PTR_GET_CONST(lookupTableRelations_, vector<StandardInfo::LookupTableRelations>) };
      inline vector<StandardInfo::LookupTableRelations> getLookupTableRelations() { DARABONBA_PTR_GET(lookupTableRelations_, vector<StandardInfo::LookupTableRelations>) };
      inline StandardInfo& setLookupTableRelations(const vector<StandardInfo::LookupTableRelations> & lookupTableRelations) { DARABONBA_PTR_SET_VALUE(lookupTableRelations_, lookupTableRelations) };
      inline StandardInfo& setLookupTableRelations(vector<StandardInfo::LookupTableRelations> && lookupTableRelations) { DARABONBA_PTR_SET_RVALUE(lookupTableRelations_, lookupTableRelations) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline StandardInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline StandardInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline const StandardInfo::Owner & getOwner() const { DARABONBA_PTR_GET_CONST(owner_, StandardInfo::Owner) };
      inline StandardInfo::Owner getOwner() { DARABONBA_PTR_GET(owner_, StandardInfo::Owner) };
      inline StandardInfo& setOwner(const StandardInfo::Owner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
      inline StandardInfo& setOwner(StandardInfo::Owner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


      // stage Field Functions 
      bool hasStage() const { return this->stage_ != nullptr;};
      void deleteStage() { this->stage_ = nullptr;};
      inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
      inline StandardInfo& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


      // standardGeneralMonitorConfig Field Functions 
      bool hasStandardGeneralMonitorConfig() const { return this->standardGeneralMonitorConfig_ != nullptr;};
      void deleteStandardGeneralMonitorConfig() { this->standardGeneralMonitorConfig_ = nullptr;};
      inline const StandardInfo::StandardGeneralMonitorConfig & getStandardGeneralMonitorConfig() const { DARABONBA_PTR_GET_CONST(standardGeneralMonitorConfig_, StandardInfo::StandardGeneralMonitorConfig) };
      inline StandardInfo::StandardGeneralMonitorConfig getStandardGeneralMonitorConfig() { DARABONBA_PTR_GET(standardGeneralMonitorConfig_, StandardInfo::StandardGeneralMonitorConfig) };
      inline StandardInfo& setStandardGeneralMonitorConfig(const StandardInfo::StandardGeneralMonitorConfig & standardGeneralMonitorConfig) { DARABONBA_PTR_SET_VALUE(standardGeneralMonitorConfig_, standardGeneralMonitorConfig) };
      inline StandardInfo& setStandardGeneralMonitorConfig(StandardInfo::StandardGeneralMonitorConfig && standardGeneralMonitorConfig) { DARABONBA_PTR_SET_RVALUE(standardGeneralMonitorConfig_, standardGeneralMonitorConfig) };


      // standardRelations Field Functions 
      bool hasStandardRelations() const { return this->standardRelations_ != nullptr;};
      void deleteStandardRelations() { this->standardRelations_ = nullptr;};
      inline const vector<StandardInfo::StandardRelations> & getStandardRelations() const { DARABONBA_PTR_GET_CONST(standardRelations_, vector<StandardInfo::StandardRelations>) };
      inline vector<StandardInfo::StandardRelations> getStandardRelations() { DARABONBA_PTR_GET(standardRelations_, vector<StandardInfo::StandardRelations>) };
      inline StandardInfo& setStandardRelations(const vector<StandardInfo::StandardRelations> & standardRelations) { DARABONBA_PTR_SET_VALUE(standardRelations_, standardRelations) };
      inline StandardInfo& setStandardRelations(vector<StandardInfo::StandardRelations> && standardRelations) { DARABONBA_PTR_SET_RVALUE(standardRelations_, standardRelations) };


      // standardSet Field Functions 
      bool hasStandardSet() const { return this->standardSet_ != nullptr;};
      void deleteStandardSet() { this->standardSet_ = nullptr;};
      inline const StandardInfo::StandardSet & getStandardSet() const { DARABONBA_PTR_GET_CONST(standardSet_, StandardInfo::StandardSet) };
      inline StandardInfo::StandardSet getStandardSet() { DARABONBA_PTR_GET(standardSet_, StandardInfo::StandardSet) };
      inline StandardInfo& setStandardSet(const StandardInfo::StandardSet & standardSet) { DARABONBA_PTR_SET_VALUE(standardSet_, standardSet) };
      inline StandardInfo& setStandardSet(StandardInfo::StandardSet && standardSet) { DARABONBA_PTR_SET_RVALUE(standardSet_, standardSet) };


      // standardTemplate Field Functions 
      bool hasStandardTemplate() const { return this->standardTemplate_ != nullptr;};
      void deleteStandardTemplate() { this->standardTemplate_ = nullptr;};
      inline const StandardInfo::StandardTemplate & getStandardTemplate() const { DARABONBA_PTR_GET_CONST(standardTemplate_, StandardInfo::StandardTemplate) };
      inline StandardInfo::StandardTemplate getStandardTemplate() { DARABONBA_PTR_GET(standardTemplate_, StandardInfo::StandardTemplate) };
      inline StandardInfo& setStandardTemplate(const StandardInfo::StandardTemplate & standardTemplate) { DARABONBA_PTR_SET_VALUE(standardTemplate_, standardTemplate) };
      inline StandardInfo& setStandardTemplate(StandardInfo::StandardTemplate && standardTemplate) { DARABONBA_PTR_SET_RVALUE(standardTemplate_, standardTemplate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StandardInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline StandardInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline StandardInfo& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<vector<StandardInfo::AttributeWithValueList>> attributeWithValueList_ {};
      shared_ptr<string> code_ {};
      shared_ptr<StandardInfo::Creator> creator_ {};
      shared_ptr<string> description_ {};
      shared_ptr<StandardInfo::EffectiveTimeConfig> effectiveTimeConfig_ {};
      shared_ptr<string> englishName_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<StandardInfo::LastModifier> lastModifier_ {};
      shared_ptr<vector<StandardInfo::LookupTableRelations>> lookupTableRelations_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<StandardInfo::Owner> owner_ {};
      shared_ptr<string> stage_ {};
      shared_ptr<StandardInfo::StandardGeneralMonitorConfig> standardGeneralMonitorConfig_ {};
      shared_ptr<vector<StandardInfo::StandardRelations>> standardRelations_ {};
      shared_ptr<StandardInfo::StandardSet> standardSet_ {};
      shared_ptr<StandardInfo::StandardTemplate> standardTemplate_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->standardInfo_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetStandardResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetStandardResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetStandardResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStandardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // standardInfo Field Functions 
    bool hasStandardInfo() const { return this->standardInfo_ != nullptr;};
    void deleteStandardInfo() { this->standardInfo_ = nullptr;};
    inline const GetStandardResponseBody::StandardInfo & getStandardInfo() const { DARABONBA_PTR_GET_CONST(standardInfo_, GetStandardResponseBody::StandardInfo) };
    inline GetStandardResponseBody::StandardInfo getStandardInfo() { DARABONBA_PTR_GET(standardInfo_, GetStandardResponseBody::StandardInfo) };
    inline GetStandardResponseBody& setStandardInfo(const GetStandardResponseBody::StandardInfo & standardInfo) { DARABONBA_PTR_SET_VALUE(standardInfo_, standardInfo) };
    inline GetStandardResponseBody& setStandardInfo(GetStandardResponseBody::StandardInfo && standardInfo) { DARABONBA_PTR_SET_RVALUE(standardInfo_, standardInfo) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStandardResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<GetStandardResponseBody::StandardInfo> standardInfo_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
