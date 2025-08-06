// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEETINGROOMREQUESTRESERVATIONAUTHORITY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEETINGROOMREQUESTRESERVATIONAUTHORITY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMeetingRoomRequestReservationAuthorityAuthorizedMembers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateMeetingRoomRequestReservationAuthority : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMeetingRoomRequestReservationAuthority& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedMembers, authorizedMembers_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMeetingRoomRequestReservationAuthority& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedMembers, authorizedMembers_);
    };
    UpdateMeetingRoomRequestReservationAuthority() = default ;
    UpdateMeetingRoomRequestReservationAuthority(const UpdateMeetingRoomRequestReservationAuthority &) = default ;
    UpdateMeetingRoomRequestReservationAuthority(UpdateMeetingRoomRequestReservationAuthority &&) = default ;
    UpdateMeetingRoomRequestReservationAuthority(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMeetingRoomRequestReservationAuthority() = default ;
    UpdateMeetingRoomRequestReservationAuthority& operator=(const UpdateMeetingRoomRequestReservationAuthority &) = default ;
    UpdateMeetingRoomRequestReservationAuthority& operator=(UpdateMeetingRoomRequestReservationAuthority &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizedMembers_ != nullptr; };
    // authorizedMembers Field Functions 
    bool hasAuthorizedMembers() const { return this->authorizedMembers_ != nullptr;};
    void deleteAuthorizedMembers() { this->authorizedMembers_ = nullptr;};
    inline const vector<Models::UpdateMeetingRoomRequestReservationAuthorityAuthorizedMembers> & authorizedMembers() const { DARABONBA_PTR_GET_CONST(authorizedMembers_, vector<Models::UpdateMeetingRoomRequestReservationAuthorityAuthorizedMembers>) };
    inline vector<Models::UpdateMeetingRoomRequestReservationAuthorityAuthorizedMembers> authorizedMembers() { DARABONBA_PTR_GET(authorizedMembers_, vector<Models::UpdateMeetingRoomRequestReservationAuthorityAuthorizedMembers>) };
    inline UpdateMeetingRoomRequestReservationAuthority& setAuthorizedMembers(const vector<Models::UpdateMeetingRoomRequestReservationAuthorityAuthorizedMembers> & authorizedMembers) { DARABONBA_PTR_SET_VALUE(authorizedMembers_, authorizedMembers) };
    inline UpdateMeetingRoomRequestReservationAuthority& setAuthorizedMembers(vector<Models::UpdateMeetingRoomRequestReservationAuthorityAuthorizedMembers> && authorizedMembers) { DARABONBA_PTR_SET_RVALUE(authorizedMembers_, authorizedMembers) };


  protected:
    std::shared_ptr<vector<Models::UpdateMeetingRoomRequestReservationAuthorityAuthorizedMembers>> authorizedMembers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
