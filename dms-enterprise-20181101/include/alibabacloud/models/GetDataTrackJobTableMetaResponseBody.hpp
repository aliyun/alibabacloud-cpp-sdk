// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATATRACKJOBTABLEMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATATRACKJOBTABLEMETARESPONSEBODY_HPP_
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
  class GetDataTrackJobTableMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataTrackJobTableMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableMetaList, tableMetaList_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataTrackJobTableMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableMetaList, tableMetaList_);
    };
    GetDataTrackJobTableMetaResponseBody() = default ;
    GetDataTrackJobTableMetaResponseBody(const GetDataTrackJobTableMetaResponseBody &) = default ;
    GetDataTrackJobTableMetaResponseBody(GetDataTrackJobTableMetaResponseBody &&) = default ;
    GetDataTrackJobTableMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataTrackJobTableMetaResponseBody() = default ;
    GetDataTrackJobTableMetaResponseBody& operator=(const GetDataTrackJobTableMetaResponseBody &) = default ;
    GetDataTrackJobTableMetaResponseBody& operator=(GetDataTrackJobTableMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TableMetaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TableMetaList& obj) { 
        DARABONBA_PTR_TO_JSON(Columns, columns_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, TableMetaList& obj) { 
        DARABONBA_PTR_FROM_JSON(Columns, columns_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      };
      TableMetaList() = default ;
      TableMetaList(const TableMetaList &) = default ;
      TableMetaList(TableMetaList &&) = default ;
      TableMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TableMetaList() = default ;
      TableMetaList& operator=(const TableMetaList &) = default ;
      TableMetaList& operator=(TableMetaList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Columns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Columns& obj) { 
          DARABONBA_PTR_TO_JSON(Charset, charset_);
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(ColumnPosition, columnPosition_);
          DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
          DARABONBA_PTR_TO_JSON(Fictive, fictive_);
        };
        friend void from_json(const Darabonba::Json& j, Columns& obj) { 
          DARABONBA_PTR_FROM_JSON(Charset, charset_);
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(ColumnPosition, columnPosition_);
          DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
          DARABONBA_PTR_FROM_JSON(Fictive, fictive_);
        };
        Columns() = default ;
        Columns(const Columns &) = default ;
        Columns(Columns &&) = default ;
        Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Columns() = default ;
        Columns& operator=(const Columns &) = default ;
        Columns& operator=(Columns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->charset_ == nullptr
        && this->columnName_ == nullptr && this->columnPosition_ == nullptr && this->columnType_ == nullptr && this->fictive_ == nullptr; };
        // charset Field Functions 
        bool hasCharset() const { return this->charset_ != nullptr;};
        void deleteCharset() { this->charset_ = nullptr;};
        inline string getCharset() const { DARABONBA_PTR_GET_DEFAULT(charset_, "") };
        inline Columns& setCharset(string charset) { DARABONBA_PTR_SET_VALUE(charset_, charset) };


        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline Columns& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // columnPosition Field Functions 
        bool hasColumnPosition() const { return this->columnPosition_ != nullptr;};
        void deleteColumnPosition() { this->columnPosition_ = nullptr;};
        inline int32_t getColumnPosition() const { DARABONBA_PTR_GET_DEFAULT(columnPosition_, 0) };
        inline Columns& setColumnPosition(int32_t columnPosition) { DARABONBA_PTR_SET_VALUE(columnPosition_, columnPosition) };


        // columnType Field Functions 
        bool hasColumnType() const { return this->columnType_ != nullptr;};
        void deleteColumnType() { this->columnType_ = nullptr;};
        inline string getColumnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
        inline Columns& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


        // fictive Field Functions 
        bool hasFictive() const { return this->fictive_ != nullptr;};
        void deleteFictive() { this->fictive_ = nullptr;};
        inline bool getFictive() const { DARABONBA_PTR_GET_DEFAULT(fictive_, false) };
        inline Columns& setFictive(bool fictive) { DARABONBA_PTR_SET_VALUE(fictive_, fictive) };


      protected:
        // The name of the character set.
        shared_ptr<string> charset_ {};
        // The name of the column.
        shared_ptr<string> columnName_ {};
        // The position of the column.
        shared_ptr<int32_t> columnPosition_ {};
        // The data type of the column. Examples: BIGINT, INT, and VARCHAR.
        shared_ptr<string> columnType_ {};
        // Indicates whether the column is a virtual column. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> fictive_ {};
      };

      virtual bool empty() const override { return this->columns_ == nullptr
        && this->schemaName_ == nullptr && this->tableName_ == nullptr; };
      // columns Field Functions 
      bool hasColumns() const { return this->columns_ != nullptr;};
      void deleteColumns() { this->columns_ = nullptr;};
      inline const vector<TableMetaList::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<TableMetaList::Columns>) };
      inline vector<TableMetaList::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<TableMetaList::Columns>) };
      inline TableMetaList& setColumns(const vector<TableMetaList::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
      inline TableMetaList& setColumns(vector<TableMetaList::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline TableMetaList& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline TableMetaList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      // The information about columns.
      shared_ptr<vector<TableMetaList::Columns>> columns_ {};
      // The name of the database.
      shared_ptr<string> schemaName_ {};
      // The name of the table.
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tableMetaList_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataTrackJobTableMetaResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataTrackJobTableMetaResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataTrackJobTableMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataTrackJobTableMetaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableMetaList Field Functions 
    bool hasTableMetaList() const { return this->tableMetaList_ != nullptr;};
    void deleteTableMetaList() { this->tableMetaList_ = nullptr;};
    inline const vector<GetDataTrackJobTableMetaResponseBody::TableMetaList> & getTableMetaList() const { DARABONBA_PTR_GET_CONST(tableMetaList_, vector<GetDataTrackJobTableMetaResponseBody::TableMetaList>) };
    inline vector<GetDataTrackJobTableMetaResponseBody::TableMetaList> getTableMetaList() { DARABONBA_PTR_GET(tableMetaList_, vector<GetDataTrackJobTableMetaResponseBody::TableMetaList>) };
    inline GetDataTrackJobTableMetaResponseBody& setTableMetaList(const vector<GetDataTrackJobTableMetaResponseBody::TableMetaList> & tableMetaList) { DARABONBA_PTR_SET_VALUE(tableMetaList_, tableMetaList) };
    inline GetDataTrackJobTableMetaResponseBody& setTableMetaList(vector<GetDataTrackJobTableMetaResponseBody::TableMetaList> && tableMetaList) { DARABONBA_PTR_SET_RVALUE(tableMetaList_, tableMetaList) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The metadata of tables.
    shared_ptr<vector<GetDataTrackJobTableMetaResponseBody::TableMetaList>> tableMetaList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
