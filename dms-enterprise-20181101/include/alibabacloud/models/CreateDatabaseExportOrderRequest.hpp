// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATABASEEXPORTORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATABASEEXPORTORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDatabaseExportOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatabaseExportOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(PluginParam, pluginParam_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatabaseExportOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(PluginParam, pluginParam_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateDatabaseExportOrderRequest() = default ;
    CreateDatabaseExportOrderRequest(const CreateDatabaseExportOrderRequest &) = default ;
    CreateDatabaseExportOrderRequest(CreateDatabaseExportOrderRequest &&) = default ;
    CreateDatabaseExportOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatabaseExportOrderRequest() = default ;
    CreateDatabaseExportOrderRequest& operator=(const CreateDatabaseExportOrderRequest &) = default ;
    CreateDatabaseExportOrderRequest& operator=(CreateDatabaseExportOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PluginParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PluginParam& obj) { 
        DARABONBA_PTR_TO_JSON(Classify, classify_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Logic, logic_);
        DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      };
      friend void from_json(const Darabonba::Json& j, PluginParam& obj) { 
        DARABONBA_PTR_FROM_JSON(Classify, classify_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Logic, logic_);
        DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
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
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(DataOption, dataOption_);
          DARABONBA_PTR_TO_JSON(ExportContent, exportContent_);
          DARABONBA_PTR_TO_JSON(ExportTypes, exportTypes_);
          DARABONBA_PTR_TO_JSON(SQLExtOption, SQLExtOption_);
          DARABONBA_PTR_TO_JSON(SelectedTables, selectedTables_);
          DARABONBA_PTR_TO_JSON(Tables, tables_);
          DARABONBA_PTR_TO_JSON(TargetOption, targetOption_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(DataOption, dataOption_);
          DARABONBA_PTR_FROM_JSON(ExportContent, exportContent_);
          DARABONBA_PTR_FROM_JSON(ExportTypes, exportTypes_);
          DARABONBA_PTR_FROM_JSON(SQLExtOption, SQLExtOption_);
          DARABONBA_PTR_FROM_JSON(SelectedTables, selectedTables_);
          DARABONBA_PTR_FROM_JSON(Tables, tables_);
          DARABONBA_PTR_FROM_JSON(TargetOption, targetOption_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataOption_ == nullptr
        && this->exportContent_ == nullptr && this->exportTypes_ == nullptr && this->SQLExtOption_ == nullptr && this->selectedTables_ == nullptr && this->tables_ == nullptr
        && this->targetOption_ == nullptr; };
        // dataOption Field Functions 
        bool hasDataOption() const { return this->dataOption_ != nullptr;};
        void deleteDataOption() { this->dataOption_ = nullptr;};
        inline const vector<string> & getDataOption() const { DARABONBA_PTR_GET_CONST(dataOption_, vector<string>) };
        inline vector<string> getDataOption() { DARABONBA_PTR_GET(dataOption_, vector<string>) };
        inline Config& setDataOption(const vector<string> & dataOption) { DARABONBA_PTR_SET_VALUE(dataOption_, dataOption) };
        inline Config& setDataOption(vector<string> && dataOption) { DARABONBA_PTR_SET_RVALUE(dataOption_, dataOption) };


        // exportContent Field Functions 
        bool hasExportContent() const { return this->exportContent_ != nullptr;};
        void deleteExportContent() { this->exportContent_ = nullptr;};
        inline string getExportContent() const { DARABONBA_PTR_GET_DEFAULT(exportContent_, "") };
        inline Config& setExportContent(string exportContent) { DARABONBA_PTR_SET_VALUE(exportContent_, exportContent) };


        // exportTypes Field Functions 
        bool hasExportTypes() const { return this->exportTypes_ != nullptr;};
        void deleteExportTypes() { this->exportTypes_ = nullptr;};
        inline const vector<string> & getExportTypes() const { DARABONBA_PTR_GET_CONST(exportTypes_, vector<string>) };
        inline vector<string> getExportTypes() { DARABONBA_PTR_GET(exportTypes_, vector<string>) };
        inline Config& setExportTypes(const vector<string> & exportTypes) { DARABONBA_PTR_SET_VALUE(exportTypes_, exportTypes) };
        inline Config& setExportTypes(vector<string> && exportTypes) { DARABONBA_PTR_SET_RVALUE(exportTypes_, exportTypes) };


        // SQLExtOption Field Functions 
        bool hasSQLExtOption() const { return this->SQLExtOption_ != nullptr;};
        void deleteSQLExtOption() { this->SQLExtOption_ = nullptr;};
        inline const vector<string> & getSQLExtOption() const { DARABONBA_PTR_GET_CONST(SQLExtOption_, vector<string>) };
        inline vector<string> getSQLExtOption() { DARABONBA_PTR_GET(SQLExtOption_, vector<string>) };
        inline Config& setSQLExtOption(const vector<string> & SQLExtOption) { DARABONBA_PTR_SET_VALUE(SQLExtOption_, SQLExtOption) };
        inline Config& setSQLExtOption(vector<string> && SQLExtOption) { DARABONBA_PTR_SET_RVALUE(SQLExtOption_, SQLExtOption) };


        // selectedTables Field Functions 
        bool hasSelectedTables() const { return this->selectedTables_ != nullptr;};
        void deleteSelectedTables() { this->selectedTables_ = nullptr;};
        inline const vector<string> & getSelectedTables() const { DARABONBA_PTR_GET_CONST(selectedTables_, vector<string>) };
        inline vector<string> getSelectedTables() { DARABONBA_PTR_GET(selectedTables_, vector<string>) };
        inline Config& setSelectedTables(const vector<string> & selectedTables) { DARABONBA_PTR_SET_VALUE(selectedTables_, selectedTables) };
        inline Config& setSelectedTables(vector<string> && selectedTables) { DARABONBA_PTR_SET_RVALUE(selectedTables_, selectedTables) };


        // tables Field Functions 
        bool hasTables() const { return this->tables_ != nullptr;};
        void deleteTables() { this->tables_ = nullptr;};
        inline const map<string, string> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, map<string, string>) };
        inline map<string, string> getTables() { DARABONBA_PTR_GET(tables_, map<string, string>) };
        inline Config& setTables(const map<string, string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
        inline Config& setTables(map<string, string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


        // targetOption Field Functions 
        bool hasTargetOption() const { return this->targetOption_ != nullptr;};
        void deleteTargetOption() { this->targetOption_ = nullptr;};
        inline string getTargetOption() const { DARABONBA_PTR_GET_DEFAULT(targetOption_, "") };
        inline Config& setTargetOption(string targetOption) { DARABONBA_PTR_SET_VALUE(targetOption_, targetOption) };


      protected:
        // The export options for big data. The options are used to filter the big data to be exported. You can leave this parameter empty.
        // 
        // This parameter is required.
        shared_ptr<vector<string>> dataOption_ {};
        // The type of data that you want to export. Valid values:
        // 
        // *   **DATA**: The data of the database is exported.
        // *   **STRUCT**: The schema of the database is exported.
        // *   **DATA_STRUCT**: The data and schema of the database are exported.
        // 
        // This parameter is required.
        shared_ptr<string> exportContent_ {};
        // The types of schemas that you want to export.
        shared_ptr<vector<string>> exportTypes_ {};
        // The extension options of the SQL script. You can leave this parameter empty.
        // 
        // This parameter is required.
        shared_ptr<vector<string>> SQLExtOption_ {};
        // The tables that you want to export.
        shared_ptr<vector<string>> selectedTables_ {};
        // The conditions used to filter the tables to be exported.
        shared_ptr<map<string, string>> tables_ {};
        // The format in which the database is exported. Valid values:
        // 
        // *   **SQL**
        // *   **CSV**
        // *   **XLSX**
        // 
        // This parameter is required.
        shared_ptr<string> targetOption_ {};
      };

      virtual bool empty() const override { return this->classify_ == nullptr
        && this->config_ == nullptr && this->dbId_ == nullptr && this->instanceId_ == nullptr && this->logic_ == nullptr && this->searchName_ == nullptr; };
      // classify Field Functions 
      bool hasClassify() const { return this->classify_ != nullptr;};
      void deleteClassify() { this->classify_ = nullptr;};
      inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
      inline PluginParam& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const PluginParam::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, PluginParam::Config) };
      inline PluginParam::Config getConfig() { DARABONBA_PTR_GET(config_, PluginParam::Config) };
      inline PluginParam& setConfig(const PluginParam::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline PluginParam& setConfig(PluginParam::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
      inline PluginParam& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
      inline PluginParam& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // logic Field Functions 
      bool hasLogic() const { return this->logic_ != nullptr;};
      void deleteLogic() { this->logic_ = nullptr;};
      inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
      inline PluginParam& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


      // searchName Field Functions 
      bool hasSearchName() const { return this->searchName_ != nullptr;};
      void deleteSearchName() { this->searchName_ = nullptr;};
      inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
      inline PluginParam& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    protected:
      // The reason for the database export.
      // 
      // This parameter is required.
      shared_ptr<string> classify_ {};
      // The configurations for database export.
      // 
      // This parameter is required.
      shared_ptr<PluginParam::Config> config_ {};
      // The database ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> dbId_ {};
      // The instance ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> instanceId_ {};
      // Specifies whether the database is a logical database. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // This parameter is required.
      shared_ptr<bool> logic_ {};
      // The name that is used to search for the database.
      // 
      // This parameter is required.
      shared_ptr<string> searchName_ {};
    };

    virtual bool empty() const override { return this->attachmentKey_ == nullptr
        && this->comment_ == nullptr && this->parentId_ == nullptr && this->pluginParam_ == nullptr && this->relatedUserList_ == nullptr && this->tid_ == nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string getAttachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline CreateDatabaseExportOrderRequest& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDatabaseExportOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline CreateDatabaseExportOrderRequest& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // pluginParam Field Functions 
    bool hasPluginParam() const { return this->pluginParam_ != nullptr;};
    void deletePluginParam() { this->pluginParam_ = nullptr;};
    inline const CreateDatabaseExportOrderRequest::PluginParam & getPluginParam() const { DARABONBA_PTR_GET_CONST(pluginParam_, CreateDatabaseExportOrderRequest::PluginParam) };
    inline CreateDatabaseExportOrderRequest::PluginParam getPluginParam() { DARABONBA_PTR_GET(pluginParam_, CreateDatabaseExportOrderRequest::PluginParam) };
    inline CreateDatabaseExportOrderRequest& setPluginParam(const CreateDatabaseExportOrderRequest::PluginParam & pluginParam) { DARABONBA_PTR_SET_VALUE(pluginParam_, pluginParam) };
    inline CreateDatabaseExportOrderRequest& setPluginParam(CreateDatabaseExportOrderRequest::PluginParam && pluginParam) { DARABONBA_PTR_SET_RVALUE(pluginParam_, pluginParam) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const vector<int64_t> & getRelatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<int64_t>) };
    inline vector<int64_t> getRelatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<int64_t>) };
    inline CreateDatabaseExportOrderRequest& setRelatedUserList(const vector<int64_t> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline CreateDatabaseExportOrderRequest& setRelatedUserList(vector<int64_t> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDatabaseExportOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The key of the attachment that provides more instructions for the ticket. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to obtain the attachment key.
    shared_ptr<string> attachmentKey_ {};
    // The purpose or objective of the ticket. This parameter helps reduce unnecessary communication.
    // 
    // This parameter is required.
    shared_ptr<string> comment_ {};
    // The ID of the parent ticket.
    shared_ptr<int64_t> parentId_ {};
    // The parameters of the ticket.
    // 
    // This parameter is required.
    shared_ptr<CreateDatabaseExportOrderRequest::PluginParam> pluginParam_ {};
    // The stakeholders involved in this operation.
    shared_ptr<vector<int64_t>> relatedUserList_ {};
    // The tenant ID.
    // 
    // > To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the DMS console. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
