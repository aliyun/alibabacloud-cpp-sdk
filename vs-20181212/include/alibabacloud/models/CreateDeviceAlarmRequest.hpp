// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEVICEALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEVICEALARMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateDeviceAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeviceAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alarm, alarm_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SubAlarm, subAlarm_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeviceAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alarm, alarm_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SubAlarm, subAlarm_);
    };
    CreateDeviceAlarmRequest() = default ;
    CreateDeviceAlarmRequest(const CreateDeviceAlarmRequest &) = default ;
    CreateDeviceAlarmRequest(CreateDeviceAlarmRequest &&) = default ;
    CreateDeviceAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeviceAlarmRequest() = default ;
    CreateDeviceAlarmRequest& operator=(const CreateDeviceAlarmRequest &) = default ;
    CreateDeviceAlarmRequest& operator=(CreateDeviceAlarmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarm_ == nullptr
        && return this->channelId_ == nullptr && return this->endTime_ == nullptr && return this->expire_ == nullptr && return this->id_ == nullptr && return this->objectType_ == nullptr
        && return this->ownerId_ == nullptr && return this->startTime_ == nullptr && return this->subAlarm_ == nullptr; };
    // alarm Field Functions 
    bool hasAlarm() const { return this->alarm_ != nullptr;};
    void deleteAlarm() { this->alarm_ = nullptr;};
    inline int32_t alarm() const { DARABONBA_PTR_GET_DEFAULT(alarm_, 0) };
    inline CreateDeviceAlarmRequest& setAlarm(int32_t alarm) { DARABONBA_PTR_SET_VALUE(alarm_, alarm) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline int32_t channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, 0) };
    inline CreateDeviceAlarmRequest& setChannelId(int32_t channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateDeviceAlarmRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline CreateDeviceAlarmRequest& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateDeviceAlarmRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline int32_t objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, 0) };
    inline CreateDeviceAlarmRequest& setObjectType(int32_t objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDeviceAlarmRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateDeviceAlarmRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subAlarm Field Functions 
    bool hasSubAlarm() const { return this->subAlarm_ != nullptr;};
    void deleteSubAlarm() { this->subAlarm_ = nullptr;};
    inline int32_t subAlarm() const { DARABONBA_PTR_GET_DEFAULT(subAlarm_, 0) };
    inline CreateDeviceAlarmRequest& setSubAlarm(int32_t subAlarm) { DARABONBA_PTR_SET_VALUE(subAlarm_, subAlarm) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> alarm_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> channelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> expire_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> objectType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> subAlarm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
