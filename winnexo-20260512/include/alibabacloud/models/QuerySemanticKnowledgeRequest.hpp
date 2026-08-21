// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSEMANTICKNOWLEDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSEMANTICKNOWLEDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class QuerySemanticKnowledgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySemanticKnowledgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentName, agentName_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySemanticKnowledgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentName, agentName_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    QuerySemanticKnowledgeRequest() = default ;
    QuerySemanticKnowledgeRequest(const QuerySemanticKnowledgeRequest &) = default ;
    QuerySemanticKnowledgeRequest(QuerySemanticKnowledgeRequest &&) = default ;
    QuerySemanticKnowledgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySemanticKnowledgeRequest() = default ;
    QuerySemanticKnowledgeRequest& operator=(const QuerySemanticKnowledgeRequest &) = default ;
    QuerySemanticKnowledgeRequest& operator=(QuerySemanticKnowledgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentName_ == nullptr
        && this->graphName_ == nullptr && this->query_ == nullptr && this->tenantId_ == nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline QuerySemanticKnowledgeRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline QuerySemanticKnowledgeRequest& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline QuerySemanticKnowledgeRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline QuerySemanticKnowledgeRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The digital human name. Call listAuthorizedAgents first to retrieve the list of USE permissions.
    // 
    // This parameter is required.
    shared_ptr<string> agentName_ {};
    // The knowledge graph name. Call listGraphs first to retrieve available graphs.
    // 
    // This parameter is required.
    shared_ptr<string> graphName_ {};
    // The natural language query question.
    // 
    // This parameter is required.
    shared_ptr<string> query_ {};
    // The tenant ID. This is a common parameter. In winnexo-cli, pass it explicitly with --tenant-id.
    // 
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
