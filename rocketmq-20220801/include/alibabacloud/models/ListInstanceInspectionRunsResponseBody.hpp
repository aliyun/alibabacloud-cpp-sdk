// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEINSPECTIONRUNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEINSPECTIONRUNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListInstanceInspectionRunsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceInspectionRunsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceInspectionRunsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListInstanceInspectionRunsResponseBody() = default ;
    ListInstanceInspectionRunsResponseBody(const ListInstanceInspectionRunsResponseBody &) = default ;
    ListInstanceInspectionRunsResponseBody(ListInstanceInspectionRunsResponseBody &&) = default ;
    ListInstanceInspectionRunsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceInspectionRunsResponseBody() = default ;
    ListInstanceInspectionRunsResponseBody& operator=(const ListInstanceInspectionRunsResponseBody &) = default ;
    ListInstanceInspectionRunsResponseBody& operator=(ListInstanceInspectionRunsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(aiSummary, aiSummary_);
        DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(notification, notification_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(reportFinishedAt, reportFinishedAt_);
        DARABONBA_PTR_TO_JSON(reportId, reportId_);
        DARABONBA_PTR_TO_JSON(reportStatus, reportStatus_);
        DARABONBA_PTR_TO_JSON(requestedAt, requestedAt_);
        DARABONBA_PTR_TO_JSON(runId, runId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(summary, summary_);
        DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
        DARABONBA_PTR_TO_JSON(triggerSource, triggerSource_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(aiSummary, aiSummary_);
        DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(notification, notification_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(reportFinishedAt, reportFinishedAt_);
        DARABONBA_PTR_FROM_JSON(reportId, reportId_);
        DARABONBA_PTR_FROM_JSON(reportStatus, reportStatus_);
        DARABONBA_PTR_FROM_JSON(requestedAt, requestedAt_);
        DARABONBA_PTR_FROM_JSON(runId, runId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(summary, summary_);
        DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
        DARABONBA_PTR_FROM_JSON(triggerSource, triggerSource_);
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
      class TimeRange : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TimeRange& obj) { 
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, TimeRange& obj) { 
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        };
        TimeRange() = default ;
        TimeRange(const TimeRange &) = default ;
        TimeRange(TimeRange &&) = default ;
        TimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TimeRange() = default ;
        TimeRange& operator=(const TimeRange &) = default ;
        TimeRange& operator=(TimeRange &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline TimeRange& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline TimeRange& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> endTime_ {};
        shared_ptr<string> startTime_ {};
      };

      class Summary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Summary& obj) { 
          DARABONBA_PTR_TO_JSON(infoCount, infoCount_);
          DARABONBA_PTR_TO_JSON(result, result_);
          DARABONBA_PTR_TO_JSON(riskCount, riskCount_);
        };
        friend void from_json(const Darabonba::Json& j, Summary& obj) { 
          DARABONBA_PTR_FROM_JSON(infoCount, infoCount_);
          DARABONBA_PTR_FROM_JSON(result, result_);
          DARABONBA_PTR_FROM_JSON(riskCount, riskCount_);
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
        virtual bool empty() const override { return this->infoCount_ == nullptr
        && this->result_ == nullptr && this->riskCount_ == nullptr; };
        // infoCount Field Functions 
        bool hasInfoCount() const { return this->infoCount_ != nullptr;};
        void deleteInfoCount() { this->infoCount_ = nullptr;};
        inline int32_t getInfoCount() const { DARABONBA_PTR_GET_DEFAULT(infoCount_, 0) };
        inline Summary& setInfoCount(int32_t infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline Summary& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        // riskCount Field Functions 
        bool hasRiskCount() const { return this->riskCount_ != nullptr;};
        void deleteRiskCount() { this->riskCount_ = nullptr;};
        inline int32_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
        inline Summary& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      protected:
        shared_ptr<int32_t> infoCount_ {};
        shared_ptr<string> result_ {};
        shared_ptr<int32_t> riskCount_ {};
      };

      class Notification : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Notification& obj) { 
          DARABONBA_PTR_TO_JSON(eventId, eventId_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Notification& obj) { 
          DARABONBA_PTR_FROM_JSON(eventId, eventId_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        Notification() = default ;
        Notification(const Notification &) = default ;
        Notification(Notification &&) = default ;
        Notification(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Notification() = default ;
        Notification& operator=(const Notification &) = default ;
        Notification& operator=(Notification &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventId_ == nullptr
        && this->status_ == nullptr; };
        // eventId Field Functions 
        bool hasEventId() const { return this->eventId_ != nullptr;};
        void deleteEventId() { this->eventId_ = nullptr;};
        inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
        inline Notification& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Notification& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> eventId_ {};
        shared_ptr<string> status_ {};
      };

      class AiSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiSummary& obj) { 
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(text, text_);
        };
        friend void from_json(const Darabonba::Json& j, AiSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(text, text_);
        };
        AiSummary() = default ;
        AiSummary(const AiSummary &) = default ;
        AiSummary(AiSummary &&) = default ;
        AiSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiSummary() = default ;
        AiSummary& operator=(const AiSummary &) = default ;
        AiSummary& operator=(AiSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->text_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AiSummary& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline AiSummary& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        // Pending 等待、Running 生成中、Succeeded 已生成、Failed 生成失败；不改变巡检结果。
        shared_ptr<string> status_ {};
        // 仅生成成功时返回，最多 200 字，不由前端拼接或截取。
        shared_ptr<string> text_ {};
      };

      virtual bool empty() const override { return this->aiSummary_ == nullptr
        && this->finishedAt_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->notification_ == nullptr && this->regionId_ == nullptr
        && this->reportFinishedAt_ == nullptr && this->reportId_ == nullptr && this->reportStatus_ == nullptr && this->requestedAt_ == nullptr && this->runId_ == nullptr
        && this->status_ == nullptr && this->summary_ == nullptr && this->timeRange_ == nullptr && this->triggerSource_ == nullptr; };
      // aiSummary Field Functions 
      bool hasAiSummary() const { return this->aiSummary_ != nullptr;};
      void deleteAiSummary() { this->aiSummary_ = nullptr;};
      inline const Data::AiSummary & getAiSummary() const { DARABONBA_PTR_GET_CONST(aiSummary_, Data::AiSummary) };
      inline Data::AiSummary getAiSummary() { DARABONBA_PTR_GET(aiSummary_, Data::AiSummary) };
      inline Data& setAiSummary(const Data::AiSummary & aiSummary) { DARABONBA_PTR_SET_VALUE(aiSummary_, aiSummary) };
      inline Data& setAiSummary(Data::AiSummary && aiSummary) { DARABONBA_PTR_SET_RVALUE(aiSummary_, aiSummary) };


      // finishedAt Field Functions 
      bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
      void deleteFinishedAt() { this->finishedAt_ = nullptr;};
      inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
      inline Data& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // notification Field Functions 
      bool hasNotification() const { return this->notification_ != nullptr;};
      void deleteNotification() { this->notification_ = nullptr;};
      inline const Data::Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, Data::Notification) };
      inline Data::Notification getNotification() { DARABONBA_PTR_GET(notification_, Data::Notification) };
      inline Data& setNotification(const Data::Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
      inline Data& setNotification(Data::Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // reportFinishedAt Field Functions 
      bool hasReportFinishedAt() const { return this->reportFinishedAt_ != nullptr;};
      void deleteReportFinishedAt() { this->reportFinishedAt_ = nullptr;};
      inline string getReportFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(reportFinishedAt_, "") };
      inline Data& setReportFinishedAt(string reportFinishedAt) { DARABONBA_PTR_SET_VALUE(reportFinishedAt_, reportFinishedAt) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline Data& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // reportStatus Field Functions 
      bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
      void deleteReportStatus() { this->reportStatus_ = nullptr;};
      inline string getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
      inline Data& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


      // requestedAt Field Functions 
      bool hasRequestedAt() const { return this->requestedAt_ != nullptr;};
      void deleteRequestedAt() { this->requestedAt_ = nullptr;};
      inline string getRequestedAt() const { DARABONBA_PTR_GET_DEFAULT(requestedAt_, "") };
      inline Data& setRequestedAt(string requestedAt) { DARABONBA_PTR_SET_VALUE(requestedAt_, requestedAt) };


      // runId Field Functions 
      bool hasRunId() const { return this->runId_ != nullptr;};
      void deleteRunId() { this->runId_ = nullptr;};
      inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
      inline Data& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline const Data::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, Data::Summary) };
      inline Data::Summary getSummary() { DARABONBA_PTR_GET(summary_, Data::Summary) };
      inline Data& setSummary(const Data::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
      inline Data& setSummary(Data::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


      // timeRange Field Functions 
      bool hasTimeRange() const { return this->timeRange_ != nullptr;};
      void deleteTimeRange() { this->timeRange_ = nullptr;};
      inline const Data::TimeRange & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, Data::TimeRange) };
      inline Data::TimeRange getTimeRange() { DARABONBA_PTR_GET(timeRange_, Data::TimeRange) };
      inline Data& setTimeRange(const Data::TimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
      inline Data& setTimeRange(Data::TimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


      // triggerSource Field Functions 
      bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
      void deleteTriggerSource() { this->triggerSource_ = nullptr;};
      inline string getTriggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
      inline Data& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


    protected:
      // 每次巡检结果由 LLM 总结；包含生成状态及成功后的原文，未生成时为空。
      shared_ptr<Data::AiSummary> aiSummary_ {};
      shared_ptr<string> finishedAt_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<Data::Notification> notification_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> reportFinishedAt_ {};
      shared_ptr<string> reportId_ {};
      shared_ptr<string> reportStatus_ {};
      shared_ptr<string> requestedAt_ {};
      shared_ptr<string> runId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<Data::Summary> summary_ {};
      shared_ptr<Data::TimeRange> timeRange_ {};
      shared_ptr<string> triggerSource_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListInstanceInspectionRunsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListInstanceInspectionRunsResponseBody::Data>) };
    inline vector<ListInstanceInspectionRunsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListInstanceInspectionRunsResponseBody::Data>) };
    inline ListInstanceInspectionRunsResponseBody& setData(const vector<ListInstanceInspectionRunsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInstanceInspectionRunsResponseBody& setData(vector<ListInstanceInspectionRunsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInstanceInspectionRunsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInstanceInspectionRunsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListInstanceInspectionRunsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ListInstanceInspectionRunsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
