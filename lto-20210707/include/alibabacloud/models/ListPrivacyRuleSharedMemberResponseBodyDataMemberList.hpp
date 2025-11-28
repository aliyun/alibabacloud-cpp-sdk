// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVACYRULESHAREDMEMBERRESPONSEBODYDATAMEMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVACYRULESHAREDMEMBERRESPONSEBODYDATAMEMBERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListPrivacyRuleSharedMemberResponseBodyDataMemberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivacyRuleSharedMemberResponseBodyDataMemberList& obj) { 
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(Shared, shared_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivacyRuleSharedMemberResponseBodyDataMemberList& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(Shared, shared_);
    };
    ListPrivacyRuleSharedMemberResponseBodyDataMemberList() = default ;
    ListPrivacyRuleSharedMemberResponseBodyDataMemberList(const ListPrivacyRuleSharedMemberResponseBodyDataMemberList &) = default ;
    ListPrivacyRuleSharedMemberResponseBodyDataMemberList(ListPrivacyRuleSharedMemberResponseBodyDataMemberList &&) = default ;
    ListPrivacyRuleSharedMemberResponseBodyDataMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivacyRuleSharedMemberResponseBodyDataMemberList() = default ;
    ListPrivacyRuleSharedMemberResponseBodyDataMemberList& operator=(const ListPrivacyRuleSharedMemberResponseBodyDataMemberList &) = default ;
    ListPrivacyRuleSharedMemberResponseBodyDataMemberList& operator=(ListPrivacyRuleSharedMemberResponseBodyDataMemberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberId_ == nullptr
        && return this->memberName_ == nullptr && return this->shared_ == nullptr; };
    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline ListPrivacyRuleSharedMemberResponseBodyDataMemberList& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline ListPrivacyRuleSharedMemberResponseBodyDataMemberList& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // shared Field Functions 
    bool hasShared() const { return this->shared_ != nullptr;};
    void deleteShared() { this->shared_ = nullptr;};
    inline string shared() const { DARABONBA_PTR_GET_DEFAULT(shared_, "") };
    inline ListPrivacyRuleSharedMemberResponseBodyDataMemberList& setShared(string shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };


  protected:
    std::shared_ptr<string> memberId_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<string> shared_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
