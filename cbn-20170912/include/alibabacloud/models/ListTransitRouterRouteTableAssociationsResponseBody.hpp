// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLEASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLEASSOCIATIONSRESPONSEBODY_HPP_
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
  class ListTransitRouterRouteTableAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteTableAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterAssociations, transitRouterAssociations_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteTableAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAssociations, transitRouterAssociations_);
    };
    ListTransitRouterRouteTableAssociationsResponseBody() = default ;
    ListTransitRouterRouteTableAssociationsResponseBody(const ListTransitRouterRouteTableAssociationsResponseBody &) = default ;
    ListTransitRouterRouteTableAssociationsResponseBody(ListTransitRouterRouteTableAssociationsResponseBody &&) = default ;
    ListTransitRouterRouteTableAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteTableAssociationsResponseBody() = default ;
    ListTransitRouterRouteTableAssociationsResponseBody& operator=(const ListTransitRouterRouteTableAssociationsResponseBody &) = default ;
    ListTransitRouterRouteTableAssociationsResponseBody& operator=(ListTransitRouterRouteTableAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitRouterAssociations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitRouterAssociations& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
      };
      friend void from_json(const Darabonba::Json& j, TransitRouterAssociations& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
      };
      TransitRouterAssociations() = default ;
      TransitRouterAssociations(const TransitRouterAssociations &) = default ;
      TransitRouterAssociations(TransitRouterAssociations &&) = default ;
      TransitRouterAssociations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransitRouterAssociations() = default ;
      TransitRouterAssociations& operator=(const TransitRouterAssociations &) = default ;
      TransitRouterAssociations& operator=(TransitRouterAssociations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->status_ == nullptr && this->transitRouterAttachmentId_ == nullptr && this->transitRouterRouteTableId_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline TransitRouterAssociations& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline TransitRouterAssociations& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TransitRouterAssociations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // transitRouterAttachmentId Field Functions 
      bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
      void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
      inline string getTransitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
      inline TransitRouterAssociations& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


      // transitRouterRouteTableId Field Functions 
      bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
      void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
      inline string getTransitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
      inline TransitRouterAssociations& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


    protected:
      // The ID of the next hop.
      shared_ptr<string> resourceId_ {};
      // The type of next hop. Valid values:
      // 
      // *   **VPC**: VPC
      // *   **VBR**: VBR
      // *   **TR**: transit router
      // *   **VPN** :VPN attachment
      shared_ptr<string> resourceType_ {};
      // The status of the associated forwarding correlation. Valid values:
      // 
      // *   **Active**: The associated forwarding correlation is available.
      // *   **Associating**: The associated forwarding correlation is being created.
      // *   **Dissociating**: The associated forwarding correlation is being deleted.
      // *   **Deleted**: The associated forwarding correlation is deleted.
      shared_ptr<string> status_ {};
      // The ID of the network instance connection.
      shared_ptr<string> transitRouterAttachmentId_ {};
      // The ID of the route table of the Enterprise Edition transit router.
      shared_ptr<string> transitRouterRouteTableId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->transitRouterAssociations_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterRouteTableAssociationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterRouteTableAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterRouteTableAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterRouteTableAssociationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterAssociations Field Functions 
    bool hasTransitRouterAssociations() const { return this->transitRouterAssociations_ != nullptr;};
    void deleteTransitRouterAssociations() { this->transitRouterAssociations_ = nullptr;};
    inline const vector<ListTransitRouterRouteTableAssociationsResponseBody::TransitRouterAssociations> & getTransitRouterAssociations() const { DARABONBA_PTR_GET_CONST(transitRouterAssociations_, vector<ListTransitRouterRouteTableAssociationsResponseBody::TransitRouterAssociations>) };
    inline vector<ListTransitRouterRouteTableAssociationsResponseBody::TransitRouterAssociations> getTransitRouterAssociations() { DARABONBA_PTR_GET(transitRouterAssociations_, vector<ListTransitRouterRouteTableAssociationsResponseBody::TransitRouterAssociations>) };
    inline ListTransitRouterRouteTableAssociationsResponseBody& setTransitRouterAssociations(const vector<ListTransitRouterRouteTableAssociationsResponseBody::TransitRouterAssociations> & transitRouterAssociations) { DARABONBA_PTR_SET_VALUE(transitRouterAssociations_, transitRouterAssociations) };
    inline ListTransitRouterRouteTableAssociationsResponseBody& setTransitRouterAssociations(vector<ListTransitRouterRouteTableAssociationsResponseBody::TransitRouterAssociations> && transitRouterAssociations) { DARABONBA_PTR_SET_RVALUE(transitRouterAssociations_, transitRouterAssociations) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If **NextToken** was not returned, it indicates that no additional results exist.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // A list of associated forwarding correlations.
    shared_ptr<vector<ListTransitRouterRouteTableAssociationsResponseBody::TransitRouterAssociations>> transitRouterAssociations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
