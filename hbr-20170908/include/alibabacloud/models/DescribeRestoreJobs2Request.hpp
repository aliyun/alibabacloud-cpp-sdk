// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBS2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBS2REQUEST_HPP_
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
      // The filter key. Valid values:
      // 
      // - **RegionId**: region ID
      // 
      // - **PlanId**: backup plan ID
      // 
      // - **JobId**: backup job ID
      // 
      // - **VaultId**: vault ID
      // 
      // - **InstanceId**: ECS instance ID
      // 
      // - **Bucket**: OSS bucket name
      // 
      // - **FileSystemId**: file system ID
      // 
      // - **Status**: job status
      // 
      // - **CompleteTime**: completion time
      shared_ptr<string> key_ {};
      // The matching method. The default value is IN. Valid values:
      // 
      // - **EQUAL**: Equal to
      // 
      // - **NOT_EQUAL**: Not equal to
      // 
      // - **GREATER_THAN**: Greater than
      // 
      // - **GREATER_THAN_OR_EQUAL**: Greater than or equal to
      // 
      // - **LESS_THAN**: Less than
      // 
      // - **LESS_THAN_OR_EQUAL**: Less than or equal to
      // 
      // - **BETWEEN**: The value is within a specified range. The `Values` parameter must be a JSON array in the `[min, max]` format.
      // 
      // - **IN**: The value is in a specified set. The `Values` parameter must be an array.
      // 
      // > The IN operator is not supported when `Key` is **CompleteTime**.
      shared_ptr<string> operator_ {};
      // An array of values for the specified filter key.
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->edition_ == nullptr
        && this->filters_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->restoreType_ == nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DescribeRestoreJobs2Request& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeRestoreJobs2Request::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeRestoreJobs2Request::Filters>) };
    inline vector<DescribeRestoreJobs2Request::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<DescribeRestoreJobs2Request::Filters>) };
    inline DescribeRestoreJobs2Request& setFilters(const vector<DescribeRestoreJobs2Request::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeRestoreJobs2Request& setFilters(vector<DescribeRestoreJobs2Request::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRestoreJobs2Request& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRestoreJobs2Request& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string getRestoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline DescribeRestoreJobs2Request& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


  protected:
    // The edition. Valid values: `BASIC` and `STANDARD`. Default value: `STANDARD`.
    shared_ptr<string> edition_ {};
    // The filter conditions.
    shared_ptr<vector<DescribeRestoreJobs2Request::Filters>> filters_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The data source type. Valid values:
    // 
    // - **ECS_FILE**: Restores ECS files.
    // 
    // - **OSS**: Restores OSS objects.
    // 
    // - **NAS**: Restores NAS files.
    // 
    // - **COMMON_FILE_SYSTEM**: Restores data to a CPFS file system.
    // 
    // - **OTS_TABLE**: Restores an OTS table.
    // 
    // - **UDM_ECS_ROLLBACK**: Restores an entire ECS instance.
    shared_ptr<string> restoreType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
