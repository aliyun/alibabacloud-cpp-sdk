// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWARMSERVERINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWARMSERVERINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RenewARMServerInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewARMServerInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
    };
    friend void from_json(const Darabonba::Json& j, RenewARMServerInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
    };
    RenewARMServerInstanceRequest() = default ;
    RenewARMServerInstanceRequest(const RenewARMServerInstanceRequest &) = default ;
    RenewARMServerInstanceRequest(RenewARMServerInstanceRequest &&) = default ;
    RenewARMServerInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewARMServerInstanceRequest() = default ;
    RenewARMServerInstanceRequest& operator=(const RenewARMServerInstanceRequest &) = default ;
    RenewARMServerInstanceRequest& operator=(RenewARMServerInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->instanceId_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline RenewARMServerInstanceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RenewARMServerInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RenewARMServerInstanceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RenewARMServerInstanceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


  protected:
    // Specifies whether to enable auto-renewal for the premium bandwidth plan. Valid values:
    // 
    // *   **true**.
    // *   **false** (default).
    shared_ptr<bool> autoRenew_ {};
    // The ID of the instance that you want to renew.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The renewal period. By default, instances are renewed on a monthly basis. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, and 12.
    // 
    // This parameter is required.
    shared_ptr<int32_t> period_ {};
    // The unit of the renewal period. Valid values:
    // 
    // *   Month (default)
    // *   Year
    // 
    // This parameter is required.
    shared_ptr<string> periodUnit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
