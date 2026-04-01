// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDTCSECURITYIPHOSTSFORSQLSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDTCSECURITYIPHOSTSFORSQLSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDTCSecurityIpHostsForSQLServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDTCSecurityIpHostsForSQLServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DTCSetResult, DTCSetResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDTCSecurityIpHostsForSQLServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DTCSetResult, DTCSetResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ModifyDTCSecurityIpHostsForSQLServerResponseBody() = default ;
    ModifyDTCSecurityIpHostsForSQLServerResponseBody(const ModifyDTCSecurityIpHostsForSQLServerResponseBody &) = default ;
    ModifyDTCSecurityIpHostsForSQLServerResponseBody(ModifyDTCSecurityIpHostsForSQLServerResponseBody &&) = default ;
    ModifyDTCSecurityIpHostsForSQLServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDTCSecurityIpHostsForSQLServerResponseBody() = default ;
    ModifyDTCSecurityIpHostsForSQLServerResponseBody& operator=(const ModifyDTCSecurityIpHostsForSQLServerResponseBody &) = default ;
    ModifyDTCSecurityIpHostsForSQLServerResponseBody& operator=(ModifyDTCSecurityIpHostsForSQLServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->DTCSetResult_ == nullptr && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDTCSecurityIpHostsForSQLServerResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DTCSetResult Field Functions 
    bool hasDTCSetResult() const { return this->DTCSetResult_ != nullptr;};
    void deleteDTCSetResult() { this->DTCSetResult_ = nullptr;};
    inline string getDTCSetResult() const { DARABONBA_PTR_GET_DEFAULT(DTCSetResult_, "") };
    inline ModifyDTCSecurityIpHostsForSQLServerResponseBody& setDTCSetResult(string DTCSetResult) { DARABONBA_PTR_SET_VALUE(DTCSetResult_, DTCSetResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDTCSecurityIpHostsForSQLServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifyDTCSecurityIpHostsForSQLServerResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The result of the IP address whitelist configuration. Valid values:
    // 
    // *   **Success**
    // *   **Fail**
    shared_ptr<string> DTCSetResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
