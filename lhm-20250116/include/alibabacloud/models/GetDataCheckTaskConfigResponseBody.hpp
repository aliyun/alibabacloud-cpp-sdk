// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACHECKTASKCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACHECKTASKCONFIGRESPONSEBODY_HPP_
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
  class GetDataCheckTaskConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCheckTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCheckTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetDataCheckTaskConfigResponseBody() = default ;
    GetDataCheckTaskConfigResponseBody(const GetDataCheckTaskConfigResponseBody &) = default ;
    GetDataCheckTaskConfigResponseBody(GetDataCheckTaskConfigResponseBody &&) = default ;
    GetDataCheckTaskConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCheckTaskConfigResponseBody() = default ;
    GetDataCheckTaskConfigResponseBody& operator=(const GetDataCheckTaskConfigResponseBody &) = default ;
    GetDataCheckTaskConfigResponseBody& operator=(GetDataCheckTaskConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(batchId, batchId_);
        DARABONBA_PTR_TO_JSON(checkGlobalParams, checkGlobalParams_);
        DARABONBA_PTR_TO_JSON(checkTemplateId, checkTemplateId_);
        DARABONBA_PTR_TO_JSON(checkType, checkType_);
        DARABONBA_PTR_TO_JSON(concurrency, concurrency_);
        DARABONBA_PTR_TO_JSON(cronExp, cronExp_);
        DARABONBA_PTR_TO_JSON(dataCheckConfig, dataCheckConfig_);
        DARABONBA_PTR_TO_JSON(dstDsId, dstDsId_);
        DARABONBA_PTR_TO_JSON(dstDsName, dstDsName_);
        DARABONBA_PTR_TO_JSON(dstDsType, dstDsType_);
        DARABONBA_PTR_TO_JSON(dstEngineId, dstEngineId_);
        DARABONBA_PTR_TO_JSON(dstEngineName, dstEngineName_);
        DARABONBA_PTR_TO_JSON(dstEngineType, dstEngineType_);
        DARABONBA_PTR_TO_JSON(executeType, executeType_);
        DARABONBA_PTR_TO_JSON(fullTableCount, fullTableCount_);
        DARABONBA_PTR_TO_JSON(groupCountThreshold, groupCountThreshold_);
        DARABONBA_PTR_TO_JSON(isBuiltin, isBuiltin_);
        DARABONBA_PTR_TO_JSON(isScheduled, isScheduled_);
        DARABONBA_PTR_TO_JSON(isWhiteList, isWhiteList_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(scheduleId, scheduleId_);
        DARABONBA_PTR_TO_JSON(scopeFilter, scopeFilter_);
        DARABONBA_PTR_TO_JSON(sourceGlobalParams, sourceGlobalParams_);
        DARABONBA_PTR_TO_JSON(srcDsId, srcDsId_);
        DARABONBA_PTR_TO_JSON(srcDsName, srcDsName_);
        DARABONBA_PTR_TO_JSON(srcDsType, srcDsType_);
        DARABONBA_PTR_TO_JSON(srcEngineId, srcEngineId_);
        DARABONBA_PTR_TO_JSON(srcEngineName, srcEngineName_);
        DARABONBA_PTR_TO_JSON(srcEngineType, srcEngineType_);
        DARABONBA_PTR_TO_JSON(startImmediately, startImmediately_);
        DARABONBA_PTR_TO_JSON(targetGlobalParams, targetGlobalParams_);
        DARABONBA_PTR_TO_JSON(taskConfigInfo, taskConfigInfo_);
        DARABONBA_PTR_TO_JSON(taskDescription, taskDescription_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskMode, taskMode_);
        DARABONBA_PTR_TO_JSON(taskName, taskName_);
        DARABONBA_PTR_TO_JSON(templateName, templateName_);
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(totalCountThreshold, totalCountThreshold_);
        DARABONBA_PTR_TO_JSON(uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(batchId, batchId_);
        DARABONBA_PTR_FROM_JSON(checkGlobalParams, checkGlobalParams_);
        DARABONBA_PTR_FROM_JSON(checkTemplateId, checkTemplateId_);
        DARABONBA_PTR_FROM_JSON(checkType, checkType_);
        DARABONBA_PTR_FROM_JSON(concurrency, concurrency_);
        DARABONBA_PTR_FROM_JSON(cronExp, cronExp_);
        DARABONBA_PTR_FROM_JSON(dataCheckConfig, dataCheckConfig_);
        DARABONBA_PTR_FROM_JSON(dstDsId, dstDsId_);
        DARABONBA_PTR_FROM_JSON(dstDsName, dstDsName_);
        DARABONBA_PTR_FROM_JSON(dstDsType, dstDsType_);
        DARABONBA_PTR_FROM_JSON(dstEngineId, dstEngineId_);
        DARABONBA_PTR_FROM_JSON(dstEngineName, dstEngineName_);
        DARABONBA_PTR_FROM_JSON(dstEngineType, dstEngineType_);
        DARABONBA_PTR_FROM_JSON(executeType, executeType_);
        DARABONBA_PTR_FROM_JSON(fullTableCount, fullTableCount_);
        DARABONBA_PTR_FROM_JSON(groupCountThreshold, groupCountThreshold_);
        DARABONBA_PTR_FROM_JSON(isBuiltin, isBuiltin_);
        DARABONBA_PTR_FROM_JSON(isScheduled, isScheduled_);
        DARABONBA_PTR_FROM_JSON(isWhiteList, isWhiteList_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(scheduleId, scheduleId_);
        DARABONBA_PTR_FROM_JSON(scopeFilter, scopeFilter_);
        DARABONBA_PTR_FROM_JSON(sourceGlobalParams, sourceGlobalParams_);
        DARABONBA_PTR_FROM_JSON(srcDsId, srcDsId_);
        DARABONBA_PTR_FROM_JSON(srcDsName, srcDsName_);
        DARABONBA_PTR_FROM_JSON(srcDsType, srcDsType_);
        DARABONBA_PTR_FROM_JSON(srcEngineId, srcEngineId_);
        DARABONBA_PTR_FROM_JSON(srcEngineName, srcEngineName_);
        DARABONBA_PTR_FROM_JSON(srcEngineType, srcEngineType_);
        DARABONBA_PTR_FROM_JSON(startImmediately, startImmediately_);
        DARABONBA_PTR_FROM_JSON(targetGlobalParams, targetGlobalParams_);
        DARABONBA_PTR_FROM_JSON(taskConfigInfo, taskConfigInfo_);
        DARABONBA_PTR_FROM_JSON(taskDescription, taskDescription_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskMode, taskMode_);
        DARABONBA_PTR_FROM_JSON(taskName, taskName_);
        DARABONBA_PTR_FROM_JSON(templateName, templateName_);
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(totalCountThreshold, totalCountThreshold_);
        DARABONBA_PTR_FROM_JSON(uid, uid_);
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
      class ScopeFilter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScopeFilter& obj) { 
          DARABONBA_PTR_TO_JSON(end, end_);
          DARABONBA_PTR_TO_JSON(lastN, lastN_);
          DARABONBA_PTR_TO_JSON(scopeFilterType, scopeFilterType_);
          DARABONBA_PTR_TO_JSON(start, start_);
        };
        friend void from_json(const Darabonba::Json& j, ScopeFilter& obj) { 
          DARABONBA_PTR_FROM_JSON(end, end_);
          DARABONBA_PTR_FROM_JSON(lastN, lastN_);
          DARABONBA_PTR_FROM_JSON(scopeFilterType, scopeFilterType_);
          DARABONBA_PTR_FROM_JSON(start, start_);
        };
        ScopeFilter() = default ;
        ScopeFilter(const ScopeFilter &) = default ;
        ScopeFilter(ScopeFilter &&) = default ;
        ScopeFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScopeFilter() = default ;
        ScopeFilter& operator=(const ScopeFilter &) = default ;
        ScopeFilter& operator=(ScopeFilter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->end_ == nullptr
        && this->lastN_ == nullptr && this->scopeFilterType_ == nullptr && this->start_ == nullptr; };
        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
        inline ScopeFilter& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // lastN Field Functions 
        bool hasLastN() const { return this->lastN_ != nullptr;};
        void deleteLastN() { this->lastN_ = nullptr;};
        inline int32_t getLastN() const { DARABONBA_PTR_GET_DEFAULT(lastN_, 0) };
        inline ScopeFilter& setLastN(int32_t lastN) { DARABONBA_PTR_SET_VALUE(lastN_, lastN) };


        // scopeFilterType Field Functions 
        bool hasScopeFilterType() const { return this->scopeFilterType_ != nullptr;};
        void deleteScopeFilterType() { this->scopeFilterType_ = nullptr;};
        inline int32_t getScopeFilterType() const { DARABONBA_PTR_GET_DEFAULT(scopeFilterType_, 0) };
        inline ScopeFilter& setScopeFilterType(int32_t scopeFilterType) { DARABONBA_PTR_SET_VALUE(scopeFilterType_, scopeFilterType) };


        // start Field Functions 
        bool hasStart() const { return this->start_ != nullptr;};
        void deleteStart() { this->start_ = nullptr;};
        inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
        inline ScopeFilter& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


      protected:
        // The end time.
        shared_ptr<string> end_ {};
        // The last N parameter.
        shared_ptr<int32_t> lastN_ {};
        // The filter type.
        shared_ptr<int32_t> scopeFilterType_ {};
        // The start time.
        shared_ptr<string> start_ {};
      };

      class DataCheckConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataCheckConfig& obj) { 
          DARABONBA_PTR_TO_JSON(algorithm, algorithm_);
          DARABONBA_PTR_TO_JSON(batchId, batchId_);
          DARABONBA_PTR_TO_JSON(batchSize, batchSize_);
          DARABONBA_PTR_TO_JSON(checkType, checkType_);
          DARABONBA_PTR_TO_JSON(comparator, comparator_);
          DARABONBA_ANY_TO_JSON(extra, extra_);
          DARABONBA_PTR_TO_JSON(groupCountThreshold, groupCountThreshold_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(isFullTableCount, isFullTableCount_);
          DARABONBA_PTR_TO_JSON(isSkipped, isSkipped_);
          DARABONBA_PTR_TO_JSON(metricType, metricType_);
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
          DARABONBA_PTR_TO_JSON(taskConfigId, taskConfigId_);
          DARABONBA_PTR_TO_JSON(taskConfigInfo, taskConfigInfo_);
          DARABONBA_PTR_TO_JSON(token, token_);
          DARABONBA_PTR_TO_JSON(totalCountThreshold, totalCountThreshold_);
        };
        friend void from_json(const Darabonba::Json& j, DataCheckConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(algorithm, algorithm_);
          DARABONBA_PTR_FROM_JSON(batchId, batchId_);
          DARABONBA_PTR_FROM_JSON(batchSize, batchSize_);
          DARABONBA_PTR_FROM_JSON(checkType, checkType_);
          DARABONBA_PTR_FROM_JSON(comparator, comparator_);
          DARABONBA_ANY_FROM_JSON(extra, extra_);
          DARABONBA_PTR_FROM_JSON(groupCountThreshold, groupCountThreshold_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(isFullTableCount, isFullTableCount_);
          DARABONBA_PTR_FROM_JSON(isSkipped, isSkipped_);
          DARABONBA_PTR_FROM_JSON(metricType, metricType_);
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
          DARABONBA_PTR_FROM_JSON(taskConfigId, taskConfigId_);
          DARABONBA_PTR_FROM_JSON(taskConfigInfo, taskConfigInfo_);
          DARABONBA_PTR_FROM_JSON(token, token_);
          DARABONBA_PTR_FROM_JSON(totalCountThreshold, totalCountThreshold_);
        };
        DataCheckConfig() = default ;
        DataCheckConfig(const DataCheckConfig &) = default ;
        DataCheckConfig(DataCheckConfig &&) = default ;
        DataCheckConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataCheckConfig() = default ;
        DataCheckConfig& operator=(const DataCheckConfig &) = default ;
        DataCheckConfig& operator=(DataCheckConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->batchId_ == nullptr && this->batchSize_ == nullptr && this->checkType_ == nullptr && this->comparator_ == nullptr && this->extra_ == nullptr
        && this->groupCountThreshold_ == nullptr && this->id_ == nullptr && this->isFullTableCount_ == nullptr && this->isSkipped_ == nullptr && this->metricType_ == nullptr
        && this->sourceColumns_ == nullptr && this->sourceCompareKey_ == nullptr && this->sourceDataSource_ == nullptr && this->sourceGroupClause_ == nullptr && this->sourceHint_ == nullptr
        && this->sourceId_ == nullptr && this->sourcePartition_ == nullptr && this->sourceSql_ == nullptr && this->sourceTable_ == nullptr && this->sourceType_ == nullptr
        && this->sourceWhereClause_ == nullptr && this->targetColumns_ == nullptr && this->targetCompareKey_ == nullptr && this->targetDataSource_ == nullptr && this->targetGroupClause_ == nullptr
        && this->targetHint_ == nullptr && this->targetId_ == nullptr && this->targetPartition_ == nullptr && this->targetSql_ == nullptr && this->targetTable_ == nullptr
        && this->targetType_ == nullptr && this->targetWhereClause_ == nullptr && this->taskConfigId_ == nullptr && this->taskConfigInfo_ == nullptr && this->token_ == nullptr
        && this->totalCountThreshold_ == nullptr; };
        // algorithm Field Functions 
        bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
        void deleteAlgorithm() { this->algorithm_ = nullptr;};
        inline int32_t getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, 0) };
        inline DataCheckConfig& setAlgorithm(int32_t algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


        // batchId Field Functions 
        bool hasBatchId() const { return this->batchId_ != nullptr;};
        void deleteBatchId() { this->batchId_ = nullptr;};
        inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
        inline DataCheckConfig& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


        // batchSize Field Functions 
        bool hasBatchSize() const { return this->batchSize_ != nullptr;};
        void deleteBatchSize() { this->batchSize_ = nullptr;};
        inline int32_t getBatchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
        inline DataCheckConfig& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


        // checkType Field Functions 
        bool hasCheckType() const { return this->checkType_ != nullptr;};
        void deleteCheckType() { this->checkType_ = nullptr;};
        inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
        inline DataCheckConfig& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


        // comparator Field Functions 
        bool hasComparator() const { return this->comparator_ != nullptr;};
        void deleteComparator() { this->comparator_ = nullptr;};
        inline string getComparator() const { DARABONBA_PTR_GET_DEFAULT(comparator_, "") };
        inline DataCheckConfig& setComparator(string comparator) { DARABONBA_PTR_SET_VALUE(comparator_, comparator) };


        // extra Field Functions 
        bool hasExtra() const { return this->extra_ != nullptr;};
        void deleteExtra() { this->extra_ = nullptr;};
        inline         const Darabonba::Json & getExtra() const { DARABONBA_GET(extra_) };
        Darabonba::Json & getExtra() { DARABONBA_GET(extra_) };
        inline DataCheckConfig& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
        inline DataCheckConfig& setExtra(Darabonba::Json && extra) { DARABONBA_SET_RVALUE(extra_, extra) };


        // groupCountThreshold Field Functions 
        bool hasGroupCountThreshold() const { return this->groupCountThreshold_ != nullptr;};
        void deleteGroupCountThreshold() { this->groupCountThreshold_ = nullptr;};
        inline float getGroupCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(groupCountThreshold_, 0.0) };
        inline DataCheckConfig& setGroupCountThreshold(float groupCountThreshold) { DARABONBA_PTR_SET_VALUE(groupCountThreshold_, groupCountThreshold) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DataCheckConfig& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isFullTableCount Field Functions 
        bool hasIsFullTableCount() const { return this->isFullTableCount_ != nullptr;};
        void deleteIsFullTableCount() { this->isFullTableCount_ = nullptr;};
        inline int32_t getIsFullTableCount() const { DARABONBA_PTR_GET_DEFAULT(isFullTableCount_, 0) };
        inline DataCheckConfig& setIsFullTableCount(int32_t isFullTableCount) { DARABONBA_PTR_SET_VALUE(isFullTableCount_, isFullTableCount) };


        // isSkipped Field Functions 
        bool hasIsSkipped() const { return this->isSkipped_ != nullptr;};
        void deleteIsSkipped() { this->isSkipped_ = nullptr;};
        inline int32_t getIsSkipped() const { DARABONBA_PTR_GET_DEFAULT(isSkipped_, 0) };
        inline DataCheckConfig& setIsSkipped(int32_t isSkipped) { DARABONBA_PTR_SET_VALUE(isSkipped_, isSkipped) };


        // metricType Field Functions 
        bool hasMetricType() const { return this->metricType_ != nullptr;};
        void deleteMetricType() { this->metricType_ = nullptr;};
        inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
        inline DataCheckConfig& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


        // sourceColumns Field Functions 
        bool hasSourceColumns() const { return this->sourceColumns_ != nullptr;};
        void deleteSourceColumns() { this->sourceColumns_ = nullptr;};
        inline string getSourceColumns() const { DARABONBA_PTR_GET_DEFAULT(sourceColumns_, "") };
        inline DataCheckConfig& setSourceColumns(string sourceColumns) { DARABONBA_PTR_SET_VALUE(sourceColumns_, sourceColumns) };


        // sourceCompareKey Field Functions 
        bool hasSourceCompareKey() const { return this->sourceCompareKey_ != nullptr;};
        void deleteSourceCompareKey() { this->sourceCompareKey_ = nullptr;};
        inline string getSourceCompareKey() const { DARABONBA_PTR_GET_DEFAULT(sourceCompareKey_, "") };
        inline DataCheckConfig& setSourceCompareKey(string sourceCompareKey) { DARABONBA_PTR_SET_VALUE(sourceCompareKey_, sourceCompareKey) };


        // sourceDataSource Field Functions 
        bool hasSourceDataSource() const { return this->sourceDataSource_ != nullptr;};
        void deleteSourceDataSource() { this->sourceDataSource_ = nullptr;};
        inline string getSourceDataSource() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSource_, "") };
        inline DataCheckConfig& setSourceDataSource(string sourceDataSource) { DARABONBA_PTR_SET_VALUE(sourceDataSource_, sourceDataSource) };


        // sourceGroupClause Field Functions 
        bool hasSourceGroupClause() const { return this->sourceGroupClause_ != nullptr;};
        void deleteSourceGroupClause() { this->sourceGroupClause_ = nullptr;};
        inline string getSourceGroupClause() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupClause_, "") };
        inline DataCheckConfig& setSourceGroupClause(string sourceGroupClause) { DARABONBA_PTR_SET_VALUE(sourceGroupClause_, sourceGroupClause) };


        // sourceHint Field Functions 
        bool hasSourceHint() const { return this->sourceHint_ != nullptr;};
        void deleteSourceHint() { this->sourceHint_ = nullptr;};
        inline string getSourceHint() const { DARABONBA_PTR_GET_DEFAULT(sourceHint_, "") };
        inline DataCheckConfig& setSourceHint(string sourceHint) { DARABONBA_PTR_SET_VALUE(sourceHint_, sourceHint) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
        inline DataCheckConfig& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // sourcePartition Field Functions 
        bool hasSourcePartition() const { return this->sourcePartition_ != nullptr;};
        void deleteSourcePartition() { this->sourcePartition_ = nullptr;};
        inline string getSourcePartition() const { DARABONBA_PTR_GET_DEFAULT(sourcePartition_, "") };
        inline DataCheckConfig& setSourcePartition(string sourcePartition) { DARABONBA_PTR_SET_VALUE(sourcePartition_, sourcePartition) };


        // sourceSql Field Functions 
        bool hasSourceSql() const { return this->sourceSql_ != nullptr;};
        void deleteSourceSql() { this->sourceSql_ = nullptr;};
        inline string getSourceSql() const { DARABONBA_PTR_GET_DEFAULT(sourceSql_, "") };
        inline DataCheckConfig& setSourceSql(string sourceSql) { DARABONBA_PTR_SET_VALUE(sourceSql_, sourceSql) };


        // sourceTable Field Functions 
        bool hasSourceTable() const { return this->sourceTable_ != nullptr;};
        void deleteSourceTable() { this->sourceTable_ = nullptr;};
        inline string getSourceTable() const { DARABONBA_PTR_GET_DEFAULT(sourceTable_, "") };
        inline DataCheckConfig& setSourceTable(string sourceTable) { DARABONBA_PTR_SET_VALUE(sourceTable_, sourceTable) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline DataCheckConfig& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // sourceWhereClause Field Functions 
        bool hasSourceWhereClause() const { return this->sourceWhereClause_ != nullptr;};
        void deleteSourceWhereClause() { this->sourceWhereClause_ = nullptr;};
        inline string getSourceWhereClause() const { DARABONBA_PTR_GET_DEFAULT(sourceWhereClause_, "") };
        inline DataCheckConfig& setSourceWhereClause(string sourceWhereClause) { DARABONBA_PTR_SET_VALUE(sourceWhereClause_, sourceWhereClause) };


        // targetColumns Field Functions 
        bool hasTargetColumns() const { return this->targetColumns_ != nullptr;};
        void deleteTargetColumns() { this->targetColumns_ = nullptr;};
        inline string getTargetColumns() const { DARABONBA_PTR_GET_DEFAULT(targetColumns_, "") };
        inline DataCheckConfig& setTargetColumns(string targetColumns) { DARABONBA_PTR_SET_VALUE(targetColumns_, targetColumns) };


        // targetCompareKey Field Functions 
        bool hasTargetCompareKey() const { return this->targetCompareKey_ != nullptr;};
        void deleteTargetCompareKey() { this->targetCompareKey_ = nullptr;};
        inline string getTargetCompareKey() const { DARABONBA_PTR_GET_DEFAULT(targetCompareKey_, "") };
        inline DataCheckConfig& setTargetCompareKey(string targetCompareKey) { DARABONBA_PTR_SET_VALUE(targetCompareKey_, targetCompareKey) };


        // targetDataSource Field Functions 
        bool hasTargetDataSource() const { return this->targetDataSource_ != nullptr;};
        void deleteTargetDataSource() { this->targetDataSource_ = nullptr;};
        inline string getTargetDataSource() const { DARABONBA_PTR_GET_DEFAULT(targetDataSource_, "") };
        inline DataCheckConfig& setTargetDataSource(string targetDataSource) { DARABONBA_PTR_SET_VALUE(targetDataSource_, targetDataSource) };


        // targetGroupClause Field Functions 
        bool hasTargetGroupClause() const { return this->targetGroupClause_ != nullptr;};
        void deleteTargetGroupClause() { this->targetGroupClause_ = nullptr;};
        inline string getTargetGroupClause() const { DARABONBA_PTR_GET_DEFAULT(targetGroupClause_, "") };
        inline DataCheckConfig& setTargetGroupClause(string targetGroupClause) { DARABONBA_PTR_SET_VALUE(targetGroupClause_, targetGroupClause) };


        // targetHint Field Functions 
        bool hasTargetHint() const { return this->targetHint_ != nullptr;};
        void deleteTargetHint() { this->targetHint_ = nullptr;};
        inline string getTargetHint() const { DARABONBA_PTR_GET_DEFAULT(targetHint_, "") };
        inline DataCheckConfig& setTargetHint(string targetHint) { DARABONBA_PTR_SET_VALUE(targetHint_, targetHint) };


        // targetId Field Functions 
        bool hasTargetId() const { return this->targetId_ != nullptr;};
        void deleteTargetId() { this->targetId_ = nullptr;};
        inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
        inline DataCheckConfig& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


        // targetPartition Field Functions 
        bool hasTargetPartition() const { return this->targetPartition_ != nullptr;};
        void deleteTargetPartition() { this->targetPartition_ = nullptr;};
        inline string getTargetPartition() const { DARABONBA_PTR_GET_DEFAULT(targetPartition_, "") };
        inline DataCheckConfig& setTargetPartition(string targetPartition) { DARABONBA_PTR_SET_VALUE(targetPartition_, targetPartition) };


        // targetSql Field Functions 
        bool hasTargetSql() const { return this->targetSql_ != nullptr;};
        void deleteTargetSql() { this->targetSql_ = nullptr;};
        inline string getTargetSql() const { DARABONBA_PTR_GET_DEFAULT(targetSql_, "") };
        inline DataCheckConfig& setTargetSql(string targetSql) { DARABONBA_PTR_SET_VALUE(targetSql_, targetSql) };


        // targetTable Field Functions 
        bool hasTargetTable() const { return this->targetTable_ != nullptr;};
        void deleteTargetTable() { this->targetTable_ = nullptr;};
        inline string getTargetTable() const { DARABONBA_PTR_GET_DEFAULT(targetTable_, "") };
        inline DataCheckConfig& setTargetTable(string targetTable) { DARABONBA_PTR_SET_VALUE(targetTable_, targetTable) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline DataCheckConfig& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


        // targetWhereClause Field Functions 
        bool hasTargetWhereClause() const { return this->targetWhereClause_ != nullptr;};
        void deleteTargetWhereClause() { this->targetWhereClause_ = nullptr;};
        inline string getTargetWhereClause() const { DARABONBA_PTR_GET_DEFAULT(targetWhereClause_, "") };
        inline DataCheckConfig& setTargetWhereClause(string targetWhereClause) { DARABONBA_PTR_SET_VALUE(targetWhereClause_, targetWhereClause) };


        // taskConfigId Field Functions 
        bool hasTaskConfigId() const { return this->taskConfigId_ != nullptr;};
        void deleteTaskConfigId() { this->taskConfigId_ = nullptr;};
        inline int64_t getTaskConfigId() const { DARABONBA_PTR_GET_DEFAULT(taskConfigId_, 0L) };
        inline DataCheckConfig& setTaskConfigId(int64_t taskConfigId) { DARABONBA_PTR_SET_VALUE(taskConfigId_, taskConfigId) };


        // taskConfigInfo Field Functions 
        bool hasTaskConfigInfo() const { return this->taskConfigInfo_ != nullptr;};
        void deleteTaskConfigInfo() { this->taskConfigInfo_ = nullptr;};
        inline string getTaskConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(taskConfigInfo_, "") };
        inline DataCheckConfig& setTaskConfigInfo(string taskConfigInfo) { DARABONBA_PTR_SET_VALUE(taskConfigInfo_, taskConfigInfo) };


        // token Field Functions 
        bool hasToken() const { return this->token_ != nullptr;};
        void deleteToken() { this->token_ = nullptr;};
        inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
        inline DataCheckConfig& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


        // totalCountThreshold Field Functions 
        bool hasTotalCountThreshold() const { return this->totalCountThreshold_ != nullptr;};
        void deleteTotalCountThreshold() { this->totalCountThreshold_ = nullptr;};
        inline float getTotalCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(totalCountThreshold_, 0.0) };
        inline DataCheckConfig& setTotalCountThreshold(float totalCountThreshold) { DARABONBA_PTR_SET_VALUE(totalCountThreshold_, totalCountThreshold) };


      protected:
        // The validation algorithm.
        shared_ptr<int32_t> algorithm_ {};
        // The batch ID.
        shared_ptr<int64_t> batchId_ {};
        // The batch size.
        shared_ptr<int32_t> batchSize_ {};
        // The validation rule type. Valid values:
        // - 0: data volume comparison.
        // - 1: metric comparison.
        // - 2: weak content comparison.
        // - 3: custom comparison.
        // - 4: full-text comparison.
        // - 5: null value ratio comparison.
        shared_ptr<int32_t> checkType_ {};
        // The comparison type. Valid values: =, !=, >, <, >=, <=, contains, does not contain, and ==.
        shared_ptr<string> comparator_ {};
        // The reserved field.
        Darabonba::Json extra_ {};
        // The group data volume comparison threshold.
        shared_ptr<float> groupCountThreshold_ {};
        // The primary key ID.
        shared_ptr<int64_t> id_ {};
        // Specifies whether to perform a full table count.
        shared_ptr<int32_t> isFullTableCount_ {};
        // Specifies whether to skip the task. Valid values:
        // - 0: No.
        // - 1: Yes.
        shared_ptr<int32_t> isSkipped_ {};
        // The metric type. Valid values:
        // - CUSTOM_METRIC_NUM: built-in NUM mode.
        // - CUSTOM_METRIC_LEN: built-in LEN mode.
        // - CUSTOM_METRIC_MIX: built-in MIX mode.
        shared_ptr<string> metricType_ {};
        // The source table columns. You can specify multiple columns separated by commas (,).
        shared_ptr<string> sourceColumns_ {};
        // The source comparison key (the key field used for data comparison between the source and destination).
        shared_ptr<string> sourceCompareKey_ {};
        // The source data source name.
        shared_ptr<string> sourceDataSource_ {};
        // The GROUP BY clause for the source table.
        shared_ptr<string> sourceGroupClause_ {};
        shared_ptr<string> sourceHint_ {};
        // The source data source ID.
        shared_ptr<string> sourceId_ {};
        // The source partition.
        shared_ptr<string> sourcePartition_ {};
        // The source SQL statement.
        shared_ptr<string> sourceSql_ {};
        // The source table.
        shared_ptr<string> sourceTable_ {};
        // The source data source type.
        shared_ptr<string> sourceType_ {};
        // The WHERE clause for the source table.
        shared_ptr<string> sourceWhereClause_ {};
        // The destination table columns. You can specify multiple columns separated by commas (,).
        shared_ptr<string> targetColumns_ {};
        // The destination comparison key (the key field used for data comparison between the source and destination).
        shared_ptr<string> targetCompareKey_ {};
        // The destination data source.
        shared_ptr<string> targetDataSource_ {};
        // The GROUP BY clause for the destination table.
        shared_ptr<string> targetGroupClause_ {};
        shared_ptr<string> targetHint_ {};
        // The destination ID.
        shared_ptr<string> targetId_ {};
        // The destination partition.
        shared_ptr<string> targetPartition_ {};
        // The destination SQL statement.
        shared_ptr<string> targetSql_ {};
        // The destination table.
        shared_ptr<string> targetTable_ {};
        // The destination data source type.
        shared_ptr<string> targetType_ {};
        // The WHERE clause for the destination table.
        shared_ptr<string> targetWhereClause_ {};
        // The validation task configuration ID.
        shared_ptr<int64_t> taskConfigId_ {};
        // The validation task configuration information (regular expression matching rules). This parameter takes effect only when taskMode is set to 1.
        shared_ptr<string> taskConfigInfo_ {};
        // The validation batch token. Together with batchId, it identifies the result records generated by a validation batch.
        shared_ptr<string> token_ {};
        // The total data volume comparison threshold.
        shared_ptr<float> totalCountThreshold_ {};
      };

      virtual bool empty() const override { return this->batchId_ == nullptr
        && this->checkGlobalParams_ == nullptr && this->checkTemplateId_ == nullptr && this->checkType_ == nullptr && this->concurrency_ == nullptr && this->cronExp_ == nullptr
        && this->dataCheckConfig_ == nullptr && this->dstDsId_ == nullptr && this->dstDsName_ == nullptr && this->dstDsType_ == nullptr && this->dstEngineId_ == nullptr
        && this->dstEngineName_ == nullptr && this->dstEngineType_ == nullptr && this->executeType_ == nullptr && this->fullTableCount_ == nullptr && this->groupCountThreshold_ == nullptr
        && this->isBuiltin_ == nullptr && this->isScheduled_ == nullptr && this->isWhiteList_ == nullptr && this->requestId_ == nullptr && this->scheduleId_ == nullptr
        && this->scopeFilter_ == nullptr && this->sourceGlobalParams_ == nullptr && this->srcDsId_ == nullptr && this->srcDsName_ == nullptr && this->srcDsType_ == nullptr
        && this->srcEngineId_ == nullptr && this->srcEngineName_ == nullptr && this->srcEngineType_ == nullptr && this->startImmediately_ == nullptr && this->targetGlobalParams_ == nullptr
        && this->taskConfigInfo_ == nullptr && this->taskDescription_ == nullptr && this->taskId_ == nullptr && this->taskMode_ == nullptr && this->taskName_ == nullptr
        && this->templateName_ == nullptr && this->tenantId_ == nullptr && this->totalCountThreshold_ == nullptr && this->uid_ == nullptr; };
      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
      inline Data& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // checkGlobalParams Field Functions 
      bool hasCheckGlobalParams() const { return this->checkGlobalParams_ != nullptr;};
      void deleteCheckGlobalParams() { this->checkGlobalParams_ = nullptr;};
      inline string getCheckGlobalParams() const { DARABONBA_PTR_GET_DEFAULT(checkGlobalParams_, "") };
      inline Data& setCheckGlobalParams(string checkGlobalParams) { DARABONBA_PTR_SET_VALUE(checkGlobalParams_, checkGlobalParams) };


      // checkTemplateId Field Functions 
      bool hasCheckTemplateId() const { return this->checkTemplateId_ != nullptr;};
      void deleteCheckTemplateId() { this->checkTemplateId_ = nullptr;};
      inline string getCheckTemplateId() const { DARABONBA_PTR_GET_DEFAULT(checkTemplateId_, "") };
      inline Data& setCheckTemplateId(string checkTemplateId) { DARABONBA_PTR_SET_VALUE(checkTemplateId_, checkTemplateId) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
      inline Data& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // concurrency Field Functions 
      bool hasConcurrency() const { return this->concurrency_ != nullptr;};
      void deleteConcurrency() { this->concurrency_ = nullptr;};
      inline int32_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
      inline Data& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


      // cronExp Field Functions 
      bool hasCronExp() const { return this->cronExp_ != nullptr;};
      void deleteCronExp() { this->cronExp_ = nullptr;};
      inline string getCronExp() const { DARABONBA_PTR_GET_DEFAULT(cronExp_, "") };
      inline Data& setCronExp(string cronExp) { DARABONBA_PTR_SET_VALUE(cronExp_, cronExp) };


      // dataCheckConfig Field Functions 
      bool hasDataCheckConfig() const { return this->dataCheckConfig_ != nullptr;};
      void deleteDataCheckConfig() { this->dataCheckConfig_ = nullptr;};
      inline const vector<Data::DataCheckConfig> & getDataCheckConfig() const { DARABONBA_PTR_GET_CONST(dataCheckConfig_, vector<Data::DataCheckConfig>) };
      inline vector<Data::DataCheckConfig> getDataCheckConfig() { DARABONBA_PTR_GET(dataCheckConfig_, vector<Data::DataCheckConfig>) };
      inline Data& setDataCheckConfig(const vector<Data::DataCheckConfig> & dataCheckConfig) { DARABONBA_PTR_SET_VALUE(dataCheckConfig_, dataCheckConfig) };
      inline Data& setDataCheckConfig(vector<Data::DataCheckConfig> && dataCheckConfig) { DARABONBA_PTR_SET_RVALUE(dataCheckConfig_, dataCheckConfig) };


      // dstDsId Field Functions 
      bool hasDstDsId() const { return this->dstDsId_ != nullptr;};
      void deleteDstDsId() { this->dstDsId_ = nullptr;};
      inline string getDstDsId() const { DARABONBA_PTR_GET_DEFAULT(dstDsId_, "") };
      inline Data& setDstDsId(string dstDsId) { DARABONBA_PTR_SET_VALUE(dstDsId_, dstDsId) };


      // dstDsName Field Functions 
      bool hasDstDsName() const { return this->dstDsName_ != nullptr;};
      void deleteDstDsName() { this->dstDsName_ = nullptr;};
      inline string getDstDsName() const { DARABONBA_PTR_GET_DEFAULT(dstDsName_, "") };
      inline Data& setDstDsName(string dstDsName) { DARABONBA_PTR_SET_VALUE(dstDsName_, dstDsName) };


      // dstDsType Field Functions 
      bool hasDstDsType() const { return this->dstDsType_ != nullptr;};
      void deleteDstDsType() { this->dstDsType_ = nullptr;};
      inline string getDstDsType() const { DARABONBA_PTR_GET_DEFAULT(dstDsType_, "") };
      inline Data& setDstDsType(string dstDsType) { DARABONBA_PTR_SET_VALUE(dstDsType_, dstDsType) };


      // dstEngineId Field Functions 
      bool hasDstEngineId() const { return this->dstEngineId_ != nullptr;};
      void deleteDstEngineId() { this->dstEngineId_ = nullptr;};
      inline string getDstEngineId() const { DARABONBA_PTR_GET_DEFAULT(dstEngineId_, "") };
      inline Data& setDstEngineId(string dstEngineId) { DARABONBA_PTR_SET_VALUE(dstEngineId_, dstEngineId) };


      // dstEngineName Field Functions 
      bool hasDstEngineName() const { return this->dstEngineName_ != nullptr;};
      void deleteDstEngineName() { this->dstEngineName_ = nullptr;};
      inline string getDstEngineName() const { DARABONBA_PTR_GET_DEFAULT(dstEngineName_, "") };
      inline Data& setDstEngineName(string dstEngineName) { DARABONBA_PTR_SET_VALUE(dstEngineName_, dstEngineName) };


      // dstEngineType Field Functions 
      bool hasDstEngineType() const { return this->dstEngineType_ != nullptr;};
      void deleteDstEngineType() { this->dstEngineType_ = nullptr;};
      inline string getDstEngineType() const { DARABONBA_PTR_GET_DEFAULT(dstEngineType_, "") };
      inline Data& setDstEngineType(string dstEngineType) { DARABONBA_PTR_SET_VALUE(dstEngineType_, dstEngineType) };


      // executeType Field Functions 
      bool hasExecuteType() const { return this->executeType_ != nullptr;};
      void deleteExecuteType() { this->executeType_ = nullptr;};
      inline int32_t getExecuteType() const { DARABONBA_PTR_GET_DEFAULT(executeType_, 0) };
      inline Data& setExecuteType(int32_t executeType) { DARABONBA_PTR_SET_VALUE(executeType_, executeType) };


      // fullTableCount Field Functions 
      bool hasFullTableCount() const { return this->fullTableCount_ != nullptr;};
      void deleteFullTableCount() { this->fullTableCount_ = nullptr;};
      inline int32_t getFullTableCount() const { DARABONBA_PTR_GET_DEFAULT(fullTableCount_, 0) };
      inline Data& setFullTableCount(int32_t fullTableCount) { DARABONBA_PTR_SET_VALUE(fullTableCount_, fullTableCount) };


      // groupCountThreshold Field Functions 
      bool hasGroupCountThreshold() const { return this->groupCountThreshold_ != nullptr;};
      void deleteGroupCountThreshold() { this->groupCountThreshold_ = nullptr;};
      inline float getGroupCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(groupCountThreshold_, 0.0) };
      inline Data& setGroupCountThreshold(float groupCountThreshold) { DARABONBA_PTR_SET_VALUE(groupCountThreshold_, groupCountThreshold) };


      // isBuiltin Field Functions 
      bool hasIsBuiltin() const { return this->isBuiltin_ != nullptr;};
      void deleteIsBuiltin() { this->isBuiltin_ = nullptr;};
      inline int32_t getIsBuiltin() const { DARABONBA_PTR_GET_DEFAULT(isBuiltin_, 0) };
      inline Data& setIsBuiltin(int32_t isBuiltin) { DARABONBA_PTR_SET_VALUE(isBuiltin_, isBuiltin) };


      // isScheduled Field Functions 
      bool hasIsScheduled() const { return this->isScheduled_ != nullptr;};
      void deleteIsScheduled() { this->isScheduled_ = nullptr;};
      inline int32_t getIsScheduled() const { DARABONBA_PTR_GET_DEFAULT(isScheduled_, 0) };
      inline Data& setIsScheduled(int32_t isScheduled) { DARABONBA_PTR_SET_VALUE(isScheduled_, isScheduled) };


      // isWhiteList Field Functions 
      bool hasIsWhiteList() const { return this->isWhiteList_ != nullptr;};
      void deleteIsWhiteList() { this->isWhiteList_ = nullptr;};
      inline int32_t getIsWhiteList() const { DARABONBA_PTR_GET_DEFAULT(isWhiteList_, 0) };
      inline Data& setIsWhiteList(int32_t isWhiteList) { DARABONBA_PTR_SET_VALUE(isWhiteList_, isWhiteList) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // scheduleId Field Functions 
      bool hasScheduleId() const { return this->scheduleId_ != nullptr;};
      void deleteScheduleId() { this->scheduleId_ = nullptr;};
      inline int64_t getScheduleId() const { DARABONBA_PTR_GET_DEFAULT(scheduleId_, 0L) };
      inline Data& setScheduleId(int64_t scheduleId) { DARABONBA_PTR_SET_VALUE(scheduleId_, scheduleId) };


      // scopeFilter Field Functions 
      bool hasScopeFilter() const { return this->scopeFilter_ != nullptr;};
      void deleteScopeFilter() { this->scopeFilter_ = nullptr;};
      inline const Data::ScopeFilter & getScopeFilter() const { DARABONBA_PTR_GET_CONST(scopeFilter_, Data::ScopeFilter) };
      inline Data::ScopeFilter getScopeFilter() { DARABONBA_PTR_GET(scopeFilter_, Data::ScopeFilter) };
      inline Data& setScopeFilter(const Data::ScopeFilter & scopeFilter) { DARABONBA_PTR_SET_VALUE(scopeFilter_, scopeFilter) };
      inline Data& setScopeFilter(Data::ScopeFilter && scopeFilter) { DARABONBA_PTR_SET_RVALUE(scopeFilter_, scopeFilter) };


      // sourceGlobalParams Field Functions 
      bool hasSourceGlobalParams() const { return this->sourceGlobalParams_ != nullptr;};
      void deleteSourceGlobalParams() { this->sourceGlobalParams_ = nullptr;};
      inline string getSourceGlobalParams() const { DARABONBA_PTR_GET_DEFAULT(sourceGlobalParams_, "") };
      inline Data& setSourceGlobalParams(string sourceGlobalParams) { DARABONBA_PTR_SET_VALUE(sourceGlobalParams_, sourceGlobalParams) };


      // srcDsId Field Functions 
      bool hasSrcDsId() const { return this->srcDsId_ != nullptr;};
      void deleteSrcDsId() { this->srcDsId_ = nullptr;};
      inline string getSrcDsId() const { DARABONBA_PTR_GET_DEFAULT(srcDsId_, "") };
      inline Data& setSrcDsId(string srcDsId) { DARABONBA_PTR_SET_VALUE(srcDsId_, srcDsId) };


      // srcDsName Field Functions 
      bool hasSrcDsName() const { return this->srcDsName_ != nullptr;};
      void deleteSrcDsName() { this->srcDsName_ = nullptr;};
      inline string getSrcDsName() const { DARABONBA_PTR_GET_DEFAULT(srcDsName_, "") };
      inline Data& setSrcDsName(string srcDsName) { DARABONBA_PTR_SET_VALUE(srcDsName_, srcDsName) };


      // srcDsType Field Functions 
      bool hasSrcDsType() const { return this->srcDsType_ != nullptr;};
      void deleteSrcDsType() { this->srcDsType_ = nullptr;};
      inline string getSrcDsType() const { DARABONBA_PTR_GET_DEFAULT(srcDsType_, "") };
      inline Data& setSrcDsType(string srcDsType) { DARABONBA_PTR_SET_VALUE(srcDsType_, srcDsType) };


      // srcEngineId Field Functions 
      bool hasSrcEngineId() const { return this->srcEngineId_ != nullptr;};
      void deleteSrcEngineId() { this->srcEngineId_ = nullptr;};
      inline string getSrcEngineId() const { DARABONBA_PTR_GET_DEFAULT(srcEngineId_, "") };
      inline Data& setSrcEngineId(string srcEngineId) { DARABONBA_PTR_SET_VALUE(srcEngineId_, srcEngineId) };


      // srcEngineName Field Functions 
      bool hasSrcEngineName() const { return this->srcEngineName_ != nullptr;};
      void deleteSrcEngineName() { this->srcEngineName_ = nullptr;};
      inline string getSrcEngineName() const { DARABONBA_PTR_GET_DEFAULT(srcEngineName_, "") };
      inline Data& setSrcEngineName(string srcEngineName) { DARABONBA_PTR_SET_VALUE(srcEngineName_, srcEngineName) };


      // srcEngineType Field Functions 
      bool hasSrcEngineType() const { return this->srcEngineType_ != nullptr;};
      void deleteSrcEngineType() { this->srcEngineType_ = nullptr;};
      inline string getSrcEngineType() const { DARABONBA_PTR_GET_DEFAULT(srcEngineType_, "") };
      inline Data& setSrcEngineType(string srcEngineType) { DARABONBA_PTR_SET_VALUE(srcEngineType_, srcEngineType) };


      // startImmediately Field Functions 
      bool hasStartImmediately() const { return this->startImmediately_ != nullptr;};
      void deleteStartImmediately() { this->startImmediately_ = nullptr;};
      inline int32_t getStartImmediately() const { DARABONBA_PTR_GET_DEFAULT(startImmediately_, 0) };
      inline Data& setStartImmediately(int32_t startImmediately) { DARABONBA_PTR_SET_VALUE(startImmediately_, startImmediately) };


      // targetGlobalParams Field Functions 
      bool hasTargetGlobalParams() const { return this->targetGlobalParams_ != nullptr;};
      void deleteTargetGlobalParams() { this->targetGlobalParams_ = nullptr;};
      inline string getTargetGlobalParams() const { DARABONBA_PTR_GET_DEFAULT(targetGlobalParams_, "") };
      inline Data& setTargetGlobalParams(string targetGlobalParams) { DARABONBA_PTR_SET_VALUE(targetGlobalParams_, targetGlobalParams) };


      // taskConfigInfo Field Functions 
      bool hasTaskConfigInfo() const { return this->taskConfigInfo_ != nullptr;};
      void deleteTaskConfigInfo() { this->taskConfigInfo_ = nullptr;};
      inline string getTaskConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(taskConfigInfo_, "") };
      inline Data& setTaskConfigInfo(string taskConfigInfo) { DARABONBA_PTR_SET_VALUE(taskConfigInfo_, taskConfigInfo) };


      // taskDescription Field Functions 
      bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
      void deleteTaskDescription() { this->taskDescription_ = nullptr;};
      inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
      inline Data& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskMode Field Functions 
      bool hasTaskMode() const { return this->taskMode_ != nullptr;};
      void deleteTaskMode() { this->taskMode_ = nullptr;};
      inline int32_t getTaskMode() const { DARABONBA_PTR_GET_DEFAULT(taskMode_, 0) };
      inline Data& setTaskMode(int32_t taskMode) { DARABONBA_PTR_SET_VALUE(taskMode_, taskMode) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Data& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // totalCountThreshold Field Functions 
      bool hasTotalCountThreshold() const { return this->totalCountThreshold_ != nullptr;};
      void deleteTotalCountThreshold() { this->totalCountThreshold_ = nullptr;};
      inline float getTotalCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(totalCountThreshold_, 0.0) };
      inline Data& setTotalCountThreshold(float totalCountThreshold) { DARABONBA_PTR_SET_VALUE(totalCountThreshold_, totalCountThreshold) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Data& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      // The batch ID that uniquely identifies a data validation batch.
      shared_ptr<int64_t> batchId_ {};
      // The global node parameter settings (built-in configuration of the data validation service).
      shared_ptr<string> checkGlobalParams_ {};
      // The validation template ID.
      shared_ptr<string> checkTemplateId_ {};
      // The validation rule type. Valid values:
      // - 0: data volume comparison.
      // - 1: metric comparison.
      // - 2: weak content comparison.
      // - 3: custom comparison.
      // - 4: full-text comparison.
      // - 5: null value ratio comparison.
      shared_ptr<int32_t> checkType_ {};
      // The batch concurrency.
      shared_ptr<int32_t> concurrency_ {};
      // The scheduling cycle expression (cron expression).
      shared_ptr<string> cronExp_ {};
      // The task configuration table.
      shared_ptr<vector<Data::DataCheckConfig>> dataCheckConfig_ {};
      // The destination data source ID.
      shared_ptr<string> dstDsId_ {};
      // The destination data source name.
      shared_ptr<string> dstDsName_ {};
      // The destination data source type.
      shared_ptr<string> dstDsType_ {};
      // The ID of the destination verification engine.
      shared_ptr<string> dstEngineId_ {};
      // The name of the destination verification engine.
      shared_ptr<string> dstEngineName_ {};
      // The type of the destination verification engine.
      shared_ptr<string> dstEngineType_ {};
      // The execution type. Valid values:
      // - 0: immediate execution
      // - 1: scheduled execution
      shared_ptr<int32_t> executeType_ {};
      // The count mode. Valid values:
      // - 0: count by partition
      // - 1: count the entire table
      shared_ptr<int32_t> fullTableCount_ {};
      // The group data volume comparison threshold.
      shared_ptr<float> groupCountThreshold_ {};
      // Indicates whether the template is a built-in template. Valid values:
      // - 0: No.
      // - 1: Yes.
      shared_ptr<int32_t> isBuiltin_ {};
      // Indicates whether scheduling is enabled. Valid values:
      // - 0: No.
      // - 1: Yes.
      shared_ptr<int32_t> isScheduled_ {};
      // Indicates whether the task is on the whitelist. Valid values:
      // - 0: No.
      // - 1: Yes.
      shared_ptr<int32_t> isWhiteList_ {};
      // The request ID, which is used to locate and troubleshoot issues.
      shared_ptr<string> requestId_ {};
      // The ID of the scheduled task (scheduling ID).
      shared_ptr<int64_t> scheduleId_ {};
      // The scope filter JSON data.
      shared_ptr<Data::ScopeFilter> scopeFilter_ {};
      // The source node parameter settings (source execute parameters).
      shared_ptr<string> sourceGlobalParams_ {};
      // The ID of the source data source.
      shared_ptr<string> srcDsId_ {};
      // The name of the source data source.
      shared_ptr<string> srcDsName_ {};
      // The type of the source data source.
      shared_ptr<string> srcDsType_ {};
      // The ID of the source verification engine.
      shared_ptr<string> srcEngineId_ {};
      // The name of the source verification engine.
      shared_ptr<string> srcEngineName_ {};
      // The type of the source verification engine.
      shared_ptr<string> srcEngineType_ {};
      // Indicates whether to start the task immediately. Valid values:
      // - 0: No.
      // - 1: Yes.
      shared_ptr<int32_t> startImmediately_ {};
      // The destination node parameter settings (destination execute parameters).
      shared_ptr<string> targetGlobalParams_ {};
      // The regular expression information of the verification task.
      shared_ptr<string> taskConfigInfo_ {};
      // The task description.
      shared_ptr<string> taskDescription_ {};
      // The task ID, which uniquely identifies a task.
      shared_ptr<int64_t> taskId_ {};
      // The parameter creation mode. Valid values:
      // - 0: fine-grained creation on a per-table basis
      // - 1: batch creation with the same pattern
      shared_ptr<int32_t> taskMode_ {};
      // The task name. When used as a query condition, fuzzy matching with % is supported (SQL syntax).
      shared_ptr<string> taskName_ {};
      // The name of the verification template.
      shared_ptr<string> templateName_ {};
      // The tenant ID.
      shared_ptr<string> tenantId_ {};
      // The total data volume comparison threshold.
      shared_ptr<float> totalCountThreshold_ {};
      // The user ID.
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataCheckTaskConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataCheckTaskConfigResponseBody::Data) };
    inline GetDataCheckTaskConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataCheckTaskConfigResponseBody::Data) };
    inline GetDataCheckTaskConfigResponseBody& setData(const GetDataCheckTaskConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataCheckTaskConfigResponseBody& setData(GetDataCheckTaskConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetDataCheckTaskConfigResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetDataCheckTaskConfigResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCheckTaskConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCheckTaskConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data body returned by the operation. For the field structure, see the descriptions of child fields.
    shared_ptr<GetDataCheckTaskConfigResponseBody::Data> data_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. A value of true indicates success. A value of false indicates failure. If the call fails, check errCode and errMessage for troubleshooting.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
