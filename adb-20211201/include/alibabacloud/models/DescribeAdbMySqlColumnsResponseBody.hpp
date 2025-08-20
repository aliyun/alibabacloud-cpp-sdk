// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLCOLUMNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLCOLUMNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAdbMySqlColumnsResponseBodyColumns.hpp>
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
    virtual bool empty() const override { this->columnCount_ != nullptr
        && this->columns_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->schema_ != nullptr && this->success_ != nullptr
        && this->tableName_ != nullptr; };
    // columnCount Field Functions 
    bool hasColumnCount() const { return this->columnCount_ != nullptr;};
    void deleteColumnCount() { this->columnCount_ = nullptr;};
    inline int32_t columnCount() const { DARABONBA_PTR_GET_DEFAULT(columnCount_, 0) };
    inline DescribeAdbMySqlColumnsResponseBody& setColumnCount(int32_t columnCount) { DARABONBA_PTR_SET_VALUE(columnCount_, columnCount) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<DescribeAdbMySqlColumnsResponseBodyColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<DescribeAdbMySqlColumnsResponseBodyColumns>) };
    inline vector<DescribeAdbMySqlColumnsResponseBodyColumns> columns() { DARABONBA_PTR_GET(columns_, vector<DescribeAdbMySqlColumnsResponseBodyColumns>) };
    inline DescribeAdbMySqlColumnsResponseBody& setColumns(const vector<DescribeAdbMySqlColumnsResponseBodyColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline DescribeAdbMySqlColumnsResponseBody& setColumns(vector<DescribeAdbMySqlColumnsResponseBodyColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAdbMySqlColumnsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdbMySqlColumnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DescribeAdbMySqlColumnsResponseBody& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAdbMySqlColumnsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeAdbMySqlColumnsResponseBody& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The total number of columns.
    std::shared_ptr<int32_t> columnCount_ = nullptr;
    // Details of the columns.
    std::shared_ptr<vector<DescribeAdbMySqlColumnsResponseBodyColumns>> columns_ = nullptr;
    // The message returned for the operation. Valid values:
    // 
    // *   **Success** is returned if the operation is successful.
    // *   An error message is returned if the operation fails.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schema_ = nullptr;
    // Indicates whether the operation is successful. Valid values:
    // 
    // *   **true**: The operation is successful.
    // *   **false**: The operation fails.
    std::shared_ptr<bool> success_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
