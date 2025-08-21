// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALARMREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_CREATEALARMREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAlarmRequestPayloadMusicInfo.hpp>
#include <alibabacloud/models/CreateAlarmRequestPayloadScheduleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreateAlarmRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlarmRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(MusicInfo, musicInfo_);
      DARABONBA_PTR_TO_JSON(ScheduleInfo, scheduleInfo_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlarmRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(MusicInfo, musicInfo_);
      DARABONBA_PTR_FROM_JSON(ScheduleInfo, scheduleInfo_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    CreateAlarmRequestPayload() = default ;
    CreateAlarmRequestPayload(const CreateAlarmRequestPayload &) = default ;
    CreateAlarmRequestPayload(CreateAlarmRequestPayload &&) = default ;
    CreateAlarmRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlarmRequestPayload() = default ;
    CreateAlarmRequestPayload& operator=(const CreateAlarmRequestPayload &) = default ;
    CreateAlarmRequestPayload& operator=(CreateAlarmRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->musicInfo_ != nullptr
        && this->scheduleInfo_ != nullptr && this->volume_ != nullptr; };
    // musicInfo Field Functions 
    bool hasMusicInfo() const { return this->musicInfo_ != nullptr;};
    void deleteMusicInfo() { this->musicInfo_ = nullptr;};
    inline const Models::CreateAlarmRequestPayloadMusicInfo & musicInfo() const { DARABONBA_PTR_GET_CONST(musicInfo_, Models::CreateAlarmRequestPayloadMusicInfo) };
    inline Models::CreateAlarmRequestPayloadMusicInfo musicInfo() { DARABONBA_PTR_GET(musicInfo_, Models::CreateAlarmRequestPayloadMusicInfo) };
    inline CreateAlarmRequestPayload& setMusicInfo(const Models::CreateAlarmRequestPayloadMusicInfo & musicInfo) { DARABONBA_PTR_SET_VALUE(musicInfo_, musicInfo) };
    inline CreateAlarmRequestPayload& setMusicInfo(Models::CreateAlarmRequestPayloadMusicInfo && musicInfo) { DARABONBA_PTR_SET_RVALUE(musicInfo_, musicInfo) };


    // scheduleInfo Field Functions 
    bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
    void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
    inline const Models::CreateAlarmRequestPayloadScheduleInfo & scheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, Models::CreateAlarmRequestPayloadScheduleInfo) };
    inline Models::CreateAlarmRequestPayloadScheduleInfo scheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, Models::CreateAlarmRequestPayloadScheduleInfo) };
    inline CreateAlarmRequestPayload& setScheduleInfo(const Models::CreateAlarmRequestPayloadScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
    inline CreateAlarmRequestPayload& setScheduleInfo(Models::CreateAlarmRequestPayloadScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline CreateAlarmRequestPayload& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    // This parameter is required.
    std::shared_ptr<Models::CreateAlarmRequestPayloadMusicInfo> musicInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::CreateAlarmRequestPayloadScheduleInfo> scheduleInfo_ = nullptr;
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
