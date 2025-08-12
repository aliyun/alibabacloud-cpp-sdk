// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODYTAGGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODYTAGGROUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeDynamicTagRuleListResponseBodyTagGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDynamicTagRuleListResponseBodyTagGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(TagGroup, tagGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDynamicTagRuleListResponseBodyTagGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(TagGroup, tagGroup_);
    };
    DescribeDynamicTagRuleListResponseBodyTagGroupList() = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupList(const DescribeDynamicTagRuleListResponseBodyTagGroupList &) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupList(DescribeDynamicTagRuleListResponseBodyTagGroupList &&) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDynamicTagRuleListResponseBodyTagGroupList() = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupList& operator=(const DescribeDynamicTagRuleListResponseBodyTagGroupList &) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupList& operator=(DescribeDynamicTagRuleListResponseBodyTagGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagGroup_ != nullptr; };
    // tagGroup Field Functions 
    bool hasTagGroup() const { return this->tagGroup_ != nullptr;};
    void deleteTagGroup() { this->tagGroup_ = nullptr;};
    inline const vector<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup> & tagGroup() const { DARABONBA_PTR_GET_CONST(tagGroup_, vector<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup>) };
    inline vector<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup> tagGroup() { DARABONBA_PTR_GET(tagGroup_, vector<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup>) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupList& setTagGroup(const vector<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup> & tagGroup) { DARABONBA_PTR_SET_VALUE(tagGroup_, tagGroup) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupList& setTagGroup(vector<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup> && tagGroup) { DARABONBA_PTR_SET_RVALUE(tagGroup_, tagGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup>> tagGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
