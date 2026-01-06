// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEETINGROOMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEETINGROOMREQUEST_HPP_
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
  class UpdateMeetingRoomRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMeetingRoomRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableCycleReservation, enableCycleReservation_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IsvRoomId, isvRoomId_);
      DARABONBA_PTR_TO_JSON(ReservationAuthority, reservationAuthority_);
      DARABONBA_PTR_TO_JSON(RoomCapacity, roomCapacity_);
      DARABONBA_PTR_TO_JSON(RoomId, roomId_);
      DARABONBA_PTR_TO_JSON(RoomLabelIds, roomLabelIds_);
      DARABONBA_PTR_TO_JSON(RoomLocation, roomLocation_);
      DARABONBA_PTR_TO_JSON(RoomName, roomName_);
      DARABONBA_PTR_TO_JSON(RoomPicture, roomPicture_);
      DARABONBA_PTR_TO_JSON(RoomStatus, roomStatus_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMeetingRoomRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableCycleReservation, enableCycleReservation_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IsvRoomId, isvRoomId_);
      DARABONBA_PTR_FROM_JSON(ReservationAuthority, reservationAuthority_);
      DARABONBA_PTR_FROM_JSON(RoomCapacity, roomCapacity_);
      DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
      DARABONBA_PTR_FROM_JSON(RoomLabelIds, roomLabelIds_);
      DARABONBA_PTR_FROM_JSON(RoomLocation, roomLocation_);
      DARABONBA_PTR_FROM_JSON(RoomName, roomName_);
      DARABONBA_PTR_FROM_JSON(RoomPicture, roomPicture_);
      DARABONBA_PTR_FROM_JSON(RoomStatus, roomStatus_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    UpdateMeetingRoomRequest() = default ;
    UpdateMeetingRoomRequest(const UpdateMeetingRoomRequest &) = default ;
    UpdateMeetingRoomRequest(UpdateMeetingRoomRequest &&) = default ;
    UpdateMeetingRoomRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMeetingRoomRequest() = default ;
    UpdateMeetingRoomRequest& operator=(const UpdateMeetingRoomRequest &) = default ;
    UpdateMeetingRoomRequest& operator=(UpdateMeetingRoomRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    class RoomLocation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RoomLocation& obj) { 
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, RoomLocation& obj) { 
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      RoomLocation() = default ;
      RoomLocation(const RoomLocation &) = default ;
      RoomLocation(RoomLocation &&) = default ;
      RoomLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RoomLocation() = default ;
      RoomLocation& operator=(const RoomLocation &) = default ;
      RoomLocation& operator=(RoomLocation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desc_ == nullptr
        && this->title_ == nullptr; };
      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline RoomLocation& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline RoomLocation& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<string> desc_ {};
      shared_ptr<string> title_ {};
    };

    class ReservationAuthority : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReservationAuthority& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizedMembers, authorizedMembers_);
      };
      friend void from_json(const Darabonba::Json& j, ReservationAuthority& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizedMembers, authorizedMembers_);
      };
      ReservationAuthority() = default ;
      ReservationAuthority(const ReservationAuthority &) = default ;
      ReservationAuthority(ReservationAuthority &&) = default ;
      ReservationAuthority(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReservationAuthority() = default ;
      ReservationAuthority& operator=(const ReservationAuthority &) = default ;
      ReservationAuthority& operator=(ReservationAuthority &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AuthorizedMembers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthorizedMembers& obj) { 
          DARABONBA_PTR_TO_JSON(MemberId, memberId_);
          DARABONBA_PTR_TO_JSON(MemberName, memberName_);
          DARABONBA_PTR_TO_JSON(MemberType, memberType_);
        };
        friend void from_json(const Darabonba::Json& j, AuthorizedMembers& obj) { 
          DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
          DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
          DARABONBA_PTR_FROM_JSON(MemberType, memberType_);
        };
        AuthorizedMembers() = default ;
        AuthorizedMembers(const AuthorizedMembers &) = default ;
        AuthorizedMembers(AuthorizedMembers &&) = default ;
        AuthorizedMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthorizedMembers() = default ;
        AuthorizedMembers& operator=(const AuthorizedMembers &) = default ;
        AuthorizedMembers& operator=(AuthorizedMembers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->memberId_ == nullptr
        && this->memberName_ == nullptr && this->memberType_ == nullptr; };
        // memberId Field Functions 
        bool hasMemberId() const { return this->memberId_ != nullptr;};
        void deleteMemberId() { this->memberId_ = nullptr;};
        inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
        inline AuthorizedMembers& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


        // memberName Field Functions 
        bool hasMemberName() const { return this->memberName_ != nullptr;};
        void deleteMemberName() { this->memberName_ = nullptr;};
        inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
        inline AuthorizedMembers& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


        // memberType Field Functions 
        bool hasMemberType() const { return this->memberType_ != nullptr;};
        void deleteMemberType() { this->memberType_ = nullptr;};
        inline string getMemberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
        inline AuthorizedMembers& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


      protected:
        shared_ptr<string> memberId_ {};
        shared_ptr<string> memberName_ {};
        shared_ptr<string> memberType_ {};
      };

      virtual bool empty() const override { return this->authorizedMembers_ == nullptr; };
      // authorizedMembers Field Functions 
      bool hasAuthorizedMembers() const { return this->authorizedMembers_ != nullptr;};
      void deleteAuthorizedMembers() { this->authorizedMembers_ = nullptr;};
      inline const vector<ReservationAuthority::AuthorizedMembers> & getAuthorizedMembers() const { DARABONBA_PTR_GET_CONST(authorizedMembers_, vector<ReservationAuthority::AuthorizedMembers>) };
      inline vector<ReservationAuthority::AuthorizedMembers> getAuthorizedMembers() { DARABONBA_PTR_GET(authorizedMembers_, vector<ReservationAuthority::AuthorizedMembers>) };
      inline ReservationAuthority& setAuthorizedMembers(const vector<ReservationAuthority::AuthorizedMembers> & authorizedMembers) { DARABONBA_PTR_SET_VALUE(authorizedMembers_, authorizedMembers) };
      inline ReservationAuthority& setAuthorizedMembers(vector<ReservationAuthority::AuthorizedMembers> && authorizedMembers) { DARABONBA_PTR_SET_RVALUE(authorizedMembers_, authorizedMembers) };


    protected:
      shared_ptr<vector<ReservationAuthority::AuthorizedMembers>> authorizedMembers_ {};
    };

    virtual bool empty() const override { return this->enableCycleReservation_ == nullptr
        && this->groupId_ == nullptr && this->isvRoomId_ == nullptr && this->reservationAuthority_ == nullptr && this->roomCapacity_ == nullptr && this->roomId_ == nullptr
        && this->roomLabelIds_ == nullptr && this->roomLocation_ == nullptr && this->roomName_ == nullptr && this->roomPicture_ == nullptr && this->roomStatus_ == nullptr
        && this->tenantContext_ == nullptr; };
    // enableCycleReservation Field Functions 
    bool hasEnableCycleReservation() const { return this->enableCycleReservation_ != nullptr;};
    void deleteEnableCycleReservation() { this->enableCycleReservation_ = nullptr;};
    inline bool getEnableCycleReservation() const { DARABONBA_PTR_GET_DEFAULT(enableCycleReservation_, false) };
    inline UpdateMeetingRoomRequest& setEnableCycleReservation(bool enableCycleReservation) { DARABONBA_PTR_SET_VALUE(enableCycleReservation_, enableCycleReservation) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline UpdateMeetingRoomRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isvRoomId Field Functions 
    bool hasIsvRoomId() const { return this->isvRoomId_ != nullptr;};
    void deleteIsvRoomId() { this->isvRoomId_ = nullptr;};
    inline string getIsvRoomId() const { DARABONBA_PTR_GET_DEFAULT(isvRoomId_, "") };
    inline UpdateMeetingRoomRequest& setIsvRoomId(string isvRoomId) { DARABONBA_PTR_SET_VALUE(isvRoomId_, isvRoomId) };


    // reservationAuthority Field Functions 
    bool hasReservationAuthority() const { return this->reservationAuthority_ != nullptr;};
    void deleteReservationAuthority() { this->reservationAuthority_ = nullptr;};
    inline const UpdateMeetingRoomRequest::ReservationAuthority & getReservationAuthority() const { DARABONBA_PTR_GET_CONST(reservationAuthority_, UpdateMeetingRoomRequest::ReservationAuthority) };
    inline UpdateMeetingRoomRequest::ReservationAuthority getReservationAuthority() { DARABONBA_PTR_GET(reservationAuthority_, UpdateMeetingRoomRequest::ReservationAuthority) };
    inline UpdateMeetingRoomRequest& setReservationAuthority(const UpdateMeetingRoomRequest::ReservationAuthority & reservationAuthority) { DARABONBA_PTR_SET_VALUE(reservationAuthority_, reservationAuthority) };
    inline UpdateMeetingRoomRequest& setReservationAuthority(UpdateMeetingRoomRequest::ReservationAuthority && reservationAuthority) { DARABONBA_PTR_SET_RVALUE(reservationAuthority_, reservationAuthority) };


    // roomCapacity Field Functions 
    bool hasRoomCapacity() const { return this->roomCapacity_ != nullptr;};
    void deleteRoomCapacity() { this->roomCapacity_ = nullptr;};
    inline int32_t getRoomCapacity() const { DARABONBA_PTR_GET_DEFAULT(roomCapacity_, 0) };
    inline UpdateMeetingRoomRequest& setRoomCapacity(int32_t roomCapacity) { DARABONBA_PTR_SET_VALUE(roomCapacity_, roomCapacity) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline string getRoomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
    inline UpdateMeetingRoomRequest& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // roomLabelIds Field Functions 
    bool hasRoomLabelIds() const { return this->roomLabelIds_ != nullptr;};
    void deleteRoomLabelIds() { this->roomLabelIds_ = nullptr;};
    inline const vector<int64_t> & getRoomLabelIds() const { DARABONBA_PTR_GET_CONST(roomLabelIds_, vector<int64_t>) };
    inline vector<int64_t> getRoomLabelIds() { DARABONBA_PTR_GET(roomLabelIds_, vector<int64_t>) };
    inline UpdateMeetingRoomRequest& setRoomLabelIds(const vector<int64_t> & roomLabelIds) { DARABONBA_PTR_SET_VALUE(roomLabelIds_, roomLabelIds) };
    inline UpdateMeetingRoomRequest& setRoomLabelIds(vector<int64_t> && roomLabelIds) { DARABONBA_PTR_SET_RVALUE(roomLabelIds_, roomLabelIds) };


    // roomLocation Field Functions 
    bool hasRoomLocation() const { return this->roomLocation_ != nullptr;};
    void deleteRoomLocation() { this->roomLocation_ = nullptr;};
    inline const UpdateMeetingRoomRequest::RoomLocation & getRoomLocation() const { DARABONBA_PTR_GET_CONST(roomLocation_, UpdateMeetingRoomRequest::RoomLocation) };
    inline UpdateMeetingRoomRequest::RoomLocation getRoomLocation() { DARABONBA_PTR_GET(roomLocation_, UpdateMeetingRoomRequest::RoomLocation) };
    inline UpdateMeetingRoomRequest& setRoomLocation(const UpdateMeetingRoomRequest::RoomLocation & roomLocation) { DARABONBA_PTR_SET_VALUE(roomLocation_, roomLocation) };
    inline UpdateMeetingRoomRequest& setRoomLocation(UpdateMeetingRoomRequest::RoomLocation && roomLocation) { DARABONBA_PTR_SET_RVALUE(roomLocation_, roomLocation) };


    // roomName Field Functions 
    bool hasRoomName() const { return this->roomName_ != nullptr;};
    void deleteRoomName() { this->roomName_ = nullptr;};
    inline string getRoomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
    inline UpdateMeetingRoomRequest& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


    // roomPicture Field Functions 
    bool hasRoomPicture() const { return this->roomPicture_ != nullptr;};
    void deleteRoomPicture() { this->roomPicture_ = nullptr;};
    inline string getRoomPicture() const { DARABONBA_PTR_GET_DEFAULT(roomPicture_, "") };
    inline UpdateMeetingRoomRequest& setRoomPicture(string roomPicture) { DARABONBA_PTR_SET_VALUE(roomPicture_, roomPicture) };


    // roomStatus Field Functions 
    bool hasRoomStatus() const { return this->roomStatus_ != nullptr;};
    void deleteRoomStatus() { this->roomStatus_ = nullptr;};
    inline int32_t getRoomStatus() const { DARABONBA_PTR_GET_DEFAULT(roomStatus_, 0) };
    inline UpdateMeetingRoomRequest& setRoomStatus(int32_t roomStatus) { DARABONBA_PTR_SET_VALUE(roomStatus_, roomStatus) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateMeetingRoomRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateMeetingRoomRequest::TenantContext) };
    inline UpdateMeetingRoomRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateMeetingRoomRequest::TenantContext) };
    inline UpdateMeetingRoomRequest& setTenantContext(const UpdateMeetingRoomRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateMeetingRoomRequest& setTenantContext(UpdateMeetingRoomRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    shared_ptr<bool> enableCycleReservation_ {};
    shared_ptr<int64_t> groupId_ {};
    shared_ptr<string> isvRoomId_ {};
    shared_ptr<UpdateMeetingRoomRequest::ReservationAuthority> reservationAuthority_ {};
    shared_ptr<int32_t> roomCapacity_ {};
    shared_ptr<string> roomId_ {};
    shared_ptr<vector<int64_t>> roomLabelIds_ {};
    shared_ptr<UpdateMeetingRoomRequest::RoomLocation> roomLocation_ {};
    shared_ptr<string> roomName_ {};
    shared_ptr<string> roomPicture_ {};
    shared_ptr<int32_t> roomStatus_ {};
    shared_ptr<UpdateMeetingRoomRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
