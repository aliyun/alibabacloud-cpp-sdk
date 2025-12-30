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
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBatchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
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
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(CustomScheduleConfig, customScheduleConfig_);
        DARABONBA_PTR_TO_JSON(DataSourceCatalog, dataSourceCatalog_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceSchema, dataSourceSchema_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NodeDescription, nodeDescription_);
        DARABONBA_PTR_TO_JSON(NodeOutputNameList, nodeOutputNameList_);
        DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
        DARABONBA_PTR_TO_JSON(ParamList, paramList_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(PythonModuleList, pythonModuleList_);
        DARABONBA_PTR_TO_JSON(SchedulePeriod, schedulePeriod_);
        DARABONBA_PTR_TO_JSON(SparkClientInfo, sparkClientInfo_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(UpStreamList, upStreamList_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(CustomScheduleConfig, customScheduleConfig_);
        DARABONBA_PTR_FROM_JSON(DataSourceCatalog, dataSourceCatalog_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceSchema, dataSourceSchema_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NodeDescription, nodeDescription_);
        DARABONBA_PTR_FROM_JSON(NodeOutputNameList, nodeOutputNameList_);
        DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
        DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(PythonModuleList, pythonModuleList_);
        DARABONBA_PTR_FROM_JSON(SchedulePeriod, schedulePeriod_);
        DARABONBA_PTR_FROM_JSON(SparkClientInfo, sparkClientInfo_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(UpStreamList, upStreamList_);
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
          shared_ptr<int32_t> periodOffset_ {};
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
        shared_ptr<UpStreamList::DependPeriod> dependPeriod_ {};
        shared_ptr<string> dependStrategy_ {};
        shared_ptr<vector<string>> fieldList_ {};
        shared_ptr<string> nodeType_ {};
        // This parameter is required.
        shared_ptr<int32_t> periodDiff_ {};
        shared_ptr<bool> sourceNodeEnabled_ {};
        shared_ptr<string> sourceNodeId_ {};
        // This parameter is required.
        shared_ptr<string> sourceNodeOutputName_ {};
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
        // This parameter is required.
        shared_ptr<string> key_ {};
        // This parameter is required.
        shared_ptr<string> value_ {};
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
        // This parameter is required.
        shared_ptr<string> endTime_ {};
        // This parameter is required.
        shared_ptr<int32_t> interval_ {};
        // This parameter is required.
        shared_ptr<string> intervalUnit_ {};
        // This parameter is required.
        shared_ptr<string> schedulePeriod_ {};
        // This parameter is required.
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->cronExpression_ == nullptr && this->customScheduleConfig_ == nullptr && this->dataSourceCatalog_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceSchema_ == nullptr
        && this->engine_ == nullptr && this->fileId_ == nullptr && this->name_ == nullptr && this->nodeDescription_ == nullptr && this->nodeOutputNameList_ == nullptr
        && this->nodeStatus_ == nullptr && this->paramList_ == nullptr && this->priority_ == nullptr && this->projectId_ == nullptr && this->pythonModuleList_ == nullptr
        && this->schedulePeriod_ == nullptr && this->sparkClientInfo_ == nullptr && this->taskType_ == nullptr && this->upStreamList_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline UpdateCommand& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


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


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline UpdateCommand& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
      inline UpdateCommand& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


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


    protected:
      // This parameter is required.
      shared_ptr<string> code_ {};
      shared_ptr<string> cronExpression_ {};
      shared_ptr<UpdateCommand::CustomScheduleConfig> customScheduleConfig_ {};
      shared_ptr<string> dataSourceCatalog_ {};
      shared_ptr<string> dataSourceId_ {};
      shared_ptr<string> dataSourceSchema_ {};
      shared_ptr<string> engine_ {};
      // This parameter is required.
      shared_ptr<int64_t> fileId_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      shared_ptr<string> nodeDescription_ {};
      shared_ptr<vector<string>> nodeOutputNameList_ {};
      shared_ptr<int32_t> nodeStatus_ {};
      shared_ptr<vector<UpdateCommand::ParamList>> paramList_ {};
      shared_ptr<int32_t> priority_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<vector<string>> pythonModuleList_ {};
      shared_ptr<string> schedulePeriod_ {};
      shared_ptr<UpdateCommand::SparkClientInfo> sparkClientInfo_ {};
      // This parameter is required.
      shared_ptr<int32_t> taskType_ {};
      shared_ptr<vector<UpdateCommand::UpStreamList>> upStreamList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateBatchTaskRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateBatchTaskRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateBatchTaskRequest::UpdateCommand) };
    inline UpdateBatchTaskRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateBatchTaskRequest::UpdateCommand) };
    inline UpdateBatchTaskRequest& setUpdateCommand(const UpdateBatchTaskRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateBatchTaskRequest& setUpdateCommand(UpdateBatchTaskRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateBatchTaskRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
