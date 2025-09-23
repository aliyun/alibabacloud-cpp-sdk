// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHAREDTARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSHAREDTARGETSREQUEST_HPP_
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
  class ListSharedTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSharedTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_TO_JSON(ResourceShareIds, resourceShareIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, ListSharedTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_FROM_JSON(ResourceShareIds, resourceShareIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    ListSharedTargetsRequest() = default ;
    ListSharedTargetsRequest(const ListSharedTargetsRequest &) = default ;
    ListSharedTargetsRequest(ListSharedTargetsRequest &&) = default ;
    ListSharedTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSharedTargetsRequest() = default ;
    ListSharedTargetsRequest& operator=(const ListSharedTargetsRequest &) = default ;
    ListSharedTargetsRequest& operator=(ListSharedTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->resourceArn_ != nullptr && this->resourceId_ != nullptr && this->resourceOwner_ != nullptr && this->resourceShareIds_ != nullptr
        && this->resourceType_ != nullptr && this->targets_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSharedTargetsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSharedTargetsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string resourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline ListSharedTargetsRequest& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListSharedTargetsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwner Field Functions 
    bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
    void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
    inline string resourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, "") };
    inline ListSharedTargetsRequest& setResourceOwner(string resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


    // resourceShareIds Field Functions 
    bool hasResourceShareIds() const { return this->resourceShareIds_ != nullptr;};
    void deleteResourceShareIds() { this->resourceShareIds_ = nullptr;};
    inline const vector<string> & resourceShareIds() const { DARABONBA_PTR_GET_CONST(resourceShareIds_, vector<string>) };
    inline vector<string> resourceShareIds() { DARABONBA_PTR_GET(resourceShareIds_, vector<string>) };
    inline ListSharedTargetsRequest& setResourceShareIds(const vector<string> & resourceShareIds) { DARABONBA_PTR_SET_VALUE(resourceShareIds_, resourceShareIds) };
    inline ListSharedTargetsRequest& setResourceShareIds(vector<string> && resourceShareIds) { DARABONBA_PTR_SET_RVALUE(resourceShareIds_, resourceShareIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListSharedTargetsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<string> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<string>) };
    inline vector<string> targets() { DARABONBA_PTR_GET(targets_, vector<string>) };
    inline ListSharedTargetsRequest& setTargets(const vector<string> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline ListSharedTargetsRequest& setTargets(vector<string> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // The maximum number of entries to return for a single request.
    // 
    // Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of `NextToken`.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> resourceArn_ = nullptr;
    // The ID of the shared resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The owner of the resource share.
    // 
    // *   Self: your account. If you set the value to Self, the principals that are associated with your resource shares are queried.
    // *   OtherAccounts: another account. If you set the value to OtherAccounts, the resource shares with which your account is associated and the owners of the resource shares are queried.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceOwner_ = nullptr;
    // The ID of a resource share.
    // 
    // Valid values of N: 1 to 5. This indicates that a maximum of five resource shares can be specified at a time.
    std::shared_ptr<vector<string>> resourceShareIds_ = nullptr;
    // The type of the shared resources.
    // 
    // For more information about the types of resources that can be shared, see [Services that work with Resource Sharing](https://help.aliyun.com/document_detail/450526.html).
    std::shared_ptr<string> resourceType_ = nullptr;
    // The information about the principals.
    std::shared_ptr<vector<string>> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
