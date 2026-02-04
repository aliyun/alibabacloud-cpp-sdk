// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHINSTANCEZONEFAILOVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHINSTANCEZONEFAILOVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class SwitchInstanceZoneFailOverRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchInstanceZoneFailOverRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SiteFaultTime, siteFaultTime_);
      DARABONBA_PTR_TO_JSON(TargetZoneId, targetZoneId_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchInstanceZoneFailOverRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SiteFaultTime, siteFaultTime_);
      DARABONBA_PTR_FROM_JSON(TargetZoneId, targetZoneId_);
    };
    SwitchInstanceZoneFailOverRequest() = default ;
    SwitchInstanceZoneFailOverRequest(const SwitchInstanceZoneFailOverRequest &) = default ;
    SwitchInstanceZoneFailOverRequest(SwitchInstanceZoneFailOverRequest &&) = default ;
    SwitchInstanceZoneFailOverRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchInstanceZoneFailOverRequest() = default ;
    SwitchInstanceZoneFailOverRequest& operator=(const SwitchInstanceZoneFailOverRequest &) = default ;
    SwitchInstanceZoneFailOverRequest& operator=(SwitchInstanceZoneFailOverRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->siteFaultTime_ == nullptr && this->targetZoneId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SwitchInstanceZoneFailOverRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // siteFaultTime Field Functions 
    bool hasSiteFaultTime() const { return this->siteFaultTime_ != nullptr;};
    void deleteSiteFaultTime() { this->siteFaultTime_ = nullptr;};
    inline string getSiteFaultTime() const { DARABONBA_PTR_GET_DEFAULT(siteFaultTime_, "") };
    inline SwitchInstanceZoneFailOverRequest& setSiteFaultTime(string siteFaultTime) { DARABONBA_PTR_SET_VALUE(siteFaultTime_, siteFaultTime) };


    // targetZoneId Field Functions 
    bool hasTargetZoneId() const { return this->targetZoneId_ != nullptr;};
    void deleteTargetZoneId() { this->targetZoneId_ = nullptr;};
    inline string getTargetZoneId() const { DARABONBA_PTR_GET_DEFAULT(targetZoneId_, "") };
    inline SwitchInstanceZoneFailOverRequest& setTargetZoneId(string targetZoneId) { DARABONBA_PTR_SET_VALUE(targetZoneId_, targetZoneId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The duration for which the fault lasts. Unit: minutes.
    // 
    // Valid values:
    // 
    // *   5
    // *   10
    shared_ptr<string> siteFaultTime_ {};
    // The ID of the destination zone.
    shared_ptr<string> targetZoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
