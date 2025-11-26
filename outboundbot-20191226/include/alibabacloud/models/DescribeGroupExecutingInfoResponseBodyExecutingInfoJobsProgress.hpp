// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEXECUTINGINFORESPONSEBODYEXECUTINGINFOJOBSPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEXECUTINGINFORESPONSEBODYEXECUTINGINFOJOBSPROGRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress& obj) { 
      DARABONBA_PTR_TO_JSON(CancelledNum, cancelledNum_);
      DARABONBA_PTR_TO_JSON(ExecutingNum, executingNum_);
      DARABONBA_PTR_TO_JSON(FailedNum, failedNum_);
      DARABONBA_PTR_TO_JSON(PausedNum, pausedNum_);
      DARABONBA_PTR_TO_JSON(SchedulingNum, schedulingNum_);
      DARABONBA_PTR_TO_JSON(TotalCompletedNum, totalCompletedNum_);
      DARABONBA_PTR_TO_JSON(TotalJobs, totalJobs_);
      DARABONBA_PTR_TO_JSON(TotalNotAnsweredNum, totalNotAnsweredNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(CancelledNum, cancelledNum_);
      DARABONBA_PTR_FROM_JSON(ExecutingNum, executingNum_);
      DARABONBA_PTR_FROM_JSON(FailedNum, failedNum_);
      DARABONBA_PTR_FROM_JSON(PausedNum, pausedNum_);
      DARABONBA_PTR_FROM_JSON(SchedulingNum, schedulingNum_);
      DARABONBA_PTR_FROM_JSON(TotalCompletedNum, totalCompletedNum_);
      DARABONBA_PTR_FROM_JSON(TotalJobs, totalJobs_);
      DARABONBA_PTR_FROM_JSON(TotalNotAnsweredNum, totalNotAnsweredNum_);
    };
    DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress() = default ;
    DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress(const DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress &) = default ;
    DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress(DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress &&) = default ;
    DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress() = default ;
    DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress& operator=(const DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress &) = default ;
    DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress& operator=(DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cancelledNum_ == nullptr
        && return this->executingNum_ == nullptr && return this->failedNum_ == nullptr && return this->pausedNum_ == nullptr && return this->schedulingNum_ == nullptr && return this->totalCompletedNum_ == nullptr
        && return this->totalJobs_ == nullptr && return this->totalNotAnsweredNum_ == nullptr; };
    // cancelledNum Field Functions 
    bool hasCancelledNum() const { return this->cancelledNum_ != nullptr;};
    void deleteCancelledNum() { this->cancelledNum_ = nullptr;};
    inline int32_t cancelledNum() const { DARABONBA_PTR_GET_DEFAULT(cancelledNum_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress& setCancelledNum(int32_t cancelledNum) { DARABONBA_PTR_SET_VALUE(cancelledNum_, cancelledNum) };


    // executingNum Field Functions 
    bool hasExecutingNum() const { return this->executingNum_ != nullptr;};
    void deleteExecutingNum() { this->executingNum_ = nullptr;};
    inline int32_t executingNum() const { DARABONBA_PTR_GET_DEFAULT(executingNum_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress& setExecutingNum(int32_t executingNum) { DARABONBA_PTR_SET_VALUE(executingNum_, executingNum) };


    // failedNum Field Functions 
    bool hasFailedNum() const { return this->failedNum_ != nullptr;};
    void deleteFailedNum() { this->failedNum_ = nullptr;};
    inline int32_t failedNum() const { DARABONBA_PTR_GET_DEFAULT(failedNum_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress& setFailedNum(int32_t failedNum) { DARABONBA_PTR_SET_VALUE(failedNum_, failedNum) };


    // pausedNum Field Functions 
    bool hasPausedNum() const { return this->pausedNum_ != nullptr;};
    void deletePausedNum() { this->pausedNum_ = nullptr;};
    inline int32_t pausedNum() const { DARABONBA_PTR_GET_DEFAULT(pausedNum_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress& setPausedNum(int32_t pausedNum) { DARABONBA_PTR_SET_VALUE(pausedNum_, pausedNum) };


    // schedulingNum Field Functions 
    bool hasSchedulingNum() const { return this->schedulingNum_ != nullptr;};
    void deleteSchedulingNum() { this->schedulingNum_ = nullptr;};
    inline int32_t schedulingNum() const { DARABONBA_PTR_GET_DEFAULT(schedulingNum_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress& setSchedulingNum(int32_t schedulingNum) { DARABONBA_PTR_SET_VALUE(schedulingNum_, schedulingNum) };


    // totalCompletedNum Field Functions 
    bool hasTotalCompletedNum() const { return this->totalCompletedNum_ != nullptr;};
    void deleteTotalCompletedNum() { this->totalCompletedNum_ = nullptr;};
    inline int32_t totalCompletedNum() const { DARABONBA_PTR_GET_DEFAULT(totalCompletedNum_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress& setTotalCompletedNum(int32_t totalCompletedNum) { DARABONBA_PTR_SET_VALUE(totalCompletedNum_, totalCompletedNum) };


    // totalJobs Field Functions 
    bool hasTotalJobs() const { return this->totalJobs_ != nullptr;};
    void deleteTotalJobs() { this->totalJobs_ = nullptr;};
    inline int32_t totalJobs() const { DARABONBA_PTR_GET_DEFAULT(totalJobs_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress& setTotalJobs(int32_t totalJobs) { DARABONBA_PTR_SET_VALUE(totalJobs_, totalJobs) };


    // totalNotAnsweredNum Field Functions 
    bool hasTotalNotAnsweredNum() const { return this->totalNotAnsweredNum_ != nullptr;};
    void deleteTotalNotAnsweredNum() { this->totalNotAnsweredNum_ = nullptr;};
    inline int32_t totalNotAnsweredNum() const { DARABONBA_PTR_GET_DEFAULT(totalNotAnsweredNum_, 0) };
    inline DescribeGroupExecutingInfoResponseBodyExecutingInfoJobsProgress& setTotalNotAnsweredNum(int32_t totalNotAnsweredNum) { DARABONBA_PTR_SET_VALUE(totalNotAnsweredNum_, totalNotAnsweredNum) };


  protected:
    std::shared_ptr<int32_t> cancelledNum_ = nullptr;
    std::shared_ptr<int32_t> executingNum_ = nullptr;
    std::shared_ptr<int32_t> failedNum_ = nullptr;
    std::shared_ptr<int32_t> pausedNum_ = nullptr;
    std::shared_ptr<int32_t> schedulingNum_ = nullptr;
    std::shared_ptr<int32_t> totalCompletedNum_ = nullptr;
    std::shared_ptr<int32_t> totalJobs_ = nullptr;
    std::shared_ptr<int32_t> totalNotAnsweredNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
