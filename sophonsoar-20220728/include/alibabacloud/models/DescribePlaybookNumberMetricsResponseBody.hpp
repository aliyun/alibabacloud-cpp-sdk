// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKNUMBERMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKNUMBERMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookNumberMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookNumberMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookNumberMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePlaybookNumberMetricsResponseBody() = default ;
    DescribePlaybookNumberMetricsResponseBody(const DescribePlaybookNumberMetricsResponseBody &) = default ;
    DescribePlaybookNumberMetricsResponseBody(DescribePlaybookNumberMetricsResponseBody &&) = default ;
    DescribePlaybookNumberMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookNumberMetricsResponseBody() = default ;
    DescribePlaybookNumberMetricsResponseBody& operator=(const DescribePlaybookNumberMetricsResponseBody &) = default ;
    DescribePlaybookNumberMetricsResponseBody& operator=(DescribePlaybookNumberMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Metrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
        DARABONBA_PTR_TO_JSON(StartUpNum, startUpNum_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      };
      friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
        DARABONBA_PTR_FROM_JSON(StartUpNum, startUpNum_);
        DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      };
      Metrics() = default ;
      Metrics(const Metrics &) = default ;
      Metrics(Metrics &&) = default ;
      Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metrics() = default ;
      Metrics& operator=(const Metrics &) = default ;
      Metrics& operator=(Metrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->startUpNum_ == nullptr
        && this->totalNum_ == nullptr; };
      // startUpNum Field Functions 
      bool hasStartUpNum() const { return this->startUpNum_ != nullptr;};
      void deleteStartUpNum() { this->startUpNum_ = nullptr;};
      inline int32_t getStartUpNum() const { DARABONBA_PTR_GET_DEFAULT(startUpNum_, 0) };
      inline Metrics& setStartUpNum(int32_t startUpNum) { DARABONBA_PTR_SET_VALUE(startUpNum_, startUpNum) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
      inline Metrics& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    protected:
      // The number of enabled playbooks.
      shared_ptr<int32_t> startUpNum_ {};
      // The total number of playbooks.
      shared_ptr<int32_t> totalNum_ {};
    };

    virtual bool empty() const override { return this->metrics_ == nullptr
        && this->requestId_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const DescribePlaybookNumberMetricsResponseBody::Metrics & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, DescribePlaybookNumberMetricsResponseBody::Metrics) };
    inline DescribePlaybookNumberMetricsResponseBody::Metrics getMetrics() { DARABONBA_PTR_GET(metrics_, DescribePlaybookNumberMetricsResponseBody::Metrics) };
    inline DescribePlaybookNumberMetricsResponseBody& setMetrics(const DescribePlaybookNumberMetricsResponseBody::Metrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline DescribePlaybookNumberMetricsResponseBody& setMetrics(DescribePlaybookNumberMetricsResponseBody::Metrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlaybookNumberMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics.
    shared_ptr<DescribePlaybookNumberMetricsResponseBody::Metrics> metrics_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
