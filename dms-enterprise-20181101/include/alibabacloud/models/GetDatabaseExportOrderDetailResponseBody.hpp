// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEEXPORTORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEEXPORTORDERDETAILRESPONSEBODY_HPP_
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
  class GetDatabaseExportOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseExportOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseExportOrderDetail, databaseExportOrderDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseExportOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseExportOrderDetail, databaseExportOrderDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDatabaseExportOrderDetailResponseBody() = default ;
    GetDatabaseExportOrderDetailResponseBody(const GetDatabaseExportOrderDetailResponseBody &) = default ;
    GetDatabaseExportOrderDetailResponseBody(GetDatabaseExportOrderDetailResponseBody &&) = default ;
    GetDatabaseExportOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseExportOrderDetailResponseBody() = default ;
    GetDatabaseExportOrderDetailResponseBody& operator=(const GetDatabaseExportOrderDetailResponseBody &) = default ;
    GetDatabaseExportOrderDetailResponseBody& operator=(GetDatabaseExportOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DatabaseExportOrderDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatabaseExportOrderDetail& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Committer, committer_);
        DARABONBA_PTR_TO_JSON(CommitterId, committerId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(KeyInfo, keyInfo_);
        DARABONBA_PTR_TO_JSON(Log, log_);
        DARABONBA_PTR_TO_JSON(SearchName, searchName_);
        DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_TO_JSON(WorkflowStatusDesc, workflowStatusDesc_);
      };
      friend void from_json(const Darabonba::Json& j, DatabaseExportOrderDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Committer, committer_);
        DARABONBA_PTR_FROM_JSON(CommitterId, committerId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(KeyInfo, keyInfo_);
        DARABONBA_PTR_FROM_JSON(Log, log_);
        DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
        DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_FROM_JSON(WorkflowStatusDesc, workflowStatusDesc_);
      };
      DatabaseExportOrderDetail() = default ;
      DatabaseExportOrderDetail(const DatabaseExportOrderDetail &) = default ;
      DatabaseExportOrderDetail(DatabaseExportOrderDetail &&) = default ;
      DatabaseExportOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DatabaseExportOrderDetail() = default ;
      DatabaseExportOrderDetail& operator=(const DatabaseExportOrderDetail &) = default ;
      DatabaseExportOrderDetail& operator=(DatabaseExportOrderDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class KeyInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KeyInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AuditDate, auditDate_);
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(DownloadURL, downloadURL_);
        };
        friend void from_json(const Darabonba::Json& j, KeyInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AuditDate, auditDate_);
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(DownloadURL, downloadURL_);
        };
        KeyInfo() = default ;
        KeyInfo(const KeyInfo &) = default ;
        KeyInfo(KeyInfo &&) = default ;
        KeyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KeyInfo() = default ;
        KeyInfo& operator=(const KeyInfo &) = default ;
        KeyInfo& operator=(KeyInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Config : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Config& obj) { 
            DARABONBA_PTR_TO_JSON(DbName, dbName_);
            DARABONBA_PTR_TO_JSON(ExportContent, exportContent_);
            DARABONBA_PTR_TO_JSON(ExportTypes, exportTypes_);
            DARABONBA_PTR_TO_JSON(SQLExtOption, SQLExtOption_);
            DARABONBA_PTR_TO_JSON(SelectedTables, selectedTables_);
            DARABONBA_PTR_TO_JSON(TargetOption, targetOption_);
          };
          friend void from_json(const Darabonba::Json& j, Config& obj) { 
            DARABONBA_PTR_FROM_JSON(DbName, dbName_);
            DARABONBA_PTR_FROM_JSON(ExportContent, exportContent_);
            DARABONBA_PTR_FROM_JSON(ExportTypes, exportTypes_);
            DARABONBA_PTR_FROM_JSON(SQLExtOption, SQLExtOption_);
            DARABONBA_PTR_FROM_JSON(SelectedTables, selectedTables_);
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
          class SelectedTables : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SelectedTables& obj) { 
              DARABONBA_PTR_TO_JSON(SelectedTables, selectedTables_);
            };
            friend void from_json(const Darabonba::Json& j, SelectedTables& obj) { 
              DARABONBA_PTR_FROM_JSON(SelectedTables, selectedTables_);
            };
            SelectedTables() = default ;
            SelectedTables(const SelectedTables &) = default ;
            SelectedTables(SelectedTables &&) = default ;
            SelectedTables(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SelectedTables() = default ;
            SelectedTables& operator=(const SelectedTables &) = default ;
            SelectedTables& operator=(SelectedTables &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->selectedTables_ == nullptr; };
            // selectedTables Field Functions 
            bool hasSelectedTables() const { return this->selectedTables_ != nullptr;};
            void deleteSelectedTables() { this->selectedTables_ = nullptr;};
            inline const vector<string> & getSelectedTables() const { DARABONBA_PTR_GET_CONST(selectedTables_, vector<string>) };
            inline vector<string> getSelectedTables() { DARABONBA_PTR_GET(selectedTables_, vector<string>) };
            inline SelectedTables& setSelectedTables(const vector<string> & selectedTables) { DARABONBA_PTR_SET_VALUE(selectedTables_, selectedTables) };
            inline SelectedTables& setSelectedTables(vector<string> && selectedTables) { DARABONBA_PTR_SET_RVALUE(selectedTables_, selectedTables) };


          protected:
            shared_ptr<vector<string>> selectedTables_ {};
          };

          class SQLExtOption : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SQLExtOption& obj) { 
              DARABONBA_PTR_TO_JSON(SQLExtOption, SQLExtOption_);
            };
            friend void from_json(const Darabonba::Json& j, SQLExtOption& obj) { 
              DARABONBA_PTR_FROM_JSON(SQLExtOption, SQLExtOption_);
            };
            SQLExtOption() = default ;
            SQLExtOption(const SQLExtOption &) = default ;
            SQLExtOption(SQLExtOption &&) = default ;
            SQLExtOption(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SQLExtOption() = default ;
            SQLExtOption& operator=(const SQLExtOption &) = default ;
            SQLExtOption& operator=(SQLExtOption &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->SQLExtOption_ == nullptr; };
            // SQLExtOption Field Functions 
            bool hasSQLExtOption() const { return this->SQLExtOption_ != nullptr;};
            void deleteSQLExtOption() { this->SQLExtOption_ = nullptr;};
            inline const vector<string> & getSQLExtOption() const { DARABONBA_PTR_GET_CONST(SQLExtOption_, vector<string>) };
            inline vector<string> getSQLExtOption() { DARABONBA_PTR_GET(SQLExtOption_, vector<string>) };
            inline SQLExtOption& setSQLExtOption(const vector<string> & SQLExtOption) { DARABONBA_PTR_SET_VALUE(SQLExtOption_, SQLExtOption) };
            inline SQLExtOption& setSQLExtOption(vector<string> && SQLExtOption) { DARABONBA_PTR_SET_RVALUE(SQLExtOption_, SQLExtOption) };


          protected:
            shared_ptr<vector<string>> SQLExtOption_ {};
          };

          class ExportTypes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ExportTypes& obj) { 
              DARABONBA_PTR_TO_JSON(ExportTypes, exportTypes_);
            };
            friend void from_json(const Darabonba::Json& j, ExportTypes& obj) { 
              DARABONBA_PTR_FROM_JSON(ExportTypes, exportTypes_);
            };
            ExportTypes() = default ;
            ExportTypes(const ExportTypes &) = default ;
            ExportTypes(ExportTypes &&) = default ;
            ExportTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ExportTypes() = default ;
            ExportTypes& operator=(const ExportTypes &) = default ;
            ExportTypes& operator=(ExportTypes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->exportTypes_ == nullptr; };
            // exportTypes Field Functions 
            bool hasExportTypes() const { return this->exportTypes_ != nullptr;};
            void deleteExportTypes() { this->exportTypes_ = nullptr;};
            inline const vector<string> & getExportTypes() const { DARABONBA_PTR_GET_CONST(exportTypes_, vector<string>) };
            inline vector<string> getExportTypes() { DARABONBA_PTR_GET(exportTypes_, vector<string>) };
            inline ExportTypes& setExportTypes(const vector<string> & exportTypes) { DARABONBA_PTR_SET_VALUE(exportTypes_, exportTypes) };
            inline ExportTypes& setExportTypes(vector<string> && exportTypes) { DARABONBA_PTR_SET_RVALUE(exportTypes_, exportTypes) };


          protected:
            shared_ptr<vector<string>> exportTypes_ {};
          };

          virtual bool empty() const override { return this->dbName_ == nullptr
        && this->exportContent_ == nullptr && this->exportTypes_ == nullptr && this->SQLExtOption_ == nullptr && this->selectedTables_ == nullptr && this->targetOption_ == nullptr; };
          // dbName Field Functions 
          bool hasDbName() const { return this->dbName_ != nullptr;};
          void deleteDbName() { this->dbName_ = nullptr;};
          inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
          inline Config& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


          // exportContent Field Functions 
          bool hasExportContent() const { return this->exportContent_ != nullptr;};
          void deleteExportContent() { this->exportContent_ = nullptr;};
          inline string getExportContent() const { DARABONBA_PTR_GET_DEFAULT(exportContent_, "") };
          inline Config& setExportContent(string exportContent) { DARABONBA_PTR_SET_VALUE(exportContent_, exportContent) };


          // exportTypes Field Functions 
          bool hasExportTypes() const { return this->exportTypes_ != nullptr;};
          void deleteExportTypes() { this->exportTypes_ = nullptr;};
          inline const Config::ExportTypes & getExportTypes() const { DARABONBA_PTR_GET_CONST(exportTypes_, Config::ExportTypes) };
          inline Config::ExportTypes getExportTypes() { DARABONBA_PTR_GET(exportTypes_, Config::ExportTypes) };
          inline Config& setExportTypes(const Config::ExportTypes & exportTypes) { DARABONBA_PTR_SET_VALUE(exportTypes_, exportTypes) };
          inline Config& setExportTypes(Config::ExportTypes && exportTypes) { DARABONBA_PTR_SET_RVALUE(exportTypes_, exportTypes) };


          // SQLExtOption Field Functions 
          bool hasSQLExtOption() const { return this->SQLExtOption_ != nullptr;};
          void deleteSQLExtOption() { this->SQLExtOption_ = nullptr;};
          inline const Config::SQLExtOption & getSQLExtOption() const { DARABONBA_PTR_GET_CONST(SQLExtOption_, Config::SQLExtOption) };
          inline Config::SQLExtOption getSQLExtOption() { DARABONBA_PTR_GET(SQLExtOption_, Config::SQLExtOption) };
          inline Config& setSQLExtOption(const Config::SQLExtOption & sQLExtOption) { DARABONBA_PTR_SET_VALUE(SQLExtOption_, sQLExtOption) };
          inline Config& setSQLExtOption(Config::SQLExtOption && sQLExtOption) { DARABONBA_PTR_SET_RVALUE(SQLExtOption_, sQLExtOption) };


          // selectedTables Field Functions 
          bool hasSelectedTables() const { return this->selectedTables_ != nullptr;};
          void deleteSelectedTables() { this->selectedTables_ = nullptr;};
          inline const Config::SelectedTables & getSelectedTables() const { DARABONBA_PTR_GET_CONST(selectedTables_, Config::SelectedTables) };
          inline Config::SelectedTables getSelectedTables() { DARABONBA_PTR_GET(selectedTables_, Config::SelectedTables) };
          inline Config& setSelectedTables(const Config::SelectedTables & selectedTables) { DARABONBA_PTR_SET_VALUE(selectedTables_, selectedTables) };
          inline Config& setSelectedTables(Config::SelectedTables && selectedTables) { DARABONBA_PTR_SET_RVALUE(selectedTables_, selectedTables) };


          // targetOption Field Functions 
          bool hasTargetOption() const { return this->targetOption_ != nullptr;};
          void deleteTargetOption() { this->targetOption_ = nullptr;};
          inline string getTargetOption() const { DARABONBA_PTR_GET_DEFAULT(targetOption_, "") };
          inline Config& setTargetOption(string targetOption) { DARABONBA_PTR_SET_VALUE(targetOption_, targetOption) };


        protected:
          // The database name.
          shared_ptr<string> dbName_ {};
          // The type of data that was exported. Valid values:
          // 
          // *   **DATA**: The data of the database was exported.
          // *   **STRUCT**: The schema of the database was exported.
          // *   **DATA_STRUCT**: The data and schema of the database were exported.
          shared_ptr<string> exportContent_ {};
          // The type of schema that was exported.
          shared_ptr<Config::ExportTypes> exportTypes_ {};
          // The extension options of the SQL script.
          shared_ptr<Config::SQLExtOption> SQLExtOption_ {};
          // The tables that were exported from the database.
          shared_ptr<Config::SelectedTables> selectedTables_ {};
          // The format in which the database was exported. Valid values:
          // 
          // *   **SQL**
          // *   **CSV**
          // *   **XLSX**
          shared_ptr<string> targetOption_ {};
        };

        virtual bool empty() const override { return this->auditDate_ == nullptr
        && this->config_ == nullptr && this->dbId_ == nullptr && this->downloadURL_ == nullptr; };
        // auditDate Field Functions 
        bool hasAuditDate() const { return this->auditDate_ != nullptr;};
        void deleteAuditDate() { this->auditDate_ = nullptr;};
        inline string getAuditDate() const { DARABONBA_PTR_GET_DEFAULT(auditDate_, "") };
        inline KeyInfo& setAuditDate(string auditDate) { DARABONBA_PTR_SET_VALUE(auditDate_, auditDate) };


        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline const KeyInfo::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, KeyInfo::Config) };
        inline KeyInfo::Config getConfig() { DARABONBA_PTR_GET(config_, KeyInfo::Config) };
        inline KeyInfo& setConfig(const KeyInfo::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
        inline KeyInfo& setConfig(KeyInfo::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
        inline KeyInfo& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // downloadURL Field Functions 
        bool hasDownloadURL() const { return this->downloadURL_ != nullptr;};
        void deleteDownloadURL() { this->downloadURL_ = nullptr;};
        inline string getDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(downloadURL_, "") };
        inline KeyInfo& setDownloadURL(string downloadURL) { DARABONBA_PTR_SET_VALUE(downloadURL_, downloadURL) };


      protected:
        // The time when the ticket was submitted.
        shared_ptr<string> auditDate_ {};
        // The configuration information about the ticket.
        shared_ptr<KeyInfo::Config> config_ {};
        // The database ID.
        shared_ptr<int64_t> dbId_ {};
        // The URL that is used to download the export result.
        shared_ptr<string> downloadURL_ {};
      };

      virtual bool empty() const override { return this->comment_ == nullptr
        && this->committer_ == nullptr && this->committerId_ == nullptr && this->id_ == nullptr && this->keyInfo_ == nullptr && this->log_ == nullptr
        && this->searchName_ == nullptr && this->statusDesc_ == nullptr && this->workflowStatusDesc_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline DatabaseExportOrderDetail& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // committer Field Functions 
      bool hasCommitter() const { return this->committer_ != nullptr;};
      void deleteCommitter() { this->committer_ = nullptr;};
      inline string getCommitter() const { DARABONBA_PTR_GET_DEFAULT(committer_, "") };
      inline DatabaseExportOrderDetail& setCommitter(string committer) { DARABONBA_PTR_SET_VALUE(committer_, committer) };


      // committerId Field Functions 
      bool hasCommitterId() const { return this->committerId_ != nullptr;};
      void deleteCommitterId() { this->committerId_ = nullptr;};
      inline string getCommitterId() const { DARABONBA_PTR_GET_DEFAULT(committerId_, "") };
      inline DatabaseExportOrderDetail& setCommitterId(string committerId) { DARABONBA_PTR_SET_VALUE(committerId_, committerId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DatabaseExportOrderDetail& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // keyInfo Field Functions 
      bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
      void deleteKeyInfo() { this->keyInfo_ = nullptr;};
      inline const DatabaseExportOrderDetail::KeyInfo & getKeyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, DatabaseExportOrderDetail::KeyInfo) };
      inline DatabaseExportOrderDetail::KeyInfo getKeyInfo() { DARABONBA_PTR_GET(keyInfo_, DatabaseExportOrderDetail::KeyInfo) };
      inline DatabaseExportOrderDetail& setKeyInfo(const DatabaseExportOrderDetail::KeyInfo & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
      inline DatabaseExportOrderDetail& setKeyInfo(DatabaseExportOrderDetail::KeyInfo && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


      // log Field Functions 
      bool hasLog() const { return this->log_ != nullptr;};
      void deleteLog() { this->log_ = nullptr;};
      inline string getLog() const { DARABONBA_PTR_GET_DEFAULT(log_, "") };
      inline DatabaseExportOrderDetail& setLog(string log) { DARABONBA_PTR_SET_VALUE(log_, log) };


      // searchName Field Functions 
      bool hasSearchName() const { return this->searchName_ != nullptr;};
      void deleteSearchName() { this->searchName_ = nullptr;};
      inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
      inline DatabaseExportOrderDetail& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline DatabaseExportOrderDetail& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      // workflowStatusDesc Field Functions 
      bool hasWorkflowStatusDesc() const { return this->workflowStatusDesc_ != nullptr;};
      void deleteWorkflowStatusDesc() { this->workflowStatusDesc_ = nullptr;};
      inline string getWorkflowStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(workflowStatusDesc_, "") };
      inline DatabaseExportOrderDetail& setWorkflowStatusDesc(string workflowStatusDesc) { DARABONBA_PTR_SET_VALUE(workflowStatusDesc_, workflowStatusDesc) };


    protected:
      // The business background information of the database export ticket.
      shared_ptr<string> comment_ {};
      // The user who submitted the ticket.
      shared_ptr<string> committer_ {};
      // The ID of the user who submitted the ticket. This ID is a user ID and is not the ID of an Alibaba Cloud account.
      shared_ptr<string> committerId_ {};
      // The ticket ID.
      shared_ptr<int64_t> id_ {};
      // The key information about the ticket.
      shared_ptr<DatabaseExportOrderDetail::KeyInfo> keyInfo_ {};
      // The execution logs.
      shared_ptr<string> log_ {};
      // The name that is used to search for the database.
      shared_ptr<string> searchName_ {};
      // The status description of the ticket.
      shared_ptr<string> statusDesc_ {};
      // The status description of the workflow.
      shared_ptr<string> workflowStatusDesc_ {};
    };

    virtual bool empty() const override { return this->databaseExportOrderDetail_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // databaseExportOrderDetail Field Functions 
    bool hasDatabaseExportOrderDetail() const { return this->databaseExportOrderDetail_ != nullptr;};
    void deleteDatabaseExportOrderDetail() { this->databaseExportOrderDetail_ = nullptr;};
    inline const GetDatabaseExportOrderDetailResponseBody::DatabaseExportOrderDetail & getDatabaseExportOrderDetail() const { DARABONBA_PTR_GET_CONST(databaseExportOrderDetail_, GetDatabaseExportOrderDetailResponseBody::DatabaseExportOrderDetail) };
    inline GetDatabaseExportOrderDetailResponseBody::DatabaseExportOrderDetail getDatabaseExportOrderDetail() { DARABONBA_PTR_GET(databaseExportOrderDetail_, GetDatabaseExportOrderDetailResponseBody::DatabaseExportOrderDetail) };
    inline GetDatabaseExportOrderDetailResponseBody& setDatabaseExportOrderDetail(const GetDatabaseExportOrderDetailResponseBody::DatabaseExportOrderDetail & databaseExportOrderDetail) { DARABONBA_PTR_SET_VALUE(databaseExportOrderDetail_, databaseExportOrderDetail) };
    inline GetDatabaseExportOrderDetailResponseBody& setDatabaseExportOrderDetail(GetDatabaseExportOrderDetailResponseBody::DatabaseExportOrderDetail && databaseExportOrderDetail) { DARABONBA_PTR_SET_RVALUE(databaseExportOrderDetail_, databaseExportOrderDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDatabaseExportOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDatabaseExportOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatabaseExportOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDatabaseExportOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the database export ticket.
    shared_ptr<GetDatabaseExportOrderDetailResponseBody::DatabaseExportOrderDetail> databaseExportOrderDetail_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
