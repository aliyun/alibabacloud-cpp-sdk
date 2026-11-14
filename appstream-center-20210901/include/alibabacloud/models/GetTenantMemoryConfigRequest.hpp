// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTENANTMEMORYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTENANTMEMORYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetTenantMemoryConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTenantMemoryConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentInstanceId, agentInstanceId_);
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTenantMemoryConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentInstanceId, agentInstanceId_);
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
    };
    GetTenantMemoryConfigRequest() = default ;
    GetTenantMemoryConfigRequest(const GetTenantMemoryConfigRequest &) = default ;
    GetTenantMemoryConfigRequest(GetTenantMemoryConfigRequest &&) = default ;
    GetTenantMemoryConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTenantMemoryConfigRequest() = default ;
    GetTenantMemoryConfigRequest& operator=(const GetTenantMemoryConfigRequest &) = default ;
    GetTenantMemoryConfigRequest& operator=(GetTenantMemoryConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentInstanceId_ == nullptr
        && this->agentPlatform_ == nullptr && this->agentProvider_ == nullptr && this->bizType_ == nullptr; };
    // agentInstanceId Field Functions 
    bool hasAgentInstanceId() const { return this->agentInstanceId_ != nullptr;};
    void deleteAgentInstanceId() { this->agentInstanceId_ = nullptr;};
    inline string getAgentInstanceId() const { DARABONBA_PTR_GET_DEFAULT(agentInstanceId_, "") };
    inline GetTenantMemoryConfigRequest& setAgentInstanceId(string agentInstanceId) { DARABONBA_PTR_SET_VALUE(agentInstanceId_, agentInstanceId) };


    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline GetTenantMemoryConfigRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline GetTenantMemoryConfigRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline GetTenantMemoryConfigRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


  protected:
    // This parameter is not enabled. Do not specify this parameter. The current API operation queries tenant configurations by provider, business platform, and business type. The example is used to illustrate the field status.
    shared_ptr<string> agentInstanceId_ {};
    // The business platform to which the agent belongs. Specify the platform corresponding to the tenant memory configuration, such as `ENTERPRISE` for the enterprise platform.
    shared_ptr<string> agentPlatform_ {};
    // The agent provider. This parameter is used together with AgentPlatform and BizType to locate the memory configuration. You must use a configured business combination.
    shared_ptr<string> agentProvider_ {};
    // The business type code. This parameter is used together with the provider and business platform. Common values include `1` for Enterprise Edition, `10` for Personal Edition, and `20` for Commercial Edition.
    shared_ptr<int32_t> bizType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
