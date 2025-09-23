// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODYLISTENERSCONFIGPAYLOADLEN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODYLISTENERSCONFIGPAYLOADLEN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen& obj) { 
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(Min, min_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen& obj) { 
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
    };
    DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen() = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen(const DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen &) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen(DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen &&) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen() = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen& operator=(const DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen &) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen& operator=(DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->max_ != nullptr
        && this->min_ != nullptr; };
    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline int32_t max() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline int32_t min() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


  protected:
    std::shared_ptr<int32_t> max_ = nullptr;
    std::shared_ptr<int32_t> min_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
