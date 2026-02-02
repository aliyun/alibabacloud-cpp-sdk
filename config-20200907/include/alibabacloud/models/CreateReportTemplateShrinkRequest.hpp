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
    shared_ptr<string> reportFileFormats_ {};
    shared_ptr<string> reportGranularity_ {};
    shared_ptr<string> reportLanguage_ {};
    shared_ptr<string> reportScopeShrink_ {};
    shared_ptr<string> reportTemplateDescription_ {};
    // This parameter is required.
    shared_ptr<string> reportTemplateName_ {};
    shared_ptr<string> subscriptionFrequency_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
