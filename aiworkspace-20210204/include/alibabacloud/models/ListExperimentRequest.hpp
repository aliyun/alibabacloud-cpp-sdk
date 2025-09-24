// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPERIMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPERIMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListExperimentRequestOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListExperimentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExperimentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PageToken, pageToken_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListExperimentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PageToken, pageToken_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListExperimentRequest() = default ;
    ListExperimentRequest(const ListExperimentRequest &) = default ;
    ListExperimentRequest(ListExperimentRequest &&) = default ;
    ListExperimentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExperimentRequest() = default ;
    ListExperimentRequest& operator=(const ListExperimentRequest &) = default ;
    ListExperimentRequest& operator=(ListExperimentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labels_ != nullptr
        && this->maxResults_ != nullptr && this->name_ != nullptr && this->options_ != nullptr && this->order_ != nullptr && this->orderBy_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->pageToken_ != nullptr && this->sortBy_ != nullptr && this->verbose_ != nullptr
        && this->workspaceId_ != nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListExperimentRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListExperimentRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListExperimentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const ListExperimentRequestOptions & options() const { DARABONBA_PTR_GET_CONST(options_, ListExperimentRequestOptions) };
    inline ListExperimentRequestOptions options() { DARABONBA_PTR_GET(options_, ListExperimentRequestOptions) };
    inline ListExperimentRequest& setOptions(const ListExperimentRequestOptions & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline ListExperimentRequest& setOptions(ListExperimentRequestOptions && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListExperimentRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListExperimentRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListExperimentRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListExperimentRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline int64_t pageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, 0L) };
    inline ListExperimentRequest& setPageToken(int64_t pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListExperimentRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool verbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline ListExperimentRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListExperimentRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The tag filter conditions. Multiple conditions are separated by commas (,). The format of a single condition filter is `key=value`.
    std::shared_ptr<string> labels_ = nullptr;
    // The maximum number of entries in the request. Default value: 10.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The experiment name.
    std::shared_ptr<string> name_ = nullptr;
    // The optional parameters.
    std::shared_ptr<ListExperimentRequestOptions> options_ = nullptr;
    // The order of specific fields of results in a paged query (ascending or descending).
    // 
    // *   ASC: ascending order
    // *   DESC: descending order. This is the default value.
    std::shared_ptr<string> order_ = nullptr;
    // The strings used for sorting. The following fields can be used for sorting: GmtCreateTime, Name, GmtModifiedTime, and ExperimentId. The sorting order can be ASC (default) and DESC.
    std::shared_ptr<string> orderBy_ = nullptr;
    // The page number. The value starts from 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The pagination token, which starts from 0. Default value: 0.
    std::shared_ptr<int64_t> pageToken_ = nullptr;
    // The field used for sorting. The GmtCreateTime field is used.
    std::shared_ptr<string> sortBy_ = nullptr;
    // Specifies whether to obtain the LatestRun value that is related to the experiment.
    std::shared_ptr<bool> verbose_ = nullptr;
    // The ID of the workspace to which the experiment belongs. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    // 
    // >  If you do not specify a workspace ID, the system returns the experiments in the default workspace.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
