// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->values_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Filters& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline Filters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Filters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The key of the filter. Valid values:
      // 
      // - **RegionId**: The region ID.
      // 
      // - **PlanId**: The backup plan ID.
      // 
      // - **JobId**: The backup job ID.
      // 
      // - **VaultId**: The repository ID.
      // 
      // - **InstanceId**: The ECS instance ID.
      // 
      // - **Bucket**: The name of the OSS bucket.
      // 
      // - **FileSystemId**: The file system ID.
      // 
      // - **Status**: The job status.
      // 
      // - **CreatedTime**: The start time of the job.
      // 
      // - **CompleteTime**: The end time of the job.
      // 
      // - **InstanceName**: The name of the Tablestore instance.
      // 
      // - **BackupType**: The backup job. This parameter is required only when SourceType is set to COMMON_NAS.
      // 
      // - **ParentId**: The ID of the parent job. This parameter is required when you query sub-tasks. For example, if you set SourceType to UDM_ECS_DISK, you must specify the ID of the UDM_ECS job.
      shared_ptr<string> key_ {};
      // The matching operator. The default value is IN. This parameter specifies the operator to use for matching the Key and Value. Valid values:
      // 
      // - **EQUAL**: Equal to.
      // 
      // - **NOT_EQUAL**: Not equal to.
      // 
      // - **GREATER_THAN**: Greater than.
      // 
      // - **GREATER_THAN_OR_EQUAL**: Greater than or equal to.
      // 
      // - **LESS_THAN**: Less than.
      // 
      // - **LESS_THAN_OR_EQUAL**: Less than or equal to.
      // 
      // - **BETWEEN**: The value is a JSON array in the format of `[start,end]`.
      // 
      // - **IN**: The value is an array.
      // 
      // > The IN operator is not supported when you use **CompleteTime** as the key for a query.
      shared_ptr<string> operator_ {};
      // The value of the filter.
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->edition_ == nullptr
        && this->filters_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->sortDirection_ == nullptr && this->sourceType_ == nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DescribeBackupJobs2Request& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeBackupJobs2Request::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeBackupJobs2Request::Filters>) };
    inline vector<DescribeBackupJobs2Request::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<DescribeBackupJobs2Request::Filters>) };
    inline DescribeBackupJobs2Request& setFilters(const vector<DescribeBackupJobs2Request::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeBackupJobs2Request& setFilters(vector<DescribeBackupJobs2Request::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupJobs2Request& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupJobs2Request& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortDirection Field Functions 
    bool hasSortDirection() const { return this->sortDirection_ != nullptr;};
    void deleteSortDirection() { this->sortDirection_ = nullptr;};
    inline string getSortDirection() const { DARABONBA_PTR_GET_DEFAULT(sortDirection_, "") };
    inline DescribeBackupJobs2Request& setSortDirection(string sortDirection) { DARABONBA_PTR_SET_VALUE(sortDirection_, sortDirection) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeBackupJobs2Request& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The edition. Valid values: BASIC and STANDARD. The default value is STANDARD.
    shared_ptr<string> edition_ {};
    // The key-value pairs of the filter.
    shared_ptr<vector<DescribeBackupJobs2Request::Filters>> filters_ {};
    // The page number. Pages start from page 1. The default value is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 99. The default value is 10.
    shared_ptr<int32_t> pageSize_ {};
    // The sort direction. Valid values:
    // 
    // - **ASCEND**: Ascending order.
    // 
    // - **DESCEND** (Default): Descending order.
    shared_ptr<string> sortDirection_ {};
    // The type of the data source. Valid values:
    // 
    // - **ECS_FILE**: Backs up Elastic Compute Service (ECS) files.
    // 
    // - **OSS**: Backs up Alibaba Cloud Object Storage Service (OSS) buckets.
    // 
    // - **NAS**: Backs up Alibaba Cloud Apsara File Storage NAS (NAS) file systems.
    // 
    // - **OTS**: Backs up Alibaba Cloud Tablestore instances.
    // 
    // - **UDM_ECS**: Backs up entire ECS instances.
    // 
    // - **UDM_ECS_DISK**: A sub-task for disk backup in an ECS instance backup job.
    // 
    // - **COMMON_NAS**: A generic NAS data source. This includes archive NAS and on-premises NAS data sources. Use the Values parameter of Filters to specify the data source type.
    // 
    // - **File**: Backs up on-premises files.
    // 
    // - **SYNC**: Data synchronization.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
