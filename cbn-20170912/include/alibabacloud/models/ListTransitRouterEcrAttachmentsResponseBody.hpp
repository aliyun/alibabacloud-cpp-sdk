// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERECRATTACHMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERECRATTACHMENTSRESPONSEBODY_HPP_
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
  class ListTransitRouterEcrAttachmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterEcrAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachments, transitRouterAttachments_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterEcrAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachments, transitRouterAttachments_);
    };
    ListTransitRouterEcrAttachmentsResponseBody() = default ;
    ListTransitRouterEcrAttachmentsResponseBody(const ListTransitRouterEcrAttachmentsResponseBody &) = default ;
    ListTransitRouterEcrAttachmentsResponseBody(ListTransitRouterEcrAttachmentsResponseBody &&) = default ;
    ListTransitRouterEcrAttachmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterEcrAttachmentsResponseBody() = default ;
    ListTransitRouterEcrAttachmentsResponseBody& operator=(const ListTransitRouterEcrAttachmentsResponseBody &) = default ;
    ListTransitRouterEcrAttachmentsResponseBody& operator=(ListTransitRouterEcrAttachmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitRouterAttachments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitRouterAttachments& obj) { 
        DARABONBA_PTR_TO_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
        DARABONBA_PTR_TO_JSON(CenId, cenId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
        DARABONBA_PTR_TO_JSON(EcrOwnerId, ecrOwnerId_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_TO_JSON(TransitRouterRegionId, transitRouterRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, TransitRouterAttachments& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
        DARABONBA_PTR_FROM_JSON(CenId, cenId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
        DARABONBA_PTR_FROM_JSON(EcrOwnerId, ecrOwnerId_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRegionId, transitRouterRegionId_);
      };
      TransitRouterAttachments() = default ;
      TransitRouterAttachments(const TransitRouterAttachments &) = default ;
      TransitRouterAttachments(TransitRouterAttachments &&) = default ;
      TransitRouterAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransitRouterAttachments() = default ;
      TransitRouterAttachments& operator=(const TransitRouterAttachments &) = default ;
      TransitRouterAttachments& operator=(TransitRouterAttachments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->autoPublishRouteEnabled_ == nullptr
        && this->cenId_ == nullptr && this->creationTime_ == nullptr && this->ecrId_ == nullptr && this->ecrOwnerId_ == nullptr && this->orderType_ == nullptr
        && this->resourceType_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->transitRouterAttachmentDescription_ == nullptr && this->transitRouterAttachmentId_ == nullptr
        && this->transitRouterAttachmentName_ == nullptr && this->transitRouterId_ == nullptr && this->transitRouterRegionId_ == nullptr; };
      // autoPublishRouteEnabled Field Functions 
      bool hasAutoPublishRouteEnabled() const { return this->autoPublishRouteEnabled_ != nullptr;};
      void deleteAutoPublishRouteEnabled() { this->autoPublishRouteEnabled_ = nullptr;};
      inline bool getAutoPublishRouteEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoPublishRouteEnabled_, false) };
      inline TransitRouterAttachments& setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) { DARABONBA_PTR_SET_VALUE(autoPublishRouteEnabled_, autoPublishRouteEnabled) };


      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline TransitRouterAttachments& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline TransitRouterAttachments& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // ecrId Field Functions 
      bool hasEcrId() const { return this->ecrId_ != nullptr;};
      void deleteEcrId() { this->ecrId_ = nullptr;};
      inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
      inline TransitRouterAttachments& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


      // ecrOwnerId Field Functions 
      bool hasEcrOwnerId() const { return this->ecrOwnerId_ != nullptr;};
      void deleteEcrOwnerId() { this->ecrOwnerId_ = nullptr;};
      inline int64_t getEcrOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ecrOwnerId_, 0L) };
      inline TransitRouterAttachments& setEcrOwnerId(int64_t ecrOwnerId) { DARABONBA_PTR_SET_VALUE(ecrOwnerId_, ecrOwnerId) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline TransitRouterAttachments& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline TransitRouterAttachments& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TransitRouterAttachments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<TransitRouterAttachments::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TransitRouterAttachments::Tags>) };
      inline vector<TransitRouterAttachments::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<TransitRouterAttachments::Tags>) };
      inline TransitRouterAttachments& setTags(const vector<TransitRouterAttachments::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline TransitRouterAttachments& setTags(vector<TransitRouterAttachments::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // transitRouterAttachmentDescription Field Functions 
      bool hasTransitRouterAttachmentDescription() const { return this->transitRouterAttachmentDescription_ != nullptr;};
      void deleteTransitRouterAttachmentDescription() { this->transitRouterAttachmentDescription_ = nullptr;};
      inline string getTransitRouterAttachmentDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentDescription_, "") };
      inline TransitRouterAttachments& setTransitRouterAttachmentDescription(string transitRouterAttachmentDescription) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentDescription_, transitRouterAttachmentDescription) };


      // transitRouterAttachmentId Field Functions 
      bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
      void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
      inline string getTransitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
      inline TransitRouterAttachments& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


      // transitRouterAttachmentName Field Functions 
      bool hasTransitRouterAttachmentName() const { return this->transitRouterAttachmentName_ != nullptr;};
      void deleteTransitRouterAttachmentName() { this->transitRouterAttachmentName_ = nullptr;};
      inline string getTransitRouterAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentName_, "") };
      inline TransitRouterAttachments& setTransitRouterAttachmentName(string transitRouterAttachmentName) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentName_, transitRouterAttachmentName) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline TransitRouterAttachments& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


      // transitRouterRegionId Field Functions 
      bool hasTransitRouterRegionId() const { return this->transitRouterRegionId_ != nullptr;};
      void deleteTransitRouterRegionId() { this->transitRouterRegionId_ = nullptr;};
      inline string getTransitRouterRegionId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRegionId_, "") };
      inline TransitRouterAttachments& setTransitRouterRegionId(string transitRouterRegionId) { DARABONBA_PTR_SET_VALUE(transitRouterRegionId_, transitRouterRegionId) };


    protected:
      // Indicates whether the Enterprise Edition transit router can automatically advertise routes to ECRs.
      // 
      // The value is **true**, which indicates that the Enterprise Edition transit router can automatically advertise routes to ECRs.
      shared_ptr<bool> autoPublishRouteEnabled_ {};
      // The ID of the CEN instance.
      shared_ptr<string> cenId_ {};
      // The time when the ECR connection was created.
      // 
      // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The ID of the ECR with which the ECR connection is associated.
      shared_ptr<string> ecrId_ {};
      // The ID of the Alibaba Cloud account to which the ECR connection belongs.
      shared_ptr<int64_t> ecrOwnerId_ {};
      // The entity that pays the fees of the network instance. Valid values: Valid values:
      // 
      // *   **PayByCenOwner**: The Alibaba Cloud account to which the transit router belongs pays the connection and data forwarding fees of the ECR.
      // *   **PayByResourceOwner**: The Alibaba Cloud account to which the ECR belongs pays the connection and data forwarding fees of the ECR.
      shared_ptr<string> orderType_ {};
      // The type of resource to which the transit router is connected. Valid values:
      // 
      // The value is **ECR**, which indicates ECR connections.
      shared_ptr<string> resourceType_ {};
      // The status of the ECR connection. Valid values:
      // 
      // *   **Attached**
      // *   **Attaching**
      // *   **Detaching**
      shared_ptr<string> status_ {};
      // The tags.
      shared_ptr<vector<TransitRouterAttachments::Tags>> tags_ {};
      // The description of the ECR connection.
      shared_ptr<string> transitRouterAttachmentDescription_ {};
      // The ID of the ECR connection.
      shared_ptr<string> transitRouterAttachmentId_ {};
      // The name of the ECR connection.
      shared_ptr<string> transitRouterAttachmentName_ {};
      // The ID of the Enterprise Edition transit router.
      shared_ptr<string> transitRouterId_ {};
      // The region ID of the transit router.
      // 
      // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
      shared_ptr<string> transitRouterRegionId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->transitRouterAttachments_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterEcrAttachmentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterEcrAttachmentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterAttachments Field Functions 
    bool hasTransitRouterAttachments() const { return this->transitRouterAttachments_ != nullptr;};
    void deleteTransitRouterAttachments() { this->transitRouterAttachments_ = nullptr;};
    inline const vector<ListTransitRouterEcrAttachmentsResponseBody::TransitRouterAttachments> & getTransitRouterAttachments() const { DARABONBA_PTR_GET_CONST(transitRouterAttachments_, vector<ListTransitRouterEcrAttachmentsResponseBody::TransitRouterAttachments>) };
    inline vector<ListTransitRouterEcrAttachmentsResponseBody::TransitRouterAttachments> getTransitRouterAttachments() { DARABONBA_PTR_GET(transitRouterAttachments_, vector<ListTransitRouterEcrAttachmentsResponseBody::TransitRouterAttachments>) };
    inline ListTransitRouterEcrAttachmentsResponseBody& setTransitRouterAttachments(const vector<ListTransitRouterEcrAttachmentsResponseBody::TransitRouterAttachments> & transitRouterAttachments) { DARABONBA_PTR_SET_VALUE(transitRouterAttachments_, transitRouterAttachments) };
    inline ListTransitRouterEcrAttachmentsResponseBody& setTransitRouterAttachments(vector<ListTransitRouterEcrAttachmentsResponseBody::TransitRouterAttachments> && transitRouterAttachments) { DARABONBA_PTR_SET_RVALUE(transitRouterAttachments_, transitRouterAttachments) };


  protected:
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The information about the ECR connections.
    shared_ptr<vector<ListTransitRouterEcrAttachmentsResponseBody::TransitRouterAttachments>> transitRouterAttachments_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
