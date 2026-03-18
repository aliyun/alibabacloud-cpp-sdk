// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class UpdateBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireDays, expireDays_);
      DARABONBA_PTR_TO_JSON(Hour, hour_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Minute, minute_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RecurrenceValues, recurrenceValues_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireDays, expireDays_);
      DARABONBA_PTR_FROM_JSON(Hour, hour_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Minute, minute_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RecurrenceValues, recurrenceValues_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    UpdateBackupPolicyRequest() = default ;
    UpdateBackupPolicyRequest(const UpdateBackupPolicyRequest &) = default ;
    UpdateBackupPolicyRequest(UpdateBackupPolicyRequest &&) = default ;
    UpdateBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBackupPolicyRequest() = default ;
    UpdateBackupPolicyRequest& operator=(const UpdateBackupPolicyRequest &) = default ;
    UpdateBackupPolicyRequest& operator=(UpdateBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireDays_ == nullptr
        && this->hour_ == nullptr && this->instanceId_ == nullptr && this->minute_ == nullptr && this->policyId_ == nullptr && this->recurrenceValues_ == nullptr
        && this->timeoutSeconds_ == nullptr; };
    // expireDays Field Functions 
    bool hasExpireDays() const { return this->expireDays_ != nullptr;};
    void deleteExpireDays() { this->expireDays_ = nullptr;};
    inline int32_t getExpireDays() const { DARABONBA_PTR_GET_DEFAULT(expireDays_, 0) };
    inline UpdateBackupPolicyRequest& setExpireDays(int32_t expireDays) { DARABONBA_PTR_SET_VALUE(expireDays_, expireDays) };


    // hour Field Functions 
    bool hasHour() const { return this->hour_ != nullptr;};
    void deleteHour() { this->hour_ = nullptr;};
    inline int32_t getHour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0) };
    inline UpdateBackupPolicyRequest& setHour(int32_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateBackupPolicyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // minute Field Functions 
    bool hasMinute() const { return this->minute_ != nullptr;};
    void deleteMinute() { this->minute_ = nullptr;};
    inline int32_t getMinute() const { DARABONBA_PTR_GET_DEFAULT(minute_, 0) };
    inline UpdateBackupPolicyRequest& setMinute(int32_t minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline UpdateBackupPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // recurrenceValues Field Functions 
    bool hasRecurrenceValues() const { return this->recurrenceValues_ != nullptr;};
    void deleteRecurrenceValues() { this->recurrenceValues_ = nullptr;};
    inline const vector<int32_t> & getRecurrenceValues() const { DARABONBA_PTR_GET_CONST(recurrenceValues_, vector<int32_t>) };
    inline vector<int32_t> getRecurrenceValues() { DARABONBA_PTR_GET(recurrenceValues_, vector<int32_t>) };
    inline UpdateBackupPolicyRequest& setRecurrenceValues(const vector<int32_t> & recurrenceValues) { DARABONBA_PTR_SET_VALUE(recurrenceValues_, recurrenceValues) };
    inline UpdateBackupPolicyRequest& setRecurrenceValues(vector<int32_t> && recurrenceValues) { DARABONBA_PTR_SET_RVALUE(recurrenceValues_, recurrenceValues) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline UpdateBackupPolicyRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


  protected:
    shared_ptr<int32_t> expireDays_ {};
    shared_ptr<int32_t> hour_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> minute_ {};
    shared_ptr<string> policyId_ {};
    shared_ptr<vector<int32_t>> recurrenceValues_ {};
    shared_ptr<int32_t> timeoutSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
