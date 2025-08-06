// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERCOLLECTDATADEMORESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERCOLLECTDATADEMORESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodPlayerCollectDataDemoResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodPlayerCollectDataDemoResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueRatio, valueRatio_);
      DARABONBA_PTR_TO_JSON(ValueRefer, valueRefer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodPlayerCollectDataDemoResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueRatio, valueRatio_);
      DARABONBA_PTR_FROM_JSON(ValueRefer, valueRefer_);
    };
    DescribeVodPlayerCollectDataDemoResponseBodyDataList() = default ;
    DescribeVodPlayerCollectDataDemoResponseBodyDataList(const DescribeVodPlayerCollectDataDemoResponseBodyDataList &) = default ;
    DescribeVodPlayerCollectDataDemoResponseBodyDataList(DescribeVodPlayerCollectDataDemoResponseBodyDataList &&) = default ;
    DescribeVodPlayerCollectDataDemoResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodPlayerCollectDataDemoResponseBodyDataList() = default ;
    DescribeVodPlayerCollectDataDemoResponseBodyDataList& operator=(const DescribeVodPlayerCollectDataDemoResponseBodyDataList &) = default ;
    DescribeVodPlayerCollectDataDemoResponseBodyDataList& operator=(DescribeVodPlayerCollectDataDemoResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metric_ != nullptr
        && this->value_ != nullptr && this->valueRatio_ != nullptr && this->valueRefer_ != nullptr; };
    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeVodPlayerCollectDataDemoResponseBodyDataList& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeVodPlayerCollectDataDemoResponseBodyDataList& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueRatio Field Functions 
    bool hasValueRatio() const { return this->valueRatio_ != nullptr;};
    void deleteValueRatio() { this->valueRatio_ = nullptr;};
    inline double valueRatio() const { DARABONBA_PTR_GET_DEFAULT(valueRatio_, 0.0) };
    inline DescribeVodPlayerCollectDataDemoResponseBodyDataList& setValueRatio(double valueRatio) { DARABONBA_PTR_SET_VALUE(valueRatio_, valueRatio) };


    // valueRefer Field Functions 
    bool hasValueRefer() const { return this->valueRefer_ != nullptr;};
    void deleteValueRefer() { this->valueRefer_ = nullptr;};
    inline double valueRefer() const { DARABONBA_PTR_GET_DEFAULT(valueRefer_, 0.0) };
    inline DescribeVodPlayerCollectDataDemoResponseBodyDataList& setValueRefer(double valueRefer) { DARABONBA_PTR_SET_VALUE(valueRefer_, valueRefer) };


  protected:
    std::shared_ptr<string> metric_ = nullptr;
    std::shared_ptr<double> value_ = nullptr;
    std::shared_ptr<double> valueRatio_ = nullptr;
    std::shared_ptr<double> valueRefer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
