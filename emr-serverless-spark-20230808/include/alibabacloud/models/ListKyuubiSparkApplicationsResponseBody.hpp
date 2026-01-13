// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKYUUBISPARKAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKYUUBISPARKAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunLog.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListKyuubiSparkApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKyuubiSparkApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(applications, applications_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListKyuubiSparkApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(applications, applications_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListKyuubiSparkApplicationsResponseBody() = default ;
    ListKyuubiSparkApplicationsResponseBody(const ListKyuubiSparkApplicationsResponseBody &) = default ;
    ListKyuubiSparkApplicationsResponseBody(ListKyuubiSparkApplicationsResponseBody &&) = default ;
    ListKyuubiSparkApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKyuubiSparkApplicationsResponseBody() = default ;
    ListKyuubiSparkApplicationsResponseBody& operator=(const ListKyuubiSparkApplicationsResponseBody &) = default ;
    ListKyuubiSparkApplicationsResponseBody& operator=(ListKyuubiSparkApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applications& obj) { 
        DARABONBA_PTR_TO_JSON(applicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(applicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(cuHours, cuHours_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(exitReason, exitReason_);
        DARABONBA_PTR_TO_JSON(kyuubiServiceId, kyuubiServiceId_);
        DARABONBA_PTR_TO_JSON(latestSqlStatementStatus, latestSqlStatementStatus_);
        DARABONBA_PTR_TO_JSON(mbSeconds, mbSeconds_);
        DARABONBA_PTR_TO_JSON(resourceQueueId, resourceQueueId_);
        DARABONBA_PTR_TO_JSON(runLog, runLog_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(vcoreSeconds, vcoreSeconds_);
        DARABONBA_PTR_TO_JSON(webUI, webUI_);
      };
      friend void from_json(const Darabonba::Json& j, Applications& obj) { 
        DARABONBA_PTR_FROM_JSON(applicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(applicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(cuHours, cuHours_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(exitReason, exitReason_);
        DARABONBA_PTR_FROM_JSON(kyuubiServiceId, kyuubiServiceId_);
        DARABONBA_PTR_FROM_JSON(latestSqlStatementStatus, latestSqlStatementStatus_);
        DARABONBA_PTR_FROM_JSON(mbSeconds, mbSeconds_);
        DARABONBA_PTR_FROM_JSON(resourceQueueId, resourceQueueId_);
        DARABONBA_PTR_FROM_JSON(runLog, runLog_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(vcoreSeconds, vcoreSeconds_);
        DARABONBA_PTR_FROM_JSON(webUI, webUI_);
      };
      Applications() = default ;
      Applications(const Applications &) = default ;
      Applications(Applications &&) = default ;
      Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applications() = default ;
      Applications& operator=(const Applications &) = default ;
      Applications& operator=(Applications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationName_ == nullptr && this->cuHours_ == nullptr && this->endTime_ == nullptr && this->exitReason_ == nullptr && this->kyuubiServiceId_ == nullptr
        && this->latestSqlStatementStatus_ == nullptr && this->mbSeconds_ == nullptr && this->resourceQueueId_ == nullptr && this->runLog_ == nullptr && this->startTime_ == nullptr
        && this->state_ == nullptr && this->tags_ == nullptr && this->vcoreSeconds_ == nullptr && this->webUI_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline Applications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline Applications& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // cuHours Field Functions 
      bool hasCuHours() const { return this->cuHours_ != nullptr;};
      void deleteCuHours() { this->cuHours_ = nullptr;};
      inline double getCuHours() const { DARABONBA_PTR_GET_DEFAULT(cuHours_, 0.0) };
      inline Applications& setCuHours(double cuHours) { DARABONBA_PTR_SET_VALUE(cuHours_, cuHours) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Applications& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // exitReason Field Functions 
      bool hasExitReason() const { return this->exitReason_ != nullptr;};
      void deleteExitReason() { this->exitReason_ = nullptr;};
      inline string getExitReason() const { DARABONBA_PTR_GET_DEFAULT(exitReason_, "") };
      inline Applications& setExitReason(string exitReason) { DARABONBA_PTR_SET_VALUE(exitReason_, exitReason) };


      // kyuubiServiceId Field Functions 
      bool hasKyuubiServiceId() const { return this->kyuubiServiceId_ != nullptr;};
      void deleteKyuubiServiceId() { this->kyuubiServiceId_ = nullptr;};
      inline string getKyuubiServiceId() const { DARABONBA_PTR_GET_DEFAULT(kyuubiServiceId_, "") };
      inline Applications& setKyuubiServiceId(string kyuubiServiceId) { DARABONBA_PTR_SET_VALUE(kyuubiServiceId_, kyuubiServiceId) };


      // latestSqlStatementStatus Field Functions 
      bool hasLatestSqlStatementStatus() const { return this->latestSqlStatementStatus_ != nullptr;};
      void deleteLatestSqlStatementStatus() { this->latestSqlStatementStatus_ = nullptr;};
      inline string getLatestSqlStatementStatus() const { DARABONBA_PTR_GET_DEFAULT(latestSqlStatementStatus_, "") };
      inline Applications& setLatestSqlStatementStatus(string latestSqlStatementStatus) { DARABONBA_PTR_SET_VALUE(latestSqlStatementStatus_, latestSqlStatementStatus) };


      // mbSeconds Field Functions 
      bool hasMbSeconds() const { return this->mbSeconds_ != nullptr;};
      void deleteMbSeconds() { this->mbSeconds_ = nullptr;};
      inline int64_t getMbSeconds() const { DARABONBA_PTR_GET_DEFAULT(mbSeconds_, 0L) };
      inline Applications& setMbSeconds(int64_t mbSeconds) { DARABONBA_PTR_SET_VALUE(mbSeconds_, mbSeconds) };


      // resourceQueueId Field Functions 
      bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
      void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
      inline string getResourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
      inline Applications& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


      // runLog Field Functions 
      bool hasRunLog() const { return this->runLog_ != nullptr;};
      void deleteRunLog() { this->runLog_ = nullptr;};
      inline const RunLog & getRunLog() const { DARABONBA_PTR_GET_CONST(runLog_, RunLog) };
      inline RunLog getRunLog() { DARABONBA_PTR_GET(runLog_, RunLog) };
      inline Applications& setRunLog(const RunLog & runLog) { DARABONBA_PTR_SET_VALUE(runLog_, runLog) };
      inline Applications& setRunLog(RunLog && runLog) { DARABONBA_PTR_SET_RVALUE(runLog_, runLog) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Applications& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Applications& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
      inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
      inline Applications& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Applications& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vcoreSeconds Field Functions 
      bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
      void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
      inline int64_t getVcoreSeconds() const { DARABONBA_PTR_GET_DEFAULT(vcoreSeconds_, 0L) };
      inline Applications& setVcoreSeconds(int64_t vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };


      // webUI Field Functions 
      bool hasWebUI() const { return this->webUI_ != nullptr;};
      void deleteWebUI() { this->webUI_ = nullptr;};
      inline string getWebUI() const { DARABONBA_PTR_GET_DEFAULT(webUI_, "") };
      inline Applications& setWebUI(string webUI) { DARABONBA_PTR_SET_VALUE(webUI_, webUI) };


    protected:
      // The ID of the application that is submitted by using a Kyuubi gateway.
      shared_ptr<string> applicationId_ {};
      // The name of the Spark application that is submitted by using a Kyuubi gateway.
      shared_ptr<string> applicationName_ {};
      // The number of CUs consumed during a specified cycle of a task. The value is an estimated value. Refer to your Alibaba Cloud bill for the actual number of consumed CUs.
      shared_ptr<double> cuHours_ {};
      // The time when the task ended.
      shared_ptr<string> endTime_ {};
      shared_ptr<string> exitReason_ {};
      shared_ptr<string> kyuubiServiceId_ {};
      shared_ptr<string> latestSqlStatementStatus_ {};
      // The total amount of memory allocated to the job multiplied by the running duration (seconds).
      shared_ptr<int64_t> mbSeconds_ {};
      // The name of the resource queue on which the Spark jobs run.
      shared_ptr<string> resourceQueueId_ {};
      shared_ptr<RunLog> runLog_ {};
      // The time when the task started.
      shared_ptr<string> startTime_ {};
      // The status of the Spark application.
      // 
      // *   STARTING
      // *   RUNNING
      // *   TERMINATED
      shared_ptr<string> state_ {};
      shared_ptr<vector<Tag>> tags_ {};
      // The total number of CPU cores allocated to the job multiplied by the running duration (seconds).
      shared_ptr<int64_t> vcoreSeconds_ {};
      // The URL of the web UI for the Spark application.
      shared_ptr<string> webUI_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListKyuubiSparkApplicationsResponseBody::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListKyuubiSparkApplicationsResponseBody::Applications>) };
    inline vector<ListKyuubiSparkApplicationsResponseBody::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<ListKyuubiSparkApplicationsResponseBody::Applications>) };
    inline ListKyuubiSparkApplicationsResponseBody& setApplications(const vector<ListKyuubiSparkApplicationsResponseBody::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListKyuubiSparkApplicationsResponseBody& setApplications(vector<ListKyuubiSparkApplicationsResponseBody::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKyuubiSparkApplicationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListKyuubiSparkApplicationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKyuubiSparkApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListKyuubiSparkApplicationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the applications.
    shared_ptr<vector<ListKyuubiSparkApplicationsResponseBody::Applications>> applications_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
