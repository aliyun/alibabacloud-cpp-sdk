// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATESHARDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATESHARDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class ValidateShardTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateShardTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceTableName, sourceTableName_);
      DARABONBA_PTR_TO_JSON(TargetTableName, targetTableName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateShardTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceTableName, sourceTableName_);
      DARABONBA_PTR_FROM_JSON(TargetTableName, targetTableName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    ValidateShardTaskRequest() = default ;
    ValidateShardTaskRequest(const ValidateShardTaskRequest &) = default ;
    ValidateShardTaskRequest(ValidateShardTaskRequest &&) = default ;
    ValidateShardTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateShardTaskRequest() = default ;
    ValidateShardTaskRequest& operator=(const ValidateShardTaskRequest &) = default ;
    ValidateShardTaskRequest& operator=(ValidateShardTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->regionId_ != nullptr && this->sourceTableName_ != nullptr && this->targetTableName_ != nullptr && this->taskType_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ValidateShardTaskRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline ValidateShardTaskRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ValidateShardTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceTableName Field Functions 
    bool hasSourceTableName() const { return this->sourceTableName_ != nullptr;};
    void deleteSourceTableName() { this->sourceTableName_ = nullptr;};
    inline string sourceTableName() const { DARABONBA_PTR_GET_DEFAULT(sourceTableName_, "") };
    inline ValidateShardTaskRequest& setSourceTableName(string sourceTableName) { DARABONBA_PTR_SET_VALUE(sourceTableName_, sourceTableName) };


    // targetTableName Field Functions 
    bool hasTargetTableName() const { return this->targetTableName_ != nullptr;};
    void deleteTargetTableName() { this->targetTableName_ = nullptr;};
    inline string targetTableName() const { DARABONBA_PTR_GET_DEFAULT(targetTableName_, "") };
    inline ValidateShardTaskRequest& setTargetTableName(string targetTableName) { DARABONBA_PTR_SET_VALUE(targetTableName_, targetTableName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ValidateShardTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The ID of the region where the PolarDB-X 1.0 instance is created.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the table or table shard on which you want to perform the task.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceTableName_ = nullptr;
    // The name of the table or table shard on which you perform the task.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetTableName_ = nullptr;
    // The type of the task. Valid values:
    // 
    // *   **SINGLE_TO_SHARD**: converts a single table to a table shard.
    // *   **SHARD_TO_SINGLE**: converts a table shard to a single table.
    // *   **SHARD_TO_SHARD**: converts a table shard to another table shard.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
