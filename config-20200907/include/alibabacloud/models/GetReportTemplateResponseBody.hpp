// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetReportTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ReportTemplate, reportTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportTemplate, reportTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetReportTemplateResponseBody() = default ;
    GetReportTemplateResponseBody(const GetReportTemplateResponseBody &) = default ;
    GetReportTemplateResponseBody(GetReportTemplateResponseBody &&) = default ;
    GetReportTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportTemplateResponseBody() = default ;
    GetReportTemplateResponseBody& operator=(const GetReportTemplateResponseBody &) = default ;
    GetReportTemplateResponseBody& operator=(GetReportTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReportTemplate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReportTemplate& obj) { 
        DARABONBA_PTR_TO_JSON(ReportFileFormats, reportFileFormats_);
        DARABONBA_PTR_TO_JSON(ReportGranularity, reportGranularity_);
        DARABONBA_PTR_TO_JSON(ReportLanguage, reportLanguage_);
        DARABONBA_PTR_TO_JSON(ReportScope, reportScope_);
        DARABONBA_PTR_TO_JSON(ReportTemplateDescription, reportTemplateDescription_);
        DARABONBA_PTR_TO_JSON(ReportTemplateId, reportTemplateId_);
        DARABONBA_PTR_TO_JSON(ReportTemplateName, reportTemplateName_);
        DARABONBA_PTR_TO_JSON(SubscriptionFrequency, subscriptionFrequency_);
      };
      friend void from_json(const Darabonba::Json& j, ReportTemplate& obj) { 
        DARABONBA_PTR_FROM_JSON(ReportFileFormats, reportFileFormats_);
        DARABONBA_PTR_FROM_JSON(ReportGranularity, reportGranularity_);
        DARABONBA_PTR_FROM_JSON(ReportLanguage, reportLanguage_);
        DARABONBA_PTR_FROM_JSON(ReportScope, reportScope_);
        DARABONBA_PTR_FROM_JSON(ReportTemplateDescription, reportTemplateDescription_);
        DARABONBA_PTR_FROM_JSON(ReportTemplateId, reportTemplateId_);
        DARABONBA_PTR_FROM_JSON(ReportTemplateName, reportTemplateName_);
        DARABONBA_PTR_FROM_JSON(SubscriptionFrequency, subscriptionFrequency_);
      };
      ReportTemplate() = default ;
      ReportTemplate(const ReportTemplate &) = default ;
      ReportTemplate(ReportTemplate &&) = default ;
      ReportTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReportTemplate() = default ;
      ReportTemplate& operator=(const ReportTemplate &) = default ;
      ReportTemplate& operator=(ReportTemplate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ReportScope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReportScope& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(MatchType, matchType_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ReportScope& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        ReportScope() = default ;
        ReportScope(const ReportScope &) = default ;
        ReportScope(ReportScope &&) = default ;
        ReportScope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReportScope() = default ;
        ReportScope& operator=(const ReportScope &) = default ;
        ReportScope& operator=(ReportScope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->matchType_ == nullptr && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ReportScope& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // matchType Field Functions 
        bool hasMatchType() const { return this->matchType_ != nullptr;};
        void deleteMatchType() { this->matchType_ = nullptr;};
        inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
        inline ReportScope& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ReportScope& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> matchType_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->reportFileFormats_ == nullptr
        && this->reportGranularity_ == nullptr && this->reportLanguage_ == nullptr && this->reportScope_ == nullptr && this->reportTemplateDescription_ == nullptr && this->reportTemplateId_ == nullptr
        && this->reportTemplateName_ == nullptr && this->subscriptionFrequency_ == nullptr; };
      // reportFileFormats Field Functions 
      bool hasReportFileFormats() const { return this->reportFileFormats_ != nullptr;};
      void deleteReportFileFormats() { this->reportFileFormats_ = nullptr;};
      inline string getReportFileFormats() const { DARABONBA_PTR_GET_DEFAULT(reportFileFormats_, "") };
      inline ReportTemplate& setReportFileFormats(string reportFileFormats) { DARABONBA_PTR_SET_VALUE(reportFileFormats_, reportFileFormats) };


      // reportGranularity Field Functions 
      bool hasReportGranularity() const { return this->reportGranularity_ != nullptr;};
      void deleteReportGranularity() { this->reportGranularity_ = nullptr;};
      inline string getReportGranularity() const { DARABONBA_PTR_GET_DEFAULT(reportGranularity_, "") };
      inline ReportTemplate& setReportGranularity(string reportGranularity) { DARABONBA_PTR_SET_VALUE(reportGranularity_, reportGranularity) };


      // reportLanguage Field Functions 
      bool hasReportLanguage() const { return this->reportLanguage_ != nullptr;};
      void deleteReportLanguage() { this->reportLanguage_ = nullptr;};
      inline string getReportLanguage() const { DARABONBA_PTR_GET_DEFAULT(reportLanguage_, "") };
      inline ReportTemplate& setReportLanguage(string reportLanguage) { DARABONBA_PTR_SET_VALUE(reportLanguage_, reportLanguage) };


      // reportScope Field Functions 
      bool hasReportScope() const { return this->reportScope_ != nullptr;};
      void deleteReportScope() { this->reportScope_ = nullptr;};
      inline const vector<ReportTemplate::ReportScope> & getReportScope() const { DARABONBA_PTR_GET_CONST(reportScope_, vector<ReportTemplate::ReportScope>) };
      inline vector<ReportTemplate::ReportScope> getReportScope() { DARABONBA_PTR_GET(reportScope_, vector<ReportTemplate::ReportScope>) };
      inline ReportTemplate& setReportScope(const vector<ReportTemplate::ReportScope> & reportScope) { DARABONBA_PTR_SET_VALUE(reportScope_, reportScope) };
      inline ReportTemplate& setReportScope(vector<ReportTemplate::ReportScope> && reportScope) { DARABONBA_PTR_SET_RVALUE(reportScope_, reportScope) };


      // reportTemplateDescription Field Functions 
      bool hasReportTemplateDescription() const { return this->reportTemplateDescription_ != nullptr;};
      void deleteReportTemplateDescription() { this->reportTemplateDescription_ = nullptr;};
      inline string getReportTemplateDescription() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateDescription_, "") };
      inline ReportTemplate& setReportTemplateDescription(string reportTemplateDescription) { DARABONBA_PTR_SET_VALUE(reportTemplateDescription_, reportTemplateDescription) };


      // reportTemplateId Field Functions 
      bool hasReportTemplateId() const { return this->reportTemplateId_ != nullptr;};
      void deleteReportTemplateId() { this->reportTemplateId_ = nullptr;};
      inline string getReportTemplateId() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateId_, "") };
      inline ReportTemplate& setReportTemplateId(string reportTemplateId) { DARABONBA_PTR_SET_VALUE(reportTemplateId_, reportTemplateId) };


      // reportTemplateName Field Functions 
      bool hasReportTemplateName() const { return this->reportTemplateName_ != nullptr;};
      void deleteReportTemplateName() { this->reportTemplateName_ = nullptr;};
      inline string getReportTemplateName() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateName_, "") };
      inline ReportTemplate& setReportTemplateName(string reportTemplateName) { DARABONBA_PTR_SET_VALUE(reportTemplateName_, reportTemplateName) };


      // subscriptionFrequency Field Functions 
      bool hasSubscriptionFrequency() const { return this->subscriptionFrequency_ != nullptr;};
      void deleteSubscriptionFrequency() { this->subscriptionFrequency_ = nullptr;};
      inline string getSubscriptionFrequency() const { DARABONBA_PTR_GET_DEFAULT(subscriptionFrequency_, "") };
      inline ReportTemplate& setSubscriptionFrequency(string subscriptionFrequency) { DARABONBA_PTR_SET_VALUE(subscriptionFrequency_, subscriptionFrequency) };


    protected:
      shared_ptr<string> reportFileFormats_ {};
      shared_ptr<string> reportGranularity_ {};
      shared_ptr<string> reportLanguage_ {};
      shared_ptr<vector<ReportTemplate::ReportScope>> reportScope_ {};
      shared_ptr<string> reportTemplateDescription_ {};
      shared_ptr<string> reportTemplateId_ {};
      shared_ptr<string> reportTemplateName_ {};
      shared_ptr<string> subscriptionFrequency_ {};
    };

    virtual bool empty() const override { return this->reportTemplate_ == nullptr
        && this->requestId_ == nullptr; };
    // reportTemplate Field Functions 
    bool hasReportTemplate() const { return this->reportTemplate_ != nullptr;};
    void deleteReportTemplate() { this->reportTemplate_ = nullptr;};
    inline const GetReportTemplateResponseBody::ReportTemplate & getReportTemplate() const { DARABONBA_PTR_GET_CONST(reportTemplate_, GetReportTemplateResponseBody::ReportTemplate) };
    inline GetReportTemplateResponseBody::ReportTemplate getReportTemplate() { DARABONBA_PTR_GET(reportTemplate_, GetReportTemplateResponseBody::ReportTemplate) };
    inline GetReportTemplateResponseBody& setReportTemplate(const GetReportTemplateResponseBody::ReportTemplate & reportTemplate) { DARABONBA_PTR_SET_VALUE(reportTemplate_, reportTemplate) };
    inline GetReportTemplateResponseBody& setReportTemplate(GetReportTemplateResponseBody::ReportTemplate && reportTemplate) { DARABONBA_PTR_SET_RVALUE(reportTemplate_, reportTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetReportTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetReportTemplateResponseBody::ReportTemplate> reportTemplate_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
