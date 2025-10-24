// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICRESPONSEBODYNETWORKFLOWTOPNVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICRESPONSEBODYNETWORKFLOWTOPNVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues& obj) { 
      DARABONBA_PTR_TO_JSON(Attribute, attribute_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues() = default ;
    DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues(const DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues &) = default ;
    DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues(DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues &&) = default ;
    DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues() = default ;
    DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues& operator=(const DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues &) = default ;
    DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues& operator=(DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attribute_ == nullptr
        && return this->name_ == nullptr && return this->value_ == nullptr; };
    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int64_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
    inline DescribeNetworkFlowTopNMetricResponseBodyNetworkFlowTopNValues& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Returns additional information, such as the country, province, or city to which an IP address belongs.
    std::shared_ptr<string> attribute_ = nullptr;
    // The value of this field varies depending on the queried Metric.
    std::shared_ptr<string> name_ = nullptr;
    // Counts for top ranking.
    std::shared_ptr<int64_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
