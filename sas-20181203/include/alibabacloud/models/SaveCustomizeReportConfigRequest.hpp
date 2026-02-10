// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECUSTOMIZEREPORTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECUSTOMIZEREPORTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SaveCustomizeReportConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveCustomizeReportConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(MemberAccountSyncFlag, memberAccountSyncFlag_);
      DARABONBA_PTR_TO_JSON(PinnedTime, pinnedTime_);
      DARABONBA_PTR_TO_JSON(Recipients, recipients_);
      DARABONBA_PTR_TO_JSON(ReportDays, reportDays_);
      DARABONBA_PTR_TO_JSON(ReportEndDate, reportEndDate_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ReportLang, reportLang_);
      DARABONBA_PTR_TO_JSON(ReportSendType, reportSendType_);
      DARABONBA_PTR_TO_JSON(ReportStartDate, reportStartDate_);
      DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
      DARABONBA_PTR_TO_JSON(ReportVersion, reportVersion_);
      DARABONBA_PTR_TO_JSON(SendEndTime, sendEndTime_);
      DARABONBA_PTR_TO_JSON(SendPeriodDays, sendPeriodDays_);
      DARABONBA_PTR_TO_JSON(SendPeriodType, sendPeriodType_);
      DARABONBA_PTR_TO_JSON(SendStartTime, sendStartTime_);
      DARABONBA_PTR_TO_JSON(TargetGroups, targetGroups_);
      DARABONBA_PTR_TO_JSON(TargetUids, targetUids_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, SaveCustomizeReportConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(MemberAccountSyncFlag, memberAccountSyncFlag_);
      DARABONBA_PTR_FROM_JSON(PinnedTime, pinnedTime_);
      DARABONBA_PTR_FROM_JSON(Recipients, recipients_);
      DARABONBA_PTR_FROM_JSON(ReportDays, reportDays_);
      DARABONBA_PTR_FROM_JSON(ReportEndDate, reportEndDate_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ReportLang, reportLang_);
      DARABONBA_PTR_FROM_JSON(ReportSendType, reportSendType_);
      DARABONBA_PTR_FROM_JSON(ReportStartDate, reportStartDate_);
      DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
      DARABONBA_PTR_FROM_JSON(ReportVersion, reportVersion_);
      DARABONBA_PTR_FROM_JSON(SendEndTime, sendEndTime_);
      DARABONBA_PTR_FROM_JSON(SendPeriodDays, sendPeriodDays_);
      DARABONBA_PTR_FROM_JSON(SendPeriodType, sendPeriodType_);
      DARABONBA_PTR_FROM_JSON(SendStartTime, sendStartTime_);
      DARABONBA_PTR_FROM_JSON(TargetGroups, targetGroups_);
      DARABONBA_PTR_FROM_JSON(TargetUids, targetUids_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    SaveCustomizeReportConfigRequest() = default ;
    SaveCustomizeReportConfigRequest(const SaveCustomizeReportConfigRequest &) = default ;
    SaveCustomizeReportConfigRequest(SaveCustomizeReportConfigRequest &&) = default ;
    SaveCustomizeReportConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveCustomizeReportConfigRequest() = default ;
    SaveCustomizeReportConfigRequest& operator=(const SaveCustomizeReportConfigRequest &) = default ;
    SaveCustomizeReportConfigRequest& operator=(SaveCustomizeReportConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupType_ == nullptr
        && this->memberAccountSyncFlag_ == nullptr && this->pinnedTime_ == nullptr && this->recipients_ == nullptr && this->reportDays_ == nullptr && this->reportEndDate_ == nullptr
        && this->reportId_ == nullptr && this->reportLang_ == nullptr && this->reportSendType_ == nullptr && this->reportStartDate_ == nullptr && this->reportStatus_ == nullptr
        && this->reportType_ == nullptr && this->reportVersion_ == nullptr && this->sendEndTime_ == nullptr && this->sendPeriodDays_ == nullptr && this->sendPeriodType_ == nullptr
        && this->sendStartTime_ == nullptr && this->targetGroups_ == nullptr && this->targetUids_ == nullptr && this->title_ == nullptr; };
    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline SaveCustomizeReportConfigRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // memberAccountSyncFlag Field Functions 
    bool hasMemberAccountSyncFlag() const { return this->memberAccountSyncFlag_ != nullptr;};
    void deleteMemberAccountSyncFlag() { this->memberAccountSyncFlag_ = nullptr;};
    inline bool getMemberAccountSyncFlag() const { DARABONBA_PTR_GET_DEFAULT(memberAccountSyncFlag_, false) };
    inline SaveCustomizeReportConfigRequest& setMemberAccountSyncFlag(bool memberAccountSyncFlag) { DARABONBA_PTR_SET_VALUE(memberAccountSyncFlag_, memberAccountSyncFlag) };


    // pinnedTime Field Functions 
    bool hasPinnedTime() const { return this->pinnedTime_ != nullptr;};
    void deletePinnedTime() { this->pinnedTime_ = nullptr;};
    inline int64_t getPinnedTime() const { DARABONBA_PTR_GET_DEFAULT(pinnedTime_, 0L) };
    inline SaveCustomizeReportConfigRequest& setPinnedTime(int64_t pinnedTime) { DARABONBA_PTR_SET_VALUE(pinnedTime_, pinnedTime) };


    // recipients Field Functions 
    bool hasRecipients() const { return this->recipients_ != nullptr;};
    void deleteRecipients() { this->recipients_ = nullptr;};
    inline string getRecipients() const { DARABONBA_PTR_GET_DEFAULT(recipients_, "") };
    inline SaveCustomizeReportConfigRequest& setRecipients(string recipients) { DARABONBA_PTR_SET_VALUE(recipients_, recipients) };


    // reportDays Field Functions 
    bool hasReportDays() const { return this->reportDays_ != nullptr;};
    void deleteReportDays() { this->reportDays_ = nullptr;};
    inline int32_t getReportDays() const { DARABONBA_PTR_GET_DEFAULT(reportDays_, 0) };
    inline SaveCustomizeReportConfigRequest& setReportDays(int32_t reportDays) { DARABONBA_PTR_SET_VALUE(reportDays_, reportDays) };


    // reportEndDate Field Functions 
    bool hasReportEndDate() const { return this->reportEndDate_ != nullptr;};
    void deleteReportEndDate() { this->reportEndDate_ = nullptr;};
    inline string getReportEndDate() const { DARABONBA_PTR_GET_DEFAULT(reportEndDate_, "") };
    inline SaveCustomizeReportConfigRequest& setReportEndDate(string reportEndDate) { DARABONBA_PTR_SET_VALUE(reportEndDate_, reportEndDate) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline SaveCustomizeReportConfigRequest& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // reportLang Field Functions 
    bool hasReportLang() const { return this->reportLang_ != nullptr;};
    void deleteReportLang() { this->reportLang_ = nullptr;};
    inline string getReportLang() const { DARABONBA_PTR_GET_DEFAULT(reportLang_, "") };
    inline SaveCustomizeReportConfigRequest& setReportLang(string reportLang) { DARABONBA_PTR_SET_VALUE(reportLang_, reportLang) };


    // reportSendType Field Functions 
    bool hasReportSendType() const { return this->reportSendType_ != nullptr;};
    void deleteReportSendType() { this->reportSendType_ = nullptr;};
    inline int32_t getReportSendType() const { DARABONBA_PTR_GET_DEFAULT(reportSendType_, 0) };
    inline SaveCustomizeReportConfigRequest& setReportSendType(int32_t reportSendType) { DARABONBA_PTR_SET_VALUE(reportSendType_, reportSendType) };


    // reportStartDate Field Functions 
    bool hasReportStartDate() const { return this->reportStartDate_ != nullptr;};
    void deleteReportStartDate() { this->reportStartDate_ = nullptr;};
    inline string getReportStartDate() const { DARABONBA_PTR_GET_DEFAULT(reportStartDate_, "") };
    inline SaveCustomizeReportConfigRequest& setReportStartDate(string reportStartDate) { DARABONBA_PTR_SET_VALUE(reportStartDate_, reportStartDate) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline int32_t getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, 0) };
    inline SaveCustomizeReportConfigRequest& setReportStatus(int32_t reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline int32_t getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, 0) };
    inline SaveCustomizeReportConfigRequest& setReportType(int32_t reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // reportVersion Field Functions 
    bool hasReportVersion() const { return this->reportVersion_ != nullptr;};
    void deleteReportVersion() { this->reportVersion_ = nullptr;};
    inline string getReportVersion() const { DARABONBA_PTR_GET_DEFAULT(reportVersion_, "") };
    inline SaveCustomizeReportConfigRequest& setReportVersion(string reportVersion) { DARABONBA_PTR_SET_VALUE(reportVersion_, reportVersion) };


    // sendEndTime Field Functions 
    bool hasSendEndTime() const { return this->sendEndTime_ != nullptr;};
    void deleteSendEndTime() { this->sendEndTime_ = nullptr;};
    inline string getSendEndTime() const { DARABONBA_PTR_GET_DEFAULT(sendEndTime_, "") };
    inline SaveCustomizeReportConfigRequest& setSendEndTime(string sendEndTime) { DARABONBA_PTR_SET_VALUE(sendEndTime_, sendEndTime) };


    // sendPeriodDays Field Functions 
    bool hasSendPeriodDays() const { return this->sendPeriodDays_ != nullptr;};
    void deleteSendPeriodDays() { this->sendPeriodDays_ = nullptr;};
    inline int32_t getSendPeriodDays() const { DARABONBA_PTR_GET_DEFAULT(sendPeriodDays_, 0) };
    inline SaveCustomizeReportConfigRequest& setSendPeriodDays(int32_t sendPeriodDays) { DARABONBA_PTR_SET_VALUE(sendPeriodDays_, sendPeriodDays) };


    // sendPeriodType Field Functions 
    bool hasSendPeriodType() const { return this->sendPeriodType_ != nullptr;};
    void deleteSendPeriodType() { this->sendPeriodType_ = nullptr;};
    inline string getSendPeriodType() const { DARABONBA_PTR_GET_DEFAULT(sendPeriodType_, "") };
    inline SaveCustomizeReportConfigRequest& setSendPeriodType(string sendPeriodType) { DARABONBA_PTR_SET_VALUE(sendPeriodType_, sendPeriodType) };


    // sendStartTime Field Functions 
    bool hasSendStartTime() const { return this->sendStartTime_ != nullptr;};
    void deleteSendStartTime() { this->sendStartTime_ = nullptr;};
    inline string getSendStartTime() const { DARABONBA_PTR_GET_DEFAULT(sendStartTime_, "") };
    inline SaveCustomizeReportConfigRequest& setSendStartTime(string sendStartTime) { DARABONBA_PTR_SET_VALUE(sendStartTime_, sendStartTime) };


    // targetGroups Field Functions 
    bool hasTargetGroups() const { return this->targetGroups_ != nullptr;};
    void deleteTargetGroups() { this->targetGroups_ = nullptr;};
    inline string getTargetGroups() const { DARABONBA_PTR_GET_DEFAULT(targetGroups_, "") };
    inline SaveCustomizeReportConfigRequest& setTargetGroups(string targetGroups) { DARABONBA_PTR_SET_VALUE(targetGroups_, targetGroups) };


    // targetUids Field Functions 
    bool hasTargetUids() const { return this->targetUids_ != nullptr;};
    void deleteTargetUids() { this->targetUids_ = nullptr;};
    inline string getTargetUids() const { DARABONBA_PTR_GET_DEFAULT(targetUids_, "") };
    inline SaveCustomizeReportConfigRequest& setTargetUids(string targetUids) { DARABONBA_PTR_SET_VALUE(targetUids_, targetUids) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SaveCustomizeReportConfigRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The grouping type. Valid values:
    // 
    // *   **ALIYUN_RG**
    // *   **SAS_GROUP**
    // 
    // >  This parameter is supported only in version 2.0.0.
    shared_ptr<string> groupType_ {};
    // Whether the new account is connected by default. Values: 
    // - **true**: Yes. 
    // - **false**: No. 
    // > Only supported in version 2.0.0.
    shared_ptr<bool> memberAccountSyncFlag_ {};
    // The time when the report is pinned. Unit: milliseconds.
    // 
    // >  This parameter is supported only in version 2.0.0.
    shared_ptr<int64_t> pinnedTime_ {};
    // The email address of the recipient. Separate multiple email addresses with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> recipients_ {};
    // The most recent days for report statistics.
    // 
    // >  This parameter is supported only in version 2.0.0.
    shared_ptr<int32_t> reportDays_ {};
    // The end date on which the report is sent. The value is in the yyyy-MM-dd format.
    // 
    // >  This parameter is required if the ReportType parameter is set to 3.
    shared_ptr<string> reportEndDate_ {};
    // The ID of the report.
    // 
    // >  You can call the [DescribeCustomizeReportList](~~DescribeCustomizeReportList~~) operation to query the ID.
    shared_ptr<int64_t> reportId_ {};
    // The language of the report. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> reportLang_ {};
    // The time range in which the report is sent. Valid values:
    // 
    // *   **1**: 00:00 to 06:00.
    // *   **2**: 06:00 to 12:00.
    // *   **3**: 12:00 to 18:00.
    // *   **4**: 18:00 to 24:00.
    shared_ptr<int32_t> reportSendType_ {};
    // The start date on which the report is sent. The value is in the yyyy-MM-dd format.
    // 
    // >  This parameter is required if the ReportType parameter is set to 3.
    shared_ptr<string> reportStartDate_ {};
    // The status of the report. Valid values:
    // 
    // *   **0**: disabled.
    // *   **1**: enabled.
    // 
    // This parameter is required.
    shared_ptr<int32_t> reportStatus_ {};
    // The type of the report. Valid values:
    // 
    // *   **0**: daily report.
    // *   **1**: weekly report.
    // *   **2**: monthly report.
    // *   **3**: report whose statistics are collected within a custom time range.
    // *   **4**: report of the most recent time range.
    // 
    // This parameter is required.
    shared_ptr<int32_t> reportType_ {};
    // The version of the report. Valid values:
    // 
    // *   **1.0.0**
    // *   **2.0.0**
    shared_ptr<string> reportVersion_ {};
    // The end time at which the report is sent. The value is in the HH:mm:ss format.
    // 
    // >  This parameter is required if the ReportType parameter is set to 0, 1, 2, or 4.
    shared_ptr<string> sendEndTime_ {};
    // The exact day within the sending period.
    // 
    // >  This parameter is supported only in version 2.0.0.
    shared_ptr<int32_t> sendPeriodDays_ {};
    // The interval at which the report is sent. Valid values:
    // 
    // *   **DAY**
    // *   **WEEK**
    // *   **MONTH**
    // 
    // >  This parameter is supported only in version 2.0.0.
    shared_ptr<string> sendPeriodType_ {};
    // The start time at which the report is sent. The value is in the HH:mm:ss format.
    // 
    // >  This parameter is required if the ReportType parameter is set to 0, 1, 2, or 4.
    shared_ptr<string> sendStartTime_ {};
    // The groups.
    // 
    // >  This parameter is supported only in version 2.0.0.
    shared_ptr<string> targetGroups_ {};
    // The ID of the Alibaba Cloud account. Separate multiple IDs with commas (,).
    // 
    // >  This parameter is supported only in version 2.0.0.
    shared_ptr<string> targetUids_ {};
    // The title of the report.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
