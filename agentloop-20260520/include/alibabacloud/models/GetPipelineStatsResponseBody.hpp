// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINESTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINESTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetPipelineStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(granularity, granularity_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(timeSeries, timeSeries_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(timeSeries, timeSeries_);
    };
    GetPipelineStatsResponseBody() = default ;
    GetPipelineStatsResponseBody(const GetPipelineStatsResponseBody &) = default ;
    GetPipelineStatsResponseBody(GetPipelineStatsResponseBody &&) = default ;
    GetPipelineStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineStatsResponseBody() = default ;
    GetPipelineStatsResponseBody& operator=(const GetPipelineStatsResponseBody &) = default ;
    GetPipelineStatsResponseBody& operator=(GetPipelineStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeSeries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeSeries& obj) { 
        DARABONBA_PTR_TO_JSON(avgElapsedMs, avgElapsedMs_);
        DARABONBA_PTR_TO_JSON(outputBytes, outputBytes_);
        DARABONBA_PTR_TO_JSON(outputRows, outputRows_);
        DARABONBA_PTR_TO_JSON(processedBytes, processedBytes_);
        DARABONBA_PTR_TO_JSON(processedRows, processedRows_);
        DARABONBA_PTR_TO_JSON(runs, runs_);
        DARABONBA_PTR_TO_JSON(succeededRuns, succeededRuns_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, TimeSeries& obj) { 
        DARABONBA_PTR_FROM_JSON(avgElapsedMs, avgElapsedMs_);
        DARABONBA_PTR_FROM_JSON(outputBytes, outputBytes_);
        DARABONBA_PTR_FROM_JSON(outputRows, outputRows_);
        DARABONBA_PTR_FROM_JSON(processedBytes, processedBytes_);
        DARABONBA_PTR_FROM_JSON(processedRows, processedRows_);
        DARABONBA_PTR_FROM_JSON(runs, runs_);
        DARABONBA_PTR_FROM_JSON(succeededRuns, succeededRuns_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      };
      TimeSeries() = default ;
      TimeSeries(const TimeSeries &) = default ;
      TimeSeries(TimeSeries &&) = default ;
      TimeSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeSeries() = default ;
      TimeSeries& operator=(const TimeSeries &) = default ;
      TimeSeries& operator=(TimeSeries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->avgElapsedMs_ == nullptr
        && this->outputBytes_ == nullptr && this->outputRows_ == nullptr && this->processedBytes_ == nullptr && this->processedRows_ == nullptr && this->runs_ == nullptr
        && this->succeededRuns_ == nullptr && this->timestamp_ == nullptr; };
      // avgElapsedMs Field Functions 
      bool hasAvgElapsedMs() const { return this->avgElapsedMs_ != nullptr;};
      void deleteAvgElapsedMs() { this->avgElapsedMs_ = nullptr;};
      inline int64_t getAvgElapsedMs() const { DARABONBA_PTR_GET_DEFAULT(avgElapsedMs_, 0L) };
      inline TimeSeries& setAvgElapsedMs(int64_t avgElapsedMs) { DARABONBA_PTR_SET_VALUE(avgElapsedMs_, avgElapsedMs) };


      // outputBytes Field Functions 
      bool hasOutputBytes() const { return this->outputBytes_ != nullptr;};
      void deleteOutputBytes() { this->outputBytes_ = nullptr;};
      inline int64_t getOutputBytes() const { DARABONBA_PTR_GET_DEFAULT(outputBytes_, 0L) };
      inline TimeSeries& setOutputBytes(int64_t outputBytes) { DARABONBA_PTR_SET_VALUE(outputBytes_, outputBytes) };


      // outputRows Field Functions 
      bool hasOutputRows() const { return this->outputRows_ != nullptr;};
      void deleteOutputRows() { this->outputRows_ = nullptr;};
      inline int64_t getOutputRows() const { DARABONBA_PTR_GET_DEFAULT(outputRows_, 0L) };
      inline TimeSeries& setOutputRows(int64_t outputRows) { DARABONBA_PTR_SET_VALUE(outputRows_, outputRows) };


      // processedBytes Field Functions 
      bool hasProcessedBytes() const { return this->processedBytes_ != nullptr;};
      void deleteProcessedBytes() { this->processedBytes_ = nullptr;};
      inline int64_t getProcessedBytes() const { DARABONBA_PTR_GET_DEFAULT(processedBytes_, 0L) };
      inline TimeSeries& setProcessedBytes(int64_t processedBytes) { DARABONBA_PTR_SET_VALUE(processedBytes_, processedBytes) };


      // processedRows Field Functions 
      bool hasProcessedRows() const { return this->processedRows_ != nullptr;};
      void deleteProcessedRows() { this->processedRows_ = nullptr;};
      inline int64_t getProcessedRows() const { DARABONBA_PTR_GET_DEFAULT(processedRows_, 0L) };
      inline TimeSeries& setProcessedRows(int64_t processedRows) { DARABONBA_PTR_SET_VALUE(processedRows_, processedRows) };


      // runs Field Functions 
      bool hasRuns() const { return this->runs_ != nullptr;};
      void deleteRuns() { this->runs_ = nullptr;};
      inline int64_t getRuns() const { DARABONBA_PTR_GET_DEFAULT(runs_, 0L) };
      inline TimeSeries& setRuns(int64_t runs) { DARABONBA_PTR_SET_VALUE(runs_, runs) };


      // succeededRuns Field Functions 
      bool hasSucceededRuns() const { return this->succeededRuns_ != nullptr;};
      void deleteSucceededRuns() { this->succeededRuns_ = nullptr;};
      inline int64_t getSucceededRuns() const { DARABONBA_PTR_GET_DEFAULT(succeededRuns_, 0L) };
      inline TimeSeries& setSucceededRuns(int64_t succeededRuns) { DARABONBA_PTR_SET_VALUE(succeededRuns_, succeededRuns) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline TimeSeries& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      shared_ptr<int64_t> avgElapsedMs_ {};
      shared_ptr<int64_t> outputBytes_ {};
      shared_ptr<int64_t> outputRows_ {};
      shared_ptr<int64_t> processedBytes_ {};
      shared_ptr<int64_t> processedRows_ {};
      shared_ptr<int64_t> runs_ {};
      shared_ptr<int64_t> succeededRuns_ {};
      shared_ptr<int64_t> timestamp_ {};
    };

    class Summary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Summary& obj) { 
        DARABONBA_PTR_TO_JSON(avgElapsedMs, avgElapsedMs_);
        DARABONBA_PTR_TO_JSON(cancelledRuns, cancelledRuns_);
        DARABONBA_PTR_TO_JSON(committedWatermark, committedWatermark_);
        DARABONBA_PTR_TO_JSON(failedRuns, failedRuns_);
        DARABONBA_PTR_TO_JSON(scheduleLagSeconds, scheduleLagSeconds_);
        DARABONBA_PTR_TO_JSON(succeededRuns, succeededRuns_);
        DARABONBA_PTR_TO_JSON(successRate, successRate_);
        DARABONBA_PTR_TO_JSON(totalOutputBytes, totalOutputBytes_);
        DARABONBA_PTR_TO_JSON(totalOutputRows, totalOutputRows_);
        DARABONBA_PTR_TO_JSON(totalProcessedBytes, totalProcessedBytes_);
        DARABONBA_PTR_TO_JSON(totalProcessedRows, totalProcessedRows_);
        DARABONBA_PTR_TO_JSON(totalRuns, totalRuns_);
      };
      friend void from_json(const Darabonba::Json& j, Summary& obj) { 
        DARABONBA_PTR_FROM_JSON(avgElapsedMs, avgElapsedMs_);
        DARABONBA_PTR_FROM_JSON(cancelledRuns, cancelledRuns_);
        DARABONBA_PTR_FROM_JSON(committedWatermark, committedWatermark_);
        DARABONBA_PTR_FROM_JSON(failedRuns, failedRuns_);
        DARABONBA_PTR_FROM_JSON(scheduleLagSeconds, scheduleLagSeconds_);
        DARABONBA_PTR_FROM_JSON(succeededRuns, succeededRuns_);
        DARABONBA_PTR_FROM_JSON(successRate, successRate_);
        DARABONBA_PTR_FROM_JSON(totalOutputBytes, totalOutputBytes_);
        DARABONBA_PTR_FROM_JSON(totalOutputRows, totalOutputRows_);
        DARABONBA_PTR_FROM_JSON(totalProcessedBytes, totalProcessedBytes_);
        DARABONBA_PTR_FROM_JSON(totalProcessedRows, totalProcessedRows_);
        DARABONBA_PTR_FROM_JSON(totalRuns, totalRuns_);
      };
      Summary() = default ;
      Summary(const Summary &) = default ;
      Summary(Summary &&) = default ;
      Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Summary() = default ;
      Summary& operator=(const Summary &) = default ;
      Summary& operator=(Summary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->avgElapsedMs_ == nullptr
        && this->cancelledRuns_ == nullptr && this->committedWatermark_ == nullptr && this->failedRuns_ == nullptr && this->scheduleLagSeconds_ == nullptr && this->succeededRuns_ == nullptr
        && this->successRate_ == nullptr && this->totalOutputBytes_ == nullptr && this->totalOutputRows_ == nullptr && this->totalProcessedBytes_ == nullptr && this->totalProcessedRows_ == nullptr
        && this->totalRuns_ == nullptr; };
      // avgElapsedMs Field Functions 
      bool hasAvgElapsedMs() const { return this->avgElapsedMs_ != nullptr;};
      void deleteAvgElapsedMs() { this->avgElapsedMs_ = nullptr;};
      inline int64_t getAvgElapsedMs() const { DARABONBA_PTR_GET_DEFAULT(avgElapsedMs_, 0L) };
      inline Summary& setAvgElapsedMs(int64_t avgElapsedMs) { DARABONBA_PTR_SET_VALUE(avgElapsedMs_, avgElapsedMs) };


      // cancelledRuns Field Functions 
      bool hasCancelledRuns() const { return this->cancelledRuns_ != nullptr;};
      void deleteCancelledRuns() { this->cancelledRuns_ = nullptr;};
      inline int64_t getCancelledRuns() const { DARABONBA_PTR_GET_DEFAULT(cancelledRuns_, 0L) };
      inline Summary& setCancelledRuns(int64_t cancelledRuns) { DARABONBA_PTR_SET_VALUE(cancelledRuns_, cancelledRuns) };


      // committedWatermark Field Functions 
      bool hasCommittedWatermark() const { return this->committedWatermark_ != nullptr;};
      void deleteCommittedWatermark() { this->committedWatermark_ = nullptr;};
      inline int64_t getCommittedWatermark() const { DARABONBA_PTR_GET_DEFAULT(committedWatermark_, 0L) };
      inline Summary& setCommittedWatermark(int64_t committedWatermark) { DARABONBA_PTR_SET_VALUE(committedWatermark_, committedWatermark) };


      // failedRuns Field Functions 
      bool hasFailedRuns() const { return this->failedRuns_ != nullptr;};
      void deleteFailedRuns() { this->failedRuns_ = nullptr;};
      inline int64_t getFailedRuns() const { DARABONBA_PTR_GET_DEFAULT(failedRuns_, 0L) };
      inline Summary& setFailedRuns(int64_t failedRuns) { DARABONBA_PTR_SET_VALUE(failedRuns_, failedRuns) };


      // scheduleLagSeconds Field Functions 
      bool hasScheduleLagSeconds() const { return this->scheduleLagSeconds_ != nullptr;};
      void deleteScheduleLagSeconds() { this->scheduleLagSeconds_ = nullptr;};
      inline int64_t getScheduleLagSeconds() const { DARABONBA_PTR_GET_DEFAULT(scheduleLagSeconds_, 0L) };
      inline Summary& setScheduleLagSeconds(int64_t scheduleLagSeconds) { DARABONBA_PTR_SET_VALUE(scheduleLagSeconds_, scheduleLagSeconds) };


      // succeededRuns Field Functions 
      bool hasSucceededRuns() const { return this->succeededRuns_ != nullptr;};
      void deleteSucceededRuns() { this->succeededRuns_ = nullptr;};
      inline int64_t getSucceededRuns() const { DARABONBA_PTR_GET_DEFAULT(succeededRuns_, 0L) };
      inline Summary& setSucceededRuns(int64_t succeededRuns) { DARABONBA_PTR_SET_VALUE(succeededRuns_, succeededRuns) };


      // successRate Field Functions 
      bool hasSuccessRate() const { return this->successRate_ != nullptr;};
      void deleteSuccessRate() { this->successRate_ = nullptr;};
      inline double getSuccessRate() const { DARABONBA_PTR_GET_DEFAULT(successRate_, 0.0) };
      inline Summary& setSuccessRate(double successRate) { DARABONBA_PTR_SET_VALUE(successRate_, successRate) };


      // totalOutputBytes Field Functions 
      bool hasTotalOutputBytes() const { return this->totalOutputBytes_ != nullptr;};
      void deleteTotalOutputBytes() { this->totalOutputBytes_ = nullptr;};
      inline int64_t getTotalOutputBytes() const { DARABONBA_PTR_GET_DEFAULT(totalOutputBytes_, 0L) };
      inline Summary& setTotalOutputBytes(int64_t totalOutputBytes) { DARABONBA_PTR_SET_VALUE(totalOutputBytes_, totalOutputBytes) };


      // totalOutputRows Field Functions 
      bool hasTotalOutputRows() const { return this->totalOutputRows_ != nullptr;};
      void deleteTotalOutputRows() { this->totalOutputRows_ = nullptr;};
      inline int64_t getTotalOutputRows() const { DARABONBA_PTR_GET_DEFAULT(totalOutputRows_, 0L) };
      inline Summary& setTotalOutputRows(int64_t totalOutputRows) { DARABONBA_PTR_SET_VALUE(totalOutputRows_, totalOutputRows) };


      // totalProcessedBytes Field Functions 
      bool hasTotalProcessedBytes() const { return this->totalProcessedBytes_ != nullptr;};
      void deleteTotalProcessedBytes() { this->totalProcessedBytes_ = nullptr;};
      inline int64_t getTotalProcessedBytes() const { DARABONBA_PTR_GET_DEFAULT(totalProcessedBytes_, 0L) };
      inline Summary& setTotalProcessedBytes(int64_t totalProcessedBytes) { DARABONBA_PTR_SET_VALUE(totalProcessedBytes_, totalProcessedBytes) };


      // totalProcessedRows Field Functions 
      bool hasTotalProcessedRows() const { return this->totalProcessedRows_ != nullptr;};
      void deleteTotalProcessedRows() { this->totalProcessedRows_ = nullptr;};
      inline int64_t getTotalProcessedRows() const { DARABONBA_PTR_GET_DEFAULT(totalProcessedRows_, 0L) };
      inline Summary& setTotalProcessedRows(int64_t totalProcessedRows) { DARABONBA_PTR_SET_VALUE(totalProcessedRows_, totalProcessedRows) };


      // totalRuns Field Functions 
      bool hasTotalRuns() const { return this->totalRuns_ != nullptr;};
      void deleteTotalRuns() { this->totalRuns_ = nullptr;};
      inline int64_t getTotalRuns() const { DARABONBA_PTR_GET_DEFAULT(totalRuns_, 0L) };
      inline Summary& setTotalRuns(int64_t totalRuns) { DARABONBA_PTR_SET_VALUE(totalRuns_, totalRuns) };


    protected:
      shared_ptr<int64_t> avgElapsedMs_ {};
      shared_ptr<int64_t> cancelledRuns_ {};
      shared_ptr<int64_t> committedWatermark_ {};
      shared_ptr<int64_t> failedRuns_ {};
      shared_ptr<int64_t> scheduleLagSeconds_ {};
      shared_ptr<int64_t> succeededRuns_ {};
      shared_ptr<double> successRate_ {};
      shared_ptr<int64_t> totalOutputBytes_ {};
      shared_ptr<int64_t> totalOutputRows_ {};
      shared_ptr<int64_t> totalProcessedBytes_ {};
      shared_ptr<int64_t> totalProcessedRows_ {};
      shared_ptr<int64_t> totalRuns_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->granularity_ == nullptr && this->pipelineName_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->summary_ == nullptr
        && this->timeSeries_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetPipelineStatsResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline GetPipelineStatsResponseBody& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline GetPipelineStatsResponseBody& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPipelineStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetPipelineStatsResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const GetPipelineStatsResponseBody::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, GetPipelineStatsResponseBody::Summary) };
    inline GetPipelineStatsResponseBody::Summary getSummary() { DARABONBA_PTR_GET(summary_, GetPipelineStatsResponseBody::Summary) };
    inline GetPipelineStatsResponseBody& setSummary(const GetPipelineStatsResponseBody::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline GetPipelineStatsResponseBody& setSummary(GetPipelineStatsResponseBody::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // timeSeries Field Functions 
    bool hasTimeSeries() const { return this->timeSeries_ != nullptr;};
    void deleteTimeSeries() { this->timeSeries_ = nullptr;};
    inline const vector<GetPipelineStatsResponseBody::TimeSeries> & getTimeSeries() const { DARABONBA_PTR_GET_CONST(timeSeries_, vector<GetPipelineStatsResponseBody::TimeSeries>) };
    inline vector<GetPipelineStatsResponseBody::TimeSeries> getTimeSeries() { DARABONBA_PTR_GET(timeSeries_, vector<GetPipelineStatsResponseBody::TimeSeries>) };
    inline GetPipelineStatsResponseBody& setTimeSeries(const vector<GetPipelineStatsResponseBody::TimeSeries> & timeSeries) { DARABONBA_PTR_SET_VALUE(timeSeries_, timeSeries) };
    inline GetPipelineStatsResponseBody& setTimeSeries(vector<GetPipelineStatsResponseBody::TimeSeries> && timeSeries) { DARABONBA_PTR_SET_RVALUE(timeSeries_, timeSeries) };


  protected:
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> granularity_ {};
    // The name of the pipeline.
    shared_ptr<string> pipelineName_ {};
    // The request ID, which is used to locate the request during troubleshooting.
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<GetPipelineStatsResponseBody::Summary> summary_ {};
    shared_ptr<vector<GetPipelineStatsResponseBody::TimeSeries>> timeSeries_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
