// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESRESPONSEBODYNETWORKRULEATTRIBUTESCONFIGCC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESRESPONSEBODYNETWORKRULEATTRIBUTESCONFIGCC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc& obj) { 
      DARABONBA_PTR_TO_JSON(Sblack, sblack_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc& obj) { 
      DARABONBA_PTR_FROM_JSON(Sblack, sblack_);
    };
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc() = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc(const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc &) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc(DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc &&) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc() = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc& operator=(const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc &) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc& operator=(DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sblack_ != nullptr; };
    // sblack Field Functions 
    bool hasSblack() const { return this->sblack_ != nullptr;};
    void deleteSblack() { this->sblack_ = nullptr;};
    inline const vector<Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack> & sblack() const { DARABONBA_PTR_GET_CONST(sblack_, vector<Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack>) };
    inline vector<Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack> sblack() { DARABONBA_PTR_GET(sblack_, vector<Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack>) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc& setSblack(const vector<Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack> & sblack) { DARABONBA_PTR_SET_VALUE(sblack_, sblack) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc& setSblack(vector<Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack> && sblack) { DARABONBA_PTR_SET_RVALUE(sblack_, sblack) };


  protected:
    // The protection policy that a source IP address is added to the blacklist when the number of connections initiated from the IP address frequently exceeds the limit.
    std::shared_ptr<vector<Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCcSblack>> sblack_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
