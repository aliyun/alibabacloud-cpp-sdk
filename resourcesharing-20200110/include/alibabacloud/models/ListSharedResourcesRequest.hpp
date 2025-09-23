// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHAREDRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSHAREDRESOURCESREQUEST_HPP_
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
  class ListSharedResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSharedResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceArns, resourceArns_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_TO_JSON(ResourceShareIds, resourceShareIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, ListSharedResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceArns, resourceArns_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_FROM_JSON(ResourceShareIds, resourceShareIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    ListSharedResourcesRequest() = default ;
    ListSharedResourcesRequest(const ListSharedResourcesRequest &) = default ;
    ListSharedResourcesRequest(ListSharedResourcesRequest &&) = default ;
    ListSharedResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSharedResourcesRequest() = default ;
    ListSharedResourcesRequest& operator=(const ListSharedResourcesRequest &) = default ;
    ListSharedResourcesRequest& operator=(ListSharedResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->resourceArns_ != nullptr && this->resourceIds_ != nullptr && this->resourceOwner_ != nullptr && this->resourceShareIds_ != nullptr
        && this->resourceType_ != nullptr && this->target_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSharedResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSharedResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceArns Field Functions 
    bool hasResourceArns() const { return this->resourceArns_ != nullptr;};
    void deleteResourceArns() { this->resourceArns_ = nullptr;};
    inline const vector<string> & resourceArns() const { DARABONBA_PTR_GET_CONST(resourceArns_, vector<string>) };
    inline vector<string> resourceArns() { DARABONBA_PTR_GET(resourceArns_, vector<string>) };
    inline ListSharedResourcesRequest& setResourceArns(const vector<string> & resourceArns) { DARABONBA_PTR_SET_VALUE(resourceArns_, resourceArns) };
    inline ListSharedResourcesRequest& setResourceArns(vector<string> && resourceArns) { DARABONBA_PTR_SET_RVALUE(resourceArns_, resourceArns) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & resourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> resourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline ListSharedResourcesRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline ListSharedResourcesRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceOwner Field Functions 
    bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
    void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
    inline string resourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, "") };
    inline ListSharedResourcesRequest& setResourceOwner(string resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


    // resourceShareIds Field Functions 
    bool hasResourceShareIds() const { return this->resourceShareIds_ != nullptr;};
    void deleteResourceShareIds() { this->resourceShareIds_ = nullptr;};
    inline const vector<string> & resourceShareIds() const { DARABONBA_PTR_GET_CONST(resourceShareIds_, vector<string>) };
    inline vector<string> resourceShareIds() { DARABONBA_PTR_GET(resourceShareIds_, vector<string>) };
    inline ListSharedResourcesRequest& setResourceShareIds(const vector<string> & resourceShareIds) { DARABONBA_PTR_SET_VALUE(resourceShareIds_, resourceShareIds) };
    inline ListSharedResourcesRequest& setResourceShareIds(vector<string> && resourceShareIds) { DARABONBA_PTR_SET_RVALUE(resourceShareIds_, resourceShareIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListSharedResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ListSharedResourcesRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // The maximum number of entries to return for a single request.
    // 
    // Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The `token` that is used to initiate the next request. If the response of the current request is truncated, you can use the token to initiate another request and obtain the remaining records.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<string>> resourceArns_ = nullptr;
    // The ID of a shared resource.
    std::shared_ptr<vector<string>> resourceIds_ = nullptr;
    // The owner of the resource shares. Valid values:
    // 
    // *   Self: your account. If you set the value to Self, the resources you share with other accounts are queried.
    // *   OtherAccounts: another account. If you set the value to OtherAccounts, the resources other accounts share with you are queried.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceOwner_ = nullptr;
    // The ID of a resource share.
    std::shared_ptr<vector<string>> resourceShareIds_ = nullptr;
    // The type of the shared resources.
    // 
    // For more information about the types of resources that can be shared, see [Services that work with Resource Sharing](https://help.aliyun.com/document_detail/450526.html).
    std::shared_ptr<string> resourceType_ = nullptr;
    // The ID of the principal or resource owner.
    // 
    // *   If the value of `ResourceOwner` is `Self`, set this parameter to the ID of a principal.
    // *   If the value of `ResourceOwner` is `OtherAccounts`, set this parameter to the ID of a resource owner.
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
