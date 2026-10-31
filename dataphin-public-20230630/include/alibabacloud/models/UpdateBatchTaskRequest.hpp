// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBATCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBATCHTASKREQUEST_HPP_
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
  class UpdateBatchTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBatchTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBatchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateBatchTaskRequest() = default ;
    UpdateBatchTaskRequest(const UpdateBatchTaskRequest &) = default ;
    UpdateBatchTaskRequest(UpdateBatchTaskRequest &&) = default ;
    UpdateBatchTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBatchTaskRequest() = default ;
    UpdateBatchTaskRequest& operator=(const UpdateBatchTaskRequest &) = default ;
    UpdateBatchTaskRequest& operator=(UpdateBatchTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BaseScheduleTemplateId, baseScheduleTemplateId_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(ConditionScheduleEnable, conditionScheduleEnable_);
        DARABONBA_PTR_TO_JSON(ConditionScheduleParamList, conditionScheduleParamList_);
        DARABONBA_PTR_TO_JSON(ConditionScheduleTemplateId, conditionScheduleTemplateId_);
        DARABONBA_PTR_TO_JSON(ContextParamList, contextParamList_);
        DARABONBA_PTR_TO_JSON(CpuResource, cpuResource_);
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(CustomScheduleConfig, customScheduleConfig_);
        DARABONBA_PTR_TO_JSON(DataSourceCatalog, dataSourceCatalog_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceSchema, dataSourceSchema_);
        DARABONBA_PTR_TO_JSON(DevHttpPath, devHttpPath_);
        DARABONBA_PTR_TO_JSON(DevResourceGroupId, devResourceGroupId_);
        DARABONBA_PTR_TO_JSON(DevelopOwnerIdList, developOwnerIdList_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(ExecuteRerunConfig, executeRerunConfig_);
        DARABONBA_PTR_TO_JSON(ExecuteTimeOutConfig, executeTimeOutConfig_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(MemoryResource, memoryResource_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NodeDescription, nodeDescription_);
        DARABONBA_PTR_TO_JSON(NodeOutputNameList, nodeOutputNameList_);
        DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
        DARABONBA_PTR_TO_JSON(OpsOwnerIdList, opsOwnerIdList_);
        DARABONBA_PTR_TO_JSON(ParamList, paramList_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ProdHttpPath, prodHttpPath_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(PythonModuleList, pythonModuleList_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceReferenceList, resourceReferenceList_);
        DARABONBA_PTR_TO_JSON(RetryOnTimeoutEnable, retryOnTimeoutEnable_);
        DARABONBA_PTR_TO_JSON(SchedulePeriod, schedulePeriod_);
        DARABONBA_PTR_TO_JSON(SparkClientInfo, sparkClientInfo_);
        DARABONBA_PTR_TO_JSON(SparkDynamicResourceSwitch, sparkDynamicResourceSwitch_);
        DARABONBA_PTR_TO_JSON(SparkResourceEffectScope, sparkResourceEffectScope_);
        DARABONBA_PTR_TO_JSON(SparkSqlResourceConfigMap, sparkSqlResourceConfigMap_);
        DARABONBA_PTR_TO_JSON(TaskTagList, taskTagList_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(UpStreamList, upStreamList_);
        DARABONBA_PTR_TO_JSON(ValidEndDate, validEndDate_);
        DARABONBA_PTR_TO_JSON(ValidStartDate, validStartDate_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BaseScheduleTemplateId, baseScheduleTemplateId_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(ConditionScheduleEnable, conditionScheduleEnable_);
        DARABONBA_PTR_FROM_JSON(ConditionScheduleParamList, conditionScheduleParamList_);
        DARABONBA_PTR_FROM_JSON(ConditionScheduleTemplateId, conditionScheduleTemplateId_);
        DARABONBA_PTR_FROM_JSON(ContextParamList, contextParamList_);
        DARABONBA_PTR_FROM_JSON(CpuResource, cpuResource_);
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(CustomScheduleConfig, customScheduleConfig_);
        DARABONBA_PTR_FROM_JSON(DataSourceCatalog, dataSourceCatalog_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceSchema, dataSourceSchema_);
        DARABONBA_PTR_FROM_JSON(DevHttpPath, devHttpPath_);
        DARABONBA_PTR_FROM_JSON(DevResourceGroupId, devResourceGroupId_);
        DARABONBA_PTR_FROM_JSON(DevelopOwnerIdList, developOwnerIdList_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(ExecuteRerunConfig, executeRerunConfig_);
        DARABONBA_PTR_FROM_JSON(ExecuteTimeOutConfig, executeTimeOutConfig_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(MemoryResource, memoryResource_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NodeDescription, nodeDescription_);
        DARABONBA_PTR_FROM_JSON(NodeOutputNameList, nodeOutputNameList_);
        DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
        DARABONBA_PTR_FROM_JSON(OpsOwnerIdList, opsOwnerIdList_);
        DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ProdHttpPath, prodHttpPath_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(PythonModuleList, pythonModuleList_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceReferenceList, resourceReferenceList_);
        DARABONBA_PTR_FROM_JSON(RetryOnTimeoutEnable, retryOnTimeoutEnable_);
        DARABONBA_PTR_FROM_JSON(SchedulePeriod, schedulePeriod_);
        DARABONBA_PTR_FROM_JSON(SparkClientInfo, sparkClientInfo_);
        DARABONBA_PTR_FROM_JSON(SparkDynamicResourceSwitch, sparkDynamicResourceSwitch_);
        DARABONBA_PTR_FROM_JSON(SparkResourceEffectScope, sparkResourceEffectScope_);
        DARABONBA_PTR_FROM_JSON(SparkSqlResourceConfigMap, sparkSqlResourceConfigMap_);
        DARABONBA_PTR_FROM_JSON(TaskTagList, taskTagList_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(UpStreamList, upStreamList_);
        DARABONBA_PTR_FROM_JSON(ValidEndDate, validEndDate_);
        DARABONBA_PTR_FROM_JSON(ValidStartDate, validStartDate_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
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
          // The cycle offset. This parameter is required when the PeriodType parameter is set to LAST_N_PERIOD.
          shared_ptr<int32_t> periodOffset_ {};
          // The type of the dependency cycle. Valid values:
          // - CURRENT_PERIOD: Current cycle.
          // - LAST_PERIOD: Last cycle.
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
        // The dependency cycle.
        shared_ptr<UpStreamList::DependPeriod> dependPeriod_ {};
        // The dependency strategy. Valid values:
        // - ALL: All.
        // - FIRST: First.
        // - LAST: Last.
        // - NEAR: Nearest.
        shared_ptr<string> dependStrategy_ {};
        // The list of dependent logical table fields.
        shared_ptr<vector<string>> fieldList_ {};
        // The type of the upstream dependency node. Valid values:
        // - PHYSICAL: Physical node.
        // - LOGICAL: Logical table dependency.
        shared_ptr<string> nodeType_ {};
        // The cycle difference. A value of 0 indicates a dependency on the same cycle. A positive integer indicates a dependency on the previous N cycles.
        // 
        // This parameter is required.
        shared_ptr<int32_t> periodDiff_ {};
        // Specifies whether the upstream node is enabled.
        shared_ptr<bool> sourceNodeEnabled_ {};
        // The ID of the upstream node.
        shared_ptr<string> sourceNodeId_ {};
        // The output name of the upstream node.
        // 
        // This parameter is required.
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
        // The parameter name.
        // 
        // This parameter is required.
        shared_ptr<string> key_ {};
        // The value of the parameter.
        // 
        // This parameter is required.
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
        // - MINUTE: Minutes.
        // - HOUR: Hours.
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

      class ContextParamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContextParamList& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(ParamKey, paramKey_);
        };
        friend void from_json(const Darabonba::Json& j, ContextParamList& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(ParamKey, paramKey_);
        };
        ContextParamList() = default ;
        ContextParamList(const ContextParamList &) = default ;
        ContextParamList(ContextParamList &&) = default ;
        ContextParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContextParamList() = default ;
        ContextParamList& operator=(const ContextParamList &) = default ;
        ContextParamList& operator=(ContextParamList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->desc_ == nullptr && this->paramKey_ == nullptr; };
        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline ContextParamList& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline ContextParamList& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // paramKey Field Functions 
        bool hasParamKey() const { return this->paramKey_ != nullptr;};
        void deleteParamKey() { this->paramKey_ = nullptr;};
        inline string getParamKey() const { DARABONBA_PTR_GET_DEFAULT(paramKey_, "") };
        inline ContextParamList& setParamKey(string paramKey) { DARABONBA_PTR_SET_VALUE(paramKey_, paramKey) };


      protected:
        // The default value.
        shared_ptr<string> defaultValue_ {};
        // The parameter description.
        shared_ptr<string> desc_ {};
        // The parameter name.
        shared_ptr<string> paramKey_ {};
      };

      class ConditionScheduleParamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConditionScheduleParamList& obj) { 
          DARABONBA_PTR_TO_JSON(ConditionName, conditionName_);
          DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(FollowScheduleParam, followScheduleParam_);
          DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
          DARABONBA_PTR_TO_JSON(ScheduleConditionJson, scheduleConditionJson_);
          DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
        };
        friend void from_json(const Darabonba::Json& j, ConditionScheduleParamList& obj) { 
          DARABONBA_PTR_FROM_JSON(ConditionName, conditionName_);
          DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(FollowScheduleParam, followScheduleParam_);
          DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
          DARABONBA_PTR_FROM_JSON(ScheduleConditionJson, scheduleConditionJson_);
          DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
        };
        ConditionScheduleParamList() = default ;
        ConditionScheduleParamList(const ConditionScheduleParamList &) = default ;
        ConditionScheduleParamList(ConditionScheduleParamList &&) = default ;
        ConditionScheduleParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConditionScheduleParamList() = default ;
        ConditionScheduleParamList& operator=(const ConditionScheduleParamList &) = default ;
        ConditionScheduleParamList& operator=(ConditionScheduleParamList &&) = default ;
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
        inline ConditionScheduleParamList& setConditionName(string conditionName) { DARABONBA_PTR_SET_VALUE(conditionName_, conditionName) };


        // cronExpression Field Functions 
        bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
        void deleteCronExpression() { this->cronExpression_ = nullptr;};
        inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
        inline ConditionScheduleParamList& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline ConditionScheduleParamList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // followScheduleParam Field Functions 
        bool hasFollowScheduleParam() const { return this->followScheduleParam_ != nullptr;};
        void deleteFollowScheduleParam() { this->followScheduleParam_ = nullptr;};
        inline bool getFollowScheduleParam() const { DARABONBA_PTR_GET_DEFAULT(followScheduleParam_, false) };
        inline ConditionScheduleParamList& setFollowScheduleParam(bool followScheduleParam) { DARABONBA_PTR_SET_VALUE(followScheduleParam_, followScheduleParam) };


        // nodeStatus Field Functions 
        bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
        void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
        inline int32_t getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, 0) };
        inline ConditionScheduleParamList& setNodeStatus(int32_t nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


        // scheduleConditionJson Field Functions 
        bool hasScheduleConditionJson() const { return this->scheduleConditionJson_ != nullptr;};
        void deleteScheduleConditionJson() { this->scheduleConditionJson_ = nullptr;};
        inline string getScheduleConditionJson() const { DARABONBA_PTR_GET_DEFAULT(scheduleConditionJson_, "") };
        inline ConditionScheduleParamList& setScheduleConditionJson(string scheduleConditionJson) { DARABONBA_PTR_SET_VALUE(scheduleConditionJson_, scheduleConditionJson) };


        // scheduleTime Field Functions 
        bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
        void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
        inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
        inline ConditionScheduleParamList& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


      protected:
        // The condition name.
        shared_ptr<string> conditionName_ {};
        // The cron expression used after the condition is met.
        shared_ptr<string> cronExpression_ {};
        // Specifies whether to enable the condition.
        shared_ptr<bool> enable_ {};
        // Specifies whether to follow the primary schedule parameter.
        shared_ptr<bool> followScheduleParam_ {};
        // The node schedule status after the condition is met. Valid values:
        // - 1: Normal.
        // - 2: Paused.
        // - 3: Dry run.
        shared_ptr<int32_t> nodeStatus_ {};
        // The JSON string of the conditional expression tree. The keys are in lower camel case characters and must be parsed by the invoker.
        shared_ptr<string> scheduleConditionJson_ {};
        // The schedule time used after the condition is met.
        shared_ptr<string> scheduleTime_ {};
      };

      virtual bool empty() const override { return this->baseScheduleTemplateId_ == nullptr
        && this->code_ == nullptr && this->conditionScheduleEnable_ == nullptr && this->conditionScheduleParamList_ == nullptr && this->conditionScheduleTemplateId_ == nullptr && this->contextParamList_ == nullptr
        && this->cpuResource_ == nullptr && this->cronExpression_ == nullptr && this->customScheduleConfig_ == nullptr && this->dataSourceCatalog_ == nullptr && this->dataSourceId_ == nullptr
        && this->dataSourceSchema_ == nullptr && this->devHttpPath_ == nullptr && this->devResourceGroupId_ == nullptr && this->developOwnerIdList_ == nullptr && this->engine_ == nullptr
        && this->executeRerunConfig_ == nullptr && this->executeTimeOutConfig_ == nullptr && this->fileId_ == nullptr && this->memoryResource_ == nullptr && this->name_ == nullptr
        && this->nodeDescription_ == nullptr && this->nodeOutputNameList_ == nullptr && this->nodeStatus_ == nullptr && this->opsOwnerIdList_ == nullptr && this->paramList_ == nullptr
        && this->priority_ == nullptr && this->prodHttpPath_ == nullptr && this->projectId_ == nullptr && this->pythonModuleList_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceReferenceList_ == nullptr && this->retryOnTimeoutEnable_ == nullptr && this->schedulePeriod_ == nullptr && this->sparkClientInfo_ == nullptr && this->sparkDynamicResourceSwitch_ == nullptr
        && this->sparkResourceEffectScope_ == nullptr && this->sparkSqlResourceConfigMap_ == nullptr && this->taskTagList_ == nullptr && this->taskType_ == nullptr && this->upStreamList_ == nullptr
        && this->validEndDate_ == nullptr && this->validStartDate_ == nullptr; };
      // baseScheduleTemplateId Field Functions 
      bool hasBaseScheduleTemplateId() const { return this->baseScheduleTemplateId_ != nullptr;};
      void deleteBaseScheduleTemplateId() { this->baseScheduleTemplateId_ = nullptr;};
      inline int64_t getBaseScheduleTemplateId() const { DARABONBA_PTR_GET_DEFAULT(baseScheduleTemplateId_, 0L) };
      inline UpdateCommand& setBaseScheduleTemplateId(int64_t baseScheduleTemplateId) { DARABONBA_PTR_SET_VALUE(baseScheduleTemplateId_, baseScheduleTemplateId) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline UpdateCommand& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // conditionScheduleEnable Field Functions 
      bool hasConditionScheduleEnable() const { return this->conditionScheduleEnable_ != nullptr;};
      void deleteConditionScheduleEnable() { this->conditionScheduleEnable_ = nullptr;};
      inline bool getConditionScheduleEnable() const { DARABONBA_PTR_GET_DEFAULT(conditionScheduleEnable_, false) };
      inline UpdateCommand& setConditionScheduleEnable(bool conditionScheduleEnable) { DARABONBA_PTR_SET_VALUE(conditionScheduleEnable_, conditionScheduleEnable) };


      // conditionScheduleParamList Field Functions 
      bool hasConditionScheduleParamList() const { return this->conditionScheduleParamList_ != nullptr;};
      void deleteConditionScheduleParamList() { this->conditionScheduleParamList_ = nullptr;};
      inline const vector<UpdateCommand::ConditionScheduleParamList> & getConditionScheduleParamList() const { DARABONBA_PTR_GET_CONST(conditionScheduleParamList_, vector<UpdateCommand::ConditionScheduleParamList>) };
      inline vector<UpdateCommand::ConditionScheduleParamList> getConditionScheduleParamList() { DARABONBA_PTR_GET(conditionScheduleParamList_, vector<UpdateCommand::ConditionScheduleParamList>) };
      inline UpdateCommand& setConditionScheduleParamList(const vector<UpdateCommand::ConditionScheduleParamList> & conditionScheduleParamList) { DARABONBA_PTR_SET_VALUE(conditionScheduleParamList_, conditionScheduleParamList) };
      inline UpdateCommand& setConditionScheduleParamList(vector<UpdateCommand::ConditionScheduleParamList> && conditionScheduleParamList) { DARABONBA_PTR_SET_RVALUE(conditionScheduleParamList_, conditionScheduleParamList) };


      // conditionScheduleTemplateId Field Functions 
      bool hasConditionScheduleTemplateId() const { return this->conditionScheduleTemplateId_ != nullptr;};
      void deleteConditionScheduleTemplateId() { this->conditionScheduleTemplateId_ = nullptr;};
      inline int64_t getConditionScheduleTemplateId() const { DARABONBA_PTR_GET_DEFAULT(conditionScheduleTemplateId_, 0L) };
      inline UpdateCommand& setConditionScheduleTemplateId(int64_t conditionScheduleTemplateId) { DARABONBA_PTR_SET_VALUE(conditionScheduleTemplateId_, conditionScheduleTemplateId) };


      // contextParamList Field Functions 
      bool hasContextParamList() const { return this->contextParamList_ != nullptr;};
      void deleteContextParamList() { this->contextParamList_ = nullptr;};
      inline const vector<UpdateCommand::ContextParamList> & getContextParamList() const { DARABONBA_PTR_GET_CONST(contextParamList_, vector<UpdateCommand::ContextParamList>) };
      inline vector<UpdateCommand::ContextParamList> getContextParamList() { DARABONBA_PTR_GET(contextParamList_, vector<UpdateCommand::ContextParamList>) };
      inline UpdateCommand& setContextParamList(const vector<UpdateCommand::ContextParamList> & contextParamList) { DARABONBA_PTR_SET_VALUE(contextParamList_, contextParamList) };
      inline UpdateCommand& setContextParamList(vector<UpdateCommand::ContextParamList> && contextParamList) { DARABONBA_PTR_SET_RVALUE(contextParamList_, contextParamList) };


      // cpuResource Field Functions 
      bool hasCpuResource() const { return this->cpuResource_ != nullptr;};
      void deleteCpuResource() { this->cpuResource_ = nullptr;};
      inline string getCpuResource() const { DARABONBA_PTR_GET_DEFAULT(cpuResource_, "") };
      inline UpdateCommand& setCpuResource(string cpuResource) { DARABONBA_PTR_SET_VALUE(cpuResource_, cpuResource) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline UpdateCommand& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // customScheduleConfig Field Functions 
      bool hasCustomScheduleConfig() const { return this->customScheduleConfig_ != nullptr;};
      void deleteCustomScheduleConfig() { this->customScheduleConfig_ = nullptr;};
      inline const UpdateCommand::CustomScheduleConfig & getCustomScheduleConfig() const { DARABONBA_PTR_GET_CONST(customScheduleConfig_, UpdateCommand::CustomScheduleConfig) };
      inline UpdateCommand::CustomScheduleConfig getCustomScheduleConfig() { DARABONBA_PTR_GET(customScheduleConfig_, UpdateCommand::CustomScheduleConfig) };
      inline UpdateCommand& setCustomScheduleConfig(const UpdateCommand::CustomScheduleConfig & customScheduleConfig) { DARABONBA_PTR_SET_VALUE(customScheduleConfig_, customScheduleConfig) };
      inline UpdateCommand& setCustomScheduleConfig(UpdateCommand::CustomScheduleConfig && customScheduleConfig) { DARABONBA_PTR_SET_RVALUE(customScheduleConfig_, customScheduleConfig) };


      // dataSourceCatalog Field Functions 
      bool hasDataSourceCatalog() const { return this->dataSourceCatalog_ != nullptr;};
      void deleteDataSourceCatalog() { this->dataSourceCatalog_ = nullptr;};
      inline string getDataSourceCatalog() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCatalog_, "") };
      inline UpdateCommand& setDataSourceCatalog(string dataSourceCatalog) { DARABONBA_PTR_SET_VALUE(dataSourceCatalog_, dataSourceCatalog) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline UpdateCommand& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceSchema Field Functions 
      bool hasDataSourceSchema() const { return this->dataSourceSchema_ != nullptr;};
      void deleteDataSourceSchema() { this->dataSourceSchema_ = nullptr;};
      inline string getDataSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(dataSourceSchema_, "") };
      inline UpdateCommand& setDataSourceSchema(string dataSourceSchema) { DARABONBA_PTR_SET_VALUE(dataSourceSchema_, dataSourceSchema) };


      // devHttpPath Field Functions 
      bool hasDevHttpPath() const { return this->devHttpPath_ != nullptr;};
      void deleteDevHttpPath() { this->devHttpPath_ = nullptr;};
      inline string getDevHttpPath() const { DARABONBA_PTR_GET_DEFAULT(devHttpPath_, "") };
      inline UpdateCommand& setDevHttpPath(string devHttpPath) { DARABONBA_PTR_SET_VALUE(devHttpPath_, devHttpPath) };


      // devResourceGroupId Field Functions 
      bool hasDevResourceGroupId() const { return this->devResourceGroupId_ != nullptr;};
      void deleteDevResourceGroupId() { this->devResourceGroupId_ = nullptr;};
      inline string getDevResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(devResourceGroupId_, "") };
      inline UpdateCommand& setDevResourceGroupId(string devResourceGroupId) { DARABONBA_PTR_SET_VALUE(devResourceGroupId_, devResourceGroupId) };


      // developOwnerIdList Field Functions 
      bool hasDevelopOwnerIdList() const { return this->developOwnerIdList_ != nullptr;};
      void deleteDevelopOwnerIdList() { this->developOwnerIdList_ = nullptr;};
      inline const vector<string> & getDevelopOwnerIdList() const { DARABONBA_PTR_GET_CONST(developOwnerIdList_, vector<string>) };
      inline vector<string> getDevelopOwnerIdList() { DARABONBA_PTR_GET(developOwnerIdList_, vector<string>) };
      inline UpdateCommand& setDevelopOwnerIdList(const vector<string> & developOwnerIdList) { DARABONBA_PTR_SET_VALUE(developOwnerIdList_, developOwnerIdList) };
      inline UpdateCommand& setDevelopOwnerIdList(vector<string> && developOwnerIdList) { DARABONBA_PTR_SET_RVALUE(developOwnerIdList_, developOwnerIdList) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline UpdateCommand& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // executeRerunConfig Field Functions 
      bool hasExecuteRerunConfig() const { return this->executeRerunConfig_ != nullptr;};
      void deleteExecuteRerunConfig() { this->executeRerunConfig_ = nullptr;};
      inline const UpdateCommand::ExecuteRerunConfig & getExecuteRerunConfig() const { DARABONBA_PTR_GET_CONST(executeRerunConfig_, UpdateCommand::ExecuteRerunConfig) };
      inline UpdateCommand::ExecuteRerunConfig getExecuteRerunConfig() { DARABONBA_PTR_GET(executeRerunConfig_, UpdateCommand::ExecuteRerunConfig) };
      inline UpdateCommand& setExecuteRerunConfig(const UpdateCommand::ExecuteRerunConfig & executeRerunConfig) { DARABONBA_PTR_SET_VALUE(executeRerunConfig_, executeRerunConfig) };
      inline UpdateCommand& setExecuteRerunConfig(UpdateCommand::ExecuteRerunConfig && executeRerunConfig) { DARABONBA_PTR_SET_RVALUE(executeRerunConfig_, executeRerunConfig) };


      // executeTimeOutConfig Field Functions 
      bool hasExecuteTimeOutConfig() const { return this->executeTimeOutConfig_ != nullptr;};
      void deleteExecuteTimeOutConfig() { this->executeTimeOutConfig_ = nullptr;};
      inline const UpdateCommand::ExecuteTimeOutConfig & getExecuteTimeOutConfig() const { DARABONBA_PTR_GET_CONST(executeTimeOutConfig_, UpdateCommand::ExecuteTimeOutConfig) };
      inline UpdateCommand::ExecuteTimeOutConfig getExecuteTimeOutConfig() { DARABONBA_PTR_GET(executeTimeOutConfig_, UpdateCommand::ExecuteTimeOutConfig) };
      inline UpdateCommand& setExecuteTimeOutConfig(const UpdateCommand::ExecuteTimeOutConfig & executeTimeOutConfig) { DARABONBA_PTR_SET_VALUE(executeTimeOutConfig_, executeTimeOutConfig) };
      inline UpdateCommand& setExecuteTimeOutConfig(UpdateCommand::ExecuteTimeOutConfig && executeTimeOutConfig) { DARABONBA_PTR_SET_RVALUE(executeTimeOutConfig_, executeTimeOutConfig) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
      inline UpdateCommand& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // memoryResource Field Functions 
      bool hasMemoryResource() const { return this->memoryResource_ != nullptr;};
      void deleteMemoryResource() { this->memoryResource_ = nullptr;};
      inline string getMemoryResource() const { DARABONBA_PTR_GET_DEFAULT(memoryResource_, "") };
      inline UpdateCommand& setMemoryResource(string memoryResource) { DARABONBA_PTR_SET_VALUE(memoryResource_, memoryResource) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nodeDescription Field Functions 
      bool hasNodeDescription() const { return this->nodeDescription_ != nullptr;};
      void deleteNodeDescription() { this->nodeDescription_ = nullptr;};
      inline string getNodeDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeDescription_, "") };
      inline UpdateCommand& setNodeDescription(string nodeDescription) { DARABONBA_PTR_SET_VALUE(nodeDescription_, nodeDescription) };


      // nodeOutputNameList Field Functions 
      bool hasNodeOutputNameList() const { return this->nodeOutputNameList_ != nullptr;};
      void deleteNodeOutputNameList() { this->nodeOutputNameList_ = nullptr;};
      inline const vector<string> & getNodeOutputNameList() const { DARABONBA_PTR_GET_CONST(nodeOutputNameList_, vector<string>) };
      inline vector<string> getNodeOutputNameList() { DARABONBA_PTR_GET(nodeOutputNameList_, vector<string>) };
      inline UpdateCommand& setNodeOutputNameList(const vector<string> & nodeOutputNameList) { DARABONBA_PTR_SET_VALUE(nodeOutputNameList_, nodeOutputNameList) };
      inline UpdateCommand& setNodeOutputNameList(vector<string> && nodeOutputNameList) { DARABONBA_PTR_SET_RVALUE(nodeOutputNameList_, nodeOutputNameList) };


      // nodeStatus Field Functions 
      bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
      void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
      inline int32_t getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, 0) };
      inline UpdateCommand& setNodeStatus(int32_t nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


      // opsOwnerIdList Field Functions 
      bool hasOpsOwnerIdList() const { return this->opsOwnerIdList_ != nullptr;};
      void deleteOpsOwnerIdList() { this->opsOwnerIdList_ = nullptr;};
      inline const vector<string> & getOpsOwnerIdList() const { DARABONBA_PTR_GET_CONST(opsOwnerIdList_, vector<string>) };
      inline vector<string> getOpsOwnerIdList() { DARABONBA_PTR_GET(opsOwnerIdList_, vector<string>) };
      inline UpdateCommand& setOpsOwnerIdList(const vector<string> & opsOwnerIdList) { DARABONBA_PTR_SET_VALUE(opsOwnerIdList_, opsOwnerIdList) };
      inline UpdateCommand& setOpsOwnerIdList(vector<string> && opsOwnerIdList) { DARABONBA_PTR_SET_RVALUE(opsOwnerIdList_, opsOwnerIdList) };


      // paramList Field Functions 
      bool hasParamList() const { return this->paramList_ != nullptr;};
      void deleteParamList() { this->paramList_ = nullptr;};
      inline const vector<UpdateCommand::ParamList> & getParamList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<UpdateCommand::ParamList>) };
      inline vector<UpdateCommand::ParamList> getParamList() { DARABONBA_PTR_GET(paramList_, vector<UpdateCommand::ParamList>) };
      inline UpdateCommand& setParamList(const vector<UpdateCommand::ParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
      inline UpdateCommand& setParamList(vector<UpdateCommand::ParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline UpdateCommand& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // prodHttpPath Field Functions 
      bool hasProdHttpPath() const { return this->prodHttpPath_ != nullptr;};
      void deleteProdHttpPath() { this->prodHttpPath_ = nullptr;};
      inline string getProdHttpPath() const { DARABONBA_PTR_GET_DEFAULT(prodHttpPath_, "") };
      inline UpdateCommand& setProdHttpPath(string prodHttpPath) { DARABONBA_PTR_SET_VALUE(prodHttpPath_, prodHttpPath) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline UpdateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // pythonModuleList Field Functions 
      bool hasPythonModuleList() const { return this->pythonModuleList_ != nullptr;};
      void deletePythonModuleList() { this->pythonModuleList_ = nullptr;};
      inline const vector<string> & getPythonModuleList() const { DARABONBA_PTR_GET_CONST(pythonModuleList_, vector<string>) };
      inline vector<string> getPythonModuleList() { DARABONBA_PTR_GET(pythonModuleList_, vector<string>) };
      inline UpdateCommand& setPythonModuleList(const vector<string> & pythonModuleList) { DARABONBA_PTR_SET_VALUE(pythonModuleList_, pythonModuleList) };
      inline UpdateCommand& setPythonModuleList(vector<string> && pythonModuleList) { DARABONBA_PTR_SET_RVALUE(pythonModuleList_, pythonModuleList) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline UpdateCommand& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceReferenceList Field Functions 
      bool hasResourceReferenceList() const { return this->resourceReferenceList_ != nullptr;};
      void deleteResourceReferenceList() { this->resourceReferenceList_ = nullptr;};
      inline const vector<string> & getResourceReferenceList() const { DARABONBA_PTR_GET_CONST(resourceReferenceList_, vector<string>) };
      inline vector<string> getResourceReferenceList() { DARABONBA_PTR_GET(resourceReferenceList_, vector<string>) };
      inline UpdateCommand& setResourceReferenceList(const vector<string> & resourceReferenceList) { DARABONBA_PTR_SET_VALUE(resourceReferenceList_, resourceReferenceList) };
      inline UpdateCommand& setResourceReferenceList(vector<string> && resourceReferenceList) { DARABONBA_PTR_SET_RVALUE(resourceReferenceList_, resourceReferenceList) };


      // retryOnTimeoutEnable Field Functions 
      bool hasRetryOnTimeoutEnable() const { return this->retryOnTimeoutEnable_ != nullptr;};
      void deleteRetryOnTimeoutEnable() { this->retryOnTimeoutEnable_ = nullptr;};
      inline bool getRetryOnTimeoutEnable() const { DARABONBA_PTR_GET_DEFAULT(retryOnTimeoutEnable_, false) };
      inline UpdateCommand& setRetryOnTimeoutEnable(bool retryOnTimeoutEnable) { DARABONBA_PTR_SET_VALUE(retryOnTimeoutEnable_, retryOnTimeoutEnable) };


      // schedulePeriod Field Functions 
      bool hasSchedulePeriod() const { return this->schedulePeriod_ != nullptr;};
      void deleteSchedulePeriod() { this->schedulePeriod_ = nullptr;};
      inline string getSchedulePeriod() const { DARABONBA_PTR_GET_DEFAULT(schedulePeriod_, "") };
      inline UpdateCommand& setSchedulePeriod(string schedulePeriod) { DARABONBA_PTR_SET_VALUE(schedulePeriod_, schedulePeriod) };


      // sparkClientInfo Field Functions 
      bool hasSparkClientInfo() const { return this->sparkClientInfo_ != nullptr;};
      void deleteSparkClientInfo() { this->sparkClientInfo_ = nullptr;};
      inline const UpdateCommand::SparkClientInfo & getSparkClientInfo() const { DARABONBA_PTR_GET_CONST(sparkClientInfo_, UpdateCommand::SparkClientInfo) };
      inline UpdateCommand::SparkClientInfo getSparkClientInfo() { DARABONBA_PTR_GET(sparkClientInfo_, UpdateCommand::SparkClientInfo) };
      inline UpdateCommand& setSparkClientInfo(const UpdateCommand::SparkClientInfo & sparkClientInfo) { DARABONBA_PTR_SET_VALUE(sparkClientInfo_, sparkClientInfo) };
      inline UpdateCommand& setSparkClientInfo(UpdateCommand::SparkClientInfo && sparkClientInfo) { DARABONBA_PTR_SET_RVALUE(sparkClientInfo_, sparkClientInfo) };


      // sparkDynamicResourceSwitch Field Functions 
      bool hasSparkDynamicResourceSwitch() const { return this->sparkDynamicResourceSwitch_ != nullptr;};
      void deleteSparkDynamicResourceSwitch() { this->sparkDynamicResourceSwitch_ = nullptr;};
      inline bool getSparkDynamicResourceSwitch() const { DARABONBA_PTR_GET_DEFAULT(sparkDynamicResourceSwitch_, false) };
      inline UpdateCommand& setSparkDynamicResourceSwitch(bool sparkDynamicResourceSwitch) { DARABONBA_PTR_SET_VALUE(sparkDynamicResourceSwitch_, sparkDynamicResourceSwitch) };


      // sparkResourceEffectScope Field Functions 
      bool hasSparkResourceEffectScope() const { return this->sparkResourceEffectScope_ != nullptr;};
      void deleteSparkResourceEffectScope() { this->sparkResourceEffectScope_ = nullptr;};
      inline string getSparkResourceEffectScope() const { DARABONBA_PTR_GET_DEFAULT(sparkResourceEffectScope_, "") };
      inline UpdateCommand& setSparkResourceEffectScope(string sparkResourceEffectScope) { DARABONBA_PTR_SET_VALUE(sparkResourceEffectScope_, sparkResourceEffectScope) };


      // sparkSqlResourceConfigMap Field Functions 
      bool hasSparkSqlResourceConfigMap() const { return this->sparkSqlResourceConfigMap_ != nullptr;};
      void deleteSparkSqlResourceConfigMap() { this->sparkSqlResourceConfigMap_ = nullptr;};
      inline string getSparkSqlResourceConfigMap() const { DARABONBA_PTR_GET_DEFAULT(sparkSqlResourceConfigMap_, "") };
      inline UpdateCommand& setSparkSqlResourceConfigMap(string sparkSqlResourceConfigMap) { DARABONBA_PTR_SET_VALUE(sparkSqlResourceConfigMap_, sparkSqlResourceConfigMap) };


      // taskTagList Field Functions 
      bool hasTaskTagList() const { return this->taskTagList_ != nullptr;};
      void deleteTaskTagList() { this->taskTagList_ = nullptr;};
      inline const vector<string> & getTaskTagList() const { DARABONBA_PTR_GET_CONST(taskTagList_, vector<string>) };
      inline vector<string> getTaskTagList() { DARABONBA_PTR_GET(taskTagList_, vector<string>) };
      inline UpdateCommand& setTaskTagList(const vector<string> & taskTagList) { DARABONBA_PTR_SET_VALUE(taskTagList_, taskTagList) };
      inline UpdateCommand& setTaskTagList(vector<string> && taskTagList) { DARABONBA_PTR_SET_RVALUE(taskTagList_, taskTagList) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
      inline UpdateCommand& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // upStreamList Field Functions 
      bool hasUpStreamList() const { return this->upStreamList_ != nullptr;};
      void deleteUpStreamList() { this->upStreamList_ = nullptr;};
      inline const vector<UpdateCommand::UpStreamList> & getUpStreamList() const { DARABONBA_PTR_GET_CONST(upStreamList_, vector<UpdateCommand::UpStreamList>) };
      inline vector<UpdateCommand::UpStreamList> getUpStreamList() { DARABONBA_PTR_GET(upStreamList_, vector<UpdateCommand::UpStreamList>) };
      inline UpdateCommand& setUpStreamList(const vector<UpdateCommand::UpStreamList> & upStreamList) { DARABONBA_PTR_SET_VALUE(upStreamList_, upStreamList) };
      inline UpdateCommand& setUpStreamList(vector<UpdateCommand::UpStreamList> && upStreamList) { DARABONBA_PTR_SET_RVALUE(upStreamList_, upStreamList) };


      // validEndDate Field Functions 
      bool hasValidEndDate() const { return this->validEndDate_ != nullptr;};
      void deleteValidEndDate() { this->validEndDate_ = nullptr;};
      inline string getValidEndDate() const { DARABONBA_PTR_GET_DEFAULT(validEndDate_, "") };
      inline UpdateCommand& setValidEndDate(string validEndDate) { DARABONBA_PTR_SET_VALUE(validEndDate_, validEndDate) };


      // validStartDate Field Functions 
      bool hasValidStartDate() const { return this->validStartDate_ != nullptr;};
      void deleteValidStartDate() { this->validStartDate_ = nullptr;};
      inline string getValidStartDate() const { DARABONBA_PTR_GET_DEFAULT(validStartDate_, "") };
      inline UpdateCommand& setValidStartDate(string validStartDate) { DARABONBA_PTR_SET_VALUE(validStartDate_, validStartDate) };


    protected:
      // The base schedule template ID. This parameter takes effect when the configuration method is set to schedule template. If this parameter and all other schedule fields are not specified, the original binding is retained.
      shared_ptr<int64_t> baseScheduleTemplateId_ {};
      // The task code.
      // 
      // This parameter is required.
      shared_ptr<string> code_ {};
      // Specifies whether to enable conditional scheduling.
      shared_ptr<bool> conditionScheduleEnable_ {};
      // The conditional scheduling configuration details. This parameter overwrites the existing configurations. If this parameter is not specified, the original configurations are retained. This parameter is supported only for periodic tasks.
      shared_ptr<vector<UpdateCommand::ConditionScheduleParamList>> conditionScheduleParamList_ {};
      // The conditional schedule template ID.
      shared_ptr<int64_t> conditionScheduleTemplateId_ {};
      // The cross-node parameters. These are output parameters declared by the current node for downstream nodes to reference. This parameter overwrites the existing parameters. If this parameter is not specified, the original parameters are retained.
      shared_ptr<vector<UpdateCommand::ContextParamList>> contextParamList_ {};
      // 不传时保留任务当前配置。
      shared_ptr<string> cpuResource_ {};
      // The cron expression for automatic scheduling. You can refer to Linux cron expressions.
      shared_ptr<string> cronExpression_ {};
      // The custom schedule interval configuration.
      shared_ptr<UpdateCommand::CustomScheduleConfig> customScheduleConfig_ {};
      // The data source catalog for database SQL tasks. This parameter takes effect only for data source types that require a catalog, such as Presto.
      shared_ptr<string> dataSourceCatalog_ {};
      // The data source ID for database SQL tasks.
      shared_ptr<string> dataSourceId_ {};
      // The data source schema for database SQL tasks. This parameter takes effect only for data source types that require a schema, such as Oracle.
      shared_ptr<string> dataSourceSchema_ {};
      // The HTTP path in the development environment for Databricks tasks.
      shared_ptr<string> devHttpPath_ {};
      // The ID of the schedule resource group for development tasks.
      shared_ptr<string> devResourceGroupId_ {};
      // The list of development owner IDs.
      shared_ptr<vector<string>> developOwnerIdList_ {};
      // The task execution engine, such as Python tasks. Valid values:
      // - PYTHON2_7: Python 2.7.
      // - PYTHON3_7: Python 3.7.
      // - PYTHON3_11: Python 3.11.
      shared_ptr<string> engine_ {};
      // 失败重试配置。不传时保留任务当前配置。传入时整体替换该配置对象。
      shared_ptr<UpdateCommand::ExecuteRerunConfig> executeRerunConfig_ {};
      // 执行超时配置。不传时保留任务当前配置。传入时整体替换该配置对象。
      shared_ptr<UpdateCommand::ExecuteTimeOutConfig> executeTimeOutConfig_ {};
      // The ID of the task directory tree node.
      // 
      // This parameter is required.
      shared_ptr<int64_t> fileId_ {};
      // 不传时保留任务当前配置。
      shared_ptr<string> memoryResource_ {};
      // The name of the offline task.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The description of the node.
      shared_ptr<string> nodeDescription_ {};
      // The list of node output names.
      shared_ptr<vector<string>> nodeOutputNameList_ {};
      // The status of the node. Valid values:
      // - 1: Normal.
      // - 2: Paused.
      // - 3: Dry run.
      shared_ptr<int32_t> nodeStatus_ {};
      // The list of O&M owner IDs. If you do not specify this parameter, the O&M owners are not modified.
      shared_ptr<vector<string>> opsOwnerIdList_ {};
      // The list of custom parameters.
      shared_ptr<vector<UpdateCommand::ParamList>> paramList_ {};
      // The scheduling priority of the node. Valid values: 1 to 9. A larger value indicates a lower priority.
      shared_ptr<int32_t> priority_ {};
      // The HTTP path in the production environment. This parameter is used for Databricks nodes.
      shared_ptr<string> prodHttpPath_ {};
      // The ID of the project to which the node belongs.
      // 
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      // The list of third-party Python packages on which the node depends.
      shared_ptr<vector<string>> pythonModuleList_ {};
      // The ID of the scheduling resource group for the production node.
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<vector<string>> resourceReferenceList_ {};
      // 超时重试开关。不传时保留任务当前配置。显式传入false时关闭。
      shared_ptr<bool> retryOnTimeoutEnable_ {};
      // The scheduling cycle. Valid values:
      // - YEARLY: Yearly.
      // - MONTHLY: Monthly.
      // - WEEKLY: Weekly.
      // - DAILY: Daily.
      // - HOURLY: Hourly.
      // - MINUTELY: Minutely.
      shared_ptr<string> schedulePeriod_ {};
      // The Spark client.
      shared_ptr<UpdateCommand::SparkClientInfo> sparkClientInfo_ {};
      // 不传时保留任务当前配置。显式传入false时关闭。
      shared_ptr<bool> sparkDynamicResourceSwitch_ {};
      // ONLY_PROD表示仅生产环境，PROD_AND_DEV表示生产和开发环境。不传时保留任务当前配置。
      shared_ptr<string> sparkResourceEffectScope_ {};
      // Spark SQL资源配置，键为配置项名称，值为字符串。不传时保留任务当前配置；传入空JSON对象{}时清空配置。
      shared_ptr<string> sparkSqlResourceConfigMap_ {};
      // The list of node tags. This parameter overwrites all existing tags. If you do not specify this parameter, the original tags remain unchanged.
      shared_ptr<vector<string>> taskTagList_ {};
      // The type of the node. Valid values:
      // - 1: Hive SQL.
      // - 5: MaxCompute SQL.
      // - 10: Shell.
      // - 21: Python.
      // 
      // This parameter is required.
      shared_ptr<int32_t> taskType_ {};
      // The list of upstream dependencies.
      shared_ptr<vector<UpdateCommand::UpStreamList>> upStreamList_ {};
      // The end date of the validity period. Format: yyyy-MM-dd. This parameter must be specified together with the ValidStartDate parameter.
      shared_ptr<string> validEndDate_ {};
      // The start date of the validity period. Format: yyyy-MM-dd. This parameter must be specified together with the ValidEndDate parameter.
      shared_ptr<string> validStartDate_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateBatchTaskRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UpdateBatchTaskRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateBatchTaskRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateBatchTaskRequest::UpdateCommand) };
    inline UpdateBatchTaskRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateBatchTaskRequest::UpdateCommand) };
    inline UpdateBatchTaskRequest& setUpdateCommand(const UpdateBatchTaskRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateBatchTaskRequest& setUpdateCommand(UpdateBatchTaskRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
    // The update request.
    // 
    // This parameter is required.
    shared_ptr<UpdateBatchTaskRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
