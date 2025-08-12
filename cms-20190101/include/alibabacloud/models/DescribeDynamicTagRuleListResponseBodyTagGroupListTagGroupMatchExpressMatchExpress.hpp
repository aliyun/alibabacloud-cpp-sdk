// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODYTAGGROUPLISTTAGGROUPMATCHEXPRESSMATCHEXPRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODYTAGGROUPLISTTAGGROUPMATCHEXPRESSMATCHEXPRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      DARABONBA_PTR_TO_JSON(TagValueMatchFunction, tagValueMatchFunction_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      DARABONBA_PTR_FROM_JSON(TagValueMatchFunction, tagValueMatchFunction_);
    };
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress() = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress(const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress &) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress(DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress &&) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress() = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress& operator=(const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress &) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress& operator=(DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagKey_ != nullptr
        && this->tagValue_ != nullptr && this->tagValueMatchFunction_ != nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    // tagValueMatchFunction Field Functions 
    bool hasTagValueMatchFunction() const { return this->tagValueMatchFunction_ != nullptr;};
    void deleteTagValueMatchFunction() { this->tagValueMatchFunction_ = nullptr;};
    inline string tagValueMatchFunction() const { DARABONBA_PTR_GET_DEFAULT(tagValueMatchFunction_, "") };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress& setTagValueMatchFunction(string tagValueMatchFunction) { DARABONBA_PTR_SET_VALUE(tagValueMatchFunction_, tagValueMatchFunction) };


  protected:
    // The tag key.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The tag value.
    // 
    // The `TagValue` and `TagValueMatchFunction` parameters must be used in pairs.
    std::shared_ptr<string> tagValue_ = nullptr;
    // The method that is used to match tag values. Valid values:
    // 
    // *   all: includes all
    // *   startWith: starts with a prefix
    // *   endWith: ends with a suffix
    // *   contains: contains
    // *   notContains: does not contain
    // *   equals: equals
    std::shared_ptr<string> tagValueMatchFunction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
