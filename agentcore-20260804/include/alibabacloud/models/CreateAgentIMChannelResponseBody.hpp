// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTIMCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTIMCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateAgentIMChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentIMChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentIMChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateAgentIMChannelResponseBody() = default ;
    CreateAgentIMChannelResponseBody(const CreateAgentIMChannelResponseBody &) = default ;
    CreateAgentIMChannelResponseBody(CreateAgentIMChannelResponseBody &&) = default ;
    CreateAgentIMChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentIMChannelResponseBody() = default ;
    CreateAgentIMChannelResponseBody& operator=(const CreateAgentIMChannelResponseBody &) = default ;
    CreateAgentIMChannelResponseBody& operator=(CreateAgentIMChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(channelConfig, channelConfig_);
        DARABONBA_PTR_TO_JSON(channelType, channelType_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(credentialSummary, credentialSummary_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(endpointUrl, endpointUrl_);
        DARABONBA_PTR_TO_JSON(imChannelId, imChannelId_);
        DARABONBA_PTR_TO_JSON(serviceEndpointId, serviceEndpointId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(channelConfig, channelConfig_);
        DARABONBA_PTR_FROM_JSON(channelType, channelType_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(credentialSummary, credentialSummary_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(endpointUrl, endpointUrl_);
        DARABONBA_PTR_FROM_JSON(imChannelId, imChannelId_);
        DARABONBA_PTR_FROM_JSON(serviceEndpointId, serviceEndpointId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
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
      class CredentialSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CredentialSummary& obj) { 
          DARABONBA_PTR_TO_JSON(configuredSecretFields, configuredSecretFields_);
          DARABONBA_PTR_TO_JSON(nonSecretFields, nonSecretFields_);
        };
        friend void from_json(const Darabonba::Json& j, CredentialSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(configuredSecretFields, configuredSecretFields_);
          DARABONBA_PTR_FROM_JSON(nonSecretFields, nonSecretFields_);
        };
        CredentialSummary() = default ;
        CredentialSummary(const CredentialSummary &) = default ;
        CredentialSummary(CredentialSummary &&) = default ;
        CredentialSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CredentialSummary() = default ;
        CredentialSummary& operator=(const CredentialSummary &) = default ;
        CredentialSummary& operator=(CredentialSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configuredSecretFields_ == nullptr
        && this->nonSecretFields_ == nullptr; };
        // configuredSecretFields Field Functions 
        bool hasConfiguredSecretFields() const { return this->configuredSecretFields_ != nullptr;};
        void deleteConfiguredSecretFields() { this->configuredSecretFields_ = nullptr;};
        inline const vector<string> & getConfiguredSecretFields() const { DARABONBA_PTR_GET_CONST(configuredSecretFields_, vector<string>) };
        inline vector<string> getConfiguredSecretFields() { DARABONBA_PTR_GET(configuredSecretFields_, vector<string>) };
        inline CredentialSummary& setConfiguredSecretFields(const vector<string> & configuredSecretFields) { DARABONBA_PTR_SET_VALUE(configuredSecretFields_, configuredSecretFields) };
        inline CredentialSummary& setConfiguredSecretFields(vector<string> && configuredSecretFields) { DARABONBA_PTR_SET_RVALUE(configuredSecretFields_, configuredSecretFields) };


        // nonSecretFields Field Functions 
        bool hasNonSecretFields() const { return this->nonSecretFields_ != nullptr;};
        void deleteNonSecretFields() { this->nonSecretFields_ = nullptr;};
        inline const map<string, string> & getNonSecretFields() const { DARABONBA_PTR_GET_CONST(nonSecretFields_, map<string, string>) };
        inline map<string, string> getNonSecretFields() { DARABONBA_PTR_GET(nonSecretFields_, map<string, string>) };
        inline CredentialSummary& setNonSecretFields(const map<string, string> & nonSecretFields) { DARABONBA_PTR_SET_VALUE(nonSecretFields_, nonSecretFields) };
        inline CredentialSummary& setNonSecretFields(map<string, string> && nonSecretFields) { DARABONBA_PTR_SET_RVALUE(nonSecretFields_, nonSecretFields) };


      protected:
        // The list of configured secret field names. Secret values are not included.
        shared_ptr<vector<string>> configuredSecretFields_ {};
        // The non-sensitive credential fields and their values.
        shared_ptr<map<string, string>> nonSecretFields_ {};
      };

      class ChannelConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChannelConfig& obj) { 
          DARABONBA_PTR_TO_JSON(showThinking, showThinking_);
          DARABONBA_PTR_TO_JSON(showToolCalls, showToolCalls_);
        };
        friend void from_json(const Darabonba::Json& j, ChannelConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(showThinking, showThinking_);
          DARABONBA_PTR_FROM_JSON(showToolCalls, showToolCalls_);
        };
        ChannelConfig() = default ;
        ChannelConfig(const ChannelConfig &) = default ;
        ChannelConfig(ChannelConfig &&) = default ;
        ChannelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChannelConfig() = default ;
        ChannelConfig& operator=(const ChannelConfig &) = default ;
        ChannelConfig& operator=(ChannelConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->showThinking_ == nullptr
        && this->showToolCalls_ == nullptr; };
        // showThinking Field Functions 
        bool hasShowThinking() const { return this->showThinking_ != nullptr;};
        void deleteShowThinking() { this->showThinking_ = nullptr;};
        inline bool getShowThinking() const { DARABONBA_PTR_GET_DEFAULT(showThinking_, false) };
        inline ChannelConfig& setShowThinking(bool showThinking) { DARABONBA_PTR_SET_VALUE(showThinking_, showThinking) };


        // showToolCalls Field Functions 
        bool hasShowToolCalls() const { return this->showToolCalls_ != nullptr;};
        void deleteShowToolCalls() { this->showToolCalls_ = nullptr;};
        inline bool getShowToolCalls() const { DARABONBA_PTR_GET_DEFAULT(showToolCalls_, false) };
        inline ChannelConfig& setShowToolCalls(bool showToolCalls) { DARABONBA_PTR_SET_VALUE(showToolCalls_, showToolCalls) };


      protected:
        // Specifies whether to display the thinking process in IM messages. Default value: false.
        shared_ptr<bool> showThinking_ {};
        // Specifies whether to display the tool calling process in IM messages. Default value: false.
        shared_ptr<bool> showToolCalls_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->channelConfig_ == nullptr && this->channelType_ == nullptr && this->createTime_ == nullptr && this->credentialSummary_ == nullptr && this->enabled_ == nullptr
        && this->endpointUrl_ == nullptr && this->imChannelId_ == nullptr && this->serviceEndpointId_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr
        && this->updateTime_ == nullptr && this->workspaceId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Data& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // channelConfig Field Functions 
      bool hasChannelConfig() const { return this->channelConfig_ != nullptr;};
      void deleteChannelConfig() { this->channelConfig_ = nullptr;};
      inline const Data::ChannelConfig & getChannelConfig() const { DARABONBA_PTR_GET_CONST(channelConfig_, Data::ChannelConfig) };
      inline Data::ChannelConfig getChannelConfig() { DARABONBA_PTR_GET(channelConfig_, Data::ChannelConfig) };
      inline Data& setChannelConfig(const Data::ChannelConfig & channelConfig) { DARABONBA_PTR_SET_VALUE(channelConfig_, channelConfig) };
      inline Data& setChannelConfig(Data::ChannelConfig && channelConfig) { DARABONBA_PTR_SET_RVALUE(channelConfig_, channelConfig) };


      // channelType Field Functions 
      bool hasChannelType() const { return this->channelType_ != nullptr;};
      void deleteChannelType() { this->channelType_ = nullptr;};
      inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
      inline Data& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // credentialSummary Field Functions 
      bool hasCredentialSummary() const { return this->credentialSummary_ != nullptr;};
      void deleteCredentialSummary() { this->credentialSummary_ = nullptr;};
      inline const Data::CredentialSummary & getCredentialSummary() const { DARABONBA_PTR_GET_CONST(credentialSummary_, Data::CredentialSummary) };
      inline Data::CredentialSummary getCredentialSummary() { DARABONBA_PTR_GET(credentialSummary_, Data::CredentialSummary) };
      inline Data& setCredentialSummary(const Data::CredentialSummary & credentialSummary) { DARABONBA_PTR_SET_VALUE(credentialSummary_, credentialSummary) };
      inline Data& setCredentialSummary(Data::CredentialSummary && credentialSummary) { DARABONBA_PTR_SET_RVALUE(credentialSummary_, credentialSummary) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // endpointUrl Field Functions 
      bool hasEndpointUrl() const { return this->endpointUrl_ != nullptr;};
      void deleteEndpointUrl() { this->endpointUrl_ = nullptr;};
      inline string getEndpointUrl() const { DARABONBA_PTR_GET_DEFAULT(endpointUrl_, "") };
      inline Data& setEndpointUrl(string endpointUrl) { DARABONBA_PTR_SET_VALUE(endpointUrl_, endpointUrl) };


      // imChannelId Field Functions 
      bool hasImChannelId() const { return this->imChannelId_ != nullptr;};
      void deleteImChannelId() { this->imChannelId_ = nullptr;};
      inline string getImChannelId() const { DARABONBA_PTR_GET_DEFAULT(imChannelId_, "") };
      inline Data& setImChannelId(string imChannelId) { DARABONBA_PTR_SET_VALUE(imChannelId_, imChannelId) };


      // serviceEndpointId Field Functions 
      bool hasServiceEndpointId() const { return this->serviceEndpointId_ != nullptr;};
      void deleteServiceEndpointId() { this->serviceEndpointId_ = nullptr;};
      inline string getServiceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(serviceEndpointId_, "") };
      inline Data& setServiceEndpointId(string serviceEndpointId) { DARABONBA_PTR_SET_VALUE(serviceEndpointId_, serviceEndpointId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline Data& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The agent ID.
      shared_ptr<string> agentId_ {};
      // The channel behavior configuration.
      shared_ptr<Data::ChannelConfig> channelConfig_ {};
      // The IM channel type. Valid values:
      // 
      // - DINGTALK: DingTalk.
      // - FEISHU: Lark.
      // - WECOM: WeCom.
      shared_ptr<string> channelType_ {};
      // The creation time in RFC 3339 format.
      shared_ptr<string> createTime_ {};
      // The channel credential summary. Only non-sensitive fields and configured secret field names are returned. Secret values are not returned.
      shared_ptr<Data::CredentialSummary> credentialSummary_ {};
      // Specifies whether to enable the IM channel. Default value: true.
      shared_ptr<bool> enabled_ {};
      // The public network access URL of the attached ServiceEndpoint.
      shared_ptr<string> endpointUrl_ {};
      // The IM channel ID.
      shared_ptr<string> imChannelId_ {};
      // The ID of the ServiceEndpoint to bind. The endpoint must belong to the specified agent and its current version, be in the ready state, and have a public network address.
      shared_ptr<string> serviceEndpointId_ {};
      // The IM channel status. Valid values:
      // 
      // - CREATING: Being created.
      // - READY: Ready.
      // - UPDATING: Being updated.
      // - FAILED: Failed.
      // - DELETING: Being deleted.
      // - DELETE_FAILED: Deletion failed.
      shared_ptr<string> status_ {};
      // The reason for the current IM channel status.
      shared_ptr<string> statusReason_ {};
      // The update time in RFC 3339 format.
      shared_ptr<string> updateTime_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateAgentIMChannelResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateAgentIMChannelResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateAgentIMChannelResponseBody::Data) };
    inline CreateAgentIMChannelResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateAgentIMChannelResponseBody::Data) };
    inline CreateAgentIMChannelResponseBody& setData(const CreateAgentIMChannelResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateAgentIMChannelResponseBody& setData(CreateAgentIMChannelResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateAgentIMChannelResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateAgentIMChannelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAgentIMChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateAgentIMChannelResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code. The value SUCCESS indicates success.
    shared_ptr<string> code_ {};
    // The IM channel information after creation.
    shared_ptr<CreateAgentIMChannelResponseBody::Data> data_ {};
    // The HTTP status code. The value 200 indicates success.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request processing result message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
