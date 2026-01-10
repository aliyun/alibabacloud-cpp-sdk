// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLECOLUMNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLECOLUMNSRESPONSEBODY_HPP_
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
  class ListTableColumnsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableColumnsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableColumnsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTableColumnsResponseBody() = default ;
    ListTableColumnsResponseBody(const ListTableColumnsResponseBody &) = default ;
    ListTableColumnsResponseBody(ListTableColumnsResponseBody &&) = default ;
    ListTableColumnsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableColumnsResponseBody() = default ;
    ListTableColumnsResponseBody& operator=(const ListTableColumnsResponseBody &) = default ;
    ListTableColumnsResponseBody& operator=(ListTableColumnsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ColumnList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ColumnList& obj) { 
        DARABONBA_PTR_TO_JSON(Column, column_);
      };
      friend void from_json(const Darabonba::Json& j, ColumnList& obj) { 
        DARABONBA_PTR_FROM_JSON(Column, column_);
      };
      ColumnList() = default ;
      ColumnList(const ColumnList &) = default ;
      ColumnList(ColumnList &&) = default ;
      ColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ColumnList() = default ;
      ColumnList& operator=(const ColumnList &) = default ;
      ColumnList& operator=(ColumnList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Column : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Column& obj) { 
          DARABONBA_PTR_TO_JSON(AutoIncrement, autoIncrement_);
          DARABONBA_PTR_TO_JSON(ColumnId, columnId_);
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
          DARABONBA_PTR_TO_JSON(DataLength, dataLength_);
          DARABONBA_PTR_TO_JSON(DataPrecision, dataPrecision_);
          DARABONBA_PTR_TO_JSON(DataScale, dataScale_);
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
          DARABONBA_PTR_TO_JSON(Nullable, nullable_);
          DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
          DARABONBA_PTR_TO_JSON(Sensitive, sensitive_);
        };
        friend void from_json(const Darabonba::Json& j, Column& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoIncrement, autoIncrement_);
          DARABONBA_PTR_FROM_JSON(ColumnId, columnId_);
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
          DARABONBA_PTR_FROM_JSON(DataLength, dataLength_);
          DARABONBA_PTR_FROM_JSON(DataPrecision, dataPrecision_);
          DARABONBA_PTR_FROM_JSON(DataScale, dataScale_);
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
          DARABONBA_PTR_FROM_JSON(Nullable, nullable_);
          DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
          DARABONBA_PTR_FROM_JSON(Sensitive, sensitive_);
        };
        Column() = default ;
        Column(const Column &) = default ;
        Column(Column &&) = default ;
        Column(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Column() = default ;
        Column& operator=(const Column &) = default ;
        Column& operator=(Column &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoIncrement_ == nullptr
        && this->columnId_ == nullptr && this->columnName_ == nullptr && this->columnType_ == nullptr && this->dataLength_ == nullptr && this->dataPrecision_ == nullptr
        && this->dataScale_ == nullptr && this->defaultValue_ == nullptr && this->description_ == nullptr && this->functionType_ == nullptr && this->nullable_ == nullptr
        && this->securityLevel_ == nullptr && this->sensitive_ == nullptr; };
        // autoIncrement Field Functions 
        bool hasAutoIncrement() const { return this->autoIncrement_ != nullptr;};
        void deleteAutoIncrement() { this->autoIncrement_ = nullptr;};
        inline bool getAutoIncrement() const { DARABONBA_PTR_GET_DEFAULT(autoIncrement_, false) };
        inline Column& setAutoIncrement(bool autoIncrement) { DARABONBA_PTR_SET_VALUE(autoIncrement_, autoIncrement) };


        // columnId Field Functions 
        bool hasColumnId() const { return this->columnId_ != nullptr;};
        void deleteColumnId() { this->columnId_ = nullptr;};
        inline string getColumnId() const { DARABONBA_PTR_GET_DEFAULT(columnId_, "") };
        inline Column& setColumnId(string columnId) { DARABONBA_PTR_SET_VALUE(columnId_, columnId) };


        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline Column& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // columnType Field Functions 
        bool hasColumnType() const { return this->columnType_ != nullptr;};
        void deleteColumnType() { this->columnType_ = nullptr;};
        inline string getColumnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
        inline Column& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


        // dataLength Field Functions 
        bool hasDataLength() const { return this->dataLength_ != nullptr;};
        void deleteDataLength() { this->dataLength_ = nullptr;};
        inline int64_t getDataLength() const { DARABONBA_PTR_GET_DEFAULT(dataLength_, 0L) };
        inline Column& setDataLength(int64_t dataLength) { DARABONBA_PTR_SET_VALUE(dataLength_, dataLength) };


        // dataPrecision Field Functions 
        bool hasDataPrecision() const { return this->dataPrecision_ != nullptr;};
        void deleteDataPrecision() { this->dataPrecision_ = nullptr;};
        inline int32_t getDataPrecision() const { DARABONBA_PTR_GET_DEFAULT(dataPrecision_, 0) };
        inline Column& setDataPrecision(int32_t dataPrecision) { DARABONBA_PTR_SET_VALUE(dataPrecision_, dataPrecision) };


        // dataScale Field Functions 
        bool hasDataScale() const { return this->dataScale_ != nullptr;};
        void deleteDataScale() { this->dataScale_ = nullptr;};
        inline int32_t getDataScale() const { DARABONBA_PTR_GET_DEFAULT(dataScale_, 0) };
        inline Column& setDataScale(int32_t dataScale) { DARABONBA_PTR_SET_VALUE(dataScale_, dataScale) };


        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline Column& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Column& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // functionType Field Functions 
        bool hasFunctionType() const { return this->functionType_ != nullptr;};
        void deleteFunctionType() { this->functionType_ = nullptr;};
        inline string getFunctionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
        inline Column& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


        // nullable Field Functions 
        bool hasNullable() const { return this->nullable_ != nullptr;};
        void deleteNullable() { this->nullable_ = nullptr;};
        inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
        inline Column& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


        // securityLevel Field Functions 
        bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
        void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
        inline string getSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
        inline Column& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


        // sensitive Field Functions 
        bool hasSensitive() const { return this->sensitive_ != nullptr;};
        void deleteSensitive() { this->sensitive_ = nullptr;};
        inline bool getSensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
        inline Column& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


      protected:
        // Indicates whether the field is an auto-increment field. Valid values:
        // 
        // *   true: The field is an auto-increment field.
        // *   false: The field is not an auto-increment field.
        shared_ptr<bool> autoIncrement_ {};
        // The ID of the field.
        shared_ptr<string> columnId_ {};
        // The field name.
        shared_ptr<string> columnName_ {};
        // The data type of the field.
        shared_ptr<string> columnType_ {};
        // The length of the field.
        shared_ptr<int64_t> dataLength_ {};
        // The number of valid digits for the column.
        shared_ptr<int32_t> dataPrecision_ {};
        // The number of decimal places of the field data.
        shared_ptr<int32_t> dataScale_ {};
        // The default value of the column.
        shared_ptr<string> defaultValue_ {};
        // The description of the field.
        shared_ptr<string> description_ {};
        // The type of the masking algorithm that is used for the field. Valid values:
        // 
        // *   null: No masking algorithm is used.
        // *   DEFAULT: A full masking algorithm is used.
        // *   FIX_POS: The fixed position is masked.
        // *   FIX_CHAR: The fixed characters are replaced.
        shared_ptr<string> functionType_ {};
        // Indicates whether the field can be empty. Valid values:
        // 
        // *   true: The field can be empty.
        // *   false: The field cannot be empty.
        shared_ptr<bool> nullable_ {};
        // The security level of the field. Valid values:
        // 
        // *   INNER: The field is an internal field but not sensitive.
        // *   SENSITIVE: The field is sensitive.
        // *   CONFIDENTIAL: The field is a confidential column.
        shared_ptr<string> securityLevel_ {};
        // Indicates whether the field is a sensitive column. Valid values:
        // 
        // *   true: The field is a sensitive field.
        // *   false: The field is not a sensitive field.
        shared_ptr<bool> sensitive_ {};
      };

      virtual bool empty() const override { return this->column_ == nullptr; };
      // column Field Functions 
      bool hasColumn() const { return this->column_ != nullptr;};
      void deleteColumn() { this->column_ = nullptr;};
      inline const vector<ColumnList::Column> & getColumn() const { DARABONBA_PTR_GET_CONST(column_, vector<ColumnList::Column>) };
      inline vector<ColumnList::Column> getColumn() { DARABONBA_PTR_GET(column_, vector<ColumnList::Column>) };
      inline ColumnList& setColumn(const vector<ColumnList::Column> & column) { DARABONBA_PTR_SET_VALUE(column_, column) };
      inline ColumnList& setColumn(vector<ColumnList::Column> && column) { DARABONBA_PTR_SET_RVALUE(column_, column) };


    protected:
      shared_ptr<vector<ColumnList::Column>> column_ {};
    };

    virtual bool empty() const override { return this->columnList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // columnList Field Functions 
    bool hasColumnList() const { return this->columnList_ != nullptr;};
    void deleteColumnList() { this->columnList_ = nullptr;};
    inline const ListTableColumnsResponseBody::ColumnList & getColumnList() const { DARABONBA_PTR_GET_CONST(columnList_, ListTableColumnsResponseBody::ColumnList) };
    inline ListTableColumnsResponseBody::ColumnList getColumnList() { DARABONBA_PTR_GET(columnList_, ListTableColumnsResponseBody::ColumnList) };
    inline ListTableColumnsResponseBody& setColumnList(const ListTableColumnsResponseBody::ColumnList & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
    inline ListTableColumnsResponseBody& setColumnList(ListTableColumnsResponseBody::ColumnList && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTableColumnsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTableColumnsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTableColumnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTableColumnsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about fields in the table.
    shared_ptr<ListTableColumnsResponseBody::ColumnList> columnList_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
