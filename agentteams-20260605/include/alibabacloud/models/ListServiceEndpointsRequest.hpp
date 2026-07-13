// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEENDPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEENDPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class ListServiceEndpointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceEndpointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Component, component_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceEndpointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Component, component_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
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
    virtual bool empty() const override { return this->component_ == nullptr
        && this->domainType_ == nullptr && this->instanceId_ == nullptr && this->maxResults_ == nullptr && this->networkType_ == nullptr && this->nextToken_ == nullptr
        && this->resourceName_ == nullptr && this->skip_ == nullptr; };
    // component Field Functions 
    bool hasComponent() const { return this->component_ != nullptr;};
    void deleteComponent() { this->component_ = nullptr;};
    inline string getComponent() const { DARABONBA_PTR_GET_DEFAULT(component_, "") };
    inline ListServiceEndpointsRequest& setComponent(string component) { DARABONBA_PTR_SET_VALUE(component_, component) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline ListServiceEndpointsRequest& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListServiceEndpointsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceEndpointsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ListServiceEndpointsRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceEndpointsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListServiceEndpointsRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline string getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, "") };
    inline ListServiceEndpointsRequest& setSkip(string skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


  protected:
    shared_ptr<string> component_ {};
    shared_ptr<string> domainType_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> networkType_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> resourceName_ {};
    shared_ptr<string> skip_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
