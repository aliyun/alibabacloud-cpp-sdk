// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBS2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBS2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRestoreJobs2RequestFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeRestoreJobs2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreJobs2Request& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreJobs2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
    };
    DescribeRestoreJobs2Request() = default ;
    DescribeRestoreJobs2Request(const DescribeRestoreJobs2Request &) = default ;
    DescribeRestoreJobs2Request(DescribeRestoreJobs2Request &&) = default ;
    DescribeRestoreJobs2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreJobs2Request() = default ;
    DescribeRestoreJobs2Request& operator=(const DescribeRestoreJobs2Request &) = default ;
    DescribeRestoreJobs2Request& operator=(DescribeRestoreJobs2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edition_ != nullptr
        && this->filters_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->restoreType_ != nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DescribeRestoreJobs2Request& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeRestoreJobs2RequestFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeRestoreJobs2RequestFilters>) };
    inline vector<DescribeRestoreJobs2RequestFilters> filters() { DARABONBA_PTR_GET(filters_, vector<DescribeRestoreJobs2RequestFilters>) };
    inline DescribeRestoreJobs2Request& setFilters(const vector<DescribeRestoreJobs2RequestFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeRestoreJobs2Request& setFilters(vector<DescribeRestoreJobs2RequestFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRestoreJobs2Request& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRestoreJobs2Request& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string restoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline DescribeRestoreJobs2Request& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


  protected:
    std::shared_ptr<string> edition_ = nullptr;
    // The keys in the filter.
    std::shared_ptr<vector<DescribeRestoreJobs2RequestFilters>> filters_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: Elastic Compute Service (ECS) files
    // *   **OSS**: Object Storage Service (OSS) buckets
    // *   **NAS**: Apsara File Storage NAS file systems
    // *   **OTS_TABLE**: Tablestore instances
    // *   **UDM_ECS_ROLLBACK**: ECS instances
    std::shared_ptr<string> restoreType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
