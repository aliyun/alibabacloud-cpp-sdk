// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEKEYPERFORMANCEVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEKEYPERFORMANCEVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues& obj) { 
      DARABONBA_PTR_TO_JSON(PerformanceValue, performanceValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues& obj) { 
      DARABONBA_PTR_FROM_JSON(PerformanceValue, performanceValue_);
    };
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues() = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues(const DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues &) = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues(DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues &&) = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues() = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues& operator=(const DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues &) = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues& operator=(DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->performanceValue_ == nullptr; };
    // performanceValue Field Functions 
    bool hasPerformanceValue() const { return this->performanceValue_ != nullptr;};
    void deletePerformanceValue() { this->performanceValue_ = nullptr;};
    inline const vector<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue> & performanceValue() const { DARABONBA_PTR_GET_CONST(performanceValue_, vector<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue>) };
    inline vector<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue> performanceValue() { DARABONBA_PTR_GET(performanceValue_, vector<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue>) };
    inline DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues& setPerformanceValue(const vector<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue> & performanceValue) { DARABONBA_PTR_SET_VALUE(performanceValue_, performanceValue) };
    inline DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues& setPerformanceValue(vector<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue> && performanceValue) { DARABONBA_PTR_SET_RVALUE(performanceValue_, performanceValue) };


  protected:
    std::shared_ptr<vector<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue>> performanceValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
