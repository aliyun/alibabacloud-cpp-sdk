// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDoctorReportsResponseBody() = default ;
    ListDoctorReportsResponseBody(const ListDoctorReportsResponseBody &) = default ;
    ListDoctorReportsResponseBody(ListDoctorReportsResponseBody &&) = default ;
    ListDoctorReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorReportsResponseBody() = default ;
    ListDoctorReportsResponseBody& operator=(const ListDoctorReportsResponseBody &) = default ;
    ListDoctorReportsResponseBody& operator=(ListDoctorReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentTypes, componentTypes_);
        DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
        DARABONBA_PTR_TO_JSON(SummaryReport, summaryReport_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentTypes, componentTypes_);
        DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
        DARABONBA_PTR_FROM_JSON(SummaryReport, summaryReport_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SummaryReport : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SummaryReport& obj) { 
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
        };
        friend void from_json(const Darabonba::Json& j, SummaryReport& obj) { 
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
        };
        SummaryReport() = default ;
        SummaryReport(const SummaryReport &) = default ;
        SummaryReport(SummaryReport &&) = default ;
        SummaryReport(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SummaryReport() = default ;
        SummaryReport& operator=(const SummaryReport &) = default ;
        SummaryReport& operator=(SummaryReport &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->score_ == nullptr
        && this->suggestion_ == nullptr && this->summary_ == nullptr; };
        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
        inline SummaryReport& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline SummaryReport& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline SummaryReport& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      protected:
        // The score.
        shared_ptr<int32_t> score_ {};
        // The optimization suggestion.
        shared_ptr<string> suggestion_ {};
        // The summary of the report.
        shared_ptr<string> summary_ {};
      };

      virtual bool empty() const override { return this->componentTypes_ == nullptr
        && this->dateTime_ == nullptr && this->summaryReport_ == nullptr; };
      // componentTypes Field Functions 
      bool hasComponentTypes() const { return this->componentTypes_ != nullptr;};
      void deleteComponentTypes() { this->componentTypes_ = nullptr;};
      inline const vector<string> & getComponentTypes() const { DARABONBA_PTR_GET_CONST(componentTypes_, vector<string>) };
      inline vector<string> getComponentTypes() { DARABONBA_PTR_GET(componentTypes_, vector<string>) };
      inline Data& setComponentTypes(const vector<string> & componentTypes) { DARABONBA_PTR_SET_VALUE(componentTypes_, componentTypes) };
      inline Data& setComponentTypes(vector<string> && componentTypes) { DARABONBA_PTR_SET_RVALUE(componentTypes_, componentTypes) };


      // dateTime Field Functions 
      bool hasDateTime() const { return this->dateTime_ != nullptr;};
      void deleteDateTime() { this->dateTime_ = nullptr;};
      inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
      inline Data& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


      // summaryReport Field Functions 
      bool hasSummaryReport() const { return this->summaryReport_ != nullptr;};
      void deleteSummaryReport() { this->summaryReport_ = nullptr;};
      inline const Data::SummaryReport & getSummaryReport() const { DARABONBA_PTR_GET_CONST(summaryReport_, Data::SummaryReport) };
      inline Data::SummaryReport getSummaryReport() { DARABONBA_PTR_GET(summaryReport_, Data::SummaryReport) };
      inline Data& setSummaryReport(const Data::SummaryReport & summaryReport) { DARABONBA_PTR_SET_VALUE(summaryReport_, summaryReport) };
      inline Data& setSummaryReport(Data::SummaryReport && summaryReport) { DARABONBA_PTR_SET_RVALUE(summaryReport_, summaryReport) };


    protected:
      // The component types.
      // 
      // Valid values:
      // 
      // - compute
      // 
      //   <!-- -->
      // 
      //   <!-- -->
      // 
      //   <!-- -->
      // 
      // - hive
      // 
      //   <!-- -->
      // 
      //   <!-- -->
      // 
      //   <!-- -->
      // 
      // - hdfs
      // 
      //   <!-- -->
      // 
      //   <!-- -->
      // 
      //   <!-- -->
      // 
      // - yarn
      // 
      //   <!-- -->
      // 
      //   <!-- -->
      // 
      //   <!-- -->
      // 
      // - oss
      // 
      //   <!-- -->
      // 
      //   <!-- -->
      // 
      //   <!-- -->
      // 
      // - hbase
      // 
      //   <!-- -->
      // 
      //   <!-- -->
      // 
      //   <!-- -->
      shared_ptr<vector<string>> componentTypes_ {};
      // The date on which the report was generated.
      shared_ptr<string> dateTime_ {};
      // The summary of the report.
      shared_ptr<Data::SummaryReport> summaryReport_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDoctorReportsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDoctorReportsResponseBody::Data>) };
    inline vector<ListDoctorReportsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDoctorReportsResponseBody::Data>) };
    inline ListDoctorReportsResponseBody& setData(const vector<ListDoctorReportsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDoctorReportsResponseBody& setData(vector<ListDoctorReportsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorReportsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorReportsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDoctorReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDoctorReportsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The reports.
    shared_ptr<vector<ListDoctorReportsResponseBody::Data>> data_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
