// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEMBER_HPP_
#define ALIBABACLOUD_MODELS_MEMBER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class Member : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Member& obj) { 
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(MemberType, memberType_);
    };
    friend void from_json(const Darabonba::Json& j, Member& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(MemberType, memberType_);
    };
    Member() = default ;
    Member(const Member &) = default ;
    Member(Member &&) = default ;
    Member(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Member() = default ;
    Member& operator=(const Member &) = default ;
    Member& operator=(Member &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberId_ == nullptr
        && this->memberType_ == nullptr; };
    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline Member& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // memberType Field Functions 
    bool hasMemberType() const { return this->memberType_ != nullptr;};
    void deleteMemberType() { this->memberType_ = nullptr;};
    inline string getMemberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
    inline Member& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


  protected:
    shared_ptr<string> memberId_ {};
    shared_ptr<string> memberType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
