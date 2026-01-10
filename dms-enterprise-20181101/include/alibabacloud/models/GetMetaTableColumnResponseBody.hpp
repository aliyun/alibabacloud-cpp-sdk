// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLECOLUMNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLECOLUMNRESPONSEBODY_HPP_
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
  class GetMetaTableColumnResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableColumnResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableColumnResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMetaTableColumnResponseBody() = default ;
    GetMetaTableColumnResponseBody(const GetMetaTableColumnResponseBody &) = default ;
    GetMetaTableColumnResponseBody(GetMetaTableColumnResponseBody &&) = default ;
    GetMetaTableColumnResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableColumnResponseBody() = default ;
    GetMetaTableColumnResponseBody& operator=(const GetMetaTableColumnResponseBody &) = default ;
    GetMetaTableColumnResponseBody& operator=(GetMetaTableColumnResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ColumnList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ColumnList& obj) { 
        DARABONBA_PTR_TO_JSON(AutoIncrement, autoIncrement_);
        DARABONBA_PTR_TO_JSON(ColumnId, columnId_);
        DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
        DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
        DARABONBA_PTR_TO_JSON(DataLength, dataLength_);
        DARABONBA_PTR_TO_JSON(DataPrecision, dataPrecision_);
        DARABONBA_PTR_TO_JSON(DataScale, dataScale_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Nullable, nullable_);
        DARABONBA_PTR_TO_JSON(Position, position_);
        DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
        DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
      };
      friend void from_json(const Darabonba::Json& j, ColumnList& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoIncrement, autoIncrement_);
        DARABONBA_PTR_FROM_JSON(ColumnId, columnId_);
        DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
        DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
        DARABONBA_PTR_FROM_JSON(DataLength, dataLength_);
        DARABONBA_PTR_FROM_JSON(DataPrecision, dataPrecision_);
        DARABONBA_PTR_FROM_JSON(DataScale, dataScale_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Nullable, nullable_);
        DARABONBA_PTR_FROM_JSON(Position, position_);
        DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
        DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
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
      virtual bool empty() const override { return this->autoIncrement_ == nullptr
        && this->columnId_ == nullptr && this->columnName_ == nullptr && this->columnType_ == nullptr && this->dataLength_ == nullptr && this->dataPrecision_ == nullptr
        && this->dataScale_ == nullptr && this->description_ == nullptr && this->nullable_ == nullptr && this->position_ == nullptr && this->primaryKey_ == nullptr
        && this->securityLevel_ == nullptr; };
      // autoIncrement Field Functions 
      bool hasAutoIncrement() const { return this->autoIncrement_ != nullptr;};
      void deleteAutoIncrement() { this->autoIncrement_ = nullptr;};
      inline bool getAutoIncrement() const { DARABONBA_PTR_GET_DEFAULT(autoIncrement_, false) };
      inline ColumnList& setAutoIncrement(bool autoIncrement) { DARABONBA_PTR_SET_VALUE(autoIncrement_, autoIncrement) };


      // columnId Field Functions 
      bool hasColumnId() const { return this->columnId_ != nullptr;};
      void deleteColumnId() { this->columnId_ = nullptr;};
      inline string getColumnId() const { DARABONBA_PTR_GET_DEFAULT(columnId_, "") };
      inline ColumnList& setColumnId(string columnId) { DARABONBA_PTR_SET_VALUE(columnId_, columnId) };


      // columnName Field Functions 
      bool hasColumnName() const { return this->columnName_ != nullptr;};
      void deleteColumnName() { this->columnName_ = nullptr;};
      inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
      inline ColumnList& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


      // columnType Field Functions 
      bool hasColumnType() const { return this->columnType_ != nullptr;};
      void deleteColumnType() { this->columnType_ = nullptr;};
      inline string getColumnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
      inline ColumnList& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


      // dataLength Field Functions 
      bool hasDataLength() const { return this->dataLength_ != nullptr;};
      void deleteDataLength() { this->dataLength_ = nullptr;};
      inline int64_t getDataLength() const { DARABONBA_PTR_GET_DEFAULT(dataLength_, 0L) };
      inline ColumnList& setDataLength(int64_t dataLength) { DARABONBA_PTR_SET_VALUE(dataLength_, dataLength) };


      // dataPrecision Field Functions 
      bool hasDataPrecision() const { return this->dataPrecision_ != nullptr;};
      void deleteDataPrecision() { this->dataPrecision_ = nullptr;};
      inline int32_t getDataPrecision() const { DARABONBA_PTR_GET_DEFAULT(dataPrecision_, 0) };
      inline ColumnList& setDataPrecision(int32_t dataPrecision) { DARABONBA_PTR_SET_VALUE(dataPrecision_, dataPrecision) };


      // dataScale Field Functions 
      bool hasDataScale() const { return this->dataScale_ != nullptr;};
      void deleteDataScale() { this->dataScale_ = nullptr;};
      inline int32_t getDataScale() const { DARABONBA_PTR_GET_DEFAULT(dataScale_, 0) };
      inline ColumnList& setDataScale(int32_t dataScale) { DARABONBA_PTR_SET_VALUE(dataScale_, dataScale) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ColumnList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // nullable Field Functions 
      bool hasNullable() const { return this->nullable_ != nullptr;};
      void deleteNullable() { this->nullable_ = nullptr;};
      inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
      inline ColumnList& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


      // position Field Functions 
      bool hasPosition() const { return this->position_ != nullptr;};
      void deletePosition() { this->position_ = nullptr;};
      inline int32_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
      inline ColumnList& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


      // primaryKey Field Functions 
      bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
      void deletePrimaryKey() { this->primaryKey_ = nullptr;};
      inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
      inline ColumnList& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


      // securityLevel Field Functions 
      bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
      void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
      inline string getSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
      inline ColumnList& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


    protected:
      // Indicates whether the column is an auto-increment column. Valid values:
      // 
      // *   **true**: The column is an auto-increment column.
      // *   **false**: The column is not an auto-increment column.
      shared_ptr<bool> autoIncrement_ {};
      // The ID of the column.
      shared_ptr<string> columnId_ {};
      // The name of the column.
      shared_ptr<string> columnName_ {};
      // The data type of the column.
      // 
      // > The return value of a column is not unique, such as **bigint** or **int**.
      shared_ptr<string> columnType_ {};
      // The length of the field.
      shared_ptr<int64_t> dataLength_ {};
      // The precision of the field.
      shared_ptr<int32_t> dataPrecision_ {};
      // The number of decimal places for the field.
      shared_ptr<int32_t> dataScale_ {};
      // The description of the column.
      shared_ptr<string> description_ {};
      // Indicates whether the field can be empty. Valid values:
      // 
      // *   **true**: The field can be empty.
      // *   **false**: The field cannot be empty.
      shared_ptr<bool> nullable_ {};
      // The position of the field in the table.
      shared_ptr<int32_t> position_ {};
      // Indicates whether the field is the primary key. Valid values:
      // 
      // *   **true**: The field is the primary key.
      // *   **false**: The field is not the primary key.
      shared_ptr<string> primaryKey_ {};
      // The sensitivity level of the column. Valid values:
      // 
      // *   **INNER**: The column is not sensitive.
      // *   **SENSITIVE**: The column is sensitive.
      // *   **CONFIDENTIAL**: The column is confidential.
      // 
      // > For more information, see [Sensitivity levels of columns](https://help.aliyun.com/document_detail/66091.html).
      shared_ptr<string> securityLevel_ {};
    };

    virtual bool empty() const override { return this->columnList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // columnList Field Functions 
    bool hasColumnList() const { return this->columnList_ != nullptr;};
    void deleteColumnList() { this->columnList_ = nullptr;};
    inline const vector<GetMetaTableColumnResponseBody::ColumnList> & getColumnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<GetMetaTableColumnResponseBody::ColumnList>) };
    inline vector<GetMetaTableColumnResponseBody::ColumnList> getColumnList() { DARABONBA_PTR_GET(columnList_, vector<GetMetaTableColumnResponseBody::ColumnList>) };
    inline GetMetaTableColumnResponseBody& setColumnList(const vector<GetMetaTableColumnResponseBody::ColumnList> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
    inline GetMetaTableColumnResponseBody& setColumnList(vector<GetMetaTableColumnResponseBody::ColumnList> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetMetaTableColumnResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetMetaTableColumnResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaTableColumnResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetaTableColumnResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about fields in the table.
    shared_ptr<vector<GetMetaTableColumnResponseBody::ColumnList>> columnList_ {};
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
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
