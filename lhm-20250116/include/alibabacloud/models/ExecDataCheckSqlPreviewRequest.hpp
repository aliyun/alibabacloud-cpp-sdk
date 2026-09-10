// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECDATACHECKSQLPREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECDATACHECKSQLPREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ExecDataCheckSqlPreviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecDataCheckSqlPreviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(checkColumn, checkColumn_);
      DARABONBA_PTR_TO_JSON(dataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(engineId, engineId_);
      DARABONBA_PTR_TO_JSON(fullTableName, fullTableName_);
      DARABONBA_PTR_TO_JSON(partitionCondition, partitionCondition_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(whereClause, whereClause_);
    };
    friend void from_json(const Darabonba::Json& j, ExecDataCheckSqlPreviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(checkColumn, checkColumn_);
      DARABONBA_PTR_FROM_JSON(dataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(engineId, engineId_);
      DARABONBA_PTR_FROM_JSON(fullTableName, fullTableName_);
      DARABONBA_PTR_FROM_JSON(partitionCondition, partitionCondition_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(whereClause, whereClause_);
    };
    ExecDataCheckSqlPreviewRequest() = default ;
    ExecDataCheckSqlPreviewRequest(const ExecDataCheckSqlPreviewRequest &) = default ;
    ExecDataCheckSqlPreviewRequest(ExecDataCheckSqlPreviewRequest &&) = default ;
    ExecDataCheckSqlPreviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecDataCheckSqlPreviewRequest() = default ;
    ExecDataCheckSqlPreviewRequest& operator=(const ExecDataCheckSqlPreviewRequest &) = default ;
    ExecDataCheckSqlPreviewRequest& operator=(ExecDataCheckSqlPreviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkColumn_ == nullptr
        && this->dataSourceId_ == nullptr && this->engineId_ == nullptr && this->fullTableName_ == nullptr && this->partitionCondition_ == nullptr && this->taskId_ == nullptr
        && this->whereClause_ == nullptr; };
    // checkColumn Field Functions 
    bool hasCheckColumn() const { return this->checkColumn_ != nullptr;};
    void deleteCheckColumn() { this->checkColumn_ = nullptr;};
    inline string getCheckColumn() const { DARABONBA_PTR_GET_DEFAULT(checkColumn_, "") };
    inline ExecDataCheckSqlPreviewRequest& setCheckColumn(string checkColumn) { DARABONBA_PTR_SET_VALUE(checkColumn_, checkColumn) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline ExecDataCheckSqlPreviewRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // engineId Field Functions 
    bool hasEngineId() const { return this->engineId_ != nullptr;};
    void deleteEngineId() { this->engineId_ = nullptr;};
    inline string getEngineId() const { DARABONBA_PTR_GET_DEFAULT(engineId_, "") };
    inline ExecDataCheckSqlPreviewRequest& setEngineId(string engineId) { DARABONBA_PTR_SET_VALUE(engineId_, engineId) };


    // fullTableName Field Functions 
    bool hasFullTableName() const { return this->fullTableName_ != nullptr;};
    void deleteFullTableName() { this->fullTableName_ = nullptr;};
    inline string getFullTableName() const { DARABONBA_PTR_GET_DEFAULT(fullTableName_, "") };
    inline ExecDataCheckSqlPreviewRequest& setFullTableName(string fullTableName) { DARABONBA_PTR_SET_VALUE(fullTableName_, fullTableName) };


    // partitionCondition Field Functions 
    bool hasPartitionCondition() const { return this->partitionCondition_ != nullptr;};
    void deletePartitionCondition() { this->partitionCondition_ = nullptr;};
    inline string getPartitionCondition() const { DARABONBA_PTR_GET_DEFAULT(partitionCondition_, "") };
    inline ExecDataCheckSqlPreviewRequest& setPartitionCondition(string partitionCondition) { DARABONBA_PTR_SET_VALUE(partitionCondition_, partitionCondition) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ExecDataCheckSqlPreviewRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // whereClause Field Functions 
    bool hasWhereClause() const { return this->whereClause_ != nullptr;};
    void deleteWhereClause() { this->whereClause_ = nullptr;};
    inline string getWhereClause() const { DARABONBA_PTR_GET_DEFAULT(whereClause_, "") };
    inline ExecDataCheckSqlPreviewRequest& setWhereClause(string whereClause) { DARABONBA_PTR_SET_VALUE(whereClause_, whereClause) };


  protected:
    // The columns to check.
    shared_ptr<string> checkColumn_ {};
    // The ID of the data source.
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceId_ {};
    // The ID of the check engine. Used in Spark scenarios.
    shared_ptr<string> engineId_ {};
    // The name of the table to check, in the format `schema.table`.
    // 
    // This parameter is required.
    shared_ptr<string> fullTableName_ {};
    // The partition condition.
    shared_ptr<string> partitionCondition_ {};
    // The ID of the check task.
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
    // The WHERE condition.
    shared_ptr<string> whereClause_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
