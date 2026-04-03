// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMBOTMETADATA_HPP_
#define ALIBABACLOUD_MODELS_IMBOTMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class IMBotMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IMBotMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(agentRuntimeEndpointId, agentRuntimeEndpointId_);
      DARABONBA_PTR_TO_JSON(agentRuntimeEndpointUrl, agentRuntimeEndpointUrl_);
      DARABONBA_PTR_TO_JSON(agentRuntimeId, agentRuntimeId_);
      DARABONBA_PTR_TO_JSON(customFunctionMeta, customFunctionMeta_);
      DARABONBA_PTR_TO_JSON(protocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(role, role_);
    };
    friend void from_json(const Darabonba::Json& j, IMBotMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeEndpointId, agentRuntimeEndpointId_);
      DARABONBA_PTR_FROM_JSON(agentRuntimeEndpointUrl, agentRuntimeEndpointUrl_);
      DARABONBA_PTR_FROM_JSON(agentRuntimeId, agentRuntimeId_);
      DARABONBA_PTR_FROM_JSON(customFunctionMeta, customFunctionMeta_);
      DARABONBA_PTR_FROM_JSON(protocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(role, role_);
    };
    IMBotMetadata() = default ;
    IMBotMetadata(const IMBotMetadata &) = default ;
    IMBotMetadata(IMBotMetadata &&) = default ;
    IMBotMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IMBotMetadata() = default ;
    IMBotMetadata& operator=(const IMBotMetadata &) = default ;
    IMBotMetadata& operator=(IMBotMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentRuntimeEndpointId_ == nullptr
        && this->agentRuntimeEndpointUrl_ == nullptr && this->agentRuntimeId_ == nullptr && this->customFunctionMeta_ == nullptr && this->protocolType_ == nullptr && this->role_ == nullptr; };
    // agentRuntimeEndpointId Field Functions 
    bool hasAgentRuntimeEndpointId() const { return this->agentRuntimeEndpointId_ != nullptr;};
    void deleteAgentRuntimeEndpointId() { this->agentRuntimeEndpointId_ = nullptr;};
    inline string getAgentRuntimeEndpointId() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeEndpointId_, "") };
    inline IMBotMetadata& setAgentRuntimeEndpointId(string agentRuntimeEndpointId) { DARABONBA_PTR_SET_VALUE(agentRuntimeEndpointId_, agentRuntimeEndpointId) };


    // agentRuntimeEndpointUrl Field Functions 
    bool hasAgentRuntimeEndpointUrl() const { return this->agentRuntimeEndpointUrl_ != nullptr;};
    void deleteAgentRuntimeEndpointUrl() { this->agentRuntimeEndpointUrl_ = nullptr;};
    inline string getAgentRuntimeEndpointUrl() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeEndpointUrl_, "") };
    inline IMBotMetadata& setAgentRuntimeEndpointUrl(string agentRuntimeEndpointUrl) { DARABONBA_PTR_SET_VALUE(agentRuntimeEndpointUrl_, agentRuntimeEndpointUrl) };


    // agentRuntimeId Field Functions 
    bool hasAgentRuntimeId() const { return this->agentRuntimeId_ != nullptr;};
    void deleteAgentRuntimeId() { this->agentRuntimeId_ = nullptr;};
    inline string getAgentRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeId_, "") };
    inline IMBotMetadata& setAgentRuntimeId(string agentRuntimeId) { DARABONBA_PTR_SET_VALUE(agentRuntimeId_, agentRuntimeId) };


    // customFunctionMeta Field Functions 
    bool hasCustomFunctionMeta() const { return this->customFunctionMeta_ != nullptr;};
    void deleteCustomFunctionMeta() { this->customFunctionMeta_ = nullptr;};
    inline string getCustomFunctionMeta() const { DARABONBA_PTR_GET_DEFAULT(customFunctionMeta_, "") };
    inline IMBotMetadata& setCustomFunctionMeta(string customFunctionMeta) { DARABONBA_PTR_SET_VALUE(customFunctionMeta_, customFunctionMeta) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline IMBotMetadata& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline IMBotMetadata& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    // 可选
    shared_ptr<string> agentRuntimeEndpointId_ {};
    // 标准模式下必填：下游 Agent 可调用的 URL；custom 模式可省略
    shared_ptr<string> agentRuntimeEndpointUrl_ {};
    // 绑定的 Agent Runtime UUID
    shared_ptr<string> agentRuntimeId_ {};
    // 自定义函数元信息；可选；与后端 IMBotMetadata 持久化字段一致
    shared_ptr<string> customFunctionMeta_ {};
    // 标准模式下必填，与 ValidateAgentRuntimeProtocolTypeValue 一致（大小写敏感）；custom 模式可省略
    shared_ptr<string> protocolType_ {};
    // 不写入单 Bot 持久化 JSON；用于首次/更新时设置租户级 FC RAM 执行角色 ARN（acs:ram::...）；FC 启用且非 custom 时按服务逻辑校验
    shared_ptr<string> role_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
