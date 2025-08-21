// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESRESPONSEBODYNETWORKRULEATTRIBUTESCONFIGCCSBLACK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESRESPONSEBODYNETWORKRULEATTRIBUTESCONFIGCCSBLACK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack& obj) { 
      DARABONBA_PTR_TO_JSON(Cnt, cnt_);
      DARABONBA_PTR_TO_JSON(During, during_);
      DARABONBA_PTR_TO_JSON(Expires, expires_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack& obj) { 
      DARABONBA_PTR_FROM_JSON(Cnt, cnt_);
      DARABONBA_PTR_FROM_JSON(During, during_);
      DARABONBA_PTR_FROM_JSON(Expires, expires_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack() = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack(const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack &) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack(DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack &&) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack() = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack& operator=(const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack &) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack& operator=(DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cnt_ != nullptr
        && this->during_ != nullptr && this->expires_ != nullptr && this->type_ != nullptr; };
    // cnt Field Functions 
    bool hasCnt() const { return this->cnt_ != nullptr;};
    void deleteCnt() { this->cnt_ = nullptr;};
    inline int32_t cnt() const { DARABONBA_PTR_GET_DEFAULT(cnt_, 0) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack& setCnt(int32_t cnt) { DARABONBA_PTR_SET_VALUE(cnt_, cnt) };


    // during Field Functions 
    bool hasDuring() const { return this->during_ != nullptr;};
    void deleteDuring() { this->during_ = nullptr;};
    inline int32_t during() const { DARABONBA_PTR_GET_DEFAULT(during_, 0) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack& setDuring(int32_t during) { DARABONBA_PTR_SET_VALUE(during_, during) };


    // expires Field Functions 
    bool hasExpires() const { return this->expires_ != nullptr;};
    void deleteExpires() { this->expires_ = nullptr;};
    inline int32_t expires() const { DARABONBA_PTR_GET_DEFAULT(expires_, 0) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack& setExpires(int32_t expires) { DARABONBA_PTR_SET_VALUE(expires_, expires) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The threshold that the number of connections initiated from a source IP address can exceed the limit. Set the value to **5**. If the number of connections initiated from a source IP address exceeds the limit five times during the check, the source IP address is added to the blacklist.
    std::shared_ptr<int32_t> cnt_ = nullptr;
    // The interval at which checks are performed. Set the value to **60**. Unit: seconds.
    std::shared_ptr<int32_t> during_ = nullptr;
    // The validity period of the IP address in the blacklist. Valid values: **60** to **604800**. Unit: seconds.
    std::shared_ptr<int32_t> expires_ = nullptr;
    // The type of the limit that causes a source IP address to be added to the blacklist. Valid values:
    // 
    // *   **1**: Source New Connection Rate Limit
    // *   **2**: Source Concurrent Connection Rate Limit
    // *   **3**: PPS Limit for Source
    // *   **4**: Bandwidth Limit for Source
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
