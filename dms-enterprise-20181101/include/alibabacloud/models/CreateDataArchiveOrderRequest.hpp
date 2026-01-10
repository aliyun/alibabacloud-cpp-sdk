// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAARCHIVEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAARCHIVEORDERREQUEST_HPP_
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
  class CreateDataArchiveOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataArchiveOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataArchiveOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateDataArchiveOrderRequest() = default ;
    CreateDataArchiveOrderRequest(const CreateDataArchiveOrderRequest &) = default ;
    CreateDataArchiveOrderRequest(CreateDataArchiveOrderRequest &&) = default ;
    CreateDataArchiveOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataArchiveOrderRequest() = default ;
    CreateDataArchiveOrderRequest& operator=(const CreateDataArchiveOrderRequest &) = default ;
    CreateDataArchiveOrderRequest& operator=(CreateDataArchiveOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Param : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Param& obj) { 
        DARABONBA_PTR_TO_JSON(ArchiveMethod, archiveMethod_);
        DARABONBA_PTR_TO_JSON(CronStr, cronStr_);
        DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_TO_JSON(Logic, logic_);
        DARABONBA_PTR_TO_JSON(OrderAfter, orderAfter_);
        DARABONBA_PTR_TO_JSON(RunMethod, runMethod_);
        DARABONBA_PTR_TO_JSON(SourceCatalogName, sourceCatalogName_);
        DARABONBA_PTR_TO_JSON(SourceInstanceName, sourceInstanceName_);
        DARABONBA_PTR_TO_JSON(SourceSchemaName, sourceSchemaName_);
        DARABONBA_PTR_TO_JSON(TableIncludes, tableIncludes_);
        DARABONBA_PTR_TO_JSON(TableMapping, tableMapping_);
        DARABONBA_PTR_TO_JSON(TargetInstanceHost, targetInstanceHost_);
        DARABONBA_PTR_TO_JSON(Variables, variables_);
      };
      friend void from_json(const Darabonba::Json& j, Param& obj) { 
        DARABONBA_PTR_FROM_JSON(ArchiveMethod, archiveMethod_);
        DARABONBA_PTR_FROM_JSON(CronStr, cronStr_);
        DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_FROM_JSON(Logic, logic_);
        DARABONBA_PTR_FROM_JSON(OrderAfter, orderAfter_);
        DARABONBA_PTR_FROM_JSON(RunMethod, runMethod_);
        DARABONBA_PTR_FROM_JSON(SourceCatalogName, sourceCatalogName_);
        DARABONBA_PTR_FROM_JSON(SourceInstanceName, sourceInstanceName_);
        DARABONBA_PTR_FROM_JSON(SourceSchemaName, sourceSchemaName_);
        DARABONBA_PTR_FROM_JSON(TableIncludes, tableIncludes_);
        DARABONBA_PTR_FROM_JSON(TableMapping, tableMapping_);
        DARABONBA_PTR_FROM_JSON(TargetInstanceHost, targetInstanceHost_);
        DARABONBA_PTR_FROM_JSON(Variables, variables_);
      };
      Param() = default ;
      Param(const Param &) = default ;
      Param(Param &&) = default ;
      Param(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Param() = default ;
      Param& operator=(const Param &) = default ;
      Param& operator=(Param &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Variables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Variables& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Pattern, pattern_);
        };
        friend void from_json(const Darabonba::Json& j, Variables& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
        };
        Variables() = default ;
        Variables(const Variables &) = default ;
        Variables(Variables &&) = default ;
        Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Variables() = default ;
        Variables& operator=(const Variables &) = default ;
        Variables& operator=(Variables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->pattern_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Variables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pattern Field Functions 
        bool hasPattern() const { return this->pattern_ != nullptr;};
        void deletePattern() { this->pattern_ = nullptr;};
        inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
        inline Variables& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> pattern_ {};
      };

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
        // 
        // This parameter is required.
        shared_ptr<string> tableName_ {};
        // The filter condition that is specified by the WHERE clause of the archiving configuration. If a time variable is used in the filter condition, the filter condition is specified in the following format: field name <=\\"${variable name}\\". The variable name in the filter condition must be the same as the time variable name that is specified in the Variables parameter.
        shared_ptr<string> tableWhere_ {};
      };

      virtual bool empty() const override { return this->archiveMethod_ == nullptr
        && this->cronStr_ == nullptr && this->databaseId_ == nullptr && this->logic_ == nullptr && this->orderAfter_ == nullptr && this->runMethod_ == nullptr
        && this->sourceCatalogName_ == nullptr && this->sourceInstanceName_ == nullptr && this->sourceSchemaName_ == nullptr && this->tableIncludes_ == nullptr && this->tableMapping_ == nullptr
        && this->targetInstanceHost_ == nullptr && this->variables_ == nullptr; };
      // archiveMethod Field Functions 
      bool hasArchiveMethod() const { return this->archiveMethod_ != nullptr;};
      void deleteArchiveMethod() { this->archiveMethod_ = nullptr;};
      inline string getArchiveMethod() const { DARABONBA_PTR_GET_DEFAULT(archiveMethod_, "") };
      inline Param& setArchiveMethod(string archiveMethod) { DARABONBA_PTR_SET_VALUE(archiveMethod_, archiveMethod) };


      // cronStr Field Functions 
      bool hasCronStr() const { return this->cronStr_ != nullptr;};
      void deleteCronStr() { this->cronStr_ = nullptr;};
      inline string getCronStr() const { DARABONBA_PTR_GET_DEFAULT(cronStr_, "") };
      inline Param& setCronStr(string cronStr) { DARABONBA_PTR_SET_VALUE(cronStr_, cronStr) };


      // databaseId Field Functions 
      bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
      void deleteDatabaseId() { this->databaseId_ = nullptr;};
      inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
      inline Param& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


      // logic Field Functions 
      bool hasLogic() const { return this->logic_ != nullptr;};
      void deleteLogic() { this->logic_ = nullptr;};
      inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
      inline Param& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


      // orderAfter Field Functions 
      bool hasOrderAfter() const { return this->orderAfter_ != nullptr;};
      void deleteOrderAfter() { this->orderAfter_ = nullptr;};
      inline const vector<string> & getOrderAfter() const { DARABONBA_PTR_GET_CONST(orderAfter_, vector<string>) };
      inline vector<string> getOrderAfter() { DARABONBA_PTR_GET(orderAfter_, vector<string>) };
      inline Param& setOrderAfter(const vector<string> & orderAfter) { DARABONBA_PTR_SET_VALUE(orderAfter_, orderAfter) };
      inline Param& setOrderAfter(vector<string> && orderAfter) { DARABONBA_PTR_SET_RVALUE(orderAfter_, orderAfter) };


      // runMethod Field Functions 
      bool hasRunMethod() const { return this->runMethod_ != nullptr;};
      void deleteRunMethod() { this->runMethod_ = nullptr;};
      inline string getRunMethod() const { DARABONBA_PTR_GET_DEFAULT(runMethod_, "") };
      inline Param& setRunMethod(string runMethod) { DARABONBA_PTR_SET_VALUE(runMethod_, runMethod) };


      // sourceCatalogName Field Functions 
      bool hasSourceCatalogName() const { return this->sourceCatalogName_ != nullptr;};
      void deleteSourceCatalogName() { this->sourceCatalogName_ = nullptr;};
      inline string getSourceCatalogName() const { DARABONBA_PTR_GET_DEFAULT(sourceCatalogName_, "") };
      inline Param& setSourceCatalogName(string sourceCatalogName) { DARABONBA_PTR_SET_VALUE(sourceCatalogName_, sourceCatalogName) };


      // sourceInstanceName Field Functions 
      bool hasSourceInstanceName() const { return this->sourceInstanceName_ != nullptr;};
      void deleteSourceInstanceName() { this->sourceInstanceName_ = nullptr;};
      inline string getSourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceName_, "") };
      inline Param& setSourceInstanceName(string sourceInstanceName) { DARABONBA_PTR_SET_VALUE(sourceInstanceName_, sourceInstanceName) };


      // sourceSchemaName Field Functions 
      bool hasSourceSchemaName() const { return this->sourceSchemaName_ != nullptr;};
      void deleteSourceSchemaName() { this->sourceSchemaName_ = nullptr;};
      inline string getSourceSchemaName() const { DARABONBA_PTR_GET_DEFAULT(sourceSchemaName_, "") };
      inline Param& setSourceSchemaName(string sourceSchemaName) { DARABONBA_PTR_SET_VALUE(sourceSchemaName_, sourceSchemaName) };


      // tableIncludes Field Functions 
      bool hasTableIncludes() const { return this->tableIncludes_ != nullptr;};
      void deleteTableIncludes() { this->tableIncludes_ = nullptr;};
      inline const vector<Param::TableIncludes> & getTableIncludes() const { DARABONBA_PTR_GET_CONST(tableIncludes_, vector<Param::TableIncludes>) };
      inline vector<Param::TableIncludes> getTableIncludes() { DARABONBA_PTR_GET(tableIncludes_, vector<Param::TableIncludes>) };
      inline Param& setTableIncludes(const vector<Param::TableIncludes> & tableIncludes) { DARABONBA_PTR_SET_VALUE(tableIncludes_, tableIncludes) };
      inline Param& setTableIncludes(vector<Param::TableIncludes> && tableIncludes) { DARABONBA_PTR_SET_RVALUE(tableIncludes_, tableIncludes) };


      // tableMapping Field Functions 
      bool hasTableMapping() const { return this->tableMapping_ != nullptr;};
      void deleteTableMapping() { this->tableMapping_ = nullptr;};
      inline const vector<string> & getTableMapping() const { DARABONBA_PTR_GET_CONST(tableMapping_, vector<string>) };
      inline vector<string> getTableMapping() { DARABONBA_PTR_GET(tableMapping_, vector<string>) };
      inline Param& setTableMapping(const vector<string> & tableMapping) { DARABONBA_PTR_SET_VALUE(tableMapping_, tableMapping) };
      inline Param& setTableMapping(vector<string> && tableMapping) { DARABONBA_PTR_SET_RVALUE(tableMapping_, tableMapping) };


      // targetInstanceHost Field Functions 
      bool hasTargetInstanceHost() const { return this->targetInstanceHost_ != nullptr;};
      void deleteTargetInstanceHost() { this->targetInstanceHost_ = nullptr;};
      inline string getTargetInstanceHost() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceHost_, "") };
      inline Param& setTargetInstanceHost(string targetInstanceHost) { DARABONBA_PTR_SET_VALUE(targetInstanceHost_, targetInstanceHost) };


      // variables Field Functions 
      bool hasVariables() const { return this->variables_ != nullptr;};
      void deleteVariables() { this->variables_ = nullptr;};
      inline const vector<Param::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Param::Variables>) };
      inline vector<Param::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<Param::Variables>) };
      inline Param& setVariables(const vector<Param::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
      inline Param& setVariables(vector<Param::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    protected:
      // The archiving destination to which you want to archive data. Valid values:
      // 
      // >  If you set ArchiveMethod to a value other than inner_oss, you must register the corresponding destination database with Data Management (DMS) before you create the data archiving ticket. After the database is registered with DMS, the database is displayed in the Instances Connected section of the DMS console.
      // 
      // *   **inner_oss**: dedicated storage, which is a built-in Object Storage Service (OSS) bucket.
      // *   **oss_userself**: OSS bucket of the user.
      // *   **mysql**: ApsaraDB RDS for MySQL instance.
      // *   **polardb**: PolarDB for MySQL cluster.
      // *   **adb_mysql**: AnalyticDB for MySQL V3.0 cluster.
      // *   **lindorm**: Lindorm instance.
      // 
      // This parameter is required.
      shared_ptr<string> archiveMethod_ {};
      // A crontab expression that specifies the scheduling cycle of the data archiving task. For more information, see the [Crontab expressions](https://help.aliyun.com/document_detail/206581.html) section of the "Create shadow tables for synchronization" topic. You must specify this parameter if you set RunMethod to schedule.
      shared_ptr<string> cronStr_ {};
      // The database ID. If the database is a self-managed database or a third-party cloud database, you can call the [GetDatabase](https://help.aliyun.com/document_detail/465856.html) operation to query the database ID. If the database is an Alibaba Cloud database, ignore this parameter.
      shared_ptr<string> databaseId_ {};
      // Specifies whether the database is a logical database.
      shared_ptr<bool> logic_ {};
      // The post behaviors.
      shared_ptr<vector<string>> orderAfter_ {};
      // The method that is used to run the data archiving task. Valid values:
      // 
      // *   **schedule**: The data archiving task is periodically scheduled.
      // *   **now**: The data archiving task is immediately run.
      // 
      // This parameter is required.
      shared_ptr<string> runMethod_ {};
      // The catalog of the source database. Valid values:
      // 
      // *   **def**: Set this parameter to def if the source database is of the two-layer logical schema, such as a MySQL database, a PolarDB for MySQL cluster, or an AnalyticDB for MySQL instance.
      // *   **Empty string**: Set this parameter to an empty string if the source database is a Lindorm or ApsaraDB for MongoDB instance.
      // *   **Catalog name**: Set this parameter to the catalog name of the source database if the source database is of the three-layer logical schema, such as a PostgreSQL database.
      // 
      // This parameter is required.
      shared_ptr<string> sourceCatalogName_ {};
      // The name of the source instance. If the database instance is a self-managed database or a third-party cloud database, you can call the [GetInstance](https://help.aliyun.com/document_detail/465826.html) operation to query the instance ID.
      // 
      // This parameter is required.
      shared_ptr<string> sourceInstanceName_ {};
      // The schema name of the source database. The schema name of the source database is the same as that of the destination database. If the source database is a MySQL database, this parameter specifies the name of the source database. If the source database is a PostgreSQL database, this parameter specifies the schema name of the source database.
      // 
      // This parameter is required.
      shared_ptr<string> sourceSchemaName_ {};
      // The collection of tables to be archived.
      // 
      // This parameter is required.
      shared_ptr<vector<Param::TableIncludes>> tableIncludes_ {};
      // The table names mapped to the destination database. This parameter is not required and the default value is used.
      shared_ptr<vector<string>> tableMapping_ {};
      // The host of the destination instance. If the destination instance can be accessed over an internal network or the Internet, preferentially set the value to the internal endpoint of the destination instance.
      // 
      // *   If data is archived in an OSS bucket, set the value to the name of the bucket.
      // *   If data is archived in dedicated storage space, set the value to inner_oss.
      // 
      // This parameter is required.
      shared_ptr<string> targetInstanceHost_ {};
      // The configuration of archiving variables. You can use a time variable as a filter condition for archiving data. Each variable has two attributes: name and pattern.
      shared_ptr<vector<Param::Variables>> variables_ {};
    };

    virtual bool empty() const override { return this->comment_ == nullptr
        && this->param_ == nullptr && this->parentId_ == nullptr && this->pluginType_ == nullptr && this->relatedUserList_ == nullptr && this->tid_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDataArchiveOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const CreateDataArchiveOrderRequest::Param & getParam() const { DARABONBA_PTR_GET_CONST(param_, CreateDataArchiveOrderRequest::Param) };
    inline CreateDataArchiveOrderRequest::Param getParam() { DARABONBA_PTR_GET(param_, CreateDataArchiveOrderRequest::Param) };
    inline CreateDataArchiveOrderRequest& setParam(const CreateDataArchiveOrderRequest::Param & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline CreateDataArchiveOrderRequest& setParam(CreateDataArchiveOrderRequest::Param && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline CreateDataArchiveOrderRequest& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string getPluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline CreateDataArchiveOrderRequest& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const vector<string> & getRelatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<string>) };
    inline vector<string> getRelatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<string>) };
    inline CreateDataArchiveOrderRequest& setRelatedUserList(const vector<string> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline CreateDataArchiveOrderRequest& setRelatedUserList(vector<string> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDataArchiveOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The description of the task.
    // 
    // This parameter is required.
    shared_ptr<string> comment_ {};
    // The parameters for archiving data.
    // 
    // This parameter is required.
    shared_ptr<CreateDataArchiveOrderRequest::Param> param_ {};
    // The ID of the parent ticket. A parent ticket is generated only when a child ticket is created.
    shared_ptr<int64_t> parentId_ {};
    // The type of the plug-in. Default value: DATA_ARCHIVE.
    shared_ptr<string> pluginType_ {};
    // The list of the related users.
    shared_ptr<vector<string>> relatedUserList_ {};
    // The tenant ID. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
