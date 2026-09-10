// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACHECKREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACHECKREPORTRESPONSEBODY_HPP_
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
  class ListDataCheckReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCheckReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCheckReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListDataCheckReportResponseBody() = default ;
    ListDataCheckReportResponseBody(const ListDataCheckReportResponseBody &) = default ;
    ListDataCheckReportResponseBody(ListDataCheckReportResponseBody &&) = default ;
    ListDataCheckReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCheckReportResponseBody() = default ;
    ListDataCheckReportResponseBody& operator=(const ListDataCheckReportResponseBody &) = default ;
    ListDataCheckReportResponseBody& operator=(ListDataCheckReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(batchId, batchId_);
        DARABONBA_PTR_TO_JSON(checkColumCount, checkColumCount_);
        DARABONBA_PTR_TO_JSON(checkResult, checkResult_);
        DARABONBA_PTR_TO_JSON(compareRowCount, compareRowCount_);
        DARABONBA_PTR_TO_JSON(completionRate, completionRate_);
        DARABONBA_PTR_TO_JSON(diffRate, diffRate_);
        DARABONBA_PTR_TO_JSON(dstCompareColumn, dstCompareColumn_);
        DARABONBA_PTR_TO_JSON(dstHint, dstHint_);
        DARABONBA_PTR_TO_JSON(dstMetricName, dstMetricName_);
        DARABONBA_PTR_TO_JSON(dstSqlList, dstSqlList_);
        DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(execTime, execTime_);
        DARABONBA_PTR_TO_JSON(expDiffCount, expDiffCount_);
        DARABONBA_PTR_TO_JSON(finishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(isSkipped, isSkipped_);
        DARABONBA_PTR_TO_JSON(jobId, jobId_);
        DARABONBA_PTR_TO_JSON(jobStatus, jobStatus_);
        DARABONBA_PTR_TO_JSON(metricColumCount, metricColumCount_);
        DARABONBA_PTR_TO_JSON(metricPassColumCount, metricPassColumCount_);
        DARABONBA_PTR_TO_JSON(onlyDstCount, onlyDstCount_);
        DARABONBA_PTR_TO_JSON(onlySrcCount, onlySrcCount_);
        DARABONBA_PTR_TO_JSON(passColumCount, passColumCount_);
        DARABONBA_PTR_TO_JSON(realDiffCount, realDiffCount_);
        DARABONBA_PTR_TO_JSON(realSameCount, realSameCount_);
        DARABONBA_PTR_TO_JSON(resultId, resultId_);
        DARABONBA_PTR_TO_JSON(sourceColumn, sourceColumn_);
        DARABONBA_PTR_TO_JSON(sourceCount, sourceCount_);
        DARABONBA_PTR_TO_JSON(sourceDataSource, sourceDataSource_);
        DARABONBA_PTR_TO_JSON(sourceError, sourceError_);
        DARABONBA_PTR_TO_JSON(sourceGroupClause, sourceGroupClause_);
        DARABONBA_PTR_TO_JSON(sourcePartition, sourcePartition_);
        DARABONBA_PTR_TO_JSON(sourceTable, sourceTable_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(sourceWhereClause, sourceWhereClause_);
        DARABONBA_PTR_TO_JSON(srcCompareColumn, srcCompareColumn_);
        DARABONBA_PTR_TO_JSON(srcHint, srcHint_);
        DARABONBA_PTR_TO_JSON(srcMetricName, srcMetricName_);
        DARABONBA_PTR_TO_JSON(srcSqlList, srcSqlList_);
        DARABONBA_PTR_TO_JSON(targetColumn, targetColumn_);
        DARABONBA_PTR_TO_JSON(targetCount, targetCount_);
        DARABONBA_PTR_TO_JSON(targetDataSource, targetDataSource_);
        DARABONBA_PTR_TO_JSON(targetError, targetError_);
        DARABONBA_PTR_TO_JSON(targetGroupClause, targetGroupClause_);
        DARABONBA_PTR_TO_JSON(targetPartition, targetPartition_);
        DARABONBA_PTR_TO_JSON(targetTable, targetTable_);
        DARABONBA_PTR_TO_JSON(targetType, targetType_);
        DARABONBA_PTR_TO_JSON(targetWhereClause, targetWhereClause_);
        DARABONBA_PTR_TO_JSON(taskConfigId, taskConfigId_);
        DARABONBA_PTR_TO_JSON(templateName, templateName_);
        DARABONBA_PTR_TO_JSON(threshold, threshold_);
        DARABONBA_PTR_TO_JSON(totalCountThreshold, totalCountThreshold_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(batchId, batchId_);
        DARABONBA_PTR_FROM_JSON(checkColumCount, checkColumCount_);
        DARABONBA_PTR_FROM_JSON(checkResult, checkResult_);
        DARABONBA_PTR_FROM_JSON(compareRowCount, compareRowCount_);
        DARABONBA_PTR_FROM_JSON(completionRate, completionRate_);
        DARABONBA_PTR_FROM_JSON(diffRate, diffRate_);
        DARABONBA_PTR_FROM_JSON(dstCompareColumn, dstCompareColumn_);
        DARABONBA_PTR_FROM_JSON(dstHint, dstHint_);
        DARABONBA_PTR_FROM_JSON(dstMetricName, dstMetricName_);
        DARABONBA_PTR_FROM_JSON(dstSqlList, dstSqlList_);
        DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(execTime, execTime_);
        DARABONBA_PTR_FROM_JSON(expDiffCount, expDiffCount_);
        DARABONBA_PTR_FROM_JSON(finishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(isSkipped, isSkipped_);
        DARABONBA_PTR_FROM_JSON(jobId, jobId_);
        DARABONBA_PTR_FROM_JSON(jobStatus, jobStatus_);
        DARABONBA_PTR_FROM_JSON(metricColumCount, metricColumCount_);
        DARABONBA_PTR_FROM_JSON(metricPassColumCount, metricPassColumCount_);
        DARABONBA_PTR_FROM_JSON(onlyDstCount, onlyDstCount_);
        DARABONBA_PTR_FROM_JSON(onlySrcCount, onlySrcCount_);
        DARABONBA_PTR_FROM_JSON(passColumCount, passColumCount_);
        DARABONBA_PTR_FROM_JSON(realDiffCount, realDiffCount_);
        DARABONBA_PTR_FROM_JSON(realSameCount, realSameCount_);
        DARABONBA_PTR_FROM_JSON(resultId, resultId_);
        DARABONBA_PTR_FROM_JSON(sourceColumn, sourceColumn_);
        DARABONBA_PTR_FROM_JSON(sourceCount, sourceCount_);
        DARABONBA_PTR_FROM_JSON(sourceDataSource, sourceDataSource_);
        DARABONBA_PTR_FROM_JSON(sourceError, sourceError_);
        DARABONBA_PTR_FROM_JSON(sourceGroupClause, sourceGroupClause_);
        DARABONBA_PTR_FROM_JSON(sourcePartition, sourcePartition_);
        DARABONBA_PTR_FROM_JSON(sourceTable, sourceTable_);
        DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(sourceWhereClause, sourceWhereClause_);
        DARABONBA_PTR_FROM_JSON(srcCompareColumn, srcCompareColumn_);
        DARABONBA_PTR_FROM_JSON(srcHint, srcHint_);
        DARABONBA_PTR_FROM_JSON(srcMetricName, srcMetricName_);
        DARABONBA_PTR_FROM_JSON(srcSqlList, srcSqlList_);
        DARABONBA_PTR_FROM_JSON(targetColumn, targetColumn_);
        DARABONBA_PTR_FROM_JSON(targetCount, targetCount_);
        DARABONBA_PTR_FROM_JSON(targetDataSource, targetDataSource_);
        DARABONBA_PTR_FROM_JSON(targetError, targetError_);
        DARABONBA_PTR_FROM_JSON(targetGroupClause, targetGroupClause_);
        DARABONBA_PTR_FROM_JSON(targetPartition, targetPartition_);
        DARABONBA_PTR_FROM_JSON(targetTable, targetTable_);
        DARABONBA_PTR_FROM_JSON(targetType, targetType_);
        DARABONBA_PTR_FROM_JSON(targetWhereClause, targetWhereClause_);
        DARABONBA_PTR_FROM_JSON(taskConfigId, taskConfigId_);
        DARABONBA_PTR_FROM_JSON(templateName, templateName_);
        DARABONBA_PTR_FROM_JSON(threshold, threshold_);
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
      virtual bool empty() const override { return this->batchId_ == nullptr
        && this->checkColumCount_ == nullptr && this->checkResult_ == nullptr && this->compareRowCount_ == nullptr && this->completionRate_ == nullptr && this->diffRate_ == nullptr
        && this->dstCompareColumn_ == nullptr && this->dstHint_ == nullptr && this->dstMetricName_ == nullptr && this->dstSqlList_ == nullptr && this->errorMsg_ == nullptr
        && this->execTime_ == nullptr && this->expDiffCount_ == nullptr && this->finishTime_ == nullptr && this->isSkipped_ == nullptr && this->jobId_ == nullptr
        && this->jobStatus_ == nullptr && this->metricColumCount_ == nullptr && this->metricPassColumCount_ == nullptr && this->onlyDstCount_ == nullptr && this->onlySrcCount_ == nullptr
        && this->passColumCount_ == nullptr && this->realDiffCount_ == nullptr && this->realSameCount_ == nullptr && this->resultId_ == nullptr && this->sourceColumn_ == nullptr
        && this->sourceCount_ == nullptr && this->sourceDataSource_ == nullptr && this->sourceError_ == nullptr && this->sourceGroupClause_ == nullptr && this->sourcePartition_ == nullptr
        && this->sourceTable_ == nullptr && this->sourceType_ == nullptr && this->sourceWhereClause_ == nullptr && this->srcCompareColumn_ == nullptr && this->srcHint_ == nullptr
        && this->srcMetricName_ == nullptr && this->srcSqlList_ == nullptr && this->targetColumn_ == nullptr && this->targetCount_ == nullptr && this->targetDataSource_ == nullptr
        && this->targetError_ == nullptr && this->targetGroupClause_ == nullptr && this->targetPartition_ == nullptr && this->targetTable_ == nullptr && this->targetType_ == nullptr
        && this->targetWhereClause_ == nullptr && this->taskConfigId_ == nullptr && this->templateName_ == nullptr && this->threshold_ == nullptr && this->totalCountThreshold_ == nullptr; };
      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
      inline Data& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // checkColumCount Field Functions 
      bool hasCheckColumCount() const { return this->checkColumCount_ != nullptr;};
      void deleteCheckColumCount() { this->checkColumCount_ = nullptr;};
      inline int64_t getCheckColumCount() const { DARABONBA_PTR_GET_DEFAULT(checkColumCount_, 0L) };
      inline Data& setCheckColumCount(int64_t checkColumCount) { DARABONBA_PTR_SET_VALUE(checkColumCount_, checkColumCount) };


      // checkResult Field Functions 
      bool hasCheckResult() const { return this->checkResult_ != nullptr;};
      void deleteCheckResult() { this->checkResult_ = nullptr;};
      inline int32_t getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, 0) };
      inline Data& setCheckResult(int32_t checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


      // compareRowCount Field Functions 
      bool hasCompareRowCount() const { return this->compareRowCount_ != nullptr;};
      void deleteCompareRowCount() { this->compareRowCount_ = nullptr;};
      inline int64_t getCompareRowCount() const { DARABONBA_PTR_GET_DEFAULT(compareRowCount_, 0L) };
      inline Data& setCompareRowCount(int64_t compareRowCount) { DARABONBA_PTR_SET_VALUE(compareRowCount_, compareRowCount) };


      // completionRate Field Functions 
      bool hasCompletionRate() const { return this->completionRate_ != nullptr;};
      void deleteCompletionRate() { this->completionRate_ = nullptr;};
      inline string getCompletionRate() const { DARABONBA_PTR_GET_DEFAULT(completionRate_, "") };
      inline Data& setCompletionRate(string completionRate) { DARABONBA_PTR_SET_VALUE(completionRate_, completionRate) };


      // diffRate Field Functions 
      bool hasDiffRate() const { return this->diffRate_ != nullptr;};
      void deleteDiffRate() { this->diffRate_ = nullptr;};
      inline string getDiffRate() const { DARABONBA_PTR_GET_DEFAULT(diffRate_, "") };
      inline Data& setDiffRate(string diffRate) { DARABONBA_PTR_SET_VALUE(diffRate_, diffRate) };


      // dstCompareColumn Field Functions 
      bool hasDstCompareColumn() const { return this->dstCompareColumn_ != nullptr;};
      void deleteDstCompareColumn() { this->dstCompareColumn_ = nullptr;};
      inline string getDstCompareColumn() const { DARABONBA_PTR_GET_DEFAULT(dstCompareColumn_, "") };
      inline Data& setDstCompareColumn(string dstCompareColumn) { DARABONBA_PTR_SET_VALUE(dstCompareColumn_, dstCompareColumn) };


      // dstHint Field Functions 
      bool hasDstHint() const { return this->dstHint_ != nullptr;};
      void deleteDstHint() { this->dstHint_ = nullptr;};
      inline string getDstHint() const { DARABONBA_PTR_GET_DEFAULT(dstHint_, "") };
      inline Data& setDstHint(string dstHint) { DARABONBA_PTR_SET_VALUE(dstHint_, dstHint) };


      // dstMetricName Field Functions 
      bool hasDstMetricName() const { return this->dstMetricName_ != nullptr;};
      void deleteDstMetricName() { this->dstMetricName_ = nullptr;};
      inline string getDstMetricName() const { DARABONBA_PTR_GET_DEFAULT(dstMetricName_, "") };
      inline Data& setDstMetricName(string dstMetricName) { DARABONBA_PTR_SET_VALUE(dstMetricName_, dstMetricName) };


      // dstSqlList Field Functions 
      bool hasDstSqlList() const { return this->dstSqlList_ != nullptr;};
      void deleteDstSqlList() { this->dstSqlList_ = nullptr;};
      inline const vector<string> & getDstSqlList() const { DARABONBA_PTR_GET_CONST(dstSqlList_, vector<string>) };
      inline vector<string> getDstSqlList() { DARABONBA_PTR_GET(dstSqlList_, vector<string>) };
      inline Data& setDstSqlList(const vector<string> & dstSqlList) { DARABONBA_PTR_SET_VALUE(dstSqlList_, dstSqlList) };
      inline Data& setDstSqlList(vector<string> && dstSqlList) { DARABONBA_PTR_SET_RVALUE(dstSqlList_, dstSqlList) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Data& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // execTime Field Functions 
      bool hasExecTime() const { return this->execTime_ != nullptr;};
      void deleteExecTime() { this->execTime_ = nullptr;};
      inline string getExecTime() const { DARABONBA_PTR_GET_DEFAULT(execTime_, "") };
      inline Data& setExecTime(string execTime) { DARABONBA_PTR_SET_VALUE(execTime_, execTime) };


      // expDiffCount Field Functions 
      bool hasExpDiffCount() const { return this->expDiffCount_ != nullptr;};
      void deleteExpDiffCount() { this->expDiffCount_ = nullptr;};
      inline string getExpDiffCount() const { DARABONBA_PTR_GET_DEFAULT(expDiffCount_, "") };
      inline Data& setExpDiffCount(string expDiffCount) { DARABONBA_PTR_SET_VALUE(expDiffCount_, expDiffCount) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline Data& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // isSkipped Field Functions 
      bool hasIsSkipped() const { return this->isSkipped_ != nullptr;};
      void deleteIsSkipped() { this->isSkipped_ = nullptr;};
      inline int32_t getIsSkipped() const { DARABONBA_PTR_GET_DEFAULT(isSkipped_, 0) };
      inline Data& setIsSkipped(int32_t isSkipped) { DARABONBA_PTR_SET_VALUE(isSkipped_, isSkipped) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline int32_t getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, 0) };
      inline Data& setJobStatus(int32_t jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


      // metricColumCount Field Functions 
      bool hasMetricColumCount() const { return this->metricColumCount_ != nullptr;};
      void deleteMetricColumCount() { this->metricColumCount_ = nullptr;};
      inline int64_t getMetricColumCount() const { DARABONBA_PTR_GET_DEFAULT(metricColumCount_, 0L) };
      inline Data& setMetricColumCount(int64_t metricColumCount) { DARABONBA_PTR_SET_VALUE(metricColumCount_, metricColumCount) };


      // metricPassColumCount Field Functions 
      bool hasMetricPassColumCount() const { return this->metricPassColumCount_ != nullptr;};
      void deleteMetricPassColumCount() { this->metricPassColumCount_ = nullptr;};
      inline int64_t getMetricPassColumCount() const { DARABONBA_PTR_GET_DEFAULT(metricPassColumCount_, 0L) };
      inline Data& setMetricPassColumCount(int64_t metricPassColumCount) { DARABONBA_PTR_SET_VALUE(metricPassColumCount_, metricPassColumCount) };


      // onlyDstCount Field Functions 
      bool hasOnlyDstCount() const { return this->onlyDstCount_ != nullptr;};
      void deleteOnlyDstCount() { this->onlyDstCount_ = nullptr;};
      inline int64_t getOnlyDstCount() const { DARABONBA_PTR_GET_DEFAULT(onlyDstCount_, 0L) };
      inline Data& setOnlyDstCount(int64_t onlyDstCount) { DARABONBA_PTR_SET_VALUE(onlyDstCount_, onlyDstCount) };


      // onlySrcCount Field Functions 
      bool hasOnlySrcCount() const { return this->onlySrcCount_ != nullptr;};
      void deleteOnlySrcCount() { this->onlySrcCount_ = nullptr;};
      inline int64_t getOnlySrcCount() const { DARABONBA_PTR_GET_DEFAULT(onlySrcCount_, 0L) };
      inline Data& setOnlySrcCount(int64_t onlySrcCount) { DARABONBA_PTR_SET_VALUE(onlySrcCount_, onlySrcCount) };


      // passColumCount Field Functions 
      bool hasPassColumCount() const { return this->passColumCount_ != nullptr;};
      void deletePassColumCount() { this->passColumCount_ = nullptr;};
      inline int64_t getPassColumCount() const { DARABONBA_PTR_GET_DEFAULT(passColumCount_, 0L) };
      inline Data& setPassColumCount(int64_t passColumCount) { DARABONBA_PTR_SET_VALUE(passColumCount_, passColumCount) };


      // realDiffCount Field Functions 
      bool hasRealDiffCount() const { return this->realDiffCount_ != nullptr;};
      void deleteRealDiffCount() { this->realDiffCount_ = nullptr;};
      inline int64_t getRealDiffCount() const { DARABONBA_PTR_GET_DEFAULT(realDiffCount_, 0L) };
      inline Data& setRealDiffCount(int64_t realDiffCount) { DARABONBA_PTR_SET_VALUE(realDiffCount_, realDiffCount) };


      // realSameCount Field Functions 
      bool hasRealSameCount() const { return this->realSameCount_ != nullptr;};
      void deleteRealSameCount() { this->realSameCount_ = nullptr;};
      inline int64_t getRealSameCount() const { DARABONBA_PTR_GET_DEFAULT(realSameCount_, 0L) };
      inline Data& setRealSameCount(int64_t realSameCount) { DARABONBA_PTR_SET_VALUE(realSameCount_, realSameCount) };


      // resultId Field Functions 
      bool hasResultId() const { return this->resultId_ != nullptr;};
      void deleteResultId() { this->resultId_ = nullptr;};
      inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
      inline Data& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


      // sourceColumn Field Functions 
      bool hasSourceColumn() const { return this->sourceColumn_ != nullptr;};
      void deleteSourceColumn() { this->sourceColumn_ = nullptr;};
      inline string getSourceColumn() const { DARABONBA_PTR_GET_DEFAULT(sourceColumn_, "") };
      inline Data& setSourceColumn(string sourceColumn) { DARABONBA_PTR_SET_VALUE(sourceColumn_, sourceColumn) };


      // sourceCount Field Functions 
      bool hasSourceCount() const { return this->sourceCount_ != nullptr;};
      void deleteSourceCount() { this->sourceCount_ = nullptr;};
      inline string getSourceCount() const { DARABONBA_PTR_GET_DEFAULT(sourceCount_, "") };
      inline Data& setSourceCount(string sourceCount) { DARABONBA_PTR_SET_VALUE(sourceCount_, sourceCount) };


      // sourceDataSource Field Functions 
      bool hasSourceDataSource() const { return this->sourceDataSource_ != nullptr;};
      void deleteSourceDataSource() { this->sourceDataSource_ = nullptr;};
      inline string getSourceDataSource() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSource_, "") };
      inline Data& setSourceDataSource(string sourceDataSource) { DARABONBA_PTR_SET_VALUE(sourceDataSource_, sourceDataSource) };


      // sourceError Field Functions 
      bool hasSourceError() const { return this->sourceError_ != nullptr;};
      void deleteSourceError() { this->sourceError_ = nullptr;};
      inline string getSourceError() const { DARABONBA_PTR_GET_DEFAULT(sourceError_, "") };
      inline Data& setSourceError(string sourceError) { DARABONBA_PTR_SET_VALUE(sourceError_, sourceError) };


      // sourceGroupClause Field Functions 
      bool hasSourceGroupClause() const { return this->sourceGroupClause_ != nullptr;};
      void deleteSourceGroupClause() { this->sourceGroupClause_ = nullptr;};
      inline string getSourceGroupClause() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupClause_, "") };
      inline Data& setSourceGroupClause(string sourceGroupClause) { DARABONBA_PTR_SET_VALUE(sourceGroupClause_, sourceGroupClause) };


      // sourcePartition Field Functions 
      bool hasSourcePartition() const { return this->sourcePartition_ != nullptr;};
      void deleteSourcePartition() { this->sourcePartition_ = nullptr;};
      inline string getSourcePartition() const { DARABONBA_PTR_GET_DEFAULT(sourcePartition_, "") };
      inline Data& setSourcePartition(string sourcePartition) { DARABONBA_PTR_SET_VALUE(sourcePartition_, sourcePartition) };


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


      // srcCompareColumn Field Functions 
      bool hasSrcCompareColumn() const { return this->srcCompareColumn_ != nullptr;};
      void deleteSrcCompareColumn() { this->srcCompareColumn_ = nullptr;};
      inline string getSrcCompareColumn() const { DARABONBA_PTR_GET_DEFAULT(srcCompareColumn_, "") };
      inline Data& setSrcCompareColumn(string srcCompareColumn) { DARABONBA_PTR_SET_VALUE(srcCompareColumn_, srcCompareColumn) };


      // srcHint Field Functions 
      bool hasSrcHint() const { return this->srcHint_ != nullptr;};
      void deleteSrcHint() { this->srcHint_ = nullptr;};
      inline string getSrcHint() const { DARABONBA_PTR_GET_DEFAULT(srcHint_, "") };
      inline Data& setSrcHint(string srcHint) { DARABONBA_PTR_SET_VALUE(srcHint_, srcHint) };


      // srcMetricName Field Functions 
      bool hasSrcMetricName() const { return this->srcMetricName_ != nullptr;};
      void deleteSrcMetricName() { this->srcMetricName_ = nullptr;};
      inline string getSrcMetricName() const { DARABONBA_PTR_GET_DEFAULT(srcMetricName_, "") };
      inline Data& setSrcMetricName(string srcMetricName) { DARABONBA_PTR_SET_VALUE(srcMetricName_, srcMetricName) };


      // srcSqlList Field Functions 
      bool hasSrcSqlList() const { return this->srcSqlList_ != nullptr;};
      void deleteSrcSqlList() { this->srcSqlList_ = nullptr;};
      inline const vector<string> & getSrcSqlList() const { DARABONBA_PTR_GET_CONST(srcSqlList_, vector<string>) };
      inline vector<string> getSrcSqlList() { DARABONBA_PTR_GET(srcSqlList_, vector<string>) };
      inline Data& setSrcSqlList(const vector<string> & srcSqlList) { DARABONBA_PTR_SET_VALUE(srcSqlList_, srcSqlList) };
      inline Data& setSrcSqlList(vector<string> && srcSqlList) { DARABONBA_PTR_SET_RVALUE(srcSqlList_, srcSqlList) };


      // targetColumn Field Functions 
      bool hasTargetColumn() const { return this->targetColumn_ != nullptr;};
      void deleteTargetColumn() { this->targetColumn_ = nullptr;};
      inline string getTargetColumn() const { DARABONBA_PTR_GET_DEFAULT(targetColumn_, "") };
      inline Data& setTargetColumn(string targetColumn) { DARABONBA_PTR_SET_VALUE(targetColumn_, targetColumn) };


      // targetCount Field Functions 
      bool hasTargetCount() const { return this->targetCount_ != nullptr;};
      void deleteTargetCount() { this->targetCount_ = nullptr;};
      inline string getTargetCount() const { DARABONBA_PTR_GET_DEFAULT(targetCount_, "") };
      inline Data& setTargetCount(string targetCount) { DARABONBA_PTR_SET_VALUE(targetCount_, targetCount) };


      // targetDataSource Field Functions 
      bool hasTargetDataSource() const { return this->targetDataSource_ != nullptr;};
      void deleteTargetDataSource() { this->targetDataSource_ = nullptr;};
      inline string getTargetDataSource() const { DARABONBA_PTR_GET_DEFAULT(targetDataSource_, "") };
      inline Data& setTargetDataSource(string targetDataSource) { DARABONBA_PTR_SET_VALUE(targetDataSource_, targetDataSource) };


      // targetError Field Functions 
      bool hasTargetError() const { return this->targetError_ != nullptr;};
      void deleteTargetError() { this->targetError_ = nullptr;};
      inline string getTargetError() const { DARABONBA_PTR_GET_DEFAULT(targetError_, "") };
      inline Data& setTargetError(string targetError) { DARABONBA_PTR_SET_VALUE(targetError_, targetError) };


      // targetGroupClause Field Functions 
      bool hasTargetGroupClause() const { return this->targetGroupClause_ != nullptr;};
      void deleteTargetGroupClause() { this->targetGroupClause_ = nullptr;};
      inline string getTargetGroupClause() const { DARABONBA_PTR_GET_DEFAULT(targetGroupClause_, "") };
      inline Data& setTargetGroupClause(string targetGroupClause) { DARABONBA_PTR_SET_VALUE(targetGroupClause_, targetGroupClause) };


      // targetPartition Field Functions 
      bool hasTargetPartition() const { return this->targetPartition_ != nullptr;};
      void deleteTargetPartition() { this->targetPartition_ = nullptr;};
      inline string getTargetPartition() const { DARABONBA_PTR_GET_DEFAULT(targetPartition_, "") };
      inline Data& setTargetPartition(string targetPartition) { DARABONBA_PTR_SET_VALUE(targetPartition_, targetPartition) };


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


      // taskConfigId Field Functions 
      bool hasTaskConfigId() const { return this->taskConfigId_ != nullptr;};
      void deleteTaskConfigId() { this->taskConfigId_ = nullptr;};
      inline int64_t getTaskConfigId() const { DARABONBA_PTR_GET_DEFAULT(taskConfigId_, 0L) };
      inline Data& setTaskConfigId(int64_t taskConfigId) { DARABONBA_PTR_SET_VALUE(taskConfigId_, taskConfigId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
      inline Data& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // totalCountThreshold Field Functions 
      bool hasTotalCountThreshold() const { return this->totalCountThreshold_ != nullptr;};
      void deleteTotalCountThreshold() { this->totalCountThreshold_ = nullptr;};
      inline string getTotalCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(totalCountThreshold_, "") };
      inline Data& setTotalCountThreshold(string totalCountThreshold) { DARABONBA_PTR_SET_VALUE(totalCountThreshold_, totalCountThreshold) };


    protected:
      shared_ptr<int64_t> batchId_ {};
      shared_ptr<int64_t> checkColumCount_ {};
      shared_ptr<int32_t> checkResult_ {};
      shared_ptr<int64_t> compareRowCount_ {};
      shared_ptr<string> completionRate_ {};
      shared_ptr<string> diffRate_ {};
      shared_ptr<string> dstCompareColumn_ {};
      shared_ptr<string> dstHint_ {};
      shared_ptr<string> dstMetricName_ {};
      shared_ptr<vector<string>> dstSqlList_ {};
      shared_ptr<string> errorMsg_ {};
      shared_ptr<string> execTime_ {};
      shared_ptr<string> expDiffCount_ {};
      shared_ptr<string> finishTime_ {};
      shared_ptr<int32_t> isSkipped_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<int32_t> jobStatus_ {};
      shared_ptr<int64_t> metricColumCount_ {};
      shared_ptr<int64_t> metricPassColumCount_ {};
      shared_ptr<int64_t> onlyDstCount_ {};
      shared_ptr<int64_t> onlySrcCount_ {};
      shared_ptr<int64_t> passColumCount_ {};
      shared_ptr<int64_t> realDiffCount_ {};
      shared_ptr<int64_t> realSameCount_ {};
      shared_ptr<string> resultId_ {};
      shared_ptr<string> sourceColumn_ {};
      shared_ptr<string> sourceCount_ {};
      shared_ptr<string> sourceDataSource_ {};
      shared_ptr<string> sourceError_ {};
      shared_ptr<string> sourceGroupClause_ {};
      shared_ptr<string> sourcePartition_ {};
      shared_ptr<string> sourceTable_ {};
      shared_ptr<string> sourceType_ {};
      shared_ptr<string> sourceWhereClause_ {};
      shared_ptr<string> srcCompareColumn_ {};
      shared_ptr<string> srcHint_ {};
      shared_ptr<string> srcMetricName_ {};
      shared_ptr<vector<string>> srcSqlList_ {};
      shared_ptr<string> targetColumn_ {};
      shared_ptr<string> targetCount_ {};
      shared_ptr<string> targetDataSource_ {};
      shared_ptr<string> targetError_ {};
      shared_ptr<string> targetGroupClause_ {};
      shared_ptr<string> targetPartition_ {};
      shared_ptr<string> targetTable_ {};
      shared_ptr<string> targetType_ {};
      shared_ptr<string> targetWhereClause_ {};
      shared_ptr<int64_t> taskConfigId_ {};
      shared_ptr<string> templateName_ {};
      shared_ptr<float> threshold_ {};
      shared_ptr<string> totalCountThreshold_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDataCheckReportResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDataCheckReportResponseBody::Data>) };
    inline vector<ListDataCheckReportResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDataCheckReportResponseBody::Data>) };
    inline ListDataCheckReportResponseBody& setData(const vector<ListDataCheckReportResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataCheckReportResponseBody& setData(vector<ListDataCheckReportResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListDataCheckReportResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListDataCheckReportResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListDataCheckReportResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataCheckReportResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataCheckReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataCheckReportResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataCheckReportResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDataCheckReportResponseBody::Data>> data_ {};
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
