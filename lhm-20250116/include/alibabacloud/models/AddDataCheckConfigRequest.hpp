// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATACHECKCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATACHECKCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class AddDataCheckConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataCheckConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(isFullTableCount, isFullTableCount_);
      DARABONBA_PTR_TO_JSON(sourceColumns, sourceColumns_);
      DARABONBA_PTR_TO_JSON(sourceGroupClause, sourceGroupClause_);
      DARABONBA_PTR_TO_JSON(sourceHint, sourceHint_);
      DARABONBA_PTR_TO_JSON(sourcePartition, sourcePartition_);
      DARABONBA_PTR_TO_JSON(sourceTable, sourceTable_);
      DARABONBA_PTR_TO_JSON(sourceWhereClause, sourceWhereClause_);
      DARABONBA_PTR_TO_JSON(targetColumns, targetColumns_);
      DARABONBA_PTR_TO_JSON(targetGroupClause, targetGroupClause_);
      DARABONBA_PTR_TO_JSON(targetHint, targetHint_);
      DARABONBA_PTR_TO_JSON(targetPartition, targetPartition_);
      DARABONBA_PTR_TO_JSON(targetTable, targetTable_);
      DARABONBA_PTR_TO_JSON(targetWhereClause, targetWhereClause_);
      DARABONBA_PTR_TO_JSON(taskConfigInfo, taskConfigInfo_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(totalCountThreshold, totalCountThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataCheckConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(isFullTableCount, isFullTableCount_);
      DARABONBA_PTR_FROM_JSON(sourceColumns, sourceColumns_);
      DARABONBA_PTR_FROM_JSON(sourceGroupClause, sourceGroupClause_);
      DARABONBA_PTR_FROM_JSON(sourceHint, sourceHint_);
      DARABONBA_PTR_FROM_JSON(sourcePartition, sourcePartition_);
      DARABONBA_PTR_FROM_JSON(sourceTable, sourceTable_);
      DARABONBA_PTR_FROM_JSON(sourceWhereClause, sourceWhereClause_);
      DARABONBA_PTR_FROM_JSON(targetColumns, targetColumns_);
      DARABONBA_PTR_FROM_JSON(targetGroupClause, targetGroupClause_);
      DARABONBA_PTR_FROM_JSON(targetHint, targetHint_);
      DARABONBA_PTR_FROM_JSON(targetPartition, targetPartition_);
      DARABONBA_PTR_FROM_JSON(targetTable, targetTable_);
      DARABONBA_PTR_FROM_JSON(targetWhereClause, targetWhereClause_);
      DARABONBA_PTR_FROM_JSON(taskConfigInfo, taskConfigInfo_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(totalCountThreshold, totalCountThreshold_);
    };
    AddDataCheckConfigRequest() = default ;
    AddDataCheckConfigRequest(const AddDataCheckConfigRequest &) = default ;
    AddDataCheckConfigRequest(AddDataCheckConfigRequest &&) = default ;
    AddDataCheckConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataCheckConfigRequest() = default ;
    AddDataCheckConfigRequest& operator=(const AddDataCheckConfigRequest &) = default ;
    AddDataCheckConfigRequest& operator=(AddDataCheckConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isFullTableCount_ == nullptr
        && this->sourceColumns_ == nullptr && this->sourceGroupClause_ == nullptr && this->sourceHint_ == nullptr && this->sourcePartition_ == nullptr && this->sourceTable_ == nullptr
        && this->sourceWhereClause_ == nullptr && this->targetColumns_ == nullptr && this->targetGroupClause_ == nullptr && this->targetHint_ == nullptr && this->targetPartition_ == nullptr
        && this->targetTable_ == nullptr && this->targetWhereClause_ == nullptr && this->taskConfigInfo_ == nullptr && this->taskId_ == nullptr && this->totalCountThreshold_ == nullptr; };
    // isFullTableCount Field Functions 
    bool hasIsFullTableCount() const { return this->isFullTableCount_ != nullptr;};
    void deleteIsFullTableCount() { this->isFullTableCount_ = nullptr;};
    inline int32_t getIsFullTableCount() const { DARABONBA_PTR_GET_DEFAULT(isFullTableCount_, 0) };
    inline AddDataCheckConfigRequest& setIsFullTableCount(int32_t isFullTableCount) { DARABONBA_PTR_SET_VALUE(isFullTableCount_, isFullTableCount) };


    // sourceColumns Field Functions 
    bool hasSourceColumns() const { return this->sourceColumns_ != nullptr;};
    void deleteSourceColumns() { this->sourceColumns_ = nullptr;};
    inline string getSourceColumns() const { DARABONBA_PTR_GET_DEFAULT(sourceColumns_, "") };
    inline AddDataCheckConfigRequest& setSourceColumns(string sourceColumns) { DARABONBA_PTR_SET_VALUE(sourceColumns_, sourceColumns) };


    // sourceGroupClause Field Functions 
    bool hasSourceGroupClause() const { return this->sourceGroupClause_ != nullptr;};
    void deleteSourceGroupClause() { this->sourceGroupClause_ = nullptr;};
    inline string getSourceGroupClause() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupClause_, "") };
    inline AddDataCheckConfigRequest& setSourceGroupClause(string sourceGroupClause) { DARABONBA_PTR_SET_VALUE(sourceGroupClause_, sourceGroupClause) };


    // sourceHint Field Functions 
    bool hasSourceHint() const { return this->sourceHint_ != nullptr;};
    void deleteSourceHint() { this->sourceHint_ = nullptr;};
    inline string getSourceHint() const { DARABONBA_PTR_GET_DEFAULT(sourceHint_, "") };
    inline AddDataCheckConfigRequest& setSourceHint(string sourceHint) { DARABONBA_PTR_SET_VALUE(sourceHint_, sourceHint) };


    // sourcePartition Field Functions 
    bool hasSourcePartition() const { return this->sourcePartition_ != nullptr;};
    void deleteSourcePartition() { this->sourcePartition_ = nullptr;};
    inline string getSourcePartition() const { DARABONBA_PTR_GET_DEFAULT(sourcePartition_, "") };
    inline AddDataCheckConfigRequest& setSourcePartition(string sourcePartition) { DARABONBA_PTR_SET_VALUE(sourcePartition_, sourcePartition) };


    // sourceTable Field Functions 
    bool hasSourceTable() const { return this->sourceTable_ != nullptr;};
    void deleteSourceTable() { this->sourceTable_ = nullptr;};
    inline string getSourceTable() const { DARABONBA_PTR_GET_DEFAULT(sourceTable_, "") };
    inline AddDataCheckConfigRequest& setSourceTable(string sourceTable) { DARABONBA_PTR_SET_VALUE(sourceTable_, sourceTable) };


    // sourceWhereClause Field Functions 
    bool hasSourceWhereClause() const { return this->sourceWhereClause_ != nullptr;};
    void deleteSourceWhereClause() { this->sourceWhereClause_ = nullptr;};
    inline string getSourceWhereClause() const { DARABONBA_PTR_GET_DEFAULT(sourceWhereClause_, "") };
    inline AddDataCheckConfigRequest& setSourceWhereClause(string sourceWhereClause) { DARABONBA_PTR_SET_VALUE(sourceWhereClause_, sourceWhereClause) };


    // targetColumns Field Functions 
    bool hasTargetColumns() const { return this->targetColumns_ != nullptr;};
    void deleteTargetColumns() { this->targetColumns_ = nullptr;};
    inline string getTargetColumns() const { DARABONBA_PTR_GET_DEFAULT(targetColumns_, "") };
    inline AddDataCheckConfigRequest& setTargetColumns(string targetColumns) { DARABONBA_PTR_SET_VALUE(targetColumns_, targetColumns) };


    // targetGroupClause Field Functions 
    bool hasTargetGroupClause() const { return this->targetGroupClause_ != nullptr;};
    void deleteTargetGroupClause() { this->targetGroupClause_ = nullptr;};
    inline string getTargetGroupClause() const { DARABONBA_PTR_GET_DEFAULT(targetGroupClause_, "") };
    inline AddDataCheckConfigRequest& setTargetGroupClause(string targetGroupClause) { DARABONBA_PTR_SET_VALUE(targetGroupClause_, targetGroupClause) };


    // targetHint Field Functions 
    bool hasTargetHint() const { return this->targetHint_ != nullptr;};
    void deleteTargetHint() { this->targetHint_ = nullptr;};
    inline string getTargetHint() const { DARABONBA_PTR_GET_DEFAULT(targetHint_, "") };
    inline AddDataCheckConfigRequest& setTargetHint(string targetHint) { DARABONBA_PTR_SET_VALUE(targetHint_, targetHint) };


    // targetPartition Field Functions 
    bool hasTargetPartition() const { return this->targetPartition_ != nullptr;};
    void deleteTargetPartition() { this->targetPartition_ = nullptr;};
    inline string getTargetPartition() const { DARABONBA_PTR_GET_DEFAULT(targetPartition_, "") };
    inline AddDataCheckConfigRequest& setTargetPartition(string targetPartition) { DARABONBA_PTR_SET_VALUE(targetPartition_, targetPartition) };


    // targetTable Field Functions 
    bool hasTargetTable() const { return this->targetTable_ != nullptr;};
    void deleteTargetTable() { this->targetTable_ = nullptr;};
    inline string getTargetTable() const { DARABONBA_PTR_GET_DEFAULT(targetTable_, "") };
    inline AddDataCheckConfigRequest& setTargetTable(string targetTable) { DARABONBA_PTR_SET_VALUE(targetTable_, targetTable) };


    // targetWhereClause Field Functions 
    bool hasTargetWhereClause() const { return this->targetWhereClause_ != nullptr;};
    void deleteTargetWhereClause() { this->targetWhereClause_ = nullptr;};
    inline string getTargetWhereClause() const { DARABONBA_PTR_GET_DEFAULT(targetWhereClause_, "") };
    inline AddDataCheckConfigRequest& setTargetWhereClause(string targetWhereClause) { DARABONBA_PTR_SET_VALUE(targetWhereClause_, targetWhereClause) };


    // taskConfigInfo Field Functions 
    bool hasTaskConfigInfo() const { return this->taskConfigInfo_ != nullptr;};
    void deleteTaskConfigInfo() { this->taskConfigInfo_ = nullptr;};
    inline string getTaskConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(taskConfigInfo_, "") };
    inline AddDataCheckConfigRequest& setTaskConfigInfo(string taskConfigInfo) { DARABONBA_PTR_SET_VALUE(taskConfigInfo_, taskConfigInfo) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline AddDataCheckConfigRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalCountThreshold Field Functions 
    bool hasTotalCountThreshold() const { return this->totalCountThreshold_ != nullptr;};
    void deleteTotalCountThreshold() { this->totalCountThreshold_ = nullptr;};
    inline float getTotalCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(totalCountThreshold_, 0.0) };
    inline AddDataCheckConfigRequest& setTotalCountThreshold(float totalCountThreshold) { DARABONBA_PTR_SET_VALUE(totalCountThreshold_, totalCountThreshold) };


  protected:
    // Specifies whether to perform full-table validation. Valid values:
    // 
    // - 0: partition-level comparison.
    // - 1: full-table comparison.
    shared_ptr<int32_t> isFullTableCount_ {};
    // The columns of the source table. You can specify multiple columns separated by commas (,).
    shared_ptr<string> sourceColumns_ {};
    // The GROUP condition of the source table.
    shared_ptr<string> sourceGroupClause_ {};
    // The hint for the source.
    shared_ptr<string> sourceHint_ {};
    // The partition of the source table.
    shared_ptr<string> sourcePartition_ {};
    // The name of the source table.
    shared_ptr<string> sourceTable_ {};
    // The WHERE condition of the source table.
    shared_ptr<string> sourceWhereClause_ {};
    // The columns of the target table. You can specify multiple columns separated by commas (,).
    shared_ptr<string> targetColumns_ {};
    // The GROUP condition of the target table.
    shared_ptr<string> targetGroupClause_ {};
    // The hint for the target.
    shared_ptr<string> targetHint_ {};
    // The partition of the target table.
    shared_ptr<string> targetPartition_ {};
    // The name of the target table.
    shared_ptr<string> targetTable_ {};
    // The WHERE condition of the target table.
    shared_ptr<string> targetWhereClause_ {};
    // The batch table configurations for same-pattern creation (`taskMode=1`). Separate multiple configurations with a line break (`
    // `).
    shared_ptr<string> taskConfigInfo_ {};
    // The ID of the validation task.
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
    // The total data volume comparison threshold.
    shared_ptr<float> totalCountThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
