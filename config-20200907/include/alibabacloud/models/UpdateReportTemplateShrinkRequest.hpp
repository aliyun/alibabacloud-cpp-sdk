// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREPORTTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREPORTTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class UpdateReportTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateReportTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportFileFormats, reportFileFormats_);
      DARABONBA_PTR_TO_JSON(ReportGranularity, reportGranularity_);
      DARABONBA_PTR_TO_JSON(ReportLanguage, reportLanguage_);
      DARABONBA_PTR_TO_JSON(ReportScope, reportScopeShrink_);
      DARABONBA_PTR_TO_JSON(ReportTemplateDescription, reportTemplateDescription_);
      DARABONBA_PTR_TO_JSON(ReportTemplateId, reportTemplateId_);
      DARABONBA_PTR_TO_JSON(ReportTemplateName, reportTemplateName_);
      DARABONBA_PTR_TO_JSON(SubscriptionFrequency, subscriptionFrequency_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateReportTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportFileFormats, reportFileFormats_);
      DARABONBA_PTR_FROM_JSON(ReportGranularity, reportGranularity_);
      DARABONBA_PTR_FROM_JSON(ReportLanguage, reportLanguage_);
      DARABONBA_PTR_FROM_JSON(ReportScope, reportScopeShrink_);
      DARABONBA_PTR_FROM_JSON(ReportTemplateDescription, reportTemplateDescription_);
      DARABONBA_PTR_FROM_JSON(ReportTemplateId, reportTemplateId_);
      DARABONBA_PTR_FROM_JSON(ReportTemplateName, reportTemplateName_);
      DARABONBA_PTR_FROM_JSON(SubscriptionFrequency, subscriptionFrequency_);
    };
    UpdateReportTemplateShrinkRequest() = default ;
    UpdateReportTemplateShrinkRequest(const UpdateReportTemplateShrinkRequest &) = default ;
    UpdateReportTemplateShrinkRequest(UpdateReportTemplateShrinkRequest &&) = default ;
    UpdateReportTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateReportTemplateShrinkRequest() = default ;
    UpdateReportTemplateShrinkRequest& operator=(const UpdateReportTemplateShrinkRequest &) = default ;
    UpdateReportTemplateShrinkRequest& operator=(UpdateReportTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportFileFormats_ == nullptr
        && this->reportGranularity_ == nullptr && this->reportLanguage_ == nullptr && this->reportScopeShrink_ == nullptr && this->reportTemplateDescription_ == nullptr && this->reportTemplateId_ == nullptr
        && this->reportTemplateName_ == nullptr && this->subscriptionFrequency_ == nullptr; };
    // reportFileFormats Field Functions 
    bool hasReportFileFormats() const { return this->reportFileFormats_ != nullptr;};
    void deleteReportFileFormats() { this->reportFileFormats_ = nullptr;};
    inline string getReportFileFormats() const { DARABONBA_PTR_GET_DEFAULT(reportFileFormats_, "") };
    inline UpdateReportTemplateShrinkRequest& setReportFileFormats(string reportFileFormats) { DARABONBA_PTR_SET_VALUE(reportFileFormats_, reportFileFormats) };


    // reportGranularity Field Functions 
    bool hasReportGranularity() const { return this->reportGranularity_ != nullptr;};
    void deleteReportGranularity() { this->reportGranularity_ = nullptr;};
    inline string getReportGranularity() const { DARABONBA_PTR_GET_DEFAULT(reportGranularity_, "") };
    inline UpdateReportTemplateShrinkRequest& setReportGranularity(string reportGranularity) { DARABONBA_PTR_SET_VALUE(reportGranularity_, reportGranularity) };


    // reportLanguage Field Functions 
    bool hasReportLanguage() const { return this->reportLanguage_ != nullptr;};
    void deleteReportLanguage() { this->reportLanguage_ = nullptr;};
    inline string getReportLanguage() const { DARABONBA_PTR_GET_DEFAULT(reportLanguage_, "") };
    inline UpdateReportTemplateShrinkRequest& setReportLanguage(string reportLanguage) { DARABONBA_PTR_SET_VALUE(reportLanguage_, reportLanguage) };


    // reportScopeShrink Field Functions 
    bool hasReportScopeShrink() const { return this->reportScopeShrink_ != nullptr;};
    void deleteReportScopeShrink() { this->reportScopeShrink_ = nullptr;};
    inline string getReportScopeShrink() const { DARABONBA_PTR_GET_DEFAULT(reportScopeShrink_, "") };
    inline UpdateReportTemplateShrinkRequest& setReportScopeShrink(string reportScopeShrink) { DARABONBA_PTR_SET_VALUE(reportScopeShrink_, reportScopeShrink) };


    // reportTemplateDescription Field Functions 
    bool hasReportTemplateDescription() const { return this->reportTemplateDescription_ != nullptr;};
    void deleteReportTemplateDescription() { this->reportTemplateDescription_ = nullptr;};
    inline string getReportTemplateDescription() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateDescription_, "") };
    inline UpdateReportTemplateShrinkRequest& setReportTemplateDescription(string reportTemplateDescription) { DARABONBA_PTR_SET_VALUE(reportTemplateDescription_, reportTemplateDescription) };


    // reportTemplateId Field Functions 
    bool hasReportTemplateId() const { return this->reportTemplateId_ != nullptr;};
    void deleteReportTemplateId() { this->reportTemplateId_ = nullptr;};
    inline string getReportTemplateId() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateId_, "") };
    inline UpdateReportTemplateShrinkRequest& setReportTemplateId(string reportTemplateId) { DARABONBA_PTR_SET_VALUE(reportTemplateId_, reportTemplateId) };


    // reportTemplateName Field Functions 
    bool hasReportTemplateName() const { return this->reportTemplateName_ != nullptr;};
    void deleteReportTemplateName() { this->reportTemplateName_ = nullptr;};
    inline string getReportTemplateName() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateName_, "") };
    inline UpdateReportTemplateShrinkRequest& setReportTemplateName(string reportTemplateName) { DARABONBA_PTR_SET_VALUE(reportTemplateName_, reportTemplateName) };


    // subscriptionFrequency Field Functions 
    bool hasSubscriptionFrequency() const { return this->subscriptionFrequency_ != nullptr;};
    void deleteSubscriptionFrequency() { this->subscriptionFrequency_ = nullptr;};
    inline string getSubscriptionFrequency() const { DARABONBA_PTR_GET_DEFAULT(subscriptionFrequency_, "") };
    inline UpdateReportTemplateShrinkRequest& setSubscriptionFrequency(string subscriptionFrequency) { DARABONBA_PTR_SET_VALUE(subscriptionFrequency_, subscriptionFrequency) };


  protected:
    // The format of the report.
    shared_ptr<string> reportFileFormats_ {};
    // The aggregation granularity of the report.
    // 
    // For a management account, the following values are supported:
    // 
    // - AllInOne: A single report is generated for all accounts within the template scope.
    // 
    // - GroupByAggregator: Reports are aggregated by account group. A compressed file is generated.
    // 
    // - GroupByAccount: A separate report is generated for each account. This is the default value. A compressed file is generated.
    // 
    // For a member account, only GroupByAccount is supported.
    shared_ptr<string> reportGranularity_ {};
    // The language of the report. Valid values: zh-CN and en-US. If you leave this parameter empty, the default value en-US is used.
    shared_ptr<string> reportLanguage_ {};
    // An array that specifies the report scope. It is used to select the range of rules to include in the audit report. The logical relationship between multiple ReportScope objects in the array is OR. This means the scopes are added together.
    // 
    // > For example, if the array contains two ReportScope objects, where the first specifies the rule In cr-1 and the second specifies the rule In cr-2, the report scope includes both cr-1 and cr-2.
    shared_ptr<string> reportScopeShrink_ {};
    // The description of the report template.
    shared_ptr<string> reportTemplateDescription_ {};
    // The ID of the report template.
    // 
    // This parameter is required.
    shared_ptr<string> reportTemplateId_ {};
    // The name of the report template.
    shared_ptr<string> reportTemplateName_ {};
    // The frequency for subscribing to the report. If this parameter is not empty, it specifies a cron expression in the Quartz format that triggers a subscription notification.
    // 
    // The format is: Second Minute Hour Day Month Week. The following list provides common examples of cron expressions:
    // 
    // - To run at 00:00 every day: 0 0 0 \\* \\* ?
    // 
    // - To run at 15:30 every Monday: 0 30 15 ? \\* MON
    // 
    // - To run at 02:00 on the first day of every month: 0 0 2 1 \\* ?
    // 
    // Where:
    // 
    // - "\\*" indicates any value.
    // 
    // - ? is used in the Day and Week fields and indicates that no specific value is specified.
    // 
    // - MON indicates Monday.
    // 
    // > The trigger time is in UTC+8. You can convert the cron expression based on your time zone.
    // 
    // > The system attempts to trigger the notification at the time specified by the cron expression. However, a delay may occur due to the report generation status. The cron expression limits the notification for the same template to a maximum of once per day.
    // 
    // > In addition to using MON for Monday, you can also use numbers. In the Quartz framework, 1 represents Sunday, 2 represents Monday, 3 represents Tuesday, 4 represents Wednesday, 5 represents Thursday, 6 represents Friday, and 7 represents Saturday.
    shared_ptr<string> subscriptionFrequency_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
