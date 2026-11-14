// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTENANTMEMORYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTENANTMEMORYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyTenantMemoryConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTenantMemoryConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTenantMemoryConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    ModifyTenantMemoryConfigRequest() = default ;
    ModifyTenantMemoryConfigRequest(const ModifyTenantMemoryConfigRequest &) = default ;
    ModifyTenantMemoryConfigRequest(ModifyTenantMemoryConfigRequest &&) = default ;
    ModifyTenantMemoryConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTenantMemoryConfigRequest() = default ;
    ModifyTenantMemoryConfigRequest& operator=(const ModifyTenantMemoryConfigRequest &) = default ;
    ModifyTenantMemoryConfigRequest& operator=(ModifyTenantMemoryConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->bizType_ == nullptr && this->enabled_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline ModifyTenantMemoryConfigRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline ModifyTenantMemoryConfigRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline ModifyTenantMemoryConfigRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ModifyTenantMemoryConfigRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // The business platform to which the agent belongs. Specify the platform that corresponds to the tenant memory configuration, such as `ENTERPRISE` for the enterprise platform.
    // 
    // This parameter is required.
    shared_ptr<string> agentPlatform_ {};
    // The agent provider. This parameter is used together with AgentPlatform and BizType to locate the memory configuration. You must use a configured business combination.
    // 
    // This parameter is required.
    shared_ptr<string> agentProvider_ {};
    // The business type code. This parameter is used together with the provider and business platform. Common values include `1` (Enterprise Edition), `10` (Personal Edition), and `20` (Commercial Edition).
    // 
    // This parameter is required.
    shared_ptr<int32_t> bizType_ {};
    // Specifies whether the memory feature for the business combination is enabled. A value of `true` enables the feature, and `false` disables the feature. If this parameter is omitted, the current setting is retained.
    shared_ptr<bool> enabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
