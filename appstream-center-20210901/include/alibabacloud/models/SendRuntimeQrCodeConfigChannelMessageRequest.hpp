// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDRUNTIMEQRCODECONFIGCHANNELMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDRUNTIMEQRCODECONFIGCHANNELMESSAGEREQUEST_HPP_
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
  class SendRuntimeQrCodeConfigChannelMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendRuntimeQrCodeConfigChannelMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(RuntimeIds, runtimeIds_);
      DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
    };
    friend void from_json(const Darabonba::Json& j, SendRuntimeQrCodeConfigChannelMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(RuntimeIds, runtimeIds_);
      DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
    };
    SendRuntimeQrCodeConfigChannelMessageRequest() = default ;
    SendRuntimeQrCodeConfigChannelMessageRequest(const SendRuntimeQrCodeConfigChannelMessageRequest &) = default ;
    SendRuntimeQrCodeConfigChannelMessageRequest(SendRuntimeQrCodeConfigChannelMessageRequest &&) = default ;
    SendRuntimeQrCodeConfigChannelMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendRuntimeQrCodeConfigChannelMessageRequest() = default ;
    SendRuntimeQrCodeConfigChannelMessageRequest& operator=(const SendRuntimeQrCodeConfigChannelMessageRequest &) = default ;
    SendRuntimeQrCodeConfigChannelMessageRequest& operator=(SendRuntimeQrCodeConfigChannelMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->code_ == nullptr && this->runtimeIds_ == nullptr && this->runtimeType_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline SendRuntimeQrCodeConfigChannelMessageRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline SendRuntimeQrCodeConfigChannelMessageRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SendRuntimeQrCodeConfigChannelMessageRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // runtimeIds Field Functions 
    bool hasRuntimeIds() const { return this->runtimeIds_ != nullptr;};
    void deleteRuntimeIds() { this->runtimeIds_ = nullptr;};
    inline const vector<string> & getRuntimeIds() const { DARABONBA_PTR_GET_CONST(runtimeIds_, vector<string>) };
    inline vector<string> getRuntimeIds() { DARABONBA_PTR_GET(runtimeIds_, vector<string>) };
    inline SendRuntimeQrCodeConfigChannelMessageRequest& setRuntimeIds(const vector<string> & runtimeIds) { DARABONBA_PTR_SET_VALUE(runtimeIds_, runtimeIds) };
    inline SendRuntimeQrCodeConfigChannelMessageRequest& setRuntimeIds(vector<string> && runtimeIds) { DARABONBA_PTR_SET_RVALUE(runtimeIds_, runtimeIds) };


    // runtimeType Field Functions 
    bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
    void deleteRuntimeType() { this->runtimeType_ = nullptr;};
    inline string getRuntimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
    inline SendRuntimeQrCodeConfigChannelMessageRequest& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


  protected:
    // The agent platform type.
    // 
    // This parameter is required.
    shared_ptr<string> agentPlatform_ {};
    // The agent provider.
    // 
    // This parameter is required.
    shared_ptr<string> agentProvider_ {};
    // The third-party channel code, such as dingtalk-connector (DingTalk), feishu (Lark), or wecom (WeCom). If the current agent platform and provider do not support the channel, the error code ChannelConfig.NotSupported is returned, and no messages are sent.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // The IDs of the runtime resources, such as cloud desktop IDs. You can specify 1 to 200 IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> runtimeIds_ {};
    // The runtime environment type of the runtime resource. Currently, only CloudDesktop is supported.
    // 
    // This parameter is required.
    shared_ptr<string> runtimeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
