// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHTOPRIMARYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHTOPRIMARYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class SwitchToPrimaryInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchToPrimaryInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(ForceSwitch, forceSwitch_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchToPrimaryInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(ForceSwitch, forceSwitch_);
    };
    SwitchToPrimaryInstanceRequest() = default ;
    SwitchToPrimaryInstanceRequest(const SwitchToPrimaryInstanceRequest &) = default ;
    SwitchToPrimaryInstanceRequest(SwitchToPrimaryInstanceRequest &&) = default ;
    SwitchToPrimaryInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchToPrimaryInstanceRequest() = default ;
    SwitchToPrimaryInstanceRequest& operator=(const SwitchToPrimaryInstanceRequest &) = default ;
    SwitchToPrimaryInstanceRequest& operator=(SwitchToPrimaryInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->effectiveTime_ == nullptr && this->forceSwitch_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline SwitchToPrimaryInstanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline SwitchToPrimaryInstanceRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // forceSwitch Field Functions 
    bool hasForceSwitch() const { return this->forceSwitch_ != nullptr;};
    void deleteForceSwitch() { this->forceSwitch_ = nullptr;};
    inline bool getForceSwitch() const { DARABONBA_PTR_GET_DEFAULT(forceSwitch_, false) };
    inline SwitchToPrimaryInstanceRequest& setForceSwitch(bool forceSwitch) { DARABONBA_PTR_SET_VALUE(forceSwitch_, forceSwitch) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The effective period. Valid values:
    // * **Immediate**: Executes immediately.
    // * **MaintainTime**: Executes within the maintenance window.
    // 
    // Default value: **Immediate**.
    shared_ptr<string> effectiveTime_ {};
    // The switchover mode. Valid values:
    // 
    // **true**: Forced switchover.
    // 
    // **false**: Normal switchover.
    shared_ptr<bool> forceSwitch_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
