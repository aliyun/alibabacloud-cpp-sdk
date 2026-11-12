// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSANDBOXESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSANDBOXESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListSandboxesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSandboxesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(searchText, searchText_);
      DARABONBA_PTR_TO_JSON(serviceEndpointId, serviceEndpointId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSandboxesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(searchText, searchText_);
      DARABONBA_PTR_FROM_JSON(serviceEndpointId, serviceEndpointId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    ListSandboxesRequest() = default ;
    ListSandboxesRequest(const ListSandboxesRequest &) = default ;
    ListSandboxesRequest(ListSandboxesRequest &&) = default ;
    ListSandboxesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSandboxesRequest() = default ;
    ListSandboxesRequest& operator=(const ListSandboxesRequest &) = default ;
    ListSandboxesRequest& operator=(ListSandboxesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->searchText_ == nullptr && this->serviceEndpointId_ == nullptr && this->sessionId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSandboxesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSandboxesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // searchText Field Functions 
    bool hasSearchText() const { return this->searchText_ != nullptr;};
    void deleteSearchText() { this->searchText_ = nullptr;};
    inline string getSearchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
    inline ListSandboxesRequest& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


    // serviceEndpointId Field Functions 
    bool hasServiceEndpointId() const { return this->serviceEndpointId_ != nullptr;};
    void deleteServiceEndpointId() { this->serviceEndpointId_ = nullptr;};
    inline string getServiceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(serviceEndpointId_, "") };
    inline ListSandboxesRequest& setServiceEndpointId(string serviceEndpointId) { DARABONBA_PTR_SET_VALUE(serviceEndpointId_, serviceEndpointId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListSandboxesRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The maximum number of entries to return per page. Default value: 20. Valid values: 1 to 100.
    shared_ptr<int32_t> maxResults_ {};
    // The cursor for querying the next page. When you turn the page, you must keep workspaceId, agentId, searchText, sessionId, and maxResults unchanged.
    shared_ptr<string> nextToken_ {};
    // Performs a case-insensitive fuzzy search by sandbox ID fragment.
    shared_ptr<string> searchText_ {};
    // If this parameter is omitted or left blank, the latest running unit of the agent is queried. If this parameter is specified, the service endpoint must belong to the agent and the target type must be AGENT_VERSION. Otherwise, Resource.NotFound is returned. An independently running service endpoint returns only the sandboxes of its own running unit. If the DEFAULT service endpoint has not taken over independent running, the query falls back to the latest running unit. If a non-DEFAULT service endpoint is not running independently, ServiceEndpointTargetNotReady is returned. If the running unit is not created, an empty list is returned and totalCount is 0, without reporting an error.
    shared_ptr<string> serviceEndpointId_ {};
    // Performs a case-insensitive fuzzy search by current valid session ID fragment.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
