// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEETINGROOMREQUESTRESERVATIONAUTHORITYAUTHORIZEDMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEETINGROOMREQUESTRESERVATIONAUTHORITYAUTHORIZEDMEMBERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers& obj) { 
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(MemberType, memberType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(MemberType, memberType_);
    };
    CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers() = default ;
    CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers(const CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers &) = default ;
    CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers(CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers &&) = default ;
    CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers() = default ;
    CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers& operator=(const CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers &) = default ;
    CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers& operator=(CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberId_ == nullptr
        && return this->memberName_ == nullptr && return this->memberType_ == nullptr; };
    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // memberType Field Functions 
    bool hasMemberType() const { return this->memberType_ != nullptr;};
    void deleteMemberType() { this->memberType_ = nullptr;};
    inline string memberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
    inline CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


  protected:
    std::shared_ptr<string> memberId_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<string> memberType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
