// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHAREDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSHAREDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListSharedResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSharedResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SharedResources, sharedResources_);
    };
    friend void from_json(const Darabonba::Json& j, ListSharedResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SharedResources, sharedResources_);
    };
    ListSharedResourcesResponseBody() = default ;
    ListSharedResourcesResponseBody(const ListSharedResourcesResponseBody &) = default ;
    ListSharedResourcesResponseBody(ListSharedResourcesResponseBody &&) = default ;
    ListSharedResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSharedResourcesResponseBody() = default ;
    ListSharedResourcesResponseBody& operator=(const ListSharedResourcesResponseBody &) = default ;
    ListSharedResourcesResponseBody& operator=(ListSharedResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SharedResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SharedResources& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
        DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
        DARABONBA_PTR_TO_JSON(ResourceStatusMessage, resourceStatusMessage_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, SharedResources& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
        DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
        DARABONBA_PTR_FROM_JSON(ResourceStatusMessage, resourceStatusMessage_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      SharedResources() = default ;
      SharedResources(const SharedResources &) = default ;
      SharedResources(SharedResources &&) = default ;
      SharedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SharedResources() = default ;
      SharedResources& operator=(const SharedResources &) = default ;
      SharedResources& operator=(SharedResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->resourceArn_ == nullptr && this->resourceId_ == nullptr && this->resourceShareId_ == nullptr && this->resourceStatus_ == nullptr && this->resourceStatusMessage_ == nullptr
        && this->resourceType_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SharedResources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // resourceArn Field Functions 
      bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
      void deleteResourceArn() { this->resourceArn_ = nullptr;};
      inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
      inline SharedResources& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline SharedResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceShareId Field Functions 
      bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
      void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
      inline string getResourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
      inline SharedResources& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


      // resourceStatus Field Functions 
      bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
      void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
      inline string getResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
      inline SharedResources& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


      // resourceStatusMessage Field Functions 
      bool hasResourceStatusMessage() const { return this->resourceStatusMessage_ != nullptr;};
      void deleteResourceStatusMessage() { this->resourceStatusMessage_ = nullptr;};
      inline string getResourceStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(resourceStatusMessage_, "") };
      inline SharedResources& setResourceStatusMessage(string resourceStatusMessage) { DARABONBA_PTR_SET_VALUE(resourceStatusMessage_, resourceStatusMessage) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline SharedResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline SharedResources& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the shared resource was associated with the resource share.
      shared_ptr<string> createTime_ {};
      shared_ptr<string> resourceArn_ {};
      // The ID of the shared resource.
      shared_ptr<string> resourceId_ {};
      // The ID of the resource share.
      shared_ptr<string> resourceShareId_ {};
      // The status of the shared resource. This parameter is returned only when you query the resources that other accounts share with you.
      // 
      // Valid values:
      // 
      // *   Available: The resource is available.
      // *   ZonalResourceInaccessible: The resource is unavailable in the current zone.
      // *   LimitExceeded: The resource is unavailable because the maximum number of resources that other accounts can share with you exceeds the upper limit.
      // *   Unavailable: The resource is unavailable.
      shared_ptr<string> resourceStatus_ {};
      // The cause of the association failure.
      shared_ptr<string> resourceStatusMessage_ {};
      // The type of the shared resource.
      // 
      // For more information about the types of resources that can be shared, see [Services that work with Resource Sharing](https://help.aliyun.com/document_detail/450526.html).
      shared_ptr<string> resourceType_ {};
      // The time when the association of the shared resource was updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->sharedResources_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSharedResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSharedResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sharedResources Field Functions 
    bool hasSharedResources() const { return this->sharedResources_ != nullptr;};
    void deleteSharedResources() { this->sharedResources_ = nullptr;};
    inline const vector<ListSharedResourcesResponseBody::SharedResources> & getSharedResources() const { DARABONBA_PTR_GET_CONST(sharedResources_, vector<ListSharedResourcesResponseBody::SharedResources>) };
    inline vector<ListSharedResourcesResponseBody::SharedResources> getSharedResources() { DARABONBA_PTR_GET(sharedResources_, vector<ListSharedResourcesResponseBody::SharedResources>) };
    inline ListSharedResourcesResponseBody& setSharedResources(const vector<ListSharedResourcesResponseBody::SharedResources> & sharedResources) { DARABONBA_PTR_SET_VALUE(sharedResources_, sharedResources) };
    inline ListSharedResourcesResponseBody& setSharedResources(vector<ListSharedResourcesResponseBody::SharedResources> && sharedResources) { DARABONBA_PTR_SET_RVALUE(sharedResources_, sharedResources) };


  protected:
    // The token that is used to initiate the next request. If the response of the current request is truncated, you can use the token to initiate another request and obtain the remaining records.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information of the shared resources.
    shared_ptr<vector<ListSharedResourcesResponseBody::SharedResources>> sharedResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
