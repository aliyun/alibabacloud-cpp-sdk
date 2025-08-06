// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCommandsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCommandsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommandsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommandId, commandId_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Latest, latest_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommandsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Latest, latest_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeCommandsRequest() = default ;
    DescribeCommandsRequest(const DescribeCommandsRequest &) = default ;
    DescribeCommandsRequest(DescribeCommandsRequest &&) = default ;
    DescribeCommandsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommandsRequest() = default ;
    DescribeCommandsRequest& operator=(const DescribeCommandsRequest &) = default ;
    DescribeCommandsRequest& operator=(DescribeCommandsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commandId_ != nullptr
        && this->contentEncoding_ != nullptr && this->description_ != nullptr && this->latest_ != nullptr && this->maxResults_ != nullptr && this->name_ != nullptr
        && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->provider_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->tag_ != nullptr && this->type_ != nullptr; };
    // commandId Field Functions 
    bool hasCommandId() const { return this->commandId_ != nullptr;};
    void deleteCommandId() { this->commandId_ = nullptr;};
    inline string commandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
    inline DescribeCommandsRequest& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string contentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline DescribeCommandsRequest& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCommandsRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // latest Field Functions 
    bool hasLatest() const { return this->latest_ != nullptr;};
    void deleteLatest() { this->latest_ = nullptr;};
    inline bool latest() const { DARABONBA_PTR_GET_DEFAULT(latest_, false) };
    inline DescribeCommandsRequest& setLatest(bool latest) { DARABONBA_PTR_SET_VALUE(latest_, latest) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCommandsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCommandsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCommandsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeCommandsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCommandsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeCommandsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeCommandsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline DescribeCommandsRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCommandsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCommandsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeCommandsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeCommandsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeCommandsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeCommandsRequestTag>) };
    inline vector<DescribeCommandsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeCommandsRequestTag>) };
    inline DescribeCommandsRequest& setTag(const vector<DescribeCommandsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeCommandsRequest& setTag(vector<DescribeCommandsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCommandsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the command.
    std::shared_ptr<string> commandId_ = nullptr;
    // The encoding mode of the `CommandContent` and `Output` values in the response. Valid values:
    // 
    // *   PlainText: returns the original command content and command output.
    // *   Base64: returns the Base64-encoded command content and command output.
    // 
    // Default value: Base64.
    std::shared_ptr<string> contentEncoding_ = nullptr;
    // The description of the command.
    // 
    // If you specify `Provider`, fuzzy search is supported by default.
    // 
    // If you do not specify `Provider`, prefix-based fuzzy search is supported. For example, if you specify `test*`, all commands whose descriptions start with `test` are queried.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to query only the latest version of common commands when common commands are queried. This parameter does not affect the query for private commands.
    // 
    // *   true: queries only the latest version of common commands.
    // *   false: queries all versions of common commands.
    // 
    // Default value: false.
    std::shared_ptr<bool> latest_ = nullptr;
    // The maximum number of entries per page.
    // 
    // Valid values: 1 to 50.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The name of the command.
    // 
    // If you specify `Provider`, fuzzy search is supported by default.
    // 
    // If you do not specify `Provider`, prefix-based fuzzy search is supported. For example, if you specify `command*`, all commands whose names start with `command` are queried.
    std::shared_ptr<string> name_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // >  This parameter will be removed in the future. We recommend that you use NextToken and MaxResults for a paged query.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // >  This parameter will be removed in the future. We recommend that you use NextToken and MaxResults for a paged query.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The provider of the common command. Take note of the following items:
    // 
    // *   If you do not specify this parameter, all the commands that you created are queried.
    // 
    // *   If you set this parameter to `AlibabaCloud`, all the common commands provided by Alibaba Cloud are queried.
    // 
    // *   If you set this parameter to a specific provider, all the common commands provided by the provider are queried. Examples:
    // 
    //     *   If you set `Provider` to AlibabaCloud.ECS.GuestOS, all the common commands provided by `AlibabaCloud.ECS.GuestOS` are queried.
    //     *   If you set `Provider` to AlibabaCloud.ECS.GuestOSDiagnose, all the common commands provided by `AlibabaCloud.ECS.GuestOSDiagnose` are queried.
    std::shared_ptr<string> provider_ = nullptr;
    // The region ID of the command. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the command belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<DescribeCommandsRequestTag>> tag_ = nullptr;
    // The type of the command. Valid values:
    // 
    // *   RunBatScript: batch command, applicable to Windows instances
    // *   RunPowerShellScript: PowerShell command, applicable to Windows instances
    // *   RunShellScript: shell command, applicable to Linux instances
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
