// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAIMPORTORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAIMPORTORDERREQUEST_HPP_
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
  class CreateDataImportOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataImportOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataImportOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateDataImportOrderRequest() = default ;
    CreateDataImportOrderRequest(const CreateDataImportOrderRequest &) = default ;
    CreateDataImportOrderRequest(CreateDataImportOrderRequest &&) = default ;
    CreateDataImportOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataImportOrderRequest() = default ;
    CreateDataImportOrderRequest& operator=(const CreateDataImportOrderRequest &) = default ;
    CreateDataImportOrderRequest& operator=(CreateDataImportOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Param : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Param& obj) { 
        DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
        DARABONBA_PTR_TO_JSON(Classify, classify_);
        DARABONBA_PTR_TO_JSON(CsvFirstRowIsColumnDef, csvFirstRowIsColumnDef_);
        DARABONBA_PTR_TO_JSON(DbItemList, dbItemList_);
        DARABONBA_PTR_TO_JSON(ExecMode, execMode_);
        DARABONBA_PTR_TO_JSON(FileEncoding, fileEncoding_);
        DARABONBA_PTR_TO_JSON(FileType, fileType_);
        DARABONBA_PTR_TO_JSON(IgnoreError, ignoreError_);
        DARABONBA_PTR_TO_JSON(ImportMode, importMode_);
        DARABONBA_PTR_TO_JSON(InsertType, insertType_);
        DARABONBA_PTR_TO_JSON(RollbackAttachmentName, rollbackAttachmentName_);
        DARABONBA_PTR_TO_JSON(RollbackSQL, rollbackSQL_);
        DARABONBA_PTR_TO_JSON(RollbackSqlType, rollbackSqlType_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, Param& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
        DARABONBA_PTR_FROM_JSON(Classify, classify_);
        DARABONBA_PTR_FROM_JSON(CsvFirstRowIsColumnDef, csvFirstRowIsColumnDef_);
        DARABONBA_PTR_FROM_JSON(DbItemList, dbItemList_);
        DARABONBA_PTR_FROM_JSON(ExecMode, execMode_);
        DARABONBA_PTR_FROM_JSON(FileEncoding, fileEncoding_);
        DARABONBA_PTR_FROM_JSON(FileType, fileType_);
        DARABONBA_PTR_FROM_JSON(IgnoreError, ignoreError_);
        DARABONBA_PTR_FROM_JSON(ImportMode, importMode_);
        DARABONBA_PTR_FROM_JSON(InsertType, insertType_);
        DARABONBA_PTR_FROM_JSON(RollbackAttachmentName, rollbackAttachmentName_);
        DARABONBA_PTR_FROM_JSON(RollbackSQL, rollbackSQL_);
        DARABONBA_PTR_FROM_JSON(RollbackSqlType, rollbackSqlType_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
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
      class DbItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DbItemList& obj) { 
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
        };
        friend void from_json(const Darabonba::Json& j, DbItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
        };
        DbItemList() = default ;
        DbItemList(const DbItemList &) = default ;
        DbItemList(DbItemList &&) = default ;
        DbItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DbItemList() = default ;
        DbItemList& operator=(const DbItemList &) = default ;
        DbItemList& operator=(DbItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dbId_ == nullptr
        && this->logic_ == nullptr; };
        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
        inline DbItemList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline DbItemList& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


      protected:
        // The ID of the database. The database can be a physical database or a logical database.
        // 
        // *   To obtain the ID of a physical database, call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
        // *   To obtain the ID of a logical database, call the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
        // 
        // This parameter is required.
        shared_ptr<int64_t> dbId_ {};
        // Specifies whether the database is a logical database. Valid values:
        // 
        // *   **true**: The database is a logical database.
        // *   **false**: The database is a physical database.
        // 
        // >  If you set this parameter to **true**, the database that you specify must be a logical database.
        // 
        // This parameter is required.
        shared_ptr<bool> logic_ {};
      };

      virtual bool empty() const override { return this->attachmentName_ == nullptr
        && this->classify_ == nullptr && this->csvFirstRowIsColumnDef_ == nullptr && this->dbItemList_ == nullptr && this->execMode_ == nullptr && this->fileEncoding_ == nullptr
        && this->fileType_ == nullptr && this->ignoreError_ == nullptr && this->importMode_ == nullptr && this->insertType_ == nullptr && this->rollbackAttachmentName_ == nullptr
        && this->rollbackSQL_ == nullptr && this->rollbackSqlType_ == nullptr && this->tableName_ == nullptr; };
      // attachmentName Field Functions 
      bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
      void deleteAttachmentName() { this->attachmentName_ = nullptr;};
      inline string getAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
      inline Param& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


      // classify Field Functions 
      bool hasClassify() const { return this->classify_ != nullptr;};
      void deleteClassify() { this->classify_ = nullptr;};
      inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
      inline Param& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


      // csvFirstRowIsColumnDef Field Functions 
      bool hasCsvFirstRowIsColumnDef() const { return this->csvFirstRowIsColumnDef_ != nullptr;};
      void deleteCsvFirstRowIsColumnDef() { this->csvFirstRowIsColumnDef_ = nullptr;};
      inline bool getCsvFirstRowIsColumnDef() const { DARABONBA_PTR_GET_DEFAULT(csvFirstRowIsColumnDef_, false) };
      inline Param& setCsvFirstRowIsColumnDef(bool csvFirstRowIsColumnDef) { DARABONBA_PTR_SET_VALUE(csvFirstRowIsColumnDef_, csvFirstRowIsColumnDef) };


      // dbItemList Field Functions 
      bool hasDbItemList() const { return this->dbItemList_ != nullptr;};
      void deleteDbItemList() { this->dbItemList_ = nullptr;};
      inline const vector<Param::DbItemList> & getDbItemList() const { DARABONBA_PTR_GET_CONST(dbItemList_, vector<Param::DbItemList>) };
      inline vector<Param::DbItemList> getDbItemList() { DARABONBA_PTR_GET(dbItemList_, vector<Param::DbItemList>) };
      inline Param& setDbItemList(const vector<Param::DbItemList> & dbItemList) { DARABONBA_PTR_SET_VALUE(dbItemList_, dbItemList) };
      inline Param& setDbItemList(vector<Param::DbItemList> && dbItemList) { DARABONBA_PTR_SET_RVALUE(dbItemList_, dbItemList) };


      // execMode Field Functions 
      bool hasExecMode() const { return this->execMode_ != nullptr;};
      void deleteExecMode() { this->execMode_ = nullptr;};
      inline string getExecMode() const { DARABONBA_PTR_GET_DEFAULT(execMode_, "") };
      inline Param& setExecMode(string execMode) { DARABONBA_PTR_SET_VALUE(execMode_, execMode) };


      // fileEncoding Field Functions 
      bool hasFileEncoding() const { return this->fileEncoding_ != nullptr;};
      void deleteFileEncoding() { this->fileEncoding_ = nullptr;};
      inline string getFileEncoding() const { DARABONBA_PTR_GET_DEFAULT(fileEncoding_, "") };
      inline Param& setFileEncoding(string fileEncoding) { DARABONBA_PTR_SET_VALUE(fileEncoding_, fileEncoding) };


      // fileType Field Functions 
      bool hasFileType() const { return this->fileType_ != nullptr;};
      void deleteFileType() { this->fileType_ = nullptr;};
      inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
      inline Param& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      // ignoreError Field Functions 
      bool hasIgnoreError() const { return this->ignoreError_ != nullptr;};
      void deleteIgnoreError() { this->ignoreError_ = nullptr;};
      inline bool getIgnoreError() const { DARABONBA_PTR_GET_DEFAULT(ignoreError_, false) };
      inline Param& setIgnoreError(bool ignoreError) { DARABONBA_PTR_SET_VALUE(ignoreError_, ignoreError) };


      // importMode Field Functions 
      bool hasImportMode() const { return this->importMode_ != nullptr;};
      void deleteImportMode() { this->importMode_ = nullptr;};
      inline string getImportMode() const { DARABONBA_PTR_GET_DEFAULT(importMode_, "") };
      inline Param& setImportMode(string importMode) { DARABONBA_PTR_SET_VALUE(importMode_, importMode) };


      // insertType Field Functions 
      bool hasInsertType() const { return this->insertType_ != nullptr;};
      void deleteInsertType() { this->insertType_ = nullptr;};
      inline string getInsertType() const { DARABONBA_PTR_GET_DEFAULT(insertType_, "") };
      inline Param& setInsertType(string insertType) { DARABONBA_PTR_SET_VALUE(insertType_, insertType) };


      // rollbackAttachmentName Field Functions 
      bool hasRollbackAttachmentName() const { return this->rollbackAttachmentName_ != nullptr;};
      void deleteRollbackAttachmentName() { this->rollbackAttachmentName_ = nullptr;};
      inline string getRollbackAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(rollbackAttachmentName_, "") };
      inline Param& setRollbackAttachmentName(string rollbackAttachmentName) { DARABONBA_PTR_SET_VALUE(rollbackAttachmentName_, rollbackAttachmentName) };


      // rollbackSQL Field Functions 
      bool hasRollbackSQL() const { return this->rollbackSQL_ != nullptr;};
      void deleteRollbackSQL() { this->rollbackSQL_ = nullptr;};
      inline string getRollbackSQL() const { DARABONBA_PTR_GET_DEFAULT(rollbackSQL_, "") };
      inline Param& setRollbackSQL(string rollbackSQL) { DARABONBA_PTR_SET_VALUE(rollbackSQL_, rollbackSQL) };


      // rollbackSqlType Field Functions 
      bool hasRollbackSqlType() const { return this->rollbackSqlType_ != nullptr;};
      void deleteRollbackSqlType() { this->rollbackSqlType_ = nullptr;};
      inline string getRollbackSqlType() const { DARABONBA_PTR_GET_DEFAULT(rollbackSqlType_, "") };
      inline Param& setRollbackSqlType(string rollbackSqlType) { DARABONBA_PTR_SET_VALUE(rollbackSqlType_, rollbackSqlType) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Param& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      // The key of the attachment that contains the SQL statements used to import data. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to the attachment key from the value of the AttachmentKey parameter.
      // 
      // This parameter is required.
      shared_ptr<string> attachmentName_ {};
      // The reason for the data import.
      shared_ptr<string> classify_ {};
      // The type of the CSV file. Valid values:
      // 
      // *   **true**: The first row in the CSV file contains field names.
      // *   **false**: The first row in the CSV file contains data.
      // 
      // >  This parameter is required if you set the **FileType** parameter to **CSV**.
      shared_ptr<bool> csvFirstRowIsColumnDef_ {};
      // The database to which you want to import data. You can specify only one database.
      // 
      // This parameter is required.
      shared_ptr<vector<Param::DbItemList>> dbItemList_ {};
      shared_ptr<string> execMode_ {};
      // The encoding algorithm to be used by the destination database. Valid values:
      // 
      // *   **AUTO**: automatic identification
      // *   **UTF-8**: UTF-8 encoding
      // *   **GBK**: GBK encoding
      // *   **ISO-8859-1**: ISO-8859-1 encoding
      shared_ptr<string> fileEncoding_ {};
      // The format of the file for the data import. Valid values:
      // 
      // *   **SQL**: an SQL file
      // *   **CSV**: a CSV file
      // 
      // This parameter is required.
      shared_ptr<string> fileType_ {};
      // Specifies whether to skip an error that occurs. Valid values:
      // 
      // *   **true**: skips the error and continues to execute SQL statements.
      // *   **false**: stops executing SQL statements.
      shared_ptr<bool> ignoreError_ {};
      // The import mode. Valid values:
      // 
      // *   **FAST_MODE**: In the Execute step, the uploaded file is read and SQL statements are executed to import data to the specified destination database. Compared with the security mode, this mode can be used to import data in a less secure but more efficient manner.
      // *   **SAFE_MODE**: In the Precheck step, the uploaded file is parsed, and SQL statements or CSV file data is cached. In the Execute step, the cached SQL statements are read and executed to import data, or the cached CSV file data is read and imported to the specified destination database. This mode can be used to import data in a more secure but less efficient manner.
      shared_ptr<string> importMode_ {};
      // The mode in which the data in the CSV format is to be written to the destination table. Valid values:
      // 
      // *   **INSERT**: The database checks the primary key when data is written. If a duplicate primary key value exists, an error message is returned.
      // *   **INSERT_IGNORE**: If the imported data contains data records that are the same as those in the destination table, the new data records are ignored.
      // *   **REPLACE_INTO**: If the imported data contains a row that has the same value for the primary key or unique index as one row in the destination table, the database deletes the existing row and inserts the new row into the destination table.
      // 
      // >  This parameter is required if you set the **FileType** parameter to **CSV**.
      shared_ptr<string> insertType_ {};
      // The key of the attachment that contains the SQL statements used to roll back the data import. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to obtain the attachment key from the value of the AttachmentKey parameter.
      // 
      // >  This parameter is required if you set the **RollbackSqlType** parameter to **ATTACHMENT**.
      shared_ptr<string> rollbackAttachmentName_ {};
      // The SQL statements used to roll back the data import.
      // 
      // >  This parameter is required if you set the **RollbackSqlType** parameter to **TEXT**.
      shared_ptr<string> rollbackSQL_ {};
      // The format of the SQL statements used to roll back the data import. Valid values:
      // 
      // *   **TEXT**: text
      // *   **ATTACHMENT**: attachment
      shared_ptr<string> rollbackSqlType_ {};
      // The destination table to which you want to import the data in the CSV format.
      // 
      // >  This parameter is required if you set the **FileType** parameter to **CSV**.
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->attachmentKey_ == nullptr
        && this->comment_ == nullptr && this->param_ == nullptr && this->realLoginUserUid_ == nullptr && this->relatedUserList_ == nullptr && this->tid_ == nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string getAttachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline CreateDataImportOrderRequest& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDataImportOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const CreateDataImportOrderRequest::Param & getParam() const { DARABONBA_PTR_GET_CONST(param_, CreateDataImportOrderRequest::Param) };
    inline CreateDataImportOrderRequest::Param getParam() { DARABONBA_PTR_GET(param_, CreateDataImportOrderRequest::Param) };
    inline CreateDataImportOrderRequest& setParam(const CreateDataImportOrderRequest::Param & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline CreateDataImportOrderRequest& setParam(CreateDataImportOrderRequest::Param && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string getRealLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline CreateDataImportOrderRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const vector<int64_t> & getRelatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<int64_t>) };
    inline vector<int64_t> getRelatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<int64_t>) };
    inline CreateDataImportOrderRequest& setRelatedUserList(const vector<int64_t> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline CreateDataImportOrderRequest& setRelatedUserList(vector<int64_t> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDataImportOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The key of the attachment that provides more instructions for the ticket. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to obtain the attachment key from the value of the AttachmentKey parameter.
    shared_ptr<string> attachmentKey_ {};
    // The purpose or objective of the data import. This parameter is used to help reduce unnecessary communication.
    // 
    // This parameter is required.
    shared_ptr<string> comment_ {};
    // The parameters of the ticket.
    // 
    // This parameter is required.
    shared_ptr<CreateDataImportOrderRequest::Param> param_ {};
    shared_ptr<string> realLoginUserUid_ {};
    // The stakeholders of the data import. All stakeholders can view the ticket details and assist in the approval process. Irrelevant users other than DMS administrators and database administrators (DBAs) are not allowed to view the ticket details.
    shared_ptr<vector<int64_t>> relatedUserList_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
