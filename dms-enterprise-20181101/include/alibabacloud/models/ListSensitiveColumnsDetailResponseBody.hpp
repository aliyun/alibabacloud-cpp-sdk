// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNSDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNSDETAILRESPONSEBODY_HPP_
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
  class ListSensitiveColumnsDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveColumnsDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SensitiveColumnsDetailList, sensitiveColumnsDetailList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveColumnsDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SensitiveColumnsDetailList, sensitiveColumnsDetailList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSensitiveColumnsDetailResponseBody() = default ;
    ListSensitiveColumnsDetailResponseBody(const ListSensitiveColumnsDetailResponseBody &) = default ;
    ListSensitiveColumnsDetailResponseBody(ListSensitiveColumnsDetailResponseBody &&) = default ;
    ListSensitiveColumnsDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveColumnsDetailResponseBody() = default ;
    ListSensitiveColumnsDetailResponseBody& operator=(const ListSensitiveColumnsDetailResponseBody &) = default ;
    ListSensitiveColumnsDetailResponseBody& operator=(ListSensitiveColumnsDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SensitiveColumnsDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SensitiveColumnsDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(SensitiveColumnsDetail, sensitiveColumnsDetail_);
      };
      friend void from_json(const Darabonba::Json& j, SensitiveColumnsDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(SensitiveColumnsDetail, sensitiveColumnsDetail_);
      };
      SensitiveColumnsDetailList() = default ;
      SensitiveColumnsDetailList(const SensitiveColumnsDetailList &) = default ;
      SensitiveColumnsDetailList(SensitiveColumnsDetailList &&) = default ;
      SensitiveColumnsDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SensitiveColumnsDetailList() = default ;
      SensitiveColumnsDetailList& operator=(const SensitiveColumnsDetailList &) = default ;
      SensitiveColumnsDetailList& operator=(SensitiveColumnsDetailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SensitiveColumnsDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SensitiveColumnsDetail& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnDescription, columnDescription_);
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(SearchName, searchName_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, SensitiveColumnsDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnDescription, columnDescription_);
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        SensitiveColumnsDetail() = default ;
        SensitiveColumnsDetail(const SensitiveColumnsDetail &) = default ;
        SensitiveColumnsDetail(SensitiveColumnsDetail &&) = default ;
        SensitiveColumnsDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SensitiveColumnsDetail() = default ;
        SensitiveColumnsDetail& operator=(const SensitiveColumnsDetail &) = default ;
        SensitiveColumnsDetail& operator=(SensitiveColumnsDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columnDescription_ == nullptr
        && this->columnName_ == nullptr && this->columnType_ == nullptr && this->dbId_ == nullptr && this->dbType_ == nullptr && this->envType_ == nullptr
        && this->logic_ == nullptr && this->schemaName_ == nullptr && this->searchName_ == nullptr && this->tableName_ == nullptr; };
        // columnDescription Field Functions 
        bool hasColumnDescription() const { return this->columnDescription_ != nullptr;};
        void deleteColumnDescription() { this->columnDescription_ = nullptr;};
        inline string getColumnDescription() const { DARABONBA_PTR_GET_DEFAULT(columnDescription_, "") };
        inline SensitiveColumnsDetail& setColumnDescription(string columnDescription) { DARABONBA_PTR_SET_VALUE(columnDescription_, columnDescription) };


        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline SensitiveColumnsDetail& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // columnType Field Functions 
        bool hasColumnType() const { return this->columnType_ != nullptr;};
        void deleteColumnType() { this->columnType_ = nullptr;};
        inline string getColumnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
        inline SensitiveColumnsDetail& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
        inline SensitiveColumnsDetail& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline SensitiveColumnsDetail& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline SensitiveColumnsDetail& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline SensitiveColumnsDetail& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline SensitiveColumnsDetail& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // searchName Field Functions 
        bool hasSearchName() const { return this->searchName_ != nullptr;};
        void deleteSearchName() { this->searchName_ = nullptr;};
        inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
        inline SensitiveColumnsDetail& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline SensitiveColumnsDetail& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        // The description of the field.
        shared_ptr<string> columnDescription_ {};
        // The name of the field.
        shared_ptr<string> columnName_ {};
        // The data type of the field.
        shared_ptr<string> columnType_ {};
        // The ID of the database.
        shared_ptr<int64_t> dbId_ {};
        // The type of the database.
        shared_ptr<string> dbType_ {};
        // The type of the environment to which the database belongs.
        shared_ptr<string> envType_ {};
        // Indicates whether the database is a logical database. Valid values:
        // 
        // *   **true**: The database is a logical database.
        // *   **false**: The database is not a logical database.
        shared_ptr<bool> logic_ {};
        // The name of the database.
        shared_ptr<string> schemaName_ {};
        // The name that is used to search for the database.
        shared_ptr<string> searchName_ {};
        // The name of the table.
        shared_ptr<string> tableName_ {};
      };

      virtual bool empty() const override { return this->sensitiveColumnsDetail_ == nullptr; };
      // sensitiveColumnsDetail Field Functions 
      bool hasSensitiveColumnsDetail() const { return this->sensitiveColumnsDetail_ != nullptr;};
      void deleteSensitiveColumnsDetail() { this->sensitiveColumnsDetail_ = nullptr;};
      inline const vector<SensitiveColumnsDetailList::SensitiveColumnsDetail> & getSensitiveColumnsDetail() const { DARABONBA_PTR_GET_CONST(sensitiveColumnsDetail_, vector<SensitiveColumnsDetailList::SensitiveColumnsDetail>) };
      inline vector<SensitiveColumnsDetailList::SensitiveColumnsDetail> getSensitiveColumnsDetail() { DARABONBA_PTR_GET(sensitiveColumnsDetail_, vector<SensitiveColumnsDetailList::SensitiveColumnsDetail>) };
      inline SensitiveColumnsDetailList& setSensitiveColumnsDetail(const vector<SensitiveColumnsDetailList::SensitiveColumnsDetail> & sensitiveColumnsDetail) { DARABONBA_PTR_SET_VALUE(sensitiveColumnsDetail_, sensitiveColumnsDetail) };
      inline SensitiveColumnsDetailList& setSensitiveColumnsDetail(vector<SensitiveColumnsDetailList::SensitiveColumnsDetail> && sensitiveColumnsDetail) { DARABONBA_PTR_SET_RVALUE(sensitiveColumnsDetail_, sensitiveColumnsDetail) };


    protected:
      shared_ptr<vector<SensitiveColumnsDetailList::SensitiveColumnsDetail>> sensitiveColumnsDetail_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->sensitiveColumnsDetailList_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSensitiveColumnsDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListSensitiveColumnsDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSensitiveColumnsDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitiveColumnsDetailList Field Functions 
    bool hasSensitiveColumnsDetailList() const { return this->sensitiveColumnsDetailList_ != nullptr;};
    void deleteSensitiveColumnsDetailList() { this->sensitiveColumnsDetailList_ = nullptr;};
    inline const ListSensitiveColumnsDetailResponseBody::SensitiveColumnsDetailList & getSensitiveColumnsDetailList() const { DARABONBA_PTR_GET_CONST(sensitiveColumnsDetailList_, ListSensitiveColumnsDetailResponseBody::SensitiveColumnsDetailList) };
    inline ListSensitiveColumnsDetailResponseBody::SensitiveColumnsDetailList getSensitiveColumnsDetailList() { DARABONBA_PTR_GET(sensitiveColumnsDetailList_, ListSensitiveColumnsDetailResponseBody::SensitiveColumnsDetailList) };
    inline ListSensitiveColumnsDetailResponseBody& setSensitiveColumnsDetailList(const ListSensitiveColumnsDetailResponseBody::SensitiveColumnsDetailList & sensitiveColumnsDetailList) { DARABONBA_PTR_SET_VALUE(sensitiveColumnsDetailList_, sensitiveColumnsDetailList) };
    inline ListSensitiveColumnsDetailResponseBody& setSensitiveColumnsDetailList(ListSensitiveColumnsDetailResponseBody::SensitiveColumnsDetailList && sensitiveColumnsDetailList) { DARABONBA_PTR_SET_RVALUE(sensitiveColumnsDetailList_, sensitiveColumnsDetailList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSensitiveColumnsDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the sensitive field.
    shared_ptr<ListSensitiveColumnsDetailResponseBody::SensitiveColumnsDetailList> sensitiveColumnsDetailList_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
