// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGRUNTIMECHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGRUNTIMECHANNELREQUEST_HPP_
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
  class ConfigRuntimeChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigRuntimeChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ConfigMode, configMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RuntimeIds, runtimeIds_);
      DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigRuntimeChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ConfigMode, configMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RuntimeIds, runtimeIds_);
      DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
    };
    ConfigRuntimeChannelRequest() = default ;
    ConfigRuntimeChannelRequest(const ConfigRuntimeChannelRequest &) = default ;
    ConfigRuntimeChannelRequest(ConfigRuntimeChannelRequest &&) = default ;
    ConfigRuntimeChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigRuntimeChannelRequest() = default ;
    ConfigRuntimeChannelRequest& operator=(const ConfigRuntimeChannelRequest &) = default ;
    ConfigRuntimeChannelRequest& operator=(ConfigRuntimeChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->code_ == nullptr && this->config_ == nullptr && this->configMode_ == nullptr && this->name_ == nullptr
        && this->runtimeIds_ == nullptr && this->runtimeType_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline ConfigRuntimeChannelRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline ConfigRuntimeChannelRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ConfigRuntimeChannelRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ConfigRuntimeChannelRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // configMode Field Functions 
    bool hasConfigMode() const { return this->configMode_ != nullptr;};
    void deleteConfigMode() { this->configMode_ = nullptr;};
    inline string getConfigMode() const { DARABONBA_PTR_GET_DEFAULT(configMode_, "") };
    inline ConfigRuntimeChannelRequest& setConfigMode(string configMode) { DARABONBA_PTR_SET_VALUE(configMode_, configMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ConfigRuntimeChannelRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // runtimeIds Field Functions 
    bool hasRuntimeIds() const { return this->runtimeIds_ != nullptr;};
    void deleteRuntimeIds() { this->runtimeIds_ = nullptr;};
    inline const vector<string> & getRuntimeIds() const { DARABONBA_PTR_GET_CONST(runtimeIds_, vector<string>) };
    inline vector<string> getRuntimeIds() { DARABONBA_PTR_GET(runtimeIds_, vector<string>) };
    inline ConfigRuntimeChannelRequest& setRuntimeIds(const vector<string> & runtimeIds) { DARABONBA_PTR_SET_VALUE(runtimeIds_, runtimeIds) };
    inline ConfigRuntimeChannelRequest& setRuntimeIds(vector<string> && runtimeIds) { DARABONBA_PTR_SET_RVALUE(runtimeIds_, runtimeIds) };


    // runtimeType Field Functions 
    bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
    void deleteRuntimeType() { this->runtimeType_ = nullptr;};
    inline string getRuntimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
    inline ConfigRuntimeChannelRequest& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


  protected:
    // The Agent platform (such as ENTERPRISE or JVS).
    shared_ptr<string> agentPlatform_ {};
    // The Agent provider.
    // 
    // This parameter is required.
    shared_ptr<string> agentProvider_ {};
    // The third-party channel code.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // The channel configuration JSON string.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The configuration mode.
    shared_ptr<string> configMode_ {};
    // The channel name.
    // 
    // If you leave this parameter empty, the system automatically uses the value of Code as the name.
    shared_ptr<string> name_ {};
    // The list of runtime IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> runtimeIds_ {};
    // The Agent runtime type.
    // 
    // This parameter is required.
    shared_ptr<string> runtimeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
