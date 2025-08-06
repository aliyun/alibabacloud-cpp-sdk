// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERMETRICDATADEMORESPONSEBODYEXTEND_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERMETRICDATADEMORESPONSEBODYEXTEND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodPlayerMetricDataDemoResponseBodyExtend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodPlayerMetricDataDemoResponseBodyExtend& obj) { 
      DARABONBA_PTR_TO_JSON(ActualEndTime, actualEndTime_);
      DARABONBA_PTR_TO_JSON(ActualStartTime, actualStartTime_);
      DARABONBA_PTR_TO_JSON(IntervalSeconds, intervalSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodPlayerMetricDataDemoResponseBodyExtend& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualEndTime, actualEndTime_);
      DARABONBA_PTR_FROM_JSON(ActualStartTime, actualStartTime_);
      DARABONBA_PTR_FROM_JSON(IntervalSeconds, intervalSeconds_);
    };
    DescribeVodPlayerMetricDataDemoResponseBodyExtend() = default ;
    DescribeVodPlayerMetricDataDemoResponseBodyExtend(const DescribeVodPlayerMetricDataDemoResponseBodyExtend &) = default ;
    DescribeVodPlayerMetricDataDemoResponseBodyExtend(DescribeVodPlayerMetricDataDemoResponseBodyExtend &&) = default ;
    DescribeVodPlayerMetricDataDemoResponseBodyExtend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodPlayerMetricDataDemoResponseBodyExtend() = default ;
    DescribeVodPlayerMetricDataDemoResponseBodyExtend& operator=(const DescribeVodPlayerMetricDataDemoResponseBodyExtend &) = default ;
    DescribeVodPlayerMetricDataDemoResponseBodyExtend& operator=(DescribeVodPlayerMetricDataDemoResponseBodyExtend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualEndTime_ != nullptr
        && this->actualStartTime_ != nullptr && this->intervalSeconds_ != nullptr; };
    // actualEndTime Field Functions 
    bool hasActualEndTime() const { return this->actualEndTime_ != nullptr;};
    void deleteActualEndTime() { this->actualEndTime_ = nullptr;};
    inline string actualEndTime() const { DARABONBA_PTR_GET_DEFAULT(actualEndTime_, "") };
    inline DescribeVodPlayerMetricDataDemoResponseBodyExtend& setActualEndTime(string actualEndTime) { DARABONBA_PTR_SET_VALUE(actualEndTime_, actualEndTime) };


    // actualStartTime Field Functions 
    bool hasActualStartTime() const { return this->actualStartTime_ != nullptr;};
    void deleteActualStartTime() { this->actualStartTime_ = nullptr;};
    inline string actualStartTime() const { DARABONBA_PTR_GET_DEFAULT(actualStartTime_, "") };
    inline DescribeVodPlayerMetricDataDemoResponseBodyExtend& setActualStartTime(string actualStartTime) { DARABONBA_PTR_SET_VALUE(actualStartTime_, actualStartTime) };


    // intervalSeconds Field Functions 
    bool hasIntervalSeconds() const { return this->intervalSeconds_ != nullptr;};
    void deleteIntervalSeconds() { this->intervalSeconds_ = nullptr;};
    inline int64_t intervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(intervalSeconds_, 0L) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyExtend& setIntervalSeconds(int64_t intervalSeconds) { DARABONBA_PTR_SET_VALUE(intervalSeconds_, intervalSeconds) };


  protected:
    std::shared_ptr<string> actualEndTime_ = nullptr;
    std::shared_ptr<string> actualStartTime_ = nullptr;
    std::shared_ptr<int64_t> intervalSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
