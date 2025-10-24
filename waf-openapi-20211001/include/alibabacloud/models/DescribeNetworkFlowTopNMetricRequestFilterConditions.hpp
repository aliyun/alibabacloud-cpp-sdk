// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICREQUESTFILTERCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICREQUESTFILTERCONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeNetworkFlowTopNMetricRequestFilterConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTopNMetricRequestFilterConditions& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(OpValue, opValue_);
      DARABONBA_ANY_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTopNMetricRequestFilterConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(OpValue, opValue_);
      DARABONBA_ANY_FROM_JSON(Values, values_);
    };
    DescribeNetworkFlowTopNMetricRequestFilterConditions() = default ;
    DescribeNetworkFlowTopNMetricRequestFilterConditions(const DescribeNetworkFlowTopNMetricRequestFilterConditions &) = default ;
    DescribeNetworkFlowTopNMetricRequestFilterConditions(DescribeNetworkFlowTopNMetricRequestFilterConditions &&) = default ;
    DescribeNetworkFlowTopNMetricRequestFilterConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTopNMetricRequestFilterConditions() = default ;
    DescribeNetworkFlowTopNMetricRequestFilterConditions& operator=(const DescribeNetworkFlowTopNMetricRequestFilterConditions &) = default ;
    DescribeNetworkFlowTopNMetricRequestFilterConditions& operator=(DescribeNetworkFlowTopNMetricRequestFilterConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->opValue_ == nullptr && return this->values_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeNetworkFlowTopNMetricRequestFilterConditions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // opValue Field Functions 
    bool hasOpValue() const { return this->opValue_ != nullptr;};
    void deleteOpValue() { this->opValue_ = nullptr;};
    inline string opValue() const { DARABONBA_PTR_GET_DEFAULT(opValue_, "") };
    inline DescribeNetworkFlowTopNMetricRequestFilterConditions& setOpValue(string opValue) { DARABONBA_PTR_SET_VALUE(opValue_, opValue) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline     const Darabonba::Json & values() const { DARABONBA_GET(values_) };
    Darabonba::Json & values() { DARABONBA_GET(values_) };
    inline DescribeNetworkFlowTopNMetricRequestFilterConditions& setValues(const Darabonba::Json & values) { DARABONBA_SET_VALUE(values_, values) };
    inline DescribeNetworkFlowTopNMetricRequestFilterConditions& setValues(Darabonba::Json & values) { DARABONBA_SET_RVALUE(values_, values) };


  protected:
    // The filter fields. Valid values:
    // 
    // *   matched_host
    // *   cluster
    // 
    // For details, see the **Filter fields (Key)** section below.
    std::shared_ptr<string> key_ = nullptr;
    // The filter operator.
    // For details, see the **Filter operators (OpValue)** section below.
    std::shared_ptr<string> opValue_ = nullptr;
    // The filter content.
    Darabonba::Json values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
