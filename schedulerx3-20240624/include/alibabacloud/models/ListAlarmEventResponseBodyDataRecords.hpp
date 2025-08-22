// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALARMEVENTRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTALARMEVENTRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListAlarmEventResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlarmEventResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmChannel, alarmChannel_);
      DARABONBA_PTR_TO_JSON(AlarmContacts, alarmContacts_);
      DARABONBA_PTR_TO_JSON(AlarmMessage, alarmMessage_);
      DARABONBA_PTR_TO_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_TO_JSON(AlarmType, alarmType_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlarmEventResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmChannel, alarmChannel_);
      DARABONBA_PTR_FROM_JSON(AlarmContacts, alarmContacts_);
      DARABONBA_PTR_FROM_JSON(AlarmMessage, alarmMessage_);
      DARABONBA_PTR_FROM_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_FROM_JSON(AlarmType, alarmType_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    ListAlarmEventResponseBodyDataRecords() = default ;
    ListAlarmEventResponseBodyDataRecords(const ListAlarmEventResponseBodyDataRecords &) = default ;
    ListAlarmEventResponseBodyDataRecords(ListAlarmEventResponseBodyDataRecords &&) = default ;
    ListAlarmEventResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlarmEventResponseBodyDataRecords() = default ;
    ListAlarmEventResponseBodyDataRecords& operator=(const ListAlarmEventResponseBodyDataRecords &) = default ;
    ListAlarmEventResponseBodyDataRecords& operator=(ListAlarmEventResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmChannel_ != nullptr
        && this->alarmContacts_ != nullptr && this->alarmMessage_ != nullptr && this->alarmStatus_ != nullptr && this->alarmType_ != nullptr && this->appName_ != nullptr
        && this->jobName_ != nullptr && this->time_ != nullptr; };
    // alarmChannel Field Functions 
    bool hasAlarmChannel() const { return this->alarmChannel_ != nullptr;};
    void deleteAlarmChannel() { this->alarmChannel_ = nullptr;};
    inline string alarmChannel() const { DARABONBA_PTR_GET_DEFAULT(alarmChannel_, "") };
    inline ListAlarmEventResponseBodyDataRecords& setAlarmChannel(string alarmChannel) { DARABONBA_PTR_SET_VALUE(alarmChannel_, alarmChannel) };


    // alarmContacts Field Functions 
    bool hasAlarmContacts() const { return this->alarmContacts_ != nullptr;};
    void deleteAlarmContacts() { this->alarmContacts_ = nullptr;};
    inline string alarmContacts() const { DARABONBA_PTR_GET_DEFAULT(alarmContacts_, "") };
    inline ListAlarmEventResponseBodyDataRecords& setAlarmContacts(string alarmContacts) { DARABONBA_PTR_SET_VALUE(alarmContacts_, alarmContacts) };


    // alarmMessage Field Functions 
    bool hasAlarmMessage() const { return this->alarmMessage_ != nullptr;};
    void deleteAlarmMessage() { this->alarmMessage_ = nullptr;};
    inline string alarmMessage() const { DARABONBA_PTR_GET_DEFAULT(alarmMessage_, "") };
    inline ListAlarmEventResponseBodyDataRecords& setAlarmMessage(string alarmMessage) { DARABONBA_PTR_SET_VALUE(alarmMessage_, alarmMessage) };


    // alarmStatus Field Functions 
    bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
    void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
    inline string alarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
    inline ListAlarmEventResponseBodyDataRecords& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


    // alarmType Field Functions 
    bool hasAlarmType() const { return this->alarmType_ != nullptr;};
    void deleteAlarmType() { this->alarmType_ = nullptr;};
    inline string alarmType() const { DARABONBA_PTR_GET_DEFAULT(alarmType_, "") };
    inline ListAlarmEventResponseBodyDataRecords& setAlarmType(string alarmType) { DARABONBA_PTR_SET_VALUE(alarmType_, alarmType) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAlarmEventResponseBodyDataRecords& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListAlarmEventResponseBodyDataRecords& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ListAlarmEventResponseBodyDataRecords& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<string> alarmChannel_ = nullptr;
    std::shared_ptr<string> alarmContacts_ = nullptr;
    std::shared_ptr<string> alarmMessage_ = nullptr;
    std::shared_ptr<string> alarmStatus_ = nullptr;
    std::shared_ptr<string> alarmType_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
