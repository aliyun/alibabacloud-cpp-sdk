// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCHEDULEDBACKUPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCHEDULEDBACKUPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class UpdateScheduledBackupConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScheduledBackupConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(dataKeepQuantity, dataKeepQuantity_);
      DARABONBA_PTR_TO_JSON(dstRegion, dstRegion_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(hour, hour_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(manualDataKeepQuantity, manualDataKeepQuantity_);
      DARABONBA_PTR_TO_JSON(scheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(week, week_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScheduledBackupConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(dataKeepQuantity, dataKeepQuantity_);
      DARABONBA_PTR_FROM_JSON(dstRegion, dstRegion_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(hour, hour_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(manualDataKeepQuantity, manualDataKeepQuantity_);
      DARABONBA_PTR_FROM_JSON(scheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(week, week_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    UpdateScheduledBackupConfigRequest() = default ;
    UpdateScheduledBackupConfigRequest(const UpdateScheduledBackupConfigRequest &) = default ;
    UpdateScheduledBackupConfigRequest(UpdateScheduledBackupConfigRequest &&) = default ;
    UpdateScheduledBackupConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScheduledBackupConfigRequest() = default ;
    UpdateScheduledBackupConfigRequest& operator=(const UpdateScheduledBackupConfigRequest &) = default ;
    UpdateScheduledBackupConfigRequest& operator=(UpdateScheduledBackupConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->dataKeepQuantity_ == nullptr && this->dstRegion_ == nullptr && this->enabled_ == nullptr && this->hour_ == nullptr && this->instanceId_ == nullptr
        && this->manualDataKeepQuantity_ == nullptr && this->scheduleType_ == nullptr && this->week_ == nullptr && this->zoneId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateScheduledBackupConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // dataKeepQuantity Field Functions 
    bool hasDataKeepQuantity() const { return this->dataKeepQuantity_ != nullptr;};
    void deleteDataKeepQuantity() { this->dataKeepQuantity_ = nullptr;};
    inline int32_t getDataKeepQuantity() const { DARABONBA_PTR_GET_DEFAULT(dataKeepQuantity_, 0) };
    inline UpdateScheduledBackupConfigRequest& setDataKeepQuantity(int32_t dataKeepQuantity) { DARABONBA_PTR_SET_VALUE(dataKeepQuantity_, dataKeepQuantity) };


    // dstRegion Field Functions 
    bool hasDstRegion() const { return this->dstRegion_ != nullptr;};
    void deleteDstRegion() { this->dstRegion_ = nullptr;};
    inline string getDstRegion() const { DARABONBA_PTR_GET_DEFAULT(dstRegion_, "") };
    inline UpdateScheduledBackupConfigRequest& setDstRegion(string dstRegion) { DARABONBA_PTR_SET_VALUE(dstRegion_, dstRegion) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateScheduledBackupConfigRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // hour Field Functions 
    bool hasHour() const { return this->hour_ != nullptr;};
    void deleteHour() { this->hour_ = nullptr;};
    inline int32_t getHour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0) };
    inline UpdateScheduledBackupConfigRequest& setHour(int32_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateScheduledBackupConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // manualDataKeepQuantity Field Functions 
    bool hasManualDataKeepQuantity() const { return this->manualDataKeepQuantity_ != nullptr;};
    void deleteManualDataKeepQuantity() { this->manualDataKeepQuantity_ = nullptr;};
    inline int32_t getManualDataKeepQuantity() const { DARABONBA_PTR_GET_DEFAULT(manualDataKeepQuantity_, 0) };
    inline UpdateScheduledBackupConfigRequest& setManualDataKeepQuantity(int32_t manualDataKeepQuantity) { DARABONBA_PTR_SET_VALUE(manualDataKeepQuantity_, manualDataKeepQuantity) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline UpdateScheduledBackupConfigRequest& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // week Field Functions 
    bool hasWeek() const { return this->week_ != nullptr;};
    void deleteWeek() { this->week_ = nullptr;};
    inline string getWeek() const { DARABONBA_PTR_GET_DEFAULT(week_, "") };
    inline UpdateScheduledBackupConfigRequest& setWeek(string week) { DARABONBA_PTR_SET_VALUE(week_, week) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpdateScheduledBackupConfigRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<int32_t> dataKeepQuantity_ {};
    shared_ptr<string> dstRegion_ {};
    shared_ptr<bool> enabled_ {};
    shared_ptr<int32_t> hour_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> manualDataKeepQuantity_ {};
    shared_ptr<string> scheduleType_ {};
    shared_ptr<string> week_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
