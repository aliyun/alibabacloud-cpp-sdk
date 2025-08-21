// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALARMREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALARMREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAlarmRequestPayloadMusicInfo.hpp>
#include <alibabacloud/models/UpdateAlarmRequestPayloadScheduleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class UpdateAlarmRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlarmRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_TO_JSON(MusicInfo, musicInfo_);
      DARABONBA_PTR_TO_JSON(ScheduleInfo, scheduleInfo_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlarmRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_FROM_JSON(MusicInfo, musicInfo_);
      DARABONBA_PTR_FROM_JSON(ScheduleInfo, scheduleInfo_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    UpdateAlarmRequestPayload() = default ;
    UpdateAlarmRequestPayload(const UpdateAlarmRequestPayload &) = default ;
    UpdateAlarmRequestPayload(UpdateAlarmRequestPayload &&) = default ;
    UpdateAlarmRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlarmRequestPayload() = default ;
    UpdateAlarmRequestPayload& operator=(const UpdateAlarmRequestPayload &) = default ;
    UpdateAlarmRequestPayload& operator=(UpdateAlarmRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmId_ != nullptr
        && this->musicInfo_ != nullptr && this->scheduleInfo_ != nullptr && this->volume_ != nullptr; };
    // alarmId Field Functions 
    bool hasAlarmId() const { return this->alarmId_ != nullptr;};
    void deleteAlarmId() { this->alarmId_ = nullptr;};
    inline int64_t alarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, 0L) };
    inline UpdateAlarmRequestPayload& setAlarmId(int64_t alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


    // musicInfo Field Functions 
    bool hasMusicInfo() const { return this->musicInfo_ != nullptr;};
    void deleteMusicInfo() { this->musicInfo_ = nullptr;};
    inline const Models::UpdateAlarmRequestPayloadMusicInfo & musicInfo() const { DARABONBA_PTR_GET_CONST(musicInfo_, Models::UpdateAlarmRequestPayloadMusicInfo) };
    inline Models::UpdateAlarmRequestPayloadMusicInfo musicInfo() { DARABONBA_PTR_GET(musicInfo_, Models::UpdateAlarmRequestPayloadMusicInfo) };
    inline UpdateAlarmRequestPayload& setMusicInfo(const Models::UpdateAlarmRequestPayloadMusicInfo & musicInfo) { DARABONBA_PTR_SET_VALUE(musicInfo_, musicInfo) };
    inline UpdateAlarmRequestPayload& setMusicInfo(Models::UpdateAlarmRequestPayloadMusicInfo && musicInfo) { DARABONBA_PTR_SET_RVALUE(musicInfo_, musicInfo) };


    // scheduleInfo Field Functions 
    bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
    void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
    inline const Models::UpdateAlarmRequestPayloadScheduleInfo & scheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, Models::UpdateAlarmRequestPayloadScheduleInfo) };
    inline Models::UpdateAlarmRequestPayloadScheduleInfo scheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, Models::UpdateAlarmRequestPayloadScheduleInfo) };
    inline UpdateAlarmRequestPayload& setScheduleInfo(const Models::UpdateAlarmRequestPayloadScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
    inline UpdateAlarmRequestPayload& setScheduleInfo(Models::UpdateAlarmRequestPayloadScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline UpdateAlarmRequestPayload& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> alarmId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::UpdateAlarmRequestPayloadMusicInfo> musicInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::UpdateAlarmRequestPayloadScheduleInfo> scheduleInfo_ = nullptr;
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
