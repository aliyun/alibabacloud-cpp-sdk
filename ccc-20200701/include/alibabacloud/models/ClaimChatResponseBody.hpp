// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLAIMCHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLAIMCHATRESPONSEBODY_HPP_
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
  class ClaimChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClaimChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClaimChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClaimChatResponseBody() = default ;
    ClaimChatResponseBody(const ClaimChatResponseBody &) = default ;
    ClaimChatResponseBody(ClaimChatResponseBody &&) = default ;
    ClaimChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClaimChatResponseBody() = default ;
    ClaimChatResponseBody& operator=(const ClaimChatResponseBody &) = default ;
    ClaimChatResponseBody& operator=(ClaimChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ChatContexts, chatContexts_);
        DARABONBA_PTR_TO_JSON(ContextId, contextId_);
        DARABONBA_PTR_TO_JSON(UserContext, userContext_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
          DARABONBA_PTR_TO_JSON(DeviceState, deviceState_);
          DARABONBA_PTR_TO_JSON(Extension, extension_);
          DARABONBA_PTR_TO_JSON(Heartbeat, heartbeat_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(Mobile, mobile_);
          DARABONBA_PTR_TO_JSON(OutboundScenario, outboundScenario_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(SignedSkillGroupIdList, signedSkillGroupIdList_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserState, userState_);
          DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
        };
        friend void from_json(const Darabonba::Json& j, UserContext& obj) { 
          DARABONBA_PTR_FROM_JSON(BreakCode, breakCode_);
          DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
          DARABONBA_PTR_FROM_JSON(DeviceState, deviceState_);
          DARABONBA_PTR_FROM_JSON(Extension, extension_);
          DARABONBA_PTR_FROM_JSON(Heartbeat, heartbeat_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
          DARABONBA_PTR_FROM_JSON(OutboundScenario, outboundScenario_);
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
        virtual bool empty() const override { return this->breakCode_ == nullptr
        && this->deviceId_ == nullptr && this->deviceState_ == nullptr && this->extension_ == nullptr && this->heartbeat_ == nullptr && this->instanceId_ == nullptr
        && this->jobId_ == nullptr && this->mobile_ == nullptr && this->outboundScenario_ == nullptr && this->reserved_ == nullptr && this->signedSkillGroupIdList_ == nullptr
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


        // deviceState Field Functions 
        bool hasDeviceState() const { return this->deviceState_ != nullptr;};
        void deleteDeviceState() { this->deviceState_ = nullptr;};
        inline string getDeviceState() const { DARABONBA_PTR_GET_DEFAULT(deviceState_, "") };
        inline UserContext& setDeviceState(string deviceState) { DARABONBA_PTR_SET_VALUE(deviceState_, deviceState) };


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
        shared_ptr<string> deviceState_ {};
        shared_ptr<string> extension_ {};
        shared_ptr<int64_t> heartbeat_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> jobId_ {};
        shared_ptr<string> mobile_ {};
        shared_ptr<bool> outboundScenario_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<vector<string>> signedSkillGroupIdList_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userState_ {};
        shared_ptr<string> workMode_ {};
      };

      class ChatContexts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChatContexts& obj) { 
          DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
          DARABONBA_PTR_TO_JSON(AccessChannelName, accessChannelName_);
          DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
          DARABONBA_PTR_TO_JSON(BeingAssigned, beingAssigned_);
          DARABONBA_PTR_TO_JSON(CallVariables, callVariables_);
          DARABONBA_PTR_TO_JSON(ChatType, chatType_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
        };
        friend void from_json(const Darabonba::Json& j, ChatContexts& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
          DARABONBA_PTR_FROM_JSON(AccessChannelName, accessChannelName_);
          DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
          DARABONBA_PTR_FROM_JSON(BeingAssigned, beingAssigned_);
          DARABONBA_PTR_FROM_JSON(CallVariables, callVariables_);
          DARABONBA_PTR_FROM_JSON(ChatType, chatType_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
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
        virtual bool empty() const override { return this->accessChannelId_ == nullptr
        && this->accessChannelName_ == nullptr && this->accessChannelType_ == nullptr && this->beingAssigned_ == nullptr && this->callVariables_ == nullptr && this->chatType_ == nullptr
        && this->instanceId_ == nullptr && this->jobId_ == nullptr; };
        // accessChannelId Field Functions 
        bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
        void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
        inline string getAccessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
        inline ChatContexts& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


        // accessChannelName Field Functions 
        bool hasAccessChannelName() const { return this->accessChannelName_ != nullptr;};
        void deleteAccessChannelName() { this->accessChannelName_ = nullptr;};
        inline string getAccessChannelName() const { DARABONBA_PTR_GET_DEFAULT(accessChannelName_, "") };
        inline ChatContexts& setAccessChannelName(string accessChannelName) { DARABONBA_PTR_SET_VALUE(accessChannelName_, accessChannelName) };


        // accessChannelType Field Functions 
        bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
        void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
        inline string getAccessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
        inline ChatContexts& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


        // beingAssigned Field Functions 
        bool hasBeingAssigned() const { return this->beingAssigned_ != nullptr;};
        void deleteBeingAssigned() { this->beingAssigned_ = nullptr;};
        inline bool getBeingAssigned() const { DARABONBA_PTR_GET_DEFAULT(beingAssigned_, false) };
        inline ChatContexts& setBeingAssigned(bool beingAssigned) { DARABONBA_PTR_SET_VALUE(beingAssigned_, beingAssigned) };


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


      protected:
        shared_ptr<string> accessChannelId_ {};
        shared_ptr<string> accessChannelName_ {};
        shared_ptr<string> accessChannelType_ {};
        shared_ptr<bool> beingAssigned_ {};
        shared_ptr<string> callVariables_ {};
        shared_ptr<string> chatType_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> jobId_ {};
      };

      virtual bool empty() const override { return this->chatContexts_ == nullptr
        && this->contextId_ == nullptr && this->userContext_ == nullptr; };
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
    inline ClaimChatResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClaimChatResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClaimChatResponseBody::Data) };
    inline ClaimChatResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClaimChatResponseBody::Data) };
    inline ClaimChatResponseBody& setData(const ClaimChatResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClaimChatResponseBody& setData(ClaimChatResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ClaimChatResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClaimChatResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ClaimChatResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ClaimChatResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClaimChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ClaimChatResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
