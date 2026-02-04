// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINASSOCIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterMulticastDomainAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterMulticastDomainAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastAssociations, transitRouterMulticastAssociations_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterMulticastDomainAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastAssociations, transitRouterMulticastAssociations_);
    };
    ListTransitRouterMulticastDomainAssociationsResponseBody() = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBody(const ListTransitRouterMulticastDomainAssociationsResponseBody &) = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBody(ListTransitRouterMulticastDomainAssociationsResponseBody &&) = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterMulticastDomainAssociationsResponseBody() = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBody& operator=(const ListTransitRouterMulticastDomainAssociationsResponseBody &) = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBody& operator=(ListTransitRouterMulticastDomainAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitRouterMulticastAssociations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitRouterMulticastAssociations& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      };
      friend void from_json(const Darabonba::Json& j, TransitRouterMulticastAssociations& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      };
      TransitRouterMulticastAssociations() = default ;
      TransitRouterMulticastAssociations(const TransitRouterMulticastAssociations &) = default ;
      TransitRouterMulticastAssociations(TransitRouterMulticastAssociations &&) = default ;
      TransitRouterMulticastAssociations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransitRouterMulticastAssociations() = default ;
      TransitRouterMulticastAssociations& operator=(const TransitRouterMulticastAssociations &) = default ;
      TransitRouterMulticastAssociations& operator=(TransitRouterMulticastAssociations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr && this->transitRouterAttachmentId_ == nullptr && this->transitRouterMulticastDomainId_ == nullptr
        && this->vSwitchId_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline TransitRouterMulticastAssociations& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceOwnerId Field Functions 
      bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
      void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
      inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
      inline TransitRouterMulticastAssociations& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline TransitRouterMulticastAssociations& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TransitRouterMulticastAssociations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // transitRouterAttachmentId Field Functions 
      bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
      void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
      inline string getTransitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
      inline TransitRouterMulticastAssociations& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


      // transitRouterMulticastDomainId Field Functions 
      bool hasTransitRouterMulticastDomainId() const { return this->transitRouterMulticastDomainId_ != nullptr;};
      void deleteTransitRouterMulticastDomainId() { this->transitRouterMulticastDomainId_ = nullptr;};
      inline string getTransitRouterMulticastDomainId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainId_, "") };
      inline TransitRouterMulticastAssociations& setTransitRouterMulticastDomainId(string transitRouterMulticastDomainId) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainId_, transitRouterMulticastDomainId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline TransitRouterMulticastAssociations& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    protected:
      // The ID of the resource associated with the multicast domain.
      shared_ptr<string> resourceId_ {};
      // The ID of the Alibaba Cloud account to which the resource associated with the multicast domain belongs.
      shared_ptr<int64_t> resourceOwnerId_ {};
      // The type of resource associated with the multicast domain.
      // 
      // Valid value: **VPC**.
      shared_ptr<string> resourceType_ {};
      // The association status. Valid values:
      // 
      // *   **Associated**: The resource is associated with the multicast domain.
      // *   **Associating**: The resource is being associated with the multicast domain.
      // *   **Dissociating**: The resource is being disassociated from the multicast domain.
      shared_ptr<string> status_ {};
      // The ID of the network instance connection.
      shared_ptr<string> transitRouterAttachmentId_ {};
      // The ID of the multicast domain.
      shared_ptr<string> transitRouterMulticastDomainId_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vSwitchId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->transitRouterMulticastAssociations_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterMulticastDomainAssociationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterMulticastDomainAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterMulticastDomainAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterMulticastDomainAssociationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterMulticastAssociations Field Functions 
    bool hasTransitRouterMulticastAssociations() const { return this->transitRouterMulticastAssociations_ != nullptr;};
    void deleteTransitRouterMulticastAssociations() { this->transitRouterMulticastAssociations_ = nullptr;};
    inline const vector<ListTransitRouterMulticastDomainAssociationsResponseBody::TransitRouterMulticastAssociations> & getTransitRouterMulticastAssociations() const { DARABONBA_PTR_GET_CONST(transitRouterMulticastAssociations_, vector<ListTransitRouterMulticastDomainAssociationsResponseBody::TransitRouterMulticastAssociations>) };
    inline vector<ListTransitRouterMulticastDomainAssociationsResponseBody::TransitRouterMulticastAssociations> getTransitRouterMulticastAssociations() { DARABONBA_PTR_GET(transitRouterMulticastAssociations_, vector<ListTransitRouterMulticastDomainAssociationsResponseBody::TransitRouterMulticastAssociations>) };
    inline ListTransitRouterMulticastDomainAssociationsResponseBody& setTransitRouterMulticastAssociations(const vector<ListTransitRouterMulticastDomainAssociationsResponseBody::TransitRouterMulticastAssociations> & transitRouterMulticastAssociations) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastAssociations_, transitRouterMulticastAssociations) };
    inline ListTransitRouterMulticastDomainAssociationsResponseBody& setTransitRouterMulticastAssociations(vector<ListTransitRouterMulticastDomainAssociationsResponseBody::TransitRouterMulticastAssociations> && transitRouterMulticastAssociations) { DARABONBA_PTR_SET_RVALUE(transitRouterMulticastAssociations_, transitRouterMulticastAssociations) };


  protected:
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If **NextToken** is empty, it indicates that no subsequent query is to be sent.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The information about the resource associated with the multicast domain.
    shared_ptr<vector<ListTransitRouterMulticastDomainAssociationsResponseBody::TransitRouterMulticastAssociations>> transitRouterMulticastAssociations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
