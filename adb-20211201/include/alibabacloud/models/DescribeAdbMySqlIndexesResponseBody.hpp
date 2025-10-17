// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLINDEXESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLINDEXESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAdbMySqlIndexesResponseBodyIndexes.hpp>
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
    virtual bool empty() const override { return this->indexCount_ == nullptr
        && return this->indexes_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->schema_ == nullptr && return this->success_ == nullptr
        && return this->tableName_ == nullptr; };
    // indexCount Field Functions 
    bool hasIndexCount() const { return this->indexCount_ != nullptr;};
    void deleteIndexCount() { this->indexCount_ = nullptr;};
    inline int32_t indexCount() const { DARABONBA_PTR_GET_DEFAULT(indexCount_, 0) };
    inline DescribeAdbMySqlIndexesResponseBody& setIndexCount(int32_t indexCount) { DARABONBA_PTR_SET_VALUE(indexCount_, indexCount) };


    // indexes Field Functions 
    bool hasIndexes() const { return this->indexes_ != nullptr;};
    void deleteIndexes() { this->indexes_ = nullptr;};
    inline const vector<DescribeAdbMySqlIndexesResponseBodyIndexes> & indexes() const { DARABONBA_PTR_GET_CONST(indexes_, vector<DescribeAdbMySqlIndexesResponseBodyIndexes>) };
    inline vector<DescribeAdbMySqlIndexesResponseBodyIndexes> indexes() { DARABONBA_PTR_GET(indexes_, vector<DescribeAdbMySqlIndexesResponseBodyIndexes>) };
    inline DescribeAdbMySqlIndexesResponseBody& setIndexes(const vector<DescribeAdbMySqlIndexesResponseBodyIndexes> & indexes) { DARABONBA_PTR_SET_VALUE(indexes_, indexes) };
    inline DescribeAdbMySqlIndexesResponseBody& setIndexes(vector<DescribeAdbMySqlIndexesResponseBodyIndexes> && indexes) { DARABONBA_PTR_SET_RVALUE(indexes_, indexes) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAdbMySqlIndexesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdbMySqlIndexesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DescribeAdbMySqlIndexesResponseBody& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAdbMySqlIndexesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeAdbMySqlIndexesResponseBody& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The number of indexes.````
    std::shared_ptr<int32_t> indexCount_ = nullptr;
    // The queried indexes.
    std::shared_ptr<vector<DescribeAdbMySqlIndexesResponseBodyIndexes>> indexes_ = nullptr;
    // The returned message. Valid values:
    // 
    // *   If the request was successful, a success message is returned.****
    // *   If the request failed, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the database.
    // 
    // **
    // 
    // ****\\
    std::shared_ptr<string> schema_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
