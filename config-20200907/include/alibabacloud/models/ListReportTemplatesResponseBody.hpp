// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPORTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPORTTEMPLATESRESPONSEBODY_HPP_
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
  class ListReportTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReportTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ReportTemplateList, reportTemplateList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListReportTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ReportTemplateList, reportTemplateList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListReportTemplatesResponseBody() = default ;
    ListReportTemplatesResponseBody(const ListReportTemplatesResponseBody &) = default ;
    ListReportTemplatesResponseBody(ListReportTemplatesResponseBody &&) = default ;
    ListReportTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReportTemplatesResponseBody() = default ;
    ListReportTemplatesResponseBody& operator=(const ListReportTemplatesResponseBody &) = default ;
    ListReportTemplatesResponseBody& operator=(ListReportTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReportTemplateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReportTemplateList& obj) { 
        DARABONBA_PTR_TO_JSON(ReportFileFormats, reportFileFormats_);
        DARABONBA_PTR_TO_JSON(ReportGranularity, reportGranularity_);
        DARABONBA_PTR_TO_JSON(ReportLanguage, reportLanguage_);
        DARABONBA_PTR_TO_JSON(ReportScope, reportScope_);
        DARABONBA_PTR_TO_JSON(ReportTemplateDescription, reportTemplateDescription_);
        DARABONBA_PTR_TO_JSON(ReportTemplateId, reportTemplateId_);
        DARABONBA_PTR_TO_JSON(ReportTemplateName, reportTemplateName_);
        DARABONBA_PTR_TO_JSON(SubscriptionFrequency, subscriptionFrequency_);
      };
      friend void from_json(const Darabonba::Json& j, ReportTemplateList& obj) { 
        DARABONBA_PTR_FROM_JSON(ReportFileFormats, reportFileFormats_);
        DARABONBA_PTR_FROM_JSON(ReportGranularity, reportGranularity_);
        DARABONBA_PTR_FROM_JSON(ReportLanguage, reportLanguage_);
        DARABONBA_PTR_FROM_JSON(ReportScope, reportScope_);
        DARABONBA_PTR_FROM_JSON(ReportTemplateDescription, reportTemplateDescription_);
        DARABONBA_PTR_FROM_JSON(ReportTemplateId, reportTemplateId_);
        DARABONBA_PTR_FROM_JSON(ReportTemplateName, reportTemplateName_);
        DARABONBA_PTR_FROM_JSON(SubscriptionFrequency, subscriptionFrequency_);
      };
      ReportTemplateList() = default ;
      ReportTemplateList(const ReportTemplateList &) = default ;
      ReportTemplateList(ReportTemplateList &&) = default ;
      ReportTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReportTemplateList() = default ;
      ReportTemplateList& operator=(const ReportTemplateList &) = default ;
      ReportTemplateList& operator=(ReportTemplateList &&) = default ;
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
      inline ReportTemplateList& setReportFileFormats(string reportFileFormats) { DARABONBA_PTR_SET_VALUE(reportFileFormats_, reportFileFormats) };


      // reportGranularity Field Functions 
      bool hasReportGranularity() const { return this->reportGranularity_ != nullptr;};
      void deleteReportGranularity() { this->reportGranularity_ = nullptr;};
      inline string getReportGranularity() const { DARABONBA_PTR_GET_DEFAULT(reportGranularity_, "") };
      inline ReportTemplateList& setReportGranularity(string reportGranularity) { DARABONBA_PTR_SET_VALUE(reportGranularity_, reportGranularity) };


      // reportLanguage Field Functions 
      bool hasReportLanguage() const { return this->reportLanguage_ != nullptr;};
      void deleteReportLanguage() { this->reportLanguage_ = nullptr;};
      inline string getReportLanguage() const { DARABONBA_PTR_GET_DEFAULT(reportLanguage_, "") };
      inline ReportTemplateList& setReportLanguage(string reportLanguage) { DARABONBA_PTR_SET_VALUE(reportLanguage_, reportLanguage) };


      // reportScope Field Functions 
      bool hasReportScope() const { return this->reportScope_ != nullptr;};
      void deleteReportScope() { this->reportScope_ = nullptr;};
      inline const vector<ReportTemplateList::ReportScope> & getReportScope() const { DARABONBA_PTR_GET_CONST(reportScope_, vector<ReportTemplateList::ReportScope>) };
      inline vector<ReportTemplateList::ReportScope> getReportScope() { DARABONBA_PTR_GET(reportScope_, vector<ReportTemplateList::ReportScope>) };
      inline ReportTemplateList& setReportScope(const vector<ReportTemplateList::ReportScope> & reportScope) { DARABONBA_PTR_SET_VALUE(reportScope_, reportScope) };
      inline ReportTemplateList& setReportScope(vector<ReportTemplateList::ReportScope> && reportScope) { DARABONBA_PTR_SET_RVALUE(reportScope_, reportScope) };


      // reportTemplateDescription Field Functions 
      bool hasReportTemplateDescription() const { return this->reportTemplateDescription_ != nullptr;};
      void deleteReportTemplateDescription() { this->reportTemplateDescription_ = nullptr;};
      inline string getReportTemplateDescription() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateDescription_, "") };
      inline ReportTemplateList& setReportTemplateDescription(string reportTemplateDescription) { DARABONBA_PTR_SET_VALUE(reportTemplateDescription_, reportTemplateDescription) };


      // reportTemplateId Field Functions 
      bool hasReportTemplateId() const { return this->reportTemplateId_ != nullptr;};
      void deleteReportTemplateId() { this->reportTemplateId_ = nullptr;};
      inline string getReportTemplateId() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateId_, "") };
      inline ReportTemplateList& setReportTemplateId(string reportTemplateId) { DARABONBA_PTR_SET_VALUE(reportTemplateId_, reportTemplateId) };


      // reportTemplateName Field Functions 
      bool hasReportTemplateName() const { return this->reportTemplateName_ != nullptr;};
      void deleteReportTemplateName() { this->reportTemplateName_ = nullptr;};
      inline string getReportTemplateName() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateName_, "") };
      inline ReportTemplateList& setReportTemplateName(string reportTemplateName) { DARABONBA_PTR_SET_VALUE(reportTemplateName_, reportTemplateName) };


      // subscriptionFrequency Field Functions 
      bool hasSubscriptionFrequency() const { return this->subscriptionFrequency_ != nullptr;};
      void deleteSubscriptionFrequency() { this->subscriptionFrequency_ = nullptr;};
      inline string getSubscriptionFrequency() const { DARABONBA_PTR_GET_DEFAULT(subscriptionFrequency_, "") };
      inline ReportTemplateList& setSubscriptionFrequency(string subscriptionFrequency) { DARABONBA_PTR_SET_VALUE(subscriptionFrequency_, subscriptionFrequency) };


    protected:
      shared_ptr<string> reportFileFormats_ {};
      shared_ptr<string> reportGranularity_ {};
      shared_ptr<string> reportLanguage_ {};
      shared_ptr<vector<ReportTemplateList::ReportScope>> reportScope_ {};
      shared_ptr<string> reportTemplateDescription_ {};
      shared_ptr<string> reportTemplateId_ {};
      shared_ptr<string> reportTemplateName_ {};
      shared_ptr<string> subscriptionFrequency_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->reportTemplateList_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListReportTemplatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListReportTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // reportTemplateList Field Functions 
    bool hasReportTemplateList() const { return this->reportTemplateList_ != nullptr;};
    void deleteReportTemplateList() { this->reportTemplateList_ = nullptr;};
    inline const vector<ListReportTemplatesResponseBody::ReportTemplateList> & getReportTemplateList() const { DARABONBA_PTR_GET_CONST(reportTemplateList_, vector<ListReportTemplatesResponseBody::ReportTemplateList>) };
    inline vector<ListReportTemplatesResponseBody::ReportTemplateList> getReportTemplateList() { DARABONBA_PTR_GET(reportTemplateList_, vector<ListReportTemplatesResponseBody::ReportTemplateList>) };
    inline ListReportTemplatesResponseBody& setReportTemplateList(const vector<ListReportTemplatesResponseBody::ReportTemplateList> & reportTemplateList) { DARABONBA_PTR_SET_VALUE(reportTemplateList_, reportTemplateList) };
    inline ListReportTemplatesResponseBody& setReportTemplateList(vector<ListReportTemplatesResponseBody::ReportTemplateList> && reportTemplateList) { DARABONBA_PTR_SET_RVALUE(reportTemplateList_, reportTemplateList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListReportTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListReportTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListReportTemplatesResponseBody::ReportTemplateList>> reportTemplateList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
