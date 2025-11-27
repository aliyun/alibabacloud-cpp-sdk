// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEDBINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEDBINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class MigrateDBInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MigrationId, migrationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MigrationId, migrationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    MigrateDBInstanceResponseBody() = default ;
    MigrateDBInstanceResponseBody(const MigrateDBInstanceResponseBody &) = default ;
    MigrateDBInstanceResponseBody(MigrateDBInstanceResponseBody &&) = default ;
    MigrateDBInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateDBInstanceResponseBody() = default ;
    MigrateDBInstanceResponseBody& operator=(const MigrateDBInstanceResponseBody &) = default ;
    MigrateDBInstanceResponseBody& operator=(MigrateDBInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->migrationId_ == nullptr
        && return this->requestId_ == nullptr && return this->taskId_ == nullptr; };
    // migrationId Field Functions 
    bool hasMigrationId() const { return this->migrationId_ != nullptr;};
    void deleteMigrationId() { this->migrationId_ = nullptr;};
    inline int32_t migrationId() const { DARABONBA_PTR_GET_DEFAULT(migrationId_, 0) };
    inline MigrateDBInstanceResponseBody& setMigrationId(int32_t migrationId) { DARABONBA_PTR_SET_VALUE(migrationId_, migrationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MigrateDBInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline MigrateDBInstanceResponseBody& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The serial number of the task in the migration task queue. When the serial number becomes 0, the system starts the migration.
    std::shared_ptr<int32_t> migrationId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The task ID.
    std::shared_ptr<int32_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
