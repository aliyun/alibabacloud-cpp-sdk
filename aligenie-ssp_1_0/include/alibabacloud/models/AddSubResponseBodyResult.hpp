// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSUBRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_ADDSUBRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddSubResponseBodyResultScheduleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AddSubResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSubResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AlbumId, albumId_);
      DARABONBA_PTR_TO_JSON(DailyStudyCnt, dailyStudyCnt_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PlayMode, playMode_);
      DARABONBA_PTR_TO_JSON(ScheduleInfo, scheduleInfo_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AddSubResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbumId, albumId_);
      DARABONBA_PTR_FROM_JSON(DailyStudyCnt, dailyStudyCnt_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PlayMode, playMode_);
      DARABONBA_PTR_FROM_JSON(ScheduleInfo, scheduleInfo_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AddSubResponseBodyResult() = default ;
    AddSubResponseBodyResult(const AddSubResponseBodyResult &) = default ;
    AddSubResponseBodyResult(AddSubResponseBodyResult &&) = default ;
    AddSubResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSubResponseBodyResult() = default ;
    AddSubResponseBodyResult& operator=(const AddSubResponseBodyResult &) = default ;
    AddSubResponseBodyResult& operator=(AddSubResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albumId_ != nullptr
        && this->dailyStudyCnt_ != nullptr && this->deviceId_ != nullptr && this->id_ != nullptr && this->playMode_ != nullptr && this->scheduleInfo_ != nullptr
        && this->userId_ != nullptr; };
    // albumId Field Functions 
    bool hasAlbumId() const { return this->albumId_ != nullptr;};
    void deleteAlbumId() { this->albumId_ = nullptr;};
    inline string albumId() const { DARABONBA_PTR_GET_DEFAULT(albumId_, "") };
    inline AddSubResponseBodyResult& setAlbumId(string albumId) { DARABONBA_PTR_SET_VALUE(albumId_, albumId) };


    // dailyStudyCnt Field Functions 
    bool hasDailyStudyCnt() const { return this->dailyStudyCnt_ != nullptr;};
    void deleteDailyStudyCnt() { this->dailyStudyCnt_ = nullptr;};
    inline int32_t dailyStudyCnt() const { DARABONBA_PTR_GET_DEFAULT(dailyStudyCnt_, 0) };
    inline AddSubResponseBodyResult& setDailyStudyCnt(int32_t dailyStudyCnt) { DARABONBA_PTR_SET_VALUE(dailyStudyCnt_, dailyStudyCnt) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline AddSubResponseBodyResult& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AddSubResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // playMode Field Functions 
    bool hasPlayMode() const { return this->playMode_ != nullptr;};
    void deletePlayMode() { this->playMode_ = nullptr;};
    inline string playMode() const { DARABONBA_PTR_GET_DEFAULT(playMode_, "") };
    inline AddSubResponseBodyResult& setPlayMode(string playMode) { DARABONBA_PTR_SET_VALUE(playMode_, playMode) };


    // scheduleInfo Field Functions 
    bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
    void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
    inline const Models::AddSubResponseBodyResultScheduleInfo & scheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, Models::AddSubResponseBodyResultScheduleInfo) };
    inline Models::AddSubResponseBodyResultScheduleInfo scheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, Models::AddSubResponseBodyResultScheduleInfo) };
    inline AddSubResponseBodyResult& setScheduleInfo(const Models::AddSubResponseBodyResultScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
    inline AddSubResponseBodyResult& setScheduleInfo(Models::AddSubResponseBodyResultScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddSubResponseBodyResult& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> albumId_ = nullptr;
    std::shared_ptr<int32_t> dailyStudyCnt_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> playMode_ = nullptr;
    std::shared_ptr<Models::AddSubResponseBodyResultScheduleInfo> scheduleInfo_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
