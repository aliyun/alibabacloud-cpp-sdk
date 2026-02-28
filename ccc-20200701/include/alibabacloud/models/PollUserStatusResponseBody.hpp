// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLLUSERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_POLLUSERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class PollUserStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PollUserStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PollUserStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PollUserStatusResponseBody() = default ;
    PollUserStatusResponseBody(const PollUserStatusResponseBody &) = default ;
    PollUserStatusResponseBody(PollUserStatusResponseBody &&) = default ;
    PollUserStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PollUserStatusResponseBody() = default ;
    PollUserStatusResponseBody& operator=(const PollUserStatusResponseBody &) = default ;
    PollUserStatusResponseBody& operator=(PollUserStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CallContext, callContext_);
        DARABONBA_PTR_TO_JSON(ChatContexts, chatContexts_);
        DARABONBA_PTR_TO_JSON(ContextId, contextId_);
        DARABONBA_PTR_TO_JSON(UserContext, userContext_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CallContext, callContext_);
        DARABONBA_PTR_FROM_JSON(ChatContexts, chatContexts_);
        DARABONBA_PTR_FROM_JSON(ContextId, contextId_);
        DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
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
      class UserContext : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserContext& obj) { 
          DARABONBA_PTR_TO_JSON(BreakCode, breakCode_);
          DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
          DARABONBA_PTR_TO_JSON(Extension, extension_);
          DARABONBA_PTR_TO_JSON(Heartbeat, heartbeat_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(Mobile, mobile_);
          DARABONBA_PTR_TO_JSON(OutboundScenario, outboundScenario_);
          DARABONBA_PTR_TO_JSON(ParallelJobList, parallelJobList_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(SignedSkillGroupIdList, signedSkillGroupIdList_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserState, userState_);
          DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
        };
        friend void from_json(const Darabonba::Json& j, UserContext& obj) { 
          DARABONBA_PTR_FROM_JSON(BreakCode, breakCode_);
          DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
          DARABONBA_PTR_FROM_JSON(Extension, extension_);
          DARABONBA_PTR_FROM_JSON(Heartbeat, heartbeat_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
          DARABONBA_PTR_FROM_JSON(OutboundScenario, outboundScenario_);
          DARABONBA_PTR_FROM_JSON(ParallelJobList, parallelJobList_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(SignedSkillGroupIdList, signedSkillGroupIdList_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserState, userState_);
          DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
        };
        UserContext() = default ;
        UserContext(const UserContext &) = default ;
        UserContext(UserContext &&) = default ;
        UserContext(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserContext() = default ;
        UserContext& operator=(const UserContext &) = default ;
        UserContext& operator=(UserContext &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ParallelJobList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParallelJobList& obj) { 
            DARABONBA_PTR_TO_JSON(JobId, jobId_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          };
          friend void from_json(const Darabonba::Json& j, ParallelJobList& obj) { 
            DARABONBA_PTR_FROM_JSON(JobId, jobId_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          };
          ParallelJobList() = default ;
          ParallelJobList(const ParallelJobList &) = default ;
          ParallelJobList(ParallelJobList &&) = default ;
          ParallelJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParallelJobList() = default ;
          ParallelJobList& operator=(const ParallelJobList &) = default ;
          ParallelJobList& operator=(ParallelJobList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->jobId_ == nullptr
        && this->status_ == nullptr && this->timestamp_ == nullptr; };
          // jobId Field Functions 
          bool hasJobId() const { return this->jobId_ != nullptr;};
          void deleteJobId() { this->jobId_ = nullptr;};
          inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
          inline ParallelJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline ParallelJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
          inline ParallelJobList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        protected:
          shared_ptr<string> jobId_ {};
          shared_ptr<string> status_ {};
          shared_ptr<int64_t> timestamp_ {};
        };

        virtual bool empty() const override { return this->breakCode_ == nullptr
        && this->deviceId_ == nullptr && this->extension_ == nullptr && this->heartbeat_ == nullptr && this->instanceId_ == nullptr && this->jobId_ == nullptr
        && this->mobile_ == nullptr && this->outboundScenario_ == nullptr && this->parallelJobList_ == nullptr && this->reserved_ == nullptr && this->signedSkillGroupIdList_ == nullptr
        && this->userId_ == nullptr && this->userState_ == nullptr && this->workMode_ == nullptr; };
        // breakCode Field Functions 
        bool hasBreakCode() const { return this->breakCode_ != nullptr;};
        void deleteBreakCode() { this->breakCode_ = nullptr;};
        inline string getBreakCode() const { DARABONBA_PTR_GET_DEFAULT(breakCode_, "") };
        inline UserContext& setBreakCode(string breakCode) { DARABONBA_PTR_SET_VALUE(breakCode_, breakCode) };


        // deviceId Field Functions 
        bool hasDeviceId() const { return this->deviceId_ != nullptr;};
        void deleteDeviceId() { this->deviceId_ = nullptr;};
        inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
        inline UserContext& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


        // extension Field Functions 
        bool hasExtension() const { return this->extension_ != nullptr;};
        void deleteExtension() { this->extension_ = nullptr;};
        inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
        inline UserContext& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


        // heartbeat Field Functions 
        bool hasHeartbeat() const { return this->heartbeat_ != nullptr;};
        void deleteHeartbeat() { this->heartbeat_ = nullptr;};
        inline int64_t getHeartbeat() const { DARABONBA_PTR_GET_DEFAULT(heartbeat_, 0L) };
        inline UserContext& setHeartbeat(int64_t heartbeat) { DARABONBA_PTR_SET_VALUE(heartbeat_, heartbeat) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline UserContext& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline UserContext& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // mobile Field Functions 
        bool hasMobile() const { return this->mobile_ != nullptr;};
        void deleteMobile() { this->mobile_ = nullptr;};
        inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
        inline UserContext& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


        // outboundScenario Field Functions 
        bool hasOutboundScenario() const { return this->outboundScenario_ != nullptr;};
        void deleteOutboundScenario() { this->outboundScenario_ = nullptr;};
        inline bool getOutboundScenario() const { DARABONBA_PTR_GET_DEFAULT(outboundScenario_, false) };
        inline UserContext& setOutboundScenario(bool outboundScenario) { DARABONBA_PTR_SET_VALUE(outboundScenario_, outboundScenario) };


        // parallelJobList Field Functions 
        bool hasParallelJobList() const { return this->parallelJobList_ != nullptr;};
        void deleteParallelJobList() { this->parallelJobList_ = nullptr;};
        inline const vector<UserContext::ParallelJobList> & getParallelJobList() const { DARABONBA_PTR_GET_CONST(parallelJobList_, vector<UserContext::ParallelJobList>) };
        inline vector<UserContext::ParallelJobList> getParallelJobList() { DARABONBA_PTR_GET(parallelJobList_, vector<UserContext::ParallelJobList>) };
        inline UserContext& setParallelJobList(const vector<UserContext::ParallelJobList> & parallelJobList) { DARABONBA_PTR_SET_VALUE(parallelJobList_, parallelJobList) };
        inline UserContext& setParallelJobList(vector<UserContext::ParallelJobList> && parallelJobList) { DARABONBA_PTR_SET_RVALUE(parallelJobList_, parallelJobList) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline UserContext& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // signedSkillGroupIdList Field Functions 
        bool hasSignedSkillGroupIdList() const { return this->signedSkillGroupIdList_ != nullptr;};
        void deleteSignedSkillGroupIdList() { this->signedSkillGroupIdList_ = nullptr;};
        inline const vector<string> & getSignedSkillGroupIdList() const { DARABONBA_PTR_GET_CONST(signedSkillGroupIdList_, vector<string>) };
        inline vector<string> getSignedSkillGroupIdList() { DARABONBA_PTR_GET(signedSkillGroupIdList_, vector<string>) };
        inline UserContext& setSignedSkillGroupIdList(const vector<string> & signedSkillGroupIdList) { DARABONBA_PTR_SET_VALUE(signedSkillGroupIdList_, signedSkillGroupIdList) };
        inline UserContext& setSignedSkillGroupIdList(vector<string> && signedSkillGroupIdList) { DARABONBA_PTR_SET_RVALUE(signedSkillGroupIdList_, signedSkillGroupIdList) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserContext& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userState Field Functions 
        bool hasUserState() const { return this->userState_ != nullptr;};
        void deleteUserState() { this->userState_ = nullptr;};
        inline string getUserState() const { DARABONBA_PTR_GET_DEFAULT(userState_, "") };
        inline UserContext& setUserState(string userState) { DARABONBA_PTR_SET_VALUE(userState_, userState) };


        // workMode Field Functions 
        bool hasWorkMode() const { return this->workMode_ != nullptr;};
        void deleteWorkMode() { this->workMode_ = nullptr;};
        inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
        inline UserContext& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


      protected:
        shared_ptr<string> breakCode_ {};
        shared_ptr<string> deviceId_ {};
        shared_ptr<string> extension_ {};
        shared_ptr<int64_t> heartbeat_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> jobId_ {};
        shared_ptr<string> mobile_ {};
        shared_ptr<bool> outboundScenario_ {};
        shared_ptr<vector<UserContext::ParallelJobList>> parallelJobList_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<vector<string>> signedSkillGroupIdList_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userState_ {};
        shared_ptr<string> workMode_ {};
      };

      class ChatContexts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChatContexts& obj) { 
          DARABONBA_PTR_TO_JSON(CallVariables, callVariables_);
          DARABONBA_PTR_TO_JSON(ChatType, chatType_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(Members, members_);
        };
        friend void from_json(const Darabonba::Json& j, ChatContexts& obj) { 
          DARABONBA_PTR_FROM_JSON(CallVariables, callVariables_);
          DARABONBA_PTR_FROM_JSON(ChatType, chatType_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(Members, members_);
        };
        ChatContexts() = default ;
        ChatContexts(const ChatContexts &) = default ;
        ChatContexts(ChatContexts &&) = default ;
        ChatContexts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChatContexts() = default ;
        ChatContexts& operator=(const ChatContexts &) = default ;
        ChatContexts& operator=(ChatContexts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Members : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Members& obj) { 
            DARABONBA_PTR_TO_JSON(Index, index_);
            DARABONBA_PTR_TO_JSON(ReleaseInitiator, releaseInitiator_);
            DARABONBA_PTR_TO_JSON(ReleaseReason, releaseReason_);
            DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(UserId, userId_);
            DARABONBA_PTR_TO_JSON(UserType, userType_);
          };
          friend void from_json(const Darabonba::Json& j, Members& obj) { 
            DARABONBA_PTR_FROM_JSON(Index, index_);
            DARABONBA_PTR_FROM_JSON(ReleaseInitiator, releaseInitiator_);
            DARABONBA_PTR_FROM_JSON(ReleaseReason, releaseReason_);
            DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
            DARABONBA_PTR_FROM_JSON(UserType, userType_);
          };
          Members() = default ;
          Members(const Members &) = default ;
          Members(Members &&) = default ;
          Members(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Members() = default ;
          Members& operator=(const Members &) = default ;
          Members& operator=(Members &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->index_ == nullptr
        && this->releaseInitiator_ == nullptr && this->releaseReason_ == nullptr && this->skillGroupId_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr
        && this->userType_ == nullptr; };
          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
          inline Members& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // releaseInitiator Field Functions 
          bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
          void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
          inline string getReleaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
          inline Members& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


          // releaseReason Field Functions 
          bool hasReleaseReason() const { return this->releaseReason_ != nullptr;};
          void deleteReleaseReason() { this->releaseReason_ = nullptr;};
          inline string getReleaseReason() const { DARABONBA_PTR_GET_DEFAULT(releaseReason_, "") };
          inline Members& setReleaseReason(string releaseReason) { DARABONBA_PTR_SET_VALUE(releaseReason_, releaseReason) };


          // skillGroupId Field Functions 
          bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
          void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
          inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
          inline Members& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Members& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline Members& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // userType Field Functions 
          bool hasUserType() const { return this->userType_ != nullptr;};
          void deleteUserType() { this->userType_ = nullptr;};
          inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
          inline Members& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


        protected:
          shared_ptr<int32_t> index_ {};
          shared_ptr<string> releaseInitiator_ {};
          shared_ptr<string> releaseReason_ {};
          shared_ptr<string> skillGroupId_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> userId_ {};
          shared_ptr<string> userType_ {};
        };

        virtual bool empty() const override { return this->callVariables_ == nullptr
        && this->chatType_ == nullptr && this->instanceId_ == nullptr && this->jobId_ == nullptr && this->members_ == nullptr; };
        // callVariables Field Functions 
        bool hasCallVariables() const { return this->callVariables_ != nullptr;};
        void deleteCallVariables() { this->callVariables_ = nullptr;};
        inline string getCallVariables() const { DARABONBA_PTR_GET_DEFAULT(callVariables_, "") };
        inline ChatContexts& setCallVariables(string callVariables) { DARABONBA_PTR_SET_VALUE(callVariables_, callVariables) };


        // chatType Field Functions 
        bool hasChatType() const { return this->chatType_ != nullptr;};
        void deleteChatType() { this->chatType_ = nullptr;};
        inline string getChatType() const { DARABONBA_PTR_GET_DEFAULT(chatType_, "") };
        inline ChatContexts& setChatType(string chatType) { DARABONBA_PTR_SET_VALUE(chatType_, chatType) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ChatContexts& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline ChatContexts& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // members Field Functions 
        bool hasMembers() const { return this->members_ != nullptr;};
        void deleteMembers() { this->members_ = nullptr;};
        inline const vector<ChatContexts::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<ChatContexts::Members>) };
        inline vector<ChatContexts::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<ChatContexts::Members>) };
        inline ChatContexts& setMembers(const vector<ChatContexts::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
        inline ChatContexts& setMembers(vector<ChatContexts::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


      protected:
        shared_ptr<string> callVariables_ {};
        shared_ptr<string> chatType_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> jobId_ {};
        shared_ptr<vector<ChatContexts::Members>> members_ {};
      };

      class CallContext : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CallContext& obj) { 
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(CallVariables, callVariables_);
          DARABONBA_PTR_TO_JSON(ChannelContexts, channelContexts_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
        };
        friend void from_json(const Darabonba::Json& j, CallContext& obj) { 
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(CallVariables, callVariables_);
          DARABONBA_PTR_FROM_JSON(ChannelContexts, channelContexts_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        };
        CallContext() = default ;
        CallContext(const CallContext &) = default ;
        CallContext(CallContext &&) = default ;
        CallContext(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CallContext() = default ;
        CallContext& operator=(const CallContext &) = default ;
        CallContext& operator=(CallContext &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ChannelContexts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ChannelContexts& obj) { 
            DARABONBA_PTR_TO_JSON(CallType, callType_);
            DARABONBA_PTR_TO_JSON(ChannelFlags, channelFlags_);
            DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
            DARABONBA_PTR_TO_JSON(ChannelState, channelState_);
            DARABONBA_PTR_TO_JSON(ChannelVariables, channelVariables_);
            DARABONBA_PTR_TO_JSON(Destination, destination_);
            DARABONBA_PTR_TO_JSON(Index, index_);
            DARABONBA_PTR_TO_JSON(JobId, jobId_);
            DARABONBA_PTR_TO_JSON(Originator, originator_);
            DARABONBA_PTR_TO_JSON(ReleaseInitiator, releaseInitiator_);
            DARABONBA_PTR_TO_JSON(ReleaseReason, releaseReason_);
            DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_TO_JSON(UserExtension, userExtension_);
            DARABONBA_PTR_TO_JSON(UserId, userId_);
          };
          friend void from_json(const Darabonba::Json& j, ChannelContexts& obj) { 
            DARABONBA_PTR_FROM_JSON(CallType, callType_);
            DARABONBA_PTR_FROM_JSON(ChannelFlags, channelFlags_);
            DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
            DARABONBA_PTR_FROM_JSON(ChannelState, channelState_);
            DARABONBA_PTR_FROM_JSON(ChannelVariables, channelVariables_);
            DARABONBA_PTR_FROM_JSON(Destination, destination_);
            DARABONBA_PTR_FROM_JSON(Index, index_);
            DARABONBA_PTR_FROM_JSON(JobId, jobId_);
            DARABONBA_PTR_FROM_JSON(Originator, originator_);
            DARABONBA_PTR_FROM_JSON(ReleaseInitiator, releaseInitiator_);
            DARABONBA_PTR_FROM_JSON(ReleaseReason, releaseReason_);
            DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
            DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_FROM_JSON(UserExtension, userExtension_);
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
          };
          ChannelContexts() = default ;
          ChannelContexts(const ChannelContexts &) = default ;
          ChannelContexts(ChannelContexts &&) = default ;
          ChannelContexts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ChannelContexts() = default ;
          ChannelContexts& operator=(const ChannelContexts &) = default ;
          ChannelContexts& operator=(ChannelContexts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->callType_ == nullptr
        && this->channelFlags_ == nullptr && this->channelId_ == nullptr && this->channelState_ == nullptr && this->channelVariables_ == nullptr && this->destination_ == nullptr
        && this->index_ == nullptr && this->jobId_ == nullptr && this->originator_ == nullptr && this->releaseInitiator_ == nullptr && this->releaseReason_ == nullptr
        && this->skillGroupId_ == nullptr && this->timestamp_ == nullptr && this->userExtension_ == nullptr && this->userId_ == nullptr; };
          // callType Field Functions 
          bool hasCallType() const { return this->callType_ != nullptr;};
          void deleteCallType() { this->callType_ = nullptr;};
          inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
          inline ChannelContexts& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


          // channelFlags Field Functions 
          bool hasChannelFlags() const { return this->channelFlags_ != nullptr;};
          void deleteChannelFlags() { this->channelFlags_ = nullptr;};
          inline string getChannelFlags() const { DARABONBA_PTR_GET_DEFAULT(channelFlags_, "") };
          inline ChannelContexts& setChannelFlags(string channelFlags) { DARABONBA_PTR_SET_VALUE(channelFlags_, channelFlags) };


          // channelId Field Functions 
          bool hasChannelId() const { return this->channelId_ != nullptr;};
          void deleteChannelId() { this->channelId_ = nullptr;};
          inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
          inline ChannelContexts& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


          // channelState Field Functions 
          bool hasChannelState() const { return this->channelState_ != nullptr;};
          void deleteChannelState() { this->channelState_ = nullptr;};
          inline string getChannelState() const { DARABONBA_PTR_GET_DEFAULT(channelState_, "") };
          inline ChannelContexts& setChannelState(string channelState) { DARABONBA_PTR_SET_VALUE(channelState_, channelState) };


          // channelVariables Field Functions 
          bool hasChannelVariables() const { return this->channelVariables_ != nullptr;};
          void deleteChannelVariables() { this->channelVariables_ = nullptr;};
          inline string getChannelVariables() const { DARABONBA_PTR_GET_DEFAULT(channelVariables_, "") };
          inline ChannelContexts& setChannelVariables(string channelVariables) { DARABONBA_PTR_SET_VALUE(channelVariables_, channelVariables) };


          // destination Field Functions 
          bool hasDestination() const { return this->destination_ != nullptr;};
          void deleteDestination() { this->destination_ = nullptr;};
          inline string getDestination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
          inline ChannelContexts& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
          inline ChannelContexts& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // jobId Field Functions 
          bool hasJobId() const { return this->jobId_ != nullptr;};
          void deleteJobId() { this->jobId_ = nullptr;};
          inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
          inline ChannelContexts& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


          // originator Field Functions 
          bool hasOriginator() const { return this->originator_ != nullptr;};
          void deleteOriginator() { this->originator_ = nullptr;};
          inline string getOriginator() const { DARABONBA_PTR_GET_DEFAULT(originator_, "") };
          inline ChannelContexts& setOriginator(string originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };


          // releaseInitiator Field Functions 
          bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
          void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
          inline string getReleaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
          inline ChannelContexts& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


          // releaseReason Field Functions 
          bool hasReleaseReason() const { return this->releaseReason_ != nullptr;};
          void deleteReleaseReason() { this->releaseReason_ = nullptr;};
          inline string getReleaseReason() const { DARABONBA_PTR_GET_DEFAULT(releaseReason_, "") };
          inline ChannelContexts& setReleaseReason(string releaseReason) { DARABONBA_PTR_SET_VALUE(releaseReason_, releaseReason) };


          // skillGroupId Field Functions 
          bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
          void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
          inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
          inline ChannelContexts& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
          inline ChannelContexts& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


          // userExtension Field Functions 
          bool hasUserExtension() const { return this->userExtension_ != nullptr;};
          void deleteUserExtension() { this->userExtension_ = nullptr;};
          inline string getUserExtension() const { DARABONBA_PTR_GET_DEFAULT(userExtension_, "") };
          inline ChannelContexts& setUserExtension(string userExtension) { DARABONBA_PTR_SET_VALUE(userExtension_, userExtension) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline ChannelContexts& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          shared_ptr<string> callType_ {};
          shared_ptr<string> channelFlags_ {};
          shared_ptr<string> channelId_ {};
          shared_ptr<string> channelState_ {};
          shared_ptr<string> channelVariables_ {};
          shared_ptr<string> destination_ {};
          shared_ptr<int32_t> index_ {};
          shared_ptr<string> jobId_ {};
          shared_ptr<string> originator_ {};
          shared_ptr<string> releaseInitiator_ {};
          shared_ptr<string> releaseReason_ {};
          shared_ptr<string> skillGroupId_ {};
          shared_ptr<int64_t> timestamp_ {};
          shared_ptr<string> userExtension_ {};
          shared_ptr<string> userId_ {};
        };

        virtual bool empty() const override { return this->callType_ == nullptr
        && this->callVariables_ == nullptr && this->channelContexts_ == nullptr && this->instanceId_ == nullptr && this->jobId_ == nullptr; };
        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
        inline CallContext& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // callVariables Field Functions 
        bool hasCallVariables() const { return this->callVariables_ != nullptr;};
        void deleteCallVariables() { this->callVariables_ = nullptr;};
        inline string getCallVariables() const { DARABONBA_PTR_GET_DEFAULT(callVariables_, "") };
        inline CallContext& setCallVariables(string callVariables) { DARABONBA_PTR_SET_VALUE(callVariables_, callVariables) };


        // channelContexts Field Functions 
        bool hasChannelContexts() const { return this->channelContexts_ != nullptr;};
        void deleteChannelContexts() { this->channelContexts_ = nullptr;};
        inline const vector<CallContext::ChannelContexts> & getChannelContexts() const { DARABONBA_PTR_GET_CONST(channelContexts_, vector<CallContext::ChannelContexts>) };
        inline vector<CallContext::ChannelContexts> getChannelContexts() { DARABONBA_PTR_GET(channelContexts_, vector<CallContext::ChannelContexts>) };
        inline CallContext& setChannelContexts(const vector<CallContext::ChannelContexts> & channelContexts) { DARABONBA_PTR_SET_VALUE(channelContexts_, channelContexts) };
        inline CallContext& setChannelContexts(vector<CallContext::ChannelContexts> && channelContexts) { DARABONBA_PTR_SET_RVALUE(channelContexts_, channelContexts) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline CallContext& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline CallContext& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      protected:
        shared_ptr<string> callType_ {};
        shared_ptr<string> callVariables_ {};
        shared_ptr<vector<CallContext::ChannelContexts>> channelContexts_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> jobId_ {};
      };

      virtual bool empty() const override { return this->callContext_ == nullptr
        && this->chatContexts_ == nullptr && this->contextId_ == nullptr && this->userContext_ == nullptr; };
      // callContext Field Functions 
      bool hasCallContext() const { return this->callContext_ != nullptr;};
      void deleteCallContext() { this->callContext_ = nullptr;};
      inline const Data::CallContext & getCallContext() const { DARABONBA_PTR_GET_CONST(callContext_, Data::CallContext) };
      inline Data::CallContext getCallContext() { DARABONBA_PTR_GET(callContext_, Data::CallContext) };
      inline Data& setCallContext(const Data::CallContext & callContext) { DARABONBA_PTR_SET_VALUE(callContext_, callContext) };
      inline Data& setCallContext(Data::CallContext && callContext) { DARABONBA_PTR_SET_RVALUE(callContext_, callContext) };


      // chatContexts Field Functions 
      bool hasChatContexts() const { return this->chatContexts_ != nullptr;};
      void deleteChatContexts() { this->chatContexts_ = nullptr;};
      inline const vector<Data::ChatContexts> & getChatContexts() const { DARABONBA_PTR_GET_CONST(chatContexts_, vector<Data::ChatContexts>) };
      inline vector<Data::ChatContexts> getChatContexts() { DARABONBA_PTR_GET(chatContexts_, vector<Data::ChatContexts>) };
      inline Data& setChatContexts(const vector<Data::ChatContexts> & chatContexts) { DARABONBA_PTR_SET_VALUE(chatContexts_, chatContexts) };
      inline Data& setChatContexts(vector<Data::ChatContexts> && chatContexts) { DARABONBA_PTR_SET_RVALUE(chatContexts_, chatContexts) };


      // contextId Field Functions 
      bool hasContextId() const { return this->contextId_ != nullptr;};
      void deleteContextId() { this->contextId_ = nullptr;};
      inline int64_t getContextId() const { DARABONBA_PTR_GET_DEFAULT(contextId_, 0L) };
      inline Data& setContextId(int64_t contextId) { DARABONBA_PTR_SET_VALUE(contextId_, contextId) };


      // userContext Field Functions 
      bool hasUserContext() const { return this->userContext_ != nullptr;};
      void deleteUserContext() { this->userContext_ = nullptr;};
      inline const Data::UserContext & getUserContext() const { DARABONBA_PTR_GET_CONST(userContext_, Data::UserContext) };
      inline Data::UserContext getUserContext() { DARABONBA_PTR_GET(userContext_, Data::UserContext) };
      inline Data& setUserContext(const Data::UserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
      inline Data& setUserContext(Data::UserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


    protected:
      shared_ptr<Data::CallContext> callContext_ {};
      shared_ptr<vector<Data::ChatContexts>> chatContexts_ {};
      shared_ptr<int64_t> contextId_ {};
      shared_ptr<Data::UserContext> userContext_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PollUserStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PollUserStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PollUserStatusResponseBody::Data) };
    inline PollUserStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PollUserStatusResponseBody::Data) };
    inline PollUserStatusResponseBody& setData(const PollUserStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PollUserStatusResponseBody& setData(PollUserStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline PollUserStatusResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PollUserStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline PollUserStatusResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline PollUserStatusResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PollUserStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<PollUserStatusResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
