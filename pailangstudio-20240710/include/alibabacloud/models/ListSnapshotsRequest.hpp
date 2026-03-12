// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class ListSnapshotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreationType, creationType_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotResourceId, snapshotResourceId_);
      DARABONBA_PTR_TO_JSON(SnapshotResourceType, snapshotResourceType_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationType, creationType_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotResourceId, snapshotResourceId_);
      DARABONBA_PTR_FROM_JSON(SnapshotResourceType, snapshotResourceType_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListSnapshotsRequest() = default ;
    ListSnapshotsRequest(const ListSnapshotsRequest &) = default ;
    ListSnapshotsRequest(ListSnapshotsRequest &&) = default ;
    ListSnapshotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotsRequest() = default ;
    ListSnapshotsRequest& operator=(const ListSnapshotsRequest &) = default ;
    ListSnapshotsRequest& operator=(ListSnapshotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationType_ == nullptr
        && this->creator_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->snapshotId_ == nullptr && this->snapshotResourceId_ == nullptr && this->snapshotResourceType_ == nullptr && this->sortBy_ == nullptr
        && this->workspaceId_ == nullptr; };
    // creationType Field Functions 
    bool hasCreationType() const { return this->creationType_ != nullptr;};
    void deleteCreationType() { this->creationType_ = nullptr;};
    inline string getCreationType() const { DARABONBA_PTR_GET_DEFAULT(creationType_, "") };
    inline ListSnapshotsRequest& setCreationType(string creationType) { DARABONBA_PTR_SET_VALUE(creationType_, creationType) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListSnapshotsRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSnapshotsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSnapshotsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListSnapshotsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSnapshotsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSnapshotsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline ListSnapshotsRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // snapshotResourceId Field Functions 
    bool hasSnapshotResourceId() const { return this->snapshotResourceId_ != nullptr;};
    void deleteSnapshotResourceId() { this->snapshotResourceId_ = nullptr;};
    inline string getSnapshotResourceId() const { DARABONBA_PTR_GET_DEFAULT(snapshotResourceId_, "") };
    inline ListSnapshotsRequest& setSnapshotResourceId(string snapshotResourceId) { DARABONBA_PTR_SET_VALUE(snapshotResourceId_, snapshotResourceId) };


    // snapshotResourceType Field Functions 
    bool hasSnapshotResourceType() const { return this->snapshotResourceType_ != nullptr;};
    void deleteSnapshotResourceType() { this->snapshotResourceType_ = nullptr;};
    inline string getSnapshotResourceType() const { DARABONBA_PTR_GET_DEFAULT(snapshotResourceType_, "") };
    inline ListSnapshotsRequest& setSnapshotResourceType(string snapshotResourceType) { DARABONBA_PTR_SET_VALUE(snapshotResourceType_, snapshotResourceType) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListSnapshotsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListSnapshotsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> creationType_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> order_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> snapshotId_ {};
    shared_ptr<string> snapshotResourceId_ {};
    shared_ptr<string> snapshotResourceType_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
