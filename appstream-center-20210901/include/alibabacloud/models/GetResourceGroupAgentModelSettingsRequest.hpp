// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPAGENTMODELSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPAGENTMODELSETTINGSREQUEST_HPP_
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
  class GetResourceGroupAgentModelSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupAgentModelSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIds, resourceGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupAgentModelSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIds, resourceGroupIds_);
    };
    GetResourceGroupAgentModelSettingsRequest() = default ;
    GetResourceGroupAgentModelSettingsRequest(const GetResourceGroupAgentModelSettingsRequest &) = default ;
    GetResourceGroupAgentModelSettingsRequest(GetResourceGroupAgentModelSettingsRequest &&) = default ;
    GetResourceGroupAgentModelSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupAgentModelSettingsRequest() = default ;
    GetResourceGroupAgentModelSettingsRequest& operator=(const GetResourceGroupAgentModelSettingsRequest &) = default ;
    GetResourceGroupAgentModelSettingsRequest& operator=(GetResourceGroupAgentModelSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->bizType_ == nullptr && this->resourceGroupIds_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline GetResourceGroupAgentModelSettingsRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline GetResourceGroupAgentModelSettingsRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline GetResourceGroupAgentModelSettingsRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // resourceGroupIds Field Functions 
    bool hasResourceGroupIds() const { return this->resourceGroupIds_ != nullptr;};
    void deleteResourceGroupIds() { this->resourceGroupIds_ = nullptr;};
    inline const vector<string> & getResourceGroupIds() const { DARABONBA_PTR_GET_CONST(resourceGroupIds_, vector<string>) };
    inline vector<string> getResourceGroupIds() { DARABONBA_PTR_GET(resourceGroupIds_, vector<string>) };
    inline GetResourceGroupAgentModelSettingsRequest& setResourceGroupIds(const vector<string> & resourceGroupIds) { DARABONBA_PTR_SET_VALUE(resourceGroupIds_, resourceGroupIds) };
    inline GetResourceGroupAgentModelSettingsRequest& setResourceGroupIds(vector<string> && resourceGroupIds) { DARABONBA_PTR_SET_RVALUE(resourceGroupIds_, resourceGroupIds) };


  protected:
    // The agent platform type.
    shared_ptr<string> agentPlatform_ {};
    // The agent provider name.
    // 
    // This parameter is required.
    shared_ptr<string> agentProvider_ {};
    // The business type.
    // 
    // This parameter is required.
    shared_ptr<int32_t> bizType_ {};
    // The list of resource group IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> resourceGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
