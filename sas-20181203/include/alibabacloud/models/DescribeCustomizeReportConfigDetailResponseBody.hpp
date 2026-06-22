// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEREPORTCONFIGDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEREPORTCONFIGDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomizeReportConfigDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizeReportConfigDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChartIds, chartIds_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SendEndTime, sendEndTime_);
      DARABONBA_PTR_TO_JSON(SendPeriodDays, sendPeriodDays_);
      DARABONBA_PTR_TO_JSON(SendPeriodType, sendPeriodType_);
      DARABONBA_PTR_TO_JSON(SendStartTime, sendStartTime_);
      DARABONBA_PTR_TO_JSON(SendTime, sendTime_);
      DARABONBA_PTR_TO_JSON(TargetGroups, targetGroups_);
      DARABONBA_PTR_TO_JSON(TargetUids, targetUids_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizeReportConfigDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChartIds, chartIds_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SendEndTime, sendEndTime_);
      DARABONBA_PTR_FROM_JSON(SendPeriodDays, sendPeriodDays_);
      DARABONBA_PTR_FROM_JSON(SendPeriodType, sendPeriodType_);
      DARABONBA_PTR_FROM_JSON(SendStartTime, sendStartTime_);
      DARABONBA_PTR_FROM_JSON(SendTime, sendTime_);
      DARABONBA_PTR_FROM_JSON(TargetGroups, targetGroups_);
      DARABONBA_PTR_FROM_JSON(TargetUids, targetUids_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribeCustomizeReportConfigDetailResponseBody() = default ;
    DescribeCustomizeReportConfigDetailResponseBody(const DescribeCustomizeReportConfigDetailResponseBody &) = default ;
    DescribeCustomizeReportConfigDetailResponseBody(DescribeCustomizeReportConfigDetailResponseBody &&) = default ;
    DescribeCustomizeReportConfigDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizeReportConfigDetailResponseBody() = default ;
    DescribeCustomizeReportConfigDetailResponseBody& operator=(const DescribeCustomizeReportConfigDetailResponseBody &) = default ;
    DescribeCustomizeReportConfigDetailResponseBody& operator=(DescribeCustomizeReportConfigDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chartIds_ == nullptr
        && this->groupType_ == nullptr && this->isDefault_ == nullptr && this->memberAccountSyncFlag_ == nullptr && this->pinnedTime_ == nullptr && this->recipients_ == nullptr
        && this->reportDays_ == nullptr && this->reportEndDate_ == nullptr && this->reportId_ == nullptr && this->reportLang_ == nullptr && this->reportSendType_ == nullptr
        && this->reportStartDate_ == nullptr && this->reportStatus_ == nullptr && this->reportType_ == nullptr && this->requestId_ == nullptr && this->sendEndTime_ == nullptr
        && this->sendPeriodDays_ == nullptr && this->sendPeriodType_ == nullptr && this->sendStartTime_ == nullptr && this->sendTime_ == nullptr && this->targetGroups_ == nullptr
        && this->targetUids_ == nullptr && this->title_ == nullptr; };
    // chartIds Field Functions 
    bool hasChartIds() const { return this->chartIds_ != nullptr;};
    void deleteChartIds() { this->chartIds_ = nullptr;};
    inline string getChartIds() const { DARABONBA_PTR_GET_DEFAULT(chartIds_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setChartIds(string chartIds) { DARABONBA_PTR_SET_VALUE(chartIds_, chartIds) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline int32_t getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, 0) };
    inline DescribeCustomizeReportConfigDetailResponseBody& setIsDefault(int32_t isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // memberAccountSyncFlag Field Functions 
    bool hasMemberAccountSyncFlag() const { return this->memberAccountSyncFlag_ != nullptr;};
    void deleteMemberAccountSyncFlag() { this->memberAccountSyncFlag_ = nullptr;};
    inline bool getMemberAccountSyncFlag() const { DARABONBA_PTR_GET_DEFAULT(memberAccountSyncFlag_, false) };
    inline DescribeCustomizeReportConfigDetailResponseBody& setMemberAccountSyncFlag(bool memberAccountSyncFlag) { DARABONBA_PTR_SET_VALUE(memberAccountSyncFlag_, memberAccountSyncFlag) };


    // pinnedTime Field Functions 
    bool hasPinnedTime() const { return this->pinnedTime_ != nullptr;};
    void deletePinnedTime() { this->pinnedTime_ = nullptr;};
    inline int64_t getPinnedTime() const { DARABONBA_PTR_GET_DEFAULT(pinnedTime_, 0L) };
    inline DescribeCustomizeReportConfigDetailResponseBody& setPinnedTime(int64_t pinnedTime) { DARABONBA_PTR_SET_VALUE(pinnedTime_, pinnedTime) };


    // recipients Field Functions 
    bool hasRecipients() const { return this->recipients_ != nullptr;};
    void deleteRecipients() { this->recipients_ = nullptr;};
    inline string getRecipients() const { DARABONBA_PTR_GET_DEFAULT(recipients_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setRecipients(string recipients) { DARABONBA_PTR_SET_VALUE(recipients_, recipients) };


    // reportDays Field Functions 
    bool hasReportDays() const { return this->reportDays_ != nullptr;};
    void deleteReportDays() { this->reportDays_ = nullptr;};
    inline int32_t getReportDays() const { DARABONBA_PTR_GET_DEFAULT(reportDays_, 0) };
    inline DescribeCustomizeReportConfigDetailResponseBody& setReportDays(int32_t reportDays) { DARABONBA_PTR_SET_VALUE(reportDays_, reportDays) };


    // reportEndDate Field Functions 
    bool hasReportEndDate() const { return this->reportEndDate_ != nullptr;};
    void deleteReportEndDate() { this->reportEndDate_ = nullptr;};
    inline string getReportEndDate() const { DARABONBA_PTR_GET_DEFAULT(reportEndDate_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setReportEndDate(string reportEndDate) { DARABONBA_PTR_SET_VALUE(reportEndDate_, reportEndDate) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline DescribeCustomizeReportConfigDetailResponseBody& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // reportLang Field Functions 
    bool hasReportLang() const { return this->reportLang_ != nullptr;};
    void deleteReportLang() { this->reportLang_ = nullptr;};
    inline string getReportLang() const { DARABONBA_PTR_GET_DEFAULT(reportLang_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setReportLang(string reportLang) { DARABONBA_PTR_SET_VALUE(reportLang_, reportLang) };


    // reportSendType Field Functions 
    bool hasReportSendType() const { return this->reportSendType_ != nullptr;};
    void deleteReportSendType() { this->reportSendType_ = nullptr;};
    inline string getReportSendType() const { DARABONBA_PTR_GET_DEFAULT(reportSendType_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setReportSendType(string reportSendType) { DARABONBA_PTR_SET_VALUE(reportSendType_, reportSendType) };


    // reportStartDate Field Functions 
    bool hasReportStartDate() const { return this->reportStartDate_ != nullptr;};
    void deleteReportStartDate() { this->reportStartDate_ = nullptr;};
    inline string getReportStartDate() const { DARABONBA_PTR_GET_DEFAULT(reportStartDate_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setReportStartDate(string reportStartDate) { DARABONBA_PTR_SET_VALUE(reportStartDate_, reportStartDate) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline string getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sendEndTime Field Functions 
    bool hasSendEndTime() const { return this->sendEndTime_ != nullptr;};
    void deleteSendEndTime() { this->sendEndTime_ = nullptr;};
    inline string getSendEndTime() const { DARABONBA_PTR_GET_DEFAULT(sendEndTime_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setSendEndTime(string sendEndTime) { DARABONBA_PTR_SET_VALUE(sendEndTime_, sendEndTime) };


    // sendPeriodDays Field Functions 
    bool hasSendPeriodDays() const { return this->sendPeriodDays_ != nullptr;};
    void deleteSendPeriodDays() { this->sendPeriodDays_ = nullptr;};
    inline int32_t getSendPeriodDays() const { DARABONBA_PTR_GET_DEFAULT(sendPeriodDays_, 0) };
    inline DescribeCustomizeReportConfigDetailResponseBody& setSendPeriodDays(int32_t sendPeriodDays) { DARABONBA_PTR_SET_VALUE(sendPeriodDays_, sendPeriodDays) };


    // sendPeriodType Field Functions 
    bool hasSendPeriodType() const { return this->sendPeriodType_ != nullptr;};
    void deleteSendPeriodType() { this->sendPeriodType_ = nullptr;};
    inline string getSendPeriodType() const { DARABONBA_PTR_GET_DEFAULT(sendPeriodType_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setSendPeriodType(string sendPeriodType) { DARABONBA_PTR_SET_VALUE(sendPeriodType_, sendPeriodType) };


    // sendStartTime Field Functions 
    bool hasSendStartTime() const { return this->sendStartTime_ != nullptr;};
    void deleteSendStartTime() { this->sendStartTime_ = nullptr;};
    inline string getSendStartTime() const { DARABONBA_PTR_GET_DEFAULT(sendStartTime_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setSendStartTime(string sendStartTime) { DARABONBA_PTR_SET_VALUE(sendStartTime_, sendStartTime) };


    // sendTime Field Functions 
    bool hasSendTime() const { return this->sendTime_ != nullptr;};
    void deleteSendTime() { this->sendTime_ = nullptr;};
    inline string getSendTime() const { DARABONBA_PTR_GET_DEFAULT(sendTime_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setSendTime(string sendTime) { DARABONBA_PTR_SET_VALUE(sendTime_, sendTime) };


    // targetGroups Field Functions 
    bool hasTargetGroups() const { return this->targetGroups_ != nullptr;};
    void deleteTargetGroups() { this->targetGroups_ = nullptr;};
    inline string getTargetGroups() const { DARABONBA_PTR_GET_DEFAULT(targetGroups_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setTargetGroups(string targetGroups) { DARABONBA_PTR_SET_VALUE(targetGroups_, targetGroups) };


    // targetUids Field Functions 
    bool hasTargetUids() const { return this->targetUids_ != nullptr;};
    void deleteTargetUids() { this->targetUids_ = nullptr;};
    inline string getTargetUids() const { DARABONBA_PTR_GET_DEFAULT(targetUids_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setTargetUids(string targetUids) { DARABONBA_PTR_SET_VALUE(targetUids_, targetUids) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeCustomizeReportConfigDetailResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The report chart configuration IDs, separated by commas.
    shared_ptr<string> chartIds_ {};
    // The group type. Valid values:
    // - **ALIYUN_RG**: ALIYUN_RG.
    // - **SAS_GROUP**: SAS_GROUP.
    shared_ptr<string> groupType_ {};
    // Indicates whether the report is a default report. Valid values:
    // - **0**: Not a default report.
    // - **1**: A default report.
    shared_ptr<int32_t> isDefault_ {};
    // Specifies whether newly added accounts are included by default. Valid values:
    // 
    // - **true**: Included.
    // - **false**: Not included.
    // > Only version 2.0.0 supports this parameter.
    shared_ptr<bool> memberAccountSyncFlag_ {};
    // The pinned time.
    shared_ptr<int64_t> pinnedTime_ {};
    // The recipient email addresses, separated by commas.
    shared_ptr<string> recipients_ {};
    // The number of recent days covered by the report statistics.
    shared_ptr<int32_t> reportDays_ {};
    // The end date for report delivery.
    shared_ptr<string> reportEndDate_ {};
    // The report ID.
    shared_ptr<int64_t> reportId_ {};
    // The language type. Default value: **zh**. Valid values:
    // - **zh**: Chinese.
    // - **en**: English.
    shared_ptr<string> reportLang_ {};
    // The report delivery time range. Valid values:
    // - **1**: 0:00 to 6:00.
    // - **2**: 6:00 to 12:00.
    // - **3**: 12:00 to 18:00.
    // - **4**: 18:00 to 24:00.
    shared_ptr<string> reportSendType_ {};
    // The start date for report delivery.
    shared_ptr<string> reportStartDate_ {};
    // The report status. Valid values:
    //  - **0**: Disabled.
    //  - **1**: Enabled.
    shared_ptr<string> reportStatus_ {};
    // The report type. Valid values:
    // 
    // - **0**: Daily report.
    // - **1**: Weekly report.
    // - **2**: Monthly report.
    // - **3**: Custom period.
    shared_ptr<string> reportType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The delivery end time, in the format of HH:mm:ss.
    shared_ptr<string> sendEndTime_ {};
    // The specific execution dates within the delivery period.
    shared_ptr<int32_t> sendPeriodDays_ {};
    // The delivery period type. Valid values:
    // - **DAY**: day.
    // - **WEEK**: week.
    // - **MONTH**: month.
    shared_ptr<string> sendPeriodType_ {};
    // The delivery start time, in the format of HH:mm:ss.
    shared_ptr<string> sendStartTime_ {};
    // The delivery time, in the format of HH:mm:ss.
    shared_ptr<string> sendTime_ {};
    // The targets within the group.
    shared_ptr<string> targetGroups_ {};
    // The list of target UIDs, separated by commas.
    shared_ptr<string> targetUids_ {};
    // The title.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
