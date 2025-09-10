// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAAPPLICATIONAPPROVALRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAAPPLICATIONAPPROVALRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetQuotaApplicationApprovalResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaApplicationApprovalResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalHours, approvalHours_);
      DARABONBA_PTR_TO_JSON(ReminderIntervalHours, reminderIntervalHours_);
      DARABONBA_PTR_TO_JSON(SupportReminder, supportReminder_);
      DARABONBA_PTR_TO_JSON(UnsupportReminderReason, unsupportReminderReason_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaApplicationApprovalResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalHours, approvalHours_);
      DARABONBA_PTR_FROM_JSON(ReminderIntervalHours, reminderIntervalHours_);
      DARABONBA_PTR_FROM_JSON(SupportReminder, supportReminder_);
      DARABONBA_PTR_FROM_JSON(UnsupportReminderReason, unsupportReminderReason_);
    };
    GetQuotaApplicationApprovalResponseBodyModule() = default ;
    GetQuotaApplicationApprovalResponseBodyModule(const GetQuotaApplicationApprovalResponseBodyModule &) = default ;
    GetQuotaApplicationApprovalResponseBodyModule(GetQuotaApplicationApprovalResponseBodyModule &&) = default ;
    GetQuotaApplicationApprovalResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaApplicationApprovalResponseBodyModule() = default ;
    GetQuotaApplicationApprovalResponseBodyModule& operator=(const GetQuotaApplicationApprovalResponseBodyModule &) = default ;
    GetQuotaApplicationApprovalResponseBodyModule& operator=(GetQuotaApplicationApprovalResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approvalHours_ != nullptr
        && this->reminderIntervalHours_ != nullptr && this->supportReminder_ != nullptr && this->unsupportReminderReason_ != nullptr; };
    // approvalHours Field Functions 
    bool hasApprovalHours() const { return this->approvalHours_ != nullptr;};
    void deleteApprovalHours() { this->approvalHours_ = nullptr;};
    inline int32_t approvalHours() const { DARABONBA_PTR_GET_DEFAULT(approvalHours_, 0) };
    inline GetQuotaApplicationApprovalResponseBodyModule& setApprovalHours(int32_t approvalHours) { DARABONBA_PTR_SET_VALUE(approvalHours_, approvalHours) };


    // reminderIntervalHours Field Functions 
    bool hasReminderIntervalHours() const { return this->reminderIntervalHours_ != nullptr;};
    void deleteReminderIntervalHours() { this->reminderIntervalHours_ = nullptr;};
    inline int32_t reminderIntervalHours() const { DARABONBA_PTR_GET_DEFAULT(reminderIntervalHours_, 0) };
    inline GetQuotaApplicationApprovalResponseBodyModule& setReminderIntervalHours(int32_t reminderIntervalHours) { DARABONBA_PTR_SET_VALUE(reminderIntervalHours_, reminderIntervalHours) };


    // supportReminder Field Functions 
    bool hasSupportReminder() const { return this->supportReminder_ != nullptr;};
    void deleteSupportReminder() { this->supportReminder_ = nullptr;};
    inline bool supportReminder() const { DARABONBA_PTR_GET_DEFAULT(supportReminder_, false) };
    inline GetQuotaApplicationApprovalResponseBodyModule& setSupportReminder(bool supportReminder) { DARABONBA_PTR_SET_VALUE(supportReminder_, supportReminder) };


    // unsupportReminderReason Field Functions 
    bool hasUnsupportReminderReason() const { return this->unsupportReminderReason_ != nullptr;};
    void deleteUnsupportReminderReason() { this->unsupportReminderReason_ = nullptr;};
    inline string unsupportReminderReason() const { DARABONBA_PTR_GET_DEFAULT(unsupportReminderReason_, "") };
    inline GetQuotaApplicationApprovalResponseBodyModule& setUnsupportReminderReason(string unsupportReminderReason) { DARABONBA_PTR_SET_VALUE(unsupportReminderReason_, unsupportReminderReason) };


  protected:
    // The average amount of time required to approve quota applications. Unit: hour.
    std::shared_ptr<int32_t> approvalHours_ = nullptr;
    // The interval between two consecutive approval reminders. Unit: hour.
    std::shared_ptr<int32_t> reminderIntervalHours_ = nullptr;
    // Indicates whether approval reminders are supported for quota applications. Valid values:
    // 
    // *   false
    // *   true
    std::shared_ptr<bool> supportReminder_ = nullptr;
    // The reason why approval reminders are not supported for quota applications.
    std::shared_ptr<string> unsupportReminderReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
