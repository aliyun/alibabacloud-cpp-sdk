// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBMETRICLASTRESPONSEBODYMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBMETRICLASTRESPONSEBODYMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class DescribeJobMetricLastResponseBodyMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobMetricLastResponseBodyMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(ArrayIndex, arrayIndex_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobMetricLastResponseBodyMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(ArrayIndex, arrayIndex_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
    };
    DescribeJobMetricLastResponseBodyMetrics() = default ;
    DescribeJobMetricLastResponseBodyMetrics(const DescribeJobMetricLastResponseBodyMetrics &) = default ;
    DescribeJobMetricLastResponseBodyMetrics(DescribeJobMetricLastResponseBodyMetrics &&) = default ;
    DescribeJobMetricLastResponseBodyMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobMetricLastResponseBodyMetrics() = default ;
    DescribeJobMetricLastResponseBodyMetrics& operator=(const DescribeJobMetricLastResponseBodyMetrics &) = default ;
    DescribeJobMetricLastResponseBodyMetrics& operator=(DescribeJobMetricLastResponseBodyMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrayIndex_ != nullptr
        && this->metric_ != nullptr; };
    // arrayIndex Field Functions 
    bool hasArrayIndex() const { return this->arrayIndex_ != nullptr;};
    void deleteArrayIndex() { this->arrayIndex_ = nullptr;};
    inline int32_t arrayIndex() const { DARABONBA_PTR_GET_DEFAULT(arrayIndex_, 0) };
    inline DescribeJobMetricLastResponseBodyMetrics& setArrayIndex(int32_t arrayIndex) { DARABONBA_PTR_SET_VALUE(arrayIndex_, arrayIndex) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeJobMetricLastResponseBodyMetrics& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


  protected:
    std::shared_ptr<int32_t> arrayIndex_ = nullptr;
    std::shared_ptr<string> metric_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
