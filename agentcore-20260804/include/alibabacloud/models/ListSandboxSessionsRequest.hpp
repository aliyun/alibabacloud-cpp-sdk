// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSANDBOXSESSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSANDBOXSESSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListSandboxSessionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSandboxSessionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(serviceEndpointId, serviceEndpointId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSandboxSessionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(serviceEndpointId, serviceEndpointId_);
    };
    ListSandboxSessionsRequest() = default ;
    ListSandboxSessionsRequest(const ListSandboxSessionsRequest &) = default ;
    ListSandboxSessionsRequest(ListSandboxSessionsRequest &&) = default ;
    ListSandboxSessionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSandboxSessionsRequest() = default ;
    ListSandboxSessionsRequest& operator=(const ListSandboxSessionsRequest &) = default ;
    ListSandboxSessionsRequest& operator=(ListSandboxSessionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->serviceEndpointId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSandboxSessionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSandboxSessionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // serviceEndpointId Field Functions 
    bool hasServiceEndpointId() const { return this->serviceEndpointId_ != nullptr;};
    void deleteServiceEndpointId() { this->serviceEndpointId_ = nullptr;};
    inline string getServiceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(serviceEndpointId_, "") };
    inline ListSandboxSessionsRequest& setServiceEndpointId(string serviceEndpointId) { DARABONBA_PTR_SET_VALUE(serviceEndpointId_, serviceEndpointId) };


  protected:
    // The maximum number of entries to return per page. Default value: 20. Valid values: 1 to 100.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page. Omit this parameter in the first request. For subsequent requests, use the returned token as is and keep the workspace, agent, instance, and maxResults unchanged. An empty value indicates that no more pages are available.
    shared_ptr<string> nextToken_ {};
    // Must be consistent with the ListSandboxes input parameters used to retrieve the sandboxId. If omitted or left blank, the latest running unit of the agent is queried. If specified, the service endpoint must belong to the agent and the target type must be AGENT_VERSION. Otherwise, Resource.NotFound is returned. If it is not DEFAULT and is not running independently, ServiceEndpointTargetNotReady is returned. If the sandboxId does not belong to the specified running unit, Sandbox.NotFound is returned instead of an empty list.
    shared_ptr<string> serviceEndpointId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
