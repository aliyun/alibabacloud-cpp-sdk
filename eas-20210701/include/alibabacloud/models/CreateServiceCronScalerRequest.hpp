// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICECRONSCALERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICECRONSCALERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceCronScalerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceCronScalerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeDates, excludeDates_);
      DARABONBA_PTR_TO_JSON(ScaleJobs, scaleJobs_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceCronScalerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeDates, excludeDates_);
      DARABONBA_PTR_FROM_JSON(ScaleJobs, scaleJobs_);
    };
    CreateServiceCronScalerRequest() = default ;
    CreateServiceCronScalerRequest(const CreateServiceCronScalerRequest &) = default ;
    CreateServiceCronScalerRequest(CreateServiceCronScalerRequest &&) = default ;
    CreateServiceCronScalerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceCronScalerRequest() = default ;
    CreateServiceCronScalerRequest& operator=(const CreateServiceCronScalerRequest &) = default ;
    CreateServiceCronScalerRequest& operator=(CreateServiceCronScalerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScaleJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScaleJobs& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Schedule, schedule_);
        DARABONBA_PTR_TO_JSON(TargetSize, targetSize_);
        DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      };
      friend void from_json(const Darabonba::Json& j, ScaleJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
        DARABONBA_PTR_FROM_JSON(TargetSize, targetSize_);
        DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      };
      ScaleJobs() = default ;
      ScaleJobs(const ScaleJobs &) = default ;
      ScaleJobs(ScaleJobs &&) = default ;
      ScaleJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScaleJobs() = default ;
      ScaleJobs& operator=(const ScaleJobs &) = default ;
      ScaleJobs& operator=(ScaleJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->schedule_ == nullptr && this->targetSize_ == nullptr && this->timeZone_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ScaleJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // schedule Field Functions 
      bool hasSchedule() const { return this->schedule_ != nullptr;};
      void deleteSchedule() { this->schedule_ = nullptr;};
      inline string getSchedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
      inline ScaleJobs& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


      // targetSize Field Functions 
      bool hasTargetSize() const { return this->targetSize_ != nullptr;};
      void deleteTargetSize() { this->targetSize_ = nullptr;};
      inline int32_t getTargetSize() const { DARABONBA_PTR_GET_DEFAULT(targetSize_, 0) };
      inline ScaleJobs& setTargetSize(int32_t targetSize) { DARABONBA_PTR_SET_VALUE(targetSize_, targetSize) };


      // timeZone Field Functions 
      bool hasTimeZone() const { return this->timeZone_ != nullptr;};
      void deleteTimeZone() { this->timeZone_ = nullptr;};
      inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
      inline ScaleJobs& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    protected:
      // The name of the CronHPA job.
      shared_ptr<string> name_ {};
      // The cron expression that is used to configure the execution time of the CronHPA job. For more information about how to configure cron expressions, see **Description of special characters** in this topic.
      // 
      // This parameter is required.
      shared_ptr<string> schedule_ {};
      // The number of instances that you want to configure for the CronHPA job.
      // 
      // This parameter is required.
      shared_ptr<int32_t> targetSize_ {};
      shared_ptr<string> timeZone_ {};
    };

    virtual bool empty() const override { return this->excludeDates_ == nullptr
        && this->scaleJobs_ == nullptr; };
    // excludeDates Field Functions 
    bool hasExcludeDates() const { return this->excludeDates_ != nullptr;};
    void deleteExcludeDates() { this->excludeDates_ = nullptr;};
    inline const vector<string> & getExcludeDates() const { DARABONBA_PTR_GET_CONST(excludeDates_, vector<string>) };
    inline vector<string> getExcludeDates() { DARABONBA_PTR_GET(excludeDates_, vector<string>) };
    inline CreateServiceCronScalerRequest& setExcludeDates(const vector<string> & excludeDates) { DARABONBA_PTR_SET_VALUE(excludeDates_, excludeDates) };
    inline CreateServiceCronScalerRequest& setExcludeDates(vector<string> && excludeDates) { DARABONBA_PTR_SET_RVALUE(excludeDates_, excludeDates) };


    // scaleJobs Field Functions 
    bool hasScaleJobs() const { return this->scaleJobs_ != nullptr;};
    void deleteScaleJobs() { this->scaleJobs_ = nullptr;};
    inline const vector<CreateServiceCronScalerRequest::ScaleJobs> & getScaleJobs() const { DARABONBA_PTR_GET_CONST(scaleJobs_, vector<CreateServiceCronScalerRequest::ScaleJobs>) };
    inline vector<CreateServiceCronScalerRequest::ScaleJobs> getScaleJobs() { DARABONBA_PTR_GET(scaleJobs_, vector<CreateServiceCronScalerRequest::ScaleJobs>) };
    inline CreateServiceCronScalerRequest& setScaleJobs(const vector<CreateServiceCronScalerRequest::ScaleJobs> & scaleJobs) { DARABONBA_PTR_SET_VALUE(scaleJobs_, scaleJobs) };
    inline CreateServiceCronScalerRequest& setScaleJobs(vector<CreateServiceCronScalerRequest::ScaleJobs> && scaleJobs) { DARABONBA_PTR_SET_RVALUE(scaleJobs_, scaleJobs) };


  protected:
    // The points in time that are excluded when you schedule a CronHPA job. The points in time must be specified by using a cron expression.
    shared_ptr<vector<string>> excludeDates_ {};
    // The description of the CronHPA job.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateServiceCronScalerRequest::ScaleJobs>> scaleJobs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
