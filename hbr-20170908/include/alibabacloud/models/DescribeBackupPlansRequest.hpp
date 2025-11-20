// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupPlansRequestFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupPlansRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    DescribeBackupPlansRequest() = default ;
    DescribeBackupPlansRequest(const DescribeBackupPlansRequest &) = default ;
    DescribeBackupPlansRequest(DescribeBackupPlansRequest &&) = default ;
    DescribeBackupPlansRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansRequest() = default ;
    DescribeBackupPlansRequest& operator=(const DescribeBackupPlansRequest &) = default ;
    DescribeBackupPlansRequest& operator=(DescribeBackupPlansRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edition_ == nullptr
        && return this->filters_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->sourceType_ == nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DescribeBackupPlansRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeBackupPlansRequestFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeBackupPlansRequestFilters>) };
    inline vector<DescribeBackupPlansRequestFilters> filters() { DARABONBA_PTR_GET(filters_, vector<DescribeBackupPlansRequestFilters>) };
    inline DescribeBackupPlansRequest& setFilters(const vector<DescribeBackupPlansRequestFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeBackupPlansRequest& setFilters(vector<DescribeBackupPlansRequestFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupPlansRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupPlansRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeBackupPlansRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<string> edition_ = nullptr;
    // The filters.
    std::shared_ptr<vector<DescribeBackupPlansRequestFilters>> filters_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: Elastic Compute Service (ECS) files
    // *   **OSS**: Object Storage Service (OSS) buckets
    // *   **NAS**: File Storage NAS (NAS) file systems
    // *   **OTS**: Tablestore instances
    // *   **UDM_ECS**: ECS instances
    // *   **SYNC**: data synchronization
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
