// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCERELATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCERELATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateResourceRelationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateResourceRelationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceRelations, resourceRelations_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateResourceRelationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceRelations, resourceRelations_);
    };
    ListAggregateResourceRelationsResponseBody() = default ;
    ListAggregateResourceRelationsResponseBody(const ListAggregateResourceRelationsResponseBody &) = default ;
    ListAggregateResourceRelationsResponseBody(ListAggregateResourceRelationsResponseBody &&) = default ;
    ListAggregateResourceRelationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateResourceRelationsResponseBody() = default ;
    ListAggregateResourceRelationsResponseBody& operator=(const ListAggregateResourceRelationsResponseBody &) = default ;
    ListAggregateResourceRelationsResponseBody& operator=(ListAggregateResourceRelationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceRelations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceRelations& obj) { 
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(ResourceRelationList, resourceRelationList_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceRelations& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(ResourceRelationList, resourceRelationList_);
      };
      ResourceRelations() = default ;
      ResourceRelations(const ResourceRelations &) = default ;
      ResourceRelations(ResourceRelations &&) = default ;
      ResourceRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceRelations() = default ;
      ResourceRelations& operator=(const ResourceRelations &) = default ;
      ResourceRelations& operator=(ResourceRelations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceRelationList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceRelationList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(RelationType, relationType_);
          DARABONBA_PTR_TO_JSON(SourceResourceId, sourceResourceId_);
          DARABONBA_PTR_TO_JSON(SourceResourceRegionId, sourceResourceRegionId_);
          DARABONBA_PTR_TO_JSON(SourceResourceType, sourceResourceType_);
          DARABONBA_PTR_TO_JSON(TargetResourceId, targetResourceId_);
          DARABONBA_PTR_TO_JSON(TargetResourceType, targetResourceType_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceRelationList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
          DARABONBA_PTR_FROM_JSON(SourceResourceId, sourceResourceId_);
          DARABONBA_PTR_FROM_JSON(SourceResourceRegionId, sourceResourceRegionId_);
          DARABONBA_PTR_FROM_JSON(SourceResourceType, sourceResourceType_);
          DARABONBA_PTR_FROM_JSON(TargetResourceId, targetResourceId_);
          DARABONBA_PTR_FROM_JSON(TargetResourceType, targetResourceType_);
        };
        ResourceRelationList() = default ;
        ResourceRelationList(const ResourceRelationList &) = default ;
        ResourceRelationList(ResourceRelationList &&) = default ;
        ResourceRelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceRelationList() = default ;
        ResourceRelationList& operator=(const ResourceRelationList &) = default ;
        ResourceRelationList& operator=(ResourceRelationList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->relationType_ == nullptr && this->sourceResourceId_ == nullptr && this->sourceResourceRegionId_ == nullptr && this->sourceResourceType_ == nullptr && this->targetResourceId_ == nullptr
        && this->targetResourceType_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
        inline ResourceRelationList& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // relationType Field Functions 
        bool hasRelationType() const { return this->relationType_ != nullptr;};
        void deleteRelationType() { this->relationType_ = nullptr;};
        inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
        inline ResourceRelationList& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


        // sourceResourceId Field Functions 
        bool hasSourceResourceId() const { return this->sourceResourceId_ != nullptr;};
        void deleteSourceResourceId() { this->sourceResourceId_ = nullptr;};
        inline string getSourceResourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceResourceId_, "") };
        inline ResourceRelationList& setSourceResourceId(string sourceResourceId) { DARABONBA_PTR_SET_VALUE(sourceResourceId_, sourceResourceId) };


        // sourceResourceRegionId Field Functions 
        bool hasSourceResourceRegionId() const { return this->sourceResourceRegionId_ != nullptr;};
        void deleteSourceResourceRegionId() { this->sourceResourceRegionId_ = nullptr;};
        inline string getSourceResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceResourceRegionId_, "") };
        inline ResourceRelationList& setSourceResourceRegionId(string sourceResourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceResourceRegionId_, sourceResourceRegionId) };


        // sourceResourceType Field Functions 
        bool hasSourceResourceType() const { return this->sourceResourceType_ != nullptr;};
        void deleteSourceResourceType() { this->sourceResourceType_ = nullptr;};
        inline string getSourceResourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceResourceType_, "") };
        inline ResourceRelationList& setSourceResourceType(string sourceResourceType) { DARABONBA_PTR_SET_VALUE(sourceResourceType_, sourceResourceType) };


        // targetResourceId Field Functions 
        bool hasTargetResourceId() const { return this->targetResourceId_ != nullptr;};
        void deleteTargetResourceId() { this->targetResourceId_ = nullptr;};
        inline string getTargetResourceId() const { DARABONBA_PTR_GET_DEFAULT(targetResourceId_, "") };
        inline ResourceRelationList& setTargetResourceId(string targetResourceId) { DARABONBA_PTR_SET_VALUE(targetResourceId_, targetResourceId) };


        // targetResourceType Field Functions 
        bool hasTargetResourceType() const { return this->targetResourceType_ != nullptr;};
        void deleteTargetResourceType() { this->targetResourceType_ = nullptr;};
        inline string getTargetResourceType() const { DARABONBA_PTR_GET_DEFAULT(targetResourceType_, "") };
        inline ResourceRelationList& setTargetResourceType(string targetResourceType) { DARABONBA_PTR_SET_VALUE(targetResourceType_, targetResourceType) };


      protected:
        // The Alibaba Cloud account ID of the resource owner.
        shared_ptr<int64_t> accountId_ {};
        // The type of the relationship between the resource and the object.
        // 
        // Valid values:
        // 
        // *   IsContained: The object is included as part of the resource.
        // *   IsAttachedTo: The object is added to the resource.
        // *   IsAssociatedIn: The object is associated with the resource.
        // *   Contains: The object contains the resource.
        shared_ptr<string> relationType_ {};
        // The resource ID of the current resource.
        shared_ptr<string> sourceResourceId_ {};
        // The region ID of the current resource.
        shared_ptr<string> sourceResourceRegionId_ {};
        // The type of the resource.
        shared_ptr<string> sourceResourceType_ {};
        // The resource ID of the resource that is associated with the object.
        shared_ptr<string> targetResourceId_ {};
        // The type of the resource that is associated with the object.
        shared_ptr<string> targetResourceType_ {};
      };

      virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->resourceRelationList_ == nullptr; };
      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline ResourceRelations& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline ResourceRelations& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // resourceRelationList Field Functions 
      bool hasResourceRelationList() const { return this->resourceRelationList_ != nullptr;};
      void deleteResourceRelationList() { this->resourceRelationList_ = nullptr;};
      inline const vector<ResourceRelations::ResourceRelationList> & getResourceRelationList() const { DARABONBA_PTR_GET_CONST(resourceRelationList_, vector<ResourceRelations::ResourceRelationList>) };
      inline vector<ResourceRelations::ResourceRelationList> getResourceRelationList() { DARABONBA_PTR_GET(resourceRelationList_, vector<ResourceRelations::ResourceRelationList>) };
      inline ResourceRelations& setResourceRelationList(const vector<ResourceRelations::ResourceRelationList> & resourceRelationList) { DARABONBA_PTR_SET_VALUE(resourceRelationList_, resourceRelationList) };
      inline ResourceRelations& setResourceRelationList(vector<ResourceRelations::ResourceRelationList> && resourceRelationList) { DARABONBA_PTR_SET_RVALUE(resourceRelationList_, resourceRelationList) };


    protected:
      // The maximum number of entries returned on each page.
      shared_ptr<int32_t> maxResults_ {};
      // The token that was used to initiate the next request.
      shared_ptr<string> nextToken_ {};
      // An array that contains the relationships.
      shared_ptr<vector<ResourceRelations::ResourceRelationList>> resourceRelationList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceRelations_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateResourceRelationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceRelations Field Functions 
    bool hasResourceRelations() const { return this->resourceRelations_ != nullptr;};
    void deleteResourceRelations() { this->resourceRelations_ = nullptr;};
    inline const ListAggregateResourceRelationsResponseBody::ResourceRelations & getResourceRelations() const { DARABONBA_PTR_GET_CONST(resourceRelations_, ListAggregateResourceRelationsResponseBody::ResourceRelations) };
    inline ListAggregateResourceRelationsResponseBody::ResourceRelations getResourceRelations() { DARABONBA_PTR_GET(resourceRelations_, ListAggregateResourceRelationsResponseBody::ResourceRelations) };
    inline ListAggregateResourceRelationsResponseBody& setResourceRelations(const ListAggregateResourceRelationsResponseBody::ResourceRelations & resourceRelations) { DARABONBA_PTR_SET_VALUE(resourceRelations_, resourceRelations) };
    inline ListAggregateResourceRelationsResponseBody& setResourceRelations(ListAggregateResourceRelationsResponseBody::ResourceRelations && resourceRelations) { DARABONBA_PTR_SET_RVALUE(resourceRelations_, resourceRelations) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The result of the relationship.
    shared_ptr<ListAggregateResourceRelationsResponseBody::ResourceRelations> resourceRelations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
