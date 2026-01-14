// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREPORTPERFORMANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYREPORTPERFORMANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryReportPerformanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReportPerformanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostTimeAvgMin, costTimeAvgMin_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReportPerformanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostTimeAvgMin, costTimeAvgMin_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryReportPerformanceRequest() = default ;
    QueryReportPerformanceRequest(const QueryReportPerformanceRequest &) = default ;
    QueryReportPerformanceRequest(QueryReportPerformanceRequest &&) = default ;
    QueryReportPerformanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReportPerformanceRequest() = default ;
    QueryReportPerformanceRequest& operator=(const QueryReportPerformanceRequest &) = default ;
    QueryReportPerformanceRequest& operator=(QueryReportPerformanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->costTimeAvgMin_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->queryType_ == nullptr && this->reportId_ == nullptr && this->resourceType_ == nullptr
        && this->workspaceId_ == nullptr; };
    // costTimeAvgMin Field Functions 
    bool hasCostTimeAvgMin() const { return this->costTimeAvgMin_ != nullptr;};
    void deleteCostTimeAvgMin() { this->costTimeAvgMin_ = nullptr;};
    inline int32_t getCostTimeAvgMin() const { DARABONBA_PTR_GET_DEFAULT(costTimeAvgMin_, 0) };
    inline QueryReportPerformanceRequest& setCostTimeAvgMin(int32_t costTimeAvgMin) { DARABONBA_PTR_SET_VALUE(costTimeAvgMin_, costTimeAvgMin) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryReportPerformanceRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryReportPerformanceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline QueryReportPerformanceRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline QueryReportPerformanceRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline QueryReportPerformanceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryReportPerformanceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The average duration (minutes).
    shared_ptr<int32_t> costTimeAvgMin_ {};
    // Current page number for organization member list:
    // 
    // *   Pages start from page 1.
    // *   Default value: 1.
    shared_ptr<int32_t> pageNum_ {};
    // The number of rows per page in a paged query.
    // 
    // *   Default value: 10.
    // *   Maximum value: 1,000.
    shared_ptr<int32_t> pageSize_ {};
    // The query type. Valid values:
    // 
    // *   **lastDay**: Yesterday
    // *   **sevenDays**: Within seven days
    // *   **thirtyDays**: Within 30 days
    // 
    // This parameter is required.
    shared_ptr<string> queryType_ {};
    // The ID of the security report.
    shared_ptr<string> reportId_ {};
    // The resource types.
    shared_ptr<string> resourceType_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
