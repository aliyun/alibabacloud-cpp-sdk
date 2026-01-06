// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDINGTALKMEETINGMEMBERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDINGTALKMEETINGMEMBERLISTRESPONSEBODY_HPP_
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
  class GetDingtalkMeetingMemberListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDingtalkMeetingMemberListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDingtalkMeetingMemberListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetDingtalkMeetingMemberListResponseBody() = default ;
    GetDingtalkMeetingMemberListResponseBody(const GetDingtalkMeetingMemberListResponseBody &) = default ;
    GetDingtalkMeetingMemberListResponseBody(GetDingtalkMeetingMemberListResponseBody &&) = default ;
    GetDingtalkMeetingMemberListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDingtalkMeetingMemberListResponseBody() = default ;
    GetDingtalkMeetingMemberListResponseBody& operator=(const GetDingtalkMeetingMemberListResponseBody &) = default ;
    GetDingtalkMeetingMemberListResponseBody& operator=(GetDingtalkMeetingMemberListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(channelName, channelName_);
        DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
        DARABONBA_PTR_TO_JSON(deviceType, deviceType_);
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(joinTime, joinTime_);
        DARABONBA_PTR_TO_JSON(leaveTime, leaveTime_);
        DARABONBA_PTR_TO_JSON(networkQuality, networkQuality_);
        DARABONBA_PTR_TO_JSON(nick, nick_);
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(unionId, unionId_);
        DARABONBA_PTR_TO_JSON(version, version_);
        DARABONBA_PTR_TO_JSON(workNo, workNo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(channelName, channelName_);
        DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
        DARABONBA_PTR_FROM_JSON(deviceType, deviceType_);
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(joinTime, joinTime_);
        DARABONBA_PTR_FROM_JSON(leaveTime, leaveTime_);
        DARABONBA_PTR_FROM_JSON(networkQuality, networkQuality_);
        DARABONBA_PTR_FROM_JSON(nick, nick_);
        DARABONBA_PTR_FROM_JSON(role, role_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(unionId, unionId_);
        DARABONBA_PTR_FROM_JSON(version, version_);
        DARABONBA_PTR_FROM_JSON(workNo, workNo_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channelName_ == nullptr
        && this->conferenceId_ == nullptr && this->deviceType_ == nullptr && this->duration_ == nullptr && this->joinTime_ == nullptr && this->leaveTime_ == nullptr
        && this->networkQuality_ == nullptr && this->nick_ == nullptr && this->role_ == nullptr && this->sessionId_ == nullptr && this->status_ == nullptr
        && this->unionId_ == nullptr && this->version_ == nullptr && this->workNo_ == nullptr; };
      // channelName Field Functions 
      bool hasChannelName() const { return this->channelName_ != nullptr;};
      void deleteChannelName() { this->channelName_ = nullptr;};
      inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
      inline Data& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


      // conferenceId Field Functions 
      bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
      void deleteConferenceId() { this->conferenceId_ = nullptr;};
      inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
      inline Data& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline Data& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Data& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // joinTime Field Functions 
      bool hasJoinTime() const { return this->joinTime_ != nullptr;};
      void deleteJoinTime() { this->joinTime_ = nullptr;};
      inline int64_t getJoinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, 0L) };
      inline Data& setJoinTime(int64_t joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


      // leaveTime Field Functions 
      bool hasLeaveTime() const { return this->leaveTime_ != nullptr;};
      void deleteLeaveTime() { this->leaveTime_ = nullptr;};
      inline int64_t getLeaveTime() const { DARABONBA_PTR_GET_DEFAULT(leaveTime_, 0L) };
      inline Data& setLeaveTime(int64_t leaveTime) { DARABONBA_PTR_SET_VALUE(leaveTime_, leaveTime) };


      // networkQuality Field Functions 
      bool hasNetworkQuality() const { return this->networkQuality_ != nullptr;};
      void deleteNetworkQuality() { this->networkQuality_ = nullptr;};
      inline string getNetworkQuality() const { DARABONBA_PTR_GET_DEFAULT(networkQuality_, "") };
      inline Data& setNetworkQuality(string networkQuality) { DARABONBA_PTR_SET_VALUE(networkQuality_, networkQuality) };


      // nick Field Functions 
      bool hasNick() const { return this->nick_ != nullptr;};
      void deleteNick() { this->nick_ = nullptr;};
      inline string getNick() const { DARABONBA_PTR_GET_DEFAULT(nick_, "") };
      inline Data& setNick(string nick) { DARABONBA_PTR_SET_VALUE(nick_, nick) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Data& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // unionId Field Functions 
      bool hasUnionId() const { return this->unionId_ != nullptr;};
      void deleteUnionId() { this->unionId_ = nullptr;};
      inline string getUnionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
      inline Data& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // workNo Field Functions 
      bool hasWorkNo() const { return this->workNo_ != nullptr;};
      void deleteWorkNo() { this->workNo_ = nullptr;};
      inline string getWorkNo() const { DARABONBA_PTR_GET_DEFAULT(workNo_, "") };
      inline Data& setWorkNo(string workNo) { DARABONBA_PTR_SET_VALUE(workNo_, workNo) };


    protected:
      shared_ptr<string> channelName_ {};
      shared_ptr<string> conferenceId_ {};
      shared_ptr<string> deviceType_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<int64_t> joinTime_ {};
      shared_ptr<int64_t> leaveTime_ {};
      shared_ptr<string> networkQuality_ {};
      shared_ptr<string> nick_ {};
      shared_ptr<string> role_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> unionId_ {};
      shared_ptr<string> version_ {};
      shared_ptr<string> workNo_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetDingtalkMeetingMemberListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetDingtalkMeetingMemberListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetDingtalkMeetingMemberListResponseBody::Data>) };
    inline vector<GetDingtalkMeetingMemberListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetDingtalkMeetingMemberListResponseBody::Data>) };
    inline GetDingtalkMeetingMemberListResponseBody& setData(const vector<GetDingtalkMeetingMemberListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDingtalkMeetingMemberListResponseBody& setData(vector<GetDingtalkMeetingMemberListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDingtalkMeetingMemberListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetDingtalkMeetingMemberListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetDingtalkMeetingMemberListResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetDingtalkMeetingMemberListResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<GetDingtalkMeetingMemberListResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
