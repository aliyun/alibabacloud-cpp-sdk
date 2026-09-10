// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXECUTESQLCONVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXECUTESQLCONVERSIONREQUEST_HPP_
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
  class CreateExecuteSqlConversionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExecuteSqlConversionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sourceDialect, sourceDialect_);
      DARABONBA_PTR_TO_JSON(sourceSqlScript, sourceSqlScript_);
      DARABONBA_PTR_TO_JSON(targetDialect, targetDialect_);
      DARABONBA_PTR_TO_JSON(taskDescription, taskDescription_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExecuteSqlConversionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sourceDialect, sourceDialect_);
      DARABONBA_PTR_FROM_JSON(sourceSqlScript, sourceSqlScript_);
      DARABONBA_PTR_FROM_JSON(targetDialect, targetDialect_);
      DARABONBA_PTR_FROM_JSON(taskDescription, taskDescription_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateExecuteSqlConversionRequest() = default ;
    CreateExecuteSqlConversionRequest(const CreateExecuteSqlConversionRequest &) = default ;
    CreateExecuteSqlConversionRequest(CreateExecuteSqlConversionRequest &&) = default ;
    CreateExecuteSqlConversionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExecuteSqlConversionRequest() = default ;
    CreateExecuteSqlConversionRequest& operator=(const CreateExecuteSqlConversionRequest &) = default ;
    CreateExecuteSqlConversionRequest& operator=(CreateExecuteSqlConversionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceSqlScript : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceSqlScript& obj) { 
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(finishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(scriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(scriptName, scriptName_);
        DARABONBA_PTR_TO_JSON(scriptTransformStatus, scriptTransformStatus_);
        DARABONBA_PTR_TO_JSON(sqlResultContent, sqlResultContent_);
        DARABONBA_PTR_TO_JSON(sqlSourceContent, sqlSourceContent_);
        DARABONBA_PTR_TO_JSON(tableMappingList, tableMappingList_);
      };
      friend void from_json(const Darabonba::Json& j, SourceSqlScript& obj) { 
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(finishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(scriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(scriptName, scriptName_);
        DARABONBA_PTR_FROM_JSON(scriptTransformStatus, scriptTransformStatus_);
        DARABONBA_PTR_FROM_JSON(sqlResultContent, sqlResultContent_);
        DARABONBA_PTR_FROM_JSON(sqlSourceContent, sqlSourceContent_);
        DARABONBA_PTR_FROM_JSON(tableMappingList, tableMappingList_);
      };
      SourceSqlScript() = default ;
      SourceSqlScript(const SourceSqlScript &) = default ;
      SourceSqlScript(SourceSqlScript &&) = default ;
      SourceSqlScript(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceSqlScript() = default ;
      SourceSqlScript& operator=(const SourceSqlScript &) = default ;
      SourceSqlScript& operator=(SourceSqlScript &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TableMappingList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableMappingList& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(sourceSchema, sourceSchema_);
          DARABONBA_PTR_TO_JSON(sourceTableName, sourceTableName_);
          DARABONBA_PTR_TO_JSON(targetTableName, targetTableName_);
          DARABONBA_PTR_TO_JSON(targetType, targetType_);
          DARABONBA_PTR_TO_JSON(taskId, taskId_);
          DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(uid, uid_);
        };
        friend void from_json(const Darabonba::Json& j, TableMappingList& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(sourceSchema, sourceSchema_);
          DARABONBA_PTR_FROM_JSON(sourceTableName, sourceTableName_);
          DARABONBA_PTR_FROM_JSON(targetTableName, targetTableName_);
          DARABONBA_PTR_FROM_JSON(targetType, targetType_);
          DARABONBA_PTR_FROM_JSON(taskId, taskId_);
          DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(uid, uid_);
        };
        TableMappingList() = default ;
        TableMappingList(const TableMappingList &) = default ;
        TableMappingList(TableMappingList &&) = default ;
        TableMappingList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableMappingList() = default ;
        TableMappingList& operator=(const TableMappingList &) = default ;
        TableMappingList& operator=(TableMappingList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->sourceSchema_ == nullptr && this->sourceTableName_ == nullptr && this->targetTableName_ == nullptr && this->targetType_ == nullptr && this->taskId_ == nullptr
        && this->tenantId_ == nullptr && this->uid_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TableMappingList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // sourceSchema Field Functions 
        bool hasSourceSchema() const { return this->sourceSchema_ != nullptr;};
        void deleteSourceSchema() { this->sourceSchema_ = nullptr;};
        inline string getSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(sourceSchema_, "") };
        inline TableMappingList& setSourceSchema(string sourceSchema) { DARABONBA_PTR_SET_VALUE(sourceSchema_, sourceSchema) };


        // sourceTableName Field Functions 
        bool hasSourceTableName() const { return this->sourceTableName_ != nullptr;};
        void deleteSourceTableName() { this->sourceTableName_ = nullptr;};
        inline string getSourceTableName() const { DARABONBA_PTR_GET_DEFAULT(sourceTableName_, "") };
        inline TableMappingList& setSourceTableName(string sourceTableName) { DARABONBA_PTR_SET_VALUE(sourceTableName_, sourceTableName) };


        // targetTableName Field Functions 
        bool hasTargetTableName() const { return this->targetTableName_ != nullptr;};
        void deleteTargetTableName() { this->targetTableName_ = nullptr;};
        inline string getTargetTableName() const { DARABONBA_PTR_GET_DEFAULT(targetTableName_, "") };
        inline TableMappingList& setTargetTableName(string targetTableName) { DARABONBA_PTR_SET_VALUE(targetTableName_, targetTableName) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline TableMappingList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
        inline TableMappingList& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline TableMappingList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
        inline TableMappingList& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      protected:
        // The primary key.
        shared_ptr<int64_t> id_ {};
        // The source type. Valid values: DB and Schema.
        shared_ptr<string> sourceSchema_ {};
        // The source table name.
        shared_ptr<string> sourceTableName_ {};
        // The target table name.
        shared_ptr<string> targetTableName_ {};
        // The target type. Valid values: DB and Schema.
        shared_ptr<string> targetType_ {};
        // The SQL conversion task ID.
        shared_ptr<int64_t> taskId_ {};
        // The tenant ID.
        shared_ptr<string> tenantId_ {};
        // The user ID.
        shared_ptr<string> uid_ {};
      };

      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->finishTime_ == nullptr && this->scriptId_ == nullptr && this->scriptName_ == nullptr && this->scriptTransformStatus_ == nullptr && this->sqlResultContent_ == nullptr
        && this->sqlSourceContent_ == nullptr && this->tableMappingList_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline SourceSqlScript& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline SourceSqlScript& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline int64_t getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, 0L) };
      inline SourceSqlScript& setScriptId(int64_t scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // scriptName Field Functions 
      bool hasScriptName() const { return this->scriptName_ != nullptr;};
      void deleteScriptName() { this->scriptName_ = nullptr;};
      inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
      inline SourceSqlScript& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


      // scriptTransformStatus Field Functions 
      bool hasScriptTransformStatus() const { return this->scriptTransformStatus_ != nullptr;};
      void deleteScriptTransformStatus() { this->scriptTransformStatus_ = nullptr;};
      inline string getScriptTransformStatus() const { DARABONBA_PTR_GET_DEFAULT(scriptTransformStatus_, "") };
      inline SourceSqlScript& setScriptTransformStatus(string scriptTransformStatus) { DARABONBA_PTR_SET_VALUE(scriptTransformStatus_, scriptTransformStatus) };


      // sqlResultContent Field Functions 
      bool hasSqlResultContent() const { return this->sqlResultContent_ != nullptr;};
      void deleteSqlResultContent() { this->sqlResultContent_ = nullptr;};
      inline string getSqlResultContent() const { DARABONBA_PTR_GET_DEFAULT(sqlResultContent_, "") };
      inline SourceSqlScript& setSqlResultContent(string sqlResultContent) { DARABONBA_PTR_SET_VALUE(sqlResultContent_, sqlResultContent) };


      // sqlSourceContent Field Functions 
      bool hasSqlSourceContent() const { return this->sqlSourceContent_ != nullptr;};
      void deleteSqlSourceContent() { this->sqlSourceContent_ = nullptr;};
      inline string getSqlSourceContent() const { DARABONBA_PTR_GET_DEFAULT(sqlSourceContent_, "") };
      inline SourceSqlScript& setSqlSourceContent(string sqlSourceContent) { DARABONBA_PTR_SET_VALUE(sqlSourceContent_, sqlSourceContent) };


      // tableMappingList Field Functions 
      bool hasTableMappingList() const { return this->tableMappingList_ != nullptr;};
      void deleteTableMappingList() { this->tableMappingList_ = nullptr;};
      inline const vector<SourceSqlScript::TableMappingList> & getTableMappingList() const { DARABONBA_PTR_GET_CONST(tableMappingList_, vector<SourceSqlScript::TableMappingList>) };
      inline vector<SourceSqlScript::TableMappingList> getTableMappingList() { DARABONBA_PTR_GET(tableMappingList_, vector<SourceSqlScript::TableMappingList>) };
      inline SourceSqlScript& setTableMappingList(const vector<SourceSqlScript::TableMappingList> & tableMappingList) { DARABONBA_PTR_SET_VALUE(tableMappingList_, tableMappingList) };
      inline SourceSqlScript& setTableMappingList(vector<SourceSqlScript::TableMappingList> && tableMappingList) { DARABONBA_PTR_SET_RVALUE(tableMappingList_, tableMappingList) };


    protected:
      // The error reason.
      shared_ptr<string> errorMessage_ {};
      // The time when the conversion is completed.
      shared_ptr<string> finishTime_ {};
      // The script ID.
      shared_ptr<int64_t> scriptId_ {};
      // The script name.
      shared_ptr<string> scriptName_ {};
      // The script conversion status. In conversion job scenarios, valid values: pass (conversion succeeded), turning (conversion in progress), fail (conversion failed). In some scenarios, the following values are used: success (succeeded), failed (failed), skipped (skipped).
      shared_ptr<string> scriptTransformStatus_ {};
      // The converted script content.
      shared_ptr<string> sqlResultContent_ {};
      // The original script content.
      shared_ptr<string> sqlSourceContent_ {};
      // The table name mappings for conversion.
      shared_ptr<vector<SourceSqlScript::TableMappingList>> tableMappingList_ {};
    };

    virtual bool empty() const override { return this->sourceDialect_ == nullptr
        && this->sourceSqlScript_ == nullptr && this->targetDialect_ == nullptr && this->taskDescription_ == nullptr && this->taskName_ == nullptr && this->type_ == nullptr; };
    // sourceDialect Field Functions 
    bool hasSourceDialect() const { return this->sourceDialect_ != nullptr;};
    void deleteSourceDialect() { this->sourceDialect_ = nullptr;};
    inline string getSourceDialect() const { DARABONBA_PTR_GET_DEFAULT(sourceDialect_, "") };
    inline CreateExecuteSqlConversionRequest& setSourceDialect(string sourceDialect) { DARABONBA_PTR_SET_VALUE(sourceDialect_, sourceDialect) };


    // sourceSqlScript Field Functions 
    bool hasSourceSqlScript() const { return this->sourceSqlScript_ != nullptr;};
    void deleteSourceSqlScript() { this->sourceSqlScript_ = nullptr;};
    inline const vector<CreateExecuteSqlConversionRequest::SourceSqlScript> & getSourceSqlScript() const { DARABONBA_PTR_GET_CONST(sourceSqlScript_, vector<CreateExecuteSqlConversionRequest::SourceSqlScript>) };
    inline vector<CreateExecuteSqlConversionRequest::SourceSqlScript> getSourceSqlScript() { DARABONBA_PTR_GET(sourceSqlScript_, vector<CreateExecuteSqlConversionRequest::SourceSqlScript>) };
    inline CreateExecuteSqlConversionRequest& setSourceSqlScript(const vector<CreateExecuteSqlConversionRequest::SourceSqlScript> & sourceSqlScript) { DARABONBA_PTR_SET_VALUE(sourceSqlScript_, sourceSqlScript) };
    inline CreateExecuteSqlConversionRequest& setSourceSqlScript(vector<CreateExecuteSqlConversionRequest::SourceSqlScript> && sourceSqlScript) { DARABONBA_PTR_SET_RVALUE(sourceSqlScript_, sourceSqlScript) };


    // targetDialect Field Functions 
    bool hasTargetDialect() const { return this->targetDialect_ != nullptr;};
    void deleteTargetDialect() { this->targetDialect_ = nullptr;};
    inline string getTargetDialect() const { DARABONBA_PTR_GET_DEFAULT(targetDialect_, "") };
    inline CreateExecuteSqlConversionRequest& setTargetDialect(string targetDialect) { DARABONBA_PTR_SET_VALUE(targetDialect_, targetDialect) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline CreateExecuteSqlConversionRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateExecuteSqlConversionRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CreateExecuteSqlConversionRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The source dialect.
    shared_ptr<string> sourceDialect_ {};
    // The list of source SQL scripts.
    shared_ptr<vector<CreateExecuteSqlConversionRequest::SourceSqlScript>> sourceSqlScript_ {};
    // The target dialect.
    shared_ptr<string> targetDialect_ {};
    // The task description.
    shared_ptr<string> taskDescription_ {};
    // The task name.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // The script type. Valid values: 0 (DDL) and 1 (DQL).
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
