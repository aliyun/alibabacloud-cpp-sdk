// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMERGEREQUESTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMERGEREQUESTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListMergeRequestsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMergeRequestsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(authorIds, authorIds_);
      DARABONBA_PTR_TO_JSON(createdAfter, createdAfter_);
      DARABONBA_PTR_TO_JSON(createdBefore, createdBefore_);
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(groupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(labelIds, labelIds_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(projectIds, projectIds_);
      DARABONBA_PTR_TO_JSON(reviewerIds, reviewerIds_);
      DARABONBA_PTR_TO_JSON(search, search_);
      DARABONBA_PTR_TO_JSON(sort, sort_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListMergeRequestsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(authorIds, authorIds_);
      DARABONBA_PTR_FROM_JSON(createdAfter, createdAfter_);
      DARABONBA_PTR_FROM_JSON(createdBefore, createdBefore_);
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(groupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(labelIds, labelIds_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(projectIds, projectIds_);
      DARABONBA_PTR_FROM_JSON(reviewerIds, reviewerIds_);
      DARABONBA_PTR_FROM_JSON(search, search_);
      DARABONBA_PTR_FROM_JSON(sort, sort_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    ListMergeRequestsRequest() = default ;
    ListMergeRequestsRequest(const ListMergeRequestsRequest &) = default ;
    ListMergeRequestsRequest(ListMergeRequestsRequest &&) = default ;
    ListMergeRequestsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMergeRequestsRequest() = default ;
    ListMergeRequestsRequest& operator=(const ListMergeRequestsRequest &) = default ;
    ListMergeRequestsRequest& operator=(ListMergeRequestsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->authorIds_ == nullptr && return this->createdAfter_ == nullptr && return this->createdBefore_ == nullptr && return this->filter_ == nullptr && return this->groupIds_ == nullptr
        && return this->labelIds_ == nullptr && return this->orderBy_ == nullptr && return this->organizationId_ == nullptr && return this->page_ == nullptr && return this->pageSize_ == nullptr
        && return this->projectIds_ == nullptr && return this->reviewerIds_ == nullptr && return this->search_ == nullptr && return this->sort_ == nullptr && return this->state_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline ListMergeRequestsRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // authorIds Field Functions 
    bool hasAuthorIds() const { return this->authorIds_ != nullptr;};
    void deleteAuthorIds() { this->authorIds_ = nullptr;};
    inline string authorIds() const { DARABONBA_PTR_GET_DEFAULT(authorIds_, "") };
    inline ListMergeRequestsRequest& setAuthorIds(string authorIds) { DARABONBA_PTR_SET_VALUE(authorIds_, authorIds) };


    // createdAfter Field Functions 
    bool hasCreatedAfter() const { return this->createdAfter_ != nullptr;};
    void deleteCreatedAfter() { this->createdAfter_ = nullptr;};
    inline string createdAfter() const { DARABONBA_PTR_GET_DEFAULT(createdAfter_, "") };
    inline ListMergeRequestsRequest& setCreatedAfter(string createdAfter) { DARABONBA_PTR_SET_VALUE(createdAfter_, createdAfter) };


    // createdBefore Field Functions 
    bool hasCreatedBefore() const { return this->createdBefore_ != nullptr;};
    void deleteCreatedBefore() { this->createdBefore_ = nullptr;};
    inline string createdBefore() const { DARABONBA_PTR_GET_DEFAULT(createdBefore_, "") };
    inline ListMergeRequestsRequest& setCreatedBefore(string createdBefore) { DARABONBA_PTR_SET_VALUE(createdBefore_, createdBefore) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListMergeRequestsRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline string groupIds() const { DARABONBA_PTR_GET_DEFAULT(groupIds_, "") };
    inline ListMergeRequestsRequest& setGroupIds(string groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };


    // labelIds Field Functions 
    bool hasLabelIds() const { return this->labelIds_ != nullptr;};
    void deleteLabelIds() { this->labelIds_ = nullptr;};
    inline string labelIds() const { DARABONBA_PTR_GET_DEFAULT(labelIds_, "") };
    inline ListMergeRequestsRequest& setLabelIds(string labelIds) { DARABONBA_PTR_SET_VALUE(labelIds_, labelIds) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListMergeRequestsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListMergeRequestsRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListMergeRequestsRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListMergeRequestsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectIds Field Functions 
    bool hasProjectIds() const { return this->projectIds_ != nullptr;};
    void deleteProjectIds() { this->projectIds_ = nullptr;};
    inline string projectIds() const { DARABONBA_PTR_GET_DEFAULT(projectIds_, "") };
    inline ListMergeRequestsRequest& setProjectIds(string projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };


    // reviewerIds Field Functions 
    bool hasReviewerIds() const { return this->reviewerIds_ != nullptr;};
    void deleteReviewerIds() { this->reviewerIds_ = nullptr;};
    inline string reviewerIds() const { DARABONBA_PTR_GET_DEFAULT(reviewerIds_, "") };
    inline ListMergeRequestsRequest& setReviewerIds(string reviewerIds) { DARABONBA_PTR_SET_VALUE(reviewerIds_, reviewerIds) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline string search() const { DARABONBA_PTR_GET_DEFAULT(search_, "") };
    inline ListMergeRequestsRequest& setSearch(string search) { DARABONBA_PTR_SET_VALUE(search_, search) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListMergeRequestsRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListMergeRequestsRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> authorIds_ = nullptr;
    std::shared_ptr<string> createdAfter_ = nullptr;
    std::shared_ptr<string> createdBefore_ = nullptr;
    std::shared_ptr<string> filter_ = nullptr;
    std::shared_ptr<string> groupIds_ = nullptr;
    std::shared_ptr<string> labelIds_ = nullptr;
    std::shared_ptr<string> orderBy_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<int64_t> page_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> projectIds_ = nullptr;
    std::shared_ptr<string> reviewerIds_ = nullptr;
    std::shared_ptr<string> search_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
