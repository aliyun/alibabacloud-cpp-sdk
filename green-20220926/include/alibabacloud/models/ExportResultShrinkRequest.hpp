// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTRESULTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTRESULTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ExportResultShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportResultShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Sort, sortShrink_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, ExportResultShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Sort, sortShrink_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    ExportResultShrinkRequest() = default ;
    ExportResultShrinkRequest(const ExportResultShrinkRequest &) = default ;
    ExportResultShrinkRequest(ExportResultShrinkRequest &&) = default ;
    ExportResultShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportResultShrinkRequest() = default ;
    ExportResultShrinkRequest& operator=(const ExportResultShrinkRequest &) = default ;
    ExportResultShrinkRequest& operator=(ExportResultShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endDate_ == nullptr && this->pageSize_ == nullptr && this->query_ == nullptr && this->regionId_ == nullptr && this->sortShrink_ == nullptr
        && this->source_ == nullptr && this->startDate_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ExportResultShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ExportResultShrinkRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ExportResultShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ExportResultShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExportResultShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sortShrink Field Functions 
    bool hasSortShrink() const { return this->sortShrink_ != nullptr;};
    void deleteSortShrink() { this->sortShrink_ = nullptr;};
    inline string getSortShrink() const { DARABONBA_PTR_GET_DEFAULT(sortShrink_, "") };
    inline ExportResultShrinkRequest& setSortShrink(string sortShrink) { DARABONBA_PTR_SET_VALUE(sortShrink_, sortShrink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ExportResultShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ExportResultShrinkRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // Page number of the query result. Default is 1.
    shared_ptr<int32_t> currentPage_ {};
    // End date.
    shared_ptr<string> endDate_ {};
    // Number of items per page in the query result.
    shared_ptr<int32_t> pageSize_ {};
    // Query condition.
    shared_ptr<string> query_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Sort field.
    shared_ptr<string> sortShrink_ {};
    // Operation source.
    shared_ptr<string> source_ {};
    // Start date.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
