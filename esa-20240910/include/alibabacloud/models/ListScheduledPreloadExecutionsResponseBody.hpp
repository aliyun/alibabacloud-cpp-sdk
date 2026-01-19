// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULEDPRELOADEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULEDPRELOADEXECUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListScheduledPreloadExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduledPreloadExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Executions, executions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduledPreloadExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Executions, executions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScheduledPreloadExecutionsResponseBody() = default ;
    ListScheduledPreloadExecutionsResponseBody(const ListScheduledPreloadExecutionsResponseBody &) = default ;
    ListScheduledPreloadExecutionsResponseBody(ListScheduledPreloadExecutionsResponseBody &&) = default ;
    ListScheduledPreloadExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduledPreloadExecutionsResponseBody() = default ;
    ListScheduledPreloadExecutionsResponseBody& operator=(const ListScheduledPreloadExecutionsResponseBody &) = default ;
    ListScheduledPreloadExecutionsResponseBody& operator=(ListScheduledPreloadExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Executions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Executions& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(SliceLen, sliceLen_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Executions& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(SliceLen, sliceLen_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Executions() = default ;
      Executions(const Executions &) = default ;
      Executions(Executions &&) = default ;
      Executions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Executions() = default ;
      Executions& operator=(const Executions &) = default ;
      Executions& operator=(Executions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->endTime_ == nullptr && this->id_ == nullptr && this->interval_ == nullptr && this->jobId_ == nullptr && this->sliceLen_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline Executions& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Executions& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Executions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline Executions& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Executions& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // sliceLen Field Functions 
      bool hasSliceLen() const { return this->sliceLen_ != nullptr;};
      void deleteSliceLen() { this->sliceLen_ = nullptr;};
      inline int32_t getSliceLen() const { DARABONBA_PTR_GET_DEFAULT(sliceLen_, 0) };
      inline Executions& setSliceLen(int32_t sliceLen) { DARABONBA_PTR_SET_VALUE(sliceLen_, sliceLen) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Executions& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Executions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> aliUid_ {};
      // The end time of the prefetch plan.
      shared_ptr<string> endTime_ {};
      // The ID of the prefetch plan.
      shared_ptr<string> id_ {};
      // The time interval between each batch execution in the plan. Unit: seconds.
      shared_ptr<int32_t> interval_ {};
      // The ID of the prefetch task.
      shared_ptr<string> jobId_ {};
      // The number of URLs prefetched in each batch.
      shared_ptr<int32_t> sliceLen_ {};
      // The start time of the prefetch plan.
      shared_ptr<string> startTime_ {};
      // The status of the prefetch plan. Valid values:
      // 
      // *   **waiting**
      // *   **running**
      // *   **finished**
      // *   **failed**
      // *   **stopped**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->executions_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // executions Field Functions 
    bool hasExecutions() const { return this->executions_ != nullptr;};
    void deleteExecutions() { this->executions_ = nullptr;};
    inline const vector<ListScheduledPreloadExecutionsResponseBody::Executions> & getExecutions() const { DARABONBA_PTR_GET_CONST(executions_, vector<ListScheduledPreloadExecutionsResponseBody::Executions>) };
    inline vector<ListScheduledPreloadExecutionsResponseBody::Executions> getExecutions() { DARABONBA_PTR_GET(executions_, vector<ListScheduledPreloadExecutionsResponseBody::Executions>) };
    inline ListScheduledPreloadExecutionsResponseBody& setExecutions(const vector<ListScheduledPreloadExecutionsResponseBody::Executions> & executions) { DARABONBA_PTR_SET_VALUE(executions_, executions) };
    inline ListScheduledPreloadExecutionsResponseBody& setExecutions(vector<ListScheduledPreloadExecutionsResponseBody::Executions> && executions) { DARABONBA_PTR_SET_RVALUE(executions_, executions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScheduledPreloadExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListScheduledPreloadExecutionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about prefetch plans returned.
    shared_ptr<vector<ListScheduledPreloadExecutionsResponseBody::Executions>> executions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
