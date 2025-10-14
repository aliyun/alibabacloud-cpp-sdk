// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEETINGROOMRESPONSEBODYRESULTRESERVATIONAUTHORITY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEETINGROOMRESPONSEBODYRESULTRESERVATIONAUTHORITY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMeetingRoomResponseBodyResultReservationAuthorityAuthorizedMembers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMeetingRoomResponseBodyResultReservationAuthority : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMeetingRoomResponseBodyResultReservationAuthority& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedMembers, authorizedMembers_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMeetingRoomResponseBodyResultReservationAuthority& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedMembers, authorizedMembers_);
    };
    QueryMeetingRoomResponseBodyResultReservationAuthority() = default ;
    QueryMeetingRoomResponseBodyResultReservationAuthority(const QueryMeetingRoomResponseBodyResultReservationAuthority &) = default ;
    QueryMeetingRoomResponseBodyResultReservationAuthority(QueryMeetingRoomResponseBodyResultReservationAuthority &&) = default ;
    QueryMeetingRoomResponseBodyResultReservationAuthority(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMeetingRoomResponseBodyResultReservationAuthority() = default ;
    QueryMeetingRoomResponseBodyResultReservationAuthority& operator=(const QueryMeetingRoomResponseBodyResultReservationAuthority &) = default ;
    QueryMeetingRoomResponseBodyResultReservationAuthority& operator=(QueryMeetingRoomResponseBodyResultReservationAuthority &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedMembers_ == nullptr; };
    // authorizedMembers Field Functions 
    bool hasAuthorizedMembers() const { return this->authorizedMembers_ != nullptr;};
    void deleteAuthorizedMembers() { this->authorizedMembers_ = nullptr;};
    inline const vector<Models::QueryMeetingRoomResponseBodyResultReservationAuthorityAuthorizedMembers> & authorizedMembers() const { DARABONBA_PTR_GET_CONST(authorizedMembers_, vector<Models::QueryMeetingRoomResponseBodyResultReservationAuthorityAuthorizedMembers>) };
    inline vector<Models::QueryMeetingRoomResponseBodyResultReservationAuthorityAuthorizedMembers> authorizedMembers() { DARABONBA_PTR_GET(authorizedMembers_, vector<Models::QueryMeetingRoomResponseBodyResultReservationAuthorityAuthorizedMembers>) };
    inline QueryMeetingRoomResponseBodyResultReservationAuthority& setAuthorizedMembers(const vector<Models::QueryMeetingRoomResponseBodyResultReservationAuthorityAuthorizedMembers> & authorizedMembers) { DARABONBA_PTR_SET_VALUE(authorizedMembers_, authorizedMembers) };
    inline QueryMeetingRoomResponseBodyResultReservationAuthority& setAuthorizedMembers(vector<Models::QueryMeetingRoomResponseBodyResultReservationAuthorityAuthorizedMembers> && authorizedMembers) { DARABONBA_PTR_SET_RVALUE(authorizedMembers_, authorizedMembers) };


  protected:
    std::shared_ptr<vector<Models::QueryMeetingRoomResponseBodyResultReservationAuthorityAuthorizedMembers>> authorizedMembers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
