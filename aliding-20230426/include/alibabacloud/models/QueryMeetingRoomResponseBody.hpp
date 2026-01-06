// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEETINGROOMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEETINGROOMRESPONSEBODY_HPP_
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
  class QueryMeetingRoomResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMeetingRoomResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMeetingRoomResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    QueryMeetingRoomResponseBody() = default ;
    QueryMeetingRoomResponseBody(const QueryMeetingRoomResponseBody &) = default ;
    QueryMeetingRoomResponseBody(QueryMeetingRoomResponseBody &&) = default ;
    QueryMeetingRoomResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMeetingRoomResponseBody() = default ;
    QueryMeetingRoomResponseBody& operator=(const QueryMeetingRoomResponseBody &) = default ;
    QueryMeetingRoomResponseBody& operator=(QueryMeetingRoomResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CorpId, corpId_);
        DARABONBA_PTR_TO_JSON(DeviceUnionIds, deviceUnionIds_);
        DARABONBA_PTR_TO_JSON(EnableCycleReservation, enableCycleReservation_);
        DARABONBA_PTR_TO_JSON(IsvRoomId, isvRoomId_);
        DARABONBA_PTR_TO_JSON(ReservationAuthority, reservationAuthority_);
        DARABONBA_PTR_TO_JSON(RoomCapacity, roomCapacity_);
        DARABONBA_PTR_TO_JSON(RoomGroup, roomGroup_);
        DARABONBA_PTR_TO_JSON(RoomId, roomId_);
        DARABONBA_PTR_TO_JSON(RoomLabels, roomLabels_);
        DARABONBA_PTR_TO_JSON(RoomLocation, roomLocation_);
        DARABONBA_PTR_TO_JSON(RoomName, roomName_);
        DARABONBA_PTR_TO_JSON(RoomPicture, roomPicture_);
        DARABONBA_PTR_TO_JSON(RoomStaffId, roomStaffId_);
        DARABONBA_PTR_TO_JSON(RoomStatus, roomStatus_);
        DARABONBA_PTR_TO_JSON(RoomUnionId, roomUnionId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
        DARABONBA_PTR_FROM_JSON(DeviceUnionIds, deviceUnionIds_);
        DARABONBA_PTR_FROM_JSON(EnableCycleReservation, enableCycleReservation_);
        DARABONBA_PTR_FROM_JSON(IsvRoomId, isvRoomId_);
        DARABONBA_PTR_FROM_JSON(ReservationAuthority, reservationAuthority_);
        DARABONBA_PTR_FROM_JSON(RoomCapacity, roomCapacity_);
        DARABONBA_PTR_FROM_JSON(RoomGroup, roomGroup_);
        DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
        DARABONBA_PTR_FROM_JSON(RoomLabels, roomLabels_);
        DARABONBA_PTR_FROM_JSON(RoomLocation, roomLocation_);
        DARABONBA_PTR_FROM_JSON(RoomName, roomName_);
        DARABONBA_PTR_FROM_JSON(RoomPicture, roomPicture_);
        DARABONBA_PTR_FROM_JSON(RoomStaffId, roomStaffId_);
        DARABONBA_PTR_FROM_JSON(RoomStatus, roomStatus_);
        DARABONBA_PTR_FROM_JSON(RoomUnionId, roomUnionId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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

      class RoomLabels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoomLabels& obj) { 
          DARABONBA_PTR_TO_JSON(LabelId, labelId_);
          DARABONBA_PTR_TO_JSON(LabelName, labelName_);
        };
        friend void from_json(const Darabonba::Json& j, RoomLabels& obj) { 
          DARABONBA_PTR_FROM_JSON(LabelId, labelId_);
          DARABONBA_PTR_FROM_JSON(LabelName, labelName_);
        };
        RoomLabels() = default ;
        RoomLabels(const RoomLabels &) = default ;
        RoomLabels(RoomLabels &&) = default ;
        RoomLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoomLabels() = default ;
        RoomLabels& operator=(const RoomLabels &) = default ;
        RoomLabels& operator=(RoomLabels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->labelId_ == nullptr
        && this->labelName_ == nullptr; };
        // labelId Field Functions 
        bool hasLabelId() const { return this->labelId_ != nullptr;};
        void deleteLabelId() { this->labelId_ = nullptr;};
        inline int64_t getLabelId() const { DARABONBA_PTR_GET_DEFAULT(labelId_, 0L) };
        inline RoomLabels& setLabelId(int64_t labelId) { DARABONBA_PTR_SET_VALUE(labelId_, labelId) };


        // labelName Field Functions 
        bool hasLabelName() const { return this->labelName_ != nullptr;};
        void deleteLabelName() { this->labelName_ = nullptr;};
        inline string getLabelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
        inline RoomLabels& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


      protected:
        shared_ptr<int64_t> labelId_ {};
        shared_ptr<string> labelName_ {};
      };

      class RoomGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoomGroup& obj) { 
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        };
        friend void from_json(const Darabonba::Json& j, RoomGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        };
        RoomGroup() = default ;
        RoomGroup(const RoomGroup &) = default ;
        RoomGroup(RoomGroup &&) = default ;
        RoomGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoomGroup() = default ;
        RoomGroup& operator=(const RoomGroup &) = default ;
        RoomGroup& operator=(RoomGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupName_ == nullptr && this->parentId_ == nullptr; };
        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
        inline RoomGroup& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline RoomGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline RoomGroup& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      protected:
        shared_ptr<int64_t> groupId_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<int64_t> parentId_ {};
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

      virtual bool empty() const override { return this->corpId_ == nullptr
        && this->deviceUnionIds_ == nullptr && this->enableCycleReservation_ == nullptr && this->isvRoomId_ == nullptr && this->reservationAuthority_ == nullptr && this->roomCapacity_ == nullptr
        && this->roomGroup_ == nullptr && this->roomId_ == nullptr && this->roomLabels_ == nullptr && this->roomLocation_ == nullptr && this->roomName_ == nullptr
        && this->roomPicture_ == nullptr && this->roomStaffId_ == nullptr && this->roomStatus_ == nullptr && this->roomUnionId_ == nullptr; };
      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Result& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // deviceUnionIds Field Functions 
      bool hasDeviceUnionIds() const { return this->deviceUnionIds_ != nullptr;};
      void deleteDeviceUnionIds() { this->deviceUnionIds_ = nullptr;};
      inline const vector<string> & getDeviceUnionIds() const { DARABONBA_PTR_GET_CONST(deviceUnionIds_, vector<string>) };
      inline vector<string> getDeviceUnionIds() { DARABONBA_PTR_GET(deviceUnionIds_, vector<string>) };
      inline Result& setDeviceUnionIds(const vector<string> & deviceUnionIds) { DARABONBA_PTR_SET_VALUE(deviceUnionIds_, deviceUnionIds) };
      inline Result& setDeviceUnionIds(vector<string> && deviceUnionIds) { DARABONBA_PTR_SET_RVALUE(deviceUnionIds_, deviceUnionIds) };


      // enableCycleReservation Field Functions 
      bool hasEnableCycleReservation() const { return this->enableCycleReservation_ != nullptr;};
      void deleteEnableCycleReservation() { this->enableCycleReservation_ = nullptr;};
      inline bool getEnableCycleReservation() const { DARABONBA_PTR_GET_DEFAULT(enableCycleReservation_, false) };
      inline Result& setEnableCycleReservation(bool enableCycleReservation) { DARABONBA_PTR_SET_VALUE(enableCycleReservation_, enableCycleReservation) };


      // isvRoomId Field Functions 
      bool hasIsvRoomId() const { return this->isvRoomId_ != nullptr;};
      void deleteIsvRoomId() { this->isvRoomId_ = nullptr;};
      inline string getIsvRoomId() const { DARABONBA_PTR_GET_DEFAULT(isvRoomId_, "") };
      inline Result& setIsvRoomId(string isvRoomId) { DARABONBA_PTR_SET_VALUE(isvRoomId_, isvRoomId) };


      // reservationAuthority Field Functions 
      bool hasReservationAuthority() const { return this->reservationAuthority_ != nullptr;};
      void deleteReservationAuthority() { this->reservationAuthority_ = nullptr;};
      inline const Result::ReservationAuthority & getReservationAuthority() const { DARABONBA_PTR_GET_CONST(reservationAuthority_, Result::ReservationAuthority) };
      inline Result::ReservationAuthority getReservationAuthority() { DARABONBA_PTR_GET(reservationAuthority_, Result::ReservationAuthority) };
      inline Result& setReservationAuthority(const Result::ReservationAuthority & reservationAuthority) { DARABONBA_PTR_SET_VALUE(reservationAuthority_, reservationAuthority) };
      inline Result& setReservationAuthority(Result::ReservationAuthority && reservationAuthority) { DARABONBA_PTR_SET_RVALUE(reservationAuthority_, reservationAuthority) };


      // roomCapacity Field Functions 
      bool hasRoomCapacity() const { return this->roomCapacity_ != nullptr;};
      void deleteRoomCapacity() { this->roomCapacity_ = nullptr;};
      inline int32_t getRoomCapacity() const { DARABONBA_PTR_GET_DEFAULT(roomCapacity_, 0) };
      inline Result& setRoomCapacity(int32_t roomCapacity) { DARABONBA_PTR_SET_VALUE(roomCapacity_, roomCapacity) };


      // roomGroup Field Functions 
      bool hasRoomGroup() const { return this->roomGroup_ != nullptr;};
      void deleteRoomGroup() { this->roomGroup_ = nullptr;};
      inline const Result::RoomGroup & getRoomGroup() const { DARABONBA_PTR_GET_CONST(roomGroup_, Result::RoomGroup) };
      inline Result::RoomGroup getRoomGroup() { DARABONBA_PTR_GET(roomGroup_, Result::RoomGroup) };
      inline Result& setRoomGroup(const Result::RoomGroup & roomGroup) { DARABONBA_PTR_SET_VALUE(roomGroup_, roomGroup) };
      inline Result& setRoomGroup(Result::RoomGroup && roomGroup) { DARABONBA_PTR_SET_RVALUE(roomGroup_, roomGroup) };


      // roomId Field Functions 
      bool hasRoomId() const { return this->roomId_ != nullptr;};
      void deleteRoomId() { this->roomId_ = nullptr;};
      inline string getRoomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
      inline Result& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


      // roomLabels Field Functions 
      bool hasRoomLabels() const { return this->roomLabels_ != nullptr;};
      void deleteRoomLabels() { this->roomLabels_ = nullptr;};
      inline const vector<Result::RoomLabels> & getRoomLabels() const { DARABONBA_PTR_GET_CONST(roomLabels_, vector<Result::RoomLabels>) };
      inline vector<Result::RoomLabels> getRoomLabels() { DARABONBA_PTR_GET(roomLabels_, vector<Result::RoomLabels>) };
      inline Result& setRoomLabels(const vector<Result::RoomLabels> & roomLabels) { DARABONBA_PTR_SET_VALUE(roomLabels_, roomLabels) };
      inline Result& setRoomLabels(vector<Result::RoomLabels> && roomLabels) { DARABONBA_PTR_SET_RVALUE(roomLabels_, roomLabels) };


      // roomLocation Field Functions 
      bool hasRoomLocation() const { return this->roomLocation_ != nullptr;};
      void deleteRoomLocation() { this->roomLocation_ = nullptr;};
      inline const Result::RoomLocation & getRoomLocation() const { DARABONBA_PTR_GET_CONST(roomLocation_, Result::RoomLocation) };
      inline Result::RoomLocation getRoomLocation() { DARABONBA_PTR_GET(roomLocation_, Result::RoomLocation) };
      inline Result& setRoomLocation(const Result::RoomLocation & roomLocation) { DARABONBA_PTR_SET_VALUE(roomLocation_, roomLocation) };
      inline Result& setRoomLocation(Result::RoomLocation && roomLocation) { DARABONBA_PTR_SET_RVALUE(roomLocation_, roomLocation) };


      // roomName Field Functions 
      bool hasRoomName() const { return this->roomName_ != nullptr;};
      void deleteRoomName() { this->roomName_ = nullptr;};
      inline string getRoomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
      inline Result& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


      // roomPicture Field Functions 
      bool hasRoomPicture() const { return this->roomPicture_ != nullptr;};
      void deleteRoomPicture() { this->roomPicture_ = nullptr;};
      inline string getRoomPicture() const { DARABONBA_PTR_GET_DEFAULT(roomPicture_, "") };
      inline Result& setRoomPicture(string roomPicture) { DARABONBA_PTR_SET_VALUE(roomPicture_, roomPicture) };


      // roomStaffId Field Functions 
      bool hasRoomStaffId() const { return this->roomStaffId_ != nullptr;};
      void deleteRoomStaffId() { this->roomStaffId_ = nullptr;};
      inline string getRoomStaffId() const { DARABONBA_PTR_GET_DEFAULT(roomStaffId_, "") };
      inline Result& setRoomStaffId(string roomStaffId) { DARABONBA_PTR_SET_VALUE(roomStaffId_, roomStaffId) };


      // roomStatus Field Functions 
      bool hasRoomStatus() const { return this->roomStatus_ != nullptr;};
      void deleteRoomStatus() { this->roomStatus_ = nullptr;};
      inline int32_t getRoomStatus() const { DARABONBA_PTR_GET_DEFAULT(roomStatus_, 0) };
      inline Result& setRoomStatus(int32_t roomStatus) { DARABONBA_PTR_SET_VALUE(roomStatus_, roomStatus) };


      // roomUnionId Field Functions 
      bool hasRoomUnionId() const { return this->roomUnionId_ != nullptr;};
      void deleteRoomUnionId() { this->roomUnionId_ = nullptr;};
      inline string getRoomUnionId() const { DARABONBA_PTR_GET_DEFAULT(roomUnionId_, "") };
      inline Result& setRoomUnionId(string roomUnionId) { DARABONBA_PTR_SET_VALUE(roomUnionId_, roomUnionId) };


    protected:
      shared_ptr<string> corpId_ {};
      shared_ptr<vector<string>> deviceUnionIds_ {};
      shared_ptr<bool> enableCycleReservation_ {};
      shared_ptr<string> isvRoomId_ {};
      shared_ptr<Result::ReservationAuthority> reservationAuthority_ {};
      shared_ptr<int32_t> roomCapacity_ {};
      shared_ptr<Result::RoomGroup> roomGroup_ {};
      shared_ptr<string> roomId_ {};
      shared_ptr<vector<Result::RoomLabels>> roomLabels_ {};
      shared_ptr<Result::RoomLocation> roomLocation_ {};
      shared_ptr<string> roomName_ {};
      shared_ptr<string> roomPicture_ {};
      shared_ptr<string> roomStaffId_ {};
      shared_ptr<int32_t> roomStatus_ {};
      shared_ptr<string> roomUnionId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMeetingRoomResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryMeetingRoomResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryMeetingRoomResponseBody::Result) };
    inline QueryMeetingRoomResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryMeetingRoomResponseBody::Result) };
    inline QueryMeetingRoomResponseBody& setResult(const QueryMeetingRoomResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryMeetingRoomResponseBody& setResult(QueryMeetingRoomResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline QueryMeetingRoomResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline QueryMeetingRoomResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<QueryMeetingRoomResponseBody::Result> result_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
