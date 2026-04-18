// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORYMETRICDISTRIBUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORYMETRICDISTRIBUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class QueryHistoryMetricDistributionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoryMetricDistributionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Ranges, ranges_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoryMetricDistributionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Ranges, ranges_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    QueryHistoryMetricDistributionRequest() = default ;
    QueryHistoryMetricDistributionRequest(const QueryHistoryMetricDistributionRequest &) = default ;
    QueryHistoryMetricDistributionRequest(QueryHistoryMetricDistributionRequest &&) = default ;
    QueryHistoryMetricDistributionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoryMetricDistributionRequest() = default ;
    QueryHistoryMetricDistributionRequest& operator=(const QueryHistoryMetricDistributionRequest &) = default ;
    QueryHistoryMetricDistributionRequest& operator=(QueryHistoryMetricDistributionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ranges : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ranges& obj) { 
        DARABONBA_PTR_TO_JSON(IncludeMax, includeMax_);
        DARABONBA_PTR_TO_JSON(IncludeMin, includeMin_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(Max, max_);
        DARABONBA_PTR_TO_JSON(Min, min_);
      };
      friend void from_json(const Darabonba::Json& j, Ranges& obj) { 
        DARABONBA_PTR_FROM_JSON(IncludeMax, includeMax_);
        DARABONBA_PTR_FROM_JSON(IncludeMin, includeMin_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(Max, max_);
        DARABONBA_PTR_FROM_JSON(Min, min_);
      };
      Ranges() = default ;
      Ranges(const Ranges &) = default ;
      Ranges(Ranges &&) = default ;
      Ranges(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ranges() = default ;
      Ranges& operator=(const Ranges &) = default ;
      Ranges& operator=(Ranges &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->includeMax_ == nullptr
        && this->includeMin_ == nullptr && this->label_ == nullptr && this->max_ == nullptr && this->min_ == nullptr; };
      // includeMax Field Functions 
      bool hasIncludeMax() const { return this->includeMax_ != nullptr;};
      void deleteIncludeMax() { this->includeMax_ = nullptr;};
      inline bool getIncludeMax() const { DARABONBA_PTR_GET_DEFAULT(includeMax_, false) };
      inline Ranges& setIncludeMax(bool includeMax) { DARABONBA_PTR_SET_VALUE(includeMax_, includeMax) };


      // includeMin Field Functions 
      bool hasIncludeMin() const { return this->includeMin_ != nullptr;};
      void deleteIncludeMin() { this->includeMin_ = nullptr;};
      inline bool getIncludeMin() const { DARABONBA_PTR_GET_DEFAULT(includeMin_, false) };
      inline Ranges& setIncludeMin(bool includeMin) { DARABONBA_PTR_SET_VALUE(includeMin_, includeMin) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Ranges& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // max Field Functions 
      bool hasMax() const { return this->max_ != nullptr;};
      void deleteMax() { this->max_ = nullptr;};
      inline float getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
      inline Ranges& setMax(float max) { DARABONBA_PTR_SET_VALUE(max_, max) };


      // min Field Functions 
      bool hasMin() const { return this->min_ != nullptr;};
      void deleteMin() { this->min_ = nullptr;};
      inline float getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0.0) };
      inline Ranges& setMin(float min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    protected:
      shared_ptr<bool> includeMax_ {};
      shared_ptr<bool> includeMin_ {};
      shared_ptr<string> label_ {};
      shared_ptr<float> max_ {};
      shared_ptr<float> min_ {};
    };

    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->metricName_ == nullptr && this->ranges_ == nullptr && this->startDate_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryHistoryMetricDistributionRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline QueryHistoryMetricDistributionRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // ranges Field Functions 
    bool hasRanges() const { return this->ranges_ != nullptr;};
    void deleteRanges() { this->ranges_ = nullptr;};
    inline const vector<QueryHistoryMetricDistributionRequest::Ranges> & getRanges() const { DARABONBA_PTR_GET_CONST(ranges_, vector<QueryHistoryMetricDistributionRequest::Ranges>) };
    inline vector<QueryHistoryMetricDistributionRequest::Ranges> getRanges() { DARABONBA_PTR_GET(ranges_, vector<QueryHistoryMetricDistributionRequest::Ranges>) };
    inline QueryHistoryMetricDistributionRequest& setRanges(const vector<QueryHistoryMetricDistributionRequest::Ranges> & ranges) { DARABONBA_PTR_SET_VALUE(ranges_, ranges) };
    inline QueryHistoryMetricDistributionRequest& setRanges(vector<QueryHistoryMetricDistributionRequest::Ranges> && ranges) { DARABONBA_PTR_SET_RVALUE(ranges_, ranges) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryHistoryMetricDistributionRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    shared_ptr<string> endDate_ {};
    shared_ptr<string> metricName_ {};
    shared_ptr<vector<QueryHistoryMetricDistributionRequest::Ranges>> ranges_ {};
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
