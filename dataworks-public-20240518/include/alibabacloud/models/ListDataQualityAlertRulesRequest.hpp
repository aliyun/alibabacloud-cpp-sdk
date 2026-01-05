// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYALERTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYALERTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityAlertRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityAlertRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityScanId, dataQualityScanId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityAlertRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityScanId, dataQualityScanId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    ListDataQualityAlertRulesRequest() = default ;
    ListDataQualityAlertRulesRequest(const ListDataQualityAlertRulesRequest &) = default ;
    ListDataQualityAlertRulesRequest(ListDataQualityAlertRulesRequest &&) = default ;
    ListDataQualityAlertRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityAlertRulesRequest() = default ;
    ListDataQualityAlertRulesRequest& operator=(const ListDataQualityAlertRulesRequest &) = default ;
    ListDataQualityAlertRulesRequest& operator=(ListDataQualityAlertRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataQualityScanId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->sortBy_ == nullptr; };
    // dataQualityScanId Field Functions 
    bool hasDataQualityScanId() const { return this->dataQualityScanId_ != nullptr;};
    void deleteDataQualityScanId() { this->dataQualityScanId_ = nullptr;};
    inline int64_t getDataQualityScanId() const { DARABONBA_PTR_GET_DEFAULT(dataQualityScanId_, 0L) };
    inline ListDataQualityAlertRulesRequest& setDataQualityScanId(int64_t dataQualityScanId) { DARABONBA_PTR_SET_VALUE(dataQualityScanId_, dataQualityScanId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataQualityAlertRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataQualityAlertRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataQualityAlertRulesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListDataQualityAlertRulesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    // The ID of the data quality monitor that the alert rule targets.
    shared_ptr<int64_t> dataQualityScanId_ {};
    // The page number of the results.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records to return on each page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The list of sorting fields. Supports fields such as last modified time and creation time. Format: "SortField+SortOrder (Desc/Asc)", where Asc is the default. Valid values:
    // 
    // *   CreateTime (Desc/Asc)
    // *   Id (Desc/Asc)
    shared_ptr<string> sortBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
