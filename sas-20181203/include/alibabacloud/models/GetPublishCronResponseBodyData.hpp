// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLISHCRONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLISHCRONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetPublishCronResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublishCronResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Cron, cron_);
      DARABONBA_PTR_TO_JSON(CronDay, cronDay_);
      DARABONBA_PTR_TO_JSON(CronTime, cronTime_);
      DARABONBA_PTR_TO_JSON(CronType, cronType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublishCronResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Cron, cron_);
      DARABONBA_PTR_FROM_JSON(CronDay, cronDay_);
      DARABONBA_PTR_FROM_JSON(CronTime, cronTime_);
      DARABONBA_PTR_FROM_JSON(CronType, cronType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
    };
    GetPublishCronResponseBodyData() = default ;
    GetPublishCronResponseBodyData(const GetPublishCronResponseBodyData &) = default ;
    GetPublishCronResponseBodyData(GetPublishCronResponseBodyData &&) = default ;
    GetPublishCronResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublishCronResponseBodyData() = default ;
    GetPublishCronResponseBodyData& operator=(const GetPublishCronResponseBodyData &) = default ;
    GetPublishCronResponseBodyData& operator=(GetPublishCronResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cron_ == nullptr
        && return this->cronDay_ == nullptr && return this->cronTime_ == nullptr && return this->cronType_ == nullptr && return this->duration_ == nullptr; };
    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline string cron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
    inline GetPublishCronResponseBodyData& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // cronDay Field Functions 
    bool hasCronDay() const { return this->cronDay_ != nullptr;};
    void deleteCronDay() { this->cronDay_ = nullptr;};
    inline string cronDay() const { DARABONBA_PTR_GET_DEFAULT(cronDay_, "") };
    inline GetPublishCronResponseBodyData& setCronDay(string cronDay) { DARABONBA_PTR_SET_VALUE(cronDay_, cronDay) };


    // cronTime Field Functions 
    bool hasCronTime() const { return this->cronTime_ != nullptr;};
    void deleteCronTime() { this->cronTime_ = nullptr;};
    inline int64_t cronTime() const { DARABONBA_PTR_GET_DEFAULT(cronTime_, 0L) };
    inline GetPublishCronResponseBodyData& setCronTime(int64_t cronTime) { DARABONBA_PTR_SET_VALUE(cronTime_, cronTime) };


    // cronType Field Functions 
    bool hasCronType() const { return this->cronType_ != nullptr;};
    void deleteCronType() { this->cronType_ = nullptr;};
    inline string cronType() const { DARABONBA_PTR_GET_DEFAULT(cronType_, "") };
    inline GetPublishCronResponseBodyData& setCronType(string cronType) { DARABONBA_PTR_SET_VALUE(cronType_, cronType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline GetPublishCronResponseBodyData& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


  protected:
    // Cron expression for the start time of the upgrade.
    std::shared_ptr<string> cron_ = nullptr;
    // The day of the week for the upgrade. The values are as follows:
    // - **MON**: Monday
    // - **TUE**: Tuesday
    // - **WED**: Wednesday
    // - **THU**: Thursday
    // - **FRI**: Friday
    // - **SAT**: Saturday
    // - **SUN**: Sunday
    std::shared_ptr<string> cronDay_ = nullptr;
    // Timestamp for the start of the publish, in milliseconds.
    std::shared_ptr<int64_t> cronTime_ = nullptr;
    // Upgrade start cycle type. The values are as follows:
    // - **day**: Daily
    // - **week**: Weekly
    std::shared_ptr<string> cronType_ = nullptr;
    // Duration of the upgrade in hours.
    std::shared_ptr<int32_t> duration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
