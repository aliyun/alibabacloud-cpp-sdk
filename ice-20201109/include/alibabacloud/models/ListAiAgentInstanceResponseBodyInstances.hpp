// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTINSTANCERESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTINSTANCERESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AIAgentConfig.hpp>
#include <alibabacloud/models/AIAgentRuntimeConfig.hpp>
#include <alibabacloud/models/AIAgentTemplateConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAIAgentInstanceResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIAgentInstanceResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(AgentConfig, agentConfig_);
      DARABONBA_PTR_TO_JSON(CallLogUrl, callLogUrl_);
      DARABONBA_PTR_TO_JSON(RuntimeConfig, runtimeConfig_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIAgentInstanceResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentConfig, agentConfig_);
      DARABONBA_PTR_FROM_JSON(CallLogUrl, callLogUrl_);
      DARABONBA_PTR_FROM_JSON(RuntimeConfig, runtimeConfig_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    ListAIAgentInstanceResponseBodyInstances() = default ;
    ListAIAgentInstanceResponseBodyInstances(const ListAIAgentInstanceResponseBodyInstances &) = default ;
    ListAIAgentInstanceResponseBodyInstances(ListAIAgentInstanceResponseBodyInstances &&) = default ;
    ListAIAgentInstanceResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIAgentInstanceResponseBodyInstances() = default ;
    ListAIAgentInstanceResponseBodyInstances& operator=(const ListAIAgentInstanceResponseBodyInstances &) = default ;
    ListAIAgentInstanceResponseBodyInstances& operator=(ListAIAgentInstanceResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentConfig_ == nullptr
        && return this->callLogUrl_ == nullptr && return this->runtimeConfig_ == nullptr && return this->status_ == nullptr && return this->templateConfig_ == nullptr && return this->userData_ == nullptr; };
    // agentConfig Field Functions 
    bool hasAgentConfig() const { return this->agentConfig_ != nullptr;};
    void deleteAgentConfig() { this->agentConfig_ = nullptr;};
    inline const Models::AIAgentConfig & agentConfig() const { DARABONBA_PTR_GET_CONST(agentConfig_, Models::AIAgentConfig) };
    inline Models::AIAgentConfig agentConfig() { DARABONBA_PTR_GET(agentConfig_, Models::AIAgentConfig) };
    inline ListAIAgentInstanceResponseBodyInstances& setAgentConfig(const Models::AIAgentConfig & agentConfig) { DARABONBA_PTR_SET_VALUE(agentConfig_, agentConfig) };
    inline ListAIAgentInstanceResponseBodyInstances& setAgentConfig(Models::AIAgentConfig && agentConfig) { DARABONBA_PTR_SET_RVALUE(agentConfig_, agentConfig) };


    // callLogUrl Field Functions 
    bool hasCallLogUrl() const { return this->callLogUrl_ != nullptr;};
    void deleteCallLogUrl() { this->callLogUrl_ = nullptr;};
    inline string callLogUrl() const { DARABONBA_PTR_GET_DEFAULT(callLogUrl_, "") };
    inline ListAIAgentInstanceResponseBodyInstances& setCallLogUrl(string callLogUrl) { DARABONBA_PTR_SET_VALUE(callLogUrl_, callLogUrl) };


    // runtimeConfig Field Functions 
    bool hasRuntimeConfig() const { return this->runtimeConfig_ != nullptr;};
    void deleteRuntimeConfig() { this->runtimeConfig_ = nullptr;};
    inline const Models::AIAgentRuntimeConfig & runtimeConfig() const { DARABONBA_PTR_GET_CONST(runtimeConfig_, Models::AIAgentRuntimeConfig) };
    inline Models::AIAgentRuntimeConfig runtimeConfig() { DARABONBA_PTR_GET(runtimeConfig_, Models::AIAgentRuntimeConfig) };
    inline ListAIAgentInstanceResponseBodyInstances& setRuntimeConfig(const Models::AIAgentRuntimeConfig & runtimeConfig) { DARABONBA_PTR_SET_VALUE(runtimeConfig_, runtimeConfig) };
    inline ListAIAgentInstanceResponseBodyInstances& setRuntimeConfig(Models::AIAgentRuntimeConfig && runtimeConfig) { DARABONBA_PTR_SET_RVALUE(runtimeConfig_, runtimeConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAIAgentInstanceResponseBodyInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const Models::AIAgentTemplateConfig & templateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, Models::AIAgentTemplateConfig) };
    inline Models::AIAgentTemplateConfig templateConfig() { DARABONBA_PTR_GET(templateConfig_, Models::AIAgentTemplateConfig) };
    inline ListAIAgentInstanceResponseBodyInstances& setTemplateConfig(const Models::AIAgentTemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline ListAIAgentInstanceResponseBodyInstances& setTemplateConfig(Models::AIAgentTemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ListAIAgentInstanceResponseBodyInstances& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<Models::AIAgentConfig> agentConfig_ = nullptr;
    // The URL of the call log file for the AI agent. The structure of the file is CallLog in the JSON format.
    std::shared_ptr<string> callLogUrl_ = nullptr;
    // The runtime configurations of the AI agent.
    std::shared_ptr<Models::AIAgentRuntimeConfig> runtimeConfig_ = nullptr;
    // The state of the instance. Valid values:
    // 
    // *   Executing
    // *   Finished
    std::shared_ptr<string> status_ = nullptr;
    // The template configurations of the AI agent.
    std::shared_ptr<Models::AIAgentTemplateConfig> templateConfig_ = nullptr;
    // The custom information.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
