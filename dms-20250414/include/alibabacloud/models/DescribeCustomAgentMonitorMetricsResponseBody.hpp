// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMAGENTMONITORMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMAGENTMONITORMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeCustomAgentMonitorMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomAgentMonitorMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomAgentMonitorMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCustomAgentMonitorMetricsResponseBody() = default ;
    DescribeCustomAgentMonitorMetricsResponseBody(const DescribeCustomAgentMonitorMetricsResponseBody &) = default ;
    DescribeCustomAgentMonitorMetricsResponseBody(DescribeCustomAgentMonitorMetricsResponseBody &&) = default ;
    DescribeCustomAgentMonitorMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomAgentMonitorMetricsResponseBody() = default ;
    DescribeCustomAgentMonitorMetricsResponseBody& operator=(const DescribeCustomAgentMonitorMetricsResponseBody &) = default ;
    DescribeCustomAgentMonitorMetricsResponseBody& operator=(DescribeCustomAgentMonitorMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveUserCount, activeUserCount_);
        DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
        DARABONBA_PTR_TO_JSON(DislikeCount, dislikeCount_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Granularity, granularity_);
        DARABONBA_PTR_TO_JSON(LikeCount, likeCount_);
        DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Trend, trend_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveUserCount, activeUserCount_);
        DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
        DARABONBA_PTR_FROM_JSON(DislikeCount, dislikeCount_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
        DARABONBA_PTR_FROM_JSON(LikeCount, likeCount_);
        DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Trend, trend_);
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
      class Trend : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Trend& obj) { 
          DARABONBA_PTR_TO_JSON(ActiveUserCount, activeUserCount_);
          DARABONBA_PTR_TO_JSON(DislikeCount, dislikeCount_);
          DARABONBA_PTR_TO_JSON(LikeCount, likeCount_);
          DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
          DARABONBA_PTR_TO_JSON(StatTime, statTime_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Trend& obj) { 
          DARABONBA_PTR_FROM_JSON(ActiveUserCount, activeUserCount_);
          DARABONBA_PTR_FROM_JSON(DislikeCount, dislikeCount_);
          DARABONBA_PTR_FROM_JSON(LikeCount, likeCount_);
          DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
          DARABONBA_PTR_FROM_JSON(StatTime, statTime_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        Trend() = default ;
        Trend(const Trend &) = default ;
        Trend(Trend &&) = default ;
        Trend(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Trend() = default ;
        Trend& operator=(const Trend &) = default ;
        Trend& operator=(Trend &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activeUserCount_ == nullptr
        && this->dislikeCount_ == nullptr && this->likeCount_ == nullptr && this->sessionCount_ == nullptr && this->statTime_ == nullptr && this->timestamp_ == nullptr; };
        // activeUserCount Field Functions 
        bool hasActiveUserCount() const { return this->activeUserCount_ != nullptr;};
        void deleteActiveUserCount() { this->activeUserCount_ = nullptr;};
        inline int64_t getActiveUserCount() const { DARABONBA_PTR_GET_DEFAULT(activeUserCount_, 0L) };
        inline Trend& setActiveUserCount(int64_t activeUserCount) { DARABONBA_PTR_SET_VALUE(activeUserCount_, activeUserCount) };


        // dislikeCount Field Functions 
        bool hasDislikeCount() const { return this->dislikeCount_ != nullptr;};
        void deleteDislikeCount() { this->dislikeCount_ = nullptr;};
        inline int64_t getDislikeCount() const { DARABONBA_PTR_GET_DEFAULT(dislikeCount_, 0L) };
        inline Trend& setDislikeCount(int64_t dislikeCount) { DARABONBA_PTR_SET_VALUE(dislikeCount_, dislikeCount) };


        // likeCount Field Functions 
        bool hasLikeCount() const { return this->likeCount_ != nullptr;};
        void deleteLikeCount() { this->likeCount_ = nullptr;};
        inline int64_t getLikeCount() const { DARABONBA_PTR_GET_DEFAULT(likeCount_, 0L) };
        inline Trend& setLikeCount(int64_t likeCount) { DARABONBA_PTR_SET_VALUE(likeCount_, likeCount) };


        // sessionCount Field Functions 
        bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
        void deleteSessionCount() { this->sessionCount_ = nullptr;};
        inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
        inline Trend& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


        // statTime Field Functions 
        bool hasStatTime() const { return this->statTime_ != nullptr;};
        void deleteStatTime() { this->statTime_ = nullptr;};
        inline string getStatTime() const { DARABONBA_PTR_GET_DEFAULT(statTime_, "") };
        inline Trend& setStatTime(string statTime) { DARABONBA_PTR_SET_VALUE(statTime_, statTime) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline Trend& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The number of active users within the statistical period.
        shared_ptr<int64_t> activeUserCount_ {};
        // The number of dislikes within the statistical period.
        shared_ptr<int64_t> dislikeCount_ {};
        // The number of likes within the statistical period.
        shared_ptr<int64_t> likeCount_ {};
        // The number of sessions within the statistical period.
        shared_ptr<int64_t> sessionCount_ {};
        // The statistical time. For daily granularity, the format is 2026-09-01. For hourly granularity, the format is 2026-09-01 13:00.
        shared_ptr<string> statTime_ {};
        // The start timestamp of the statistical period (epoch millis).
        shared_ptr<int64_t> timestamp_ {};
      };

      virtual bool empty() const override { return this->activeUserCount_ == nullptr
        && this->customAgentId_ == nullptr && this->dislikeCount_ == nullptr && this->endTime_ == nullptr && this->granularity_ == nullptr && this->likeCount_ == nullptr
        && this->sessionCount_ == nullptr && this->startTime_ == nullptr && this->trend_ == nullptr; };
      // activeUserCount Field Functions 
      bool hasActiveUserCount() const { return this->activeUserCount_ != nullptr;};
      void deleteActiveUserCount() { this->activeUserCount_ = nullptr;};
      inline int64_t getActiveUserCount() const { DARABONBA_PTR_GET_DEFAULT(activeUserCount_, 0L) };
      inline Data& setActiveUserCount(int64_t activeUserCount) { DARABONBA_PTR_SET_VALUE(activeUserCount_, activeUserCount) };


      // customAgentId Field Functions 
      bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
      void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
      inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
      inline Data& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


      // dislikeCount Field Functions 
      bool hasDislikeCount() const { return this->dislikeCount_ != nullptr;};
      void deleteDislikeCount() { this->dislikeCount_ = nullptr;};
      inline int64_t getDislikeCount() const { DARABONBA_PTR_GET_DEFAULT(dislikeCount_, 0L) };
      inline Data& setDislikeCount(int64_t dislikeCount) { DARABONBA_PTR_SET_VALUE(dislikeCount_, dislikeCount) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // granularity Field Functions 
      bool hasGranularity() const { return this->granularity_ != nullptr;};
      void deleteGranularity() { this->granularity_ = nullptr;};
      inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
      inline Data& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


      // likeCount Field Functions 
      bool hasLikeCount() const { return this->likeCount_ != nullptr;};
      void deleteLikeCount() { this->likeCount_ = nullptr;};
      inline int64_t getLikeCount() const { DARABONBA_PTR_GET_DEFAULT(likeCount_, 0L) };
      inline Data& setLikeCount(int64_t likeCount) { DARABONBA_PTR_SET_VALUE(likeCount_, likeCount) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline Data& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // trend Field Functions 
      bool hasTrend() const { return this->trend_ != nullptr;};
      void deleteTrend() { this->trend_ = nullptr;};
      inline const vector<Data::Trend> & getTrend() const { DARABONBA_PTR_GET_CONST(trend_, vector<Data::Trend>) };
      inline vector<Data::Trend> getTrend() { DARABONBA_PTR_GET(trend_, vector<Data::Trend>) };
      inline Data& setTrend(const vector<Data::Trend> & trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };
      inline Data& setTrend(vector<Data::Trend> && trend) { DARABONBA_PTR_SET_RVALUE(trend_, trend) };


    protected:
      // The number of active users.
      shared_ptr<int64_t> activeUserCount_ {};
      // The custom agent ID.
      shared_ptr<string> customAgentId_ {};
      // The total number of dislikes.
      shared_ptr<int64_t> dislikeCount_ {};
      // The end time of the statistical period (epoch millis).
      shared_ptr<int64_t> endTime_ {};
      // The aggregation granularity: DAY / HOUR.
      shared_ptr<string> granularity_ {};
      // The total number of likes.
      shared_ptr<int64_t> likeCount_ {};
      // The total number of sessions.
      shared_ptr<int64_t> sessionCount_ {};
      // The start time of the statistical period (epoch millis).
      shared_ptr<int64_t> startTime_ {};
      // The trend data aggregated by the specified granularity. Time points without data are filled with 0. The data is sorted in chronological order.
      shared_ptr<vector<Data::Trend>> trend_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCustomAgentMonitorMetricsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCustomAgentMonitorMetricsResponseBody::Data) };
    inline DescribeCustomAgentMonitorMetricsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCustomAgentMonitorMetricsResponseBody::Data) };
    inline DescribeCustomAgentMonitorMetricsResponseBody& setData(const DescribeCustomAgentMonitorMetricsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCustomAgentMonitorMetricsResponseBody& setData(DescribeCustomAgentMonitorMetricsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeCustomAgentMonitorMetricsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeCustomAgentMonitorMetricsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomAgentMonitorMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCustomAgentMonitorMetricsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response struct.
    shared_ptr<DescribeCustomAgentMonitorMetricsResponseBody::Data> data_ {};
    // The error code returned when the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned when the call fails.
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - **true**: The request is successful.
    // - **false**: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
