// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEKEY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEKEY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(PerformanceValues, performanceValues_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(ValueFormat, valueFormat_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(PerformanceValues, performanceValues_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(ValueFormat, valueFormat_);
    };
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey() = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey(const DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey &) = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey(DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey &&) = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey() = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey& operator=(const DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey &) = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey& operator=(DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->performanceValues_ == nullptr && return this->unit_ == nullptr && return this->valueFormat_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // performanceValues Field Functions 
    bool hasPerformanceValues() const { return this->performanceValues_ != nullptr;};
    void deletePerformanceValues() { this->performanceValues_ = nullptr;};
    inline const Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues & performanceValues() const { DARABONBA_PTR_GET_CONST(performanceValues_, Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues) };
    inline Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues performanceValues() { DARABONBA_PTR_GET(performanceValues_, Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues) };
    inline DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey& setPerformanceValues(const Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues & performanceValues) { DARABONBA_PTR_SET_VALUE(performanceValues_, performanceValues) };
    inline DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey& setPerformanceValues(Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues && performanceValues) { DARABONBA_PTR_SET_RVALUE(performanceValues_, performanceValues) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // valueFormat Field Functions 
    bool hasValueFormat() const { return this->valueFormat_ != nullptr;};
    void deleteValueFormat() { this->valueFormat_ = nullptr;};
    inline string valueFormat() const { DARABONBA_PTR_GET_DEFAULT(valueFormat_, "") };
    inline DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey& setValueFormat(string valueFormat) { DARABONBA_PTR_SET_VALUE(valueFormat_, valueFormat) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues> performanceValues_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
    std::shared_ptr<string> valueFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
