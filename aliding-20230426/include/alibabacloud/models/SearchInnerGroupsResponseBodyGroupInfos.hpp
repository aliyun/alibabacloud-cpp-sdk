// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINNERGROUPSRESPONSEBODYGROUPINFOS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINNERGROUPSRESPONSEBODYGROUPINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchInnerGroupsResponseBodyGroupInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInnerGroupsResponseBodyGroupInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(MemberAmount, memberAmount_);
      DARABONBA_PTR_TO_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInnerGroupsResponseBodyGroupInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(MemberAmount, memberAmount_);
      DARABONBA_PTR_FROM_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    SearchInnerGroupsResponseBodyGroupInfos() = default ;
    SearchInnerGroupsResponseBodyGroupInfos(const SearchInnerGroupsResponseBodyGroupInfos &) = default ;
    SearchInnerGroupsResponseBodyGroupInfos(SearchInnerGroupsResponseBodyGroupInfos &&) = default ;
    SearchInnerGroupsResponseBodyGroupInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInnerGroupsResponseBodyGroupInfos() = default ;
    SearchInnerGroupsResponseBodyGroupInfos& operator=(const SearchInnerGroupsResponseBodyGroupInfos &) = default ;
    SearchInnerGroupsResponseBodyGroupInfos& operator=(SearchInnerGroupsResponseBodyGroupInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->icon_ == nullptr
        && return this->memberAmount_ == nullptr && return this->openConversationId_ == nullptr && return this->title_ == nullptr; };
    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline SearchInnerGroupsResponseBodyGroupInfos& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // memberAmount Field Functions 
    bool hasMemberAmount() const { return this->memberAmount_ != nullptr;};
    void deleteMemberAmount() { this->memberAmount_ = nullptr;};
    inline string memberAmount() const { DARABONBA_PTR_GET_DEFAULT(memberAmount_, "") };
    inline SearchInnerGroupsResponseBodyGroupInfos& setMemberAmount(string memberAmount) { DARABONBA_PTR_SET_VALUE(memberAmount_, memberAmount) };


    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string openConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline SearchInnerGroupsResponseBodyGroupInfos& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SearchInnerGroupsResponseBodyGroupInfos& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> memberAmount_ = nullptr;
    std::shared_ptr<string> openConversationId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
