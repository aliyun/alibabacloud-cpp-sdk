// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACHECKCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACHECKCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListDataCheckConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCheckConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCheckConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListDataCheckConfigResponseBody() = default ;
    ListDataCheckConfigResponseBody(const ListDataCheckConfigResponseBody &) = default ;
    ListDataCheckConfigResponseBody(ListDataCheckConfigResponseBody &&) = default ;
    ListDataCheckConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCheckConfigResponseBody() = default ;
    ListDataCheckConfigResponseBody& operator=(const ListDataCheckConfigResponseBody &) = default ;
    ListDataCheckConfigResponseBody& operator=(ListDataCheckConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(algorithm, algorithm_);
        DARABONBA_PTR_TO_JSON(batchSize, batchSize_);
        DARABONBA_PTR_TO_JSON(checkType, checkType_);
        DARABONBA_PTR_TO_JSON(comparator, comparator_);
        DARABONBA_PTR_TO_JSON(extra, extra_);
        DARABONBA_PTR_TO_JSON(groupCountThreshold, groupCountThreshold_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(isFullTableCount, isFullTableCount_);
        DARABONBA_PTR_TO_JSON(isSkipped, isSkipped_);
        DARABONBA_PTR_TO_JSON(metricType, metricType_);
        DARABONBA_PTR_TO_JSON(sourceCheckAllColumn, sourceCheckAllColumn_);
        DARABONBA_PTR_TO_JSON(sourceColumns, sourceColumns_);
        DARABONBA_PTR_TO_JSON(sourceCompareKey, sourceCompareKey_);
        DARABONBA_PTR_TO_JSON(sourceDataSource, sourceDataSource_);
        DARABONBA_PTR_TO_JSON(sourceGroupClause, sourceGroupClause_);
        DARABONBA_PTR_TO_JSON(sourceHint, sourceHint_);
        DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
        DARABONBA_PTR_TO_JSON(sourcePartition, sourcePartition_);
        DARABONBA_PTR_TO_JSON(sourceSql, sourceSql_);
        DARABONBA_PTR_TO_JSON(sourceTable, sourceTable_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(sourceWhereClause, sourceWhereClause_);
        DARABONBA_PTR_TO_JSON(targetCheckAllColumn, targetCheckAllColumn_);
        DARABONBA_PTR_TO_JSON(targetColumns, targetColumns_);
        DARABONBA_PTR_TO_JSON(targetCompareKey, targetCompareKey_);
        DARABONBA_PTR_TO_JSON(targetDataSource, targetDataSource_);
        DARABONBA_PTR_TO_JSON(targetGroupClause, targetGroupClause_);
        DARABONBA_PTR_TO_JSON(targetHint, targetHint_);
        DARABONBA_PTR_TO_JSON(targetId, targetId_);
        DARABONBA_PTR_TO_JSON(targetPartition, targetPartition_);
        DARABONBA_PTR_TO_JSON(targetSql, targetSql_);
        DARABONBA_PTR_TO_JSON(targetTable, targetTable_);
        DARABONBA_PTR_TO_JSON(targetType, targetType_);
        DARABONBA_PTR_TO_JSON(targetWhereClause, targetWhereClause_);
        DARABONBA_PTR_TO_JSON(taskConfigInfo, taskConfigInfo_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(totalCountThreshold, totalCountThreshold_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(algorithm, algorithm_);
        DARABONBA_PTR_FROM_JSON(batchSize, batchSize_);
        DARABONBA_PTR_FROM_JSON(checkType, checkType_);
        DARABONBA_PTR_FROM_JSON(comparator, comparator_);
        DARABONBA_PTR_FROM_JSON(extra, extra_);
        DARABONBA_PTR_FROM_JSON(groupCountThreshold, groupCountThreshold_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(isFullTableCount, isFullTableCount_);
        DARABONBA_PTR_FROM_JSON(isSkipped, isSkipped_);
        DARABONBA_PTR_FROM_JSON(metricType, metricType_);
        DARABONBA_PTR_FROM_JSON(sourceCheckAllColumn, sourceCheckAllColumn_);
        DARABONBA_PTR_FROM_JSON(sourceColumns, sourceColumns_);
        DARABONBA_PTR_FROM_JSON(sourceCompareKey, sourceCompareKey_);
        DARABONBA_PTR_FROM_JSON(sourceDataSource, sourceDataSource_);
        DARABONBA_PTR_FROM_JSON(sourceGroupClause, sourceGroupClause_);
        DARABONBA_PTR_FROM_JSON(sourceHint, sourceHint_);
        DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
        DARABONBA_PTR_FROM_JSON(sourcePartition, sourcePartition_);
        DARABONBA_PTR_FROM_JSON(sourceSql, sourceSql_);
        DARABONBA_PTR_FROM_JSON(sourceTable, sourceTable_);
        DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(sourceWhereClause, sourceWhereClause_);
        DARABONBA_PTR_FROM_JSON(targetCheckAllColumn, targetCheckAllColumn_);
        DARABONBA_PTR_FROM_JSON(targetColumns, targetColumns_);
        DARABONBA_PTR_FROM_JSON(targetCompareKey, targetCompareKey_);
        DARABONBA_PTR_FROM_JSON(targetDataSource, targetDataSource_);
        DARABONBA_PTR_FROM_JSON(targetGroupClause, targetGroupClause_);
        DARABONBA_PTR_FROM_JSON(targetHint, targetHint_);
        DARABONBA_PTR_FROM_JSON(targetId, targetId_);
        DARABONBA_PTR_FROM_JSON(targetPartition, targetPartition_);
        DARABONBA_PTR_FROM_JSON(targetSql, targetSql_);
        DARABONBA_PTR_FROM_JSON(targetTable, targetTable_);
        DARABONBA_PTR_FROM_JSON(targetType, targetType_);
        DARABONBA_PTR_FROM_JSON(targetWhereClause, targetWhereClause_);
        DARABONBA_PTR_FROM_JSON(taskConfigInfo, taskConfigInfo_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(totalCountThreshold, totalCountThreshold_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->batchSize_ == nullptr && this->checkType_ == nullptr && this->comparator_ == nullptr && this->extra_ == nullptr && this->groupCountThreshold_ == nullptr
        && this->id_ == nullptr && this->isFullTableCount_ == nullptr && this->isSkipped_ == nullptr && this->metricType_ == nullptr && this->sourceCheckAllColumn_ == nullptr
        && this->sourceColumns_ == nullptr && this->sourceCompareKey_ == nullptr && this->sourceDataSource_ == nullptr && this->sourceGroupClause_ == nullptr && this->sourceHint_ == nullptr
        && this->sourceId_ == nullptr && this->sourcePartition_ == nullptr && this->sourceSql_ == nullptr && this->sourceTable_ == nullptr && this->sourceType_ == nullptr
        && this->sourceWhereClause_ == nullptr && this->targetCheckAllColumn_ == nullptr && this->targetColumns_ == nullptr && this->targetCompareKey_ == nullptr && this->targetDataSource_ == nullptr
        && this->targetGroupClause_ == nullptr && this->targetHint_ == nullptr && this->targetId_ == nullptr && this->targetPartition_ == nullptr && this->targetSql_ == nullptr
        && this->targetTable_ == nullptr && this->targetType_ == nullptr && this->targetWhereClause_ == nullptr && this->taskConfigInfo_ == nullptr && this->taskId_ == nullptr
        && this->totalCountThreshold_ == nullptr; };
      // algorithm Field Functions 
      bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
      void deleteAlgorithm() { this->algorithm_ = nullptr;};
      inline int32_t getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, 0) };
      inline Data& setAlgorithm(int32_t algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


      // batchSize Field Functions 
      bool hasBatchSize() const { return this->batchSize_ != nullptr;};
      void deleteBatchSize() { this->batchSize_ = nullptr;};
      inline int32_t getBatchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
      inline Data& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
      inline Data& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // comparator Field Functions 
      bool hasComparator() const { return this->comparator_ != nullptr;};
      void deleteComparator() { this->comparator_ = nullptr;};
      inline string getComparator() const { DARABONBA_PTR_GET_DEFAULT(comparator_, "") };
      inline Data& setComparator(string comparator) { DARABONBA_PTR_SET_VALUE(comparator_, comparator) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline Data& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // groupCountThreshold Field Functions 
      bool hasGroupCountThreshold() const { return this->groupCountThreshold_ != nullptr;};
      void deleteGroupCountThreshold() { this->groupCountThreshold_ = nullptr;};
      inline float getGroupCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(groupCountThreshold_, 0.0) };
      inline Data& setGroupCountThreshold(float groupCountThreshold) { DARABONBA_PTR_SET_VALUE(groupCountThreshold_, groupCountThreshold) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isFullTableCount Field Functions 
      bool hasIsFullTableCount() const { return this->isFullTableCount_ != nullptr;};
      void deleteIsFullTableCount() { this->isFullTableCount_ = nullptr;};
      inline int32_t getIsFullTableCount() const { DARABONBA_PTR_GET_DEFAULT(isFullTableCount_, 0) };
      inline Data& setIsFullTableCount(int32_t isFullTableCount) { DARABONBA_PTR_SET_VALUE(isFullTableCount_, isFullTableCount) };


      // isSkipped Field Functions 
      bool hasIsSkipped() const { return this->isSkipped_ != nullptr;};
      void deleteIsSkipped() { this->isSkipped_ = nullptr;};
      inline int32_t getIsSkipped() const { DARABONBA_PTR_GET_DEFAULT(isSkipped_, 0) };
      inline Data& setIsSkipped(int32_t isSkipped) { DARABONBA_PTR_SET_VALUE(isSkipped_, isSkipped) };


      // metricType Field Functions 
      bool hasMetricType() const { return this->metricType_ != nullptr;};
      void deleteMetricType() { this->metricType_ = nullptr;};
      inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
      inline Data& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


      // sourceCheckAllColumn Field Functions 
      bool hasSourceCheckAllColumn() const { return this->sourceCheckAllColumn_ != nullptr;};
      void deleteSourceCheckAllColumn() { this->sourceCheckAllColumn_ = nullptr;};
      inline int32_t getSourceCheckAllColumn() const { DARABONBA_PTR_GET_DEFAULT(sourceCheckAllColumn_, 0) };
      inline Data& setSourceCheckAllColumn(int32_t sourceCheckAllColumn) { DARABONBA_PTR_SET_VALUE(sourceCheckAllColumn_, sourceCheckAllColumn) };


      // sourceColumns Field Functions 
      bool hasSourceColumns() const { return this->sourceColumns_ != nullptr;};
      void deleteSourceColumns() { this->sourceColumns_ = nullptr;};
      inline string getSourceColumns() const { DARABONBA_PTR_GET_DEFAULT(sourceColumns_, "") };
      inline Data& setSourceColumns(string sourceColumns) { DARABONBA_PTR_SET_VALUE(sourceColumns_, sourceColumns) };


      // sourceCompareKey Field Functions 
      bool hasSourceCompareKey() const { return this->sourceCompareKey_ != nullptr;};
      void deleteSourceCompareKey() { this->sourceCompareKey_ = nullptr;};
      inline string getSourceCompareKey() const { DARABONBA_PTR_GET_DEFAULT(sourceCompareKey_, "") };
      inline Data& setSourceCompareKey(string sourceCompareKey) { DARABONBA_PTR_SET_VALUE(sourceCompareKey_, sourceCompareKey) };


      // sourceDataSource Field Functions 
      bool hasSourceDataSource() const { return this->sourceDataSource_ != nullptr;};
      void deleteSourceDataSource() { this->sourceDataSource_ = nullptr;};
      inline string getSourceDataSource() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSource_, "") };
      inline Data& setSourceDataSource(string sourceDataSource) { DARABONBA_PTR_SET_VALUE(sourceDataSource_, sourceDataSource) };


      // sourceGroupClause Field Functions 
      bool hasSourceGroupClause() const { return this->sourceGroupClause_ != nullptr;};
      void deleteSourceGroupClause() { this->sourceGroupClause_ = nullptr;};
      inline string getSourceGroupClause() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupClause_, "") };
      inline Data& setSourceGroupClause(string sourceGroupClause) { DARABONBA_PTR_SET_VALUE(sourceGroupClause_, sourceGroupClause) };


      // sourceHint Field Functions 
      bool hasSourceHint() const { return this->sourceHint_ != nullptr;};
      void deleteSourceHint() { this->sourceHint_ = nullptr;};
      inline string getSourceHint() const { DARABONBA_PTR_GET_DEFAULT(sourceHint_, "") };
      inline Data& setSourceHint(string sourceHint) { DARABONBA_PTR_SET_VALUE(sourceHint_, sourceHint) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline Data& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // sourcePartition Field Functions 
      bool hasSourcePartition() const { return this->sourcePartition_ != nullptr;};
      void deleteSourcePartition() { this->sourcePartition_ = nullptr;};
      inline string getSourcePartition() const { DARABONBA_PTR_GET_DEFAULT(sourcePartition_, "") };
      inline Data& setSourcePartition(string sourcePartition) { DARABONBA_PTR_SET_VALUE(sourcePartition_, sourcePartition) };


      // sourceSql Field Functions 
      bool hasSourceSql() const { return this->sourceSql_ != nullptr;};
      void deleteSourceSql() { this->sourceSql_ = nullptr;};
      inline string getSourceSql() const { DARABONBA_PTR_GET_DEFAULT(sourceSql_, "") };
      inline Data& setSourceSql(string sourceSql) { DARABONBA_PTR_SET_VALUE(sourceSql_, sourceSql) };


      // sourceTable Field Functions 
      bool hasSourceTable() const { return this->sourceTable_ != nullptr;};
      void deleteSourceTable() { this->sourceTable_ = nullptr;};
      inline string getSourceTable() const { DARABONBA_PTR_GET_DEFAULT(sourceTable_, "") };
      inline Data& setSourceTable(string sourceTable) { DARABONBA_PTR_SET_VALUE(sourceTable_, sourceTable) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Data& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // sourceWhereClause Field Functions 
      bool hasSourceWhereClause() const { return this->sourceWhereClause_ != nullptr;};
      void deleteSourceWhereClause() { this->sourceWhereClause_ = nullptr;};
      inline string getSourceWhereClause() const { DARABONBA_PTR_GET_DEFAULT(sourceWhereClause_, "") };
      inline Data& setSourceWhereClause(string sourceWhereClause) { DARABONBA_PTR_SET_VALUE(sourceWhereClause_, sourceWhereClause) };


      // targetCheckAllColumn Field Functions 
      bool hasTargetCheckAllColumn() const { return this->targetCheckAllColumn_ != nullptr;};
      void deleteTargetCheckAllColumn() { this->targetCheckAllColumn_ = nullptr;};
      inline int32_t getTargetCheckAllColumn() const { DARABONBA_PTR_GET_DEFAULT(targetCheckAllColumn_, 0) };
      inline Data& setTargetCheckAllColumn(int32_t targetCheckAllColumn) { DARABONBA_PTR_SET_VALUE(targetCheckAllColumn_, targetCheckAllColumn) };


      // targetColumns Field Functions 
      bool hasTargetColumns() const { return this->targetColumns_ != nullptr;};
      void deleteTargetColumns() { this->targetColumns_ = nullptr;};
      inline string getTargetColumns() const { DARABONBA_PTR_GET_DEFAULT(targetColumns_, "") };
      inline Data& setTargetColumns(string targetColumns) { DARABONBA_PTR_SET_VALUE(targetColumns_, targetColumns) };


      // targetCompareKey Field Functions 
      bool hasTargetCompareKey() const { return this->targetCompareKey_ != nullptr;};
      void deleteTargetCompareKey() { this->targetCompareKey_ = nullptr;};
      inline string getTargetCompareKey() const { DARABONBA_PTR_GET_DEFAULT(targetCompareKey_, "") };
      inline Data& setTargetCompareKey(string targetCompareKey) { DARABONBA_PTR_SET_VALUE(targetCompareKey_, targetCompareKey) };


      // targetDataSource Field Functions 
      bool hasTargetDataSource() const { return this->targetDataSource_ != nullptr;};
      void deleteTargetDataSource() { this->targetDataSource_ = nullptr;};
      inline string getTargetDataSource() const { DARABONBA_PTR_GET_DEFAULT(targetDataSource_, "") };
      inline Data& setTargetDataSource(string targetDataSource) { DARABONBA_PTR_SET_VALUE(targetDataSource_, targetDataSource) };


      // targetGroupClause Field Functions 
      bool hasTargetGroupClause() const { return this->targetGroupClause_ != nullptr;};
      void deleteTargetGroupClause() { this->targetGroupClause_ = nullptr;};
      inline string getTargetGroupClause() const { DARABONBA_PTR_GET_DEFAULT(targetGroupClause_, "") };
      inline Data& setTargetGroupClause(string targetGroupClause) { DARABONBA_PTR_SET_VALUE(targetGroupClause_, targetGroupClause) };


      // targetHint Field Functions 
      bool hasTargetHint() const { return this->targetHint_ != nullptr;};
      void deleteTargetHint() { this->targetHint_ = nullptr;};
      inline string getTargetHint() const { DARABONBA_PTR_GET_DEFAULT(targetHint_, "") };
      inline Data& setTargetHint(string targetHint) { DARABONBA_PTR_SET_VALUE(targetHint_, targetHint) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline Data& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetPartition Field Functions 
      bool hasTargetPartition() const { return this->targetPartition_ != nullptr;};
      void deleteTargetPartition() { this->targetPartition_ = nullptr;};
      inline string getTargetPartition() const { DARABONBA_PTR_GET_DEFAULT(targetPartition_, "") };
      inline Data& setTargetPartition(string targetPartition) { DARABONBA_PTR_SET_VALUE(targetPartition_, targetPartition) };


      // targetSql Field Functions 
      bool hasTargetSql() const { return this->targetSql_ != nullptr;};
      void deleteTargetSql() { this->targetSql_ = nullptr;};
      inline string getTargetSql() const { DARABONBA_PTR_GET_DEFAULT(targetSql_, "") };
      inline Data& setTargetSql(string targetSql) { DARABONBA_PTR_SET_VALUE(targetSql_, targetSql) };


      // targetTable Field Functions 
      bool hasTargetTable() const { return this->targetTable_ != nullptr;};
      void deleteTargetTable() { this->targetTable_ = nullptr;};
      inline string getTargetTable() const { DARABONBA_PTR_GET_DEFAULT(targetTable_, "") };
      inline Data& setTargetTable(string targetTable) { DARABONBA_PTR_SET_VALUE(targetTable_, targetTable) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Data& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // targetWhereClause Field Functions 
      bool hasTargetWhereClause() const { return this->targetWhereClause_ != nullptr;};
      void deleteTargetWhereClause() { this->targetWhereClause_ = nullptr;};
      inline string getTargetWhereClause() const { DARABONBA_PTR_GET_DEFAULT(targetWhereClause_, "") };
      inline Data& setTargetWhereClause(string targetWhereClause) { DARABONBA_PTR_SET_VALUE(targetWhereClause_, targetWhereClause) };


      // taskConfigInfo Field Functions 
      bool hasTaskConfigInfo() const { return this->taskConfigInfo_ != nullptr;};
      void deleteTaskConfigInfo() { this->taskConfigInfo_ = nullptr;};
      inline string getTaskConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(taskConfigInfo_, "") };
      inline Data& setTaskConfigInfo(string taskConfigInfo) { DARABONBA_PTR_SET_VALUE(taskConfigInfo_, taskConfigInfo) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // totalCountThreshold Field Functions 
      bool hasTotalCountThreshold() const { return this->totalCountThreshold_ != nullptr;};
      void deleteTotalCountThreshold() { this->totalCountThreshold_ = nullptr;};
      inline float getTotalCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(totalCountThreshold_, 0.0) };
      inline Data& setTotalCountThreshold(float totalCountThreshold) { DARABONBA_PTR_SET_VALUE(totalCountThreshold_, totalCountThreshold) };


    protected:
      shared_ptr<int32_t> algorithm_ {};
      shared_ptr<int32_t> batchSize_ {};
      shared_ptr<int32_t> checkType_ {};
      shared_ptr<string> comparator_ {};
      shared_ptr<string> extra_ {};
      shared_ptr<float> groupCountThreshold_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<int32_t> isFullTableCount_ {};
      shared_ptr<int32_t> isSkipped_ {};
      shared_ptr<string> metricType_ {};
      shared_ptr<int32_t> sourceCheckAllColumn_ {};
      shared_ptr<string> sourceColumns_ {};
      shared_ptr<string> sourceCompareKey_ {};
      shared_ptr<string> sourceDataSource_ {};
      shared_ptr<string> sourceGroupClause_ {};
      shared_ptr<string> sourceHint_ {};
      shared_ptr<string> sourceId_ {};
      shared_ptr<string> sourcePartition_ {};
      shared_ptr<string> sourceSql_ {};
      shared_ptr<string> sourceTable_ {};
      shared_ptr<string> sourceType_ {};
      shared_ptr<string> sourceWhereClause_ {};
      shared_ptr<int32_t> targetCheckAllColumn_ {};
      shared_ptr<string> targetColumns_ {};
      shared_ptr<string> targetCompareKey_ {};
      shared_ptr<string> targetDataSource_ {};
      shared_ptr<string> targetGroupClause_ {};
      shared_ptr<string> targetHint_ {};
      shared_ptr<string> targetId_ {};
      shared_ptr<string> targetPartition_ {};
      shared_ptr<string> targetSql_ {};
      shared_ptr<string> targetTable_ {};
      shared_ptr<string> targetType_ {};
      shared_ptr<string> targetWhereClause_ {};
      shared_ptr<string> taskConfigInfo_ {};
      shared_ptr<int64_t> taskId_ {};
      shared_ptr<float> totalCountThreshold_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDataCheckConfigResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDataCheckConfigResponseBody::Data>) };
    inline vector<ListDataCheckConfigResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDataCheckConfigResponseBody::Data>) };
    inline ListDataCheckConfigResponseBody& setData(const vector<ListDataCheckConfigResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataCheckConfigResponseBody& setData(vector<ListDataCheckConfigResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListDataCheckConfigResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListDataCheckConfigResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListDataCheckConfigResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataCheckConfigResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataCheckConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataCheckConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataCheckConfigResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDataCheckConfigResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
