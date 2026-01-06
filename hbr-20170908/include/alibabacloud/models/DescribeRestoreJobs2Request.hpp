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
      // The key in the filter. Valid values:
      // 
      // *   **RegionId**: the region ID
      // *   **PlanId**: the ID of a backup plan
      // *   **JobId**: the ID of a backup job
      // *   **VaultId**: the ID of a backup vault
      // *   **InstanceId**: the ID of an ECS instance
      // *   **Bucket**: the name of an OSS bucket
      // *   **FileSystemId**: the ID of a file system
      // *   **Status**: the status of a backup job
      // *   **CompleteTime**: the end time of a backup job
      shared_ptr<string> key_ {};
      // The matching method. Default value: IN. This parameter specifies the operator that you want to use to match a key and a value in the filter. Valid values:
      // 
      // *   **EQUAL**: equal to
      // *   **NOT_EQUAL**: not equal to
      // *   **GREATER_THAN**: greater than
      // *   **GREATER_THAN_OR_EQUAL**: greater than or equal to
      // *   **LESS_THAN**: less than
      // *   **LESS_THAN_OR_EQUAL**: less than or equal to
      // *   **BETWEEN**: specifies a JSON array as a range. The results must fall within the range in the `[Minimum value,Maximum value]` format.
      // *   **IN**: specifies an array as a collection. The results must fall within the collection.
      // 
      // > If you specify the **CompleteTime** parameter as a key to query backup jobs, you cannot use the IN operator to perform a match.
      shared_ptr<string> operator_ {};
      // The values that you want to match in the filter.
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
    shared_ptr<string> edition_ {};
    // The keys in the filter.
    shared_ptr<vector<DescribeRestoreJobs2Request::Filters>> filters_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: Elastic Compute Service (ECS) files
    // *   **OSS**: Object Storage Service (OSS) buckets
    // *   **NAS**: Apsara File Storage NAS file systems
    // *   **OTS_TABLE**: Tablestore instances
    // *   **UDM_ECS_ROLLBACK**: ECS instances
    shared_ptr<string> restoreType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
