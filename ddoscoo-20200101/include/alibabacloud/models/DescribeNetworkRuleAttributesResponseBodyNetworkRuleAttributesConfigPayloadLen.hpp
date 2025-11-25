// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESRESPONSEBODYNETWORKRULEATTRIBUTESCONFIGPAYLOADLEN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESRESPONSEBODYNETWORKRULEATTRIBUTESCONFIGPAYLOADLEN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen& obj) { 
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(Min, min_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen& obj) { 
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
    };
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen() = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen(const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen &) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen(DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen &&) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen() = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen& operator=(const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen &) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen& operator=(DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->max_ == nullptr
        && return this->min_ == nullptr; };
    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline int32_t max() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline int32_t min() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


  protected:
    // The maximum length of a packet. Valid values: **0** to **6000**. Unit: bytes.
    std::shared_ptr<int32_t> max_ = nullptr;
    // The minimum length of a packet. Valid values: **0** to **6000**. Unit: bytes.
    std::shared_ptr<int32_t> min_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
