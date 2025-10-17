// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTRESPONSEBODYDATAPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTRESPONSEBODYDATAPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMetricListResponseBodyDataPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricListResponseBodyDataPoints& obj) { 
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricListResponseBodyDataPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeMetricListResponseBodyDataPoints() = default ;
    DescribeMetricListResponseBodyDataPoints(const DescribeMetricListResponseBodyDataPoints &) = default ;
    DescribeMetricListResponseBodyDataPoints(DescribeMetricListResponseBodyDataPoints &&) = default ;
    DescribeMetricListResponseBodyDataPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricListResponseBodyDataPoints() = default ;
    DescribeMetricListResponseBodyDataPoints& operator=(const DescribeMetricListResponseBodyDataPoints &) = default ;
    DescribeMetricListResponseBodyDataPoints& operator=(DescribeMetricListResponseBodyDataPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->statistics_ == nullptr
        && return this->timestamp_ == nullptr; };
    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline float statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, 0.0) };
    inline DescribeMetricListResponseBodyDataPoints& setStatistics(float statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeMetricListResponseBodyDataPoints& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The statistical value.
    std::shared_ptr<float> statistics_ = nullptr;
    // The timestamp of the record. Unit: milliseconds.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
