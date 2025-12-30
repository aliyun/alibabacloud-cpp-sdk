// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIAGENTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIAGENTINSTANCERESPONSEBODY_HPP_
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
  class DescribeAIAgentInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIAgentInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIAgentInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAIAgentInstanceResponseBody() = default ;
    DescribeAIAgentInstanceResponseBody(const DescribeAIAgentInstanceResponseBody &) = default ;
    DescribeAIAgentInstanceResponseBody(DescribeAIAgentInstanceResponseBody &&) = default ;
    DescribeAIAgentInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIAgentInstanceResponseBody() = default ;
    DescribeAIAgentInstanceResponseBody& operator=(const DescribeAIAgentInstanceResponseBody &) = default ;
    DescribeAIAgentInstanceResponseBody& operator=(DescribeAIAgentInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instance& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Instance& obj) { 
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
      Instance() = default ;
      Instance(const Instance &) = default ;
      Instance(Instance &&) = default ;
      Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instance() = default ;
      Instance& operator=(const Instance &) = default ;
      Instance& operator=(Instance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentConfig_ == nullptr
        && this->callLogUrl_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->runtimeConfig_ == nullptr && this->sessionId_ == nullptr
        && this->status_ == nullptr && this->templateConfig_ == nullptr && this->userData_ == nullptr; };
      // agentConfig Field Functions 
      bool hasAgentConfig() const { return this->agentConfig_ != nullptr;};
      void deleteAgentConfig() { this->agentConfig_ = nullptr;};
      inline const AIAgentConfig & getAgentConfig() const { DARABONBA_PTR_GET_CONST(agentConfig_, AIAgentConfig) };
      inline AIAgentConfig getAgentConfig() { DARABONBA_PTR_GET(agentConfig_, AIAgentConfig) };
      inline Instance& setAgentConfig(const AIAgentConfig & agentConfig) { DARABONBA_PTR_SET_VALUE(agentConfig_, agentConfig) };
      inline Instance& setAgentConfig(AIAgentConfig && agentConfig) { DARABONBA_PTR_SET_RVALUE(agentConfig_, agentConfig) };


      // callLogUrl Field Functions 
      bool hasCallLogUrl() const { return this->callLogUrl_ != nullptr;};
      void deleteCallLogUrl() { this->callLogUrl_ = nullptr;};
      inline string getCallLogUrl() const { DARABONBA_PTR_GET_DEFAULT(callLogUrl_, "") };
      inline Instance& setCallLogUrl(string callLogUrl) { DARABONBA_PTR_SET_VALUE(callLogUrl_, callLogUrl) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Instance& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Instance& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // runtimeConfig Field Functions 
      bool hasRuntimeConfig() const { return this->runtimeConfig_ != nullptr;};
      void deleteRuntimeConfig() { this->runtimeConfig_ = nullptr;};
      inline const AIAgentRuntimeConfig & getRuntimeConfig() const { DARABONBA_PTR_GET_CONST(runtimeConfig_, AIAgentRuntimeConfig) };
      inline AIAgentRuntimeConfig getRuntimeConfig() { DARABONBA_PTR_GET(runtimeConfig_, AIAgentRuntimeConfig) };
      inline Instance& setRuntimeConfig(const AIAgentRuntimeConfig & runtimeConfig) { DARABONBA_PTR_SET_VALUE(runtimeConfig_, runtimeConfig) };
      inline Instance& setRuntimeConfig(AIAgentRuntimeConfig && runtimeConfig) { DARABONBA_PTR_SET_RVALUE(runtimeConfig_, runtimeConfig) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Instance& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Instance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateConfig Field Functions 
      bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
      void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
      inline const AIAgentTemplateConfig & getTemplateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, AIAgentTemplateConfig) };
      inline AIAgentTemplateConfig getTemplateConfig() { DARABONBA_PTR_GET(templateConfig_, AIAgentTemplateConfig) };
      inline Instance& setTemplateConfig(const AIAgentTemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
      inline Instance& setTemplateConfig(AIAgentTemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline Instance& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      shared_ptr<AIAgentConfig> agentConfig_ {};
      // The URL of the call log file.
      shared_ptr<string> callLogUrl_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      // The runtime configurations of the AI agent.
      shared_ptr<AIAgentRuntimeConfig> runtimeConfig_ {};
      shared_ptr<string> sessionId_ {};
      // The state of the AI agent. Valid values: Finished and Executing.
      shared_ptr<string> status_ {};
      // The template configurations of the AI agent.
      shared_ptr<AIAgentTemplateConfig> templateConfig_ {};
      // The custom information.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->instance_ == nullptr
        && this->requestId_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const DescribeAIAgentInstanceResponseBody::Instance & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, DescribeAIAgentInstanceResponseBody::Instance) };
    inline DescribeAIAgentInstanceResponseBody::Instance getInstance() { DARABONBA_PTR_GET(instance_, DescribeAIAgentInstanceResponseBody::Instance) };
    inline DescribeAIAgentInstanceResponseBody& setInstance(const DescribeAIAgentInstanceResponseBody::Instance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline DescribeAIAgentInstanceResponseBody& setInstance(DescribeAIAgentInstanceResponseBody::Instance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIAgentInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the AI agent.
    shared_ptr<DescribeAIAgentInstanceResponseBody::Instance> instance_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
