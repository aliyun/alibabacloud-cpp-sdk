// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSREQUESTFILTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSREQUESTFILTERS_HPP_
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
  class DescribeBackupPlansRequestFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansRequestFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansRequestFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeBackupPlansRequestFilters() = default ;
    DescribeBackupPlansRequestFilters(const DescribeBackupPlansRequestFilters &) = default ;
    DescribeBackupPlansRequestFilters(DescribeBackupPlansRequestFilters &&) = default ;
    DescribeBackupPlansRequestFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansRequestFilters() = default ;
    DescribeBackupPlansRequestFilters& operator=(const DescribeBackupPlansRequestFilters &) = default ;
    DescribeBackupPlansRequestFilters& operator=(DescribeBackupPlansRequestFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->values_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeBackupPlansRequestFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline DescribeBackupPlansRequestFilters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeBackupPlansRequestFilters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The keys in the filter. Valid values:
    // 
    // *   **regionId**: the ID of a region
    // *   **planId**: the ID of a backup plan
    // *   **sourceType**: the type of a data source
    // *   **vaultId**: the ID of a backup vault
    // *   **instanceName**: the name of an instance
    // *   **instanceId**: the ID of an instance
    // *   **planName**: the name of a backup plan
    std::shared_ptr<string> key_ = nullptr;
    // The values that you want to match in the filter.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
