// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTTEAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTTEAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListAgentTeamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentTeamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentTeamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListAgentTeamsRequest() = default ;
    ListAgentTeamsRequest(const ListAgentTeamsRequest &) = default ;
    ListAgentTeamsRequest(ListAgentTeamsRequest &&) = default ;
    ListAgentTeamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentTeamsRequest() = default ;
    ListAgentTeamsRequest& operator=(const ListAgentTeamsRequest &) = default ;
    ListAgentTeamsRequest& operator=(ListAgentTeamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(agentIds, agentIds_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(agentIds, agentIds_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentIds_ == nullptr; };
      // agentIds Field Functions 
      bool hasAgentIds() const { return this->agentIds_ != nullptr;};
      void deleteAgentIds() { this->agentIds_ = nullptr;};
      inline const vector<string> & getAgentIds() const { DARABONBA_PTR_GET_CONST(agentIds_, vector<string>) };
      inline vector<string> getAgentIds() { DARABONBA_PTR_GET(agentIds_, vector<string>) };
      inline Body& setAgentIds(const vector<string> & agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };
      inline Body& setAgentIds(vector<string> && agentIds) { DARABONBA_PTR_SET_RVALUE(agentIds_, agentIds) };


    protected:
      // The list of agent IDs for which to query team information.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> agentIds_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListAgentTeamsRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListAgentTeamsRequest::Body) };
    inline ListAgentTeamsRequest::Body getBody() { DARABONBA_PTR_GET(body_, ListAgentTeamsRequest::Body) };
    inline ListAgentTeamsRequest& setBody(const ListAgentTeamsRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListAgentTeamsRequest& setBody(ListAgentTeamsRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request parameters for querying the agent team list.
    shared_ptr<ListAgentTeamsRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
