// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOMPONENTPERFORMANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOMPONENTPERFORMANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryComponentPerformanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryComponentPerformanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostTimeAvgMin, costTimeAvgMin_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryComponentPerformanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostTimeAvgMin, costTimeAvgMin_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryComponentPerformanceRequest() = default ;
    QueryComponentPerformanceRequest(const QueryComponentPerformanceRequest &) = default ;
    QueryComponentPerformanceRequest(QueryComponentPerformanceRequest &&) = default ;
    QueryComponentPerformanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryComponentPerformanceRequest() = default ;
    QueryComponentPerformanceRequest& operator=(const QueryComponentPerformanceRequest &) = default ;
    QueryComponentPerformanceRequest& operator=(QueryComponentPerformanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->costTimeAvgMin_ == nullptr
        && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->queryType_ == nullptr && return this->reportId_ == nullptr && return this->resourceType_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // costTimeAvgMin Field Functions 
    bool hasCostTimeAvgMin() const { return this->costTimeAvgMin_ != nullptr;};
    void deleteCostTimeAvgMin() { this->costTimeAvgMin_ = nullptr;};
    inline int32_t costTimeAvgMin() const { DARABONBA_PTR_GET_DEFAULT(costTimeAvgMin_, 0) };
    inline QueryComponentPerformanceRequest& setCostTimeAvgMin(int32_t costTimeAvgMin) { DARABONBA_PTR_SET_VALUE(costTimeAvgMin_, costTimeAvgMin) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryComponentPerformanceRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryComponentPerformanceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline QueryComponentPerformanceRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline QueryComponentPerformanceRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline QueryComponentPerformanceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryComponentPerformanceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The average duration (minutes).
    std::shared_ptr<int32_t> costTimeAvgMin_ = nullptr;
    // The current page number of the workspace member list:
    // 
    // *   Pages start from page 1.
    // *   Default value: 1.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of rows per page in a paged query.
    // 
    // *   Default value: 10.
    // *   Maximum value: 1,000.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The query type. Valid values:
    // 
    // *   **lastDay**: Yesterday
    // *   **sevenDays**: Within seven days
    // *   **thirtyDays**: Within 30 days
    // 
    // This parameter is required.
    std::shared_ptr<string> queryType_ = nullptr;
    // The ID of the work. The works here include BI portal, dashboards, spreadsheets, and self-service access.
    std::shared_ptr<string> reportId_ = nullptr;
    // The resource types.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
