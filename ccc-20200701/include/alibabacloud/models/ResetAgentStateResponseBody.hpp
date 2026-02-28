// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETAGENTSTATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESETAGENTSTATERESPONSEBODY_HPP_
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
  class ResetAgentStateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetAgentStateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetAgentStateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ResetAgentStateResponseBody() = default ;
    ResetAgentStateResponseBody(const ResetAgentStateResponseBody &) = default ;
    ResetAgentStateResponseBody(ResetAgentStateResponseBody &&) = default ;
    ResetAgentStateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetAgentStateResponseBody() = default ;
    ResetAgentStateResponseBody& operator=(const ResetAgentStateResponseBody &) = default ;
    ResetAgentStateResponseBody& operator=(ResetAgentStateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BreakCode, breakCode_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(OutboundScenario, outboundScenario_);
        DARABONBA_PTR_TO_JSON(SignedSkillGroupIdList, signedSkillGroupIdList_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserState, userState_);
        DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BreakCode, breakCode_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(OutboundScenario, outboundScenario_);
        DARABONBA_PTR_FROM_JSON(SignedSkillGroupIdList, signedSkillGroupIdList_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserState, userState_);
        DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
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
      virtual bool empty() const override { return this->breakCode_ == nullptr
        && this->deviceId_ == nullptr && this->extension_ == nullptr && this->instanceId_ == nullptr && this->jobId_ == nullptr && this->outboundScenario_ == nullptr
        && this->signedSkillGroupIdList_ == nullptr && this->userId_ == nullptr && this->userState_ == nullptr && this->workMode_ == nullptr; };
      // breakCode Field Functions 
      bool hasBreakCode() const { return this->breakCode_ != nullptr;};
      void deleteBreakCode() { this->breakCode_ = nullptr;};
      inline string getBreakCode() const { DARABONBA_PTR_GET_DEFAULT(breakCode_, "") };
      inline Data& setBreakCode(string breakCode) { DARABONBA_PTR_SET_VALUE(breakCode_, breakCode) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Data& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
      inline Data& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // outboundScenario Field Functions 
      bool hasOutboundScenario() const { return this->outboundScenario_ != nullptr;};
      void deleteOutboundScenario() { this->outboundScenario_ = nullptr;};
      inline bool getOutboundScenario() const { DARABONBA_PTR_GET_DEFAULT(outboundScenario_, false) };
      inline Data& setOutboundScenario(bool outboundScenario) { DARABONBA_PTR_SET_VALUE(outboundScenario_, outboundScenario) };


      // signedSkillGroupIdList Field Functions 
      bool hasSignedSkillGroupIdList() const { return this->signedSkillGroupIdList_ != nullptr;};
      void deleteSignedSkillGroupIdList() { this->signedSkillGroupIdList_ = nullptr;};
      inline const vector<string> & getSignedSkillGroupIdList() const { DARABONBA_PTR_GET_CONST(signedSkillGroupIdList_, vector<string>) };
      inline vector<string> getSignedSkillGroupIdList() { DARABONBA_PTR_GET(signedSkillGroupIdList_, vector<string>) };
      inline Data& setSignedSkillGroupIdList(const vector<string> & signedSkillGroupIdList) { DARABONBA_PTR_SET_VALUE(signedSkillGroupIdList_, signedSkillGroupIdList) };
      inline Data& setSignedSkillGroupIdList(vector<string> && signedSkillGroupIdList) { DARABONBA_PTR_SET_RVALUE(signedSkillGroupIdList_, signedSkillGroupIdList) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userState Field Functions 
      bool hasUserState() const { return this->userState_ != nullptr;};
      void deleteUserState() { this->userState_ = nullptr;};
      inline string getUserState() const { DARABONBA_PTR_GET_DEFAULT(userState_, "") };
      inline Data& setUserState(string userState) { DARABONBA_PTR_SET_VALUE(userState_, userState) };


      // workMode Field Functions 
      bool hasWorkMode() const { return this->workMode_ != nullptr;};
      void deleteWorkMode() { this->workMode_ = nullptr;};
      inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
      inline Data& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


    protected:
      shared_ptr<string> breakCode_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> extension_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<bool> outboundScenario_ {};
      shared_ptr<vector<string>> signedSkillGroupIdList_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userState_ {};
      shared_ptr<string> workMode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ResetAgentStateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ResetAgentStateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResetAgentStateResponseBody::Data) };
    inline ResetAgentStateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ResetAgentStateResponseBody::Data) };
    inline ResetAgentStateResponseBody& setData(const ResetAgentStateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ResetAgentStateResponseBody& setData(ResetAgentStateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ResetAgentStateResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ResetAgentStateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ResetAgentStateResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ResetAgentStateResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResetAgentStateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ResetAgentStateResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
