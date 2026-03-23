// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKYUUBISPARKAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKYUUBISPARKAPPLICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListKyuubiSparkApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKyuubiSparkApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(applicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(latestSqlStatementStatuses, latestSqlStatementStatuses_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(minDuration, minDuration_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_TO_JSON(sort, sort_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(states, states_);
    };
    friend void from_json(const Darabonba::Json& j, ListKyuubiSparkApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(applicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(latestSqlStatementStatuses, latestSqlStatementStatuses_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(minDuration, minDuration_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_FROM_JSON(sort, sort_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(states, states_);
    };
    ListKyuubiSparkApplicationsRequest() = default ;
    ListKyuubiSparkApplicationsRequest(const ListKyuubiSparkApplicationsRequest &) = default ;
    ListKyuubiSparkApplicationsRequest(ListKyuubiSparkApplicationsRequest &&) = default ;
    ListKyuubiSparkApplicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKyuubiSparkApplicationsRequest() = default ;
    ListKyuubiSparkApplicationsRequest& operator=(const ListKyuubiSparkApplicationsRequest &) = default ;
    ListKyuubiSparkApplicationsRequest& operator=(ListKyuubiSparkApplicationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StartTime : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StartTime& obj) { 
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, StartTime& obj) { 
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      };
      StartTime() = default ;
      StartTime(const StartTime &) = default ;
      StartTime(StartTime &&) = default ;
      StartTime(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StartTime() = default ;
      StartTime& operator=(const StartTime &) = default ;
      StartTime& operator=(StartTime &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline StartTime& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline StartTime& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The end of the start time range.
      shared_ptr<int64_t> endTime_ {};
      // The beginning of the start time range.
      shared_ptr<int64_t> startTime_ {};
    };

    class EndTime : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndTime& obj) { 
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, EndTime& obj) { 
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      };
      EndTime() = default ;
      EndTime(const EndTime &) = default ;
      EndTime(EndTime &&) = default ;
      EndTime(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndTime() = default ;
      EndTime& operator=(const EndTime &) = default ;
      EndTime& operator=(EndTime &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline EndTime& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline EndTime& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationName_ == nullptr && this->endTime_ == nullptr && this->latestSqlStatementStatuses_ == nullptr && this->maxResults_ == nullptr && this->minDuration_ == nullptr
        && this->nextToken_ == nullptr && this->orderBy_ == nullptr && this->resourceQueueId_ == nullptr && this->sort_ == nullptr && this->startTime_ == nullptr
        && this->states_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListKyuubiSparkApplicationsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListKyuubiSparkApplicationsRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline const ListKyuubiSparkApplicationsRequest::EndTime & getEndTime() const { DARABONBA_PTR_GET_CONST(endTime_, ListKyuubiSparkApplicationsRequest::EndTime) };
    inline ListKyuubiSparkApplicationsRequest::EndTime getEndTime() { DARABONBA_PTR_GET(endTime_, ListKyuubiSparkApplicationsRequest::EndTime) };
    inline ListKyuubiSparkApplicationsRequest& setEndTime(const ListKyuubiSparkApplicationsRequest::EndTime & endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };
    inline ListKyuubiSparkApplicationsRequest& setEndTime(ListKyuubiSparkApplicationsRequest::EndTime && endTime) { DARABONBA_PTR_SET_RVALUE(endTime_, endTime) };


    // latestSqlStatementStatuses Field Functions 
    bool hasLatestSqlStatementStatuses() const { return this->latestSqlStatementStatuses_ != nullptr;};
    void deleteLatestSqlStatementStatuses() { this->latestSqlStatementStatuses_ = nullptr;};
    inline string getLatestSqlStatementStatuses() const { DARABONBA_PTR_GET_DEFAULT(latestSqlStatementStatuses_, "") };
    inline ListKyuubiSparkApplicationsRequest& setLatestSqlStatementStatuses(string latestSqlStatementStatuses) { DARABONBA_PTR_SET_VALUE(latestSqlStatementStatuses_, latestSqlStatementStatuses) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKyuubiSparkApplicationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // minDuration Field Functions 
    bool hasMinDuration() const { return this->minDuration_ != nullptr;};
    void deleteMinDuration() { this->minDuration_ = nullptr;};
    inline int64_t getMinDuration() const { DARABONBA_PTR_GET_DEFAULT(minDuration_, 0L) };
    inline ListKyuubiSparkApplicationsRequest& setMinDuration(int64_t minDuration) { DARABONBA_PTR_SET_VALUE(minDuration_, minDuration) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListKyuubiSparkApplicationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline const vector<string> & getOrderBy() const { DARABONBA_PTR_GET_CONST(orderBy_, vector<string>) };
    inline vector<string> getOrderBy() { DARABONBA_PTR_GET(orderBy_, vector<string>) };
    inline ListKyuubiSparkApplicationsRequest& setOrderBy(const vector<string> & orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };
    inline ListKyuubiSparkApplicationsRequest& setOrderBy(vector<string> && orderBy) { DARABONBA_PTR_SET_RVALUE(orderBy_, orderBy) };


    // resourceQueueId Field Functions 
    bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
    void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
    inline string getResourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
    inline ListKyuubiSparkApplicationsRequest& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListKyuubiSparkApplicationsRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline const ListKyuubiSparkApplicationsRequest::StartTime & getStartTime() const { DARABONBA_PTR_GET_CONST(startTime_, ListKyuubiSparkApplicationsRequest::StartTime) };
    inline ListKyuubiSparkApplicationsRequest::StartTime getStartTime() { DARABONBA_PTR_GET(startTime_, ListKyuubiSparkApplicationsRequest::StartTime) };
    inline ListKyuubiSparkApplicationsRequest& setStartTime(const ListKyuubiSparkApplicationsRequest::StartTime & startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };
    inline ListKyuubiSparkApplicationsRequest& setStartTime(ListKyuubiSparkApplicationsRequest::StartTime && startTime) { DARABONBA_PTR_SET_RVALUE(startTime_, startTime) };


    // states Field Functions 
    bool hasStates() const { return this->states_ != nullptr;};
    void deleteStates() { this->states_ = nullptr;};
    inline string getStates() const { DARABONBA_PTR_GET_DEFAULT(states_, "") };
    inline ListKyuubiSparkApplicationsRequest& setStates(string states) { DARABONBA_PTR_SET_VALUE(states_, states) };


  protected:
    // The ID of the application that is submitted by using a Kyuubi gateway.
    shared_ptr<string> applicationId_ {};
    // The name of the Spark application that is submitted by using a Kyuubi gateway.
    shared_ptr<string> applicationName_ {};
    shared_ptr<ListKyuubiSparkApplicationsRequest::EndTime> endTime_ {};
    shared_ptr<string> latestSqlStatementStatuses_ {};
    // The maximum number of entries to return.
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<int64_t> minDuration_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<string>> orderBy_ {};
    shared_ptr<string> resourceQueueId_ {};
    shared_ptr<string> sort_ {};
    // The range of start time.
    shared_ptr<ListKyuubiSparkApplicationsRequest::StartTime> startTime_ {};
    shared_ptr<string> states_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
