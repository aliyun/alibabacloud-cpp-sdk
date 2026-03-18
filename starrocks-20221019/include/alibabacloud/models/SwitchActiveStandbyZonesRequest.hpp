// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHACTIVESTANDBYZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHACTIVESTANDBYZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class SwitchActiveStandbyZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchActiveStandbyZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TargetZoneId, targetZoneId_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchActiveStandbyZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TargetZoneId, targetZoneId_);
    };
    SwitchActiveStandbyZonesRequest() = default ;
    SwitchActiveStandbyZonesRequest(const SwitchActiveStandbyZonesRequest &) = default ;
    SwitchActiveStandbyZonesRequest(SwitchActiveStandbyZonesRequest &&) = default ;
    SwitchActiveStandbyZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchActiveStandbyZonesRequest() = default ;
    SwitchActiveStandbyZonesRequest& operator=(const SwitchActiveStandbyZonesRequest &) = default ;
    SwitchActiveStandbyZonesRequest& operator=(SwitchActiveStandbyZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->targetZoneId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SwitchActiveStandbyZonesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // targetZoneId Field Functions 
    bool hasTargetZoneId() const { return this->targetZoneId_ != nullptr;};
    void deleteTargetZoneId() { this->targetZoneId_ = nullptr;};
    inline string getTargetZoneId() const { DARABONBA_PTR_GET_DEFAULT(targetZoneId_, "") };
    inline SwitchActiveStandbyZonesRequest& setTargetZoneId(string targetZoneId) { DARABONBA_PTR_SET_VALUE(targetZoneId_, targetZoneId) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> targetZoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
