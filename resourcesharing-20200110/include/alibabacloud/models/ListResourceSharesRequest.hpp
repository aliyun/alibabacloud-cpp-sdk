// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESHARESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESHARESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceSharesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListResourceSharesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceSharesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PermissionName, permissionName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_TO_JSON(ResourceShareIds, resourceShareIds_);
      DARABONBA_PTR_TO_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_TO_JSON(ResourceShareStatus, resourceShareStatus_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceSharesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PermissionName, permissionName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_FROM_JSON(ResourceShareIds, resourceShareIds_);
      DARABONBA_PTR_FROM_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_FROM_JSON(ResourceShareStatus, resourceShareStatus_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListResourceSharesRequest() = default ;
    ListResourceSharesRequest(const ListResourceSharesRequest &) = default ;
    ListResourceSharesRequest(ListResourceSharesRequest &&) = default ;
    ListResourceSharesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceSharesRequest() = default ;
    ListResourceSharesRequest& operator=(const ListResourceSharesRequest &) = default ;
    ListResourceSharesRequest& operator=(ListResourceSharesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->permissionName_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwner_ != nullptr && this->resourceShareIds_ != nullptr
        && this->resourceShareName_ != nullptr && this->resourceShareStatus_ != nullptr && this->tag_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceSharesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceSharesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // permissionName Field Functions 
    bool hasPermissionName() const { return this->permissionName_ != nullptr;};
    void deletePermissionName() { this->permissionName_ = nullptr;};
    inline string permissionName() const { DARABONBA_PTR_GET_DEFAULT(permissionName_, "") };
    inline ListResourceSharesRequest& setPermissionName(string permissionName) { DARABONBA_PTR_SET_VALUE(permissionName_, permissionName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListResourceSharesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwner Field Functions 
    bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
    void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
    inline string resourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, "") };
    inline ListResourceSharesRequest& setResourceOwner(string resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


    // resourceShareIds Field Functions 
    bool hasResourceShareIds() const { return this->resourceShareIds_ != nullptr;};
    void deleteResourceShareIds() { this->resourceShareIds_ = nullptr;};
    inline const vector<string> & resourceShareIds() const { DARABONBA_PTR_GET_CONST(resourceShareIds_, vector<string>) };
    inline vector<string> resourceShareIds() { DARABONBA_PTR_GET(resourceShareIds_, vector<string>) };
    inline ListResourceSharesRequest& setResourceShareIds(const vector<string> & resourceShareIds) { DARABONBA_PTR_SET_VALUE(resourceShareIds_, resourceShareIds) };
    inline ListResourceSharesRequest& setResourceShareIds(vector<string> && resourceShareIds) { DARABONBA_PTR_SET_RVALUE(resourceShareIds_, resourceShareIds) };


    // resourceShareName Field Functions 
    bool hasResourceShareName() const { return this->resourceShareName_ != nullptr;};
    void deleteResourceShareName() { this->resourceShareName_ = nullptr;};
    inline string resourceShareName() const { DARABONBA_PTR_GET_DEFAULT(resourceShareName_, "") };
    inline ListResourceSharesRequest& setResourceShareName(string resourceShareName) { DARABONBA_PTR_SET_VALUE(resourceShareName_, resourceShareName) };


    // resourceShareStatus Field Functions 
    bool hasResourceShareStatus() const { return this->resourceShareStatus_ != nullptr;};
    void deleteResourceShareStatus() { this->resourceShareStatus_ = nullptr;};
    inline string resourceShareStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceShareStatus_, "") };
    inline ListResourceSharesRequest& setResourceShareStatus(string resourceShareStatus) { DARABONBA_PTR_SET_VALUE(resourceShareStatus_, resourceShareStatus) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListResourceSharesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListResourceSharesRequestTag>) };
    inline vector<ListResourceSharesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListResourceSharesRequestTag>) };
    inline ListResourceSharesRequest& setTag(const vector<ListResourceSharesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListResourceSharesRequest& setTag(vector<ListResourceSharesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The maximum number of entries to return for a single request.
    // 
    // Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The `token` that is used to initiate the next request if the response of the current request is truncated. You can use the token to initiate another request and obtain the remaining records.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The information about the permissions. For more information, see [Permission library](https://help.aliyun.com/document_detail/465474.html).
    std::shared_ptr<string> permissionName_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The owner of the resource shares. Valid values:
    // 
    // *   Self: the current account
    // *   OtherAccounts: an account other than the current account
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceOwner_ = nullptr;
    // The IDs of the resource shares.
    // 
    // Valid values of N: 1 to 5. This indicates that a maximum of five resource shares can be specified at a time.
    std::shared_ptr<vector<string>> resourceShareIds_ = nullptr;
    // The name of the resource share.
    std::shared_ptr<string> resourceShareName_ = nullptr;
    // The status of the resource shares. Valid values:
    // 
    // *   Active
    // *   Pending
    // *   Deleting
    // *   Deleted
    // 
    // >  The system automatically deletes the records of resource shares in the Deleted state within 48 hours to 96 hours after you delete the resource shares.
    std::shared_ptr<string> resourceShareStatus_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListResourceSharesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
