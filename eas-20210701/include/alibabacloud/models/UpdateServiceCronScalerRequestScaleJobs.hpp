// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICECRONSCALERREQUESTSCALEJOBS_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICECRONSCALERREQUESTSCALEJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceCronScalerRequestScaleJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceCronScalerRequestScaleJobs& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(TargetSize, targetSize_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceCronScalerRequestScaleJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(TargetSize, targetSize_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    UpdateServiceCronScalerRequestScaleJobs() = default ;
    UpdateServiceCronScalerRequestScaleJobs(const UpdateServiceCronScalerRequestScaleJobs &) = default ;
    UpdateServiceCronScalerRequestScaleJobs(UpdateServiceCronScalerRequestScaleJobs &&) = default ;
    UpdateServiceCronScalerRequestScaleJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceCronScalerRequestScaleJobs() = default ;
    UpdateServiceCronScalerRequestScaleJobs& operator=(const UpdateServiceCronScalerRequestScaleJobs &) = default ;
    UpdateServiceCronScalerRequestScaleJobs& operator=(UpdateServiceCronScalerRequestScaleJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->schedule_ == nullptr && return this->targetSize_ == nullptr && return this->timeZone_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateServiceCronScalerRequestScaleJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline UpdateServiceCronScalerRequestScaleJobs& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // targetSize Field Functions 
    bool hasTargetSize() const { return this->targetSize_ != nullptr;};
    void deleteTargetSize() { this->targetSize_ = nullptr;};
    inline int32_t targetSize() const { DARABONBA_PTR_GET_DEFAULT(targetSize_, 0) };
    inline UpdateServiceCronScalerRequestScaleJobs& setTargetSize(int32_t targetSize) { DARABONBA_PTR_SET_VALUE(targetSize_, targetSize) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline UpdateServiceCronScalerRequestScaleJobs& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    // The name of the CronHPA job.
    std::shared_ptr<string> name_ = nullptr;
    // The cron expression that is used to configure the execution time of the CronHPA job. For more information about how to configure cron expressions, see **Description of special characters** in this topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> schedule_ = nullptr;
    // The number of instances that you want to configure for the CronHPA job.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> targetSize_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
