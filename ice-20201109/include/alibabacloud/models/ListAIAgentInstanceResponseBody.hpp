// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AIAgentConfig.hpp>
#include <alibabacloud/models/AIAgentRuntimeConfig.hpp>
#include <alibabacloud/models/AIAgentTemplateConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAIAgentInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIAgentInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIAgentInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIAgentInstanceResponseBody() = default ;
    ListAIAgentInstanceResponseBody(const ListAIAgentInstanceResponseBody &) = default ;
    ListAIAgentInstanceResponseBody(ListAIAgentInstanceResponseBody &&) = default ;
    ListAIAgentInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIAgentInstanceResponseBody() = default ;
    ListAIAgentInstanceResponseBody& operator=(const ListAIAgentInstanceResponseBody &) = default ;
    ListAIAgentInstanceResponseBody& operator=(ListAIAgentInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(AgentConfig, agentConfig_);
        DARABONBA_PTR_TO_JSON(CallLogUrl, callLogUrl_);
        DARABONBA_PTR_TO_JSON(RuntimeConfig, runtimeConfig_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentConfig, agentConfig_);
        DARABONBA_PTR_FROM_JSON(CallLogUrl, callLogUrl_);
        DARABONBA_PTR_FROM_JSON(RuntimeConfig, runtimeConfig_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentConfig_ == nullptr
        && this->callLogUrl_ == nullptr && this->runtimeConfig_ == nullptr && this->status_ == nullptr && this->templateConfig_ == nullptr && this->userData_ == nullptr; };
      // agentConfig Field Functions 
      bool hasAgentConfig() const { return this->agentConfig_ != nullptr;};
      void deleteAgentConfig() { this->agentConfig_ = nullptr;};
      inline const AIAgentConfig & getAgentConfig() const { DARABONBA_PTR_GET_CONST(agentConfig_, AIAgentConfig) };
      inline AIAgentConfig getAgentConfig() { DARABONBA_PTR_GET(agentConfig_, AIAgentConfig) };
      inline Instances& setAgentConfig(const AIAgentConfig & agentConfig) { DARABONBA_PTR_SET_VALUE(agentConfig_, agentConfig) };
      inline Instances& setAgentConfig(AIAgentConfig && agentConfig) { DARABONBA_PTR_SET_RVALUE(agentConfig_, agentConfig) };


      // callLogUrl Field Functions 
      bool hasCallLogUrl() const { return this->callLogUrl_ != nullptr;};
      void deleteCallLogUrl() { this->callLogUrl_ = nullptr;};
      inline string getCallLogUrl() const { DARABONBA_PTR_GET_DEFAULT(callLogUrl_, "") };
      inline Instances& setCallLogUrl(string callLogUrl) { DARABONBA_PTR_SET_VALUE(callLogUrl_, callLogUrl) };


      // runtimeConfig Field Functions 
      bool hasRuntimeConfig() const { return this->runtimeConfig_ != nullptr;};
      void deleteRuntimeConfig() { this->runtimeConfig_ = nullptr;};
      inline const AIAgentRuntimeConfig & getRuntimeConfig() const { DARABONBA_PTR_GET_CONST(runtimeConfig_, AIAgentRuntimeConfig) };
      inline AIAgentRuntimeConfig getRuntimeConfig() { DARABONBA_PTR_GET(runtimeConfig_, AIAgentRuntimeConfig) };
      inline Instances& setRuntimeConfig(const AIAgentRuntimeConfig & runtimeConfig) { DARABONBA_PTR_SET_VALUE(runtimeConfig_, runtimeConfig) };
      inline Instances& setRuntimeConfig(AIAgentRuntimeConfig && runtimeConfig) { DARABONBA_PTR_SET_RVALUE(runtimeConfig_, runtimeConfig) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateConfig Field Functions 
      bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
      void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
      inline const AIAgentTemplateConfig & getTemplateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, AIAgentTemplateConfig) };
      inline AIAgentTemplateConfig getTemplateConfig() { DARABONBA_PTR_GET(templateConfig_, AIAgentTemplateConfig) };
      inline Instances& setTemplateConfig(const AIAgentTemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
      inline Instances& setTemplateConfig(AIAgentTemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline Instances& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      shared_ptr<AIAgentConfig> agentConfig_ {};
      // The URL of the call log file for the AI agent. The structure of the file is CallLog in the JSON format.
      shared_ptr<string> callLogUrl_ {};
      // The runtime configurations of the AI agent.
      shared_ptr<AIAgentRuntimeConfig> runtimeConfig_ {};
      // The state of the instance. Valid values:
      // 
      // *   Executing
      // *   Finished
      shared_ptr<string> status_ {};
      // The template configurations of the AI agent.
      shared_ptr<AIAgentTemplateConfig> templateConfig_ {};
      // The custom information.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListAIAgentInstanceResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListAIAgentInstanceResponseBody::Instances>) };
    inline vector<ListAIAgentInstanceResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ListAIAgentInstanceResponseBody::Instances>) };
    inline ListAIAgentInstanceResponseBody& setInstances(const vector<ListAIAgentInstanceResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListAIAgentInstanceResponseBody& setInstances(vector<ListAIAgentInstanceResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIAgentInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of the AI agents.
    shared_ptr<vector<ListAIAgentInstanceResponseBody::Instances>> instances_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
