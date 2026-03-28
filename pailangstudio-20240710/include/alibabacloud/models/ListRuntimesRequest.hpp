// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRUNTIMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRUNTIMESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class ListRuntimesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRuntimesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_TO_JSON(RuntimeName, runtimeName_);
      DARABONBA_PTR_TO_JSON(RuntimeStatus, runtimeStatus_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(WorkDir, workDir_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRuntimesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_FROM_JSON(RuntimeName, runtimeName_);
      DARABONBA_PTR_FROM_JSON(RuntimeStatus, runtimeStatus_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(WorkDir, workDir_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListRuntimesRequest() = default ;
    ListRuntimesRequest(const ListRuntimesRequest &) = default ;
    ListRuntimesRequest(ListRuntimesRequest &&) = default ;
    ListRuntimesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRuntimesRequest() = default ;
    ListRuntimesRequest& operator=(const ListRuntimesRequest &) = default ;
    ListRuntimesRequest& operator=(ListRuntimesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->runtimeId_ == nullptr && this->runtimeName_ == nullptr && this->runtimeStatus_ == nullptr && this->sortBy_ == nullptr && this->version_ == nullptr
        && this->workDir_ == nullptr && this->workspaceId_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListRuntimesRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRuntimesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRuntimesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListRuntimesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRuntimesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRuntimesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // runtimeId Field Functions 
    bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
    void deleteRuntimeId() { this->runtimeId_ = nullptr;};
    inline string getRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
    inline ListRuntimesRequest& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


    // runtimeName Field Functions 
    bool hasRuntimeName() const { return this->runtimeName_ != nullptr;};
    void deleteRuntimeName() { this->runtimeName_ = nullptr;};
    inline string getRuntimeName() const { DARABONBA_PTR_GET_DEFAULT(runtimeName_, "") };
    inline ListRuntimesRequest& setRuntimeName(string runtimeName) { DARABONBA_PTR_SET_VALUE(runtimeName_, runtimeName) };


    // runtimeStatus Field Functions 
    bool hasRuntimeStatus() const { return this->runtimeStatus_ != nullptr;};
    void deleteRuntimeStatus() { this->runtimeStatus_ = nullptr;};
    inline string getRuntimeStatus() const { DARABONBA_PTR_GET_DEFAULT(runtimeStatus_, "") };
    inline ListRuntimesRequest& setRuntimeStatus(string runtimeStatus) { DARABONBA_PTR_SET_VALUE(runtimeStatus_, runtimeStatus) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListRuntimesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListRuntimesRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workDir Field Functions 
    bool hasWorkDir() const { return this->workDir_ != nullptr;};
    void deleteWorkDir() { this->workDir_ = nullptr;};
    inline string getWorkDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
    inline ListRuntimesRequest& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListRuntimesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The creator ID.
    shared_ptr<string> creator_ {};
    // The maximum number of records allowed to be returned by this request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. The pagination token used in the next request to retrieve a new page of results.
    // 
    // *   This value is left empty during the first request.
    // *   The `NextToken` value returned by the previous response passed in subsequent requests.
    shared_ptr<string> nextToken_ {};
    // The sorting method.
    // 
    // *   ASC: ascending order.
    // *   DESC: Descending order.
    shared_ptr<string> order_ {};
    // The page number in a paged query.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // Runtime ID. Supports exact search by runtime ID.
    shared_ptr<string> runtimeId_ {};
    // The name of the runtime. Supports fuzzy search by name.
    shared_ptr<string> runtimeName_ {};
    // Runtime status. Valid values:
    // 
    // *   Creating: The data cache is being created.
    // *   SaveFailed: Failed to save the runtime image.
    // *   Stopped: The file system is stopped.
    // *   Failed: Failed
    // *   ResourceAllocating: Resource allocation in progress
    // *   Stopping: Stopping in progress
    // *   Updating: Updating in progress
    // *   Saving: Saving the runtime image in progress
    // *   Queuing: Queuing in progress
    // *   Recovering: The instance is recovering.
    // *   Starting: The instance is being created.
    // *   Running: The gateway is running.
    // *   Saved: The runtime image is saved.
    // *   Deleting: The mount target is being deleted.
    // *   EnvPreparing: Preparing environment.
    shared_ptr<string> runtimeStatus_ {};
    // The field used to sort the results in paged queries. Default value: GmtCreateTime. Valid values are as follows:
    // 
    // *   GmtCreateTime (default value): Sort by the time when created.
    // *   GmtModifiedTime: Sorted by modification time.
    // *   Creator: The ID of the creator.
    // *   WorkDir: the working path.
    // *   RuntimeName: the runtime parameter.
    // *   Status: the status of the runtime.
    shared_ptr<string> sortBy_ {};
    // Version
    shared_ptr<string> version_ {};
    // The OSS path of the working directory.
    shared_ptr<string> workDir_ {};
    // The ID of the DataWorks workspace. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
