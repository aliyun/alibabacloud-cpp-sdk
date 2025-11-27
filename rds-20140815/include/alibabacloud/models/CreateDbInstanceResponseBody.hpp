// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateDBInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(DryRunResult, dryRunResult_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagResult, tagResult_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(DryRunResult, dryRunResult_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagResult, tagResult_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateDBInstanceResponseBody() = default ;
    CreateDBInstanceResponseBody(const CreateDBInstanceResponseBody &) = default ;
    CreateDBInstanceResponseBody(CreateDBInstanceResponseBody &&) = default ;
    CreateDBInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceResponseBody() = default ;
    CreateDBInstanceResponseBody& operator=(const CreateDBInstanceResponseBody &) = default ;
    CreateDBInstanceResponseBody& operator=(CreateDBInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionString_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->dryRun_ == nullptr && return this->dryRunResult_ == nullptr && return this->message_ == nullptr && return this->orderId_ == nullptr
        && return this->port_ == nullptr && return this->requestId_ == nullptr && return this->tagResult_ == nullptr && return this->taskId_ == nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline CreateDBInstanceResponseBody& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDBInstanceResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateDBInstanceResponseBody& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // dryRunResult Field Functions 
    bool hasDryRunResult() const { return this->dryRunResult_ != nullptr;};
    void deleteDryRunResult() { this->dryRunResult_ = nullptr;};
    inline bool dryRunResult() const { DARABONBA_PTR_GET_DEFAULT(dryRunResult_, false) };
    inline CreateDBInstanceResponseBody& setDryRunResult(bool dryRunResult) { DARABONBA_PTR_SET_VALUE(dryRunResult_, dryRunResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateDBInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateDBInstanceResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateDBInstanceResponseBody& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDBInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagResult Field Functions 
    bool hasTagResult() const { return this->tagResult_ != nullptr;};
    void deleteTagResult() { this->tagResult_ = nullptr;};
    inline bool tagResult() const { DARABONBA_PTR_GET_DEFAULT(tagResult_, false) };
    inline CreateDBInstanceResponseBody& setTagResult(bool tagResult) { DARABONBA_PTR_SET_VALUE(tagResult_, tagResult) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateDBInstanceResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The internal endpoint of the instance.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The instance ID. If the value of the **Amount** parameter is greater than **1**, more than one instance ID is returned. The number of instance IDs that are returned is the same as the value of the Amount parameter. The returned instance IDs are separated by commas (,).
    // 
    // For example, if the value of the **Amount** parameter is **3**, three instance IDs are returned. Examples: `rm-uf6wjk5*****1,rm-uf6wjk5*****2,rm-uf6wjk5*****3`
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Indicates that the system performed a dry run.
    // 
    // *   The value is fixed as **true**.
    // *   If the system does not perform a dry run, this parameter is not returned.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // Indicates whether the request passed the dry run. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > *   If the system does not perform a dry run, this parameter is not returned.
    // > *   If the request failed the dry run, an error message is returned.
    std::shared_ptr<bool> dryRunResult_ = nullptr;
    // The message that indicates whether multiple instances are created.
    // 
    // > The parameter is returned only when the value of the **Amount** parameter is greater than 1.
    std::shared_ptr<string> message_ = nullptr;
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The internal IP address and port number that are used to connect to the instance.
    std::shared_ptr<string> port_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the specified tag is added to the instance. Valid values:
    // 
    // *   **true**: The specified tag is added to the instance.
    // *   **false**: The specified tag fails to be added to the instance.
    // 
    // > If you do not add a tag to the instance, this parameter is not returned.
    std::shared_ptr<bool> tagResult_ = nullptr;
    // The ID of the task that is run to create multiple instances.
    // 
    // *   This parameter is returned only when the value of **Amount** is greater than 1.
    // *   The **TaskID** parameter cannot be used to query a task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
