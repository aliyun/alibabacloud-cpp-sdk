// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODYLISTENERSCONFIGCC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODYLISTENERSCONFIGCC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer4RuleAttributesResponseBodyListenersConfigCc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RuleAttributesResponseBodyListenersConfigCc& obj) { 
      DARABONBA_PTR_TO_JSON(Sblack, sblack_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RuleAttributesResponseBodyListenersConfigCc& obj) { 
      DARABONBA_PTR_FROM_JSON(Sblack, sblack_);
    };
    DescribeLayer4RuleAttributesResponseBodyListenersConfigCc() = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigCc(const DescribeLayer4RuleAttributesResponseBodyListenersConfigCc &) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigCc(DescribeLayer4RuleAttributesResponseBodyListenersConfigCc &&) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigCc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RuleAttributesResponseBodyListenersConfigCc() = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigCc& operator=(const DescribeLayer4RuleAttributesResponseBodyListenersConfigCc &) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigCc& operator=(DescribeLayer4RuleAttributesResponseBodyListenersConfigCc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sblack_ != nullptr; };
    // sblack Field Functions 
    bool hasSblack() const { return this->sblack_ != nullptr;};
    void deleteSblack() { this->sblack_ = nullptr;};
    inline const vector<Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack> & sblack() const { DARABONBA_PTR_GET_CONST(sblack_, vector<Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack>) };
    inline vector<Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack> sblack() { DARABONBA_PTR_GET(sblack_, vector<Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack>) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfigCc& setSblack(const vector<Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack> & sblack) { DARABONBA_PTR_SET_VALUE(sblack_, sblack) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfigCc& setSblack(vector<Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack> && sblack) { DARABONBA_PTR_SET_RVALUE(sblack_, sblack) };


  protected:
    std::shared_ptr<vector<Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack>> sblack_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
