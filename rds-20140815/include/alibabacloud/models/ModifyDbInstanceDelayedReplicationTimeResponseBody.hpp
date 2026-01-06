// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCEDELAYEDREPLICATIONTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCEDELAYEDREPLICATIONTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceDelayedReplicationTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceDelayedReplicationTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ReadSQLReplicationTime, readSQLReplicationTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceDelayedReplicationTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ReadSQLReplicationTime, readSQLReplicationTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ModifyDBInstanceDelayedReplicationTimeResponseBody() = default ;
    ModifyDBInstanceDelayedReplicationTimeResponseBody(const ModifyDBInstanceDelayedReplicationTimeResponseBody &) = default ;
    ModifyDBInstanceDelayedReplicationTimeResponseBody(ModifyDBInstanceDelayedReplicationTimeResponseBody &&) = default ;
    ModifyDBInstanceDelayedReplicationTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceDelayedReplicationTimeResponseBody() = default ;
    ModifyDBInstanceDelayedReplicationTimeResponseBody& operator=(const ModifyDBInstanceDelayedReplicationTimeResponseBody &) = default ;
    ModifyDBInstanceDelayedReplicationTimeResponseBody& operator=(ModifyDBInstanceDelayedReplicationTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->readSQLReplicationTime_ == nullptr && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceDelayedReplicationTimeResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // readSQLReplicationTime Field Functions 
    bool hasReadSQLReplicationTime() const { return this->readSQLReplicationTime_ != nullptr;};
    void deleteReadSQLReplicationTime() { this->readSQLReplicationTime_ = nullptr;};
    inline string getReadSQLReplicationTime() const { DARABONBA_PTR_GET_DEFAULT(readSQLReplicationTime_, "") };
    inline ModifyDBInstanceDelayedReplicationTimeResponseBody& setReadSQLReplicationTime(string readSQLReplicationTime) { DARABONBA_PTR_SET_VALUE(readSQLReplicationTime_, readSQLReplicationTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDBInstanceDelayedReplicationTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifyDBInstanceDelayedReplicationTimeResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The replication latency of the read-only instance. Unit: seconds.
    shared_ptr<string> readSQLReplicationTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
