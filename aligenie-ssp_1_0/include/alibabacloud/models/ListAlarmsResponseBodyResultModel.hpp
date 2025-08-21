// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALARMSRESPONSEBODYRESULTMODEL_HPP_
#define ALIBABACLOUD_MODELS_LISTALARMSRESPONSEBODYRESULTMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAlarmsResponseBodyResultModelMusicInfo.hpp>
#include <alibabacloud/models/ListAlarmsResponseBodyResultModelScheduleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListAlarmsResponseBodyResultModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlarmsResponseBodyResultModel& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_TO_JSON(MusicInfo, musicInfo_);
      DARABONBA_PTR_TO_JSON(ScheduleInfo, scheduleInfo_);
      DARABONBA_PTR_TO_JSON(ScheduleTypeDesc, scheduleTypeDesc_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TriggerDateDesc, triggerDateDesc_);
      DARABONBA_PTR_TO_JSON(TriggerTimeDesc, triggerTimeDesc_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlarmsResponseBodyResultModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_FROM_JSON(MusicInfo, musicInfo_);
      DARABONBA_PTR_FROM_JSON(ScheduleInfo, scheduleInfo_);
      DARABONBA_PTR_FROM_JSON(ScheduleTypeDesc, scheduleTypeDesc_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TriggerDateDesc, triggerDateDesc_);
      DARABONBA_PTR_FROM_JSON(TriggerTimeDesc, triggerTimeDesc_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    ListAlarmsResponseBodyResultModel() = default ;
    ListAlarmsResponseBodyResultModel(const ListAlarmsResponseBodyResultModel &) = default ;
    ListAlarmsResponseBodyResultModel(ListAlarmsResponseBodyResultModel &&) = default ;
    ListAlarmsResponseBodyResultModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlarmsResponseBodyResultModel() = default ;
    ListAlarmsResponseBodyResultModel& operator=(const ListAlarmsResponseBodyResultModel &) = default ;
    ListAlarmsResponseBodyResultModel& operator=(ListAlarmsResponseBodyResultModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmId_ != nullptr
        && this->musicInfo_ != nullptr && this->scheduleInfo_ != nullptr && this->scheduleTypeDesc_ != nullptr && this->status_ != nullptr && this->triggerDateDesc_ != nullptr
        && this->triggerTimeDesc_ != nullptr && this->volume_ != nullptr; };
    // alarmId Field Functions 
    bool hasAlarmId() const { return this->alarmId_ != nullptr;};
    void deleteAlarmId() { this->alarmId_ = nullptr;};
    inline int64_t alarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, 0L) };
    inline ListAlarmsResponseBodyResultModel& setAlarmId(int64_t alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


    // musicInfo Field Functions 
    bool hasMusicInfo() const { return this->musicInfo_ != nullptr;};
    void deleteMusicInfo() { this->musicInfo_ = nullptr;};
    inline const Models::ListAlarmsResponseBodyResultModelMusicInfo & musicInfo() const { DARABONBA_PTR_GET_CONST(musicInfo_, Models::ListAlarmsResponseBodyResultModelMusicInfo) };
    inline Models::ListAlarmsResponseBodyResultModelMusicInfo musicInfo() { DARABONBA_PTR_GET(musicInfo_, Models::ListAlarmsResponseBodyResultModelMusicInfo) };
    inline ListAlarmsResponseBodyResultModel& setMusicInfo(const Models::ListAlarmsResponseBodyResultModelMusicInfo & musicInfo) { DARABONBA_PTR_SET_VALUE(musicInfo_, musicInfo) };
    inline ListAlarmsResponseBodyResultModel& setMusicInfo(Models::ListAlarmsResponseBodyResultModelMusicInfo && musicInfo) { DARABONBA_PTR_SET_RVALUE(musicInfo_, musicInfo) };


    // scheduleInfo Field Functions 
    bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
    void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
    inline const Models::ListAlarmsResponseBodyResultModelScheduleInfo & scheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, Models::ListAlarmsResponseBodyResultModelScheduleInfo) };
    inline Models::ListAlarmsResponseBodyResultModelScheduleInfo scheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, Models::ListAlarmsResponseBodyResultModelScheduleInfo) };
    inline ListAlarmsResponseBodyResultModel& setScheduleInfo(const Models::ListAlarmsResponseBodyResultModelScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
    inline ListAlarmsResponseBodyResultModel& setScheduleInfo(Models::ListAlarmsResponseBodyResultModelScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


    // scheduleTypeDesc Field Functions 
    bool hasScheduleTypeDesc() const { return this->scheduleTypeDesc_ != nullptr;};
    void deleteScheduleTypeDesc() { this->scheduleTypeDesc_ = nullptr;};
    inline string scheduleTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(scheduleTypeDesc_, "") };
    inline ListAlarmsResponseBodyResultModel& setScheduleTypeDesc(string scheduleTypeDesc) { DARABONBA_PTR_SET_VALUE(scheduleTypeDesc_, scheduleTypeDesc) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListAlarmsResponseBodyResultModel& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // triggerDateDesc Field Functions 
    bool hasTriggerDateDesc() const { return this->triggerDateDesc_ != nullptr;};
    void deleteTriggerDateDesc() { this->triggerDateDesc_ = nullptr;};
    inline string triggerDateDesc() const { DARABONBA_PTR_GET_DEFAULT(triggerDateDesc_, "") };
    inline ListAlarmsResponseBodyResultModel& setTriggerDateDesc(string triggerDateDesc) { DARABONBA_PTR_SET_VALUE(triggerDateDesc_, triggerDateDesc) };


    // triggerTimeDesc Field Functions 
    bool hasTriggerTimeDesc() const { return this->triggerTimeDesc_ != nullptr;};
    void deleteTriggerTimeDesc() { this->triggerTimeDesc_ = nullptr;};
    inline string triggerTimeDesc() const { DARABONBA_PTR_GET_DEFAULT(triggerTimeDesc_, "") };
    inline ListAlarmsResponseBodyResultModel& setTriggerTimeDesc(string triggerTimeDesc) { DARABONBA_PTR_SET_VALUE(triggerTimeDesc_, triggerTimeDesc) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline ListAlarmsResponseBodyResultModel& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<int64_t> alarmId_ = nullptr;
    std::shared_ptr<Models::ListAlarmsResponseBodyResultModelMusicInfo> musicInfo_ = nullptr;
    std::shared_ptr<Models::ListAlarmsResponseBodyResultModelScheduleInfo> scheduleInfo_ = nullptr;
    std::shared_ptr<string> scheduleTypeDesc_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> triggerDateDesc_ = nullptr;
    std::shared_ptr<string> triggerTimeDesc_ = nullptr;
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
