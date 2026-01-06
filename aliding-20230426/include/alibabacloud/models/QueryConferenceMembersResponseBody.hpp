// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFERENCEMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFERENCEMEMBERSRESPONSEBODY_HPP_
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
  class QueryConferenceMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConferenceMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(memberModels, memberModels_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConferenceMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(memberModels, memberModels_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    QueryConferenceMembersResponseBody() = default ;
    QueryConferenceMembersResponseBody(const QueryConferenceMembersResponseBody &) = default ;
    QueryConferenceMembersResponseBody(QueryConferenceMembersResponseBody &&) = default ;
    QueryConferenceMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConferenceMembersResponseBody() = default ;
    QueryConferenceMembersResponseBody& operator=(const QueryConferenceMembersResponseBody &) = default ;
    QueryConferenceMembersResponseBody& operator=(QueryConferenceMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MemberModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MemberModels& obj) { 
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
      friend void from_json(const Darabonba::Json& j, MemberModels& obj) { 
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
      MemberModels() = default ;
      MemberModels(const MemberModels &) = default ;
      MemberModels(MemberModels &&) = default ;
      MemberModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MemberModels() = default ;
      MemberModels& operator=(const MemberModels &) = default ;
      MemberModels& operator=(MemberModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attendStatus_ == nullptr
        && this->coHost_ == nullptr && this->conferenceId_ == nullptr && this->duration_ == nullptr && this->host_ == nullptr && this->joinTime_ == nullptr
        && this->leaveTime_ == nullptr && this->outerOrgMember_ == nullptr && this->pstnJoin_ == nullptr && this->userId_ == nullptr && this->userNick_ == nullptr; };
      // attendStatus Field Functions 
      bool hasAttendStatus() const { return this->attendStatus_ != nullptr;};
      void deleteAttendStatus() { this->attendStatus_ = nullptr;};
      inline int32_t getAttendStatus() const { DARABONBA_PTR_GET_DEFAULT(attendStatus_, 0) };
      inline MemberModels& setAttendStatus(int32_t attendStatus) { DARABONBA_PTR_SET_VALUE(attendStatus_, attendStatus) };


      // coHost Field Functions 
      bool hasCoHost() const { return this->coHost_ != nullptr;};
      void deleteCoHost() { this->coHost_ = nullptr;};
      inline bool getCoHost() const { DARABONBA_PTR_GET_DEFAULT(coHost_, false) };
      inline MemberModels& setCoHost(bool coHost) { DARABONBA_PTR_SET_VALUE(coHost_, coHost) };


      // conferenceId Field Functions 
      bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
      void deleteConferenceId() { this->conferenceId_ = nullptr;};
      inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
      inline MemberModels& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline MemberModels& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline bool getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, false) };
      inline MemberModels& setHost(bool host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // joinTime Field Functions 
      bool hasJoinTime() const { return this->joinTime_ != nullptr;};
      void deleteJoinTime() { this->joinTime_ = nullptr;};
      inline int64_t getJoinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, 0L) };
      inline MemberModels& setJoinTime(int64_t joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


      // leaveTime Field Functions 
      bool hasLeaveTime() const { return this->leaveTime_ != nullptr;};
      void deleteLeaveTime() { this->leaveTime_ = nullptr;};
      inline int64_t getLeaveTime() const { DARABONBA_PTR_GET_DEFAULT(leaveTime_, 0L) };
      inline MemberModels& setLeaveTime(int64_t leaveTime) { DARABONBA_PTR_SET_VALUE(leaveTime_, leaveTime) };


      // outerOrgMember Field Functions 
      bool hasOuterOrgMember() const { return this->outerOrgMember_ != nullptr;};
      void deleteOuterOrgMember() { this->outerOrgMember_ = nullptr;};
      inline bool getOuterOrgMember() const { DARABONBA_PTR_GET_DEFAULT(outerOrgMember_, false) };
      inline MemberModels& setOuterOrgMember(bool outerOrgMember) { DARABONBA_PTR_SET_VALUE(outerOrgMember_, outerOrgMember) };


      // pstnJoin Field Functions 
      bool hasPstnJoin() const { return this->pstnJoin_ != nullptr;};
      void deletePstnJoin() { this->pstnJoin_ = nullptr;};
      inline bool getPstnJoin() const { DARABONBA_PTR_GET_DEFAULT(pstnJoin_, false) };
      inline MemberModels& setPstnJoin(bool pstnJoin) { DARABONBA_PTR_SET_VALUE(pstnJoin_, pstnJoin) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline MemberModels& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userNick Field Functions 
      bool hasUserNick() const { return this->userNick_ != nullptr;};
      void deleteUserNick() { this->userNick_ = nullptr;};
      inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
      inline MemberModels& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


    protected:
      shared_ptr<int32_t> attendStatus_ {};
      shared_ptr<bool> coHost_ {};
      shared_ptr<string> conferenceId_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<bool> host_ {};
      shared_ptr<int64_t> joinTime_ {};
      shared_ptr<int64_t> leaveTime_ {};
      shared_ptr<bool> outerOrgMember_ {};
      shared_ptr<bool> pstnJoin_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userNick_ {};
    };

    virtual bool empty() const override { return this->memberModels_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // memberModels Field Functions 
    bool hasMemberModels() const { return this->memberModels_ != nullptr;};
    void deleteMemberModels() { this->memberModels_ = nullptr;};
    inline const vector<QueryConferenceMembersResponseBody::MemberModels> & getMemberModels() const { DARABONBA_PTR_GET_CONST(memberModels_, vector<QueryConferenceMembersResponseBody::MemberModels>) };
    inline vector<QueryConferenceMembersResponseBody::MemberModels> getMemberModels() { DARABONBA_PTR_GET(memberModels_, vector<QueryConferenceMembersResponseBody::MemberModels>) };
    inline QueryConferenceMembersResponseBody& setMemberModels(const vector<QueryConferenceMembersResponseBody::MemberModels> & memberModels) { DARABONBA_PTR_SET_VALUE(memberModels_, memberModels) };
    inline QueryConferenceMembersResponseBody& setMemberModels(vector<QueryConferenceMembersResponseBody::MemberModels> && memberModels) { DARABONBA_PTR_SET_RVALUE(memberModels_, memberModels) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryConferenceMembersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryConferenceMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryConferenceMembersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<QueryConferenceMembersResponseBody::MemberModels>> memberModels_ {};
    shared_ptr<string> nextToken_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
