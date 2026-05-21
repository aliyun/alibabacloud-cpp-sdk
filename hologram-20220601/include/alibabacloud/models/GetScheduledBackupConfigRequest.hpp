// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULEDBACKUPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULEDBACKUPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class GetScheduledBackupConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduledBackupConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(scheduleType, scheduleType_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduledBackupConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(scheduleType, scheduleType_);
    };
    GetScheduledBackupConfigRequest() = default ;
    GetScheduledBackupConfigRequest(const GetScheduledBackupConfigRequest &) = default ;
    GetScheduledBackupConfigRequest(GetScheduledBackupConfigRequest &&) = default ;
    GetScheduledBackupConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduledBackupConfigRequest() = default ;
    GetScheduledBackupConfigRequest& operator=(const GetScheduledBackupConfigRequest &) = default ;
    GetScheduledBackupConfigRequest& operator=(GetScheduledBackupConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->instanceId_ == nullptr && this->scheduleType_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetScheduledBackupConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetScheduledBackupConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline GetScheduledBackupConfigRequest& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> scheduleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
