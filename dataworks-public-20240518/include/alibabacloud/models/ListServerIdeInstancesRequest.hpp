// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERIDEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERIDEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListServerIdeInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerIdeInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RelatedUserId, relatedUserId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerIdeInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RelatedUserId, relatedUserId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
    };
    ListServerIdeInstancesRequest() = default ;
    ListServerIdeInstancesRequest(const ListServerIdeInstancesRequest &) = default ;
    ListServerIdeInstancesRequest(ListServerIdeInstancesRequest &&) = default ;
    ListServerIdeInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerIdeInstancesRequest() = default ;
    ListServerIdeInstancesRequest& operator=(const ListServerIdeInstancesRequest &) = default ;
    ListServerIdeInstancesRequest& operator=(ListServerIdeInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr
        && this->relatedUserId_ == nullptr && this->resourceGroupId_ == nullptr && this->subType_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListServerIdeInstancesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServerIdeInstancesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServerIdeInstancesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListServerIdeInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListServerIdeInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListServerIdeInstancesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // relatedUserId Field Functions 
    bool hasRelatedUserId() const { return this->relatedUserId_ != nullptr;};
    void deleteRelatedUserId() { this->relatedUserId_ = nullptr;};
    inline string getRelatedUserId() const { DARABONBA_PTR_GET_DEFAULT(relatedUserId_, "") };
    inline ListServerIdeInstancesRequest& setRelatedUserId(string relatedUserId) { DARABONBA_PTR_SET_VALUE(relatedUserId_, relatedUserId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListServerIdeInstancesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline ListServerIdeInstancesRequest& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


  protected:
    // The keyword for fuzzy match by instance ID or instance name.
    shared_ptr<string> keyword_ {};
    // The maximum number of records to return in a single request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next query. You do not need to specify this parameter for the first request.
    shared_ptr<string> nextToken_ {};
    // The page number. Minimum value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page.
    shared_ptr<int32_t> pageSize_ {};
    // The DataWorks workspace ID.
    shared_ptr<int64_t> projectId_ {};
    // The account ID of the user who owns the instance. Used to filter instances by owner.
    shared_ptr<string> relatedUserId_ {};
    // The DataWorks resource group identifier. You can specify a numeric resource group ID or a full identifier in the format of Serverless_res_group_{tenantId}_{resgId}.
    shared_ptr<string> resourceGroupId_ {};
    // The instance subtype. Valid values:
    // - PERSONAL_DEV: personal development environment.
    // - DATA_AGENT: Data Agent.
    shared_ptr<string> subType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
