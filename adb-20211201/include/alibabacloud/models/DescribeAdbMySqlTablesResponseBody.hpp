// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLTABLESRESPONSEBODY_HPP_
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
  class DescribeAdbMySqlTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdbMySqlTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdbMySqlTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    DescribeAdbMySqlTablesResponseBody() = default ;
    DescribeAdbMySqlTablesResponseBody(const DescribeAdbMySqlTablesResponseBody &) = default ;
    DescribeAdbMySqlTablesResponseBody(DescribeAdbMySqlTablesResponseBody &&) = default ;
    DescribeAdbMySqlTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdbMySqlTablesResponseBody() = default ;
    DescribeAdbMySqlTablesResponseBody& operator=(const DescribeAdbMySqlTablesResponseBody &) = default ;
    DescribeAdbMySqlTablesResponseBody& operator=(DescribeAdbMySqlTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->requestId_ != nullptr && this->schema_ != nullptr && this->success_ != nullptr && this->tables_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAdbMySqlTablesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdbMySqlTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DescribeAdbMySqlTablesResponseBody& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAdbMySqlTablesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<string> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
    inline vector<string> tables() { DARABONBA_PTR_GET(tables_, vector<string>) };
    inline DescribeAdbMySqlTablesResponseBody& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeAdbMySqlTablesResponseBody& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
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
    // The names of tables.
    std::shared_ptr<vector<string>> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
