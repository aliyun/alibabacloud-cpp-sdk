// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDBINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTDBINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class StartDBInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MigrationId, migrationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, StartDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MigrationId, migrationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    StartDBInstanceResponseBody() = default ;
    StartDBInstanceResponseBody(const StartDBInstanceResponseBody &) = default ;
    StartDBInstanceResponseBody(StartDBInstanceResponseBody &&) = default ;
    StartDBInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDBInstanceResponseBody() = default ;
    StartDBInstanceResponseBody& operator=(const StartDBInstanceResponseBody &) = default ;
    StartDBInstanceResponseBody& operator=(StartDBInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->migrationId_ == nullptr
        && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // migrationId Field Functions 
    bool hasMigrationId() const { return this->migrationId_ != nullptr;};
    void deleteMigrationId() { this->migrationId_ = nullptr;};
    inline int32_t getMigrationId() const { DARABONBA_PTR_GET_DEFAULT(migrationId_, 0) };
    inline StartDBInstanceResponseBody& setMigrationId(int32_t migrationId) { DARABONBA_PTR_SET_VALUE(migrationId_, migrationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartDBInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline StartDBInstanceResponseBody& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The migration task ID. This parameter is available only for instances that are created in dedicated clusters.
    shared_ptr<int32_t> migrationId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the task.
    shared_ptr<int32_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
