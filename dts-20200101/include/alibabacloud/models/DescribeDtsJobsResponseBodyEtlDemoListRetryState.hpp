// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYETLDEMOLISTRETRYSTATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYETLDEMOLISTRETRYSTATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsResponseBodyEtlDemoListRetryState : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsResponseBodyEtlDemoListRetryState& obj) { 
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MaxRetryTime, maxRetryTime_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
      DARABONBA_PTR_TO_JSON(RetryTarget, retryTarget_);
      DARABONBA_PTR_TO_JSON(RetryTime, retryTime_);
      DARABONBA_PTR_TO_JSON(Retrying, retrying_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsResponseBodyEtlDemoListRetryState& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MaxRetryTime, maxRetryTime_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
      DARABONBA_PTR_FROM_JSON(RetryTarget, retryTarget_);
      DARABONBA_PTR_FROM_JSON(RetryTime, retryTime_);
      DARABONBA_PTR_FROM_JSON(Retrying, retrying_);
    };
    DescribeDtsJobsResponseBodyEtlDemoListRetryState() = default ;
    DescribeDtsJobsResponseBodyEtlDemoListRetryState(const DescribeDtsJobsResponseBodyEtlDemoListRetryState &) = default ;
    DescribeDtsJobsResponseBodyEtlDemoListRetryState(DescribeDtsJobsResponseBodyEtlDemoListRetryState &&) = default ;
    DescribeDtsJobsResponseBodyEtlDemoListRetryState(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsResponseBodyEtlDemoListRetryState() = default ;
    DescribeDtsJobsResponseBodyEtlDemoListRetryState& operator=(const DescribeDtsJobsResponseBodyEtlDemoListRetryState &) = default ;
    DescribeDtsJobsResponseBodyEtlDemoListRetryState& operator=(DescribeDtsJobsResponseBodyEtlDemoListRetryState &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errMessage_ != nullptr
        && this->jobId_ != nullptr && this->maxRetryTime_ != nullptr && this->module_ != nullptr && this->retryCount_ != nullptr && this->retryTarget_ != nullptr
        && this->retryTime_ != nullptr && this->retrying_ != nullptr; };
    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListRetryState& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListRetryState& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // maxRetryTime Field Functions 
    bool hasMaxRetryTime() const { return this->maxRetryTime_ != nullptr;};
    void deleteMaxRetryTime() { this->maxRetryTime_ = nullptr;};
    inline int32_t maxRetryTime() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTime_, 0) };
    inline DescribeDtsJobsResponseBodyEtlDemoListRetryState& setMaxRetryTime(int32_t maxRetryTime) { DARABONBA_PTR_SET_VALUE(maxRetryTime_, maxRetryTime) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListRetryState& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // retryCount Field Functions 
    bool hasRetryCount() const { return this->retryCount_ != nullptr;};
    void deleteRetryCount() { this->retryCount_ = nullptr;};
    inline int32_t retryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
    inline DescribeDtsJobsResponseBodyEtlDemoListRetryState& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


    // retryTarget Field Functions 
    bool hasRetryTarget() const { return this->retryTarget_ != nullptr;};
    void deleteRetryTarget() { this->retryTarget_ = nullptr;};
    inline string retryTarget() const { DARABONBA_PTR_GET_DEFAULT(retryTarget_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListRetryState& setRetryTarget(string retryTarget) { DARABONBA_PTR_SET_VALUE(retryTarget_, retryTarget) };


    // retryTime Field Functions 
    bool hasRetryTime() const { return this->retryTime_ != nullptr;};
    void deleteRetryTime() { this->retryTime_ = nullptr;};
    inline int32_t retryTime() const { DARABONBA_PTR_GET_DEFAULT(retryTime_, 0) };
    inline DescribeDtsJobsResponseBodyEtlDemoListRetryState& setRetryTime(int32_t retryTime) { DARABONBA_PTR_SET_VALUE(retryTime_, retryTime) };


    // retrying Field Functions 
    bool hasRetrying() const { return this->retrying_ != nullptr;};
    void deleteRetrying() { this->retrying_ = nullptr;};
    inline bool retrying() const { DARABONBA_PTR_GET_DEFAULT(retrying_, false) };
    inline DescribeDtsJobsResponseBodyEtlDemoListRetryState& setRetrying(bool retrying) { DARABONBA_PTR_SET_VALUE(retrying_, retrying) };


  protected:
    // The error message returned if these retries failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The task ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The maximum duration of a retry. Unit: seconds.
    std::shared_ptr<int32_t> maxRetryTime_ = nullptr;
    // The progress of the instance when DTS retries.
    std::shared_ptr<string> module_ = nullptr;
    // The number of retries that have been performed.
    std::shared_ptr<int32_t> retryCount_ = nullptr;
    // The object on which these retries are performed. Valid values:
    // 
    // - **srcDB**: the source database 
    // - **destDB**: the destination database 
    // - **inner_module**: an internal module of DTS
    std::shared_ptr<string> retryTarget_ = nullptr;
    // The time that has elapsed from the time when the first retry starts. Unit: seconds.
    std::shared_ptr<int32_t> retryTime_ = nullptr;
    // Indicates whether the task is being retried. Valid values:
    // 
    // - **true**
    // - **false**
    std::shared_ptr<bool> retrying_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
