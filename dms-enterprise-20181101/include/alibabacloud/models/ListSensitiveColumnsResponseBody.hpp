// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNSRESPONSEBODY_HPP_
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
  class ListSensitiveColumnsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveColumnsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SensitiveColumnList, sensitiveColumnList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveColumnsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SensitiveColumnList, sensitiveColumnList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSensitiveColumnsResponseBody() = default ;
    ListSensitiveColumnsResponseBody(const ListSensitiveColumnsResponseBody &) = default ;
    ListSensitiveColumnsResponseBody(ListSensitiveColumnsResponseBody &&) = default ;
    ListSensitiveColumnsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveColumnsResponseBody() = default ;
    ListSensitiveColumnsResponseBody& operator=(const ListSensitiveColumnsResponseBody &) = default ;
    ListSensitiveColumnsResponseBody& operator=(ListSensitiveColumnsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SensitiveColumnList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SensitiveColumnList& obj) { 
        DARABONBA_PTR_TO_JSON(SensitiveColumn, sensitiveColumn_);
      };
      friend void from_json(const Darabonba::Json& j, SensitiveColumnList& obj) { 
        DARABONBA_PTR_FROM_JSON(SensitiveColumn, sensitiveColumn_);
      };
      SensitiveColumnList() = default ;
      SensitiveColumnList(const SensitiveColumnList &) = default ;
      SensitiveColumnList(SensitiveColumnList &&) = default ;
      SensitiveColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SensitiveColumnList() = default ;
      SensitiveColumnList& operator=(const SensitiveColumnList &) = default ;
      SensitiveColumnList& operator=(SensitiveColumnList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SensitiveColumn : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SensitiveColumn& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnCount, columnCount_);
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, SensitiveColumn& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnCount, columnCount_);
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        SensitiveColumn() = default ;
        SensitiveColumn(const SensitiveColumn &) = default ;
        SensitiveColumn(SensitiveColumn &&) = default ;
        SensitiveColumn(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SensitiveColumn() = default ;
        SensitiveColumn& operator=(const SensitiveColumn &) = default ;
        SensitiveColumn& operator=(SensitiveColumn &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columnCount_ == nullptr
        && this->columnName_ == nullptr && this->functionType_ == nullptr && this->schemaName_ == nullptr && this->securityLevel_ == nullptr && this->tableName_ == nullptr; };
        // columnCount Field Functions 
        bool hasColumnCount() const { return this->columnCount_ != nullptr;};
        void deleteColumnCount() { this->columnCount_ = nullptr;};
        inline int64_t getColumnCount() const { DARABONBA_PTR_GET_DEFAULT(columnCount_, 0L) };
        inline SensitiveColumn& setColumnCount(int64_t columnCount) { DARABONBA_PTR_SET_VALUE(columnCount_, columnCount) };


        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline SensitiveColumn& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // functionType Field Functions 
        bool hasFunctionType() const { return this->functionType_ != nullptr;};
        void deleteFunctionType() { this->functionType_ = nullptr;};
        inline string getFunctionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
        inline SensitiveColumn& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline SensitiveColumn& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // securityLevel Field Functions 
        bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
        void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
        inline string getSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
        inline SensitiveColumn& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline SensitiveColumn& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        // The number of sensitive fields.
        shared_ptr<int64_t> columnCount_ {};
        // The name of the field.
        shared_ptr<string> columnName_ {};
        // The type of the de-identification algorithm. Valid values:
        // 
        // *   DEFAULT: All characters are masked. This is the default value.
        // *   FIX_POS: The characters at specific positions are masked.
        // *   FIX_CHAR: Specific characters are masked.
        shared_ptr<string> functionType_ {};
        // The name of the database.
        shared_ptr<string> schemaName_ {};
        // The sensitivity level of the field. Valid values:
        // 
        // *   SENSITIVE
        // *   CONFIDENTIAL
        shared_ptr<string> securityLevel_ {};
        // The name of the table.
        shared_ptr<string> tableName_ {};
      };

      virtual bool empty() const override { return this->sensitiveColumn_ == nullptr; };
      // sensitiveColumn Field Functions 
      bool hasSensitiveColumn() const { return this->sensitiveColumn_ != nullptr;};
      void deleteSensitiveColumn() { this->sensitiveColumn_ = nullptr;};
      inline const vector<SensitiveColumnList::SensitiveColumn> & getSensitiveColumn() const { DARABONBA_PTR_GET_CONST(sensitiveColumn_, vector<SensitiveColumnList::SensitiveColumn>) };
      inline vector<SensitiveColumnList::SensitiveColumn> getSensitiveColumn() { DARABONBA_PTR_GET(sensitiveColumn_, vector<SensitiveColumnList::SensitiveColumn>) };
      inline SensitiveColumnList& setSensitiveColumn(const vector<SensitiveColumnList::SensitiveColumn> & sensitiveColumn) { DARABONBA_PTR_SET_VALUE(sensitiveColumn_, sensitiveColumn) };
      inline SensitiveColumnList& setSensitiveColumn(vector<SensitiveColumnList::SensitiveColumn> && sensitiveColumn) { DARABONBA_PTR_SET_RVALUE(sensitiveColumn_, sensitiveColumn) };


    protected:
      shared_ptr<vector<SensitiveColumnList::SensitiveColumn>> sensitiveColumn_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->sensitiveColumnList_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSensitiveColumnsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListSensitiveColumnsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSensitiveColumnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitiveColumnList Field Functions 
    bool hasSensitiveColumnList() const { return this->sensitiveColumnList_ != nullptr;};
    void deleteSensitiveColumnList() { this->sensitiveColumnList_ = nullptr;};
    inline const ListSensitiveColumnsResponseBody::SensitiveColumnList & getSensitiveColumnList() const { DARABONBA_PTR_GET_CONST(sensitiveColumnList_, ListSensitiveColumnsResponseBody::SensitiveColumnList) };
    inline ListSensitiveColumnsResponseBody::SensitiveColumnList getSensitiveColumnList() { DARABONBA_PTR_GET(sensitiveColumnList_, ListSensitiveColumnsResponseBody::SensitiveColumnList) };
    inline ListSensitiveColumnsResponseBody& setSensitiveColumnList(const ListSensitiveColumnsResponseBody::SensitiveColumnList & sensitiveColumnList) { DARABONBA_PTR_SET_VALUE(sensitiveColumnList_, sensitiveColumnList) };
    inline ListSensitiveColumnsResponseBody& setSensitiveColumnList(ListSensitiveColumnsResponseBody::SensitiveColumnList && sensitiveColumnList) { DARABONBA_PTR_SET_RVALUE(sensitiveColumnList_, sensitiveColumnList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSensitiveColumnsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSensitiveColumnsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The sensitive fields.
    shared_ptr<ListSensitiveColumnsResponseBody::SensitiveColumnList> sensitiveColumnList_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - true: The request is successful.
    // - false: The request fails.
    shared_ptr<bool> success_ {};
    // The total number of returned entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
