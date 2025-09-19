// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRECHECKDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRECHECKDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryPreCheckDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPreCheckDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceUuid, instanceUuid_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UniRegionId, uniRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPreCheckDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceUuid, instanceUuid_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UniRegionId, uniRegionId_);
    };
    QueryPreCheckDatabaseRequest() = default ;
    QueryPreCheckDatabaseRequest(const QueryPreCheckDatabaseRequest &) = default ;
    QueryPreCheckDatabaseRequest(QueryPreCheckDatabaseRequest &&) = default ;
    QueryPreCheckDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPreCheckDatabaseRequest() = default ;
    QueryPreCheckDatabaseRequest& operator=(const QueryPreCheckDatabaseRequest &) = default ;
    QueryPreCheckDatabaseRequest& operator=(QueryPreCheckDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceUuid_ != nullptr
        && this->taskId_ != nullptr && this->uniRegionId_ != nullptr; };
    // instanceUuid Field Functions 
    bool hasInstanceUuid() const { return this->instanceUuid_ != nullptr;};
    void deleteInstanceUuid() { this->instanceUuid_ = nullptr;};
    inline string instanceUuid() const { DARABONBA_PTR_GET_DEFAULT(instanceUuid_, "") };
    inline QueryPreCheckDatabaseRequest& setInstanceUuid(string instanceUuid) { DARABONBA_PTR_SET_VALUE(instanceUuid_, instanceUuid) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryPreCheckDatabaseRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // uniRegionId Field Functions 
    bool hasUniRegionId() const { return this->uniRegionId_ != nullptr;};
    void deleteUniRegionId() { this->uniRegionId_ = nullptr;};
    inline string uniRegionId() const { DARABONBA_PTR_GET_DEFAULT(uniRegionId_, "") };
    inline QueryPreCheckDatabaseRequest& setUniRegionId(string uniRegionId) { DARABONBA_PTR_SET_VALUE(uniRegionId_, uniRegionId) };


  protected:
    // The UUID of the agent that is used to back up the data of the database.
    // 
    // > You can call the [DescribeUniBackupDatabase](~~DescribeUniBackupDatabase~~) operation to query the UUID.
    std::shared_ptr<string> instanceUuid_ = nullptr;
    // The ID of the database precheck task.
    // 
    // > You can call the [StartPreCheckDatabase](~~StartPreCheckDatabase~~) operation to query the ID of the database precheck task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The region ID of the server that hosts the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> uniRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
