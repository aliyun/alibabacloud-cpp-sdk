// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTASKINFOBYVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTASKINFOBYVERSIONRESPONSEBODY_HPP_
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
  class GetBatchTaskInfoByVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTaskInfoByVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTaskInfoByVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
    };
    GetBatchTaskInfoByVersionResponseBody() = default ;
    GetBatchTaskInfoByVersionResponseBody(const GetBatchTaskInfoByVersionResponseBody &) = default ;
    GetBatchTaskInfoByVersionResponseBody(GetBatchTaskInfoByVersionResponseBody &&) = default ;
    GetBatchTaskInfoByVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTaskInfoByVersionResponseBody() = default ;
    GetBatchTaskInfoByVersionResponseBody& operator=(const GetBatchTaskInfoByVersionResponseBody &) = default ;
    GetBatchTaskInfoByVersionResponseBody& operator=(GetBatchTaskInfoByVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CodeTemplateId, codeTemplateId_);
        DARABONBA_PTR_TO_JSON(CodeTemplateVersion, codeTemplateVersion_);
        DARABONBA_PTR_TO_JSON(CpuResource, cpuResource_);
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(CustomScheduleConfig, customScheduleConfig_);
        DARABONBA_PTR_TO_JSON(DagId, dagId_);
        DARABONBA_PTR_TO_JSON(DataSourceCatalog, dataSourceCatalog_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceSchema, dataSourceSchema_);
        DARABONBA_PTR_TO_JSON(DatabricksPythonConnectInfo, databricksPythonConnectInfo_);
        DARABONBA_PTR_TO_JSON(DevelopOwnerIdList, developOwnerIdList_);
        DARABONBA_PTR_TO_JSON(DevelopOwnerNameList, developOwnerNameList_);
        DARABONBA_PTR_TO_JSON(ExecuteRerunConfig, executeRerunConfig_);
        DARABONBA_PTR_TO_JSON(ExecuteTimeOutConfig, executeTimeOutConfig_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(HasDevNode, hasDevNode_);
        DARABONBA_PTR_TO_JSON(MemoryResource, memoryResource_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NeedPublish, needPublish_);
        DARABONBA_PTR_TO_JSON(NodeDescription, nodeDescription_);
        DARABONBA_PTR_TO_JSON(NodeFrom, nodeFrom_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(NodeOutputNameList, nodeOutputNameList_);
        DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
        DARABONBA_PTR_TO_JSON(OperatorUserId, operatorUserId_);
        DARABONBA_PTR_TO_JSON(OpsOwnerIdList, opsOwnerIdList_);
        DARABONBA_PTR_TO_JSON(OpsOwnerNameList, opsOwnerNameList_);
        DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
        DARABONBA_PTR_TO_JSON(PaiConfig, paiConfig_);
        DARABONBA_PTR_TO_JSON(ParamList, paramList_);
        DARABONBA_PTR_TO_JSON(Paused, paused_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Published, published_);
        DARABONBA_PTR_TO_JSON(PythonModuleList, pythonModuleList_);
        DARABONBA_PTR_TO_JSON(PythonVersion, pythonVersion_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(Rerunable, rerunable_);
        DARABONBA_PTR_TO_JSON(RetryOnTimeoutEnable, retryOnTimeoutEnable_);
        DARABONBA_PTR_TO_JSON(SchedulePeriod, schedulePeriod_);
        DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_TO_JSON(SparkClientInfo, sparkClientInfo_);
        DARABONBA_PTR_TO_JSON(SparkDynamicResourceSwitch, sparkDynamicResourceSwitch_);
        DARABONBA_PTR_TO_JSON(SparkResourceEffectScope, sparkResourceEffectScope_);
        DARABONBA_PTR_TO_JSON(SparkSqlResourceConfigMap, sparkSqlResourceConfigMap_);
        DARABONBA_PTR_TO_JSON(SparkVersion, sparkVersion_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(UpStreamList, upStreamList_);
      };
      friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CodeTemplateId, codeTemplateId_);
        DARABONBA_PTR_FROM_JSON(CodeTemplateVersion, codeTemplateVersion_);
        DARABONBA_PTR_FROM_JSON(CpuResource, cpuResource_);
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(CustomScheduleConfig, customScheduleConfig_);
        DARABONBA_PTR_FROM_JSON(DagId, dagId_);
        DARABONBA_PTR_FROM_JSON(DataSourceCatalog, dataSourceCatalog_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceSchema, dataSourceSchema_);
        DARABONBA_PTR_FROM_JSON(DatabricksPythonConnectInfo, databricksPythonConnectInfo_);
        DARABONBA_PTR_FROM_JSON(DevelopOwnerIdList, developOwnerIdList_);
        DARABONBA_PTR_FROM_JSON(DevelopOwnerNameList, developOwnerNameList_);
        DARABONBA_PTR_FROM_JSON(ExecuteRerunConfig, executeRerunConfig_);
        DARABONBA_PTR_FROM_JSON(ExecuteTimeOutConfig, executeTimeOutConfig_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(HasDevNode, hasDevNode_);
        DARABONBA_PTR_FROM_JSON(MemoryResource, memoryResource_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NeedPublish, needPublish_);
        DARABONBA_PTR_FROM_JSON(NodeDescription, nodeDescription_);
        DARABONBA_PTR_FROM_JSON(NodeFrom, nodeFrom_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(NodeOutputNameList, nodeOutputNameList_);
        DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
        DARABONBA_PTR_FROM_JSON(OperatorUserId, operatorUserId_);
        DARABONBA_PTR_FROM_JSON(OpsOwnerIdList, opsOwnerIdList_);
        DARABONBA_PTR_FROM_JSON(OpsOwnerNameList, opsOwnerNameList_);
        DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
        DARABONBA_PTR_FROM_JSON(PaiConfig, paiConfig_);
        DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
        DARABONBA_PTR_FROM_JSON(Paused, paused_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Published, published_);
        DARABONBA_PTR_FROM_JSON(PythonModuleList, pythonModuleList_);
        DARABONBA_PTR_FROM_JSON(PythonVersion, pythonVersion_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(Rerunable, rerunable_);
        DARABONBA_PTR_FROM_JSON(RetryOnTimeoutEnable, retryOnTimeoutEnable_);
        DARABONBA_PTR_FROM_JSON(SchedulePeriod, schedulePeriod_);
        DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_FROM_JSON(SparkClientInfo, sparkClientInfo_);
        DARABONBA_PTR_FROM_JSON(SparkDynamicResourceSwitch, sparkDynamicResourceSwitch_);
        DARABONBA_PTR_FROM_JSON(SparkResourceEffectScope, sparkResourceEffectScope_);
        DARABONBA_PTR_FROM_JSON(SparkSqlResourceConfigMap, sparkSqlResourceConfigMap_);
        DARABONBA_PTR_FROM_JSON(SparkVersion, sparkVersion_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(UpStreamList, upStreamList_);
      };
      TaskInfo() = default ;
      TaskInfo(const TaskInfo &) = default ;
      TaskInfo(TaskInfo &&) = default ;
      TaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskInfo() = default ;
      TaskInfo& operator=(const TaskInfo &) = default ;
      TaskInfo& operator=(TaskInfo &&) = default ;
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
          DARABONBA_PTR_TO_JSON(SourceNodeName, sourceNodeName_);
          DARABONBA_PTR_TO_JSON(SourceNodeOutputName, sourceNodeOutputName_);
          DARABONBA_PTR_TO_JSON(SourceNodeUserName, sourceNodeUserName_);
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
          DARABONBA_PTR_FROM_JSON(SourceNodeName, sourceNodeName_);
          DARABONBA_PTR_FROM_JSON(SourceNodeOutputName, sourceNodeOutputName_);
          DARABONBA_PTR_FROM_JSON(SourceNodeUserName, sourceNodeUserName_);
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
          // The period offset. This parameter is required when the PeriodType parameter is set to LAST_N_PERIOD.
          shared_ptr<int32_t> periodOffset_ {};
          // The dependency period type. Valid values:
          // - CURRENT_PERIOD: Current period.
          // - LAST_PERIOD: Last period.
          // - LAST_N_PERIOD: Last N periods.
          // - LAST_24_HOUR: Last 24 hours.
          shared_ptr<string> periodType_ {};
        };

        virtual bool empty() const override { return this->dependPeriod_ == nullptr
        && this->dependStrategy_ == nullptr && this->fieldList_ == nullptr && this->nodeType_ == nullptr && this->periodDiff_ == nullptr && this->sourceNodeEnabled_ == nullptr
        && this->sourceNodeId_ == nullptr && this->sourceNodeName_ == nullptr && this->sourceNodeOutputName_ == nullptr && this->sourceNodeUserName_ == nullptr && this->sourceTableName_ == nullptr; };
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


        // sourceNodeName Field Functions 
        bool hasSourceNodeName() const { return this->sourceNodeName_ != nullptr;};
        void deleteSourceNodeName() { this->sourceNodeName_ = nullptr;};
        inline string getSourceNodeName() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeName_, "") };
        inline UpStreamList& setSourceNodeName(string sourceNodeName) { DARABONBA_PTR_SET_VALUE(sourceNodeName_, sourceNodeName) };


        // sourceNodeOutputName Field Functions 
        bool hasSourceNodeOutputName() const { return this->sourceNodeOutputName_ != nullptr;};
        void deleteSourceNodeOutputName() { this->sourceNodeOutputName_ = nullptr;};
        inline string getSourceNodeOutputName() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeOutputName_, "") };
        inline UpStreamList& setSourceNodeOutputName(string sourceNodeOutputName) { DARABONBA_PTR_SET_VALUE(sourceNodeOutputName_, sourceNodeOutputName) };


        // sourceNodeUserName Field Functions 
        bool hasSourceNodeUserName() const { return this->sourceNodeUserName_ != nullptr;};
        void deleteSourceNodeUserName() { this->sourceNodeUserName_ = nullptr;};
        inline string getSourceNodeUserName() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeUserName_, "") };
        inline UpStreamList& setSourceNodeUserName(string sourceNodeUserName) { DARABONBA_PTR_SET_VALUE(sourceNodeUserName_, sourceNodeUserName) };


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
        // The period difference. A value of 0 indicates a same-period dependency. A positive integer indicates a dependency on the previous N periods.
        shared_ptr<int32_t> periodDiff_ {};
        // Specifies whether the upstream node is enabled.
        shared_ptr<bool> sourceNodeEnabled_ {};
        // The ID of the upstream node.
        shared_ptr<string> sourceNodeId_ {};
        // The name of the upstream node.
        shared_ptr<string> sourceNodeName_ {};
        // The output name of the upstream node.
        shared_ptr<string> sourceNodeOutputName_ {};
        // The upstream username.
        shared_ptr<string> sourceNodeUserName_ {};
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
        // The name of the Spark client.
        shared_ptr<string> sparkClientVersion_ {};
      };

      class PythonModuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PythonModuleList& obj) { 
          DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PythonVersion, pythonVersion_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, PythonModuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PythonVersion, pythonVersion_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        PythonModuleList() = default ;
        PythonModuleList(const PythonModuleList &) = default ;
        PythonModuleList(PythonModuleList &&) = default ;
        PythonModuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PythonModuleList() = default ;
        PythonModuleList& operator=(const PythonModuleList &) = default ;
        PythonModuleList& operator=(PythonModuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->moduleId_ == nullptr
        && this->name_ == nullptr && this->pythonVersion_ == nullptr && this->version_ == nullptr; };
        // moduleId Field Functions 
        bool hasModuleId() const { return this->moduleId_ != nullptr;};
        void deleteModuleId() { this->moduleId_ = nullptr;};
        inline int64_t getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
        inline PythonModuleList& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PythonModuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pythonVersion Field Functions 
        bool hasPythonVersion() const { return this->pythonVersion_ != nullptr;};
        void deletePythonVersion() { this->pythonVersion_ = nullptr;};
        inline string getPythonVersion() const { DARABONBA_PTR_GET_DEFAULT(pythonVersion_, "") };
        inline PythonModuleList& setPythonVersion(string pythonVersion) { DARABONBA_PTR_SET_VALUE(pythonVersion_, pythonVersion) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline PythonModuleList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The ID of the third-party package.
        shared_ptr<int64_t> moduleId_ {};
        // The name of the third-party package.
        shared_ptr<string> name_ {};
        // The Python version required by the third-party package.
        shared_ptr<string> pythonVersion_ {};
        // The version of the third-party package.
        shared_ptr<string> version_ {};
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
        shared_ptr<string> key_ {};
        // The parameter value.
        shared_ptr<string> value_ {};
      };

      class PaiConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PaiConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(WorkSpaceId, workSpaceId_);
        };
        friend void from_json(const Darabonba::Json& j, PaiConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(WorkSpaceId, workSpaceId_);
        };
        PaiConfig() = default ;
        PaiConfig(const PaiConfig &) = default ;
        PaiConfig(PaiConfig &&) = default ;
        PaiConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PaiConfig() = default ;
        PaiConfig& operator=(const PaiConfig &) = default ;
        PaiConfig& operator=(PaiConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->experimentId_ == nullptr
        && this->region_ == nullptr && this->workSpaceId_ == nullptr; };
        // experimentId Field Functions 
        bool hasExperimentId() const { return this->experimentId_ != nullptr;};
        void deleteExperimentId() { this->experimentId_ = nullptr;};
        inline string getExperimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
        inline PaiConfig& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline PaiConfig& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // workSpaceId Field Functions 
        bool hasWorkSpaceId() const { return this->workSpaceId_ != nullptr;};
        void deleteWorkSpaceId() { this->workSpaceId_ = nullptr;};
        inline string getWorkSpaceId() const { DARABONBA_PTR_GET_DEFAULT(workSpaceId_, "") };
        inline PaiConfig& setWorkSpaceId(string workSpaceId) { DARABONBA_PTR_SET_VALUE(workSpaceId_, workSpaceId) };


      protected:
        // The PAI experiment ID.
        shared_ptr<string> experimentId_ {};
        // The PAI region.
        shared_ptr<string> region_ {};
        // The PAI workspace ID.
        shared_ptr<string> workSpaceId_ {};
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
        // The custom timeout period.
        shared_ptr<string> customValues_ {};
        // Specifies whether to follow the system retry configuration.
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
        // The custom retry interval for failed executions.
        shared_ptr<string> customRerunInterval_ {};
        // The custom number of retries for failed executions.
        shared_ptr<string> customRerunTimes_ {};
        // Specifies whether to follow the system retry configuration.
        shared_ptr<bool> followSystem_ {};
      };

      class DatabricksPythonConnectInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DatabricksPythonConnectInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DevHttpPath, devHttpPath_);
          DARABONBA_PTR_TO_JSON(EnableDatabricksPythonConnect, enableDatabricksPythonConnect_);
          DARABONBA_PTR_TO_JSON(ProdHttpPath, prodHttpPath_);
        };
        friend void from_json(const Darabonba::Json& j, DatabricksPythonConnectInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DevHttpPath, devHttpPath_);
          DARABONBA_PTR_FROM_JSON(EnableDatabricksPythonConnect, enableDatabricksPythonConnect_);
          DARABONBA_PTR_FROM_JSON(ProdHttpPath, prodHttpPath_);
        };
        DatabricksPythonConnectInfo() = default ;
        DatabricksPythonConnectInfo(const DatabricksPythonConnectInfo &) = default ;
        DatabricksPythonConnectInfo(DatabricksPythonConnectInfo &&) = default ;
        DatabricksPythonConnectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DatabricksPythonConnectInfo() = default ;
        DatabricksPythonConnectInfo& operator=(const DatabricksPythonConnectInfo &) = default ;
        DatabricksPythonConnectInfo& operator=(DatabricksPythonConnectInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->devHttpPath_ == nullptr
        && this->enableDatabricksPythonConnect_ == nullptr && this->prodHttpPath_ == nullptr; };
        // devHttpPath Field Functions 
        bool hasDevHttpPath() const { return this->devHttpPath_ != nullptr;};
        void deleteDevHttpPath() { this->devHttpPath_ = nullptr;};
        inline string getDevHttpPath() const { DARABONBA_PTR_GET_DEFAULT(devHttpPath_, "") };
        inline DatabricksPythonConnectInfo& setDevHttpPath(string devHttpPath) { DARABONBA_PTR_SET_VALUE(devHttpPath_, devHttpPath) };


        // enableDatabricksPythonConnect Field Functions 
        bool hasEnableDatabricksPythonConnect() const { return this->enableDatabricksPythonConnect_ != nullptr;};
        void deleteEnableDatabricksPythonConnect() { this->enableDatabricksPythonConnect_ = nullptr;};
        inline bool getEnableDatabricksPythonConnect() const { DARABONBA_PTR_GET_DEFAULT(enableDatabricksPythonConnect_, false) };
        inline DatabricksPythonConnectInfo& setEnableDatabricksPythonConnect(bool enableDatabricksPythonConnect) { DARABONBA_PTR_SET_VALUE(enableDatabricksPythonConnect_, enableDatabricksPythonConnect) };


        // prodHttpPath Field Functions 
        bool hasProdHttpPath() const { return this->prodHttpPath_ != nullptr;};
        void deleteProdHttpPath() { this->prodHttpPath_ = nullptr;};
        inline string getProdHttpPath() const { DARABONBA_PTR_GET_DEFAULT(prodHttpPath_, "") };
        inline DatabricksPythonConnectInfo& setProdHttpPath(string prodHttpPath) { DARABONBA_PTR_SET_VALUE(prodHttpPath_, prodHttpPath) };


      protected:
        // The HTTP path in the development environment.
        shared_ptr<string> devHttpPath_ {};
        // Specifies whether to enable Databricks Python Connect.
        shared_ptr<bool> enableDatabricksPythonConnect_ {};
        // The HTTP path in the production environment.
        shared_ptr<string> prodHttpPath_ {};
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
        shared_ptr<string> endTime_ {};
        // The custom interval.
        shared_ptr<int32_t> interval_ {};
        // The unit of the interval. Valid values: MINUTE and HOUR.
        shared_ptr<string> intervalUnit_ {};
        // The scheduling period.
        shared_ptr<string> schedulePeriod_ {};
        // The start time in the HH:mm format.
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->codeTemplateId_ == nullptr && this->codeTemplateVersion_ == nullptr && this->cpuResource_ == nullptr && this->cronExpression_ == nullptr && this->customScheduleConfig_ == nullptr
        && this->dagId_ == nullptr && this->dataSourceCatalog_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceSchema_ == nullptr && this->databricksPythonConnectInfo_ == nullptr
        && this->developOwnerIdList_ == nullptr && this->developOwnerNameList_ == nullptr && this->executeRerunConfig_ == nullptr && this->executeTimeOutConfig_ == nullptr && this->fileId_ == nullptr
        && this->hasDevNode_ == nullptr && this->memoryResource_ == nullptr && this->name_ == nullptr && this->needPublish_ == nullptr && this->nodeDescription_ == nullptr
        && this->nodeFrom_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeOutputNameList_ == nullptr && this->nodeStatus_ == nullptr
        && this->operatorUserId_ == nullptr && this->opsOwnerIdList_ == nullptr && this->opsOwnerNameList_ == nullptr && this->ownerName_ == nullptr && this->ownerUserId_ == nullptr
        && this->paiConfig_ == nullptr && this->paramList_ == nullptr && this->paused_ == nullptr && this->priority_ == nullptr && this->projectId_ == nullptr
        && this->published_ == nullptr && this->pythonModuleList_ == nullptr && this->pythonVersion_ == nullptr && this->remark_ == nullptr && this->rerunable_ == nullptr
        && this->retryOnTimeoutEnable_ == nullptr && this->schedulePeriod_ == nullptr && this->scheduleType_ == nullptr && this->sparkClientInfo_ == nullptr && this->sparkDynamicResourceSwitch_ == nullptr
        && this->sparkResourceEffectScope_ == nullptr && this->sparkSqlResourceConfigMap_ == nullptr && this->sparkVersion_ == nullptr && this->status_ == nullptr && this->taskType_ == nullptr
        && this->upStreamList_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline TaskInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // codeTemplateId Field Functions 
      bool hasCodeTemplateId() const { return this->codeTemplateId_ != nullptr;};
      void deleteCodeTemplateId() { this->codeTemplateId_ = nullptr;};
      inline string getCodeTemplateId() const { DARABONBA_PTR_GET_DEFAULT(codeTemplateId_, "") };
      inline TaskInfo& setCodeTemplateId(string codeTemplateId) { DARABONBA_PTR_SET_VALUE(codeTemplateId_, codeTemplateId) };


      // codeTemplateVersion Field Functions 
      bool hasCodeTemplateVersion() const { return this->codeTemplateVersion_ != nullptr;};
      void deleteCodeTemplateVersion() { this->codeTemplateVersion_ = nullptr;};
      inline int32_t getCodeTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(codeTemplateVersion_, 0) };
      inline TaskInfo& setCodeTemplateVersion(int32_t codeTemplateVersion) { DARABONBA_PTR_SET_VALUE(codeTemplateVersion_, codeTemplateVersion) };


      // cpuResource Field Functions 
      bool hasCpuResource() const { return this->cpuResource_ != nullptr;};
      void deleteCpuResource() { this->cpuResource_ = nullptr;};
      inline string getCpuResource() const { DARABONBA_PTR_GET_DEFAULT(cpuResource_, "") };
      inline TaskInfo& setCpuResource(string cpuResource) { DARABONBA_PTR_SET_VALUE(cpuResource_, cpuResource) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline TaskInfo& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // customScheduleConfig Field Functions 
      bool hasCustomScheduleConfig() const { return this->customScheduleConfig_ != nullptr;};
      void deleteCustomScheduleConfig() { this->customScheduleConfig_ = nullptr;};
      inline const TaskInfo::CustomScheduleConfig & getCustomScheduleConfig() const { DARABONBA_PTR_GET_CONST(customScheduleConfig_, TaskInfo::CustomScheduleConfig) };
      inline TaskInfo::CustomScheduleConfig getCustomScheduleConfig() { DARABONBA_PTR_GET(customScheduleConfig_, TaskInfo::CustomScheduleConfig) };
      inline TaskInfo& setCustomScheduleConfig(const TaskInfo::CustomScheduleConfig & customScheduleConfig) { DARABONBA_PTR_SET_VALUE(customScheduleConfig_, customScheduleConfig) };
      inline TaskInfo& setCustomScheduleConfig(TaskInfo::CustomScheduleConfig && customScheduleConfig) { DARABONBA_PTR_SET_RVALUE(customScheduleConfig_, customScheduleConfig) };


      // dagId Field Functions 
      bool hasDagId() const { return this->dagId_ != nullptr;};
      void deleteDagId() { this->dagId_ = nullptr;};
      inline string getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, "") };
      inline TaskInfo& setDagId(string dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


      // dataSourceCatalog Field Functions 
      bool hasDataSourceCatalog() const { return this->dataSourceCatalog_ != nullptr;};
      void deleteDataSourceCatalog() { this->dataSourceCatalog_ = nullptr;};
      inline string getDataSourceCatalog() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCatalog_, "") };
      inline TaskInfo& setDataSourceCatalog(string dataSourceCatalog) { DARABONBA_PTR_SET_VALUE(dataSourceCatalog_, dataSourceCatalog) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline TaskInfo& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceSchema Field Functions 
      bool hasDataSourceSchema() const { return this->dataSourceSchema_ != nullptr;};
      void deleteDataSourceSchema() { this->dataSourceSchema_ = nullptr;};
      inline string getDataSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(dataSourceSchema_, "") };
      inline TaskInfo& setDataSourceSchema(string dataSourceSchema) { DARABONBA_PTR_SET_VALUE(dataSourceSchema_, dataSourceSchema) };


      // databricksPythonConnectInfo Field Functions 
      bool hasDatabricksPythonConnectInfo() const { return this->databricksPythonConnectInfo_ != nullptr;};
      void deleteDatabricksPythonConnectInfo() { this->databricksPythonConnectInfo_ = nullptr;};
      inline const TaskInfo::DatabricksPythonConnectInfo & getDatabricksPythonConnectInfo() const { DARABONBA_PTR_GET_CONST(databricksPythonConnectInfo_, TaskInfo::DatabricksPythonConnectInfo) };
      inline TaskInfo::DatabricksPythonConnectInfo getDatabricksPythonConnectInfo() { DARABONBA_PTR_GET(databricksPythonConnectInfo_, TaskInfo::DatabricksPythonConnectInfo) };
      inline TaskInfo& setDatabricksPythonConnectInfo(const TaskInfo::DatabricksPythonConnectInfo & databricksPythonConnectInfo) { DARABONBA_PTR_SET_VALUE(databricksPythonConnectInfo_, databricksPythonConnectInfo) };
      inline TaskInfo& setDatabricksPythonConnectInfo(TaskInfo::DatabricksPythonConnectInfo && databricksPythonConnectInfo) { DARABONBA_PTR_SET_RVALUE(databricksPythonConnectInfo_, databricksPythonConnectInfo) };


      // developOwnerIdList Field Functions 
      bool hasDevelopOwnerIdList() const { return this->developOwnerIdList_ != nullptr;};
      void deleteDevelopOwnerIdList() { this->developOwnerIdList_ = nullptr;};
      inline const vector<string> & getDevelopOwnerIdList() const { DARABONBA_PTR_GET_CONST(developOwnerIdList_, vector<string>) };
      inline vector<string> getDevelopOwnerIdList() { DARABONBA_PTR_GET(developOwnerIdList_, vector<string>) };
      inline TaskInfo& setDevelopOwnerIdList(const vector<string> & developOwnerIdList) { DARABONBA_PTR_SET_VALUE(developOwnerIdList_, developOwnerIdList) };
      inline TaskInfo& setDevelopOwnerIdList(vector<string> && developOwnerIdList) { DARABONBA_PTR_SET_RVALUE(developOwnerIdList_, developOwnerIdList) };


      // developOwnerNameList Field Functions 
      bool hasDevelopOwnerNameList() const { return this->developOwnerNameList_ != nullptr;};
      void deleteDevelopOwnerNameList() { this->developOwnerNameList_ = nullptr;};
      inline const vector<string> & getDevelopOwnerNameList() const { DARABONBA_PTR_GET_CONST(developOwnerNameList_, vector<string>) };
      inline vector<string> getDevelopOwnerNameList() { DARABONBA_PTR_GET(developOwnerNameList_, vector<string>) };
      inline TaskInfo& setDevelopOwnerNameList(const vector<string> & developOwnerNameList) { DARABONBA_PTR_SET_VALUE(developOwnerNameList_, developOwnerNameList) };
      inline TaskInfo& setDevelopOwnerNameList(vector<string> && developOwnerNameList) { DARABONBA_PTR_SET_RVALUE(developOwnerNameList_, developOwnerNameList) };


      // executeRerunConfig Field Functions 
      bool hasExecuteRerunConfig() const { return this->executeRerunConfig_ != nullptr;};
      void deleteExecuteRerunConfig() { this->executeRerunConfig_ = nullptr;};
      inline const TaskInfo::ExecuteRerunConfig & getExecuteRerunConfig() const { DARABONBA_PTR_GET_CONST(executeRerunConfig_, TaskInfo::ExecuteRerunConfig) };
      inline TaskInfo::ExecuteRerunConfig getExecuteRerunConfig() { DARABONBA_PTR_GET(executeRerunConfig_, TaskInfo::ExecuteRerunConfig) };
      inline TaskInfo& setExecuteRerunConfig(const TaskInfo::ExecuteRerunConfig & executeRerunConfig) { DARABONBA_PTR_SET_VALUE(executeRerunConfig_, executeRerunConfig) };
      inline TaskInfo& setExecuteRerunConfig(TaskInfo::ExecuteRerunConfig && executeRerunConfig) { DARABONBA_PTR_SET_RVALUE(executeRerunConfig_, executeRerunConfig) };


      // executeTimeOutConfig Field Functions 
      bool hasExecuteTimeOutConfig() const { return this->executeTimeOutConfig_ != nullptr;};
      void deleteExecuteTimeOutConfig() { this->executeTimeOutConfig_ = nullptr;};
      inline const TaskInfo::ExecuteTimeOutConfig & getExecuteTimeOutConfig() const { DARABONBA_PTR_GET_CONST(executeTimeOutConfig_, TaskInfo::ExecuteTimeOutConfig) };
      inline TaskInfo::ExecuteTimeOutConfig getExecuteTimeOutConfig() { DARABONBA_PTR_GET(executeTimeOutConfig_, TaskInfo::ExecuteTimeOutConfig) };
      inline TaskInfo& setExecuteTimeOutConfig(const TaskInfo::ExecuteTimeOutConfig & executeTimeOutConfig) { DARABONBA_PTR_SET_VALUE(executeTimeOutConfig_, executeTimeOutConfig) };
      inline TaskInfo& setExecuteTimeOutConfig(TaskInfo::ExecuteTimeOutConfig && executeTimeOutConfig) { DARABONBA_PTR_SET_RVALUE(executeTimeOutConfig_, executeTimeOutConfig) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
      inline TaskInfo& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // hasDevNode Field Functions 
      bool hasHasDevNode() const { return this->hasDevNode_ != nullptr;};
      void deleteHasDevNode() { this->hasDevNode_ = nullptr;};
      inline bool getHasDevNode() const { DARABONBA_PTR_GET_DEFAULT(hasDevNode_, false) };
      inline TaskInfo& setHasDevNode(bool hasDevNode) { DARABONBA_PTR_SET_VALUE(hasDevNode_, hasDevNode) };


      // memoryResource Field Functions 
      bool hasMemoryResource() const { return this->memoryResource_ != nullptr;};
      void deleteMemoryResource() { this->memoryResource_ = nullptr;};
      inline string getMemoryResource() const { DARABONBA_PTR_GET_DEFAULT(memoryResource_, "") };
      inline TaskInfo& setMemoryResource(string memoryResource) { DARABONBA_PTR_SET_VALUE(memoryResource_, memoryResource) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TaskInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // needPublish Field Functions 
      bool hasNeedPublish() const { return this->needPublish_ != nullptr;};
      void deleteNeedPublish() { this->needPublish_ = nullptr;};
      inline bool getNeedPublish() const { DARABONBA_PTR_GET_DEFAULT(needPublish_, false) };
      inline TaskInfo& setNeedPublish(bool needPublish) { DARABONBA_PTR_SET_VALUE(needPublish_, needPublish) };


      // nodeDescription Field Functions 
      bool hasNodeDescription() const { return this->nodeDescription_ != nullptr;};
      void deleteNodeDescription() { this->nodeDescription_ = nullptr;};
      inline string getNodeDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeDescription_, "") };
      inline TaskInfo& setNodeDescription(string nodeDescription) { DARABONBA_PTR_SET_VALUE(nodeDescription_, nodeDescription) };


      // nodeFrom Field Functions 
      bool hasNodeFrom() const { return this->nodeFrom_ != nullptr;};
      void deleteNodeFrom() { this->nodeFrom_ = nullptr;};
      inline string getNodeFrom() const { DARABONBA_PTR_GET_DEFAULT(nodeFrom_, "") };
      inline TaskInfo& setNodeFrom(string nodeFrom) { DARABONBA_PTR_SET_VALUE(nodeFrom_, nodeFrom) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline TaskInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline TaskInfo& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // nodeOutputNameList Field Functions 
      bool hasNodeOutputNameList() const { return this->nodeOutputNameList_ != nullptr;};
      void deleteNodeOutputNameList() { this->nodeOutputNameList_ = nullptr;};
      inline const vector<string> & getNodeOutputNameList() const { DARABONBA_PTR_GET_CONST(nodeOutputNameList_, vector<string>) };
      inline vector<string> getNodeOutputNameList() { DARABONBA_PTR_GET(nodeOutputNameList_, vector<string>) };
      inline TaskInfo& setNodeOutputNameList(const vector<string> & nodeOutputNameList) { DARABONBA_PTR_SET_VALUE(nodeOutputNameList_, nodeOutputNameList) };
      inline TaskInfo& setNodeOutputNameList(vector<string> && nodeOutputNameList) { DARABONBA_PTR_SET_RVALUE(nodeOutputNameList_, nodeOutputNameList) };


      // nodeStatus Field Functions 
      bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
      void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
      inline int32_t getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, 0) };
      inline TaskInfo& setNodeStatus(int32_t nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


      // operatorUserId Field Functions 
      bool hasOperatorUserId() const { return this->operatorUserId_ != nullptr;};
      void deleteOperatorUserId() { this->operatorUserId_ = nullptr;};
      inline string getOperatorUserId() const { DARABONBA_PTR_GET_DEFAULT(operatorUserId_, "") };
      inline TaskInfo& setOperatorUserId(string operatorUserId) { DARABONBA_PTR_SET_VALUE(operatorUserId_, operatorUserId) };


      // opsOwnerIdList Field Functions 
      bool hasOpsOwnerIdList() const { return this->opsOwnerIdList_ != nullptr;};
      void deleteOpsOwnerIdList() { this->opsOwnerIdList_ = nullptr;};
      inline const vector<string> & getOpsOwnerIdList() const { DARABONBA_PTR_GET_CONST(opsOwnerIdList_, vector<string>) };
      inline vector<string> getOpsOwnerIdList() { DARABONBA_PTR_GET(opsOwnerIdList_, vector<string>) };
      inline TaskInfo& setOpsOwnerIdList(const vector<string> & opsOwnerIdList) { DARABONBA_PTR_SET_VALUE(opsOwnerIdList_, opsOwnerIdList) };
      inline TaskInfo& setOpsOwnerIdList(vector<string> && opsOwnerIdList) { DARABONBA_PTR_SET_RVALUE(opsOwnerIdList_, opsOwnerIdList) };


      // opsOwnerNameList Field Functions 
      bool hasOpsOwnerNameList() const { return this->opsOwnerNameList_ != nullptr;};
      void deleteOpsOwnerNameList() { this->opsOwnerNameList_ = nullptr;};
      inline const vector<string> & getOpsOwnerNameList() const { DARABONBA_PTR_GET_CONST(opsOwnerNameList_, vector<string>) };
      inline vector<string> getOpsOwnerNameList() { DARABONBA_PTR_GET(opsOwnerNameList_, vector<string>) };
      inline TaskInfo& setOpsOwnerNameList(const vector<string> & opsOwnerNameList) { DARABONBA_PTR_SET_VALUE(opsOwnerNameList_, opsOwnerNameList) };
      inline TaskInfo& setOpsOwnerNameList(vector<string> && opsOwnerNameList) { DARABONBA_PTR_SET_RVALUE(opsOwnerNameList_, opsOwnerNameList) };


      // ownerName Field Functions 
      bool hasOwnerName() const { return this->ownerName_ != nullptr;};
      void deleteOwnerName() { this->ownerName_ = nullptr;};
      inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
      inline TaskInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


      // ownerUserId Field Functions 
      bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
      void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
      inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
      inline TaskInfo& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


      // paiConfig Field Functions 
      bool hasPaiConfig() const { return this->paiConfig_ != nullptr;};
      void deletePaiConfig() { this->paiConfig_ = nullptr;};
      inline const TaskInfo::PaiConfig & getPaiConfig() const { DARABONBA_PTR_GET_CONST(paiConfig_, TaskInfo::PaiConfig) };
      inline TaskInfo::PaiConfig getPaiConfig() { DARABONBA_PTR_GET(paiConfig_, TaskInfo::PaiConfig) };
      inline TaskInfo& setPaiConfig(const TaskInfo::PaiConfig & paiConfig) { DARABONBA_PTR_SET_VALUE(paiConfig_, paiConfig) };
      inline TaskInfo& setPaiConfig(TaskInfo::PaiConfig && paiConfig) { DARABONBA_PTR_SET_RVALUE(paiConfig_, paiConfig) };


      // paramList Field Functions 
      bool hasParamList() const { return this->paramList_ != nullptr;};
      void deleteParamList() { this->paramList_ = nullptr;};
      inline const vector<TaskInfo::ParamList> & getParamList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<TaskInfo::ParamList>) };
      inline vector<TaskInfo::ParamList> getParamList() { DARABONBA_PTR_GET(paramList_, vector<TaskInfo::ParamList>) };
      inline TaskInfo& setParamList(const vector<TaskInfo::ParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
      inline TaskInfo& setParamList(vector<TaskInfo::ParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


      // paused Field Functions 
      bool hasPaused() const { return this->paused_ != nullptr;};
      void deletePaused() { this->paused_ = nullptr;};
      inline bool getPaused() const { DARABONBA_PTR_GET_DEFAULT(paused_, false) };
      inline TaskInfo& setPaused(bool paused) { DARABONBA_PTR_SET_VALUE(paused_, paused) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline TaskInfo& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline TaskInfo& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // published Field Functions 
      bool hasPublished() const { return this->published_ != nullptr;};
      void deletePublished() { this->published_ = nullptr;};
      inline bool getPublished() const { DARABONBA_PTR_GET_DEFAULT(published_, false) };
      inline TaskInfo& setPublished(bool published) { DARABONBA_PTR_SET_VALUE(published_, published) };


      // pythonModuleList Field Functions 
      bool hasPythonModuleList() const { return this->pythonModuleList_ != nullptr;};
      void deletePythonModuleList() { this->pythonModuleList_ = nullptr;};
      inline const vector<TaskInfo::PythonModuleList> & getPythonModuleList() const { DARABONBA_PTR_GET_CONST(pythonModuleList_, vector<TaskInfo::PythonModuleList>) };
      inline vector<TaskInfo::PythonModuleList> getPythonModuleList() { DARABONBA_PTR_GET(pythonModuleList_, vector<TaskInfo::PythonModuleList>) };
      inline TaskInfo& setPythonModuleList(const vector<TaskInfo::PythonModuleList> & pythonModuleList) { DARABONBA_PTR_SET_VALUE(pythonModuleList_, pythonModuleList) };
      inline TaskInfo& setPythonModuleList(vector<TaskInfo::PythonModuleList> && pythonModuleList) { DARABONBA_PTR_SET_RVALUE(pythonModuleList_, pythonModuleList) };


      // pythonVersion Field Functions 
      bool hasPythonVersion() const { return this->pythonVersion_ != nullptr;};
      void deletePythonVersion() { this->pythonVersion_ = nullptr;};
      inline string getPythonVersion() const { DARABONBA_PTR_GET_DEFAULT(pythonVersion_, "") };
      inline TaskInfo& setPythonVersion(string pythonVersion) { DARABONBA_PTR_SET_VALUE(pythonVersion_, pythonVersion) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline TaskInfo& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // rerunable Field Functions 
      bool hasRerunable() const { return this->rerunable_ != nullptr;};
      void deleteRerunable() { this->rerunable_ = nullptr;};
      inline bool getRerunable() const { DARABONBA_PTR_GET_DEFAULT(rerunable_, false) };
      inline TaskInfo& setRerunable(bool rerunable) { DARABONBA_PTR_SET_VALUE(rerunable_, rerunable) };


      // retryOnTimeoutEnable Field Functions 
      bool hasRetryOnTimeoutEnable() const { return this->retryOnTimeoutEnable_ != nullptr;};
      void deleteRetryOnTimeoutEnable() { this->retryOnTimeoutEnable_ = nullptr;};
      inline bool getRetryOnTimeoutEnable() const { DARABONBA_PTR_GET_DEFAULT(retryOnTimeoutEnable_, false) };
      inline TaskInfo& setRetryOnTimeoutEnable(bool retryOnTimeoutEnable) { DARABONBA_PTR_SET_VALUE(retryOnTimeoutEnable_, retryOnTimeoutEnable) };


      // schedulePeriod Field Functions 
      bool hasSchedulePeriod() const { return this->schedulePeriod_ != nullptr;};
      void deleteSchedulePeriod() { this->schedulePeriod_ = nullptr;};
      inline string getSchedulePeriod() const { DARABONBA_PTR_GET_DEFAULT(schedulePeriod_, "") };
      inline TaskInfo& setSchedulePeriod(string schedulePeriod) { DARABONBA_PTR_SET_VALUE(schedulePeriod_, schedulePeriod) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline int32_t getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, 0) };
      inline TaskInfo& setScheduleType(int32_t scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // sparkClientInfo Field Functions 
      bool hasSparkClientInfo() const { return this->sparkClientInfo_ != nullptr;};
      void deleteSparkClientInfo() { this->sparkClientInfo_ = nullptr;};
      inline const TaskInfo::SparkClientInfo & getSparkClientInfo() const { DARABONBA_PTR_GET_CONST(sparkClientInfo_, TaskInfo::SparkClientInfo) };
      inline TaskInfo::SparkClientInfo getSparkClientInfo() { DARABONBA_PTR_GET(sparkClientInfo_, TaskInfo::SparkClientInfo) };
      inline TaskInfo& setSparkClientInfo(const TaskInfo::SparkClientInfo & sparkClientInfo) { DARABONBA_PTR_SET_VALUE(sparkClientInfo_, sparkClientInfo) };
      inline TaskInfo& setSparkClientInfo(TaskInfo::SparkClientInfo && sparkClientInfo) { DARABONBA_PTR_SET_RVALUE(sparkClientInfo_, sparkClientInfo) };


      // sparkDynamicResourceSwitch Field Functions 
      bool hasSparkDynamicResourceSwitch() const { return this->sparkDynamicResourceSwitch_ != nullptr;};
      void deleteSparkDynamicResourceSwitch() { this->sparkDynamicResourceSwitch_ = nullptr;};
      inline bool getSparkDynamicResourceSwitch() const { DARABONBA_PTR_GET_DEFAULT(sparkDynamicResourceSwitch_, false) };
      inline TaskInfo& setSparkDynamicResourceSwitch(bool sparkDynamicResourceSwitch) { DARABONBA_PTR_SET_VALUE(sparkDynamicResourceSwitch_, sparkDynamicResourceSwitch) };


      // sparkResourceEffectScope Field Functions 
      bool hasSparkResourceEffectScope() const { return this->sparkResourceEffectScope_ != nullptr;};
      void deleteSparkResourceEffectScope() { this->sparkResourceEffectScope_ = nullptr;};
      inline string getSparkResourceEffectScope() const { DARABONBA_PTR_GET_DEFAULT(sparkResourceEffectScope_, "") };
      inline TaskInfo& setSparkResourceEffectScope(string sparkResourceEffectScope) { DARABONBA_PTR_SET_VALUE(sparkResourceEffectScope_, sparkResourceEffectScope) };


      // sparkSqlResourceConfigMap Field Functions 
      bool hasSparkSqlResourceConfigMap() const { return this->sparkSqlResourceConfigMap_ != nullptr;};
      void deleteSparkSqlResourceConfigMap() { this->sparkSqlResourceConfigMap_ = nullptr;};
      inline string getSparkSqlResourceConfigMap() const { DARABONBA_PTR_GET_DEFAULT(sparkSqlResourceConfigMap_, "") };
      inline TaskInfo& setSparkSqlResourceConfigMap(string sparkSqlResourceConfigMap) { DARABONBA_PTR_SET_VALUE(sparkSqlResourceConfigMap_, sparkSqlResourceConfigMap) };


      // sparkVersion Field Functions 
      bool hasSparkVersion() const { return this->sparkVersion_ != nullptr;};
      void deleteSparkVersion() { this->sparkVersion_ = nullptr;};
      inline string getSparkVersion() const { DARABONBA_PTR_GET_DEFAULT(sparkVersion_, "") };
      inline TaskInfo& setSparkVersion(string sparkVersion) { DARABONBA_PTR_SET_VALUE(sparkVersion_, sparkVersion) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
      inline TaskInfo& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // upStreamList Field Functions 
      bool hasUpStreamList() const { return this->upStreamList_ != nullptr;};
      void deleteUpStreamList() { this->upStreamList_ = nullptr;};
      inline const vector<TaskInfo::UpStreamList> & getUpStreamList() const { DARABONBA_PTR_GET_CONST(upStreamList_, vector<TaskInfo::UpStreamList>) };
      inline vector<TaskInfo::UpStreamList> getUpStreamList() { DARABONBA_PTR_GET(upStreamList_, vector<TaskInfo::UpStreamList>) };
      inline TaskInfo& setUpStreamList(const vector<TaskInfo::UpStreamList> & upStreamList) { DARABONBA_PTR_SET_VALUE(upStreamList_, upStreamList) };
      inline TaskInfo& setUpStreamList(vector<TaskInfo::UpStreamList> && upStreamList) { DARABONBA_PTR_SET_RVALUE(upStreamList_, upStreamList) };


    protected:
      // The code of the node.
      shared_ptr<string> code_ {};
      // The ID of the offline code template.
      shared_ptr<string> codeTemplateId_ {};
      // The version of the offline code template.
      shared_ptr<int32_t> codeTemplateVersion_ {};
      // The current CPU resource configuration of the node. If queried by version, this is the configuration of the corresponding version.
      shared_ptr<string> cpuResource_ {};
      // The cron expression for automatic scheduling. You can refer to Linux cron expressions.
      shared_ptr<string> cronExpression_ {};
      // The custom scheduling interval configuration.
      shared_ptr<TaskInfo::CustomScheduleConfig> customScheduleConfig_ {};
      // The ID of the DAG to which the node belongs.
      shared_ptr<string> dagId_ {};
      // The catalog of the data source. This parameter applies only to database SQL nodes and data source types that require a catalog, such as Presto.
      shared_ptr<string> dataSourceCatalog_ {};
      // The ID of the data source for the database SQL node.
      shared_ptr<string> dataSourceId_ {};
      // The schema of the data source. This parameter applies only to database SQL nodes and data source types that require a schema, such as Oracle.
      shared_ptr<string> dataSourceSchema_ {};
      // The Python connection information.
      shared_ptr<TaskInfo::DatabricksPythonConnectInfo> databricksPythonConnectInfo_ {};
      // The IDs of the developers.
      shared_ptr<vector<string>> developOwnerIdList_ {};
      // The names of the developers.
      shared_ptr<vector<string>> developOwnerNameList_ {};
      // The retry configuration for failed executions. This is the current configuration of the node. If queried by version, this is the configuration of the corresponding version.
      shared_ptr<TaskInfo::ExecuteRerunConfig> executeRerunConfig_ {};
      // The execution timeout configuration. This is the current configuration of the node. If queried by version, this is the configuration of the corresponding version.
      shared_ptr<TaskInfo::ExecuteTimeOutConfig> executeTimeOutConfig_ {};
      // The node ID of the task directory tree.
      shared_ptr<int64_t> fileId_ {};
      // Indicates whether a development environment node exists.
      shared_ptr<bool> hasDevNode_ {};
      // The current CPU resource configuration of the node. If queried by version, this is the configuration of the corresponding version.
      shared_ptr<string> memoryResource_ {};
      // The task name.
      shared_ptr<string> name_ {};
      // Specifies whether publishing is required.
      shared_ptr<bool> needPublish_ {};
      // The task description.
      shared_ptr<string> nodeDescription_ {};
      // The source of the node, which indicates the organization or application that created the node.
      shared_ptr<string> nodeFrom_ {};
      // The node ID.
      shared_ptr<string> nodeId_ {};
      // The node name.
      shared_ptr<string> nodeName_ {};
      // The list of node output names.
      shared_ptr<vector<string>> nodeOutputNameList_ {};
      // The node status. Valid values: 1: Normal. 2: Paused. 3: Dry run.
      shared_ptr<int32_t> nodeStatus_ {};
      // The ID of the user who performs the current operation.
      shared_ptr<string> operatorUserId_ {};
      // The list of O&M owner IDs.
      shared_ptr<vector<string>> opsOwnerIdList_ {};
      // The list of O&M owner names.
      shared_ptr<vector<string>> opsOwnerNameList_ {};
      // The name of the node owner.
      shared_ptr<string> ownerName_ {};
      // The user ID of the node owner.
      shared_ptr<string> ownerUserId_ {};
      // The PAI configuration.
      shared_ptr<TaskInfo::PaiConfig> paiConfig_ {};
      // The list of custom parameters for the node.
      shared_ptr<vector<TaskInfo::ParamList>> paramList_ {};
      // Specifies whether node scheduling is paused.
      shared_ptr<bool> paused_ {};
      // The task scheduling priority. Valid values: 1 to 9. A larger value indicates a lower priority.
      shared_ptr<int32_t> priority_ {};
      // The project ID.
      shared_ptr<int64_t> projectId_ {};
      // Specifies whether the task is published.
      shared_ptr<bool> published_ {};
      // The list of third-party packages required by the Python task.
      shared_ptr<vector<TaskInfo::PythonModuleList>> pythonModuleList_ {};
      // The Python version for the Python task, such as Python 3.7.
      shared_ptr<string> pythonVersion_ {};
      // The remarks.
      shared_ptr<string> remark_ {};
      // Specifies whether the node can be rerun.
      shared_ptr<bool> rerunable_ {};
      // Specifies whether to enable retry on timeout. This reflects the current configuration of the node. When queried by version, it reflects the configuration of the corresponding version.
      shared_ptr<bool> retryOnTimeoutEnable_ {};
      // The schedule period. Valid values:
      // - YEARLY: Yearly.
      // - MONTHLY: Monthly.
      // - WEEKLY: Weekly.
      // - DAILY: Daily.
      // - HOURLY: Hourly.
      // - MINUTELY: Minutely.
      shared_ptr<string> schedulePeriod_ {};
      // The node type. Valid values:
      // - 1: Periodic node.
      // - 3: Manual node.
      shared_ptr<int32_t> scheduleType_ {};
      // The Spark client.
      shared_ptr<TaskInfo::SparkClientInfo> sparkClientInfo_ {};
      // The current CPU resource configuration of the node. If queried by version, this is the configuration of the corresponding version.
      shared_ptr<bool> sparkDynamicResourceSwitch_ {};
      // The effective scope of the Spark resource configuration. Valid values:
      // - ONLY_PROD: Production environment only.
      // - PROD_AND_DEV: Production and development environments.
      // This reflects the current configuration of the node. When queried by version, it reflects the configuration of the corresponding version.
      shared_ptr<string> sparkResourceEffectScope_ {};
      // The Spark SQL resource configuration. The key is the configuration item name and the value is a string. The configuration is returned as a JSON string, such as {"spark.executor.memory":"2g"}. This reflects the current configuration of the node. When queried by version, it reflects the configuration of the corresponding version.
      shared_ptr<string> sparkSqlResourceConfigMap_ {};
      // The MaxCompute Spark version.
      shared_ptr<string> sparkVersion_ {};
      // The publish status. Valid values:
      // - 0: Draft.
      // - 1: Submitted.
      // - 100: In development.
      shared_ptr<string> status_ {};
      // The task type. For more information, see the API operation for creating an offline computing node.
      shared_ptr<int32_t> taskType_ {};
      // The upstream dependencies.
      shared_ptr<vector<TaskInfo::UpStreamList>> upStreamList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->taskInfo_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBatchTaskInfoByVersionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBatchTaskInfoByVersionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBatchTaskInfoByVersionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBatchTaskInfoByVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBatchTaskInfoByVersionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const GetBatchTaskInfoByVersionResponseBody::TaskInfo & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, GetBatchTaskInfoByVersionResponseBody::TaskInfo) };
    inline GetBatchTaskInfoByVersionResponseBody::TaskInfo getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, GetBatchTaskInfoByVersionResponseBody::TaskInfo) };
    inline GetBatchTaskInfoByVersionResponseBody& setTaskInfo(const GetBatchTaskInfoByVersionResponseBody::TaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline GetBatchTaskInfoByVersionResponseBody& setTaskInfo(GetBatchTaskInfoByVersionResponseBody::TaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


  protected:
    // The error code. OK indicates that the request is successful.
    shared_ptr<string> code_ {};
    // The HTTP status code returned by the backend.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message of the request.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The node details.
    shared_ptr<GetBatchTaskInfoByVersionResponseBody::TaskInfo> taskInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
