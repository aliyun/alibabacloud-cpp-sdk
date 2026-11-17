// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRIALACCESSCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRIALACCESSCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class GetTrialAccessChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrialAccessChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrialAccessChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTrialAccessChannelResponseBody() = default ;
    GetTrialAccessChannelResponseBody(const GetTrialAccessChannelResponseBody &) = default ;
    GetTrialAccessChannelResponseBody(GetTrialAccessChannelResponseBody &&) = default ;
    GetTrialAccessChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrialAccessChannelResponseBody() = default ;
    GetTrialAccessChannelResponseBody& operator=(const GetTrialAccessChannelResponseBody &) = default ;
    GetTrialAccessChannelResponseBody& operator=(GetTrialAccessChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
        DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
        DARABONBA_PTR_TO_JSON(BuilderType, builderType_);
        DARABONBA_PTR_TO_JSON(ChannelScripts, channelScripts_);
        DARABONBA_PTR_TO_JSON(ChannelSetting, channelSetting_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NluEngine, nluEngine_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_TO_JSON(VisitorToken, visitorToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
        DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
        DARABONBA_PTR_FROM_JSON(BuilderType, builderType_);
        DARABONBA_PTR_FROM_JSON(ChannelScripts, channelScripts_);
        DARABONBA_PTR_FROM_JSON(ChannelSetting, channelSetting_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NluEngine, nluEngine_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_FROM_JSON(VisitorToken, visitorToken_);
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
      class ChannelScripts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChannelScripts& obj) { 
          DARABONBA_PTR_TO_JSON(LabelConfigs, labelConfigs_);
          DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
          DARABONBA_PTR_TO_JSON(VariableConfigs, variableConfigs_);
        };
        friend void from_json(const Darabonba::Json& j, ChannelScripts& obj) { 
          DARABONBA_PTR_FROM_JSON(LabelConfigs, labelConfigs_);
          DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
          DARABONBA_PTR_FROM_JSON(VariableConfigs, variableConfigs_);
        };
        ChannelScripts() = default ;
        ChannelScripts(const ChannelScripts &) = default ;
        ChannelScripts(ChannelScripts &&) = default ;
        ChannelScripts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChannelScripts() = default ;
        ChannelScripts& operator=(const ChannelScripts &) = default ;
        ChannelScripts& operator=(ChannelScripts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->labelConfigs_ == nullptr
        && this->scriptId_ == nullptr && this->scriptName_ == nullptr && this->variableConfigs_ == nullptr; };
        // labelConfigs Field Functions 
        bool hasLabelConfigs() const { return this->labelConfigs_ != nullptr;};
        void deleteLabelConfigs() { this->labelConfigs_ = nullptr;};
        inline string getLabelConfigs() const { DARABONBA_PTR_GET_DEFAULT(labelConfigs_, "") };
        inline ChannelScripts& setLabelConfigs(string labelConfigs) { DARABONBA_PTR_SET_VALUE(labelConfigs_, labelConfigs) };


        // scriptId Field Functions 
        bool hasScriptId() const { return this->scriptId_ != nullptr;};
        void deleteScriptId() { this->scriptId_ = nullptr;};
        inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
        inline ChannelScripts& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


        // scriptName Field Functions 
        bool hasScriptName() const { return this->scriptName_ != nullptr;};
        void deleteScriptName() { this->scriptName_ = nullptr;};
        inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
        inline ChannelScripts& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


        // variableConfigs Field Functions 
        bool hasVariableConfigs() const { return this->variableConfigs_ != nullptr;};
        void deleteVariableConfigs() { this->variableConfigs_ = nullptr;};
        inline string getVariableConfigs() const { DARABONBA_PTR_GET_DEFAULT(variableConfigs_, "") };
        inline ChannelScripts& setVariableConfigs(string variableConfigs) { DARABONBA_PTR_SET_VALUE(variableConfigs_, variableConfigs) };


      protected:
        // The JSON string of the label configuration exported from the scenario version. The specific fields are determined by the scenario version. The empty JSON array in the example only indicates that there are no configuration items and must not be confused with the call parameter Tags.
        shared_ptr<string> labelConfigs_ {};
        // The ID of the dialog scenario under the instance. Specify an existing scenario. Subsequent dialogs and end requests for the same text session should use the scenario specified when the session is started.
        shared_ptr<string> scriptId_ {};
        // The name of the scenario associated with the channel, used for display on the trial page. Use the actual value returned by the service.
        shared_ptr<string> scriptName_ {};
        // The JSON string of the variable configuration exported from the scenario version. It is not the variable values passed in this interaction. The specific configuration items are determined by the scenario version. The empty JSON array in the example only indicates that there are no configuration items and does not declare unverified internal fields.
        shared_ptr<string> variableConfigs_ {};
      };

      virtual bool empty() const override { return this->accessChannelId_ == nullptr
        && this->accessChannelType_ == nullptr && this->builderType_ == nullptr && this->channelScripts_ == nullptr && this->channelSetting_ == nullptr && this->createdTime_ == nullptr
        && this->expirationTime_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->nluEngine_ == nullptr && this->state_ == nullptr
        && this->updatedTime_ == nullptr && this->visitorToken_ == nullptr; };
      // accessChannelId Field Functions 
      bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
      void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
      inline string getAccessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
      inline Data& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


      // accessChannelType Field Functions 
      bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
      void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
      inline string getAccessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
      inline Data& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


      // builderType Field Functions 
      bool hasBuilderType() const { return this->builderType_ != nullptr;};
      void deleteBuilderType() { this->builderType_ = nullptr;};
      inline string getBuilderType() const { DARABONBA_PTR_GET_DEFAULT(builderType_, "") };
      inline Data& setBuilderType(string builderType) { DARABONBA_PTR_SET_VALUE(builderType_, builderType) };


      // channelScripts Field Functions 
      bool hasChannelScripts() const { return this->channelScripts_ != nullptr;};
      void deleteChannelScripts() { this->channelScripts_ = nullptr;};
      inline const vector<Data::ChannelScripts> & getChannelScripts() const { DARABONBA_PTR_GET_CONST(channelScripts_, vector<Data::ChannelScripts>) };
      inline vector<Data::ChannelScripts> getChannelScripts() { DARABONBA_PTR_GET(channelScripts_, vector<Data::ChannelScripts>) };
      inline Data& setChannelScripts(const vector<Data::ChannelScripts> & channelScripts) { DARABONBA_PTR_SET_VALUE(channelScripts_, channelScripts) };
      inline Data& setChannelScripts(vector<Data::ChannelScripts> && channelScripts) { DARABONBA_PTR_SET_RVALUE(channelScripts_, channelScripts) };


      // channelSetting Field Functions 
      bool hasChannelSetting() const { return this->channelSetting_ != nullptr;};
      void deleteChannelSetting() { this->channelSetting_ = nullptr;};
      inline string getChannelSetting() const { DARABONBA_PTR_GET_DEFAULT(channelSetting_, "") };
      inline Data& setChannelSetting(string channelSetting) { DARABONBA_PTR_SET_VALUE(channelSetting_, channelSetting) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline Data& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
      inline Data& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nluEngine Field Functions 
      bool hasNluEngine() const { return this->nluEngine_ != nullptr;};
      void deleteNluEngine() { this->nluEngine_ = nullptr;};
      inline string getNluEngine() const { DARABONBA_PTR_GET_DEFAULT(nluEngine_, "") };
      inline Data& setNluEngine(string nluEngine) { DARABONBA_PTR_SET_VALUE(nluEngine_, nluEngine) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline Data& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      // visitorToken Field Functions 
      bool hasVisitorToken() const { return this->visitorToken_ != nullptr;};
      void deleteVisitorToken() { this->visitorToken_ = nullptr;};
      inline string getVisitorToken() const { DARABONBA_PTR_GET_DEFAULT(visitorToken_, "") };
      inline Data& setVisitorToken(string visitorToken) { DARABONBA_PTR_SET_VALUE(visitorToken_, visitorToken) };


    protected:
      // The ID of the channel associated with the trial link or specific access configuration. When a channel needs to be associated, use the ID actually returned by the channel service. It is not the ChannelId returned by a call, and the two must not be mixed. The configuration layer uses a UUID as the channel ID when creating a new channel.
      shared_ptr<string> accessChannelId_ {};
      // Identifies the access source of the current interaction. The configuration layer enumerations are TEST (voice test window or real number outbound call test), TEXT_TEST (text test window), TRIAL (web voice trial link), and TEXT_TRIAL (text trial link). The existing default values and visibility of each API remain unchanged. If the current definition uses the historical value Text, it should be processed according to the existing definition and is not modified in this documentation update.
      shared_ptr<string> accessChannelType_ {};
      // The scenario building method. The configuration layer enumerations are FLOW and LITE. This field is not declared in the current business layer channel response object. Therefore, whether it is actually returned depends on the deployment version.
      shared_ptr<string> builderType_ {};
      // The scenarios associated with this channel and their display, variable, and label configurations. The trial page should use the ScriptId actually returned in the list and must not specify scenarios outside the channel.
      shared_ptr<vector<Data::ChannelScripts>> channelScripts_ {};
      // The display configuration of the trial channel, which is a JSON object string. The content is configured during channel creation and agreed upon with the trial page, and may include display information such as Images. The current code does not provide a complete fixed structure, and the empty object in the example only illustrates the serialization format.
      shared_ptr<string> channelSetting_ {};
      // The creation time of the channel, in Unix timestamp format and measured in milliseconds. It is converted from the creation time of the configuration layer entity.
      shared_ptr<int64_t> createdTime_ {};
      // The expiration time of the trial channel and the visitor token, in Unix timestamp format and measured in milliseconds. The service compares the validity period with the current system time in milliseconds. Expired tokens cannot continue the trial.
      shared_ptr<int64_t> expirationTime_ {};
      // The instance identity of the product to which it belongs. You must use an instance that the invoker has permission to access and that actually exists. It must be consistent with the instance to which the scenario, channel, and session belong. The maximum length is subject to the current POP parameter definition.
      shared_ptr<string> instanceId_ {};
      // The name of the trial channel, used for display and identification on the trial page. The content is configured by the channel creator.
      shared_ptr<string> name_ {};
      // The natural language understanding (NLU) engine type defined in the configuration layer. Valid values: BEEBOT, PROMPTS, and FUNCTION. This field is not declared in the current business layer channel response object. Therefore, whether it can be returned through this operation depends on the deployment version and must not be assumed to always exist on the client.
      shared_ptr<string> nluEngine_ {};
      // The channel status. Valid values: Active (effective) and Expired (invalid). Trial access still requires server-side token and validity period verification. You cannot bypass the verification based solely on the status value saved on the client.
      shared_ptr<string> state_ {};
      // The last update time of the channel, in Unix timestamp format and measured in milliseconds. It is converted from the update time of the configuration layer entity.
      shared_ptr<int64_t> updatedTime_ {};
      // The visitor token obtained from the trial link. It is used to locate the trial channel and verify access permissions and the validity period. The token is generated by the channel service and must not be constructed manually. It cannot be empty and must be within its validity period. The example is a placeholder value that cannot be used for authentication. Do not disclose actual tokens to unauthorized personnel.
      shared_ptr<string> visitorToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTrialAccessChannelResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTrialAccessChannelResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTrialAccessChannelResponseBody::Data) };
    inline GetTrialAccessChannelResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTrialAccessChannelResponseBody::Data) };
    inline GetTrialAccessChannelResponseBody& setData(const GetTrialAccessChannelResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTrialAccessChannelResponseBody& setData(GetTrialAccessChannelResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTrialAccessChannelResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTrialAccessChannelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrialAccessChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTrialAccessChannelResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business processing status code. A value of OK indicates success. When an exception occurs, the corresponding business error code is returned. The error types and mapping rules follow the current API configuration. No error codes are added or modified in this update.
    shared_ptr<string> code_ {};
    // The channel configuration corresponding to the VisitorToken and its associated scenarios, used for trial page initialization.
    shared_ptr<GetTrialAccessChannelResponseBody::Data> data_ {};
    // The HTTP status code recorded in the business response body. A normal return value is 200. To determine whether the business operation is successful, you must also check the Code field. The presence of this field alone does not indicate a successful call.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The business response or error description. It is usually empty or not returned upon success, and a fixed text cannot be required for successful responses. Upon failure, it provides an error description to assist in troubleshooting. Combine it with Code and Params to understand the cause of the error. The example shows an error message when the trial link visitor token expires (corresponding to the Code Expired.VisitorToken) and is for format reference only.
    shared_ptr<string> message_ {};
    // The ID used to associate and troubleshoot this POP request. The value in the response corresponds to the current request. System request parameters are injected by the gateway, and callers do not need to fill in system fields manually.
    shared_ptr<string> requestId_ {};
    // Indicates whether the business processing is successful. A value of true indicates success, and false indicates failure. The current general response implementation determines success based on whether the Code is OK.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
