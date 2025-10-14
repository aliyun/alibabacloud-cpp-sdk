// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODYTAGGROUPLISTTAGGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODYTAGGROUPLISTTAGGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList.hpp>
#include <alibabacloud/models/DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress.hpp>
#include <alibabacloud/models/DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist.hpp>
#include <alibabacloud/models/DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupList, contactGroupList_);
      DARABONBA_PTR_TO_JSON(DynamicTagRuleId, dynamicTagRuleId_);
      DARABONBA_PTR_TO_JSON(MatchExpress, matchExpress_);
      DARABONBA_PTR_TO_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValueBlacklist, tagValueBlacklist_);
      DARABONBA_PTR_TO_JSON(TemplateIdList, templateIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupList, contactGroupList_);
      DARABONBA_PTR_FROM_JSON(DynamicTagRuleId, dynamicTagRuleId_);
      DARABONBA_PTR_FROM_JSON(MatchExpress, matchExpress_);
      DARABONBA_PTR_FROM_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValueBlacklist, tagValueBlacklist_);
      DARABONBA_PTR_FROM_JSON(TemplateIdList, templateIdList_);
    };
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup() = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup(const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup &) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup(DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup &&) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup() = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& operator=(const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup &) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& operator=(DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroupList_ == nullptr
        && return this->dynamicTagRuleId_ == nullptr && return this->matchExpress_ == nullptr && return this->matchExpressFilterRelation_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr
        && return this->tagKey_ == nullptr && return this->tagValueBlacklist_ == nullptr && return this->templateIdList_ == nullptr; };
    // contactGroupList Field Functions 
    bool hasContactGroupList() const { return this->contactGroupList_ != nullptr;};
    void deleteContactGroupList() { this->contactGroupList_ = nullptr;};
    inline const Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList & contactGroupList() const { DARABONBA_PTR_GET_CONST(contactGroupList_, Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList) };
    inline Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList contactGroupList() { DARABONBA_PTR_GET(contactGroupList_, Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& setContactGroupList(const Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList & contactGroupList) { DARABONBA_PTR_SET_VALUE(contactGroupList_, contactGroupList) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& setContactGroupList(Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList && contactGroupList) { DARABONBA_PTR_SET_RVALUE(contactGroupList_, contactGroupList) };


    // dynamicTagRuleId Field Functions 
    bool hasDynamicTagRuleId() const { return this->dynamicTagRuleId_ != nullptr;};
    void deleteDynamicTagRuleId() { this->dynamicTagRuleId_ = nullptr;};
    inline string dynamicTagRuleId() const { DARABONBA_PTR_GET_DEFAULT(dynamicTagRuleId_, "") };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& setDynamicTagRuleId(string dynamicTagRuleId) { DARABONBA_PTR_SET_VALUE(dynamicTagRuleId_, dynamicTagRuleId) };


    // matchExpress Field Functions 
    bool hasMatchExpress() const { return this->matchExpress_ != nullptr;};
    void deleteMatchExpress() { this->matchExpress_ = nullptr;};
    inline const Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress & matchExpress() const { DARABONBA_PTR_GET_CONST(matchExpress_, Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress) };
    inline Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress matchExpress() { DARABONBA_PTR_GET(matchExpress_, Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& setMatchExpress(const Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress & matchExpress) { DARABONBA_PTR_SET_VALUE(matchExpress_, matchExpress) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& setMatchExpress(Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress && matchExpress) { DARABONBA_PTR_SET_RVALUE(matchExpress_, matchExpress) };


    // matchExpressFilterRelation Field Functions 
    bool hasMatchExpressFilterRelation() const { return this->matchExpressFilterRelation_ != nullptr;};
    void deleteMatchExpressFilterRelation() { this->matchExpressFilterRelation_ = nullptr;};
    inline string matchExpressFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(matchExpressFilterRelation_, "") };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& setMatchExpressFilterRelation(string matchExpressFilterRelation) { DARABONBA_PTR_SET_VALUE(matchExpressFilterRelation_, matchExpressFilterRelation) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValueBlacklist Field Functions 
    bool hasTagValueBlacklist() const { return this->tagValueBlacklist_ != nullptr;};
    void deleteTagValueBlacklist() { this->tagValueBlacklist_ = nullptr;};
    inline const Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist & tagValueBlacklist() const { DARABONBA_PTR_GET_CONST(tagValueBlacklist_, Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist) };
    inline Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist tagValueBlacklist() { DARABONBA_PTR_GET(tagValueBlacklist_, Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& setTagValueBlacklist(const Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist & tagValueBlacklist) { DARABONBA_PTR_SET_VALUE(tagValueBlacklist_, tagValueBlacklist) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& setTagValueBlacklist(Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist && tagValueBlacklist) { DARABONBA_PTR_SET_RVALUE(tagValueBlacklist_, tagValueBlacklist) };


    // templateIdList Field Functions 
    bool hasTemplateIdList() const { return this->templateIdList_ != nullptr;};
    void deleteTemplateIdList() { this->templateIdList_ = nullptr;};
    inline const Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList & templateIdList() const { DARABONBA_PTR_GET_CONST(templateIdList_, Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList) };
    inline Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList templateIdList() { DARABONBA_PTR_GET(templateIdList_, Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& setTemplateIdList(const Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList & templateIdList) { DARABONBA_PTR_SET_VALUE(templateIdList_, templateIdList) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroup& setTemplateIdList(Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList && templateIdList) { DARABONBA_PTR_SET_RVALUE(templateIdList_, templateIdList) };


  protected:
    // The alert contact group.
    std::shared_ptr<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList> contactGroupList_ = nullptr;
    // The ID of the tag rule.
    std::shared_ptr<string> dynamicTagRuleId_ = nullptr;
    // The conditional expressions used to create an application group based on the tag.
    std::shared_ptr<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress> matchExpress_ = nullptr;
    // The logical operator that is used between conditional expressions. Valid values:
    // 
    // *   `and`
    // *   `or`
    // 
    // >  Only one logical operator can be used in a request.
    std::shared_ptr<string> matchExpressFilterRelation_ = nullptr;
    // The ID of the region to which the tags belong.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of adding instances that meet the tag rule to the application group. Valid values:
    // 
    // *   `RUNNING`
    // *   `FINISH`
    std::shared_ptr<string> status_ = nullptr;
    // The tag key.
    std::shared_ptr<string> tagKey_ = nullptr;
    std::shared_ptr<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTagValueBlacklist> tagValueBlacklist_ = nullptr;
    // The IDs of the alert templates.
    std::shared_ptr<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupTemplateIdList> templateIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
