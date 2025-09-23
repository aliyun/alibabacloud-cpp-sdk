// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODYLISTENERSCONFIGCCSBLACK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODYLISTENERSCONFIGCCSBLACK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack& obj) { 
      DARABONBA_PTR_TO_JSON(Cnt, cnt_);
      DARABONBA_PTR_TO_JSON(During, during_);
      DARABONBA_PTR_TO_JSON(Expires, expires_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack& obj) { 
      DARABONBA_PTR_FROM_JSON(Cnt, cnt_);
      DARABONBA_PTR_FROM_JSON(During, during_);
      DARABONBA_PTR_FROM_JSON(Expires, expires_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack() = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack(const DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack &) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack(DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack &&) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack() = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack& operator=(const DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack &) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack& operator=(DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack &&) = default ;
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
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack& setCnt(int32_t cnt) { DARABONBA_PTR_SET_VALUE(cnt_, cnt) };


    // during Field Functions 
    bool hasDuring() const { return this->during_ != nullptr;};
    void deleteDuring() { this->during_ = nullptr;};
    inline int32_t during() const { DARABONBA_PTR_GET_DEFAULT(during_, 0) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack& setDuring(int32_t during) { DARABONBA_PTR_SET_VALUE(during_, during) };


    // expires Field Functions 
    bool hasExpires() const { return this->expires_ != nullptr;};
    void deleteExpires() { this->expires_ = nullptr;};
    inline int32_t expires() const { DARABONBA_PTR_GET_DEFAULT(expires_, 0) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack& setExpires(int32_t expires) { DARABONBA_PTR_SET_VALUE(expires_, expires) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> cnt_ = nullptr;
    std::shared_ptr<int32_t> during_ = nullptr;
    std::shared_ptr<int32_t> expires_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
