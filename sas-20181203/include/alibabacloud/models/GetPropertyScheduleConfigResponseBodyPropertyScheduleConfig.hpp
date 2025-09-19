// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTYSCHEDULECONFIGRESPONSEBODYPROPERTYSCHEDULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTYSCHEDULECONFIGRESPONSEBODYPROPERTYSCHEDULECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(NextScheduleTime, nextScheduleTime_);
      DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(NextScheduleTime, nextScheduleTime_);
      DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig() = default ;
    GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig(const GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig &) = default ;
    GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig(GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig &&) = default ;
    GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig() = default ;
    GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig& operator=(const GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig &) = default ;
    GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig& operator=(GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextScheduleTime_ != nullptr
        && this->scheduleTime_ != nullptr && this->type_ != nullptr; };
    // nextScheduleTime Field Functions 
    bool hasNextScheduleTime() const { return this->nextScheduleTime_ != nullptr;};
    void deleteNextScheduleTime() { this->nextScheduleTime_ = nullptr;};
    inline int64_t nextScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(nextScheduleTime_, 0L) };
    inline GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig& setNextScheduleTime(int64_t nextScheduleTime) { DARABONBA_PTR_SET_VALUE(nextScheduleTime_, nextScheduleTime) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string scheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The timestamp when the next collection of asset fingerprints starts. Unit: milliseconds.
    std::shared_ptr<int64_t> nextScheduleTime_ = nullptr;
    // The collection frequency of asset fingerprints. Valid values:
    // 
    // *   **0**: disabled, which indicates that the asset fingerprints are not automatically or periodically collected.
    // *   **1**: collects asset fingerprints once an hour.
    // *   **3**: collects asset fingerprints once every 3 hours.
    // *   **12**: collects asset fingerprints once every 12 hours.
    // *   **24**: collects asset fingerprints once a day.
    // *   **168**: collects asset fingerprints once every 7 days.
    std::shared_ptr<string> scheduleTime_ = nullptr;
    // The type of the asset fingerprints. Valid values:
    // 
    // *   **scheduler_port_period**: listening port
    // *   **scheduler_process_period**: running process
    // *   **scheduler_account_period**: account
    // *   **scheduler_software_period**: software
    // *   **scheduler_cron_period**: scheduled task
    // *   **scheduler_sca_period**: middleware
    // *   **scheduler_autorun_period**: startup item
    // *   **scheduler_lkm_period**: kernel module
    // *   **scheduler_sca_proxy_period**: website
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
