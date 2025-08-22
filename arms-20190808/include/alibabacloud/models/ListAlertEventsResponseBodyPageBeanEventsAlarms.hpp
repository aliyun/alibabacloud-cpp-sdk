// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTEVENTSRESPONSEBODYPAGEBEANEVENTSALARMS_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTEVENTSRESPONSEBODYPAGEBEANEVENTSALARMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAlertEventsResponseBodyPageBeanEventsAlarms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertEventsResponseBodyPageBeanEventsAlarms& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_TO_JSON(AlarmName, alarmName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertEventsResponseBodyPageBeanEventsAlarms& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_FROM_JSON(AlarmName, alarmName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListAlertEventsResponseBodyPageBeanEventsAlarms() = default ;
    ListAlertEventsResponseBodyPageBeanEventsAlarms(const ListAlertEventsResponseBodyPageBeanEventsAlarms &) = default ;
    ListAlertEventsResponseBodyPageBeanEventsAlarms(ListAlertEventsResponseBodyPageBeanEventsAlarms &&) = default ;
    ListAlertEventsResponseBodyPageBeanEventsAlarms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertEventsResponseBodyPageBeanEventsAlarms() = default ;
    ListAlertEventsResponseBodyPageBeanEventsAlarms& operator=(const ListAlertEventsResponseBodyPageBeanEventsAlarms &) = default ;
    ListAlertEventsResponseBodyPageBeanEventsAlarms& operator=(ListAlertEventsResponseBodyPageBeanEventsAlarms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmId_ != nullptr
        && this->alarmName_ != nullptr && this->createTime_ != nullptr && this->state_ != nullptr; };
    // alarmId Field Functions 
    bool hasAlarmId() const { return this->alarmId_ != nullptr;};
    void deleteAlarmId() { this->alarmId_ = nullptr;};
    inline int64_t alarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, 0L) };
    inline ListAlertEventsResponseBodyPageBeanEventsAlarms& setAlarmId(int64_t alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


    // alarmName Field Functions 
    bool hasAlarmName() const { return this->alarmName_ != nullptr;};
    void deleteAlarmName() { this->alarmName_ = nullptr;};
    inline string alarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
    inline ListAlertEventsResponseBodyPageBeanEventsAlarms& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAlertEventsResponseBodyPageBeanEventsAlarms& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline ListAlertEventsResponseBodyPageBeanEventsAlarms& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The ID of the alert.
    std::shared_ptr<int64_t> alarmId_ = nullptr;
    // The name of the alert.
    std::shared_ptr<string> alarmName_ = nullptr;
    // The time when the alert was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The status of the alert. Valid values:
    // 
    // *   0: The alert is pending.
    // *   1: The alert is being handled.
    // *   2: The alert is cleared.
    std::shared_ptr<int32_t> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
