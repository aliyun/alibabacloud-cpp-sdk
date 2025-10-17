// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLISTRETRYSTATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLISTRETRYSTATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsResponseBodyDtsJobListRetryState : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsResponseBodyDtsJobListRetryState& obj) { 
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MaxRetryTime, maxRetryTime_);
      DARABONBA_PTR_TO_JSON(MigrationErrCode, migrationErrCode_);
      DARABONBA_PTR_TO_JSON(MigrationErrHelpDocId, migrationErrHelpDocId_);
      DARABONBA_PTR_TO_JSON(MigrationErrHelpDocKey, migrationErrHelpDocKey_);
      DARABONBA_PTR_TO_JSON(MigrationErrMsg, migrationErrMsg_);
      DARABONBA_PTR_TO_JSON(MigrationErrType, migrationErrType_);
      DARABONBA_PTR_TO_JSON(MigrationErrWorkaround, migrationErrWorkaround_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
      DARABONBA_PTR_TO_JSON(RetryTarget, retryTarget_);
      DARABONBA_PTR_TO_JSON(RetryTime, retryTime_);
      DARABONBA_PTR_TO_JSON(Retrying, retrying_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsResponseBodyDtsJobListRetryState& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MaxRetryTime, maxRetryTime_);
      DARABONBA_PTR_FROM_JSON(MigrationErrCode, migrationErrCode_);
      DARABONBA_PTR_FROM_JSON(MigrationErrHelpDocId, migrationErrHelpDocId_);
      DARABONBA_PTR_FROM_JSON(MigrationErrHelpDocKey, migrationErrHelpDocKey_);
      DARABONBA_PTR_FROM_JSON(MigrationErrMsg, migrationErrMsg_);
      DARABONBA_PTR_FROM_JSON(MigrationErrType, migrationErrType_);
      DARABONBA_PTR_FROM_JSON(MigrationErrWorkaround, migrationErrWorkaround_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
      DARABONBA_PTR_FROM_JSON(RetryTarget, retryTarget_);
      DARABONBA_PTR_FROM_JSON(RetryTime, retryTime_);
      DARABONBA_PTR_FROM_JSON(Retrying, retrying_);
    };
    DescribeDtsJobsResponseBodyDtsJobListRetryState() = default ;
    DescribeDtsJobsResponseBodyDtsJobListRetryState(const DescribeDtsJobsResponseBodyDtsJobListRetryState &) = default ;
    DescribeDtsJobsResponseBodyDtsJobListRetryState(DescribeDtsJobsResponseBodyDtsJobListRetryState &&) = default ;
    DescribeDtsJobsResponseBodyDtsJobListRetryState(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsResponseBodyDtsJobListRetryState() = default ;
    DescribeDtsJobsResponseBodyDtsJobListRetryState& operator=(const DescribeDtsJobsResponseBodyDtsJobListRetryState &) = default ;
    DescribeDtsJobsResponseBodyDtsJobListRetryState& operator=(DescribeDtsJobsResponseBodyDtsJobListRetryState &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errMessage_ == nullptr
        && return this->jobId_ == nullptr && return this->maxRetryTime_ == nullptr && return this->migrationErrCode_ == nullptr && return this->migrationErrHelpDocId_ == nullptr && return this->migrationErrHelpDocKey_ == nullptr
        && return this->migrationErrMsg_ == nullptr && return this->migrationErrType_ == nullptr && return this->migrationErrWorkaround_ == nullptr && return this->module_ == nullptr && return this->retryCount_ == nullptr
        && return this->retryTarget_ == nullptr && return this->retryTime_ == nullptr && return this->retrying_ == nullptr; };
    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListRetryState& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListRetryState& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // maxRetryTime Field Functions 
    bool hasMaxRetryTime() const { return this->maxRetryTime_ != nullptr;};
    void deleteMaxRetryTime() { this->maxRetryTime_ = nullptr;};
    inline int32_t maxRetryTime() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTime_, 0) };
    inline DescribeDtsJobsResponseBodyDtsJobListRetryState& setMaxRetryTime(int32_t maxRetryTime) { DARABONBA_PTR_SET_VALUE(maxRetryTime_, maxRetryTime) };


    // migrationErrCode Field Functions 
    bool hasMigrationErrCode() const { return this->migrationErrCode_ != nullptr;};
    void deleteMigrationErrCode() { this->migrationErrCode_ = nullptr;};
    inline string migrationErrCode() const { DARABONBA_PTR_GET_DEFAULT(migrationErrCode_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListRetryState& setMigrationErrCode(string migrationErrCode) { DARABONBA_PTR_SET_VALUE(migrationErrCode_, migrationErrCode) };


    // migrationErrHelpDocId Field Functions 
    bool hasMigrationErrHelpDocId() const { return this->migrationErrHelpDocId_ != nullptr;};
    void deleteMigrationErrHelpDocId() { this->migrationErrHelpDocId_ = nullptr;};
    inline string migrationErrHelpDocId() const { DARABONBA_PTR_GET_DEFAULT(migrationErrHelpDocId_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListRetryState& setMigrationErrHelpDocId(string migrationErrHelpDocId) { DARABONBA_PTR_SET_VALUE(migrationErrHelpDocId_, migrationErrHelpDocId) };


    // migrationErrHelpDocKey Field Functions 
    bool hasMigrationErrHelpDocKey() const { return this->migrationErrHelpDocKey_ != nullptr;};
    void deleteMigrationErrHelpDocKey() { this->migrationErrHelpDocKey_ = nullptr;};
    inline string migrationErrHelpDocKey() const { DARABONBA_PTR_GET_DEFAULT(migrationErrHelpDocKey_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListRetryState& setMigrationErrHelpDocKey(string migrationErrHelpDocKey) { DARABONBA_PTR_SET_VALUE(migrationErrHelpDocKey_, migrationErrHelpDocKey) };


    // migrationErrMsg Field Functions 
    bool hasMigrationErrMsg() const { return this->migrationErrMsg_ != nullptr;};
    void deleteMigrationErrMsg() { this->migrationErrMsg_ = nullptr;};
    inline string migrationErrMsg() const { DARABONBA_PTR_GET_DEFAULT(migrationErrMsg_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListRetryState& setMigrationErrMsg(string migrationErrMsg) { DARABONBA_PTR_SET_VALUE(migrationErrMsg_, migrationErrMsg) };


    // migrationErrType Field Functions 
    bool hasMigrationErrType() const { return this->migrationErrType_ != nullptr;};
    void deleteMigrationErrType() { this->migrationErrType_ = nullptr;};
    inline string migrationErrType() const { DARABONBA_PTR_GET_DEFAULT(migrationErrType_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListRetryState& setMigrationErrType(string migrationErrType) { DARABONBA_PTR_SET_VALUE(migrationErrType_, migrationErrType) };


    // migrationErrWorkaround Field Functions 
    bool hasMigrationErrWorkaround() const { return this->migrationErrWorkaround_ != nullptr;};
    void deleteMigrationErrWorkaround() { this->migrationErrWorkaround_ = nullptr;};
    inline string migrationErrWorkaround() const { DARABONBA_PTR_GET_DEFAULT(migrationErrWorkaround_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListRetryState& setMigrationErrWorkaround(string migrationErrWorkaround) { DARABONBA_PTR_SET_VALUE(migrationErrWorkaround_, migrationErrWorkaround) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListRetryState& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // retryCount Field Functions 
    bool hasRetryCount() const { return this->retryCount_ != nullptr;};
    void deleteRetryCount() { this->retryCount_ = nullptr;};
    inline int32_t retryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
    inline DescribeDtsJobsResponseBodyDtsJobListRetryState& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


    // retryTarget Field Functions 
    bool hasRetryTarget() const { return this->retryTarget_ != nullptr;};
    void deleteRetryTarget() { this->retryTarget_ = nullptr;};
    inline string retryTarget() const { DARABONBA_PTR_GET_DEFAULT(retryTarget_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListRetryState& setRetryTarget(string retryTarget) { DARABONBA_PTR_SET_VALUE(retryTarget_, retryTarget) };


    // retryTime Field Functions 
    bool hasRetryTime() const { return this->retryTime_ != nullptr;};
    void deleteRetryTime() { this->retryTime_ = nullptr;};
    inline int32_t retryTime() const { DARABONBA_PTR_GET_DEFAULT(retryTime_, 0) };
    inline DescribeDtsJobsResponseBodyDtsJobListRetryState& setRetryTime(int32_t retryTime) { DARABONBA_PTR_SET_VALUE(retryTime_, retryTime) };


    // retrying Field Functions 
    bool hasRetrying() const { return this->retrying_ != nullptr;};
    void deleteRetrying() { this->retrying_ = nullptr;};
    inline bool retrying() const { DARABONBA_PTR_GET_DEFAULT(retrying_, false) };
    inline DescribeDtsJobsResponseBodyDtsJobListRetryState& setRetrying(bool retrying) { DARABONBA_PTR_SET_VALUE(retrying_, retrying) };


  protected:
    // The error message returned if these retries failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The task ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The maximum duration of a retry. Unit: seconds.
    std::shared_ptr<int32_t> maxRetryTime_ = nullptr;
    // The error code.
    std::shared_ptr<string> migrationErrCode_ = nullptr;
    // The ID of the error code-related documentation.
    std::shared_ptr<string> migrationErrHelpDocId_ = nullptr;
    // The key of the error code-related documentation.
    std::shared_ptr<string> migrationErrHelpDocKey_ = nullptr;
    // The error message.
    std::shared_ptr<string> migrationErrMsg_ = nullptr;
    // The type of the error code.
    std::shared_ptr<string> migrationErrType_ = nullptr;
    // The solution to the error.
    std::shared_ptr<string> migrationErrWorkaround_ = nullptr;
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
