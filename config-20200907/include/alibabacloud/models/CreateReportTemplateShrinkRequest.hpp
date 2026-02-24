// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPORTTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPORTTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CreateReportTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReportTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportFileFormats, reportFileFormats_);
      DARABONBA_PTR_TO_JSON(ReportGranularity, reportGranularity_);
      DARABONBA_PTR_TO_JSON(ReportLanguage, reportLanguage_);
      DARABONBA_PTR_TO_JSON(ReportScope, reportScopeShrink_);
      DARABONBA_PTR_TO_JSON(ReportTemplateDescription, reportTemplateDescription_);
      DARABONBA_PTR_TO_JSON(ReportTemplateName, reportTemplateName_);
      DARABONBA_PTR_TO_JSON(SubscriptionFrequency, subscriptionFrequency_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReportTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportFileFormats, reportFileFormats_);
      DARABONBA_PTR_FROM_JSON(ReportGranularity, reportGranularity_);
      DARABONBA_PTR_FROM_JSON(ReportLanguage, reportLanguage_);
      DARABONBA_PTR_FROM_JSON(ReportScope, reportScopeShrink_);
      DARABONBA_PTR_FROM_JSON(ReportTemplateDescription, reportTemplateDescription_);
      DARABONBA_PTR_FROM_JSON(ReportTemplateName, reportTemplateName_);
      DARABONBA_PTR_FROM_JSON(SubscriptionFrequency, subscriptionFrequency_);
    };
    CreateReportTemplateShrinkRequest() = default ;
    CreateReportTemplateShrinkRequest(const CreateReportTemplateShrinkRequest &) = default ;
    CreateReportTemplateShrinkRequest(CreateReportTemplateShrinkRequest &&) = default ;
    CreateReportTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReportTemplateShrinkRequest() = default ;
    CreateReportTemplateShrinkRequest& operator=(const CreateReportTemplateShrinkRequest &) = default ;
    CreateReportTemplateShrinkRequest& operator=(CreateReportTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportFileFormats_ == nullptr
        && this->reportGranularity_ == nullptr && this->reportLanguage_ == nullptr && this->reportScopeShrink_ == nullptr && this->reportTemplateDescription_ == nullptr && this->reportTemplateName_ == nullptr
        && this->subscriptionFrequency_ == nullptr; };
    // reportFileFormats Field Functions 
    bool hasReportFileFormats() const { return this->reportFileFormats_ != nullptr;};
    void deleteReportFileFormats() { this->reportFileFormats_ = nullptr;};
    inline string getReportFileFormats() const { DARABONBA_PTR_GET_DEFAULT(reportFileFormats_, "") };
    inline CreateReportTemplateShrinkRequest& setReportFileFormats(string reportFileFormats) { DARABONBA_PTR_SET_VALUE(reportFileFormats_, reportFileFormats) };


    // reportGranularity Field Functions 
    bool hasReportGranularity() const { return this->reportGranularity_ != nullptr;};
    void deleteReportGranularity() { this->reportGranularity_ = nullptr;};
    inline string getReportGranularity() const { DARABONBA_PTR_GET_DEFAULT(reportGranularity_, "") };
    inline CreateReportTemplateShrinkRequest& setReportGranularity(string reportGranularity) { DARABONBA_PTR_SET_VALUE(reportGranularity_, reportGranularity) };


    // reportLanguage Field Functions 
    bool hasReportLanguage() const { return this->reportLanguage_ != nullptr;};
    void deleteReportLanguage() { this->reportLanguage_ = nullptr;};
    inline string getReportLanguage() const { DARABONBA_PTR_GET_DEFAULT(reportLanguage_, "") };
    inline CreateReportTemplateShrinkRequest& setReportLanguage(string reportLanguage) { DARABONBA_PTR_SET_VALUE(reportLanguage_, reportLanguage) };


    // reportScopeShrink Field Functions 
    bool hasReportScopeShrink() const { return this->reportScopeShrink_ != nullptr;};
    void deleteReportScopeShrink() { this->reportScopeShrink_ = nullptr;};
    inline string getReportScopeShrink() const { DARABONBA_PTR_GET_DEFAULT(reportScopeShrink_, "") };
    inline CreateReportTemplateShrinkRequest& setReportScopeShrink(string reportScopeShrink) { DARABONBA_PTR_SET_VALUE(reportScopeShrink_, reportScopeShrink) };


    // reportTemplateDescription Field Functions 
    bool hasReportTemplateDescription() const { return this->reportTemplateDescription_ != nullptr;};
    void deleteReportTemplateDescription() { this->reportTemplateDescription_ = nullptr;};
    inline string getReportTemplateDescription() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateDescription_, "") };
    inline CreateReportTemplateShrinkRequest& setReportTemplateDescription(string reportTemplateDescription) { DARABONBA_PTR_SET_VALUE(reportTemplateDescription_, reportTemplateDescription) };


    // reportTemplateName Field Functions 
    bool hasReportTemplateName() const { return this->reportTemplateName_ != nullptr;};
    void deleteReportTemplateName() { this->reportTemplateName_ = nullptr;};
    inline string getReportTemplateName() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateName_, "") };
    inline CreateReportTemplateShrinkRequest& setReportTemplateName(string reportTemplateName) { DARABONBA_PTR_SET_VALUE(reportTemplateName_, reportTemplateName) };


    // subscriptionFrequency Field Functions 
    bool hasSubscriptionFrequency() const { return this->subscriptionFrequency_ != nullptr;};
    void deleteSubscriptionFrequency() { this->subscriptionFrequency_ = nullptr;};
    inline string getSubscriptionFrequency() const { DARABONBA_PTR_GET_DEFAULT(subscriptionFrequency_, "") };
    inline CreateReportTemplateShrinkRequest& setSubscriptionFrequency(string subscriptionFrequency) { DARABONBA_PTR_SET_VALUE(subscriptionFrequency_, subscriptionFrequency) };


  protected:
    // Report format. Currently, only Excel is supported.
    shared_ptr<string> reportFileFormats_ {};
    // Report aggregation granularity.
    // 
    // Supported for management accounts:
    // 
    // - AllInOne (All accounts within the template scope are aggregated into one report)
    // 
    // - GroupByAggregator (Reports are aggregated by account group, generating a compressed file)
    // 
    // - GroupByAccount (Each account generates a separate report (default), generating a compressed file)
    // 
    // Member accounts only support GroupByAccount.
    shared_ptr<string> reportGranularity_ {};
    // Report language. Supports zh-CN and en-US. If empty, the default is en-US.
    shared_ptr<string> reportLanguage_ {};
    // An array of report scopes, used to select the range of rules included in the audit report. The logic between each ReportScope in the array is OR, which means additive logic.
    // 
    // > For example, if the array size is 2, the first ReportScope specifies rule In cr-1, and the second ReportScope specifies rule In cr-2, then the rule scope defined by this report is cr-1 and cr-2.
    shared_ptr<string> reportScopeShrink_ {};
    // Report template description
    shared_ptr<string> reportTemplateDescription_ {};
    // Report template name
    // 
    // This parameter is required.
    shared_ptr<string> reportTemplateName_ {};
    // Report subscription frequency. If this field is not empty, it is a Quartz-format Cron expression that triggers subscription notifications.
    // 
    // Format: second minute hour day month week. The following are common Cron expression examples:
    // 
    // - Execute at 0:00 every day: 0 0 0 \\* \\* ?
    // 
    // - Execute at 15:30 every Monday: 0 30 15 ? \\* MON
    // 
    // - Execute at 2:00 on the 1st of every month: 0 0 2 1 \\* ?
    // 
    // Where:
    // 
    // - "\\*" indicates any value
    // 
    // - "?" is used for day and week fields, indicating no specific value
    // 
    // - "MON" indicates Monday
    // 
    // > The trigger time is UTC+8. Adjust the Cron expression settings based on your time zone.
    // 
    // > We try to trigger notifications according to the Cron expression time, but there might be delays due to report generation status. A Cron expression limits the same template to trigger notifications at most once per day.
    // 
    // > 1 represents Sunday; 2 represents Monday; 3 represents Tuesday; 4 represents Wednesday; 5 represents Thursday; 6 represents Friday; 7 represents Saturday
    shared_ptr<string> subscriptionFrequency_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
