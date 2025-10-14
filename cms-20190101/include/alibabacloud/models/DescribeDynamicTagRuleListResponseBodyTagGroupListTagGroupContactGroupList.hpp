// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODYTAGGROUPLISTTAGGROUPCONTACTGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODYTAGGROUPLISTTAGGROUPCONTACTGROUPLIST_HPP_
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
  class DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupList, contactGroupList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupList, contactGroupList_);
    };
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList() = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList(const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList &) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList(DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList &&) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList() = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList& operator=(const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList &) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList& operator=(DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroupList_ == nullptr; };
    // contactGroupList Field Functions 
    bool hasContactGroupList() const { return this->contactGroupList_ != nullptr;};
    void deleteContactGroupList() { this->contactGroupList_ = nullptr;};
    inline const vector<string> & contactGroupList() const { DARABONBA_PTR_GET_CONST(contactGroupList_, vector<string>) };
    inline vector<string> contactGroupList() { DARABONBA_PTR_GET(contactGroupList_, vector<string>) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList& setContactGroupList(const vector<string> & contactGroupList) { DARABONBA_PTR_SET_VALUE(contactGroupList_, contactGroupList) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupContactGroupList& setContactGroupList(vector<string> && contactGroupList) { DARABONBA_PTR_SET_RVALUE(contactGroupList_, contactGroupList) };


  protected:
    std::shared_ptr<vector<string>> contactGroupList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
