// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHDBINSTANCEHAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHDBINSTANCEHAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class SwitchDBInstanceHARequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchDBInstanceHARequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(SwitchTimeMode, switchTimeMode_);
      DARABONBA_PTR_TO_JSON(TargetPrimaryAzoneId, targetPrimaryAzoneId_);
      DARABONBA_PTR_TO_JSON(TargetPrimaryRegionId, targetPrimaryRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchDBInstanceHARequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(SwitchTimeMode, switchTimeMode_);
      DARABONBA_PTR_FROM_JSON(TargetPrimaryAzoneId, targetPrimaryAzoneId_);
      DARABONBA_PTR_FROM_JSON(TargetPrimaryRegionId, targetPrimaryRegionId_);
    };
    SwitchDBInstanceHARequest() = default ;
    SwitchDBInstanceHARequest(const SwitchDBInstanceHARequest &) = default ;
    SwitchDBInstanceHARequest(SwitchDBInstanceHARequest &&) = default ;
    SwitchDBInstanceHARequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchDBInstanceHARequest() = default ;
    SwitchDBInstanceHARequest& operator=(const SwitchDBInstanceHARequest &) = default ;
    SwitchDBInstanceHARequest& operator=(SwitchDBInstanceHARequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->regionId_ == nullptr && this->switchTime_ == nullptr && this->switchTimeMode_ == nullptr && this->targetPrimaryAzoneId_ == nullptr && this->targetPrimaryRegionId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline SwitchDBInstanceHARequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SwitchDBInstanceHARequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline SwitchDBInstanceHARequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // switchTimeMode Field Functions 
    bool hasSwitchTimeMode() const { return this->switchTimeMode_ != nullptr;};
    void deleteSwitchTimeMode() { this->switchTimeMode_ = nullptr;};
    inline string getSwitchTimeMode() const { DARABONBA_PTR_GET_DEFAULT(switchTimeMode_, "") };
    inline SwitchDBInstanceHARequest& setSwitchTimeMode(string switchTimeMode) { DARABONBA_PTR_SET_VALUE(switchTimeMode_, switchTimeMode) };


    // targetPrimaryAzoneId Field Functions 
    bool hasTargetPrimaryAzoneId() const { return this->targetPrimaryAzoneId_ != nullptr;};
    void deleteTargetPrimaryAzoneId() { this->targetPrimaryAzoneId_ = nullptr;};
    inline string getTargetPrimaryAzoneId() const { DARABONBA_PTR_GET_DEFAULT(targetPrimaryAzoneId_, "") };
    inline SwitchDBInstanceHARequest& setTargetPrimaryAzoneId(string targetPrimaryAzoneId) { DARABONBA_PTR_SET_VALUE(targetPrimaryAzoneId_, targetPrimaryAzoneId) };


    // targetPrimaryRegionId Field Functions 
    bool hasTargetPrimaryRegionId() const { return this->targetPrimaryRegionId_ != nullptr;};
    void deleteTargetPrimaryRegionId() { this->targetPrimaryRegionId_ = nullptr;};
    inline string getTargetPrimaryRegionId() const { DARABONBA_PTR_GET_DEFAULT(targetPrimaryRegionId_, "") };
    inline SwitchDBInstanceHARequest& setTargetPrimaryRegionId(string targetPrimaryRegionId) { DARABONBA_PTR_SET_VALUE(targetPrimaryRegionId_, targetPrimaryRegionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> switchTime_ {};
    shared_ptr<string> switchTimeMode_ {};
    shared_ptr<string> targetPrimaryAzoneId_ {};
    shared_ptr<string> targetPrimaryRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
