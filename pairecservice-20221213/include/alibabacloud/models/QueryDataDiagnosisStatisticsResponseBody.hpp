// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATADIAGNOSISSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATADIAGNOSISSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QueryDataDiagnosisStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataDiagnosisStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataDiagnosisStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
    };
    QueryDataDiagnosisStatisticsResponseBody() = default ;
    QueryDataDiagnosisStatisticsResponseBody(const QueryDataDiagnosisStatisticsResponseBody &) = default ;
    QueryDataDiagnosisStatisticsResponseBody(QueryDataDiagnosisStatisticsResponseBody &&) = default ;
    QueryDataDiagnosisStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataDiagnosisStatisticsResponseBody() = default ;
    QueryDataDiagnosisStatisticsResponseBody& operator=(const QueryDataDiagnosisStatisticsResponseBody &) = default ;
    QueryDataDiagnosisStatisticsResponseBody& operator=(QueryDataDiagnosisStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Statistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
        DARABONBA_PTR_TO_JSON(FailedDates, failedDates_);
        DARABONBA_PTR_TO_JSON(NoDataDates, noDataDates_);
      };
      friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedDates, failedDates_);
        DARABONBA_PTR_FROM_JSON(NoDataDates, noDataDates_);
      };
      Statistics() = default ;
      Statistics(const Statistics &) = default ;
      Statistics(Statistics &&) = default ;
      Statistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Statistics() = default ;
      Statistics& operator=(const Statistics &) = default ;
      Statistics& operator=(Statistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failedDates_ == nullptr
        && this->noDataDates_ == nullptr; };
      // failedDates Field Functions 
      bool hasFailedDates() const { return this->failedDates_ != nullptr;};
      void deleteFailedDates() { this->failedDates_ = nullptr;};
      inline const vector<string> & getFailedDates() const { DARABONBA_PTR_GET_CONST(failedDates_, vector<string>) };
      inline vector<string> getFailedDates() { DARABONBA_PTR_GET(failedDates_, vector<string>) };
      inline Statistics& setFailedDates(const vector<string> & failedDates) { DARABONBA_PTR_SET_VALUE(failedDates_, failedDates) };
      inline Statistics& setFailedDates(vector<string> && failedDates) { DARABONBA_PTR_SET_RVALUE(failedDates_, failedDates) };


      // noDataDates Field Functions 
      bool hasNoDataDates() const { return this->noDataDates_ != nullptr;};
      void deleteNoDataDates() { this->noDataDates_ = nullptr;};
      inline const vector<string> & getNoDataDates() const { DARABONBA_PTR_GET_CONST(noDataDates_, vector<string>) };
      inline vector<string> getNoDataDates() { DARABONBA_PTR_GET(noDataDates_, vector<string>) };
      inline Statistics& setNoDataDates(const vector<string> & noDataDates) { DARABONBA_PTR_SET_VALUE(noDataDates_, noDataDates) };
      inline Statistics& setNoDataDates(vector<string> && noDataDates) { DARABONBA_PTR_SET_RVALUE(noDataDates_, noDataDates) };


    protected:
      shared_ptr<vector<string>> failedDates_ {};
      shared_ptr<vector<string>> noDataDates_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statistics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDataDiagnosisStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const QueryDataDiagnosisStatisticsResponseBody::Statistics & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, QueryDataDiagnosisStatisticsResponseBody::Statistics) };
    inline QueryDataDiagnosisStatisticsResponseBody::Statistics getStatistics() { DARABONBA_PTR_GET(statistics_, QueryDataDiagnosisStatisticsResponseBody::Statistics) };
    inline QueryDataDiagnosisStatisticsResponseBody& setStatistics(const QueryDataDiagnosisStatisticsResponseBody::Statistics & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline QueryDataDiagnosisStatisticsResponseBody& setStatistics(QueryDataDiagnosisStatisticsResponseBody::Statistics && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<QueryDataDiagnosisStatisticsResponseBody::Statistics> statistics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
