// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASEJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASEJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class ListKnowledgeBaseJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBaseJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobAction, jobAction_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseJobId, knowledgeBaseJobId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBaseJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobAction, jobAction_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseJobId, knowledgeBaseJobId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListKnowledgeBaseJobsRequest() = default ;
    ListKnowledgeBaseJobsRequest(const ListKnowledgeBaseJobsRequest &) = default ;
    ListKnowledgeBaseJobsRequest(ListKnowledgeBaseJobsRequest &&) = default ;
    ListKnowledgeBaseJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeBaseJobsRequest() = default ;
    ListKnowledgeBaseJobsRequest& operator=(const ListKnowledgeBaseJobsRequest &) = default ;
    ListKnowledgeBaseJobsRequest& operator=(ListKnowledgeBaseJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobAction_ == nullptr
        && return this->knowledgeBaseJobId_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->order_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->sortBy_ == nullptr && return this->status_ == nullptr && return this->workspaceId_ == nullptr; };
    // jobAction Field Functions 
    bool hasJobAction() const { return this->jobAction_ != nullptr;};
    void deleteJobAction() { this->jobAction_ = nullptr;};
    inline string jobAction() const { DARABONBA_PTR_GET_DEFAULT(jobAction_, "") };
    inline ListKnowledgeBaseJobsRequest& setJobAction(string jobAction) { DARABONBA_PTR_SET_VALUE(jobAction_, jobAction) };


    // knowledgeBaseJobId Field Functions 
    bool hasKnowledgeBaseJobId() const { return this->knowledgeBaseJobId_ != nullptr;};
    void deleteKnowledgeBaseJobId() { this->knowledgeBaseJobId_ = nullptr;};
    inline string knowledgeBaseJobId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseJobId_, "") };
    inline ListKnowledgeBaseJobsRequest& setKnowledgeBaseJobId(string knowledgeBaseJobId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseJobId_, knowledgeBaseJobId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKnowledgeBaseJobsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListKnowledgeBaseJobsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListKnowledgeBaseJobsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListKnowledgeBaseJobsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListKnowledgeBaseJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListKnowledgeBaseJobsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListKnowledgeBaseJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListKnowledgeBaseJobsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> jobAction_ = nullptr;
    std::shared_ptr<string> knowledgeBaseJobId_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
