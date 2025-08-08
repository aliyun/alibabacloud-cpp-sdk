// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAIMPORTORDERREQUESTPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAIMPORTORDERREQUESTPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataImportOrderRequestParamDbItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataImportOrderRequestParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataImportOrderRequestParam& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateDataImportOrderRequestParam& obj) { 
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
    CreateDataImportOrderRequestParam() = default ;
    CreateDataImportOrderRequestParam(const CreateDataImportOrderRequestParam &) = default ;
    CreateDataImportOrderRequestParam(CreateDataImportOrderRequestParam &&) = default ;
    CreateDataImportOrderRequestParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataImportOrderRequestParam() = default ;
    CreateDataImportOrderRequestParam& operator=(const CreateDataImportOrderRequestParam &) = default ;
    CreateDataImportOrderRequestParam& operator=(CreateDataImportOrderRequestParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachmentName_ != nullptr
        && this->classify_ != nullptr && this->csvFirstRowIsColumnDef_ != nullptr && this->dbItemList_ != nullptr && this->execMode_ != nullptr && this->fileEncoding_ != nullptr
        && this->fileType_ != nullptr && this->ignoreError_ != nullptr && this->importMode_ != nullptr && this->insertType_ != nullptr && this->rollbackAttachmentName_ != nullptr
        && this->rollbackSQL_ != nullptr && this->rollbackSqlType_ != nullptr && this->tableName_ != nullptr; };
    // attachmentName Field Functions 
    bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
    void deleteAttachmentName() { this->attachmentName_ = nullptr;};
    inline string attachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
    inline CreateDataImportOrderRequestParam& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string classify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline CreateDataImportOrderRequestParam& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // csvFirstRowIsColumnDef Field Functions 
    bool hasCsvFirstRowIsColumnDef() const { return this->csvFirstRowIsColumnDef_ != nullptr;};
    void deleteCsvFirstRowIsColumnDef() { this->csvFirstRowIsColumnDef_ = nullptr;};
    inline bool csvFirstRowIsColumnDef() const { DARABONBA_PTR_GET_DEFAULT(csvFirstRowIsColumnDef_, false) };
    inline CreateDataImportOrderRequestParam& setCsvFirstRowIsColumnDef(bool csvFirstRowIsColumnDef) { DARABONBA_PTR_SET_VALUE(csvFirstRowIsColumnDef_, csvFirstRowIsColumnDef) };


    // dbItemList Field Functions 
    bool hasDbItemList() const { return this->dbItemList_ != nullptr;};
    void deleteDbItemList() { this->dbItemList_ = nullptr;};
    inline const vector<Models::CreateDataImportOrderRequestParamDbItemList> & dbItemList() const { DARABONBA_PTR_GET_CONST(dbItemList_, vector<Models::CreateDataImportOrderRequestParamDbItemList>) };
    inline vector<Models::CreateDataImportOrderRequestParamDbItemList> dbItemList() { DARABONBA_PTR_GET(dbItemList_, vector<Models::CreateDataImportOrderRequestParamDbItemList>) };
    inline CreateDataImportOrderRequestParam& setDbItemList(const vector<Models::CreateDataImportOrderRequestParamDbItemList> & dbItemList) { DARABONBA_PTR_SET_VALUE(dbItemList_, dbItemList) };
    inline CreateDataImportOrderRequestParam& setDbItemList(vector<Models::CreateDataImportOrderRequestParamDbItemList> && dbItemList) { DARABONBA_PTR_SET_RVALUE(dbItemList_, dbItemList) };


    // execMode Field Functions 
    bool hasExecMode() const { return this->execMode_ != nullptr;};
    void deleteExecMode() { this->execMode_ = nullptr;};
    inline string execMode() const { DARABONBA_PTR_GET_DEFAULT(execMode_, "") };
    inline CreateDataImportOrderRequestParam& setExecMode(string execMode) { DARABONBA_PTR_SET_VALUE(execMode_, execMode) };


    // fileEncoding Field Functions 
    bool hasFileEncoding() const { return this->fileEncoding_ != nullptr;};
    void deleteFileEncoding() { this->fileEncoding_ = nullptr;};
    inline string fileEncoding() const { DARABONBA_PTR_GET_DEFAULT(fileEncoding_, "") };
    inline CreateDataImportOrderRequestParam& setFileEncoding(string fileEncoding) { DARABONBA_PTR_SET_VALUE(fileEncoding_, fileEncoding) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline CreateDataImportOrderRequestParam& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // ignoreError Field Functions 
    bool hasIgnoreError() const { return this->ignoreError_ != nullptr;};
    void deleteIgnoreError() { this->ignoreError_ = nullptr;};
    inline bool ignoreError() const { DARABONBA_PTR_GET_DEFAULT(ignoreError_, false) };
    inline CreateDataImportOrderRequestParam& setIgnoreError(bool ignoreError) { DARABONBA_PTR_SET_VALUE(ignoreError_, ignoreError) };


    // importMode Field Functions 
    bool hasImportMode() const { return this->importMode_ != nullptr;};
    void deleteImportMode() { this->importMode_ = nullptr;};
    inline string importMode() const { DARABONBA_PTR_GET_DEFAULT(importMode_, "") };
    inline CreateDataImportOrderRequestParam& setImportMode(string importMode) { DARABONBA_PTR_SET_VALUE(importMode_, importMode) };


    // insertType Field Functions 
    bool hasInsertType() const { return this->insertType_ != nullptr;};
    void deleteInsertType() { this->insertType_ = nullptr;};
    inline string insertType() const { DARABONBA_PTR_GET_DEFAULT(insertType_, "") };
    inline CreateDataImportOrderRequestParam& setInsertType(string insertType) { DARABONBA_PTR_SET_VALUE(insertType_, insertType) };


    // rollbackAttachmentName Field Functions 
    bool hasRollbackAttachmentName() const { return this->rollbackAttachmentName_ != nullptr;};
    void deleteRollbackAttachmentName() { this->rollbackAttachmentName_ = nullptr;};
    inline string rollbackAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(rollbackAttachmentName_, "") };
    inline CreateDataImportOrderRequestParam& setRollbackAttachmentName(string rollbackAttachmentName) { DARABONBA_PTR_SET_VALUE(rollbackAttachmentName_, rollbackAttachmentName) };


    // rollbackSQL Field Functions 
    bool hasRollbackSQL() const { return this->rollbackSQL_ != nullptr;};
    void deleteRollbackSQL() { this->rollbackSQL_ = nullptr;};
    inline string rollbackSQL() const { DARABONBA_PTR_GET_DEFAULT(rollbackSQL_, "") };
    inline CreateDataImportOrderRequestParam& setRollbackSQL(string rollbackSQL) { DARABONBA_PTR_SET_VALUE(rollbackSQL_, rollbackSQL) };


    // rollbackSqlType Field Functions 
    bool hasRollbackSqlType() const { return this->rollbackSqlType_ != nullptr;};
    void deleteRollbackSqlType() { this->rollbackSqlType_ = nullptr;};
    inline string rollbackSqlType() const { DARABONBA_PTR_GET_DEFAULT(rollbackSqlType_, "") };
    inline CreateDataImportOrderRequestParam& setRollbackSqlType(string rollbackSqlType) { DARABONBA_PTR_SET_VALUE(rollbackSqlType_, rollbackSqlType) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateDataImportOrderRequestParam& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The key of the attachment that contains the SQL statements used to import data. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to the attachment key from the value of the AttachmentKey parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> attachmentName_ = nullptr;
    // The reason for the data import.
    std::shared_ptr<string> classify_ = nullptr;
    // The type of the CSV file. Valid values:
    // 
    // *   **true**: The first row in the CSV file contains field names.
    // *   **false**: The first row in the CSV file contains data.
    // 
    // >  This parameter is required if you set the **FileType** parameter to **CSV**.
    std::shared_ptr<bool> csvFirstRowIsColumnDef_ = nullptr;
    // The database to which you want to import data. You can specify only one database.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateDataImportOrderRequestParamDbItemList>> dbItemList_ = nullptr;
    std::shared_ptr<string> execMode_ = nullptr;
    // The encoding algorithm to be used by the destination database. Valid values:
    // 
    // *   **AUTO**: automatic identification
    // *   **UTF-8**: UTF-8 encoding
    // *   **GBK**: GBK encoding
    // *   **ISO-8859-1**: ISO-8859-1 encoding
    std::shared_ptr<string> fileEncoding_ = nullptr;
    // The format of the file for the data import. Valid values:
    // 
    // *   **SQL**: an SQL file
    // *   **CSV**: a CSV file
    // 
    // This parameter is required.
    std::shared_ptr<string> fileType_ = nullptr;
    // Specifies whether to skip an error that occurs. Valid values:
    // 
    // *   **true**: skips the error and continues to execute SQL statements.
    // *   **false**: stops executing SQL statements.
    std::shared_ptr<bool> ignoreError_ = nullptr;
    // The import mode. Valid values:
    // 
    // *   **FAST_MODE**: In the Execute step, the uploaded file is read and SQL statements are executed to import data to the specified destination database. Compared with the security mode, this mode can be used to import data in a less secure but more efficient manner.
    // *   **SAFE_MODE**: In the Precheck step, the uploaded file is parsed, and SQL statements or CSV file data is cached. In the Execute step, the cached SQL statements are read and executed to import data, or the cached CSV file data is read and imported to the specified destination database. This mode can be used to import data in a more secure but less efficient manner.
    std::shared_ptr<string> importMode_ = nullptr;
    // The mode in which the data in the CSV format is to be written to the destination table. Valid values:
    // 
    // *   **INSERT**: The database checks the primary key when data is written. If a duplicate primary key value exists, an error message is returned.
    // *   **INSERT_IGNORE**: If the imported data contains data records that are the same as those in the destination table, the new data records are ignored.
    // *   **REPLACE_INTO**: If the imported data contains a row that has the same value for the primary key or unique index as one row in the destination table, the database deletes the existing row and inserts the new row into the destination table.
    // 
    // >  This parameter is required if you set the **FileType** parameter to **CSV**.
    std::shared_ptr<string> insertType_ = nullptr;
    // The key of the attachment that contains the SQL statements used to roll back the data import. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to obtain the attachment key from the value of the AttachmentKey parameter.
    // 
    // >  This parameter is required if you set the **RollbackSqlType** parameter to **ATTACHMENT**.
    std::shared_ptr<string> rollbackAttachmentName_ = nullptr;
    // The SQL statements used to roll back the data import.
    // 
    // >  This parameter is required if you set the **RollbackSqlType** parameter to **TEXT**.
    std::shared_ptr<string> rollbackSQL_ = nullptr;
    // The format of the SQL statements used to roll back the data import. Valid values:
    // 
    // *   **TEXT**: text
    // *   **ATTACHMENT**: attachment
    std::shared_ptr<string> rollbackSqlType_ = nullptr;
    // The destination table to which you want to import the data in the CSV format.
    // 
    // >  This parameter is required if you set the **FileType** parameter to **CSV**.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
