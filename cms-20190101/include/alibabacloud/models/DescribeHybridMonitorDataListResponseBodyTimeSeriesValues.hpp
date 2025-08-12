// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORDATALISTRESPONSEBODYTIMESERIESVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORDATALISTRESPONSEBODYTIMESERIESVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorDataListResponseBodyTimeSeriesValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorDataListResponseBodyTimeSeriesValues& obj) { 
      DARABONBA_PTR_TO_JSON(Ts, ts_);
      DARABONBA_PTR_TO_JSON(V, v_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorDataListResponseBodyTimeSeriesValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Ts, ts_);
      DARABONBA_PTR_FROM_JSON(V, v_);
    };
    DescribeHybridMonitorDataListResponseBodyTimeSeriesValues() = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeriesValues(const DescribeHybridMonitorDataListResponseBodyTimeSeriesValues &) = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeriesValues(DescribeHybridMonitorDataListResponseBodyTimeSeriesValues &&) = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeriesValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorDataListResponseBodyTimeSeriesValues() = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeriesValues& operator=(const DescribeHybridMonitorDataListResponseBodyTimeSeriesValues &) = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeriesValues& operator=(DescribeHybridMonitorDataListResponseBodyTimeSeriesValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ts_ != nullptr
        && this->v_ != nullptr; };
    // ts Field Functions 
    bool hasTs() const { return this->ts_ != nullptr;};
    void deleteTs() { this->ts_ = nullptr;};
    inline string ts() const { DARABONBA_PTR_GET_DEFAULT(ts_, "") };
    inline DescribeHybridMonitorDataListResponseBodyTimeSeriesValues& setTs(string ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


    // v Field Functions 
    bool hasV() const { return this->v_ != nullptr;};
    void deleteV() { this->v_ = nullptr;};
    inline string v() const { DARABONBA_PTR_GET_DEFAULT(v_, "") };
    inline DescribeHybridMonitorDataListResponseBodyTimeSeriesValues& setV(string v) { DARABONBA_PTR_SET_VALUE(v_, v) };


  protected:
    // The timestamp that indicates the time when the metric value is collected.
    // 
    // Unit: seconds.
    std::shared_ptr<string> ts_ = nullptr;
    // The metric value.
    std::shared_ptr<string> v_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
