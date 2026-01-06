// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLINDEXESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLINDEXESRESPONSEBODY_HPP_
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
  class DescribeAdbMySqlIndexesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdbMySqlIndexesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IndexCount, indexCount_);
      DARABONBA_PTR_TO_JSON(Indexes, indexes_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdbMySqlIndexesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexCount, indexCount_);
      DARABONBA_PTR_FROM_JSON(Indexes, indexes_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeAdbMySqlIndexesResponseBody() = default ;
    DescribeAdbMySqlIndexesResponseBody(const DescribeAdbMySqlIndexesResponseBody &) = default ;
    DescribeAdbMySqlIndexesResponseBody(DescribeAdbMySqlIndexesResponseBody &&) = default ;
    DescribeAdbMySqlIndexesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdbMySqlIndexesResponseBody() = default ;
    DescribeAdbMySqlIndexesResponseBody& operator=(const DescribeAdbMySqlIndexesResponseBody &) = default ;
    DescribeAdbMySqlIndexesResponseBody& operator=(DescribeAdbMySqlIndexesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Indexes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Indexes& obj) { 
        DARABONBA_PTR_TO_JSON(Column, column_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Indexes& obj) { 
        DARABONBA_PTR_FROM_JSON(Column, column_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Indexes() = default ;
      Indexes(const Indexes &) = default ;
      Indexes(Indexes &&) = default ;
      Indexes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Indexes() = default ;
      Indexes& operator=(const Indexes &) = default ;
      Indexes& operator=(Indexes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->column_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
      // column Field Functions 
      bool hasColumn() const { return this->column_ != nullptr;};
      void deleteColumn() { this->column_ = nullptr;};
      inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
      inline Indexes& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Indexes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Indexes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The name of the column.
      shared_ptr<string> column_ {};
      // The name of the index.
      shared_ptr<string> name_ {};
      // The index type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->indexCount_ == nullptr
        && this->indexes_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->schema_ == nullptr && this->success_ == nullptr
        && this->tableName_ == nullptr; };
    // indexCount Field Functions 
    bool hasIndexCount() const { return this->indexCount_ != nullptr;};
    void deleteIndexCount() { this->indexCount_ = nullptr;};
    inline int32_t getIndexCount() const { DARABONBA_PTR_GET_DEFAULT(indexCount_, 0) };
    inline DescribeAdbMySqlIndexesResponseBody& setIndexCount(int32_t indexCount) { DARABONBA_PTR_SET_VALUE(indexCount_, indexCount) };


    // indexes Field Functions 
    bool hasIndexes() const { return this->indexes_ != nullptr;};
    void deleteIndexes() { this->indexes_ = nullptr;};
    inline const vector<DescribeAdbMySqlIndexesResponseBody::Indexes> & getIndexes() const { DARABONBA_PTR_GET_CONST(indexes_, vector<DescribeAdbMySqlIndexesResponseBody::Indexes>) };
    inline vector<DescribeAdbMySqlIndexesResponseBody::Indexes> getIndexes() { DARABONBA_PTR_GET(indexes_, vector<DescribeAdbMySqlIndexesResponseBody::Indexes>) };
    inline DescribeAdbMySqlIndexesResponseBody& setIndexes(const vector<DescribeAdbMySqlIndexesResponseBody::Indexes> & indexes) { DARABONBA_PTR_SET_VALUE(indexes_, indexes) };
    inline DescribeAdbMySqlIndexesResponseBody& setIndexes(vector<DescribeAdbMySqlIndexesResponseBody::Indexes> && indexes) { DARABONBA_PTR_SET_RVALUE(indexes_, indexes) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAdbMySqlIndexesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdbMySqlIndexesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DescribeAdbMySqlIndexesResponseBody& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAdbMySqlIndexesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeAdbMySqlIndexesResponseBody& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The number of indexes.````
    shared_ptr<int32_t> indexCount_ {};
    // The queried indexes.
    shared_ptr<vector<DescribeAdbMySqlIndexesResponseBody::Indexes>> indexes_ {};
    // The returned message. Valid values:
    // 
    // *   If the request was successful, a success message is returned.****
    // *   If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The name of the database.
    // 
    // **
    // 
    // ****\\
    shared_ptr<string> schema_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // The name of the table.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
