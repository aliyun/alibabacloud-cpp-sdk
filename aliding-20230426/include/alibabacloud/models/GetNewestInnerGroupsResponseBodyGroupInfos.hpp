// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNEWESTINNERGROUPSRESPONSEBODYGROUPINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETNEWESTINNERGROUPSRESPONSEBODYGROUPINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNewestInnerGroupsResponseBodyGroupInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNewestInnerGroupsResponseBodyGroupInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(MemberAmount, memberAmount_);
      DARABONBA_PTR_TO_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetNewestInnerGroupsResponseBodyGroupInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(MemberAmount, memberAmount_);
      DARABONBA_PTR_FROM_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetNewestInnerGroupsResponseBodyGroupInfos() = default ;
    GetNewestInnerGroupsResponseBodyGroupInfos(const GetNewestInnerGroupsResponseBodyGroupInfos &) = default ;
    GetNewestInnerGroupsResponseBodyGroupInfos(GetNewestInnerGroupsResponseBodyGroupInfos &&) = default ;
    GetNewestInnerGroupsResponseBodyGroupInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNewestInnerGroupsResponseBodyGroupInfos() = default ;
    GetNewestInnerGroupsResponseBodyGroupInfos& operator=(const GetNewestInnerGroupsResponseBodyGroupInfos &) = default ;
    GetNewestInnerGroupsResponseBodyGroupInfos& operator=(GetNewestInnerGroupsResponseBodyGroupInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->icon_ != nullptr
        && this->memberAmount_ != nullptr && this->openConversationId_ != nullptr && this->title_ != nullptr; };
    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline GetNewestInnerGroupsResponseBodyGroupInfos& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // memberAmount Field Functions 
    bool hasMemberAmount() const { return this->memberAmount_ != nullptr;};
    void deleteMemberAmount() { this->memberAmount_ = nullptr;};
    inline string memberAmount() const { DARABONBA_PTR_GET_DEFAULT(memberAmount_, "") };
    inline GetNewestInnerGroupsResponseBodyGroupInfos& setMemberAmount(string memberAmount) { DARABONBA_PTR_SET_VALUE(memberAmount_, memberAmount) };


    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string openConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline GetNewestInnerGroupsResponseBodyGroupInfos& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetNewestInnerGroupsResponseBodyGroupInfos& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


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
