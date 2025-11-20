// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupJobs2RequestFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupJobs2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupJobs2Request& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortDirection, sortDirection_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupJobs2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortDirection, sortDirection_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    DescribeBackupJobs2Request() = default ;
    DescribeBackupJobs2Request(const DescribeBackupJobs2Request &) = default ;
    DescribeBackupJobs2Request(DescribeBackupJobs2Request &&) = default ;
    DescribeBackupJobs2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupJobs2Request() = default ;
    DescribeBackupJobs2Request& operator=(const DescribeBackupJobs2Request &) = default ;
    DescribeBackupJobs2Request& operator=(DescribeBackupJobs2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edition_ == nullptr
        && return this->filters_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->sortDirection_ == nullptr && return this->sourceType_ == nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DescribeBackupJobs2Request& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeBackupJobs2RequestFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeBackupJobs2RequestFilters>) };
    inline vector<DescribeBackupJobs2RequestFilters> filters() { DARABONBA_PTR_GET(filters_, vector<DescribeBackupJobs2RequestFilters>) };
    inline DescribeBackupJobs2Request& setFilters(const vector<DescribeBackupJobs2RequestFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeBackupJobs2Request& setFilters(vector<DescribeBackupJobs2RequestFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupJobs2Request& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupJobs2Request& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortDirection Field Functions 
    bool hasSortDirection() const { return this->sortDirection_ != nullptr;};
    void deleteSortDirection() { this->sortDirection_ = nullptr;};
    inline string sortDirection() const { DARABONBA_PTR_GET_DEFAULT(sortDirection_, "") };
    inline DescribeBackupJobs2Request& setSortDirection(string sortDirection) { DARABONBA_PTR_SET_VALUE(sortDirection_, sortDirection) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeBackupJobs2Request& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<string> edition_ = nullptr;
    // The keys that you want to match in the filter.
    std::shared_ptr<vector<DescribeBackupJobs2RequestFilters>> filters_ = nullptr;
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Valid values: 1 to 99. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The order in which you want to sort the results. Valid values:
    // 
    // *   **ASCEND**: sorts the results in ascending order
    // *   **DESCEND** (default value): sorts the results in descending order
    std::shared_ptr<string> sortDirection_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: Elastic Compute Service (ECS) files
    // *   **OSS**: Object Storage Service (OSS) buckets
    // *   **NAS**: Apsara File Storage NAS file systems
    // *   **OTS**: Tablestore instances
    // *   **UDM_ECS**: ECS instances
    // *   **UDM_ECS_DISK**: ECS disks
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
