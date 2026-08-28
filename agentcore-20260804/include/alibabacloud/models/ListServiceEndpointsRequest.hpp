// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEENDPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEENDPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListServiceEndpointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceEndpointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(agentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(collaborationComponent, collaborationComponent_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(resourceBindingId, resourceBindingId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceEndpointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(agentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(collaborationComponent, collaborationComponent_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(resourceBindingId, resourceBindingId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
    };
    ListServiceEndpointsRequest() = default ;
    ListServiceEndpointsRequest(const ListServiceEndpointsRequest &) = default ;
    ListServiceEndpointsRequest(ListServiceEndpointsRequest &&) = default ;
    ListServiceEndpointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceEndpointsRequest() = default ;
    ListServiceEndpointsRequest& operator=(const ListServiceEndpointsRequest &) = default ;
    ListServiceEndpointsRequest& operator=(ListServiceEndpointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentVersion_ == nullptr && this->collaborationComponent_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceBindingId_ == nullptr
        && this->status_ == nullptr && this->targetType_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListServiceEndpointsRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline ListServiceEndpointsRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // collaborationComponent Field Functions 
    bool hasCollaborationComponent() const { return this->collaborationComponent_ != nullptr;};
    void deleteCollaborationComponent() { this->collaborationComponent_ = nullptr;};
    inline string getCollaborationComponent() const { DARABONBA_PTR_GET_DEFAULT(collaborationComponent_, "") };
    inline ListServiceEndpointsRequest& setCollaborationComponent(string collaborationComponent) { DARABONBA_PTR_SET_VALUE(collaborationComponent_, collaborationComponent) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceEndpointsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceEndpointsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceBindingId Field Functions 
    bool hasResourceBindingId() const { return this->resourceBindingId_ != nullptr;};
    void deleteResourceBindingId() { this->resourceBindingId_ = nullptr;};
    inline string getResourceBindingId() const { DARABONBA_PTR_GET_DEFAULT(resourceBindingId_, "") };
    inline ListServiceEndpointsRequest& setResourceBindingId(string resourceBindingId) { DARABONBA_PTR_SET_VALUE(resourceBindingId_, resourceBindingId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListServiceEndpointsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListServiceEndpointsRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // Filters by target agent ID.
    shared_ptr<string> agentId_ {};
    // Filters by target agent version number.
    shared_ptr<string> agentVersion_ {};
    // Filters by collaboration component type. Valid values: MATRIX_CLIENT, MATRIX_FEDERATION, ELEMENT_WEB.
    shared_ptr<string> collaborationComponent_ {};
    // The maximum number of records per page. Valid values: 1 to 100. If this parameter is not specified, 20 records are returned by default.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. Do not specify this parameter for the first request. For subsequent requests, specify the nextToken value returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // Filters by the workspace resource binding ID of the target collaboration component.
    shared_ptr<string> resourceBindingId_ {};
    // Filters by service endpoint status. Valid values: CREATING, READY, UPDATING, DEGRADED, DISABLED, DELETING.
    shared_ptr<string> status_ {};
    // Filters by target type. Valid values: AGENT_VERSION, TEAM_COLLABORATION.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
