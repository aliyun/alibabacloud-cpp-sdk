// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODYTAGGROUPLISTTAGGROUPTAGVALUEBLACKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODYTAGGROUPLISTTAGGROUPTAGVALUEBLACKLIST_HPP_
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
  class DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist& obj) { 
      DARABONBA_PTR_TO_JSON(TagValueBlacklist, tagValueBlacklist_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist& obj) { 
      DARABONBA_PTR_FROM_JSON(TagValueBlacklist, tagValueBlacklist_);
    };
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist() = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist(const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist &) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist(DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist &&) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist() = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist& operator=(const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist &) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist& operator=(DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagValueBlacklist_ != nullptr; };
    // tagValueBlacklist Field Functions 
    bool hasTagValueBlacklist() const { return this->tagValueBlacklist_ != nullptr;};
    void deleteTagValueBlacklist() { this->tagValueBlacklist_ = nullptr;};
    inline const vector<string> & tagValueBlacklist() const { DARABONBA_PTR_GET_CONST(tagValueBlacklist_, vector<string>) };
    inline vector<string> tagValueBlacklist() { DARABONBA_PTR_GET(tagValueBlacklist_, vector<string>) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist& setTagValueBlacklist(const vector<string> & tagValueBlacklist) { DARABONBA_PTR_SET_VALUE(tagValueBlacklist_, tagValueBlacklist) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist& setTagValueBlacklist(vector<string> && tagValueBlacklist) { DARABONBA_PTR_SET_RVALUE(tagValueBlacklist_, tagValueBlacklist) };


  protected:
    std::shared_ptr<vector<string>> tagValueBlacklist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
