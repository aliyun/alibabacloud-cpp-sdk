// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFERENCEMEMBERSRESPONSEBODYMEMBERMODELS_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFERENCEMEMBERSRESPONSEBODYMEMBERMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryConferenceMembersResponseBodyMemberModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConferenceMembersResponseBodyMemberModels& obj) { 
      DARABONBA_PTR_TO_JSON(AttendStatus, attendStatus_);
      DARABONBA_PTR_TO_JSON(CoHost, coHost_);
      DARABONBA_PTR_TO_JSON(ConferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(JoinTime, joinTime_);
      DARABONBA_PTR_TO_JSON(LeaveTime, leaveTime_);
      DARABONBA_PTR_TO_JSON(OuterOrgMember, outerOrgMember_);
      DARABONBA_PTR_TO_JSON(PstnJoin, pstnJoin_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserNick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConferenceMembersResponseBodyMemberModels& obj) { 
      DARABONBA_PTR_FROM_JSON(AttendStatus, attendStatus_);
      DARABONBA_PTR_FROM_JSON(CoHost, coHost_);
      DARABONBA_PTR_FROM_JSON(ConferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(JoinTime, joinTime_);
      DARABONBA_PTR_FROM_JSON(LeaveTime, leaveTime_);
      DARABONBA_PTR_FROM_JSON(OuterOrgMember, outerOrgMember_);
      DARABONBA_PTR_FROM_JSON(PstnJoin, pstnJoin_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
    };
    QueryConferenceMembersResponseBodyMemberModels() = default ;
    QueryConferenceMembersResponseBodyMemberModels(const QueryConferenceMembersResponseBodyMemberModels &) = default ;
    QueryConferenceMembersResponseBodyMemberModels(QueryConferenceMembersResponseBodyMemberModels &&) = default ;
    QueryConferenceMembersResponseBodyMemberModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConferenceMembersResponseBodyMemberModels() = default ;
    QueryConferenceMembersResponseBodyMemberModels& operator=(const QueryConferenceMembersResponseBodyMemberModels &) = default ;
    QueryConferenceMembersResponseBodyMemberModels& operator=(QueryConferenceMembersResponseBodyMemberModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attendStatus_ == nullptr
        && return this->coHost_ == nullptr && return this->conferenceId_ == nullptr && return this->duration_ == nullptr && return this->host_ == nullptr && return this->joinTime_ == nullptr
        && return this->leaveTime_ == nullptr && return this->outerOrgMember_ == nullptr && return this->pstnJoin_ == nullptr && return this->userId_ == nullptr && return this->userNick_ == nullptr; };
    // attendStatus Field Functions 
    bool hasAttendStatus() const { return this->attendStatus_ != nullptr;};
    void deleteAttendStatus() { this->attendStatus_ = nullptr;};
    inline int32_t attendStatus() const { DARABONBA_PTR_GET_DEFAULT(attendStatus_, 0) };
    inline QueryConferenceMembersResponseBodyMemberModels& setAttendStatus(int32_t attendStatus) { DARABONBA_PTR_SET_VALUE(attendStatus_, attendStatus) };


    // coHost Field Functions 
    bool hasCoHost() const { return this->coHost_ != nullptr;};
    void deleteCoHost() { this->coHost_ = nullptr;};
    inline bool coHost() const { DARABONBA_PTR_GET_DEFAULT(coHost_, false) };
    inline QueryConferenceMembersResponseBodyMemberModels& setCoHost(bool coHost) { DARABONBA_PTR_SET_VALUE(coHost_, coHost) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline QueryConferenceMembersResponseBodyMemberModels& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline QueryConferenceMembersResponseBodyMemberModels& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline bool host() const { DARABONBA_PTR_GET_DEFAULT(host_, false) };
    inline QueryConferenceMembersResponseBodyMemberModels& setHost(bool host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // joinTime Field Functions 
    bool hasJoinTime() const { return this->joinTime_ != nullptr;};
    void deleteJoinTime() { this->joinTime_ = nullptr;};
    inline int64_t joinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, 0L) };
    inline QueryConferenceMembersResponseBodyMemberModels& setJoinTime(int64_t joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


    // leaveTime Field Functions 
    bool hasLeaveTime() const { return this->leaveTime_ != nullptr;};
    void deleteLeaveTime() { this->leaveTime_ = nullptr;};
    inline int64_t leaveTime() const { DARABONBA_PTR_GET_DEFAULT(leaveTime_, 0L) };
    inline QueryConferenceMembersResponseBodyMemberModels& setLeaveTime(int64_t leaveTime) { DARABONBA_PTR_SET_VALUE(leaveTime_, leaveTime) };


    // outerOrgMember Field Functions 
    bool hasOuterOrgMember() const { return this->outerOrgMember_ != nullptr;};
    void deleteOuterOrgMember() { this->outerOrgMember_ = nullptr;};
    inline bool outerOrgMember() const { DARABONBA_PTR_GET_DEFAULT(outerOrgMember_, false) };
    inline QueryConferenceMembersResponseBodyMemberModels& setOuterOrgMember(bool outerOrgMember) { DARABONBA_PTR_SET_VALUE(outerOrgMember_, outerOrgMember) };


    // pstnJoin Field Functions 
    bool hasPstnJoin() const { return this->pstnJoin_ != nullptr;};
    void deletePstnJoin() { this->pstnJoin_ = nullptr;};
    inline bool pstnJoin() const { DARABONBA_PTR_GET_DEFAULT(pstnJoin_, false) };
    inline QueryConferenceMembersResponseBodyMemberModels& setPstnJoin(bool pstnJoin) { DARABONBA_PTR_SET_VALUE(pstnJoin_, pstnJoin) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryConferenceMembersResponseBodyMemberModels& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline QueryConferenceMembersResponseBodyMemberModels& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    std::shared_ptr<int32_t> attendStatus_ = nullptr;
    std::shared_ptr<bool> coHost_ = nullptr;
    std::shared_ptr<string> conferenceId_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<bool> host_ = nullptr;
    std::shared_ptr<int64_t> joinTime_ = nullptr;
    std::shared_ptr<int64_t> leaveTime_ = nullptr;
    std::shared_ptr<bool> outerOrgMember_ = nullptr;
    std::shared_ptr<bool> pstnJoin_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userNick_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
