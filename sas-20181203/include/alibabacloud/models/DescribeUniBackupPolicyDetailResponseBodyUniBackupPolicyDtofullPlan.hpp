// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICYDETAILRESPONSEBODYUNIBACKUPPOLICYDTOFULLPLAN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICYDETAILRESPONSEBODYUNIBACKUPPOLICYDTOFULLPLAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan& obj) { 
      DARABONBA_PTR_TO_JSON(Days, days_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(PlanType, planType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan& obj) { 
      DARABONBA_PTR_FROM_JSON(Days, days_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(PlanType, planType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan() = default ;
    DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan(const DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan &) = default ;
    DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan(DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan &&) = default ;
    DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan() = default ;
    DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan& operator=(const DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan &) = default ;
    DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan& operator=(DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->days_ != nullptr
        && this->interval_ != nullptr && this->planType_ != nullptr && this->startTime_ != nullptr; };
    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline const vector<string> & days() const { DARABONBA_PTR_GET_CONST(days_, vector<string>) };
    inline vector<string> days() { DARABONBA_PTR_GET(days_, vector<string>) };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan& setDays(const vector<string> & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan& setDays(vector<string> && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // planType Field Functions 
    bool hasPlanType() const { return this->planType_ != nullptr;};
    void deletePlanType() { this->planType_ = nullptr;};
    inline string planType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // An array that consists of the days of a week on which the backup is performed.
    std::shared_ptr<vector<string>> days_ = nullptr;
    // The interval of backup tasks.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The unit of the interval. Valid values:
    // 
    // *   **hourly**: hour
    // *   **daily**: day
    // *   **weekly**: week
    std::shared_ptr<string> planType_ = nullptr;
    // The time when the full backup started. The time is in the HH:mm:ss format.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
