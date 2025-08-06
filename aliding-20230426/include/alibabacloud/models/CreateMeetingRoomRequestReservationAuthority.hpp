// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEETINGROOMREQUESTRESERVATIONAUTHORITY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEETINGROOMREQUESTRESERVATIONAUTHORITY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMeetingRoomRequestReservationAuthority : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMeetingRoomRequestReservationAuthority& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedMembers, authorizedMembers_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMeetingRoomRequestReservationAuthority& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedMembers, authorizedMembers_);
    };
    CreateMeetingRoomRequestReservationAuthority() = default ;
    CreateMeetingRoomRequestReservationAuthority(const CreateMeetingRoomRequestReservationAuthority &) = default ;
    CreateMeetingRoomRequestReservationAuthority(CreateMeetingRoomRequestReservationAuthority &&) = default ;
    CreateMeetingRoomRequestReservationAuthority(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMeetingRoomRequestReservationAuthority() = default ;
    CreateMeetingRoomRequestReservationAuthority& operator=(const CreateMeetingRoomRequestReservationAuthority &) = default ;
    CreateMeetingRoomRequestReservationAuthority& operator=(CreateMeetingRoomRequestReservationAuthority &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizedMembers_ != nullptr; };
    // authorizedMembers Field Functions 
    bool hasAuthorizedMembers() const { return this->authorizedMembers_ != nullptr;};
    void deleteAuthorizedMembers() { this->authorizedMembers_ = nullptr;};
    inline const vector<Models::CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers> & authorizedMembers() const { DARABONBA_PTR_GET_CONST(authorizedMembers_, vector<Models::CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers>) };
    inline vector<Models::CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers> authorizedMembers() { DARABONBA_PTR_GET(authorizedMembers_, vector<Models::CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers>) };
    inline CreateMeetingRoomRequestReservationAuthority& setAuthorizedMembers(const vector<Models::CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers> & authorizedMembers) { DARABONBA_PTR_SET_VALUE(authorizedMembers_, authorizedMembers) };
    inline CreateMeetingRoomRequestReservationAuthority& setAuthorizedMembers(vector<Models::CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers> && authorizedMembers) { DARABONBA_PTR_SET_RVALUE(authorizedMembers_, authorizedMembers) };


  protected:
    std::shared_ptr<vector<Models::CreateMeetingRoomRequestReservationAuthorityAuthorizedMembers>> authorizedMembers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
