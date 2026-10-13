// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOSNAPSHOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOSNAPSHOTPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyAutoSnapshotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyName, autoSnapshotPolicyName_);
      DARABONBA_PTR_TO_JSON(RepeatWeekdays, repeatWeekdays_);
      DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(TimePoints, timePoints_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyName, autoSnapshotPolicyName_);
      DARABONBA_PTR_FROM_JSON(RepeatWeekdays, repeatWeekdays_);
      DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(TimePoints, timePoints_);
    };
    ModifyAutoSnapshotPolicyRequest() = default ;
    ModifyAutoSnapshotPolicyRequest(const ModifyAutoSnapshotPolicyRequest &) = default ;
    ModifyAutoSnapshotPolicyRequest(ModifyAutoSnapshotPolicyRequest &&) = default ;
    ModifyAutoSnapshotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoSnapshotPolicyRequest() = default ;
    ModifyAutoSnapshotPolicyRequest& operator=(const ModifyAutoSnapshotPolicyRequest &) = default ;
    ModifyAutoSnapshotPolicyRequest& operator=(ModifyAutoSnapshotPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSnapshotPolicyId_ == nullptr
        && this->autoSnapshotPolicyName_ == nullptr && this->repeatWeekdays_ == nullptr && this->retentionDays_ == nullptr && this->timePoints_ == nullptr; };
    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string getAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline ModifyAutoSnapshotPolicyRequest& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // autoSnapshotPolicyName Field Functions 
    bool hasAutoSnapshotPolicyName() const { return this->autoSnapshotPolicyName_ != nullptr;};
    void deleteAutoSnapshotPolicyName() { this->autoSnapshotPolicyName_ = nullptr;};
    inline string getAutoSnapshotPolicyName() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyName_, "") };
    inline ModifyAutoSnapshotPolicyRequest& setAutoSnapshotPolicyName(string autoSnapshotPolicyName) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyName_, autoSnapshotPolicyName) };


    // repeatWeekdays Field Functions 
    bool hasRepeatWeekdays() const { return this->repeatWeekdays_ != nullptr;};
    void deleteRepeatWeekdays() { this->repeatWeekdays_ = nullptr;};
    inline string getRepeatWeekdays() const { DARABONBA_PTR_GET_DEFAULT(repeatWeekdays_, "") };
    inline ModifyAutoSnapshotPolicyRequest& setRepeatWeekdays(string repeatWeekdays) { DARABONBA_PTR_SET_VALUE(repeatWeekdays_, repeatWeekdays) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline ModifyAutoSnapshotPolicyRequest& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // timePoints Field Functions 
    bool hasTimePoints() const { return this->timePoints_ != nullptr;};
    void deleteTimePoints() { this->timePoints_ = nullptr;};
    inline string getTimePoints() const { DARABONBA_PTR_GET_DEFAULT(timePoints_, "") };
    inline ModifyAutoSnapshotPolicyRequest& setTimePoints(string timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };


  protected:
    // The ID of the automatic snapshot policy.
    // 
    // You can call DescribeAutoSnapshotPolicies to query available automatic snapshot policies.
    // 
    // This parameter is required.
    shared_ptr<string> autoSnapshotPolicyId_ {};
    // The name of the automatic snapshot policy. If this parameter is left empty, the policy name is not modified.
    // 
    // Limits:
    // 
    // - The name must be 2 to 128 characters in length.
    // - The name must start with a letter.
    // - The name can contain digits, colons (:), underscores (_), and hyphens (-). The name cannot start with `http://` or `https://`.
    shared_ptr<string> autoSnapshotPolicyName_ {};
    // The days of the week on which automatic snapshots are created.
    // 
    // Cycle: week.
    // 
    // Valid values: 1 to 7. For example, 1 indicates Monday. To create multiple automatic snapshots within a week, specify multiple days and separate them with commas (,). You can specify up to 7 days.
    shared_ptr<string> repeatWeekdays_ {};
    // The retention period of automatic snapshots.
    // 
    // Unit: days.
    // 
    // Valid values:
    // - -1 (default): Automatic snapshots are permanently retained.
    // - 1 to 65536: Automatic snapshots are retained for the specified number of days.
    shared_ptr<int32_t> retentionDays_ {};
    // The points in time at which automatic snapshots are created.
    // 
    // Unit: hours.
    // 
    // Valid values: 0 to 23, which correspond to the 24 points in time from 00:00 to 23:00. For example, 1 indicates 01:00. To create multiple automatic snapshots within a day, specify multiple points in time and separate them with commas (,). You can specify up to 24 points in time.
    shared_ptr<string> timePoints_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
