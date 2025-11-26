// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEXECUTINGINFORESPONSEBODYEXECUTINGINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEXECUTINGINFORESPONSEBODYEXECUTINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeGroupExecutingInfoResponseBodyExecutingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupExecutingInfoResponseBodyExecutingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CallFailedNum, callFailedNum_);
      DARABONBA_PTR_TO_JSON(CallNum, callNum_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FinishedNum, finishedNum_);
      DARABONBA_PTR_TO_JSON(HangUpByClientNum, hangUpByClientNum_);
      DARABONBA_PTR_TO_JSON(JobsProgress, jobsProgress_);
      DARABONBA_PTR_TO_JSON(NoInteractionNum, noInteractionNum_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TransferByIntentNum, transferByIntentNum_);
      DARABONBA_PTR_TO_JSON(TransferByNoAnswer, transferByNoAnswer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupExecutingInfoResponseBodyExecutingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CallFailedNum, callFailedNum_);
      DARABONBA_PTR_FROM_JSON(CallNum, callNum_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FinishedNum, finishedNum_);
      DARABONBA_PTR_FROM_JSON(HangUpByClientNum, hangUpByClientNum_);
      DARABONBA_PTR_FROM_JSON(JobsProgress, jobsProgress_);
      DARABONBA_PTR_FROM_JSON(NoInteractionNum, noInteractionNum_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TransferByIntentNum, transferByIntentNum_);
      DARABONBA_PTR_FROM_JSON(TransferByNoAnswer, transferByNoAnswer_);
    };
    DescribeGroupExecutingInfoResponseBodyExecutingInfo() = default ;
    DescribeGroupExecutingInfoResponseBodyExecutingInfo(const DescribeGroupExecutingInfoResponseBodyExecutingInfo &) = default ;
    DescribeGroupExecutingInfoResponseBodyExecutingInfo(DescribeGroupExecutingInfoResponseBodyExecutingInfo &&) = default ;
    DescribeGroupExecutingInfoResponseBodyExecutingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupExecutingInfoResponseBodyExecutingInfo() = default ;
    DescribeGroupExecutingInfoResponseBodyExecutingInfo& operator=(const DescribeGroupExecutingInfoResponseBodyExecutingInfo &) = default ;
    DescribeGroupExecutingInfoResponseBodyExecutingInfo& operator=(DescribeGroupExecutingInfoResponseBodyExecutingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callFailedNum_ == nullptr
        && return this->callNum_ == nullptr && return this->creatorName_ == nullptr && return this->endTime_ == nullptr && return this->finishedNum_ == nullptr && return this->hangUpByClientNum_ == nullptr
        && return this->jobsProgress_ == nullptr && return this->noInteractionNum_ == nullptr && return this->startTime_ == nullptr && return this->transferByIntentNum_ == nullptr && return this->transferByNoAnswer_ == nullptr; };
    // callFailedNum Field Functions 
    bool hasCallFailedNum() const { return this->callFailedNum_ != nullptr;};
    void deleteCallFailedNum() { this->callFailedNum_ = nullptr;};
    inline int32_t callFailedNum() const { DARABONBA_PTR_GET_DEFAULT(callFailedNum_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfo& setCallFailedNum(int32_t callFailedNum) { DARABONBA_PTR_SET_VALUE(callFailedNum_, callFailedNum) };


    // callNum Field Functions 
    bool hasCallNum() const { return this->callNum_ != nullptr;};
    void deleteCallNum() { this->callNum_ = nullptr;};
    inline int32_t callNum() const { DARABONBA_PTR_GET_DEFAULT(callNum_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfo& setCallNum(int32_t callNum) { DARABONBA_PTR_SET_VALUE(callNum_, callNum) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfo& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfo& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // finishedNum Field Functions 
    bool hasFinishedNum() const { return this->finishedNum_ != nullptr;};
    void deleteFinishedNum() { this->finishedNum_ = nullptr;};
    inline int32_t finishedNum() const { DARABONBA_PTR_GET_DEFAULT(finishedNum_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfo& setFinishedNum(int32_t finishedNum) { DARABONBA_PTR_SET_VALUE(finishedNum_, finishedNum) };


    // hangUpByClientNum Field Functions 
    bool hasHangUpByClientNum() const { return this->hangUpByClientNum_ != nullptr;};
    void deleteHangUpByClientNum() { this->hangUpByClientNum_ = nullptr;};
    inline int32_t hangUpByClientNum() const { DARABONBA_PTR_GET_DEFAULT(hangUpByClientNum_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfo& setHangUpByClientNum(int32_t hangUpByClientNum) { DARABONBA_PTR_SET_VALUE(hangUpByClientNum_, hangUpByClientNum) };


    // jobsProgress Field Functions 
    bool hasJobsProgress() const { return this->jobsProgress_ != nullptr;};
    void deleteJobsProgress() { this->jobsProgress_ = nullptr;};
    inline const Models::DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress & jobsProgress() const { DARABONBA_PTR_GET_CONST(jobsProgress_, Models::DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress) };
    inline Models::DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress jobsProgress() { DARABONBA_PTR_GET(jobsProgress_, Models::DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfo& setJobsProgress(const Models::DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress & jobsProgress) { DARABONBA_PTR_SET_VALUE(jobsProgress_, jobsProgress) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfo& setJobsProgress(Models::DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress && jobsProgress) { DARABONBA_PTR_SET_RVALUE(jobsProgress_, jobsProgress) };


    // noInteractionNum Field Functions 
    bool hasNoInteractionNum() const { return this->noInteractionNum_ != nullptr;};
    void deleteNoInteractionNum() { this->noInteractionNum_ = nullptr;};
    inline int32_t noInteractionNum() const { DARABONBA_PTR_GET_DEFAULT(noInteractionNum_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfo& setNoInteractionNum(int32_t noInteractionNum) { DARABONBA_PTR_SET_VALUE(noInteractionNum_, noInteractionNum) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfo& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // transferByIntentNum Field Functions 
    bool hasTransferByIntentNum() const { return this->transferByIntentNum_ != nullptr;};
    void deleteTransferByIntentNum() { this->transferByIntentNum_ = nullptr;};
    inline int32_t transferByIntentNum() const { DARABONBA_PTR_GET_DEFAULT(transferByIntentNum_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfo& setTransferByIntentNum(int32_t transferByIntentNum) { DARABONBA_PTR_SET_VALUE(transferByIntentNum_, transferByIntentNum) };


    // transferByNoAnswer Field Functions 
    bool hasTransferByNoAnswer() const { return this->transferByNoAnswer_ != nullptr;};
    void deleteTransferByNoAnswer() { this->transferByNoAnswer_ = nullptr;};
    inline int32_t transferByNoAnswer() const { DARABONBA_PTR_GET_DEFAULT(transferByNoAnswer_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfo& setTransferByNoAnswer(int32_t transferByNoAnswer) { DARABONBA_PTR_SET_VALUE(transferByNoAnswer_, transferByNoAnswer) };


  protected:
    std::shared_ptr<int32_t> callFailedNum_ = nullptr;
    std::shared_ptr<int32_t> callNum_ = nullptr;
    std::shared_ptr<string> creatorName_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int32_t> finishedNum_ = nullptr;
    std::shared_ptr<int32_t> hangUpByClientNum_ = nullptr;
    std::shared_ptr<Models::DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress> jobsProgress_ = nullptr;
    std::shared_ptr<int32_t> noInteractionNum_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int32_t> transferByIntentNum_ = nullptr;
    std::shared_ptr<int32_t> transferByNoAnswer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
