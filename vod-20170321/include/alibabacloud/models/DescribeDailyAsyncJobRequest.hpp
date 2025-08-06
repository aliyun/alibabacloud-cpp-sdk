// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDAILYASYNCJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDAILYASYNCJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeDailyAsyncJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDailyAsyncJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(JobState, jobState_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDailyAsyncJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(JobState, jobState_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDailyAsyncJobRequest() = default ;
    DescribeDailyAsyncJobRequest(const DescribeDailyAsyncJobRequest &) = default ;
    DescribeDailyAsyncJobRequest(DescribeDailyAsyncJobRequest &&) = default ;
    DescribeDailyAsyncJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDailyAsyncJobRequest() = default ;
    DescribeDailyAsyncJobRequest& operator=(const DescribeDailyAsyncJobRequest &) = default ;
    DescribeDailyAsyncJobRequest& operator=(DescribeDailyAsyncJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->jobState_ != nullptr && this->jobType_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDailyAsyncJobRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobState Field Functions 
    bool hasJobState() const { return this->jobState_ != nullptr;};
    void deleteJobState() { this->jobState_ = nullptr;};
    inline string jobState() const { DARABONBA_PTR_GET_DEFAULT(jobState_, "") };
    inline DescribeDailyAsyncJobRequest& setJobState(string jobState) { DARABONBA_PTR_SET_VALUE(jobState_, jobState) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DescribeDailyAsyncJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDailyAsyncJobRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> jobState_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
