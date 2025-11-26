// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTRESPONSEBODYJOBSLISTLATESTTASK_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTRESPONSEBODYJOBSLISTLATESTTASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryJobsWithResultResponseBodyJobsListLatestTaskContact.hpp>
#include <vector>
#include <alibabacloud/models/QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes.hpp>
#include <alibabacloud/models/QueryJobsWithResultResponseBodyJobsListLatestTaskExtras.hpp>
#include <alibabacloud/models/QueryJobsWithResultResponseBodyJobsListLatestTaskTagHits.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class QueryJobsWithResultResponseBodyJobsListLatestTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobsWithResultResponseBodyJobsListLatestTask& obj) { 
      DARABONBA_PTR_TO_JSON(CallDuration, callDuration_);
      DARABONBA_PTR_TO_JSON(CallDurationDisplay, callDurationDisplay_);
      DARABONBA_PTR_TO_JSON(CallTime, callTime_);
      DARABONBA_PTR_TO_JSON(Contact, contact_);
      DARABONBA_PTR_TO_JSON(DialExceptionCodes, dialExceptionCodes_);
      DARABONBA_PTR_TO_JSON(Extras, extras_);
      DARABONBA_PTR_TO_JSON(HasAnswered, hasAnswered_);
      DARABONBA_PTR_TO_JSON(HasHangUpByRejection, hasHangUpByRejection_);
      DARABONBA_PTR_TO_JSON(HasLastPlaybackCompleted, hasLastPlaybackCompleted_);
      DARABONBA_PTR_TO_JSON(HasReachedEndOfFlow, hasReachedEndOfFlow_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusName, statusName_);
      DARABONBA_PTR_TO_JSON(TagHits, tagHits_);
      DARABONBA_PTR_TO_JSON(TaskEndReason, taskEndReason_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobsWithResultResponseBodyJobsListLatestTask& obj) { 
      DARABONBA_PTR_FROM_JSON(CallDuration, callDuration_);
      DARABONBA_PTR_FROM_JSON(CallDurationDisplay, callDurationDisplay_);
      DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
      DARABONBA_PTR_FROM_JSON(DialExceptionCodes, dialExceptionCodes_);
      DARABONBA_PTR_FROM_JSON(Extras, extras_);
      DARABONBA_PTR_FROM_JSON(HasAnswered, hasAnswered_);
      DARABONBA_PTR_FROM_JSON(HasHangUpByRejection, hasHangUpByRejection_);
      DARABONBA_PTR_FROM_JSON(HasLastPlaybackCompleted, hasLastPlaybackCompleted_);
      DARABONBA_PTR_FROM_JSON(HasReachedEndOfFlow, hasReachedEndOfFlow_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
      DARABONBA_PTR_FROM_JSON(TagHits, tagHits_);
      DARABONBA_PTR_FROM_JSON(TaskEndReason, taskEndReason_);
    };
    QueryJobsWithResultResponseBodyJobsListLatestTask() = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTask(const QueryJobsWithResultResponseBodyJobsListLatestTask &) = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTask(QueryJobsWithResultResponseBodyJobsListLatestTask &&) = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobsWithResultResponseBodyJobsListLatestTask() = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTask& operator=(const QueryJobsWithResultResponseBodyJobsListLatestTask &) = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTask& operator=(QueryJobsWithResultResponseBodyJobsListLatestTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callDuration_ == nullptr
        && return this->callDurationDisplay_ == nullptr && return this->callTime_ == nullptr && return this->contact_ == nullptr && return this->dialExceptionCodes_ == nullptr && return this->extras_ == nullptr
        && return this->hasAnswered_ == nullptr && return this->hasHangUpByRejection_ == nullptr && return this->hasLastPlaybackCompleted_ == nullptr && return this->hasReachedEndOfFlow_ == nullptr && return this->status_ == nullptr
        && return this->statusName_ == nullptr && return this->tagHits_ == nullptr && return this->taskEndReason_ == nullptr; };
    // callDuration Field Functions 
    bool hasCallDuration() const { return this->callDuration_ != nullptr;};
    void deleteCallDuration() { this->callDuration_ = nullptr;};
    inline int32_t callDuration() const { DARABONBA_PTR_GET_DEFAULT(callDuration_, 0) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setCallDuration(int32_t callDuration) { DARABONBA_PTR_SET_VALUE(callDuration_, callDuration) };


    // callDurationDisplay Field Functions 
    bool hasCallDurationDisplay() const { return this->callDurationDisplay_ != nullptr;};
    void deleteCallDurationDisplay() { this->callDurationDisplay_ = nullptr;};
    inline string callDurationDisplay() const { DARABONBA_PTR_GET_DEFAULT(callDurationDisplay_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setCallDurationDisplay(string callDurationDisplay) { DARABONBA_PTR_SET_VALUE(callDurationDisplay_, callDurationDisplay) };


    // callTime Field Functions 
    bool hasCallTime() const { return this->callTime_ != nullptr;};
    void deleteCallTime() { this->callTime_ = nullptr;};
    inline int64_t callTime() const { DARABONBA_PTR_GET_DEFAULT(callTime_, 0L) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setCallTime(int64_t callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };


    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const Models::QueryJobsWithResultResponseBodyJobsListLatestTaskContact & contact() const { DARABONBA_PTR_GET_CONST(contact_, Models::QueryJobsWithResultResponseBodyJobsListLatestTaskContact) };
    inline Models::QueryJobsWithResultResponseBodyJobsListLatestTaskContact contact() { DARABONBA_PTR_GET(contact_, Models::QueryJobsWithResultResponseBodyJobsListLatestTaskContact) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setContact(const Models::QueryJobsWithResultResponseBodyJobsListLatestTaskContact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setContact(Models::QueryJobsWithResultResponseBodyJobsListLatestTaskContact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // dialExceptionCodes Field Functions 
    bool hasDialExceptionCodes() const { return this->dialExceptionCodes_ != nullptr;};
    void deleteDialExceptionCodes() { this->dialExceptionCodes_ = nullptr;};
    inline const vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes> & dialExceptionCodes() const { DARABONBA_PTR_GET_CONST(dialExceptionCodes_, vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes>) };
    inline vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes> dialExceptionCodes() { DARABONBA_PTR_GET(dialExceptionCodes_, vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes>) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setDialExceptionCodes(const vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes> & dialExceptionCodes) { DARABONBA_PTR_SET_VALUE(dialExceptionCodes_, dialExceptionCodes) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setDialExceptionCodes(vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes> && dialExceptionCodes) { DARABONBA_PTR_SET_RVALUE(dialExceptionCodes_, dialExceptionCodes) };


    // extras Field Functions 
    bool hasExtras() const { return this->extras_ != nullptr;};
    void deleteExtras() { this->extras_ = nullptr;};
    inline const vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskExtras> & extras() const { DARABONBA_PTR_GET_CONST(extras_, vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskExtras>) };
    inline vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskExtras> extras() { DARABONBA_PTR_GET(extras_, vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskExtras>) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setExtras(const vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskExtras> & extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setExtras(vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskExtras> && extras) { DARABONBA_PTR_SET_RVALUE(extras_, extras) };


    // hasAnswered Field Functions 
    bool hasHasAnswered() const { return this->hasAnswered_ != nullptr;};
    void deleteHasAnswered() { this->hasAnswered_ = nullptr;};
    inline bool hasAnswered() const { DARABONBA_PTR_GET_DEFAULT(hasAnswered_, false) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setHasAnswered(bool hasAnswered) { DARABONBA_PTR_SET_VALUE(hasAnswered_, hasAnswered) };


    // hasHangUpByRejection Field Functions 
    bool hasHasHangUpByRejection() const { return this->hasHangUpByRejection_ != nullptr;};
    void deleteHasHangUpByRejection() { this->hasHangUpByRejection_ = nullptr;};
    inline bool hasHangUpByRejection() const { DARABONBA_PTR_GET_DEFAULT(hasHangUpByRejection_, false) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setHasHangUpByRejection(bool hasHangUpByRejection) { DARABONBA_PTR_SET_VALUE(hasHangUpByRejection_, hasHangUpByRejection) };


    // hasLastPlaybackCompleted Field Functions 
    bool hasHasLastPlaybackCompleted() const { return this->hasLastPlaybackCompleted_ != nullptr;};
    void deleteHasLastPlaybackCompleted() { this->hasLastPlaybackCompleted_ = nullptr;};
    inline bool hasLastPlaybackCompleted() const { DARABONBA_PTR_GET_DEFAULT(hasLastPlaybackCompleted_, false) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setHasLastPlaybackCompleted(bool hasLastPlaybackCompleted) { DARABONBA_PTR_SET_VALUE(hasLastPlaybackCompleted_, hasLastPlaybackCompleted) };


    // hasReachedEndOfFlow Field Functions 
    bool hasHasReachedEndOfFlow() const { return this->hasReachedEndOfFlow_ != nullptr;};
    void deleteHasReachedEndOfFlow() { this->hasReachedEndOfFlow_ = nullptr;};
    inline bool hasReachedEndOfFlow() const { DARABONBA_PTR_GET_DEFAULT(hasReachedEndOfFlow_, false) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setHasReachedEndOfFlow(bool hasReachedEndOfFlow) { DARABONBA_PTR_SET_VALUE(hasReachedEndOfFlow_, hasReachedEndOfFlow) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusName Field Functions 
    bool hasStatusName() const { return this->statusName_ != nullptr;};
    void deleteStatusName() { this->statusName_ = nullptr;};
    inline string statusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


    // tagHits Field Functions 
    bool hasTagHits() const { return this->tagHits_ != nullptr;};
    void deleteTagHits() { this->tagHits_ = nullptr;};
    inline const vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskTagHits> & tagHits() const { DARABONBA_PTR_GET_CONST(tagHits_, vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskTagHits>) };
    inline vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskTagHits> tagHits() { DARABONBA_PTR_GET(tagHits_, vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskTagHits>) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setTagHits(const vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskTagHits> & tagHits) { DARABONBA_PTR_SET_VALUE(tagHits_, tagHits) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setTagHits(vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskTagHits> && tagHits) { DARABONBA_PTR_SET_RVALUE(tagHits_, tagHits) };


    // taskEndReason Field Functions 
    bool hasTaskEndReason() const { return this->taskEndReason_ != nullptr;};
    void deleteTaskEndReason() { this->taskEndReason_ = nullptr;};
    inline string taskEndReason() const { DARABONBA_PTR_GET_DEFAULT(taskEndReason_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTask& setTaskEndReason(string taskEndReason) { DARABONBA_PTR_SET_VALUE(taskEndReason_, taskEndReason) };


  protected:
    std::shared_ptr<int32_t> callDuration_ = nullptr;
    std::shared_ptr<string> callDurationDisplay_ = nullptr;
    std::shared_ptr<int64_t> callTime_ = nullptr;
    std::shared_ptr<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskContact> contact_ = nullptr;
    std::shared_ptr<vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskDialExceptionCodes>> dialExceptionCodes_ = nullptr;
    std::shared_ptr<vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskExtras>> extras_ = nullptr;
    std::shared_ptr<bool> hasAnswered_ = nullptr;
    std::shared_ptr<bool> hasHangUpByRejection_ = nullptr;
    std::shared_ptr<bool> hasLastPlaybackCompleted_ = nullptr;
    std::shared_ptr<bool> hasReachedEndOfFlow_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusName_ = nullptr;
    std::shared_ptr<vector<Models::QueryJobsWithResultResponseBodyJobsListLatestTaskTagHits>> tagHits_ = nullptr;
    std::shared_ptr<string> taskEndReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
