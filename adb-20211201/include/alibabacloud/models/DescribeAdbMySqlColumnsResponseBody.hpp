// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLCOLUMNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLCOLUMNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAdbMySqlColumnsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdbMySqlColumnsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnCount, columnCount_);
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdbMySqlColumnsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnCount, columnCount_);
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeAdbMySqlColumnsResponseBody() = default ;
    DescribeAdbMySqlColumnsResponseBody(const DescribeAdbMySqlColumnsResponseBody &) = default ;
    DescribeAdbMySqlColumnsResponseBody(DescribeAdbMySqlColumnsResponseBody &&) = default ;
    DescribeAdbMySqlColumnsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdbMySqlColumnsResponseBody() = default ;
    DescribeAdbMySqlColumnsResponseBody& operator=(const DescribeAdbMySqlColumnsResponseBody &) = default ;
    DescribeAdbMySqlColumnsResponseBody& operator=(DescribeAdbMySqlColumnsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Columns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Columns& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Columns& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Columns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Columns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Columns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The comments of the column.
      shared_ptr<string> comment_ {};
      // The name of the column.
      shared_ptr<string> name_ {};
      // The data type of the column.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->columnCount_ == nullptr
        && this->columns_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->schema_ == nullptr && this->success_ == nullptr
        && this->tableName_ == nullptr; };
    // columnCount Field Functions 
    bool hasColumnCount() const { return this->columnCount_ != nullptr;};
    void deleteColumnCount() { this->columnCount_ = nullptr;};
    inline int32_t getColumnCount() const { DARABONBA_PTR_GET_DEFAULT(columnCount_, 0) };
    inline DescribeAdbMySqlColumnsResponseBody& setColumnCount(int32_t columnCount) { DARABONBA_PTR_SET_VALUE(columnCount_, columnCount) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<DescribeAdbMySqlColumnsResponseBody::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<DescribeAdbMySqlColumnsResponseBody::Columns>) };
    inline vector<DescribeAdbMySqlColumnsResponseBody::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<DescribeAdbMySqlColumnsResponseBody::Columns>) };
    inline DescribeAdbMySqlColumnsResponseBody& setColumns(const vector<DescribeAdbMySqlColumnsResponseBody::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline DescribeAdbMySqlColumnsResponseBody& setColumns(vector<DescribeAdbMySqlColumnsResponseBody::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAdbMySqlColumnsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdbMySqlColumnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DescribeAdbMySqlColumnsResponseBody& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAdbMySqlColumnsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeAdbMySqlColumnsResponseBody& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The total number of columns.
    shared_ptr<int32_t> columnCount_ {};
    // Details of the columns.
    shared_ptr<vector<DescribeAdbMySqlColumnsResponseBody::Columns>> columns_ {};
    // The message returned for the operation. Valid values:
    // 
    // *   **Success** is returned if the operation is successful.
    // *   An error message is returned if the operation fails.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The name of the database.
    shared_ptr<string> schema_ {};
    // Indicates whether the operation is successful. Valid values:
    // 
    // *   **true**: The operation is successful.
    // *   **false**: The operation fails.
    shared_ptr<bool> success_ {};
    // The name of the table.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
