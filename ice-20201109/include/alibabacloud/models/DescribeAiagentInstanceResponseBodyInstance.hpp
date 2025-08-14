// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIAGENTINSTANCERESPONSEBODYINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIAGENTINSTANCERESPONSEBODYINSTANCE_HPP_
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
  class DescribeAIAgentInstanceResponseBodyInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIAgentInstanceResponseBodyInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AgentConfig, agentConfig_);
      DARABONBA_PTR_TO_JSON(CallLogUrl, callLogUrl_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(RuntimeConfig, runtimeConfig_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIAgentInstanceResponseBodyInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentConfig, agentConfig_);
      DARABONBA_PTR_FROM_JSON(CallLogUrl, callLogUrl_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(RuntimeConfig, runtimeConfig_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    DescribeAIAgentInstanceResponseBodyInstance() = default ;
    DescribeAIAgentInstanceResponseBodyInstance(const DescribeAIAgentInstanceResponseBodyInstance &) = default ;
    DescribeAIAgentInstanceResponseBodyInstance(DescribeAIAgentInstanceResponseBodyInstance &&) = default ;
    DescribeAIAgentInstanceResponseBodyInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIAgentInstanceResponseBodyInstance() = default ;
    DescribeAIAgentInstanceResponseBodyInstance& operator=(const DescribeAIAgentInstanceResponseBodyInstance &) = default ;
    DescribeAIAgentInstanceResponseBodyInstance& operator=(DescribeAIAgentInstanceResponseBodyInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentConfig_ != nullptr
        && this->callLogUrl_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->runtimeConfig_ != nullptr && this->sessionId_ != nullptr
        && this->status_ != nullptr && this->templateConfig_ != nullptr && this->userData_ != nullptr; };
    // agentConfig Field Functions 
    bool hasAgentConfig() const { return this->agentConfig_ != nullptr;};
    void deleteAgentConfig() { this->agentConfig_ = nullptr;};
    inline const Models::AIAgentConfig & agentConfig() const { DARABONBA_PTR_GET_CONST(agentConfig_, Models::AIAgentConfig) };
    inline Models::AIAgentConfig agentConfig() { DARABONBA_PTR_GET(agentConfig_, Models::AIAgentConfig) };
    inline DescribeAIAgentInstanceResponseBodyInstance& setAgentConfig(const Models::AIAgentConfig & agentConfig) { DARABONBA_PTR_SET_VALUE(agentConfig_, agentConfig) };
    inline DescribeAIAgentInstanceResponseBodyInstance& setAgentConfig(Models::AIAgentConfig && agentConfig) { DARABONBA_PTR_SET_RVALUE(agentConfig_, agentConfig) };


    // callLogUrl Field Functions 
    bool hasCallLogUrl() const { return this->callLogUrl_ != nullptr;};
    void deleteCallLogUrl() { this->callLogUrl_ = nullptr;};
    inline string callLogUrl() const { DARABONBA_PTR_GET_DEFAULT(callLogUrl_, "") };
    inline DescribeAIAgentInstanceResponseBodyInstance& setCallLogUrl(string callLogUrl) { DARABONBA_PTR_SET_VALUE(callLogUrl_, callLogUrl) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeAIAgentInstanceResponseBodyInstance& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeAIAgentInstanceResponseBodyInstance& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // runtimeConfig Field Functions 
    bool hasRuntimeConfig() const { return this->runtimeConfig_ != nullptr;};
    void deleteRuntimeConfig() { this->runtimeConfig_ = nullptr;};
    inline const Models::AIAgentRuntimeConfig & runtimeConfig() const { DARABONBA_PTR_GET_CONST(runtimeConfig_, Models::AIAgentRuntimeConfig) };
    inline Models::AIAgentRuntimeConfig runtimeConfig() { DARABONBA_PTR_GET(runtimeConfig_, Models::AIAgentRuntimeConfig) };
    inline DescribeAIAgentInstanceResponseBodyInstance& setRuntimeConfig(const Models::AIAgentRuntimeConfig & runtimeConfig) { DARABONBA_PTR_SET_VALUE(runtimeConfig_, runtimeConfig) };
    inline DescribeAIAgentInstanceResponseBodyInstance& setRuntimeConfig(Models::AIAgentRuntimeConfig && runtimeConfig) { DARABONBA_PTR_SET_RVALUE(runtimeConfig_, runtimeConfig) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribeAIAgentInstanceResponseBodyInstance& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAIAgentInstanceResponseBodyInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const Models::AIAgentTemplateConfig & templateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, Models::AIAgentTemplateConfig) };
    inline Models::AIAgentTemplateConfig templateConfig() { DARABONBA_PTR_GET(templateConfig_, Models::AIAgentTemplateConfig) };
    inline DescribeAIAgentInstanceResponseBodyInstance& setTemplateConfig(const Models::AIAgentTemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline DescribeAIAgentInstanceResponseBodyInstance& setTemplateConfig(Models::AIAgentTemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline DescribeAIAgentInstanceResponseBodyInstance& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<Models::AIAgentConfig> agentConfig_ = nullptr;
    // The URL of the call log file.
    std::shared_ptr<string> callLogUrl_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The runtime configurations of the AI agent.
    std::shared_ptr<Models::AIAgentRuntimeConfig> runtimeConfig_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    // The state of the AI agent. Valid values: Finished and Executing.
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
