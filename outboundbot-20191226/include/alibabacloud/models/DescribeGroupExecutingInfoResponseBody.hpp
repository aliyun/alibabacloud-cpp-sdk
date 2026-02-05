// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEXECUTINGINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEXECUTINGINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeGroupExecutingInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupExecutingInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ExecutingInfo, executingInfo_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupExecutingInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ExecutingInfo, executingInfo_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeGroupExecutingInfoResponseBody() = default ;
    DescribeGroupExecutingInfoResponseBody(const DescribeGroupExecutingInfoResponseBody &) = default ;
    DescribeGroupExecutingInfoResponseBody(DescribeGroupExecutingInfoResponseBody &&) = default ;
    DescribeGroupExecutingInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupExecutingInfoResponseBody() = default ;
    DescribeGroupExecutingInfoResponseBody& operator=(const DescribeGroupExecutingInfoResponseBody &) = default ;
    DescribeGroupExecutingInfoResponseBody& operator=(DescribeGroupExecutingInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExecutingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExecutingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AvgTalkTime, avgTalkTime_);
        DARABONBA_PTR_TO_JSON(CallFailedNum, callFailedNum_);
        DARABONBA_PTR_TO_JSON(CallNum, callNum_);
        DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(DurationDistribution, durationDistribution_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FinishedNum, finishedNum_);
        DARABONBA_PTR_TO_JSON(HangUpByClientNum, hangUpByClientNum_);
        DARABONBA_PTR_TO_JSON(JobsProgress, jobsProgress_);
        DARABONBA_PTR_TO_JSON(NoInteractionNum, noInteractionNum_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TalkTurnsDistribution, talkTurnsDistribution_);
        DARABONBA_PTR_TO_JSON(TransferByIntentNum, transferByIntentNum_);
        DARABONBA_PTR_TO_JSON(TransferByNoAnswer, transferByNoAnswer_);
      };
      friend void from_json(const Darabonba::Json& j, ExecutingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AvgTalkTime, avgTalkTime_);
        DARABONBA_PTR_FROM_JSON(CallFailedNum, callFailedNum_);
        DARABONBA_PTR_FROM_JSON(CallNum, callNum_);
        DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(DurationDistribution, durationDistribution_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FinishedNum, finishedNum_);
        DARABONBA_PTR_FROM_JSON(HangUpByClientNum, hangUpByClientNum_);
        DARABONBA_PTR_FROM_JSON(JobsProgress, jobsProgress_);
        DARABONBA_PTR_FROM_JSON(NoInteractionNum, noInteractionNum_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TalkTurnsDistribution, talkTurnsDistribution_);
        DARABONBA_PTR_FROM_JSON(TransferByIntentNum, transferByIntentNum_);
        DARABONBA_PTR_FROM_JSON(TransferByNoAnswer, transferByNoAnswer_);
      };
      ExecutingInfo() = default ;
      ExecutingInfo(const ExecutingInfo &) = default ;
      ExecutingInfo(ExecutingInfo &&) = default ;
      ExecutingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExecutingInfo() = default ;
      ExecutingInfo& operator=(const ExecutingInfo &) = default ;
      ExecutingInfo& operator=(ExecutingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class JobsProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobsProgress& obj) { 
          DARABONBA_PTR_TO_JSON(CancelledNum, cancelledNum_);
          DARABONBA_PTR_TO_JSON(ExecutingNum, executingNum_);
          DARABONBA_PTR_TO_JSON(FailedNum, failedNum_);
          DARABONBA_PTR_TO_JSON(PausedNum, pausedNum_);
          DARABONBA_PTR_TO_JSON(SchedulingNum, schedulingNum_);
          DARABONBA_PTR_TO_JSON(TotalCompletedNum, totalCompletedNum_);
          DARABONBA_PTR_TO_JSON(TotalJobs, totalJobs_);
          DARABONBA_PTR_TO_JSON(TotalNotAnsweredNum, totalNotAnsweredNum_);
        };
        friend void from_json(const Darabonba::Json& j, JobsProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(CancelledNum, cancelledNum_);
          DARABONBA_PTR_FROM_JSON(ExecutingNum, executingNum_);
          DARABONBA_PTR_FROM_JSON(FailedNum, failedNum_);
          DARABONBA_PTR_FROM_JSON(PausedNum, pausedNum_);
          DARABONBA_PTR_FROM_JSON(SchedulingNum, schedulingNum_);
          DARABONBA_PTR_FROM_JSON(TotalCompletedNum, totalCompletedNum_);
          DARABONBA_PTR_FROM_JSON(TotalJobs, totalJobs_);
          DARABONBA_PTR_FROM_JSON(TotalNotAnsweredNum, totalNotAnsweredNum_);
        };
        JobsProgress() = default ;
        JobsProgress(const JobsProgress &) = default ;
        JobsProgress(JobsProgress &&) = default ;
        JobsProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobsProgress() = default ;
        JobsProgress& operator=(const JobsProgress &) = default ;
        JobsProgress& operator=(JobsProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cancelledNum_ == nullptr
        && this->executingNum_ == nullptr && this->failedNum_ == nullptr && this->pausedNum_ == nullptr && this->schedulingNum_ == nullptr && this->totalCompletedNum_ == nullptr
        && this->totalJobs_ == nullptr && this->totalNotAnsweredNum_ == nullptr; };
        // cancelledNum Field Functions 
        bool hasCancelledNum() const { return this->cancelledNum_ != nullptr;};
        void deleteCancelledNum() { this->cancelledNum_ = nullptr;};
        inline int32_t getCancelledNum() const { DARABONBA_PTR_GET_DEFAULT(cancelledNum_, 0) };
        inline JobsProgress& setCancelledNum(int32_t cancelledNum) { DARABONBA_PTR_SET_VALUE(cancelledNum_, cancelledNum) };


        // executingNum Field Functions 
        bool hasExecutingNum() const { return this->executingNum_ != nullptr;};
        void deleteExecutingNum() { this->executingNum_ = nullptr;};
        inline int32_t getExecutingNum() const { DARABONBA_PTR_GET_DEFAULT(executingNum_, 0) };
        inline JobsProgress& setExecutingNum(int32_t executingNum) { DARABONBA_PTR_SET_VALUE(executingNum_, executingNum) };


        // failedNum Field Functions 
        bool hasFailedNum() const { return this->failedNum_ != nullptr;};
        void deleteFailedNum() { this->failedNum_ = nullptr;};
        inline int32_t getFailedNum() const { DARABONBA_PTR_GET_DEFAULT(failedNum_, 0) };
        inline JobsProgress& setFailedNum(int32_t failedNum) { DARABONBA_PTR_SET_VALUE(failedNum_, failedNum) };


        // pausedNum Field Functions 
        bool hasPausedNum() const { return this->pausedNum_ != nullptr;};
        void deletePausedNum() { this->pausedNum_ = nullptr;};
        inline int32_t getPausedNum() const { DARABONBA_PTR_GET_DEFAULT(pausedNum_, 0) };
        inline JobsProgress& setPausedNum(int32_t pausedNum) { DARABONBA_PTR_SET_VALUE(pausedNum_, pausedNum) };


        // schedulingNum Field Functions 
        bool hasSchedulingNum() const { return this->schedulingNum_ != nullptr;};
        void deleteSchedulingNum() { this->schedulingNum_ = nullptr;};
        inline int32_t getSchedulingNum() const { DARABONBA_PTR_GET_DEFAULT(schedulingNum_, 0) };
        inline JobsProgress& setSchedulingNum(int32_t schedulingNum) { DARABONBA_PTR_SET_VALUE(schedulingNum_, schedulingNum) };


        // totalCompletedNum Field Functions 
        bool hasTotalCompletedNum() const { return this->totalCompletedNum_ != nullptr;};
        void deleteTotalCompletedNum() { this->totalCompletedNum_ = nullptr;};
        inline int32_t getTotalCompletedNum() const { DARABONBA_PTR_GET_DEFAULT(totalCompletedNum_, 0) };
        inline JobsProgress& setTotalCompletedNum(int32_t totalCompletedNum) { DARABONBA_PTR_SET_VALUE(totalCompletedNum_, totalCompletedNum) };


        // totalJobs Field Functions 
        bool hasTotalJobs() const { return this->totalJobs_ != nullptr;};
        void deleteTotalJobs() { this->totalJobs_ = nullptr;};
        inline int32_t getTotalJobs() const { DARABONBA_PTR_GET_DEFAULT(totalJobs_, 0) };
        inline JobsProgress& setTotalJobs(int32_t totalJobs) { DARABONBA_PTR_SET_VALUE(totalJobs_, totalJobs) };


        // totalNotAnsweredNum Field Functions 
        bool hasTotalNotAnsweredNum() const { return this->totalNotAnsweredNum_ != nullptr;};
        void deleteTotalNotAnsweredNum() { this->totalNotAnsweredNum_ = nullptr;};
        inline int32_t getTotalNotAnsweredNum() const { DARABONBA_PTR_GET_DEFAULT(totalNotAnsweredNum_, 0) };
        inline JobsProgress& setTotalNotAnsweredNum(int32_t totalNotAnsweredNum) { DARABONBA_PTR_SET_VALUE(totalNotAnsweredNum_, totalNotAnsweredNum) };


      protected:
        shared_ptr<int32_t> cancelledNum_ {};
        shared_ptr<int32_t> executingNum_ {};
        shared_ptr<int32_t> failedNum_ {};
        shared_ptr<int32_t> pausedNum_ {};
        shared_ptr<int32_t> schedulingNum_ {};
        shared_ptr<int32_t> totalCompletedNum_ {};
        shared_ptr<int32_t> totalJobs_ {};
        shared_ptr<int32_t> totalNotAnsweredNum_ {};
      };

      virtual bool empty() const override { return this->avgTalkTime_ == nullptr
        && this->callFailedNum_ == nullptr && this->callNum_ == nullptr && this->creatorName_ == nullptr && this->durationDistribution_ == nullptr && this->endTime_ == nullptr
        && this->finishedNum_ == nullptr && this->hangUpByClientNum_ == nullptr && this->jobsProgress_ == nullptr && this->noInteractionNum_ == nullptr && this->startTime_ == nullptr
        && this->talkTurnsDistribution_ == nullptr && this->transferByIntentNum_ == nullptr && this->transferByNoAnswer_ == nullptr; };
      // avgTalkTime Field Functions 
      bool hasAvgTalkTime() const { return this->avgTalkTime_ != nullptr;};
      void deleteAvgTalkTime() { this->avgTalkTime_ = nullptr;};
      inline int32_t getAvgTalkTime() const { DARABONBA_PTR_GET_DEFAULT(avgTalkTime_, 0) };
      inline ExecutingInfo& setAvgTalkTime(int32_t avgTalkTime) { DARABONBA_PTR_SET_VALUE(avgTalkTime_, avgTalkTime) };


      // callFailedNum Field Functions 
      bool hasCallFailedNum() const { return this->callFailedNum_ != nullptr;};
      void deleteCallFailedNum() { this->callFailedNum_ = nullptr;};
      inline int32_t getCallFailedNum() const { DARABONBA_PTR_GET_DEFAULT(callFailedNum_, 0) };
      inline ExecutingInfo& setCallFailedNum(int32_t callFailedNum) { DARABONBA_PTR_SET_VALUE(callFailedNum_, callFailedNum) };


      // callNum Field Functions 
      bool hasCallNum() const { return this->callNum_ != nullptr;};
      void deleteCallNum() { this->callNum_ = nullptr;};
      inline int32_t getCallNum() const { DARABONBA_PTR_GET_DEFAULT(callNum_, 0) };
      inline ExecutingInfo& setCallNum(int32_t callNum) { DARABONBA_PTR_SET_VALUE(callNum_, callNum) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline ExecutingInfo& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // durationDistribution Field Functions 
      bool hasDurationDistribution() const { return this->durationDistribution_ != nullptr;};
      void deleteDurationDistribution() { this->durationDistribution_ = nullptr;};
      inline string getDurationDistribution() const { DARABONBA_PTR_GET_DEFAULT(durationDistribution_, "") };
      inline ExecutingInfo& setDurationDistribution(string durationDistribution) { DARABONBA_PTR_SET_VALUE(durationDistribution_, durationDistribution) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ExecutingInfo& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // finishedNum Field Functions 
      bool hasFinishedNum() const { return this->finishedNum_ != nullptr;};
      void deleteFinishedNum() { this->finishedNum_ = nullptr;};
      inline int32_t getFinishedNum() const { DARABONBA_PTR_GET_DEFAULT(finishedNum_, 0) };
      inline ExecutingInfo& setFinishedNum(int32_t finishedNum) { DARABONBA_PTR_SET_VALUE(finishedNum_, finishedNum) };


      // hangUpByClientNum Field Functions 
      bool hasHangUpByClientNum() const { return this->hangUpByClientNum_ != nullptr;};
      void deleteHangUpByClientNum() { this->hangUpByClientNum_ = nullptr;};
      inline int32_t getHangUpByClientNum() const { DARABONBA_PTR_GET_DEFAULT(hangUpByClientNum_, 0) };
      inline ExecutingInfo& setHangUpByClientNum(int32_t hangUpByClientNum) { DARABONBA_PTR_SET_VALUE(hangUpByClientNum_, hangUpByClientNum) };


      // jobsProgress Field Functions 
      bool hasJobsProgress() const { return this->jobsProgress_ != nullptr;};
      void deleteJobsProgress() { this->jobsProgress_ = nullptr;};
      inline const ExecutingInfo::JobsProgress & getJobsProgress() const { DARABONBA_PTR_GET_CONST(jobsProgress_, ExecutingInfo::JobsProgress) };
      inline ExecutingInfo::JobsProgress getJobsProgress() { DARABONBA_PTR_GET(jobsProgress_, ExecutingInfo::JobsProgress) };
      inline ExecutingInfo& setJobsProgress(const ExecutingInfo::JobsProgress & jobsProgress) { DARABONBA_PTR_SET_VALUE(jobsProgress_, jobsProgress) };
      inline ExecutingInfo& setJobsProgress(ExecutingInfo::JobsProgress && jobsProgress) { DARABONBA_PTR_SET_RVALUE(jobsProgress_, jobsProgress) };


      // noInteractionNum Field Functions 
      bool hasNoInteractionNum() const { return this->noInteractionNum_ != nullptr;};
      void deleteNoInteractionNum() { this->noInteractionNum_ = nullptr;};
      inline int32_t getNoInteractionNum() const { DARABONBA_PTR_GET_DEFAULT(noInteractionNum_, 0) };
      inline ExecutingInfo& setNoInteractionNum(int32_t noInteractionNum) { DARABONBA_PTR_SET_VALUE(noInteractionNum_, noInteractionNum) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline ExecutingInfo& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // talkTurnsDistribution Field Functions 
      bool hasTalkTurnsDistribution() const { return this->talkTurnsDistribution_ != nullptr;};
      void deleteTalkTurnsDistribution() { this->talkTurnsDistribution_ = nullptr;};
      inline string getTalkTurnsDistribution() const { DARABONBA_PTR_GET_DEFAULT(talkTurnsDistribution_, "") };
      inline ExecutingInfo& setTalkTurnsDistribution(string talkTurnsDistribution) { DARABONBA_PTR_SET_VALUE(talkTurnsDistribution_, talkTurnsDistribution) };


      // transferByIntentNum Field Functions 
      bool hasTransferByIntentNum() const { return this->transferByIntentNum_ != nullptr;};
      void deleteTransferByIntentNum() { this->transferByIntentNum_ = nullptr;};
      inline int32_t getTransferByIntentNum() const { DARABONBA_PTR_GET_DEFAULT(transferByIntentNum_, 0) };
      inline ExecutingInfo& setTransferByIntentNum(int32_t transferByIntentNum) { DARABONBA_PTR_SET_VALUE(transferByIntentNum_, transferByIntentNum) };


      // transferByNoAnswer Field Functions 
      bool hasTransferByNoAnswer() const { return this->transferByNoAnswer_ != nullptr;};
      void deleteTransferByNoAnswer() { this->transferByNoAnswer_ = nullptr;};
      inline int32_t getTransferByNoAnswer() const { DARABONBA_PTR_GET_DEFAULT(transferByNoAnswer_, 0) };
      inline ExecutingInfo& setTransferByNoAnswer(int32_t transferByNoAnswer) { DARABONBA_PTR_SET_VALUE(transferByNoAnswer_, transferByNoAnswer) };


    protected:
      shared_ptr<int32_t> avgTalkTime_ {};
      shared_ptr<int32_t> callFailedNum_ {};
      shared_ptr<int32_t> callNum_ {};
      shared_ptr<string> creatorName_ {};
      shared_ptr<string> durationDistribution_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<int32_t> finishedNum_ {};
      shared_ptr<int32_t> hangUpByClientNum_ {};
      shared_ptr<ExecutingInfo::JobsProgress> jobsProgress_ {};
      shared_ptr<int32_t> noInteractionNum_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> talkTurnsDistribution_ {};
      shared_ptr<int32_t> transferByIntentNum_ {};
      shared_ptr<int32_t> transferByNoAnswer_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->executingInfo_ == nullptr && this->groupId_ == nullptr && this->httpStatusCode_ == nullptr && this->instanceId_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeGroupExecutingInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // executingInfo Field Functions 
    bool hasExecutingInfo() const { return this->executingInfo_ != nullptr;};
    void deleteExecutingInfo() { this->executingInfo_ = nullptr;};
    inline const DescribeGroupExecutingInfoResponseBody::ExecutingInfo & getExecutingInfo() const { DARABONBA_PTR_GET_CONST(executingInfo_, DescribeGroupExecutingInfoResponseBody::ExecutingInfo) };
    inline DescribeGroupExecutingInfoResponseBody::ExecutingInfo getExecutingInfo() { DARABONBA_PTR_GET(executingInfo_, DescribeGroupExecutingInfoResponseBody::ExecutingInfo) };
    inline DescribeGroupExecutingInfoResponseBody& setExecutingInfo(const DescribeGroupExecutingInfoResponseBody::ExecutingInfo & executingInfo) { DARABONBA_PTR_SET_VALUE(executingInfo_, executingInfo) };
    inline DescribeGroupExecutingInfoResponseBody& setExecutingInfo(DescribeGroupExecutingInfoResponseBody::ExecutingInfo && executingInfo) { DARABONBA_PTR_SET_RVALUE(executingInfo_, executingInfo) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeGroupExecutingInfoResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeGroupExecutingInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeGroupExecutingInfoResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeGroupExecutingInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupExecutingInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeGroupExecutingInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DescribeGroupExecutingInfoResponseBody::ExecutingInfo> executingInfo_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
