// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2REQUESTFILTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2REQUESTFILTERS_HPP_
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
  class DescribeBackupJobs2RequestFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupJobs2RequestFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupJobs2RequestFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeBackupJobs2RequestFilters() = default ;
    DescribeBackupJobs2RequestFilters(const DescribeBackupJobs2RequestFilters &) = default ;
    DescribeBackupJobs2RequestFilters(DescribeBackupJobs2RequestFilters &&) = default ;
    DescribeBackupJobs2RequestFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupJobs2RequestFilters() = default ;
    DescribeBackupJobs2RequestFilters& operator=(const DescribeBackupJobs2RequestFilters &) = default ;
    DescribeBackupJobs2RequestFilters& operator=(DescribeBackupJobs2RequestFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->operator_ != nullptr && this->values_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeBackupJobs2RequestFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribeBackupJobs2RequestFilters& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline DescribeBackupJobs2RequestFilters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeBackupJobs2RequestFilters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The keys in the filter. Valid values:
    // 
    // *   **RegionId**: the ID of a region
    // *   **PlanId**: the ID of a backup plan
    // *   **JobId**: the ID of a backup job
    // *   **VaultId**: the ID of a backup vault
    // *   **InstanceId**: the ID of an ECS instance
    // *   **Bucket**: the name of an OSS bucket
    // *   **FileSystemId**: the ID of a file system
    // *   **Status**: the status of a backup job
    // *   **CreatedTime**: the start time of a backup job
    // *   **CompleteTime**: the end time of a backup job
    // *   **instanceName**: the name of a Tablestore instance
    std::shared_ptr<string> key_ = nullptr;
    // The matching method. Default value: IN. This parameter specifies the operator that you want to use to match a key and a value in the filter. Valid values:
    // 
    // *   **EQUAL**: equal to
    // *   **NOT_EQUAL**: not equal to
    // *   **GREATER_THAN**: greater than
    // *   **GREATER_THAN_OR_EQUAL**: greater than or equal to
    // *   **LESS_THAN**: less than
    // *   **LESS_THAN_OR_EQUAL**: less than or equal to
    // *   **BETWEEN**: specifies a JSON array as a range. The results must fall within the range in the `[Minimum value,maximum value]` format.
    // *   **IN**: specifies an array as a collection. The results must fall within the collection.
    // 
    // >  If you specify **CompleteTime** as a key to query backup jobs, you cannot use the IN operator to perform a match.
    std::shared_ptr<string> operator_ = nullptr;
    // The values that you want to match in the filter.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
