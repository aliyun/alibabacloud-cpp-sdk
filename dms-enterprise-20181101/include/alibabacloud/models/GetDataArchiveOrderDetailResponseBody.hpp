// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataArchiveOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataArchiveOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataArchiveOrderDetail, dataArchiveOrderDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataArchiveOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataArchiveOrderDetail, dataArchiveOrderDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    GetDataArchiveOrderDetailResponseBody() = default ;
    GetDataArchiveOrderDetailResponseBody(const GetDataArchiveOrderDetailResponseBody &) = default ;
    GetDataArchiveOrderDetailResponseBody(GetDataArchiveOrderDetailResponseBody &&) = default ;
    GetDataArchiveOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataArchiveOrderDetailResponseBody() = default ;
    GetDataArchiveOrderDetailResponseBody& operator=(const GetDataArchiveOrderDetailResponseBody &) = default ;
    GetDataArchiveOrderDetailResponseBody& operator=(GetDataArchiveOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataArchiveOrderDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataArchiveOrderDetail& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Committer, committer_);
        DARABONBA_PTR_TO_JSON(CommitterId, committerId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(PluginExtraData, pluginExtraData_);
        DARABONBA_PTR_TO_JSON(PluginParam, pluginParam_);
        DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
        DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
        DARABONBA_PTR_TO_JSON(RelatedUserNickList, relatedUserNickList_);
        DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_TO_JSON(WorkflowInstanceId, workflowInstanceId_);
        DARABONBA_PTR_TO_JSON(WorkflowStatusDesc, workflowStatusDesc_);
      };
      friend void from_json(const Darabonba::Json& j, DataArchiveOrderDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Committer, committer_);
        DARABONBA_PTR_FROM_JSON(CommitterId, committerId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(PluginExtraData, pluginExtraData_);
        DARABONBA_PTR_FROM_JSON(PluginParam, pluginParam_);
        DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
        DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
        DARABONBA_PTR_FROM_JSON(RelatedUserNickList, relatedUserNickList_);
        DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_FROM_JSON(WorkflowInstanceId, workflowInstanceId_);
        DARABONBA_PTR_FROM_JSON(WorkflowStatusDesc, workflowStatusDesc_);
      };
      DataArchiveOrderDetail() = default ;
      DataArchiveOrderDetail(const DataArchiveOrderDetail &) = default ;
      DataArchiveOrderDetail(DataArchiveOrderDetail &&) = default ;
      DataArchiveOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataArchiveOrderDetail() = default ;
      DataArchiveOrderDetail& operator=(const DataArchiveOrderDetail &) = default ;
      DataArchiveOrderDetail& operator=(DataArchiveOrderDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PluginParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PluginParam& obj) { 
          DARABONBA_PTR_TO_JSON(ArchiveMethod, archiveMethod_);
          DARABONBA_PTR_TO_JSON(DbSchema, dbSchema_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(OrderAfter, orderAfter_);
          DARABONBA_PTR_TO_JSON(RunMethod, runMethod_);
          DARABONBA_PTR_TO_JSON(SourceDatabaseId, sourceDatabaseId_);
          DARABONBA_PTR_TO_JSON(TableIncludes, tableIncludes_);
          DARABONBA_PTR_TO_JSON(TableMapping, tableMapping_);
          DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
          DARABONBA_PTR_TO_JSON(Variables, variables_);
        };
        friend void from_json(const Darabonba::Json& j, PluginParam& obj) { 
          DARABONBA_PTR_FROM_JSON(ArchiveMethod, archiveMethod_);
          DARABONBA_PTR_FROM_JSON(DbSchema, dbSchema_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(OrderAfter, orderAfter_);
          DARABONBA_PTR_FROM_JSON(RunMethod, runMethod_);
          DARABONBA_PTR_FROM_JSON(SourceDatabaseId, sourceDatabaseId_);
          DARABONBA_PTR_FROM_JSON(TableIncludes, tableIncludes_);
          DARABONBA_PTR_FROM_JSON(TableMapping, tableMapping_);
          DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
          DARABONBA_PTR_FROM_JSON(Variables, variables_);
        };
        PluginParam() = default ;
        PluginParam(const PluginParam &) = default ;
        PluginParam(PluginParam &&) = default ;
        PluginParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PluginParam() = default ;
        PluginParam& operator=(const PluginParam &) = default ;
        PluginParam& operator=(PluginParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TableIncludes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TableIncludes& obj) { 
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
            DARABONBA_PTR_TO_JSON(TableWhere, tableWhere_);
          };
          friend void from_json(const Darabonba::Json& j, TableIncludes& obj) { 
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            DARABONBA_PTR_FROM_JSON(TableWhere, tableWhere_);
          };
          TableIncludes() = default ;
          TableIncludes(const TableIncludes &) = default ;
          TableIncludes(TableIncludes &&) = default ;
          TableIncludes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TableIncludes() = default ;
          TableIncludes& operator=(const TableIncludes &) = default ;
          TableIncludes& operator=(TableIncludes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tableName_ == nullptr
        && this->tableWhere_ == nullptr; };
          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline TableIncludes& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          // tableWhere Field Functions 
          bool hasTableWhere() const { return this->tableWhere_ != nullptr;};
          void deleteTableWhere() { this->tableWhere_ = nullptr;};
          inline string getTableWhere() const { DARABONBA_PTR_GET_DEFAULT(tableWhere_, "") };
          inline TableIncludes& setTableWhere(string tableWhere) { DARABONBA_PTR_SET_VALUE(tableWhere_, tableWhere) };


        protected:
          // The table name.
          shared_ptr<string> tableName_ {};
          // The filter condition.
          shared_ptr<string> tableWhere_ {};
        };

        virtual bool empty() const override { return this->archiveMethod_ == nullptr
        && this->dbSchema_ == nullptr && this->logic_ == nullptr && this->orderAfter_ == nullptr && this->runMethod_ == nullptr && this->sourceDatabaseId_ == nullptr
        && this->tableIncludes_ == nullptr && this->tableMapping_ == nullptr && this->targetInstanceId_ == nullptr && this->variables_ == nullptr; };
        // archiveMethod Field Functions 
        bool hasArchiveMethod() const { return this->archiveMethod_ != nullptr;};
        void deleteArchiveMethod() { this->archiveMethod_ = nullptr;};
        inline string getArchiveMethod() const { DARABONBA_PTR_GET_DEFAULT(archiveMethod_, "") };
        inline PluginParam& setArchiveMethod(string archiveMethod) { DARABONBA_PTR_SET_VALUE(archiveMethod_, archiveMethod) };


        // dbSchema Field Functions 
        bool hasDbSchema() const { return this->dbSchema_ != nullptr;};
        void deleteDbSchema() { this->dbSchema_ = nullptr;};
        inline string getDbSchema() const { DARABONBA_PTR_GET_DEFAULT(dbSchema_, "") };
        inline PluginParam& setDbSchema(string dbSchema) { DARABONBA_PTR_SET_VALUE(dbSchema_, dbSchema) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline PluginParam& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // orderAfter Field Functions 
        bool hasOrderAfter() const { return this->orderAfter_ != nullptr;};
        void deleteOrderAfter() { this->orderAfter_ = nullptr;};
        inline const vector<string> & getOrderAfter() const { DARABONBA_PTR_GET_CONST(orderAfter_, vector<string>) };
        inline vector<string> getOrderAfter() { DARABONBA_PTR_GET(orderAfter_, vector<string>) };
        inline PluginParam& setOrderAfter(const vector<string> & orderAfter) { DARABONBA_PTR_SET_VALUE(orderAfter_, orderAfter) };
        inline PluginParam& setOrderAfter(vector<string> && orderAfter) { DARABONBA_PTR_SET_RVALUE(orderAfter_, orderAfter) };


        // runMethod Field Functions 
        bool hasRunMethod() const { return this->runMethod_ != nullptr;};
        void deleteRunMethod() { this->runMethod_ = nullptr;};
        inline string getRunMethod() const { DARABONBA_PTR_GET_DEFAULT(runMethod_, "") };
        inline PluginParam& setRunMethod(string runMethod) { DARABONBA_PTR_SET_VALUE(runMethod_, runMethod) };


        // sourceDatabaseId Field Functions 
        bool hasSourceDatabaseId() const { return this->sourceDatabaseId_ != nullptr;};
        void deleteSourceDatabaseId() { this->sourceDatabaseId_ = nullptr;};
        inline int64_t getSourceDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(sourceDatabaseId_, 0L) };
        inline PluginParam& setSourceDatabaseId(int64_t sourceDatabaseId) { DARABONBA_PTR_SET_VALUE(sourceDatabaseId_, sourceDatabaseId) };


        // tableIncludes Field Functions 
        bool hasTableIncludes() const { return this->tableIncludes_ != nullptr;};
        void deleteTableIncludes() { this->tableIncludes_ = nullptr;};
        inline const vector<PluginParam::TableIncludes> & getTableIncludes() const { DARABONBA_PTR_GET_CONST(tableIncludes_, vector<PluginParam::TableIncludes>) };
        inline vector<PluginParam::TableIncludes> getTableIncludes() { DARABONBA_PTR_GET(tableIncludes_, vector<PluginParam::TableIncludes>) };
        inline PluginParam& setTableIncludes(const vector<PluginParam::TableIncludes> & tableIncludes) { DARABONBA_PTR_SET_VALUE(tableIncludes_, tableIncludes) };
        inline PluginParam& setTableIncludes(vector<PluginParam::TableIncludes> && tableIncludes) { DARABONBA_PTR_SET_RVALUE(tableIncludes_, tableIncludes) };


        // tableMapping Field Functions 
        bool hasTableMapping() const { return this->tableMapping_ != nullptr;};
        void deleteTableMapping() { this->tableMapping_ = nullptr;};
        inline const vector<string> & getTableMapping() const { DARABONBA_PTR_GET_CONST(tableMapping_, vector<string>) };
        inline vector<string> getTableMapping() { DARABONBA_PTR_GET(tableMapping_, vector<string>) };
        inline PluginParam& setTableMapping(const vector<string> & tableMapping) { DARABONBA_PTR_SET_VALUE(tableMapping_, tableMapping) };
        inline PluginParam& setTableMapping(vector<string> && tableMapping) { DARABONBA_PTR_SET_RVALUE(tableMapping_, tableMapping) };


        // targetInstanceId Field Functions 
        bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
        void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
        inline string getTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
        inline PluginParam& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


        // variables Field Functions 
        bool hasVariables() const { return this->variables_ != nullptr;};
        void deleteVariables() { this->variables_ = nullptr;};
        inline const vector<string> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<string>) };
        inline vector<string> getVariables() { DARABONBA_PTR_GET(variables_, vector<string>) };
        inline PluginParam& setVariables(const vector<string> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
        inline PluginParam& setVariables(vector<string> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


      protected:
        // The type of the archiving destination.
        shared_ptr<string> archiveMethod_ {};
        // The schema of the database and table to be archived.
        shared_ptr<string> dbSchema_ {};
        // Indicates whether the database is logical.
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> logic_ {};
        // The post behavior of archiving.
        shared_ptr<vector<string>> orderAfter_ {};
        // The running method, which indicates whether to run the task immediately or at a specific point in time.
        shared_ptr<string> runMethod_ {};
        // The ID of the source database.
        shared_ptr<int64_t> sourceDatabaseId_ {};
        // The list of the archived tables and the filter conditions.
        shared_ptr<vector<PluginParam::TableIncludes>> tableIncludes_ {};
        // The mapping of schemas.
        shared_ptr<vector<string>> tableMapping_ {};
        // The ID of the destination instance.
        shared_ptr<string> targetInstanceId_ {};
        // The time variable defined for scheduled archiving.
        shared_ptr<vector<string>> variables_ {};
      };

      class PluginExtraData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PluginExtraData& obj) { 
          DARABONBA_PTR_TO_JSON(DagInfo, dagInfo_);
          DARABONBA_PTR_TO_JSON(DbBaseInfo, dbBaseInfo_);
          DARABONBA_PTR_TO_JSON(InstanceTotal, instanceTotal_);
          DARABONBA_PTR_TO_JSON(Instances, instances_);
          DARABONBA_PTR_TO_JSON(NextFireTimeResult, nextFireTimeResult_);
          DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_ANY_TO_JSON(TempTableNameMap, tempTableNameMap_);
        };
        friend void from_json(const Darabonba::Json& j, PluginExtraData& obj) { 
          DARABONBA_PTR_FROM_JSON(DagInfo, dagInfo_);
          DARABONBA_PTR_FROM_JSON(DbBaseInfo, dbBaseInfo_);
          DARABONBA_PTR_FROM_JSON(InstanceTotal, instanceTotal_);
          DARABONBA_PTR_FROM_JSON(Instances, instances_);
          DARABONBA_PTR_FROM_JSON(NextFireTimeResult, nextFireTimeResult_);
          DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_ANY_FROM_JSON(TempTableNameMap, tempTableNameMap_);
        };
        PluginExtraData() = default ;
        PluginExtraData(const PluginExtraData &) = default ;
        PluginExtraData(PluginExtraData &&) = default ;
        PluginExtraData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PluginExtraData() = default ;
        PluginExtraData& operator=(const PluginExtraData &) = default ;
        PluginExtraData& operator=(PluginExtraData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NextFireTimeResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NextFireTimeResult& obj) { 
            DARABONBA_PTR_TO_JSON(CronFireType, cronFireType_);
          };
          friend void from_json(const Darabonba::Json& j, NextFireTimeResult& obj) { 
            DARABONBA_PTR_FROM_JSON(CronFireType, cronFireType_);
          };
          NextFireTimeResult() = default ;
          NextFireTimeResult(const NextFireTimeResult &) = default ;
          NextFireTimeResult(NextFireTimeResult &&) = default ;
          NextFireTimeResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NextFireTimeResult() = default ;
          NextFireTimeResult& operator=(const NextFireTimeResult &) = default ;
          NextFireTimeResult& operator=(NextFireTimeResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cronFireType_ == nullptr; };
          // cronFireType Field Functions 
          bool hasCronFireType() const { return this->cronFireType_ != nullptr;};
          void deleteCronFireType() { this->cronFireType_ = nullptr;};
          inline string getCronFireType() const { DARABONBA_PTR_GET_DEFAULT(cronFireType_, "") };
          inline NextFireTimeResult& setCronFireType(string cronFireType) { DARABONBA_PTR_SET_VALUE(cronFireType_, cronFireType) };


        protected:
          // The type of scheduled triggering.
          shared_ptr<string> cronFireType_ {};
        };

        class Instances : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Instances& obj) { 
            DARABONBA_PTR_TO_JSON(BusinessTime, businessTime_);
            DARABONBA_PTR_TO_JSON(DagId, dagId_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(HistoryDagId, historyDagId_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(LastRunningContext, lastRunningContext_);
            DARABONBA_PTR_TO_JSON(Msg, msg_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
            DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, Instances& obj) { 
            DARABONBA_PTR_FROM_JSON(BusinessTime, businessTime_);
            DARABONBA_PTR_FROM_JSON(DagId, dagId_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(HistoryDagId, historyDagId_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(LastRunningContext, lastRunningContext_);
            DARABONBA_PTR_FROM_JSON(Msg, msg_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
            DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          Instances() = default ;
          Instances(const Instances &) = default ;
          Instances(Instances &&) = default ;
          Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Instances() = default ;
          Instances& operator=(const Instances &) = default ;
          Instances& operator=(Instances &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->businessTime_ == nullptr
        && this->dagId_ == nullptr && this->endTime_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->historyDagId_ == nullptr
        && this->id_ == nullptr && this->lastRunningContext_ == nullptr && this->msg_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr
        && this->triggerType_ == nullptr && this->version_ == nullptr; };
          // businessTime Field Functions 
          bool hasBusinessTime() const { return this->businessTime_ != nullptr;};
          void deleteBusinessTime() { this->businessTime_ = nullptr;};
          inline string getBusinessTime() const { DARABONBA_PTR_GET_DEFAULT(businessTime_, "") };
          inline Instances& setBusinessTime(string businessTime) { DARABONBA_PTR_SET_VALUE(businessTime_, businessTime) };


          // dagId Field Functions 
          bool hasDagId() const { return this->dagId_ != nullptr;};
          void deleteDagId() { this->dagId_ = nullptr;};
          inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
          inline Instances& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline Instances& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline Instances& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline Instances& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // historyDagId Field Functions 
          bool hasHistoryDagId() const { return this->historyDagId_ != nullptr;};
          void deleteHistoryDagId() { this->historyDagId_ = nullptr;};
          inline int64_t getHistoryDagId() const { DARABONBA_PTR_GET_DEFAULT(historyDagId_, 0L) };
          inline Instances& setHistoryDagId(int64_t historyDagId) { DARABONBA_PTR_SET_VALUE(historyDagId_, historyDagId) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Instances& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // lastRunningContext Field Functions 
          bool hasLastRunningContext() const { return this->lastRunningContext_ != nullptr;};
          void deleteLastRunningContext() { this->lastRunningContext_ = nullptr;};
          inline string getLastRunningContext() const { DARABONBA_PTR_GET_DEFAULT(lastRunningContext_, "") };
          inline Instances& setLastRunningContext(string lastRunningContext) { DARABONBA_PTR_SET_VALUE(lastRunningContext_, lastRunningContext) };


          // msg Field Functions 
          bool hasMsg() const { return this->msg_ != nullptr;};
          void deleteMsg() { this->msg_ = nullptr;};
          inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
          inline Instances& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
          inline Instances& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // tenantId Field Functions 
          bool hasTenantId() const { return this->tenantId_ != nullptr;};
          void deleteTenantId() { this->tenantId_ = nullptr;};
          inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
          inline Instances& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


          // triggerType Field Functions 
          bool hasTriggerType() const { return this->triggerType_ != nullptr;};
          void deleteTriggerType() { this->triggerType_ = nullptr;};
          inline int64_t getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0L) };
          inline Instances& setTriggerType(int64_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline Instances& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The business time of the task flow. The time is displayed in the yyyy-MM-DD HH:mm:ss format.
          shared_ptr<string> businessTime_ {};
          // The task flow ID. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to obtain the value of this parameter.
          shared_ptr<int64_t> dagId_ {};
          // The time when the task flow ended. The time is displayed in the yyyy-MM-DD HH:mm:ss format.
          shared_ptr<string> endTime_ {};
          // The time when the task flow was created.
          shared_ptr<string> gmtCreate_ {};
          // The time when the task flow was last modified.
          shared_ptr<string> gmtModified_ {};
          // The ID of the historical task flow.
          shared_ptr<int64_t> historyDagId_ {};
          // The ID of the instance in the task flow that is executed.
          shared_ptr<int64_t> id_ {};
          // The context of the previous execution of the task flow.
          shared_ptr<string> lastRunningContext_ {};
          // The context of the current execution of the task flow.
          shared_ptr<string> msg_ {};
          // The status of the task. Valid values:
          // 
          // *   **0**: The task is waiting for execution.
          // *   **1**: The task is in progress.
          // *   **2**: The task is suspended.
          // *   **3**: The task failed.
          // *   **4**: The task is successful.
          // *   **5**: The task is complete.
          shared_ptr<int64_t> status_ {};
          // The tenant ID.
          shared_ptr<string> tenantId_ {};
          // The mode in which the task flow was triggered. Valid values:
          // 
          // *   **0**: The task flow was triggered based on a schedule.
          // *   **1**: The task flow was manually triggered.
          shared_ptr<int64_t> triggerType_ {};
          // The version number.
          shared_ptr<string> version_ {};
        };

        class DbBaseInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DbBaseInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Alias, alias_);
            DARABONBA_PTR_TO_JSON(AlterTimeout, alterTimeout_);
            DARABONBA_PTR_TO_JSON(AssetControl, assetControl_);
            DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
            DARABONBA_PTR_TO_JSON(ClusterNode, clusterNode_);
            DARABONBA_PTR_TO_JSON(DbId, dbId_);
            DARABONBA_PTR_TO_JSON(DbType, dbType_);
            DARABONBA_PTR_TO_JSON(DbaId, dbaId_);
            DARABONBA_PTR_TO_JSON(DbaName, dbaName_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Encoding, encoding_);
            DARABONBA_PTR_TO_JSON(EnvType, envType_);
            DARABONBA_PTR_TO_JSON(Follow, follow_);
            DARABONBA_PTR_TO_JSON(Host, host_);
            DARABONBA_PTR_TO_JSON(Idc, idc_);
            DARABONBA_PTR_TO_JSON(IdcTitle, idcTitle_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
            DARABONBA_PTR_TO_JSON(LastSyncTime, lastSyncTime_);
            DARABONBA_PTR_TO_JSON(Level, level_);
            DARABONBA_PTR_TO_JSON(Logic, logic_);
            DARABONBA_PTR_TO_JSON(OwnerIds, ownerIds_);
            DARABONBA_PTR_TO_JSON(OwnerNames, ownerNames_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
            DARABONBA_PTR_TO_JSON(SearchName, searchName_);
            DARABONBA_PTR_TO_JSON(StandardGroup, standardGroup_);
            DARABONBA_PTR_TO_JSON(State, state_);
            DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
            DARABONBA_PTR_TO_JSON(TnsName, tnsName_);
            DARABONBA_PTR_TO_JSON(UnitType, unitType_);
          };
          friend void from_json(const Darabonba::Json& j, DbBaseInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Alias, alias_);
            DARABONBA_PTR_FROM_JSON(AlterTimeout, alterTimeout_);
            DARABONBA_PTR_FROM_JSON(AssetControl, assetControl_);
            DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
            DARABONBA_PTR_FROM_JSON(ClusterNode, clusterNode_);
            DARABONBA_PTR_FROM_JSON(DbId, dbId_);
            DARABONBA_PTR_FROM_JSON(DbType, dbType_);
            DARABONBA_PTR_FROM_JSON(DbaId, dbaId_);
            DARABONBA_PTR_FROM_JSON(DbaName, dbaName_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
            DARABONBA_PTR_FROM_JSON(EnvType, envType_);
            DARABONBA_PTR_FROM_JSON(Follow, follow_);
            DARABONBA_PTR_FROM_JSON(Host, host_);
            DARABONBA_PTR_FROM_JSON(Idc, idc_);
            DARABONBA_PTR_FROM_JSON(IdcTitle, idcTitle_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
            DARABONBA_PTR_FROM_JSON(LastSyncTime, lastSyncTime_);
            DARABONBA_PTR_FROM_JSON(Level, level_);
            DARABONBA_PTR_FROM_JSON(Logic, logic_);
            DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIds_);
            DARABONBA_PTR_FROM_JSON(OwnerNames, ownerNames_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
            DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
            DARABONBA_PTR_FROM_JSON(StandardGroup, standardGroup_);
            DARABONBA_PTR_FROM_JSON(State, state_);
            DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
            DARABONBA_PTR_FROM_JSON(TnsName, tnsName_);
            DARABONBA_PTR_FROM_JSON(UnitType, unitType_);
          };
          DbBaseInfo() = default ;
          DbBaseInfo(const DbBaseInfo &) = default ;
          DbBaseInfo(DbBaseInfo &&) = default ;
          DbBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DbBaseInfo() = default ;
          DbBaseInfo& operator=(const DbBaseInfo &) = default ;
          DbBaseInfo& operator=(DbBaseInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class StandardGroup : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StandardGroup& obj) { 
              DARABONBA_PTR_TO_JSON(DbType, dbType_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(FreeOrStable, freeOrStable_);
              DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(GroupMode, groupMode_);
              DARABONBA_PTR_TO_JSON(GroupName, groupName_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(LastMenderId, lastMenderId_);
            };
            friend void from_json(const Darabonba::Json& j, StandardGroup& obj) { 
              DARABONBA_PTR_FROM_JSON(DbType, dbType_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(FreeOrStable, freeOrStable_);
              DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(GroupMode, groupMode_);
              DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(LastMenderId, lastMenderId_);
            };
            StandardGroup() = default ;
            StandardGroup(const StandardGroup &) = default ;
            StandardGroup(StandardGroup &&) = default ;
            StandardGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~StandardGroup() = default ;
            StandardGroup& operator=(const StandardGroup &) = default ;
            StandardGroup& operator=(StandardGroup &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->dbType_ == nullptr
        && this->description_ == nullptr && this->freeOrStable_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->groupMode_ == nullptr
        && this->groupName_ == nullptr && this->id_ == nullptr && this->lastMenderId_ == nullptr; };
            // dbType Field Functions 
            bool hasDbType() const { return this->dbType_ != nullptr;};
            void deleteDbType() { this->dbType_ = nullptr;};
            inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
            inline StandardGroup& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline StandardGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // freeOrStable Field Functions 
            bool hasFreeOrStable() const { return this->freeOrStable_ != nullptr;};
            void deleteFreeOrStable() { this->freeOrStable_ = nullptr;};
            inline bool getFreeOrStable() const { DARABONBA_PTR_GET_DEFAULT(freeOrStable_, false) };
            inline StandardGroup& setFreeOrStable(bool freeOrStable) { DARABONBA_PTR_SET_VALUE(freeOrStable_, freeOrStable) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline StandardGroup& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline StandardGroup& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // groupMode Field Functions 
            bool hasGroupMode() const { return this->groupMode_ != nullptr;};
            void deleteGroupMode() { this->groupMode_ = nullptr;};
            inline string getGroupMode() const { DARABONBA_PTR_GET_DEFAULT(groupMode_, "") };
            inline StandardGroup& setGroupMode(string groupMode) { DARABONBA_PTR_SET_VALUE(groupMode_, groupMode) };


            // groupName Field Functions 
            bool hasGroupName() const { return this->groupName_ != nullptr;};
            void deleteGroupName() { this->groupName_ = nullptr;};
            inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
            inline StandardGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline StandardGroup& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // lastMenderId Field Functions 
            bool hasLastMenderId() const { return this->lastMenderId_ != nullptr;};
            void deleteLastMenderId() { this->lastMenderId_ = nullptr;};
            inline int64_t getLastMenderId() const { DARABONBA_PTR_GET_DEFAULT(lastMenderId_, 0L) };
            inline StandardGroup& setLastMenderId(int64_t lastMenderId) { DARABONBA_PTR_SET_VALUE(lastMenderId_, lastMenderId) };


          protected:
            // The type of the instance engine. For information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
            shared_ptr<string> dbType_ {};
            // The description of the security rule set.
            shared_ptr<string> description_ {};
            // Indicates whether the instance is managed in Flexible Management or Stable Change mode. Valid values:
            // 
            // *   **true**
            // *   **false**
            shared_ptr<bool> freeOrStable_ {};
            // The time when the security rule was created.
            shared_ptr<string> gmtCreate_ {};
            // The time when the security rule was last modified.
            shared_ptr<string> gmtModified_ {};
            // The type of the control mode of the instance. Valid values:
            // 
            // *   **COMMON**: The instance is managed in Security Collaboration mode.
            // *   **NONE_CONTROL**: The instance is managed in Flexible Management mode.
            // *   **STABLE**: The instance is managed in Stable Change mode.
            shared_ptr<string> groupMode_ {};
            // The name of the security rule that corresponds to the control mode.
            shared_ptr<string> groupName_ {};
            // The ID of the security rule.
            shared_ptr<int64_t> id_ {};
            // The user ID of the last modified security rule.
            shared_ptr<int64_t> lastMenderId_ {};
          };

          virtual bool empty() const override { return this->alias_ == nullptr
        && this->alterTimeout_ == nullptr && this->assetControl_ == nullptr && this->catalogName_ == nullptr && this->clusterNode_ == nullptr && this->dbId_ == nullptr
        && this->dbType_ == nullptr && this->dbaId_ == nullptr && this->dbaName_ == nullptr && this->description_ == nullptr && this->encoding_ == nullptr
        && this->envType_ == nullptr && this->follow_ == nullptr && this->host_ == nullptr && this->idc_ == nullptr && this->idcTitle_ == nullptr
        && this->instanceId_ == nullptr && this->instanceSource_ == nullptr && this->lastSyncTime_ == nullptr && this->level_ == nullptr && this->logic_ == nullptr
        && this->ownerIds_ == nullptr && this->ownerNames_ == nullptr && this->port_ == nullptr && this->schemaName_ == nullptr && this->searchName_ == nullptr
        && this->standardGroup_ == nullptr && this->state_ == nullptr && this->tableCount_ == nullptr && this->tnsName_ == nullptr && this->unitType_ == nullptr; };
          // alias Field Functions 
          bool hasAlias() const { return this->alias_ != nullptr;};
          void deleteAlias() { this->alias_ = nullptr;};
          inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
          inline DbBaseInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


          // alterTimeout Field Functions 
          bool hasAlterTimeout() const { return this->alterTimeout_ != nullptr;};
          void deleteAlterTimeout() { this->alterTimeout_ = nullptr;};
          inline int64_t getAlterTimeout() const { DARABONBA_PTR_GET_DEFAULT(alterTimeout_, 0L) };
          inline DbBaseInfo& setAlterTimeout(int64_t alterTimeout) { DARABONBA_PTR_SET_VALUE(alterTimeout_, alterTimeout) };


          // assetControl Field Functions 
          bool hasAssetControl() const { return this->assetControl_ != nullptr;};
          void deleteAssetControl() { this->assetControl_ = nullptr;};
          inline bool getAssetControl() const { DARABONBA_PTR_GET_DEFAULT(assetControl_, false) };
          inline DbBaseInfo& setAssetControl(bool assetControl) { DARABONBA_PTR_SET_VALUE(assetControl_, assetControl) };


          // catalogName Field Functions 
          bool hasCatalogName() const { return this->catalogName_ != nullptr;};
          void deleteCatalogName() { this->catalogName_ = nullptr;};
          inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
          inline DbBaseInfo& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


          // clusterNode Field Functions 
          bool hasClusterNode() const { return this->clusterNode_ != nullptr;};
          void deleteClusterNode() { this->clusterNode_ = nullptr;};
          inline string getClusterNode() const { DARABONBA_PTR_GET_DEFAULT(clusterNode_, "") };
          inline DbBaseInfo& setClusterNode(string clusterNode) { DARABONBA_PTR_SET_VALUE(clusterNode_, clusterNode) };


          // dbId Field Functions 
          bool hasDbId() const { return this->dbId_ != nullptr;};
          void deleteDbId() { this->dbId_ = nullptr;};
          inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
          inline DbBaseInfo& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


          // dbType Field Functions 
          bool hasDbType() const { return this->dbType_ != nullptr;};
          void deleteDbType() { this->dbType_ = nullptr;};
          inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
          inline DbBaseInfo& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


          // dbaId Field Functions 
          bool hasDbaId() const { return this->dbaId_ != nullptr;};
          void deleteDbaId() { this->dbaId_ = nullptr;};
          inline int64_t getDbaId() const { DARABONBA_PTR_GET_DEFAULT(dbaId_, 0L) };
          inline DbBaseInfo& setDbaId(int64_t dbaId) { DARABONBA_PTR_SET_VALUE(dbaId_, dbaId) };


          // dbaName Field Functions 
          bool hasDbaName() const { return this->dbaName_ != nullptr;};
          void deleteDbaName() { this->dbaName_ = nullptr;};
          inline string getDbaName() const { DARABONBA_PTR_GET_DEFAULT(dbaName_, "") };
          inline DbBaseInfo& setDbaName(string dbaName) { DARABONBA_PTR_SET_VALUE(dbaName_, dbaName) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline DbBaseInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // encoding Field Functions 
          bool hasEncoding() const { return this->encoding_ != nullptr;};
          void deleteEncoding() { this->encoding_ = nullptr;};
          inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
          inline DbBaseInfo& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


          // envType Field Functions 
          bool hasEnvType() const { return this->envType_ != nullptr;};
          void deleteEnvType() { this->envType_ = nullptr;};
          inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
          inline DbBaseInfo& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


          // follow Field Functions 
          bool hasFollow() const { return this->follow_ != nullptr;};
          void deleteFollow() { this->follow_ = nullptr;};
          inline bool getFollow() const { DARABONBA_PTR_GET_DEFAULT(follow_, false) };
          inline DbBaseInfo& setFollow(bool follow) { DARABONBA_PTR_SET_VALUE(follow_, follow) };


          // host Field Functions 
          bool hasHost() const { return this->host_ != nullptr;};
          void deleteHost() { this->host_ = nullptr;};
          inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
          inline DbBaseInfo& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


          // idc Field Functions 
          bool hasIdc() const { return this->idc_ != nullptr;};
          void deleteIdc() { this->idc_ = nullptr;};
          inline string getIdc() const { DARABONBA_PTR_GET_DEFAULT(idc_, "") };
          inline DbBaseInfo& setIdc(string idc) { DARABONBA_PTR_SET_VALUE(idc_, idc) };


          // idcTitle Field Functions 
          bool hasIdcTitle() const { return this->idcTitle_ != nullptr;};
          void deleteIdcTitle() { this->idcTitle_ = nullptr;};
          inline string getIdcTitle() const { DARABONBA_PTR_GET_DEFAULT(idcTitle_, "") };
          inline DbBaseInfo& setIdcTitle(string idcTitle) { DARABONBA_PTR_SET_VALUE(idcTitle_, idcTitle) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
          inline DbBaseInfo& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // instanceSource Field Functions 
          bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
          void deleteInstanceSource() { this->instanceSource_ = nullptr;};
          inline string getInstanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
          inline DbBaseInfo& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


          // lastSyncTime Field Functions 
          bool hasLastSyncTime() const { return this->lastSyncTime_ != nullptr;};
          void deleteLastSyncTime() { this->lastSyncTime_ = nullptr;};
          inline string getLastSyncTime() const { DARABONBA_PTR_GET_DEFAULT(lastSyncTime_, "") };
          inline DbBaseInfo& setLastSyncTime(string lastSyncTime) { DARABONBA_PTR_SET_VALUE(lastSyncTime_, lastSyncTime) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline DbBaseInfo& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // logic Field Functions 
          bool hasLogic() const { return this->logic_ != nullptr;};
          void deleteLogic() { this->logic_ = nullptr;};
          inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
          inline DbBaseInfo& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


          // ownerIds Field Functions 
          bool hasOwnerIds() const { return this->ownerIds_ != nullptr;};
          void deleteOwnerIds() { this->ownerIds_ = nullptr;};
          inline const vector<int64_t> & getOwnerIds() const { DARABONBA_PTR_GET_CONST(ownerIds_, vector<int64_t>) };
          inline vector<int64_t> getOwnerIds() { DARABONBA_PTR_GET(ownerIds_, vector<int64_t>) };
          inline DbBaseInfo& setOwnerIds(const vector<int64_t> & ownerIds) { DARABONBA_PTR_SET_VALUE(ownerIds_, ownerIds) };
          inline DbBaseInfo& setOwnerIds(vector<int64_t> && ownerIds) { DARABONBA_PTR_SET_RVALUE(ownerIds_, ownerIds) };


          // ownerNames Field Functions 
          bool hasOwnerNames() const { return this->ownerNames_ != nullptr;};
          void deleteOwnerNames() { this->ownerNames_ = nullptr;};
          inline const vector<string> & getOwnerNames() const { DARABONBA_PTR_GET_CONST(ownerNames_, vector<string>) };
          inline vector<string> getOwnerNames() { DARABONBA_PTR_GET(ownerNames_, vector<string>) };
          inline DbBaseInfo& setOwnerNames(const vector<string> & ownerNames) { DARABONBA_PTR_SET_VALUE(ownerNames_, ownerNames) };
          inline DbBaseInfo& setOwnerNames(vector<string> && ownerNames) { DARABONBA_PTR_SET_RVALUE(ownerNames_, ownerNames) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
          inline DbBaseInfo& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // schemaName Field Functions 
          bool hasSchemaName() const { return this->schemaName_ != nullptr;};
          void deleteSchemaName() { this->schemaName_ = nullptr;};
          inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
          inline DbBaseInfo& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


          // searchName Field Functions 
          bool hasSearchName() const { return this->searchName_ != nullptr;};
          void deleteSearchName() { this->searchName_ = nullptr;};
          inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
          inline DbBaseInfo& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


          // standardGroup Field Functions 
          bool hasStandardGroup() const { return this->standardGroup_ != nullptr;};
          void deleteStandardGroup() { this->standardGroup_ = nullptr;};
          inline const DbBaseInfo::StandardGroup & getStandardGroup() const { DARABONBA_PTR_GET_CONST(standardGroup_, DbBaseInfo::StandardGroup) };
          inline DbBaseInfo::StandardGroup getStandardGroup() { DARABONBA_PTR_GET(standardGroup_, DbBaseInfo::StandardGroup) };
          inline DbBaseInfo& setStandardGroup(const DbBaseInfo::StandardGroup & standardGroup) { DARABONBA_PTR_SET_VALUE(standardGroup_, standardGroup) };
          inline DbBaseInfo& setStandardGroup(DbBaseInfo::StandardGroup && standardGroup) { DARABONBA_PTR_SET_RVALUE(standardGroup_, standardGroup) };


          // state Field Functions 
          bool hasState() const { return this->state_ != nullptr;};
          void deleteState() { this->state_ = nullptr;};
          inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
          inline DbBaseInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


          // tableCount Field Functions 
          bool hasTableCount() const { return this->tableCount_ != nullptr;};
          void deleteTableCount() { this->tableCount_ = nullptr;};
          inline int64_t getTableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0L) };
          inline DbBaseInfo& setTableCount(int64_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


          // tnsName Field Functions 
          bool hasTnsName() const { return this->tnsName_ != nullptr;};
          void deleteTnsName() { this->tnsName_ = nullptr;};
          inline string getTnsName() const { DARABONBA_PTR_GET_DEFAULT(tnsName_, "") };
          inline DbBaseInfo& setTnsName(string tnsName) { DARABONBA_PTR_SET_VALUE(tnsName_, tnsName) };


          // unitType Field Functions 
          bool hasUnitType() const { return this->unitType_ != nullptr;};
          void deleteUnitType() { this->unitType_ = nullptr;};
          inline string getUnitType() const { DARABONBA_PTR_GET_DEFAULT(unitType_, "") };
          inline DbBaseInfo& setUnitType(string unitType) { DARABONBA_PTR_SET_VALUE(unitType_, unitType) };


        protected:
          // The alias of the database instance.
          shared_ptr<string> alias_ {};
          // The timeout period of queries on the database.
          shared_ptr<int64_t> alterTimeout_ {};
          // Indicates whether access control is enabled for data assets. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> assetControl_ {};
          // The name of the instance in the instance list.
          shared_ptr<string> catalogName_ {};
          // Indicates whether the instance is added to the DMS whitelist.
          shared_ptr<string> clusterNode_ {};
          // The ID of the database. You can call the [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to query the ID of the database.
          // 
          // >  You can call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) operation to query the ID of a physical database or the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) operation to query the ID of a logical database.
          shared_ptr<int64_t> dbId_ {};
          // The type of the database. For information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
          shared_ptr<string> dbType_ {};
          // The ID of the database administrator (DBA) of the instance.
          shared_ptr<int64_t> dbaId_ {};
          // The nickname of the DBA of the instance.
          shared_ptr<string> dbaName_ {};
          // The complete endpoint of the database.
          shared_ptr<string> description_ {};
          // The encoding format of the database.
          shared_ptr<string> encoding_ {};
          // The type of the environment to which the database belongs. Valid values:
          // 
          // *   **product**: production environment
          // *   **dev**: development environment
          // *   **pre**: staging environment
          // *   **test**: test environment
          // *   **sit**: system integration testing (SIT) environment
          // *   **uat**: user acceptance testing (UAT) environment
          // *   **pet**: stress testing environment
          // *   **stag**: STAG environment
          shared_ptr<string> envType_ {};
          // Indicates whether the instance needs special attention. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> follow_ {};
          // The endpoint that is used to connect to the database.
          shared_ptr<string> host_ {};
          // The region in which the database instance resides.
          shared_ptr<string> idc_ {};
          // The name of the region in which the database instance resides.
          shared_ptr<string> idcTitle_ {};
          // The ID of the instance to which the database belongs.
          shared_ptr<int64_t> instanceId_ {};
          // The source of the database instance.Valid values:
          // 
          // *   **RDS**: an ApsaraDB RDS instance.
          // *   **ECS_OWN**: a self-managed database deployed on an Elastic Compute Service (ECS) instance.
          // *   **PUBLIC_OWN**: a self-managed database instance that is connected over the Internet.
          // *   **VPC_ID**: a self-managed database instance in a virtual private cloud (VPC) that is connected over Express Connect circuits.
          // *   **GATEWAY**: a database instance connected by using a database gateway.
          shared_ptr<string> instanceSource_ {};
          // The time when the database information was last obtained.
          shared_ptr<string> lastSyncTime_ {};
          // The instance level.
          shared_ptr<string> level_ {};
          // Indicates whether the database is logical. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> logic_ {};
          // The IDs of the owners of the databases, which are stored as an array. You can call the [GetUser](https://help.aliyun.com/document_detail/147098.html) or [ListUsers](https://help.aliyun.com/document_detail/141938.html) operation to query the IDs of the owners.
          // 
          // >  The value of OwnerIds is the same as the value of UserId
          shared_ptr<vector<int64_t>> ownerIds_ {};
          // The usernames of the database owners.
          shared_ptr<vector<string>> ownerNames_ {};
          // The port that is used to connect to the database.
          shared_ptr<int64_t> port_ {};
          // The name of the database.
          shared_ptr<string> schemaName_ {};
          // The name that is used to search for the database.
          shared_ptr<string> searchName_ {};
          // The details of the control mode of the instance.
          shared_ptr<DbBaseInfo::StandardGroup> standardGroup_ {};
          // The status of the database. Valid values:
          // 
          // *   **NORMAL**: The database is running as expected.
          // *   **DISABLE**: The database is disabled.
          // *   **OFFLINE**: The database is unpublished.
          // *   **NOT_EXIST**: The database does not exist.
          shared_ptr<string> state_ {};
          // The number of tables.
          shared_ptr<int64_t> tableCount_ {};
          // The name of TNS.
          shared_ptr<string> tnsName_ {};
          // The unit type.
          shared_ptr<string> unitType_ {};
        };

        class DagInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DagInfo& obj) { 
            DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
            DARABONBA_PTR_TO_JSON(CronBeginDate, cronBeginDate_);
            DARABONBA_PTR_TO_JSON(CronEndDate, cronEndDate_);
            DARABONBA_PTR_TO_JSON(CronTrigger, cronTrigger_);
            DARABONBA_PTR_TO_JSON(DWDevelop, DWDevelop_);
            DARABONBA_PTR_TO_JSON(DagName, dagName_);
            DARABONBA_PTR_TO_JSON(DagOwnerId, dagOwnerId_);
            DARABONBA_PTR_TO_JSON(DeployId, deployId_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(EditDagId, editDagId_);
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(IsPublic, isPublic_);
            DARABONBA_PTR_TO_JSON(Legacy, legacy_);
            DARABONBA_PTR_TO_JSON(System, system_);
            DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
            DARABONBA_PTR_TO_JSON(TriggerOnce, triggerOnce_);
          };
          friend void from_json(const Darabonba::Json& j, DagInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
            DARABONBA_PTR_FROM_JSON(CronBeginDate, cronBeginDate_);
            DARABONBA_PTR_FROM_JSON(CronEndDate, cronEndDate_);
            DARABONBA_PTR_FROM_JSON(CronTrigger, cronTrigger_);
            DARABONBA_PTR_FROM_JSON(DWDevelop, DWDevelop_);
            DARABONBA_PTR_FROM_JSON(DagName, dagName_);
            DARABONBA_PTR_FROM_JSON(DagOwnerId, dagOwnerId_);
            DARABONBA_PTR_FROM_JSON(DeployId, deployId_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(EditDagId, editDagId_);
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(IsPublic, isPublic_);
            DARABONBA_PTR_FROM_JSON(Legacy, legacy_);
            DARABONBA_PTR_FROM_JSON(System, system_);
            DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
            DARABONBA_PTR_FROM_JSON(TriggerOnce, triggerOnce_);
          };
          DagInfo() = default ;
          DagInfo(const DagInfo &) = default ;
          DagInfo(DagInfo &&) = default ;
          DagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DagInfo() = default ;
          DagInfo& operator=(const DagInfo &) = default ;
          DagInfo& operator=(DagInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->creatorId_ == nullptr
        && this->cronBeginDate_ == nullptr && this->cronEndDate_ == nullptr && this->cronTrigger_ == nullptr && this->DWDevelop_ == nullptr && this->dagName_ == nullptr
        && this->dagOwnerId_ == nullptr && this->deployId_ == nullptr && this->description_ == nullptr && this->editDagId_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->isPublic_ == nullptr && this->legacy_ == nullptr && this->system_ == nullptr
        && this->tenantId_ == nullptr && this->triggerOnce_ == nullptr; };
          // creatorId Field Functions 
          bool hasCreatorId() const { return this->creatorId_ != nullptr;};
          void deleteCreatorId() { this->creatorId_ = nullptr;};
          inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
          inline DagInfo& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


          // cronBeginDate Field Functions 
          bool hasCronBeginDate() const { return this->cronBeginDate_ != nullptr;};
          void deleteCronBeginDate() { this->cronBeginDate_ = nullptr;};
          inline string getCronBeginDate() const { DARABONBA_PTR_GET_DEFAULT(cronBeginDate_, "") };
          inline DagInfo& setCronBeginDate(string cronBeginDate) { DARABONBA_PTR_SET_VALUE(cronBeginDate_, cronBeginDate) };


          // cronEndDate Field Functions 
          bool hasCronEndDate() const { return this->cronEndDate_ != nullptr;};
          void deleteCronEndDate() { this->cronEndDate_ = nullptr;};
          inline string getCronEndDate() const { DARABONBA_PTR_GET_DEFAULT(cronEndDate_, "") };
          inline DagInfo& setCronEndDate(string cronEndDate) { DARABONBA_PTR_SET_VALUE(cronEndDate_, cronEndDate) };


          // cronTrigger Field Functions 
          bool hasCronTrigger() const { return this->cronTrigger_ != nullptr;};
          void deleteCronTrigger() { this->cronTrigger_ = nullptr;};
          inline bool getCronTrigger() const { DARABONBA_PTR_GET_DEFAULT(cronTrigger_, false) };
          inline DagInfo& setCronTrigger(bool cronTrigger) { DARABONBA_PTR_SET_VALUE(cronTrigger_, cronTrigger) };


          // DWDevelop Field Functions 
          bool hasDWDevelop() const { return this->DWDevelop_ != nullptr;};
          void deleteDWDevelop() { this->DWDevelop_ = nullptr;};
          inline bool getDWDevelop() const { DARABONBA_PTR_GET_DEFAULT(DWDevelop_, false) };
          inline DagInfo& setDWDevelop(bool DWDevelop) { DARABONBA_PTR_SET_VALUE(DWDevelop_, DWDevelop) };


          // dagName Field Functions 
          bool hasDagName() const { return this->dagName_ != nullptr;};
          void deleteDagName() { this->dagName_ = nullptr;};
          inline string getDagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
          inline DagInfo& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


          // dagOwnerId Field Functions 
          bool hasDagOwnerId() const { return this->dagOwnerId_ != nullptr;};
          void deleteDagOwnerId() { this->dagOwnerId_ = nullptr;};
          inline string getDagOwnerId() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerId_, "") };
          inline DagInfo& setDagOwnerId(string dagOwnerId) { DARABONBA_PTR_SET_VALUE(dagOwnerId_, dagOwnerId) };


          // deployId Field Functions 
          bool hasDeployId() const { return this->deployId_ != nullptr;};
          void deleteDeployId() { this->deployId_ = nullptr;};
          inline int64_t getDeployId() const { DARABONBA_PTR_GET_DEFAULT(deployId_, 0L) };
          inline DagInfo& setDeployId(int64_t deployId) { DARABONBA_PTR_SET_VALUE(deployId_, deployId) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline DagInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // editDagId Field Functions 
          bool hasEditDagId() const { return this->editDagId_ != nullptr;};
          void deleteEditDagId() { this->editDagId_ = nullptr;};
          inline int64_t getEditDagId() const { DARABONBA_PTR_GET_DEFAULT(editDagId_, 0L) };
          inline DagInfo& setEditDagId(int64_t editDagId) { DARABONBA_PTR_SET_VALUE(editDagId_, editDagId) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline DagInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline DagInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline DagInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // isPublic Field Functions 
          bool hasIsPublic() const { return this->isPublic_ != nullptr;};
          void deleteIsPublic() { this->isPublic_ = nullptr;};
          inline int64_t getIsPublic() const { DARABONBA_PTR_GET_DEFAULT(isPublic_, 0L) };
          inline DagInfo& setIsPublic(int64_t isPublic) { DARABONBA_PTR_SET_VALUE(isPublic_, isPublic) };


          // legacy Field Functions 
          bool hasLegacy() const { return this->legacy_ != nullptr;};
          void deleteLegacy() { this->legacy_ = nullptr;};
          inline bool getLegacy() const { DARABONBA_PTR_GET_DEFAULT(legacy_, false) };
          inline DagInfo& setLegacy(bool legacy) { DARABONBA_PTR_SET_VALUE(legacy_, legacy) };


          // system Field Functions 
          bool hasSystem() const { return this->system_ != nullptr;};
          void deleteSystem() { this->system_ = nullptr;};
          inline bool getSystem() const { DARABONBA_PTR_GET_DEFAULT(system_, false) };
          inline DagInfo& setSystem(bool system) { DARABONBA_PTR_SET_VALUE(system_, system) };


          // tenantId Field Functions 
          bool hasTenantId() const { return this->tenantId_ != nullptr;};
          void deleteTenantId() { this->tenantId_ = nullptr;};
          inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
          inline DagInfo& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


          // triggerOnce Field Functions 
          bool hasTriggerOnce() const { return this->triggerOnce_ != nullptr;};
          void deleteTriggerOnce() { this->triggerOnce_ = nullptr;};
          inline bool getTriggerOnce() const { DARABONBA_PTR_GET_DEFAULT(triggerOnce_, false) };
          inline DagInfo& setTriggerOnce(bool triggerOnce) { DARABONBA_PTR_SET_VALUE(triggerOnce_, triggerOnce) };


        protected:
          // The ID of the user who created the task flow.
          shared_ptr<string> creatorId_ {};
          // The start time for scheduling. The task flow is not scheduled before this point in time.
          shared_ptr<string> cronBeginDate_ {};
          // The end time for scheduling. The task flow is not scheduled after this point in time.
          shared_ptr<string> cronEndDate_ {};
          // Indicates whether the archiving task is a scheduled task. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> cronTrigger_ {};
          // Indicates whether the task is used to develop warehouses.
          // 
          // >  This field is a retained field that is not in use.
          shared_ptr<bool> DWDevelop_ {};
          // The name of the workflow.
          shared_ptr<string> dagName_ {};
          // The ID of the owner of the workflow.
          shared_ptr<string> dagOwnerId_ {};
          // The ID of the deployment record.
          shared_ptr<int64_t> deployId_ {};
          // The description of the workflow.
          shared_ptr<string> description_ {};
          // The ID of the editable workflow version.
          shared_ptr<int64_t> editDagId_ {};
          // The time when the workflow was created.
          shared_ptr<string> gmtCreate_ {};
          // The time when the workflow was last modified.
          shared_ptr<string> gmtModified_ {};
          // The ID of the task flow.
          shared_ptr<int64_t> id_ {};
          // Indicates whether the workflow is public. Valid values:
          // 
          // *   **0**: not public.
          // *   **1**: public.
          shared_ptr<int64_t> isPublic_ {};
          // Indicates whether the task is a historical task. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> legacy_ {};
          // Indicates whether the task was created by the system. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> system_ {};
          // The tenant ID.
          shared_ptr<string> tenantId_ {};
          // Indicates whether the workflow is triggered to run once. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> triggerOnce_ {};
        };

        virtual bool empty() const override { return this->dagInfo_ == nullptr
        && this->dbBaseInfo_ == nullptr && this->instanceTotal_ == nullptr && this->instances_ == nullptr && this->nextFireTimeResult_ == nullptr && this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr && this->tempTableNameMap_ == nullptr; };
        // dagInfo Field Functions 
        bool hasDagInfo() const { return this->dagInfo_ != nullptr;};
        void deleteDagInfo() { this->dagInfo_ = nullptr;};
        inline const PluginExtraData::DagInfo & getDagInfo() const { DARABONBA_PTR_GET_CONST(dagInfo_, PluginExtraData::DagInfo) };
        inline PluginExtraData::DagInfo getDagInfo() { DARABONBA_PTR_GET(dagInfo_, PluginExtraData::DagInfo) };
        inline PluginExtraData& setDagInfo(const PluginExtraData::DagInfo & dagInfo) { DARABONBA_PTR_SET_VALUE(dagInfo_, dagInfo) };
        inline PluginExtraData& setDagInfo(PluginExtraData::DagInfo && dagInfo) { DARABONBA_PTR_SET_RVALUE(dagInfo_, dagInfo) };


        // dbBaseInfo Field Functions 
        bool hasDbBaseInfo() const { return this->dbBaseInfo_ != nullptr;};
        void deleteDbBaseInfo() { this->dbBaseInfo_ = nullptr;};
        inline const PluginExtraData::DbBaseInfo & getDbBaseInfo() const { DARABONBA_PTR_GET_CONST(dbBaseInfo_, PluginExtraData::DbBaseInfo) };
        inline PluginExtraData::DbBaseInfo getDbBaseInfo() { DARABONBA_PTR_GET(dbBaseInfo_, PluginExtraData::DbBaseInfo) };
        inline PluginExtraData& setDbBaseInfo(const PluginExtraData::DbBaseInfo & dbBaseInfo) { DARABONBA_PTR_SET_VALUE(dbBaseInfo_, dbBaseInfo) };
        inline PluginExtraData& setDbBaseInfo(PluginExtraData::DbBaseInfo && dbBaseInfo) { DARABONBA_PTR_SET_RVALUE(dbBaseInfo_, dbBaseInfo) };


        // instanceTotal Field Functions 
        bool hasInstanceTotal() const { return this->instanceTotal_ != nullptr;};
        void deleteInstanceTotal() { this->instanceTotal_ = nullptr;};
        inline int64_t getInstanceTotal() const { DARABONBA_PTR_GET_DEFAULT(instanceTotal_, 0L) };
        inline PluginExtraData& setInstanceTotal(int64_t instanceTotal) { DARABONBA_PTR_SET_VALUE(instanceTotal_, instanceTotal) };


        // instances Field Functions 
        bool hasInstances() const { return this->instances_ != nullptr;};
        void deleteInstances() { this->instances_ = nullptr;};
        inline const vector<PluginExtraData::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<PluginExtraData::Instances>) };
        inline vector<PluginExtraData::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<PluginExtraData::Instances>) };
        inline PluginExtraData& setInstances(const vector<PluginExtraData::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
        inline PluginExtraData& setInstances(vector<PluginExtraData::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


        // nextFireTimeResult Field Functions 
        bool hasNextFireTimeResult() const { return this->nextFireTimeResult_ != nullptr;};
        void deleteNextFireTimeResult() { this->nextFireTimeResult_ = nullptr;};
        inline const PluginExtraData::NextFireTimeResult & getNextFireTimeResult() const { DARABONBA_PTR_GET_CONST(nextFireTimeResult_, PluginExtraData::NextFireTimeResult) };
        inline PluginExtraData::NextFireTimeResult getNextFireTimeResult() { DARABONBA_PTR_GET(nextFireTimeResult_, PluginExtraData::NextFireTimeResult) };
        inline PluginExtraData& setNextFireTimeResult(const PluginExtraData::NextFireTimeResult & nextFireTimeResult) { DARABONBA_PTR_SET_VALUE(nextFireTimeResult_, nextFireTimeResult) };
        inline PluginExtraData& setNextFireTimeResult(PluginExtraData::NextFireTimeResult && nextFireTimeResult) { DARABONBA_PTR_SET_RVALUE(nextFireTimeResult_, nextFireTimeResult) };


        // pageIndex Field Functions 
        bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
        void deletePageIndex() { this->pageIndex_ = nullptr;};
        inline int64_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
        inline PluginExtraData& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
        inline PluginExtraData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // tempTableNameMap Field Functions 
        bool hasTempTableNameMap() const { return this->tempTableNameMap_ != nullptr;};
        void deleteTempTableNameMap() { this->tempTableNameMap_ = nullptr;};
        inline         const Darabonba::Json & getTempTableNameMap() const { DARABONBA_GET(tempTableNameMap_) };
        Darabonba::Json & getTempTableNameMap() { DARABONBA_GET(tempTableNameMap_) };
        inline PluginExtraData& setTempTableNameMap(const Darabonba::Json & tempTableNameMap) { DARABONBA_SET_VALUE(tempTableNameMap_, tempTableNameMap) };
        inline PluginExtraData& setTempTableNameMap(Darabonba::Json && tempTableNameMap) { DARABONBA_SET_RVALUE(tempTableNameMap_, tempTableNameMap) };


      protected:
        // The information about the workflow.
        shared_ptr<PluginExtraData::DagInfo> dagInfo_ {};
        // The database information related to data archiving tickets.
        shared_ptr<PluginExtraData::DbBaseInfo> dbBaseInfo_ {};
        // The total number of archiving tasks.
        shared_ptr<int64_t> instanceTotal_ {};
        // The list of archiving tasks.
        shared_ptr<vector<PluginExtraData::Instances>> instances_ {};
        // The time when the next task is triggered.
        shared_ptr<PluginExtraData::NextFireTimeResult> nextFireTimeResult_ {};
        // The page number.
        shared_ptr<int64_t> pageIndex_ {};
        // The number of entries per page.
        shared_ptr<int64_t> pageSize_ {};
        // The name of the temporary table that is generated by the archiving task (indicated by the archiving task ID).
        Darabonba::Json tempTableNameMap_ {};
      };

      virtual bool empty() const override { return this->comment_ == nullptr
        && this->committer_ == nullptr && this->committerId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->pluginExtraData_ == nullptr && this->pluginParam_ == nullptr && this->pluginType_ == nullptr && this->relatedUserList_ == nullptr && this->relatedUserNickList_ == nullptr
        && this->statusCode_ == nullptr && this->statusDesc_ == nullptr && this->workflowInstanceId_ == nullptr && this->workflowStatusDesc_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline DataArchiveOrderDetail& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // committer Field Functions 
      bool hasCommitter() const { return this->committer_ != nullptr;};
      void deleteCommitter() { this->committer_ = nullptr;};
      inline string getCommitter() const { DARABONBA_PTR_GET_DEFAULT(committer_, "") };
      inline DataArchiveOrderDetail& setCommitter(string committer) { DARABONBA_PTR_SET_VALUE(committer_, committer) };


      // committerId Field Functions 
      bool hasCommitterId() const { return this->committerId_ != nullptr;};
      void deleteCommitterId() { this->committerId_ = nullptr;};
      inline int64_t getCommitterId() const { DARABONBA_PTR_GET_DEFAULT(committerId_, 0L) };
      inline DataArchiveOrderDetail& setCommitterId(int64_t committerId) { DARABONBA_PTR_SET_VALUE(committerId_, committerId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline DataArchiveOrderDetail& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline DataArchiveOrderDetail& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DataArchiveOrderDetail& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // pluginExtraData Field Functions 
      bool hasPluginExtraData() const { return this->pluginExtraData_ != nullptr;};
      void deletePluginExtraData() { this->pluginExtraData_ = nullptr;};
      inline const DataArchiveOrderDetail::PluginExtraData & getPluginExtraData() const { DARABONBA_PTR_GET_CONST(pluginExtraData_, DataArchiveOrderDetail::PluginExtraData) };
      inline DataArchiveOrderDetail::PluginExtraData getPluginExtraData() { DARABONBA_PTR_GET(pluginExtraData_, DataArchiveOrderDetail::PluginExtraData) };
      inline DataArchiveOrderDetail& setPluginExtraData(const DataArchiveOrderDetail::PluginExtraData & pluginExtraData) { DARABONBA_PTR_SET_VALUE(pluginExtraData_, pluginExtraData) };
      inline DataArchiveOrderDetail& setPluginExtraData(DataArchiveOrderDetail::PluginExtraData && pluginExtraData) { DARABONBA_PTR_SET_RVALUE(pluginExtraData_, pluginExtraData) };


      // pluginParam Field Functions 
      bool hasPluginParam() const { return this->pluginParam_ != nullptr;};
      void deletePluginParam() { this->pluginParam_ = nullptr;};
      inline const DataArchiveOrderDetail::PluginParam & getPluginParam() const { DARABONBA_PTR_GET_CONST(pluginParam_, DataArchiveOrderDetail::PluginParam) };
      inline DataArchiveOrderDetail::PluginParam getPluginParam() { DARABONBA_PTR_GET(pluginParam_, DataArchiveOrderDetail::PluginParam) };
      inline DataArchiveOrderDetail& setPluginParam(const DataArchiveOrderDetail::PluginParam & pluginParam) { DARABONBA_PTR_SET_VALUE(pluginParam_, pluginParam) };
      inline DataArchiveOrderDetail& setPluginParam(DataArchiveOrderDetail::PluginParam && pluginParam) { DARABONBA_PTR_SET_RVALUE(pluginParam_, pluginParam) };


      // pluginType Field Functions 
      bool hasPluginType() const { return this->pluginType_ != nullptr;};
      void deletePluginType() { this->pluginType_ = nullptr;};
      inline string getPluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
      inline DataArchiveOrderDetail& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


      // relatedUserList Field Functions 
      bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
      void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
      inline const vector<int64_t> & getRelatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<int64_t>) };
      inline vector<int64_t> getRelatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<int64_t>) };
      inline DataArchiveOrderDetail& setRelatedUserList(const vector<int64_t> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
      inline DataArchiveOrderDetail& setRelatedUserList(vector<int64_t> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


      // relatedUserNickList Field Functions 
      bool hasRelatedUserNickList() const { return this->relatedUserNickList_ != nullptr;};
      void deleteRelatedUserNickList() { this->relatedUserNickList_ = nullptr;};
      inline const vector<string> & getRelatedUserNickList() const { DARABONBA_PTR_GET_CONST(relatedUserNickList_, vector<string>) };
      inline vector<string> getRelatedUserNickList() { DARABONBA_PTR_GET(relatedUserNickList_, vector<string>) };
      inline DataArchiveOrderDetail& setRelatedUserNickList(const vector<string> & relatedUserNickList) { DARABONBA_PTR_SET_VALUE(relatedUserNickList_, relatedUserNickList) };
      inline DataArchiveOrderDetail& setRelatedUserNickList(vector<string> && relatedUserNickList) { DARABONBA_PTR_SET_RVALUE(relatedUserNickList_, relatedUserNickList) };


      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
      inline DataArchiveOrderDetail& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline DataArchiveOrderDetail& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      // workflowInstanceId Field Functions 
      bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
      void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
      inline int64_t getWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
      inline DataArchiveOrderDetail& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


      // workflowStatusDesc Field Functions 
      bool hasWorkflowStatusDesc() const { return this->workflowStatusDesc_ != nullptr;};
      void deleteWorkflowStatusDesc() { this->workflowStatusDesc_ = nullptr;};
      inline string getWorkflowStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(workflowStatusDesc_, "") };
      inline DataArchiveOrderDetail& setWorkflowStatusDesc(string workflowStatusDesc) { DARABONBA_PTR_SET_VALUE(workflowStatusDesc_, workflowStatusDesc) };


    protected:
      // The description of the data archiving tickets.
      shared_ptr<string> comment_ {};
      // The user who submitted the ticket.
      shared_ptr<string> committer_ {};
      // The ID of the user who submitted the ticket. The ID is a user ID and not the ID of an Alibaba Cloud account.
      shared_ptr<int64_t> committerId_ {};
      // The time when the ticket was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the ticket was last modified.
      shared_ptr<string> gmtModified_ {};
      // The ID of data archiving tickets.
      shared_ptr<int64_t> id_ {};
      // The additional information about the ticket.
      shared_ptr<DataArchiveOrderDetail::PluginExtraData> pluginExtraData_ {};
      // The ticket creation parameter. The value is a JSON string. For more information, see [PluginType parameter](https://help.aliyun.com/document_detail/429109.html).
      shared_ptr<DataArchiveOrderDetail::PluginParam> pluginParam_ {};
      // The plug-in type that corresponds to the type of the ticket. The plug-in type for data archiving is DATA_ARCHIVE. For more information, see [PluginType parameter](https://help.aliyun.com/document_detail/429109.html).
      shared_ptr<string> pluginType_ {};
      // The user IDs related to the ticket.
      shared_ptr<vector<int64_t>> relatedUserList_ {};
      // The nicknames of the users that are related to the ticket.
      shared_ptr<vector<string>> relatedUserNickList_ {};
      // The status code of the ticket. Valid values:
      // 
      // *   **new**: newly created.
      // *   **toaudit**: being reviewed.
      // *   **Approved**: approved.
      // *   **reject**: rejected.
      // *   **processing**: being executed.
      // *   **Success**: successful.
      // *   **closed**: disabled.
      shared_ptr<string> statusCode_ {};
      // The status description of the ticket.
      shared_ptr<string> statusDesc_ {};
      // The ID of the approval process. You can call the [GetOrderBaseInfo](https://help.aliyun.com/document_detail/144642.html) operation to obtain the ID of the approval process.
      shared_ptr<int64_t> workflowInstanceId_ {};
      // The description of the approval process.
      shared_ptr<string> workflowStatusDesc_ {};
    };

    virtual bool empty() const override { return this->dataArchiveOrderDetail_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // dataArchiveOrderDetail Field Functions 
    bool hasDataArchiveOrderDetail() const { return this->dataArchiveOrderDetail_ != nullptr;};
    void deleteDataArchiveOrderDetail() { this->dataArchiveOrderDetail_ = nullptr;};
    inline const GetDataArchiveOrderDetailResponseBody::DataArchiveOrderDetail & getDataArchiveOrderDetail() const { DARABONBA_PTR_GET_CONST(dataArchiveOrderDetail_, GetDataArchiveOrderDetailResponseBody::DataArchiveOrderDetail) };
    inline GetDataArchiveOrderDetailResponseBody::DataArchiveOrderDetail getDataArchiveOrderDetail() { DARABONBA_PTR_GET(dataArchiveOrderDetail_, GetDataArchiveOrderDetailResponseBody::DataArchiveOrderDetail) };
    inline GetDataArchiveOrderDetailResponseBody& setDataArchiveOrderDetail(const GetDataArchiveOrderDetailResponseBody::DataArchiveOrderDetail & dataArchiveOrderDetail) { DARABONBA_PTR_SET_VALUE(dataArchiveOrderDetail_, dataArchiveOrderDetail) };
    inline GetDataArchiveOrderDetailResponseBody& setDataArchiveOrderDetail(GetDataArchiveOrderDetailResponseBody::DataArchiveOrderDetail && dataArchiveOrderDetail) { DARABONBA_PTR_SET_RVALUE(dataArchiveOrderDetail_, dataArchiveOrderDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataArchiveOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataArchiveOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataArchiveOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataArchiveOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetDataArchiveOrderDetailResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The details of data archiving tickets.
    shared_ptr<GetDataArchiveOrderDetailResponseBody::DataArchiveOrderDetail> dataArchiveOrderDetail_ {};
    // The error code returned if the call failed.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request, which is used to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // Tracks service requests.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
