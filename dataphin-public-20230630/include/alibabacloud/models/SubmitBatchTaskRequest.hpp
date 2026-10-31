// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITBATCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITBATCHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SubmitBatchTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitBatchTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(SubmitCommand, submitCommand_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitBatchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(SubmitCommand, submitCommand_);
    };
    SubmitBatchTaskRequest() = default ;
    SubmitBatchTaskRequest(const SubmitBatchTaskRequest &) = default ;
    SubmitBatchTaskRequest(SubmitBatchTaskRequest &&) = default ;
    SubmitBatchTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitBatchTaskRequest() = default ;
    SubmitBatchTaskRequest& operator=(const SubmitBatchTaskRequest &) = default ;
    SubmitBatchTaskRequest& operator=(SubmitBatchTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubmitCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubmitCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CodeTemplateVersion, codeTemplateVersion_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(ConditionScheduleConfig, conditionScheduleConfig_);
        DARABONBA_PTR_TO_JSON(CpuResource, cpuResource_);
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(CustomScheduleConfig, customScheduleConfig_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(ExecuteRerunConfig, executeRerunConfig_);
        DARABONBA_PTR_TO_JSON(ExecuteTimeOutConfig, executeTimeOutConfig_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(MemoryResource, memoryResource_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NodeDescription, nodeDescription_);
        DARABONBA_PTR_TO_JSON(NodeOutputNameList, nodeOutputNameList_);
        DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
        DARABONBA_PTR_TO_JSON(OfflineCodeTemplateId, offlineCodeTemplateId_);
        DARABONBA_PTR_TO_JSON(OfflineCodeTemplateParams, offlineCodeTemplateParams_);
        DARABONBA_PTR_TO_JSON(ParamList, paramList_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(PythonModuleList, pythonModuleList_);
        DARABONBA_PTR_TO_JSON(ResourceReferenceList, resourceReferenceList_);
        DARABONBA_PTR_TO_JSON(RetryOnTimeoutEnable, retryOnTimeoutEnable_);
        DARABONBA_PTR_TO_JSON(SchedulePeriod, schedulePeriod_);
        DARABONBA_PTR_TO_JSON(ScheduleTemplate, scheduleTemplate_);
        DARABONBA_PTR_TO_JSON(SparkClientInfo, sparkClientInfo_);
        DARABONBA_PTR_TO_JSON(SparkDynamicResourceSwitch, sparkDynamicResourceSwitch_);
        DARABONBA_PTR_TO_JSON(SparkResourceEffectScope, sparkResourceEffectScope_);
        DARABONBA_PTR_TO_JSON(SparkSqlResourceConfigMap, sparkSqlResourceConfigMap_);
        DARABONBA_PTR_TO_JSON(UpStreamList, upStreamList_);
      };
      friend void from_json(const Darabonba::Json& j, SubmitCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CodeTemplateVersion, codeTemplateVersion_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(ConditionScheduleConfig, conditionScheduleConfig_);
        DARABONBA_PTR_FROM_JSON(CpuResource, cpuResource_);
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(CustomScheduleConfig, customScheduleConfig_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(ExecuteRerunConfig, executeRerunConfig_);
        DARABONBA_PTR_FROM_JSON(ExecuteTimeOutConfig, executeTimeOutConfig_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(MemoryResource, memoryResource_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NodeDescription, nodeDescription_);
        DARABONBA_PTR_FROM_JSON(NodeOutputNameList, nodeOutputNameList_);
        DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
        DARABONBA_PTR_FROM_JSON(OfflineCodeTemplateId, offlineCodeTemplateId_);
        DARABONBA_PTR_FROM_JSON(OfflineCodeTemplateParams, offlineCodeTemplateParams_);
        DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(PythonModuleList, pythonModuleList_);
        DARABONBA_PTR_FROM_JSON(ResourceReferenceList, resourceReferenceList_);
        DARABONBA_PTR_FROM_JSON(RetryOnTimeoutEnable, retryOnTimeoutEnable_);
        DARABONBA_PTR_FROM_JSON(SchedulePeriod, schedulePeriod_);
        DARABONBA_PTR_FROM_JSON(ScheduleTemplate, scheduleTemplate_);
        DARABONBA_PTR_FROM_JSON(SparkClientInfo, sparkClientInfo_);
        DARABONBA_PTR_FROM_JSON(SparkDynamicResourceSwitch, sparkDynamicResourceSwitch_);
        DARABONBA_PTR_FROM_JSON(SparkResourceEffectScope, sparkResourceEffectScope_);
        DARABONBA_PTR_FROM_JSON(SparkSqlResourceConfigMap, sparkSqlResourceConfigMap_);
        DARABONBA_PTR_FROM_JSON(UpStreamList, upStreamList_);
      };
      SubmitCommand() = default ;
      SubmitCommand(const SubmitCommand &) = default ;
      SubmitCommand(SubmitCommand &&) = default ;
      SubmitCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubmitCommand() = default ;
      SubmitCommand& operator=(const SubmitCommand &) = default ;
      SubmitCommand& operator=(SubmitCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UpStreamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UpStreamList& obj) { 
          DARABONBA_PTR_TO_JSON(DependPeriod, dependPeriod_);
          DARABONBA_PTR_TO_JSON(DependStrategy, dependStrategy_);
          DARABONBA_PTR_TO_JSON(FieldList, fieldList_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(PeriodDiff, periodDiff_);
          DARABONBA_PTR_TO_JSON(SourceNodeEnabled, sourceNodeEnabled_);
          DARABONBA_PTR_TO_JSON(SourceNodeId, sourceNodeId_);
          DARABONBA_PTR_TO_JSON(SourceNodeOutputName, sourceNodeOutputName_);
          DARABONBA_PTR_TO_JSON(SourceTableName, sourceTableName_);
        };
        friend void from_json(const Darabonba::Json& j, UpStreamList& obj) { 
          DARABONBA_PTR_FROM_JSON(DependPeriod, dependPeriod_);
          DARABONBA_PTR_FROM_JSON(DependStrategy, dependStrategy_);
          DARABONBA_PTR_FROM_JSON(FieldList, fieldList_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(PeriodDiff, periodDiff_);
          DARABONBA_PTR_FROM_JSON(SourceNodeEnabled, sourceNodeEnabled_);
          DARABONBA_PTR_FROM_JSON(SourceNodeId, sourceNodeId_);
          DARABONBA_PTR_FROM_JSON(SourceNodeOutputName, sourceNodeOutputName_);
          DARABONBA_PTR_FROM_JSON(SourceTableName, sourceTableName_);
        };
        UpStreamList() = default ;
        UpStreamList(const UpStreamList &) = default ;
        UpStreamList(UpStreamList &&) = default ;
        UpStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UpStreamList() = default ;
        UpStreamList& operator=(const UpStreamList &) = default ;
        UpStreamList& operator=(UpStreamList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DependPeriod : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DependPeriod& obj) { 
            DARABONBA_PTR_TO_JSON(PeriodOffset, periodOffset_);
            DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
          };
          friend void from_json(const Darabonba::Json& j, DependPeriod& obj) { 
            DARABONBA_PTR_FROM_JSON(PeriodOffset, periodOffset_);
            DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
          };
          DependPeriod() = default ;
          DependPeriod(const DependPeriod &) = default ;
          DependPeriod(DependPeriod &&) = default ;
          DependPeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DependPeriod() = default ;
          DependPeriod& operator=(const DependPeriod &) = default ;
          DependPeriod& operator=(DependPeriod &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->periodOffset_ == nullptr
        && this->periodType_ == nullptr; };
          // periodOffset Field Functions 
          bool hasPeriodOffset() const { return this->periodOffset_ != nullptr;};
          void deletePeriodOffset() { this->periodOffset_ = nullptr;};
          inline int32_t getPeriodOffset() const { DARABONBA_PTR_GET_DEFAULT(periodOffset_, 0) };
          inline DependPeriod& setPeriodOffset(int32_t periodOffset) { DARABONBA_PTR_SET_VALUE(periodOffset_, periodOffset) };


          // periodType Field Functions 
          bool hasPeriodType() const { return this->periodType_ != nullptr;};
          void deletePeriodType() { this->periodType_ = nullptr;};
          inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
          inline DependPeriod& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


        protected:
          // The period offset. This parameter is required when dependencyPeriodType is set to LAST_N_PERIOD.
          shared_ptr<int32_t> periodOffset_ {};
          // The dependency period type. Valid values:
          // - CURRENT_PERIOD: Current period.
          // - LAST_PERIOD: Last period.
          // - LAST_N_PERIOD: Last N days.
          // - LAST_24_HOUR: Last 24 hours.
          // 
          // This parameter is required.
          shared_ptr<string> periodType_ {};
        };

        virtual bool empty() const override { return this->dependPeriod_ == nullptr
        && this->dependStrategy_ == nullptr && this->fieldList_ == nullptr && this->nodeType_ == nullptr && this->periodDiff_ == nullptr && this->sourceNodeEnabled_ == nullptr
        && this->sourceNodeId_ == nullptr && this->sourceNodeOutputName_ == nullptr && this->sourceTableName_ == nullptr; };
        // dependPeriod Field Functions 
        bool hasDependPeriod() const { return this->dependPeriod_ != nullptr;};
        void deleteDependPeriod() { this->dependPeriod_ = nullptr;};
        inline const UpStreamList::DependPeriod & getDependPeriod() const { DARABONBA_PTR_GET_CONST(dependPeriod_, UpStreamList::DependPeriod) };
        inline UpStreamList::DependPeriod getDependPeriod() { DARABONBA_PTR_GET(dependPeriod_, UpStreamList::DependPeriod) };
        inline UpStreamList& setDependPeriod(const UpStreamList::DependPeriod & dependPeriod) { DARABONBA_PTR_SET_VALUE(dependPeriod_, dependPeriod) };
        inline UpStreamList& setDependPeriod(UpStreamList::DependPeriod && dependPeriod) { DARABONBA_PTR_SET_RVALUE(dependPeriod_, dependPeriod) };


        // dependStrategy Field Functions 
        bool hasDependStrategy() const { return this->dependStrategy_ != nullptr;};
        void deleteDependStrategy() { this->dependStrategy_ = nullptr;};
        inline string getDependStrategy() const { DARABONBA_PTR_GET_DEFAULT(dependStrategy_, "") };
        inline UpStreamList& setDependStrategy(string dependStrategy) { DARABONBA_PTR_SET_VALUE(dependStrategy_, dependStrategy) };


        // fieldList Field Functions 
        bool hasFieldList() const { return this->fieldList_ != nullptr;};
        void deleteFieldList() { this->fieldList_ = nullptr;};
        inline const vector<string> & getFieldList() const { DARABONBA_PTR_GET_CONST(fieldList_, vector<string>) };
        inline vector<string> getFieldList() { DARABONBA_PTR_GET(fieldList_, vector<string>) };
        inline UpStreamList& setFieldList(const vector<string> & fieldList) { DARABONBA_PTR_SET_VALUE(fieldList_, fieldList) };
        inline UpStreamList& setFieldList(vector<string> && fieldList) { DARABONBA_PTR_SET_RVALUE(fieldList_, fieldList) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline UpStreamList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // periodDiff Field Functions 
        bool hasPeriodDiff() const { return this->periodDiff_ != nullptr;};
        void deletePeriodDiff() { this->periodDiff_ = nullptr;};
        inline int32_t getPeriodDiff() const { DARABONBA_PTR_GET_DEFAULT(periodDiff_, 0) };
        inline UpStreamList& setPeriodDiff(int32_t periodDiff) { DARABONBA_PTR_SET_VALUE(periodDiff_, periodDiff) };


        // sourceNodeEnabled Field Functions 
        bool hasSourceNodeEnabled() const { return this->sourceNodeEnabled_ != nullptr;};
        void deleteSourceNodeEnabled() { this->sourceNodeEnabled_ = nullptr;};
        inline bool getSourceNodeEnabled() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeEnabled_, false) };
        inline UpStreamList& setSourceNodeEnabled(bool sourceNodeEnabled) { DARABONBA_PTR_SET_VALUE(sourceNodeEnabled_, sourceNodeEnabled) };


        // sourceNodeId Field Functions 
        bool hasSourceNodeId() const { return this->sourceNodeId_ != nullptr;};
        void deleteSourceNodeId() { this->sourceNodeId_ = nullptr;};
        inline string getSourceNodeId() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeId_, "") };
        inline UpStreamList& setSourceNodeId(string sourceNodeId) { DARABONBA_PTR_SET_VALUE(sourceNodeId_, sourceNodeId) };


        // sourceNodeOutputName Field Functions 
        bool hasSourceNodeOutputName() const { return this->sourceNodeOutputName_ != nullptr;};
        void deleteSourceNodeOutputName() { this->sourceNodeOutputName_ = nullptr;};
        inline string getSourceNodeOutputName() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeOutputName_, "") };
        inline UpStreamList& setSourceNodeOutputName(string sourceNodeOutputName) { DARABONBA_PTR_SET_VALUE(sourceNodeOutputName_, sourceNodeOutputName) };


        // sourceTableName Field Functions 
        bool hasSourceTableName() const { return this->sourceTableName_ != nullptr;};
        void deleteSourceTableName() { this->sourceTableName_ = nullptr;};
        inline string getSourceTableName() const { DARABONBA_PTR_GET_DEFAULT(sourceTableName_, "") };
        inline UpStreamList& setSourceTableName(string sourceTableName) { DARABONBA_PTR_SET_VALUE(sourceTableName_, sourceTableName) };


      protected:
        // The dependency period.
        shared_ptr<UpStreamList::DependPeriod> dependPeriod_ {};
        // The dependency strategy. Valid values:
        // - ALL: All.
        // - FIRST: First.
        // - LAST: Last.
        // - NEAR: Nearest.
        shared_ptr<string> dependStrategy_ {};
        // The dependent logical table fields.
        shared_ptr<vector<string>> fieldList_ {};
        // The upstream dependency node type. Valid values:
        // - PHYSICAL: Physical node.
        // - LOGICAL: Logical table dependency.
        shared_ptr<string> nodeType_ {};
        // The period difference. A value of 0 indicates a dependency on the same period. A positive number indicates a dependency on the previous N periods.
        // 
        // This parameter is required.
        shared_ptr<int32_t> periodDiff_ {};
        // Specifies whether the upstream node is enabled.
        shared_ptr<bool> sourceNodeEnabled_ {};
        // The ID of the upstream node.
        shared_ptr<string> sourceNodeId_ {};
        // The output name of the upstream node.
        shared_ptr<string> sourceNodeOutputName_ {};
        // The name of the input table.
        shared_ptr<string> sourceTableName_ {};
      };

      class SparkClientInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SparkClientInfo& obj) { 
          DARABONBA_PTR_TO_JSON(SparkClientVersion, sparkClientVersion_);
        };
        friend void from_json(const Darabonba::Json& j, SparkClientInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(SparkClientVersion, sparkClientVersion_);
        };
        SparkClientInfo() = default ;
        SparkClientInfo(const SparkClientInfo &) = default ;
        SparkClientInfo(SparkClientInfo &&) = default ;
        SparkClientInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SparkClientInfo() = default ;
        SparkClientInfo& operator=(const SparkClientInfo &) = default ;
        SparkClientInfo& operator=(SparkClientInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sparkClientVersion_ == nullptr; };
        // sparkClientVersion Field Functions 
        bool hasSparkClientVersion() const { return this->sparkClientVersion_ != nullptr;};
        void deleteSparkClientVersion() { this->sparkClientVersion_ = nullptr;};
        inline string getSparkClientVersion() const { DARABONBA_PTR_GET_DEFAULT(sparkClientVersion_, "") };
        inline SparkClientInfo& setSparkClientVersion(string sparkClientVersion) { DARABONBA_PTR_SET_VALUE(sparkClientVersion_, sparkClientVersion) };


      protected:
        // The version name of the Spark client.
        // 
        // This parameter is required.
        shared_ptr<string> sparkClientVersion_ {};
      };

      class ScheduleTemplate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScheduleTemplate& obj) { 
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduleTemplate& obj) { 
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        };
        ScheduleTemplate() = default ;
        ScheduleTemplate(const ScheduleTemplate &) = default ;
        ScheduleTemplate(ScheduleTemplate &&) = default ;
        ScheduleTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScheduleTemplate() = default ;
        ScheduleTemplate& operator=(const ScheduleTemplate &) = default ;
        ScheduleTemplate& operator=(ScheduleTemplate &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->templateId_ == nullptr; };
        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
        inline ScheduleTemplate& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      protected:
        // 基础调度模板ID，必须为正数
        shared_ptr<int64_t> templateId_ {};
      };

      class ParamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParamList& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ParamList& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        ParamList() = default ;
        ParamList(const ParamList &) = default ;
        ParamList(ParamList &&) = default ;
        ParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParamList() = default ;
        ParamList& operator=(const ParamList &) = default ;
        ParamList& operator=(ParamList &&) = default ;
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
        inline ParamList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ParamList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The name of the parameter.
        // 
        // This parameter is required.
        shared_ptr<string> key_ {};
        // The value of the parameter.
        // 
        // This parameter is required.
        shared_ptr<string> value_ {};
      };

      class OfflineCodeTemplateParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OfflineCodeTemplateParams& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EncryptEnabled, encryptEnabled_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, OfflineCodeTemplateParams& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EncryptEnabled, encryptEnabled_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        OfflineCodeTemplateParams() = default ;
        OfflineCodeTemplateParams(const OfflineCodeTemplateParams &) = default ;
        OfflineCodeTemplateParams(OfflineCodeTemplateParams &&) = default ;
        OfflineCodeTemplateParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OfflineCodeTemplateParams() = default ;
        OfflineCodeTemplateParams& operator=(const OfflineCodeTemplateParams &) = default ;
        OfflineCodeTemplateParams& operator=(OfflineCodeTemplateParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->encryptEnabled_ == nullptr && this->key_ == nullptr && this->value_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline OfflineCodeTemplateParams& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // encryptEnabled Field Functions 
        bool hasEncryptEnabled() const { return this->encryptEnabled_ != nullptr;};
        void deleteEncryptEnabled() { this->encryptEnabled_ = nullptr;};
        inline bool getEncryptEnabled() const { DARABONBA_PTR_GET_DEFAULT(encryptEnabled_, false) };
        inline OfflineCodeTemplateParams& setEncryptEnabled(bool encryptEnabled) { DARABONBA_PTR_SET_VALUE(encryptEnabled_, encryptEnabled) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline OfflineCodeTemplateParams& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline OfflineCodeTemplateParams& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The description of the parameter.
        shared_ptr<string> description_ {};
        // Specifies whether encryption is enabled.
        shared_ptr<bool> encryptEnabled_ {};
        // The key of the parameter.
        shared_ptr<string> key_ {};
        // The value of the parameter.
        shared_ptr<string> value_ {};
      };

      class ExecuteTimeOutConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExecuteTimeOutConfig& obj) { 
          DARABONBA_PTR_TO_JSON(CustomValues, customValues_);
          DARABONBA_PTR_TO_JSON(FollowSystem, followSystem_);
        };
        friend void from_json(const Darabonba::Json& j, ExecuteTimeOutConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomValues, customValues_);
          DARABONBA_PTR_FROM_JSON(FollowSystem, followSystem_);
        };
        ExecuteTimeOutConfig() = default ;
        ExecuteTimeOutConfig(const ExecuteTimeOutConfig &) = default ;
        ExecuteTimeOutConfig(ExecuteTimeOutConfig &&) = default ;
        ExecuteTimeOutConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExecuteTimeOutConfig() = default ;
        ExecuteTimeOutConfig& operator=(const ExecuteTimeOutConfig &) = default ;
        ExecuteTimeOutConfig& operator=(ExecuteTimeOutConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->customValues_ == nullptr
        && this->followSystem_ == nullptr; };
        // customValues Field Functions 
        bool hasCustomValues() const { return this->customValues_ != nullptr;};
        void deleteCustomValues() { this->customValues_ = nullptr;};
        inline string getCustomValues() const { DARABONBA_PTR_GET_DEFAULT(customValues_, "") };
        inline ExecuteTimeOutConfig& setCustomValues(string customValues) { DARABONBA_PTR_SET_VALUE(customValues_, customValues) };


        // followSystem Field Functions 
        bool hasFollowSystem() const { return this->followSystem_ != nullptr;};
        void deleteFollowSystem() { this->followSystem_ = nullptr;};
        inline bool getFollowSystem() const { DARABONBA_PTR_GET_DEFAULT(followSystem_, false) };
        inline ExecuteTimeOutConfig& setFollowSystem(bool followSystem) { DARABONBA_PTR_SET_VALUE(followSystem_, followSystem) };


      protected:
        // 自定义超时时间。
        shared_ptr<string> customValues_ {};
        // 是否跟随系统配置。
        shared_ptr<bool> followSystem_ {};
      };

      class ExecuteRerunConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExecuteRerunConfig& obj) { 
          DARABONBA_PTR_TO_JSON(CustomRerunInterval, customRerunInterval_);
          DARABONBA_PTR_TO_JSON(CustomRerunTimes, customRerunTimes_);
          DARABONBA_PTR_TO_JSON(FollowSystem, followSystem_);
        };
        friend void from_json(const Darabonba::Json& j, ExecuteRerunConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomRerunInterval, customRerunInterval_);
          DARABONBA_PTR_FROM_JSON(CustomRerunTimes, customRerunTimes_);
          DARABONBA_PTR_FROM_JSON(FollowSystem, followSystem_);
        };
        ExecuteRerunConfig() = default ;
        ExecuteRerunConfig(const ExecuteRerunConfig &) = default ;
        ExecuteRerunConfig(ExecuteRerunConfig &&) = default ;
        ExecuteRerunConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExecuteRerunConfig() = default ;
        ExecuteRerunConfig& operator=(const ExecuteRerunConfig &) = default ;
        ExecuteRerunConfig& operator=(ExecuteRerunConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->customRerunInterval_ == nullptr
        && this->customRerunTimes_ == nullptr && this->followSystem_ == nullptr; };
        // customRerunInterval Field Functions 
        bool hasCustomRerunInterval() const { return this->customRerunInterval_ != nullptr;};
        void deleteCustomRerunInterval() { this->customRerunInterval_ = nullptr;};
        inline string getCustomRerunInterval() const { DARABONBA_PTR_GET_DEFAULT(customRerunInterval_, "") };
        inline ExecuteRerunConfig& setCustomRerunInterval(string customRerunInterval) { DARABONBA_PTR_SET_VALUE(customRerunInterval_, customRerunInterval) };


        // customRerunTimes Field Functions 
        bool hasCustomRerunTimes() const { return this->customRerunTimes_ != nullptr;};
        void deleteCustomRerunTimes() { this->customRerunTimes_ = nullptr;};
        inline string getCustomRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(customRerunTimes_, "") };
        inline ExecuteRerunConfig& setCustomRerunTimes(string customRerunTimes) { DARABONBA_PTR_SET_VALUE(customRerunTimes_, customRerunTimes) };


        // followSystem Field Functions 
        bool hasFollowSystem() const { return this->followSystem_ != nullptr;};
        void deleteFollowSystem() { this->followSystem_ = nullptr;};
        inline bool getFollowSystem() const { DARABONBA_PTR_GET_DEFAULT(followSystem_, false) };
        inline ExecuteRerunConfig& setFollowSystem(bool followSystem) { DARABONBA_PTR_SET_VALUE(followSystem_, followSystem) };


      protected:
        // 自定义失败重试间隔。
        shared_ptr<string> customRerunInterval_ {};
        // 自定义失败重试次数。
        shared_ptr<string> customRerunTimes_ {};
        // 是否跟随系统配置。
        shared_ptr<bool> followSystem_ {};
      };

      class CustomScheduleConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomScheduleConfig& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(IntervalUnit, intervalUnit_);
          DARABONBA_PTR_TO_JSON(SchedulePeriod, schedulePeriod_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, CustomScheduleConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(IntervalUnit, intervalUnit_);
          DARABONBA_PTR_FROM_JSON(SchedulePeriod, schedulePeriod_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        CustomScheduleConfig() = default ;
        CustomScheduleConfig(const CustomScheduleConfig &) = default ;
        CustomScheduleConfig(CustomScheduleConfig &&) = default ;
        CustomScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomScheduleConfig() = default ;
        CustomScheduleConfig& operator=(const CustomScheduleConfig &) = default ;
        CustomScheduleConfig& operator=(CustomScheduleConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->interval_ == nullptr && this->intervalUnit_ == nullptr && this->schedulePeriod_ == nullptr && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline CustomScheduleConfig& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
        inline CustomScheduleConfig& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // intervalUnit Field Functions 
        bool hasIntervalUnit() const { return this->intervalUnit_ != nullptr;};
        void deleteIntervalUnit() { this->intervalUnit_ = nullptr;};
        inline string getIntervalUnit() const { DARABONBA_PTR_GET_DEFAULT(intervalUnit_, "") };
        inline CustomScheduleConfig& setIntervalUnit(string intervalUnit) { DARABONBA_PTR_SET_VALUE(intervalUnit_, intervalUnit) };


        // schedulePeriod Field Functions 
        bool hasSchedulePeriod() const { return this->schedulePeriod_ != nullptr;};
        void deleteSchedulePeriod() { this->schedulePeriod_ = nullptr;};
        inline string getSchedulePeriod() const { DARABONBA_PTR_GET_DEFAULT(schedulePeriod_, "") };
        inline CustomScheduleConfig& setSchedulePeriod(string schedulePeriod) { DARABONBA_PTR_SET_VALUE(schedulePeriod_, schedulePeriod) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline CustomScheduleConfig& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The end time in the HH:mm format.
        // 
        // This parameter is required.
        shared_ptr<string> endTime_ {};
        // The custom interval.
        // 
        // This parameter is required.
        shared_ptr<int32_t> interval_ {};
        // The interval unit. Valid values:
        // - MINUTE: Minute.
        // - HOUR: Hour.
        // 
        // This parameter is required.
        shared_ptr<string> intervalUnit_ {};
        // The schedule period. Valid values:
        // - YEARLY: Yearly.
        // - MONTHLY: Monthly.
        // - WEEKLY: Weekly.
        // - DAILY: Daily.
        // - HOURLY: Hourly.
        // - MINUTELY: Minutely.
        // 
        // This parameter is required.
        shared_ptr<string> schedulePeriod_ {};
        // The start time in the HH:mm format.
        // 
        // This parameter is required.
        shared_ptr<string> startTime_ {};
      };

      class ConditionScheduleConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConditionScheduleConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(ParamList, paramList_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        };
        friend void from_json(const Darabonba::Json& j, ConditionScheduleConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        };
        ConditionScheduleConfig() = default ;
        ConditionScheduleConfig(const ConditionScheduleConfig &) = default ;
        ConditionScheduleConfig(ConditionScheduleConfig &&) = default ;
        ConditionScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConditionScheduleConfig() = default ;
        ConditionScheduleConfig& operator=(const ConditionScheduleConfig &) = default ;
        ConditionScheduleConfig& operator=(ConditionScheduleConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ParamList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParamList& obj) { 
            DARABONBA_PTR_TO_JSON(ConditionName, conditionName_);
            DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
            DARABONBA_PTR_TO_JSON(Enable, enable_);
            DARABONBA_PTR_TO_JSON(FollowScheduleParam, followScheduleParam_);
            DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
            DARABONBA_PTR_TO_JSON(ScheduleConditionJson, scheduleConditionJson_);
            DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
          };
          friend void from_json(const Darabonba::Json& j, ParamList& obj) { 
            DARABONBA_PTR_FROM_JSON(ConditionName, conditionName_);
            DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
            DARABONBA_PTR_FROM_JSON(Enable, enable_);
            DARABONBA_PTR_FROM_JSON(FollowScheduleParam, followScheduleParam_);
            DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
            DARABONBA_PTR_FROM_JSON(ScheduleConditionJson, scheduleConditionJson_);
            DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
          };
          ParamList() = default ;
          ParamList(const ParamList &) = default ;
          ParamList(ParamList &&) = default ;
          ParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParamList() = default ;
          ParamList& operator=(const ParamList &) = default ;
          ParamList& operator=(ParamList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->conditionName_ == nullptr
        && this->cronExpression_ == nullptr && this->enable_ == nullptr && this->followScheduleParam_ == nullptr && this->nodeStatus_ == nullptr && this->scheduleConditionJson_ == nullptr
        && this->scheduleTime_ == nullptr; };
          // conditionName Field Functions 
          bool hasConditionName() const { return this->conditionName_ != nullptr;};
          void deleteConditionName() { this->conditionName_ = nullptr;};
          inline string getConditionName() const { DARABONBA_PTR_GET_DEFAULT(conditionName_, "") };
          inline ParamList& setConditionName(string conditionName) { DARABONBA_PTR_SET_VALUE(conditionName_, conditionName) };


          // cronExpression Field Functions 
          bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
          void deleteCronExpression() { this->cronExpression_ = nullptr;};
          inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
          inline ParamList& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline ParamList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // followScheduleParam Field Functions 
          bool hasFollowScheduleParam() const { return this->followScheduleParam_ != nullptr;};
          void deleteFollowScheduleParam() { this->followScheduleParam_ = nullptr;};
          inline bool getFollowScheduleParam() const { DARABONBA_PTR_GET_DEFAULT(followScheduleParam_, false) };
          inline ParamList& setFollowScheduleParam(bool followScheduleParam) { DARABONBA_PTR_SET_VALUE(followScheduleParam_, followScheduleParam) };


          // nodeStatus Field Functions 
          bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
          void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
          inline int32_t getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, 0) };
          inline ParamList& setNodeStatus(int32_t nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


          // scheduleConditionJson Field Functions 
          bool hasScheduleConditionJson() const { return this->scheduleConditionJson_ != nullptr;};
          void deleteScheduleConditionJson() { this->scheduleConditionJson_ = nullptr;};
          inline string getScheduleConditionJson() const { DARABONBA_PTR_GET_DEFAULT(scheduleConditionJson_, "") };
          inline ParamList& setScheduleConditionJson(string scheduleConditionJson) { DARABONBA_PTR_SET_VALUE(scheduleConditionJson_, scheduleConditionJson) };


          // scheduleTime Field Functions 
          bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
          void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
          inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
          inline ParamList& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


        protected:
          // 条件名称
          shared_ptr<string> conditionName_ {};
          // 命中后的cron表达式
          shared_ptr<string> cronExpression_ {};
          // 是否启用该条件
          shared_ptr<bool> enable_ {};
          // 是否跟随主调度参数
          shared_ptr<bool> followScheduleParam_ {};
          // 命中后的调度状态：1正常，2暂停，3空跑
          shared_ptr<int32_t> nodeStatus_ {};
          // 条件表达式树JSON字符串，内部键名使用小驼峰
          shared_ptr<string> scheduleConditionJson_ {};
          // 命中后的调度时间
          shared_ptr<string> scheduleTime_ {};
        };

        virtual bool empty() const override { return this->enable_ == nullptr
        && this->paramList_ == nullptr && this->templateId_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline ConditionScheduleConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // paramList Field Functions 
        bool hasParamList() const { return this->paramList_ != nullptr;};
        void deleteParamList() { this->paramList_ = nullptr;};
        inline const vector<ConditionScheduleConfig::ParamList> & getParamList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<ConditionScheduleConfig::ParamList>) };
        inline vector<ConditionScheduleConfig::ParamList> getParamList() { DARABONBA_PTR_GET(paramList_, vector<ConditionScheduleConfig::ParamList>) };
        inline ConditionScheduleConfig& setParamList(const vector<ConditionScheduleConfig::ParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
        inline ConditionScheduleConfig& setParamList(vector<ConditionScheduleConfig::ParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
        inline ConditionScheduleConfig& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      protected:
        // 是否启用条件调度。传入ConditionScheduleConfig对象时必须提供，由后端校验；false关闭并清除旧配置。
        shared_ptr<bool> enable_ {};
        // 自定义条件列表；与TemplateId互斥，空列表清除旧条件
        shared_ptr<vector<ConditionScheduleConfig::ParamList>> paramList_ {};
        // 条件调度模板ID，与ParamList互斥
        shared_ptr<int64_t> templateId_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->codeTemplateVersion_ == nullptr && this->comment_ == nullptr && this->conditionScheduleConfig_ == nullptr && this->cpuResource_ == nullptr && this->cronExpression_ == nullptr
        && this->customScheduleConfig_ == nullptr && this->engine_ == nullptr && this->executeRerunConfig_ == nullptr && this->executeTimeOutConfig_ == nullptr && this->fileId_ == nullptr
        && this->memoryResource_ == nullptr && this->name_ == nullptr && this->nodeDescription_ == nullptr && this->nodeOutputNameList_ == nullptr && this->nodeStatus_ == nullptr
        && this->offlineCodeTemplateId_ == nullptr && this->offlineCodeTemplateParams_ == nullptr && this->paramList_ == nullptr && this->priority_ == nullptr && this->projectId_ == nullptr
        && this->pythonModuleList_ == nullptr && this->resourceReferenceList_ == nullptr && this->retryOnTimeoutEnable_ == nullptr && this->schedulePeriod_ == nullptr && this->scheduleTemplate_ == nullptr
        && this->sparkClientInfo_ == nullptr && this->sparkDynamicResourceSwitch_ == nullptr && this->sparkResourceEffectScope_ == nullptr && this->sparkSqlResourceConfigMap_ == nullptr && this->upStreamList_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline SubmitCommand& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // codeTemplateVersion Field Functions 
      bool hasCodeTemplateVersion() const { return this->codeTemplateVersion_ != nullptr;};
      void deleteCodeTemplateVersion() { this->codeTemplateVersion_ = nullptr;};
      inline int32_t getCodeTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(codeTemplateVersion_, 0) };
      inline SubmitCommand& setCodeTemplateVersion(int32_t codeTemplateVersion) { DARABONBA_PTR_SET_VALUE(codeTemplateVersion_, codeTemplateVersion) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline SubmitCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // conditionScheduleConfig Field Functions 
      bool hasConditionScheduleConfig() const { return this->conditionScheduleConfig_ != nullptr;};
      void deleteConditionScheduleConfig() { this->conditionScheduleConfig_ = nullptr;};
      inline const SubmitCommand::ConditionScheduleConfig & getConditionScheduleConfig() const { DARABONBA_PTR_GET_CONST(conditionScheduleConfig_, SubmitCommand::ConditionScheduleConfig) };
      inline SubmitCommand::ConditionScheduleConfig getConditionScheduleConfig() { DARABONBA_PTR_GET(conditionScheduleConfig_, SubmitCommand::ConditionScheduleConfig) };
      inline SubmitCommand& setConditionScheduleConfig(const SubmitCommand::ConditionScheduleConfig & conditionScheduleConfig) { DARABONBA_PTR_SET_VALUE(conditionScheduleConfig_, conditionScheduleConfig) };
      inline SubmitCommand& setConditionScheduleConfig(SubmitCommand::ConditionScheduleConfig && conditionScheduleConfig) { DARABONBA_PTR_SET_RVALUE(conditionScheduleConfig_, conditionScheduleConfig) };


      // cpuResource Field Functions 
      bool hasCpuResource() const { return this->cpuResource_ != nullptr;};
      void deleteCpuResource() { this->cpuResource_ = nullptr;};
      inline string getCpuResource() const { DARABONBA_PTR_GET_DEFAULT(cpuResource_, "") };
      inline SubmitCommand& setCpuResource(string cpuResource) { DARABONBA_PTR_SET_VALUE(cpuResource_, cpuResource) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline SubmitCommand& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // customScheduleConfig Field Functions 
      bool hasCustomScheduleConfig() const { return this->customScheduleConfig_ != nullptr;};
      void deleteCustomScheduleConfig() { this->customScheduleConfig_ = nullptr;};
      inline const SubmitCommand::CustomScheduleConfig & getCustomScheduleConfig() const { DARABONBA_PTR_GET_CONST(customScheduleConfig_, SubmitCommand::CustomScheduleConfig) };
      inline SubmitCommand::CustomScheduleConfig getCustomScheduleConfig() { DARABONBA_PTR_GET(customScheduleConfig_, SubmitCommand::CustomScheduleConfig) };
      inline SubmitCommand& setCustomScheduleConfig(const SubmitCommand::CustomScheduleConfig & customScheduleConfig) { DARABONBA_PTR_SET_VALUE(customScheduleConfig_, customScheduleConfig) };
      inline SubmitCommand& setCustomScheduleConfig(SubmitCommand::CustomScheduleConfig && customScheduleConfig) { DARABONBA_PTR_SET_RVALUE(customScheduleConfig_, customScheduleConfig) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline SubmitCommand& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // executeRerunConfig Field Functions 
      bool hasExecuteRerunConfig() const { return this->executeRerunConfig_ != nullptr;};
      void deleteExecuteRerunConfig() { this->executeRerunConfig_ = nullptr;};
      inline const SubmitCommand::ExecuteRerunConfig & getExecuteRerunConfig() const { DARABONBA_PTR_GET_CONST(executeRerunConfig_, SubmitCommand::ExecuteRerunConfig) };
      inline SubmitCommand::ExecuteRerunConfig getExecuteRerunConfig() { DARABONBA_PTR_GET(executeRerunConfig_, SubmitCommand::ExecuteRerunConfig) };
      inline SubmitCommand& setExecuteRerunConfig(const SubmitCommand::ExecuteRerunConfig & executeRerunConfig) { DARABONBA_PTR_SET_VALUE(executeRerunConfig_, executeRerunConfig) };
      inline SubmitCommand& setExecuteRerunConfig(SubmitCommand::ExecuteRerunConfig && executeRerunConfig) { DARABONBA_PTR_SET_RVALUE(executeRerunConfig_, executeRerunConfig) };


      // executeTimeOutConfig Field Functions 
      bool hasExecuteTimeOutConfig() const { return this->executeTimeOutConfig_ != nullptr;};
      void deleteExecuteTimeOutConfig() { this->executeTimeOutConfig_ = nullptr;};
      inline const SubmitCommand::ExecuteTimeOutConfig & getExecuteTimeOutConfig() const { DARABONBA_PTR_GET_CONST(executeTimeOutConfig_, SubmitCommand::ExecuteTimeOutConfig) };
      inline SubmitCommand::ExecuteTimeOutConfig getExecuteTimeOutConfig() { DARABONBA_PTR_GET(executeTimeOutConfig_, SubmitCommand::ExecuteTimeOutConfig) };
      inline SubmitCommand& setExecuteTimeOutConfig(const SubmitCommand::ExecuteTimeOutConfig & executeTimeOutConfig) { DARABONBA_PTR_SET_VALUE(executeTimeOutConfig_, executeTimeOutConfig) };
      inline SubmitCommand& setExecuteTimeOutConfig(SubmitCommand::ExecuteTimeOutConfig && executeTimeOutConfig) { DARABONBA_PTR_SET_RVALUE(executeTimeOutConfig_, executeTimeOutConfig) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
      inline SubmitCommand& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // memoryResource Field Functions 
      bool hasMemoryResource() const { return this->memoryResource_ != nullptr;};
      void deleteMemoryResource() { this->memoryResource_ = nullptr;};
      inline string getMemoryResource() const { DARABONBA_PTR_GET_DEFAULT(memoryResource_, "") };
      inline SubmitCommand& setMemoryResource(string memoryResource) { DARABONBA_PTR_SET_VALUE(memoryResource_, memoryResource) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SubmitCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nodeDescription Field Functions 
      bool hasNodeDescription() const { return this->nodeDescription_ != nullptr;};
      void deleteNodeDescription() { this->nodeDescription_ = nullptr;};
      inline string getNodeDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeDescription_, "") };
      inline SubmitCommand& setNodeDescription(string nodeDescription) { DARABONBA_PTR_SET_VALUE(nodeDescription_, nodeDescription) };


      // nodeOutputNameList Field Functions 
      bool hasNodeOutputNameList() const { return this->nodeOutputNameList_ != nullptr;};
      void deleteNodeOutputNameList() { this->nodeOutputNameList_ = nullptr;};
      inline const vector<string> & getNodeOutputNameList() const { DARABONBA_PTR_GET_CONST(nodeOutputNameList_, vector<string>) };
      inline vector<string> getNodeOutputNameList() { DARABONBA_PTR_GET(nodeOutputNameList_, vector<string>) };
      inline SubmitCommand& setNodeOutputNameList(const vector<string> & nodeOutputNameList) { DARABONBA_PTR_SET_VALUE(nodeOutputNameList_, nodeOutputNameList) };
      inline SubmitCommand& setNodeOutputNameList(vector<string> && nodeOutputNameList) { DARABONBA_PTR_SET_RVALUE(nodeOutputNameList_, nodeOutputNameList) };


      // nodeStatus Field Functions 
      bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
      void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
      inline int32_t getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, 0) };
      inline SubmitCommand& setNodeStatus(int32_t nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


      // offlineCodeTemplateId Field Functions 
      bool hasOfflineCodeTemplateId() const { return this->offlineCodeTemplateId_ != nullptr;};
      void deleteOfflineCodeTemplateId() { this->offlineCodeTemplateId_ = nullptr;};
      inline string getOfflineCodeTemplateId() const { DARABONBA_PTR_GET_DEFAULT(offlineCodeTemplateId_, "") };
      inline SubmitCommand& setOfflineCodeTemplateId(string offlineCodeTemplateId) { DARABONBA_PTR_SET_VALUE(offlineCodeTemplateId_, offlineCodeTemplateId) };


      // offlineCodeTemplateParams Field Functions 
      bool hasOfflineCodeTemplateParams() const { return this->offlineCodeTemplateParams_ != nullptr;};
      void deleteOfflineCodeTemplateParams() { this->offlineCodeTemplateParams_ = nullptr;};
      inline const vector<SubmitCommand::OfflineCodeTemplateParams> & getOfflineCodeTemplateParams() const { DARABONBA_PTR_GET_CONST(offlineCodeTemplateParams_, vector<SubmitCommand::OfflineCodeTemplateParams>) };
      inline vector<SubmitCommand::OfflineCodeTemplateParams> getOfflineCodeTemplateParams() { DARABONBA_PTR_GET(offlineCodeTemplateParams_, vector<SubmitCommand::OfflineCodeTemplateParams>) };
      inline SubmitCommand& setOfflineCodeTemplateParams(const vector<SubmitCommand::OfflineCodeTemplateParams> & offlineCodeTemplateParams) { DARABONBA_PTR_SET_VALUE(offlineCodeTemplateParams_, offlineCodeTemplateParams) };
      inline SubmitCommand& setOfflineCodeTemplateParams(vector<SubmitCommand::OfflineCodeTemplateParams> && offlineCodeTemplateParams) { DARABONBA_PTR_SET_RVALUE(offlineCodeTemplateParams_, offlineCodeTemplateParams) };


      // paramList Field Functions 
      bool hasParamList() const { return this->paramList_ != nullptr;};
      void deleteParamList() { this->paramList_ = nullptr;};
      inline const vector<SubmitCommand::ParamList> & getParamList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<SubmitCommand::ParamList>) };
      inline vector<SubmitCommand::ParamList> getParamList() { DARABONBA_PTR_GET(paramList_, vector<SubmitCommand::ParamList>) };
      inline SubmitCommand& setParamList(const vector<SubmitCommand::ParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
      inline SubmitCommand& setParamList(vector<SubmitCommand::ParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline SubmitCommand& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline SubmitCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // pythonModuleList Field Functions 
      bool hasPythonModuleList() const { return this->pythonModuleList_ != nullptr;};
      void deletePythonModuleList() { this->pythonModuleList_ = nullptr;};
      inline const vector<string> & getPythonModuleList() const { DARABONBA_PTR_GET_CONST(pythonModuleList_, vector<string>) };
      inline vector<string> getPythonModuleList() { DARABONBA_PTR_GET(pythonModuleList_, vector<string>) };
      inline SubmitCommand& setPythonModuleList(const vector<string> & pythonModuleList) { DARABONBA_PTR_SET_VALUE(pythonModuleList_, pythonModuleList) };
      inline SubmitCommand& setPythonModuleList(vector<string> && pythonModuleList) { DARABONBA_PTR_SET_RVALUE(pythonModuleList_, pythonModuleList) };


      // resourceReferenceList Field Functions 
      bool hasResourceReferenceList() const { return this->resourceReferenceList_ != nullptr;};
      void deleteResourceReferenceList() { this->resourceReferenceList_ = nullptr;};
      inline const vector<string> & getResourceReferenceList() const { DARABONBA_PTR_GET_CONST(resourceReferenceList_, vector<string>) };
      inline vector<string> getResourceReferenceList() { DARABONBA_PTR_GET(resourceReferenceList_, vector<string>) };
      inline SubmitCommand& setResourceReferenceList(const vector<string> & resourceReferenceList) { DARABONBA_PTR_SET_VALUE(resourceReferenceList_, resourceReferenceList) };
      inline SubmitCommand& setResourceReferenceList(vector<string> && resourceReferenceList) { DARABONBA_PTR_SET_RVALUE(resourceReferenceList_, resourceReferenceList) };


      // retryOnTimeoutEnable Field Functions 
      bool hasRetryOnTimeoutEnable() const { return this->retryOnTimeoutEnable_ != nullptr;};
      void deleteRetryOnTimeoutEnable() { this->retryOnTimeoutEnable_ = nullptr;};
      inline bool getRetryOnTimeoutEnable() const { DARABONBA_PTR_GET_DEFAULT(retryOnTimeoutEnable_, false) };
      inline SubmitCommand& setRetryOnTimeoutEnable(bool retryOnTimeoutEnable) { DARABONBA_PTR_SET_VALUE(retryOnTimeoutEnable_, retryOnTimeoutEnable) };


      // schedulePeriod Field Functions 
      bool hasSchedulePeriod() const { return this->schedulePeriod_ != nullptr;};
      void deleteSchedulePeriod() { this->schedulePeriod_ = nullptr;};
      inline string getSchedulePeriod() const { DARABONBA_PTR_GET_DEFAULT(schedulePeriod_, "") };
      inline SubmitCommand& setSchedulePeriod(string schedulePeriod) { DARABONBA_PTR_SET_VALUE(schedulePeriod_, schedulePeriod) };


      // scheduleTemplate Field Functions 
      bool hasScheduleTemplate() const { return this->scheduleTemplate_ != nullptr;};
      void deleteScheduleTemplate() { this->scheduleTemplate_ = nullptr;};
      inline const SubmitCommand::ScheduleTemplate & getScheduleTemplate() const { DARABONBA_PTR_GET_CONST(scheduleTemplate_, SubmitCommand::ScheduleTemplate) };
      inline SubmitCommand::ScheduleTemplate getScheduleTemplate() { DARABONBA_PTR_GET(scheduleTemplate_, SubmitCommand::ScheduleTemplate) };
      inline SubmitCommand& setScheduleTemplate(const SubmitCommand::ScheduleTemplate & scheduleTemplate) { DARABONBA_PTR_SET_VALUE(scheduleTemplate_, scheduleTemplate) };
      inline SubmitCommand& setScheduleTemplate(SubmitCommand::ScheduleTemplate && scheduleTemplate) { DARABONBA_PTR_SET_RVALUE(scheduleTemplate_, scheduleTemplate) };


      // sparkClientInfo Field Functions 
      bool hasSparkClientInfo() const { return this->sparkClientInfo_ != nullptr;};
      void deleteSparkClientInfo() { this->sparkClientInfo_ = nullptr;};
      inline const SubmitCommand::SparkClientInfo & getSparkClientInfo() const { DARABONBA_PTR_GET_CONST(sparkClientInfo_, SubmitCommand::SparkClientInfo) };
      inline SubmitCommand::SparkClientInfo getSparkClientInfo() { DARABONBA_PTR_GET(sparkClientInfo_, SubmitCommand::SparkClientInfo) };
      inline SubmitCommand& setSparkClientInfo(const SubmitCommand::SparkClientInfo & sparkClientInfo) { DARABONBA_PTR_SET_VALUE(sparkClientInfo_, sparkClientInfo) };
      inline SubmitCommand& setSparkClientInfo(SubmitCommand::SparkClientInfo && sparkClientInfo) { DARABONBA_PTR_SET_RVALUE(sparkClientInfo_, sparkClientInfo) };


      // sparkDynamicResourceSwitch Field Functions 
      bool hasSparkDynamicResourceSwitch() const { return this->sparkDynamicResourceSwitch_ != nullptr;};
      void deleteSparkDynamicResourceSwitch() { this->sparkDynamicResourceSwitch_ = nullptr;};
      inline bool getSparkDynamicResourceSwitch() const { DARABONBA_PTR_GET_DEFAULT(sparkDynamicResourceSwitch_, false) };
      inline SubmitCommand& setSparkDynamicResourceSwitch(bool sparkDynamicResourceSwitch) { DARABONBA_PTR_SET_VALUE(sparkDynamicResourceSwitch_, sparkDynamicResourceSwitch) };


      // sparkResourceEffectScope Field Functions 
      bool hasSparkResourceEffectScope() const { return this->sparkResourceEffectScope_ != nullptr;};
      void deleteSparkResourceEffectScope() { this->sparkResourceEffectScope_ = nullptr;};
      inline string getSparkResourceEffectScope() const { DARABONBA_PTR_GET_DEFAULT(sparkResourceEffectScope_, "") };
      inline SubmitCommand& setSparkResourceEffectScope(string sparkResourceEffectScope) { DARABONBA_PTR_SET_VALUE(sparkResourceEffectScope_, sparkResourceEffectScope) };


      // sparkSqlResourceConfigMap Field Functions 
      bool hasSparkSqlResourceConfigMap() const { return this->sparkSqlResourceConfigMap_ != nullptr;};
      void deleteSparkSqlResourceConfigMap() { this->sparkSqlResourceConfigMap_ = nullptr;};
      inline const map<string, string> & getSparkSqlResourceConfigMap() const { DARABONBA_PTR_GET_CONST(sparkSqlResourceConfigMap_, map<string, string>) };
      inline map<string, string> getSparkSqlResourceConfigMap() { DARABONBA_PTR_GET(sparkSqlResourceConfigMap_, map<string, string>) };
      inline SubmitCommand& setSparkSqlResourceConfigMap(const map<string, string> & sparkSqlResourceConfigMap) { DARABONBA_PTR_SET_VALUE(sparkSqlResourceConfigMap_, sparkSqlResourceConfigMap) };
      inline SubmitCommand& setSparkSqlResourceConfigMap(map<string, string> && sparkSqlResourceConfigMap) { DARABONBA_PTR_SET_RVALUE(sparkSqlResourceConfigMap_, sparkSqlResourceConfigMap) };


      // upStreamList Field Functions 
      bool hasUpStreamList() const { return this->upStreamList_ != nullptr;};
      void deleteUpStreamList() { this->upStreamList_ = nullptr;};
      inline const vector<SubmitCommand::UpStreamList> & getUpStreamList() const { DARABONBA_PTR_GET_CONST(upStreamList_, vector<SubmitCommand::UpStreamList>) };
      inline vector<SubmitCommand::UpStreamList> getUpStreamList() { DARABONBA_PTR_GET(upStreamList_, vector<SubmitCommand::UpStreamList>) };
      inline SubmitCommand& setUpStreamList(const vector<SubmitCommand::UpStreamList> & upStreamList) { DARABONBA_PTR_SET_VALUE(upStreamList_, upStreamList) };
      inline SubmitCommand& setUpStreamList(vector<SubmitCommand::UpStreamList> && upStreamList) { DARABONBA_PTR_SET_RVALUE(upStreamList_, upStreamList) };


    protected:
      // The code of the task.
      // 
      // This parameter is required.
      shared_ptr<string> code_ {};
      // The version number of the code template.
      shared_ptr<int32_t> codeTemplateVersion_ {};
      // The comment for the submit operation.
      // 
      // This parameter is required.
      shared_ptr<string> comment_ {};
      // 条件调度；不传保留，Enable=false关闭并清除原条件，仅周期任务支持
      shared_ptr<SubmitCommand::ConditionScheduleConfig> conditionScheduleConfig_ {};
      // 不传时保留任务当前配置。
      shared_ptr<string> cpuResource_ {};
      // The cron expression for automatic scheduling. You can refer to Linux cron expressions.
      shared_ptr<string> cronExpression_ {};
      // The custom schedule interval configuration.
      shared_ptr<SubmitCommand::CustomScheduleConfig> customScheduleConfig_ {};
      // The execution engine of the task. Valid values for Python tasks:
      // - PYTHON2_7
      // - PYTHON3_7
      // - PYTHON3_11
      shared_ptr<string> engine_ {};
      // 失败重试配置。不传时保留任务当前配置。传入时整体替换该配置对象。
      shared_ptr<SubmitCommand::ExecuteRerunConfig> executeRerunConfig_ {};
      // 执行超时配置。不传时保留任务当前配置。传入时整体替换该配置对象。
      shared_ptr<SubmitCommand::ExecuteTimeOutConfig> executeTimeOutConfig_ {};
      // The ID of the node in the task directory tree.
      // 
      // This parameter is required.
      shared_ptr<int64_t> fileId_ {};
      // 不传时保留任务当前配置。
      shared_ptr<string> memoryResource_ {};
      // The name of the offline task.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The description of the task.
      shared_ptr<string> nodeDescription_ {};
      // The list of node output names.
      shared_ptr<vector<string>> nodeOutputNameList_ {};
      // The status of the node. Valid values:
      // - 1: Normal.
      // - 2: Paused.
      // - 3: Dry run.
      shared_ptr<int32_t> nodeStatus_ {};
      // The ID of the offline code template.
      shared_ptr<string> offlineCodeTemplateId_ {};
      // The list of parameters for the offline code template.
      shared_ptr<vector<SubmitCommand::OfflineCodeTemplateParams>> offlineCodeTemplateParams_ {};
      // The list of custom parameters.
      shared_ptr<vector<SubmitCommand::ParamList>> paramList_ {};
      // The scheduling priority of the task. Valid values: 1 to 9. A larger value indicates a lower priority.
      shared_ptr<int32_t> priority_ {};
      // The ID of the project to which the task belongs.
      // 
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      // The Python third-party packages required by the task.
      shared_ptr<vector<string>> pythonModuleList_ {};
      // 资源引用列表，元素为资源名称。不传时使用原有任务的资源引用；传入列表时整体替换，空列表表示清空引用。
      shared_ptr<vector<string>> resourceReferenceList_ {};
      // 超时重试开关。不传时保留任务当前配置。显式传入false时关闭。
      shared_ptr<bool> retryOnTimeoutEnable_ {};
      // The schedule period. Valid values:
      // - YEARLY: Yearly.
      // - MONTHLY: Monthly.
      // - WEEKLY: Weekly.
      // - DAILY: Daily.
      // - HOURLY: Hourly.
      // - MINUTELY: Minutely.
      shared_ptr<string> schedulePeriod_ {};
      // 基础调度模板；不传保留，空对象解除绑定，仅周期任务支持
      shared_ptr<SubmitCommand::ScheduleTemplate> scheduleTemplate_ {};
      // The Spark client.
      shared_ptr<SubmitCommand::SparkClientInfo> sparkClientInfo_ {};
      // 不传时保留任务当前配置。显式传入false时关闭。
      shared_ptr<bool> sparkDynamicResourceSwitch_ {};
      // ONLY_PROD表示仅生产环境，PROD_AND_DEV表示生产和开发环境。不传时保留任务当前配置。
      shared_ptr<string> sparkResourceEffectScope_ {};
      // Spark SQL资源配置，键为配置项名称，值为字符串。不传时保留任务当前配置。传入空Map时清空配置。
      shared_ptr<map<string, string>> sparkSqlResourceConfigMap_ {};
      // The upstream dependencies.
      shared_ptr<vector<SubmitCommand::UpStreamList>> upStreamList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->submitCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SubmitBatchTaskRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline SubmitBatchTaskRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // submitCommand Field Functions 
    bool hasSubmitCommand() const { return this->submitCommand_ != nullptr;};
    void deleteSubmitCommand() { this->submitCommand_ = nullptr;};
    inline const SubmitBatchTaskRequest::SubmitCommand & getSubmitCommand() const { DARABONBA_PTR_GET_CONST(submitCommand_, SubmitBatchTaskRequest::SubmitCommand) };
    inline SubmitBatchTaskRequest::SubmitCommand getSubmitCommand() { DARABONBA_PTR_GET(submitCommand_, SubmitBatchTaskRequest::SubmitCommand) };
    inline SubmitBatchTaskRequest& setSubmitCommand(const SubmitBatchTaskRequest::SubmitCommand & submitCommand) { DARABONBA_PTR_SET_VALUE(submitCommand_, submitCommand) };
    inline SubmitBatchTaskRequest& setSubmitCommand(SubmitBatchTaskRequest::SubmitCommand && submitCommand) { DARABONBA_PTR_SET_RVALUE(submitCommand_, submitCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The operator user ID.
    shared_ptr<string> opUserId_ {};
    // The edit request.
    // 
    // This parameter is required.
    shared_ptr<SubmitBatchTaskRequest::SubmitCommand> submitCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
