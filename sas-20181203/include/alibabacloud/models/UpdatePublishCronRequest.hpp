// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPUBLISHCRONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPUBLISHCRONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdatePublishCronRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePublishCronRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cron, cron_);
      DARABONBA_PTR_TO_JSON(CronDay, cronDay_);
      DARABONBA_PTR_TO_JSON(CronTime, cronTime_);
      DARABONBA_PTR_TO_JSON(CronType, cronType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePublishCronRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cron, cron_);
      DARABONBA_PTR_FROM_JSON(CronDay, cronDay_);
      DARABONBA_PTR_FROM_JSON(CronTime, cronTime_);
      DARABONBA_PTR_FROM_JSON(CronType, cronType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
    };
    UpdatePublishCronRequest() = default ;
    UpdatePublishCronRequest(const UpdatePublishCronRequest &) = default ;
    UpdatePublishCronRequest(UpdatePublishCronRequest &&) = default ;
    UpdatePublishCronRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePublishCronRequest() = default ;
    UpdatePublishCronRequest& operator=(const UpdatePublishCronRequest &) = default ;
    UpdatePublishCronRequest& operator=(UpdatePublishCronRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cron_ == nullptr
        && this->cronDay_ == nullptr && this->cronTime_ == nullptr && this->cronType_ == nullptr && this->duration_ == nullptr; };
    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
    inline UpdatePublishCronRequest& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // cronDay Field Functions 
    bool hasCronDay() const { return this->cronDay_ != nullptr;};
    void deleteCronDay() { this->cronDay_ = nullptr;};
    inline string getCronDay() const { DARABONBA_PTR_GET_DEFAULT(cronDay_, "") };
    inline UpdatePublishCronRequest& setCronDay(string cronDay) { DARABONBA_PTR_SET_VALUE(cronDay_, cronDay) };


    // cronTime Field Functions 
    bool hasCronTime() const { return this->cronTime_ != nullptr;};
    void deleteCronTime() { this->cronTime_ = nullptr;};
    inline int64_t getCronTime() const { DARABONBA_PTR_GET_DEFAULT(cronTime_, 0L) };
    inline UpdatePublishCronRequest& setCronTime(int64_t cronTime) { DARABONBA_PTR_SET_VALUE(cronTime_, cronTime) };


    // cronType Field Functions 
    bool hasCronType() const { return this->cronType_ != nullptr;};
    void deleteCronType() { this->cronType_ = nullptr;};
    inline string getCronType() const { DARABONBA_PTR_GET_DEFAULT(cronType_, "") };
    inline UpdatePublishCronRequest& setCronType(string cronType) { DARABONBA_PTR_SET_VALUE(cronType_, cronType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline UpdatePublishCronRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


  protected:
    // The cron expression that is used to specify the start time of the upgrade.
    // 
    // This parameter is required.
    shared_ptr<string> cron_ {};
    // The day of a week on which you want to perform the upgrade. Valid values:
    // 
    // *   **MON**
    // *   **TUE**
    // *   **WED**
    // *   **THU**
    // *   **FRI**
    // *   **SAT**
    // *   **SUN**
    shared_ptr<string> cronDay_ {};
    // The start timestamp. Unit: milliseconds.
    shared_ptr<int64_t> cronTime_ {};
    // The type of the upgrade cycle. Valid values:
    // 
    // *   **day**: every day
    // *   **week**: every week
    shared_ptr<string> cronType_ {};
    // The duration of the upgrade. Unit: hours.
    // 
    // This parameter is required.
    shared_ptr<int32_t> duration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
