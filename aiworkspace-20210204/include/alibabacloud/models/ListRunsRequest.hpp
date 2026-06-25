// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRUNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRUNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListRunsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRunsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PageToken, pageToken_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRunsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PageToken, pageToken_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListRunsRequest() = default ;
    ListRunsRequest(const ListRunsRequest &) = default ;
    ListRunsRequest(ListRunsRequest &&) = default ;
    ListRunsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRunsRequest() = default ;
    ListRunsRequest& operator=(const ListRunsRequest &) = default ;
    ListRunsRequest& operator=(ListRunsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->experimentId_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->labels_ == nullptr && this->maxResults_ == nullptr && this->name_ == nullptr && this->order_ == nullptr
        && this->orderBy_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->pageToken_ == nullptr && this->sortBy_ == nullptr
        && this->sourceId_ == nullptr && this->sourceType_ == nullptr && this->verbose_ == nullptr && this->workspaceId_ == nullptr; };
    // experimentId Field Functions 
    bool hasExperimentId() const { return this->experimentId_ != nullptr;};
    void deleteExperimentId() { this->experimentId_ = nullptr;};
    inline string getExperimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
    inline ListRunsRequest& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListRunsRequest& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListRunsRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListRunsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRunsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListRunsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListRunsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListRunsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRunsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline int64_t getPageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, 0L) };
    inline ListRunsRequest& setPageToken(int64_t pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListRunsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListRunsRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListRunsRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool getVerbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline ListRunsRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListRunsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The ID of the experiment to which the run belongs.
    shared_ptr<string> experimentId_ {};
    // The time when the instance was created.
    shared_ptr<string> gmtCreateTime_ {};
    // The labels of the run for an exact match. The following formats are supported:
    // 
    // - Single-label query: "is_evaluation:true"
    // 
    // - Multi-label query: "is_evaluation:true,LLM_evaluation:true". This method is not recommended for common scenarios because it may degrade performance. Use commas (,) to separate multiple labels. The system matches all specified key-value pairs.
    shared_ptr<string> labels_ {};
    // The maximum number of results to return. The default value is 10.
    shared_ptr<int64_t> maxResults_ {};
    // The name of the run.
    shared_ptr<string> name_ {};
    // The sort order for the paged query. Use this parameter with SortBy.
    // 
    // - ASC: ascending order.
    // 
    // - DESC (default): descending order.
    shared_ptr<string> order_ {};
    // The fields to sort by and the sort order. You can sort by GmtCreateTime and Name. Valid sort orders are DESC and ASC. The default is ASC. To sort by multiple fields, separate them with a comma (,).
    shared_ptr<string> orderBy_ {};
    // The page number. The value must be greater than 0. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of records to display on each page.
    shared_ptr<int64_t> pageSize_ {};
    // The paging token. The value starts from 0. The default value is 0.
    shared_ptr<int64_t> pageToken_ {};
    // The field to use for sorting. Valid values:
    // 
    // - Name: the name of the run.
    // 
    // - GmtCreateTime (default): the time when the run was created.
    shared_ptr<string> sortBy_ {};
    // The ID of the PAI workload associated with the run.
    shared_ptr<string> sourceId_ {};
    // The type of the PAI workload associated with the run.
    shared_ptr<string> sourceType_ {};
    // Specifies whether to display details, including Metrics, Params, and Labels. Valid values:
    // 
    // - true: displays details.
    // 
    // - false (default): does not display details.
    shared_ptr<bool> verbose_ {};
    // The ID of the workspace where the experiment resides. For more information about how to obtain a workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    // 
    // > If you do not specify a workspace ID, the system returns the list of runs in the default workspace.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
