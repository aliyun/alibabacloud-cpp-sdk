// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNTIMECHANNELQRCODEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRUNTIMECHANNELQRCODEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetRuntimeChannelQrCodeDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuntimeChannelQrCodeDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuntimeChannelQrCodeDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
    };
    GetRuntimeChannelQrCodeDetailRequest() = default ;
    GetRuntimeChannelQrCodeDetailRequest(const GetRuntimeChannelQrCodeDetailRequest &) = default ;
    GetRuntimeChannelQrCodeDetailRequest(GetRuntimeChannelQrCodeDetailRequest &&) = default ;
    GetRuntimeChannelQrCodeDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuntimeChannelQrCodeDetailRequest() = default ;
    GetRuntimeChannelQrCodeDetailRequest& operator=(const GetRuntimeChannelQrCodeDetailRequest &) = default ;
    GetRuntimeChannelQrCodeDetailRequest& operator=(GetRuntimeChannelQrCodeDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->code_ == nullptr && this->runtimeId_ == nullptr && this->runtimeType_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline GetRuntimeChannelQrCodeDetailRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline GetRuntimeChannelQrCodeDetailRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRuntimeChannelQrCodeDetailRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // runtimeId Field Functions 
    bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
    void deleteRuntimeId() { this->runtimeId_ = nullptr;};
    inline string getRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
    inline GetRuntimeChannelQrCodeDetailRequest& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


    // runtimeType Field Functions 
    bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
    void deleteRuntimeType() { this->runtimeType_ = nullptr;};
    inline string getRuntimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
    inline GetRuntimeChannelQrCodeDetailRequest& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


  protected:
    // The agent platform.
    // 
    // This parameter is required.
    shared_ptr<string> agentPlatform_ {};
    // The agent provider.
    // 
    // This parameter is required.
    shared_ptr<string> agentProvider_ {};
    // The channel code. It must be the same as the channel code used when initiating the QR code configuration channel, such as dingtalk-connector (DingTalk), feishu (Lark), or wecom (WeCom).
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // The ID of the runtime, such as the ID of a cloud desktop.
    // 
    // This parameter is required.
    shared_ptr<string> runtimeId_ {};
    // The runtime environment type of the runtime resource.
    // 
    // This parameter is required.
    shared_ptr<string> runtimeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
