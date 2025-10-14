// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODYTAGGROUPLISTTAGGROUPTEMPLATEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODYTAGGROUPLISTTAGGROUPTEMPLATEIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateIdList, templateIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateIdList, templateIdList_);
    };
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList() = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList(const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList &) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList(DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList &&) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList() = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList& operator=(const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList &) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList& operator=(DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateIdList_ == nullptr; };
    // templateIdList Field Functions 
    bool hasTemplateIdList() const { return this->templateIdList_ != nullptr;};
    void deleteTemplateIdList() { this->templateIdList_ = nullptr;};
    inline const vector<string> & templateIdList() const { DARABONBA_PTR_GET_CONST(templateIdList_, vector<string>) };
    inline vector<string> templateIdList() { DARABONBA_PTR_GET(templateIdList_, vector<string>) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList& setTemplateIdList(const vector<string> & templateIdList) { DARABONBA_PTR_SET_VALUE(templateIdList_, templateIdList) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList& setTemplateIdList(vector<string> && templateIdList) { DARABONBA_PTR_SET_RVALUE(templateIdList_, templateIdList) };


  protected:
    std::shared_ptr<vector<string>> templateIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
