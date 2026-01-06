// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINNERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINNERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchInnerGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInnerGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(groupInfos, groupInfos_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInnerGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(groupInfos, groupInfos_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    SearchInnerGroupsResponseBody() = default ;
    SearchInnerGroupsResponseBody(const SearchInnerGroupsResponseBody &) = default ;
    SearchInnerGroupsResponseBody(SearchInnerGroupsResponseBody &&) = default ;
    SearchInnerGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInnerGroupsResponseBody() = default ;
    SearchInnerGroupsResponseBody& operator=(const SearchInnerGroupsResponseBody &) = default ;
    SearchInnerGroupsResponseBody& operator=(SearchInnerGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(MemberAmount, memberAmount_);
        DARABONBA_PTR_TO_JSON(OpenConversationId, openConversationId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, GroupInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(MemberAmount, memberAmount_);
        DARABONBA_PTR_FROM_JSON(OpenConversationId, openConversationId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      GroupInfos() = default ;
      GroupInfos(const GroupInfos &) = default ;
      GroupInfos(GroupInfos &&) = default ;
      GroupInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupInfos() = default ;
      GroupInfos& operator=(const GroupInfos &) = default ;
      GroupInfos& operator=(GroupInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->icon_ == nullptr
        && this->memberAmount_ == nullptr && this->openConversationId_ == nullptr && this->title_ == nullptr; };
      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline GroupInfos& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // memberAmount Field Functions 
      bool hasMemberAmount() const { return this->memberAmount_ != nullptr;};
      void deleteMemberAmount() { this->memberAmount_ = nullptr;};
      inline string getMemberAmount() const { DARABONBA_PTR_GET_DEFAULT(memberAmount_, "") };
      inline GroupInfos& setMemberAmount(string memberAmount) { DARABONBA_PTR_SET_VALUE(memberAmount_, memberAmount) };


      // openConversationId Field Functions 
      bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
      void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
      inline string getOpenConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
      inline GroupInfos& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline GroupInfos& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<string> icon_ {};
      shared_ptr<string> memberAmount_ {};
      shared_ptr<string> openConversationId_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->groupInfos_ == nullptr
        && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // groupInfos Field Functions 
    bool hasGroupInfos() const { return this->groupInfos_ != nullptr;};
    void deleteGroupInfos() { this->groupInfos_ = nullptr;};
    inline const vector<SearchInnerGroupsResponseBody::GroupInfos> & getGroupInfos() const { DARABONBA_PTR_GET_CONST(groupInfos_, vector<SearchInnerGroupsResponseBody::GroupInfos>) };
    inline vector<SearchInnerGroupsResponseBody::GroupInfos> getGroupInfos() { DARABONBA_PTR_GET(groupInfos_, vector<SearchInnerGroupsResponseBody::GroupInfos>) };
    inline SearchInnerGroupsResponseBody& setGroupInfos(const vector<SearchInnerGroupsResponseBody::GroupInfos> & groupInfos) { DARABONBA_PTR_SET_VALUE(groupInfos_, groupInfos) };
    inline SearchInnerGroupsResponseBody& setGroupInfos(vector<SearchInnerGroupsResponseBody::GroupInfos> && groupInfos) { DARABONBA_PTR_SET_RVALUE(groupInfos_, groupInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchInnerGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline SearchInnerGroupsResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline SearchInnerGroupsResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<vector<SearchInnerGroupsResponseBody::GroupInfos>> groupInfos_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
