// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTGOVERNANCEMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTGOVERNANCEMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListRecentGovernanceMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentGovernanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GenerateTime, generateTime_);
      DARABONBA_PTR_TO_JSON(GovernanceMetrics, governanceMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentGovernanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GenerateTime, generateTime_);
      DARABONBA_PTR_FROM_JSON(GovernanceMetrics, governanceMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRecentGovernanceMetricsResponseBody() = default ;
    ListRecentGovernanceMetricsResponseBody(const ListRecentGovernanceMetricsResponseBody &) = default ;
    ListRecentGovernanceMetricsResponseBody(ListRecentGovernanceMetricsResponseBody &&) = default ;
    ListRecentGovernanceMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentGovernanceMetricsResponseBody() = default ;
    ListRecentGovernanceMetricsResponseBody& operator=(const ListRecentGovernanceMetricsResponseBody &) = default ;
    ListRecentGovernanceMetricsResponseBody& operator=(ListRecentGovernanceMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GovernanceMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GovernanceMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(GovernanceMetric, governanceMetric_);
      };
      friend void from_json(const Darabonba::Json& j, GovernanceMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(GovernanceMetric, governanceMetric_);
      };
      GovernanceMetrics() = default ;
      GovernanceMetrics(const GovernanceMetrics &) = default ;
      GovernanceMetrics(GovernanceMetrics &&) = default ;
      GovernanceMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GovernanceMetrics() = default ;
      GovernanceMetrics& operator=(const GovernanceMetrics &) = default ;
      GovernanceMetrics& operator=(GovernanceMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GovernanceMetric : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GovernanceMetric& obj) { 
          DARABONBA_PTR_TO_JSON(GovernanceItem, governanceItem_);
          DARABONBA_PTR_TO_JSON(MetricType, metricType_);
          DARABONBA_ANY_TO_JSON(MetricValue, metricValue_);
        };
        friend void from_json(const Darabonba::Json& j, GovernanceMetric& obj) { 
          DARABONBA_PTR_FROM_JSON(GovernanceItem, governanceItem_);
          DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
          DARABONBA_ANY_FROM_JSON(MetricValue, metricValue_);
        };
        GovernanceMetric() = default ;
        GovernanceMetric(const GovernanceMetric &) = default ;
        GovernanceMetric(GovernanceMetric &&) = default ;
        GovernanceMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GovernanceMetric() = default ;
        GovernanceMetric& operator=(const GovernanceMetric &) = default ;
        GovernanceMetric& operator=(GovernanceMetric &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->governanceItem_ == nullptr
        && this->metricType_ == nullptr && this->metricValue_ == nullptr; };
        // governanceItem Field Functions 
        bool hasGovernanceItem() const { return this->governanceItem_ != nullptr;};
        void deleteGovernanceItem() { this->governanceItem_ = nullptr;};
        inline string getGovernanceItem() const { DARABONBA_PTR_GET_DEFAULT(governanceItem_, "") };
        inline GovernanceMetric& setGovernanceItem(string governanceItem) { DARABONBA_PTR_SET_VALUE(governanceItem_, governanceItem) };


        // metricType Field Functions 
        bool hasMetricType() const { return this->metricType_ != nullptr;};
        void deleteMetricType() { this->metricType_ = nullptr;};
        inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
        inline GovernanceMetric& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


        // metricValue Field Functions 
        bool hasMetricValue() const { return this->metricValue_ != nullptr;};
        void deleteMetricValue() { this->metricValue_ = nullptr;};
        inline         const Darabonba::Json & getMetricValue() const { DARABONBA_GET(metricValue_) };
        Darabonba::Json & getMetricValue() { DARABONBA_GET(metricValue_) };
        inline GovernanceMetric& setMetricValue(const Darabonba::Json & metricValue) { DARABONBA_SET_VALUE(metricValue_, metricValue) };
        inline GovernanceMetric& setMetricValue(Darabonba::Json && metricValue) { DARABONBA_SET_RVALUE(metricValue_, metricValue) };


      protected:
        // The name of the governance item.
        shared_ptr<string> governanceItem_ {};
        // The type of the metric value. Valid values:
        // 
        // *   Number
        // *   String
        // *   Boolean
        shared_ptr<string> metricType_ {};
        // The metric value. The type of the metric value is determined by `MetricType`.
        Darabonba::Json metricValue_ {};
      };

      virtual bool empty() const override { return this->governanceMetric_ == nullptr; };
      // governanceMetric Field Functions 
      bool hasGovernanceMetric() const { return this->governanceMetric_ != nullptr;};
      void deleteGovernanceMetric() { this->governanceMetric_ = nullptr;};
      inline const vector<GovernanceMetrics::GovernanceMetric> & getGovernanceMetric() const { DARABONBA_PTR_GET_CONST(governanceMetric_, vector<GovernanceMetrics::GovernanceMetric>) };
      inline vector<GovernanceMetrics::GovernanceMetric> getGovernanceMetric() { DARABONBA_PTR_GET(governanceMetric_, vector<GovernanceMetrics::GovernanceMetric>) };
      inline GovernanceMetrics& setGovernanceMetric(const vector<GovernanceMetrics::GovernanceMetric> & governanceMetric) { DARABONBA_PTR_SET_VALUE(governanceMetric_, governanceMetric) };
      inline GovernanceMetrics& setGovernanceMetric(vector<GovernanceMetrics::GovernanceMetric> && governanceMetric) { DARABONBA_PTR_SET_RVALUE(governanceMetric_, governanceMetric) };


    protected:
      shared_ptr<vector<GovernanceMetrics::GovernanceMetric>> governanceMetric_ {};
    };

    virtual bool empty() const override { return this->generateTime_ == nullptr
        && this->governanceMetrics_ == nullptr && this->requestId_ == nullptr; };
    // generateTime Field Functions 
    bool hasGenerateTime() const { return this->generateTime_ != nullptr;};
    void deleteGenerateTime() { this->generateTime_ = nullptr;};
    inline string getGenerateTime() const { DARABONBA_PTR_GET_DEFAULT(generateTime_, "") };
    inline ListRecentGovernanceMetricsResponseBody& setGenerateTime(string generateTime) { DARABONBA_PTR_SET_VALUE(generateTime_, generateTime) };


    // governanceMetrics Field Functions 
    bool hasGovernanceMetrics() const { return this->governanceMetrics_ != nullptr;};
    void deleteGovernanceMetrics() { this->governanceMetrics_ = nullptr;};
    inline const ListRecentGovernanceMetricsResponseBody::GovernanceMetrics & getGovernanceMetrics() const { DARABONBA_PTR_GET_CONST(governanceMetrics_, ListRecentGovernanceMetricsResponseBody::GovernanceMetrics) };
    inline ListRecentGovernanceMetricsResponseBody::GovernanceMetrics getGovernanceMetrics() { DARABONBA_PTR_GET(governanceMetrics_, ListRecentGovernanceMetricsResponseBody::GovernanceMetrics) };
    inline ListRecentGovernanceMetricsResponseBody& setGovernanceMetrics(const ListRecentGovernanceMetricsResponseBody::GovernanceMetrics & governanceMetrics) { DARABONBA_PTR_SET_VALUE(governanceMetrics_, governanceMetrics) };
    inline ListRecentGovernanceMetricsResponseBody& setGovernanceMetrics(ListRecentGovernanceMetricsResponseBody::GovernanceMetrics && governanceMetrics) { DARABONBA_PTR_SET_RVALUE(governanceMetrics_, governanceMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecentGovernanceMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the report was generated.
    shared_ptr<string> generateTime_ {};
    // The metric values of all governance items. The value of the parameter is an array, and each row in the array contains the metric value of a governance item.
    shared_ptr<ListRecentGovernanceMetricsResponseBody::GovernanceMetrics> governanceMetrics_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
