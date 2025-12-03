// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApisRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiMethod, apiMethod_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiPath, apiPath_);
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(EnableTagAuth, enableTagAuth_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UnDeployed, unDeployed_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiMethod, apiMethod_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiPath, apiPath_);
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(EnableTagAuth, enableTagAuth_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UnDeployed, unDeployed_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    DescribeApisRequest() = default ;
    DescribeApisRequest(const DescribeApisRequest &) = default ;
    DescribeApisRequest(DescribeApisRequest &&) = default ;
    DescribeApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisRequest() = default ;
    DescribeApisRequest& operator=(const DescribeApisRequest &) = default ;
    DescribeApisRequest& operator=(DescribeApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiMethod_ == nullptr && return this->apiName_ == nullptr && return this->apiPath_ == nullptr && return this->catalogId_ == nullptr && return this->enableTagAuth_ == nullptr
        && return this->groupId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->securityToken_ == nullptr && return this->stageName_ == nullptr
        && return this->tag_ == nullptr && return this->unDeployed_ == nullptr && return this->visibility_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApisRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiMethod Field Functions 
    bool hasApiMethod() const { return this->apiMethod_ != nullptr;};
    void deleteApiMethod() { this->apiMethod_ = nullptr;};
    inline string apiMethod() const { DARABONBA_PTR_GET_DEFAULT(apiMethod_, "") };
    inline DescribeApisRequest& setApiMethod(string apiMethod) { DARABONBA_PTR_SET_VALUE(apiMethod_, apiMethod) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApisRequest& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiPath Field Functions 
    bool hasApiPath() const { return this->apiPath_ != nullptr;};
    void deleteApiPath() { this->apiPath_ = nullptr;};
    inline string apiPath() const { DARABONBA_PTR_GET_DEFAULT(apiPath_, "") };
    inline DescribeApisRequest& setApiPath(string apiPath) { DARABONBA_PTR_SET_VALUE(apiPath_, apiPath) };


    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline DescribeApisRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // enableTagAuth Field Functions 
    bool hasEnableTagAuth() const { return this->enableTagAuth_ != nullptr;};
    void deleteEnableTagAuth() { this->enableTagAuth_ = nullptr;};
    inline bool enableTagAuth() const { DARABONBA_PTR_GET_DEFAULT(enableTagAuth_, false) };
    inline DescribeApisRequest& setEnableTagAuth(bool enableTagAuth) { DARABONBA_PTR_SET_VALUE(enableTagAuth_, enableTagAuth) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApisRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApisRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApisRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeApisRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeApisRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeApisRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeApisRequestTag>) };
    inline vector<DescribeApisRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeApisRequestTag>) };
    inline DescribeApisRequest& setTag(const vector<DescribeApisRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeApisRequest& setTag(vector<DescribeApisRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // unDeployed Field Functions 
    bool hasUnDeployed() const { return this->unDeployed_ != nullptr;};
    void deleteUnDeployed() { this->unDeployed_ = nullptr;};
    inline bool unDeployed() const { DARABONBA_PTR_GET_DEFAULT(unDeployed_, false) };
    inline DescribeApisRequest& setUnDeployed(bool unDeployed) { DARABONBA_PTR_SET_VALUE(unDeployed_, unDeployed) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string visibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline DescribeApisRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The API ID.
    std::shared_ptr<string> apiId_ = nullptr;
    // The HTTP method of the API request.
    std::shared_ptr<string> apiMethod_ = nullptr;
    // The API name. The name is used for fuzzy match.
    std::shared_ptr<string> apiName_ = nullptr;
    // The request path of the API.
    std::shared_ptr<string> apiPath_ = nullptr;
    // The category ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // Specifies whether to enable tag verification.
    std::shared_ptr<bool> enableTagAuth_ = nullptr;
    // The API group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The environment in which you want to perform this operation. Valid values:
    // 
    // *   **RELEASE**: the production environment
    // *   **PRE**: the staging environment
    // *   **TEST**: the test environment
    std::shared_ptr<string> stageName_ = nullptr;
    // The tags of objects that match the rule.
    std::shared_ptr<vector<DescribeApisRequestTag>> tag_ = nullptr;
    // Specifies whether to filter unpublished APIs.
    std::shared_ptr<bool> unDeployed_ = nullptr;
    // Specifies whether the API is public. Valid values:
    // 
    // *   **PUBLIC**: The API is public. If you publish the definition of a public API to the production environment, the definition is displayed on the APIs page for all users.
    // *   **PRIVATE**: The API is private. If you publish an API group that contains a private API in Alibaba Cloud Marketplace, the API is not displayed in Alibaba Cloud Marketplace.
    std::shared_ptr<string> visibility_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
