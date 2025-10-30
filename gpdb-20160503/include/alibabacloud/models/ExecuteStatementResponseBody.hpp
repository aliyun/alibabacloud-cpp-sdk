// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESTATEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESTATEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExecuteStatementResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ExecuteStatementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteStatementResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretArn, secretArn_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteStatementResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretArn, secretArn_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ExecuteStatementResponseBody() = default ;
    ExecuteStatementResponseBody(const ExecuteStatementResponseBody &) = default ;
    ExecuteStatementResponseBody(ExecuteStatementResponseBody &&) = default ;
    ExecuteStatementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteStatementResponseBody() = default ;
    ExecuteStatementResponseBody& operator=(const ExecuteStatementResponseBody &) = default ;
    ExecuteStatementResponseBody& operator=(ExecuteStatementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->data_ == nullptr && return this->database_ == nullptr && return this->id_ == nullptr && return this->message_ == nullptr
        && return this->requestId_ == nullptr && return this->secretArn_ == nullptr && return this->status_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ExecuteStatementResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ExecuteStatementResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExecuteStatementResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ExecuteStatementResponseBodyData) };
    inline ExecuteStatementResponseBodyData data() { DARABONBA_PTR_GET(data_, ExecuteStatementResponseBodyData) };
    inline ExecuteStatementResponseBody& setData(const ExecuteStatementResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExecuteStatementResponseBody& setData(ExecuteStatementResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline ExecuteStatementResponseBody& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ExecuteStatementResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExecuteStatementResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteStatementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretArn Field Functions 
    bool hasSecretArn() const { return this->secretArn_ != nullptr;};
    void deleteSecretArn() { this->secretArn_ = nullptr;};
    inline string secretArn() const { DARABONBA_PTR_GET_DEFAULT(secretArn_, "") };
    inline ExecuteStatementResponseBody& setSecretArn(string secretArn) { DARABONBA_PTR_SET_VALUE(secretArn_, secretArn) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ExecuteStatementResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the SQL statements were created.
    std::shared_ptr<string> createdAt_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The returned results of the synchronous call.
    std::shared_ptr<ExecuteStatementResponseBodyData> data_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The ID of the job for asynchronously executing the SQL statements.
    std::shared_ptr<string> id_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ARN of the access credential for the created Data API account.
    std::shared_ptr<string> secretArn_ = nullptr;
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
