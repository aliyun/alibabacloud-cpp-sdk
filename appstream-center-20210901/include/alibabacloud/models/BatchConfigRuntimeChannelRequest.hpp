// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCONFIGRUNTIMECHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCONFIGRUNTIMECHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class BatchConfigRuntimeChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchConfigRuntimeChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(ChannelConfigs, channelConfigs_);
      DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
    };
    friend void from_json(const Darabonba::Json& j, BatchConfigRuntimeChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(ChannelConfigs, channelConfigs_);
      DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
    };
    BatchConfigRuntimeChannelRequest() = default ;
    BatchConfigRuntimeChannelRequest(const BatchConfigRuntimeChannelRequest &) = default ;
    BatchConfigRuntimeChannelRequest(BatchConfigRuntimeChannelRequest &&) = default ;
    BatchConfigRuntimeChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchConfigRuntimeChannelRequest() = default ;
    BatchConfigRuntimeChannelRequest& operator=(const BatchConfigRuntimeChannelRequest &) = default ;
    BatchConfigRuntimeChannelRequest& operator=(BatchConfigRuntimeChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChannelConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChannelConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(ConfigMode, configMode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
      };
      friend void from_json(const Darabonba::Json& j, ChannelConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(ConfigMode, configMode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
      };
      ChannelConfigs() = default ;
      ChannelConfigs(const ChannelConfigs &) = default ;
      ChannelConfigs(ChannelConfigs &&) = default ;
      ChannelConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChannelConfigs() = default ;
      ChannelConfigs& operator=(const ChannelConfigs &) = default ;
      ChannelConfigs& operator=(ChannelConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->config_ == nullptr && this->configMode_ == nullptr && this->name_ == nullptr && this->runtimeId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ChannelConfigs& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline ChannelConfigs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // configMode Field Functions 
      bool hasConfigMode() const { return this->configMode_ != nullptr;};
      void deleteConfigMode() { this->configMode_ = nullptr;};
      inline string getConfigMode() const { DARABONBA_PTR_GET_DEFAULT(configMode_, "") };
      inline ChannelConfigs& setConfigMode(string configMode) { DARABONBA_PTR_SET_VALUE(configMode_, configMode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ChannelConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // runtimeId Field Functions 
      bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
      void deleteRuntimeId() { this->runtimeId_ = nullptr;};
      inline string getRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
      inline ChannelConfigs& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


    protected:
      // The third-party channel code, such as dingtalk-connector (DingTalk), feishu (Lark), and wecom (WeCom). System channel codes are not case-sensitive. Configuring wechat and jvsclaw is not supported. If these values are passed, the entire request fails and the error code ChannelConfig.NotSupported is returned.
      // 
      // This parameter is required.
      shared_ptr<string> code_ {};
      // The JSON string for the channel configuration.
      // 
      // - Simple mode: only appKey and appSecret are allowed.
      // - Custom mode: all configuration items required for the channel under the current agent provider must be included.
      // 
      // If the string is not valid JSON, the error code InvalidParameter.ValueInvalid is returned.
      // 
      // This parameter is required.
      shared_ptr<string> config_ {};
      // The configuration mode. Valid values:
      // 
      // - Simple: the simple configuration mode.
      // - Custom: the custom configuration mode.
      // 
      // This parameter is required.
      shared_ptr<string> configMode_ {};
      // The channel name.
      // 
      // If this parameter is not specified, the system automatically uses the code as the name.
      shared_ptr<string> name_ {};
      // The agent runtime ID. The ID mappings are as follows:
      // 
      // - JVS Computer: the JVS Computer ID, in the format of jvs-xxxx.
      // - OpenClaw: the cloud desktop ID, in the format of ecd-xxxx.
      // - Hermes Agent: the Hermes Agent ID, in the format of jvs-xxxx.
      // 
      // This parameter is required.
      shared_ptr<string> runtimeId_ {};
    };

    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->channelConfigs_ == nullptr && this->runtimeType_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline BatchConfigRuntimeChannelRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline BatchConfigRuntimeChannelRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // channelConfigs Field Functions 
    bool hasChannelConfigs() const { return this->channelConfigs_ != nullptr;};
    void deleteChannelConfigs() { this->channelConfigs_ = nullptr;};
    inline const vector<BatchConfigRuntimeChannelRequest::ChannelConfigs> & getChannelConfigs() const { DARABONBA_PTR_GET_CONST(channelConfigs_, vector<BatchConfigRuntimeChannelRequest::ChannelConfigs>) };
    inline vector<BatchConfigRuntimeChannelRequest::ChannelConfigs> getChannelConfigs() { DARABONBA_PTR_GET(channelConfigs_, vector<BatchConfigRuntimeChannelRequest::ChannelConfigs>) };
    inline BatchConfigRuntimeChannelRequest& setChannelConfigs(const vector<BatchConfigRuntimeChannelRequest::ChannelConfigs> & channelConfigs) { DARABONBA_PTR_SET_VALUE(channelConfigs_, channelConfigs) };
    inline BatchConfigRuntimeChannelRequest& setChannelConfigs(vector<BatchConfigRuntimeChannelRequest::ChannelConfigs> && channelConfigs) { DARABONBA_PTR_SET_RVALUE(channelConfigs_, channelConfigs) };


    // runtimeType Field Functions 
    bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
    void deleteRuntimeType() { this->runtimeType_ = nullptr;};
    inline string getRuntimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
    inline BatchConfigRuntimeChannelRequest& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


  protected:
    // The agent platform, such as ENTERPRISE. If the value is invalid, the error code InvalidParameter.AgentPlatform is returned.
    // 
    // This parameter is required.
    shared_ptr<string> agentPlatform_ {};
    // The agent provider.
    // 
    // - JVS Computer: Enter OpenClaw.
    // - OpenClaw: Enter OpenClaw.
    // - Hermes Agent: Enter HermesAgent.
    // 
    // This parameter is required.
    shared_ptr<string> agentProvider_ {};
    // The list of channel configurations. A maximum of 200 configurations are supported. Each configuration item specifies an agent runtime and the third-party channel to be configured for it. Different channel configurations can be delivered to different runtimes. Multiple configuration items for the same runtime are processed sequentially.
    // 
    // This parameter is required.
    shared_ptr<vector<BatchConfigRuntimeChannelRequest::ChannelConfigs>> channelConfigs_ {};
    // The agent runtime type, such as CloudDesktop (cloud desktop).
    // 
    // This parameter is required.
    shared_ptr<string> runtimeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
