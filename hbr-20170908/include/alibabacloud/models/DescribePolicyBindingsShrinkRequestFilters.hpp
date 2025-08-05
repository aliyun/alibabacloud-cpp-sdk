// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSSHRINKREQUESTFILTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSSHRINKREQUESTFILTERS_HPP_
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
  class DescribePolicyBindingsShrinkRequestFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyBindingsShrinkRequestFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyBindingsShrinkRequestFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribePolicyBindingsShrinkRequestFilters() = default ;
    DescribePolicyBindingsShrinkRequestFilters(const DescribePolicyBindingsShrinkRequestFilters &) = default ;
    DescribePolicyBindingsShrinkRequestFilters(DescribePolicyBindingsShrinkRequestFilters &&) = default ;
    DescribePolicyBindingsShrinkRequestFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyBindingsShrinkRequestFilters() = default ;
    DescribePolicyBindingsShrinkRequestFilters& operator=(const DescribePolicyBindingsShrinkRequestFilters &) = default ;
    DescribePolicyBindingsShrinkRequestFilters& operator=(DescribePolicyBindingsShrinkRequestFilters &&) = default ;
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
    inline DescribePolicyBindingsShrinkRequestFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribePolicyBindingsShrinkRequestFilters& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline DescribePolicyBindingsShrinkRequestFilters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribePolicyBindingsShrinkRequestFilters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // Key in the query filter. Possible values include:
    // 
    // - **PolicyId**: Backup policy ID
    // - **DataSourceId**: ECS instance ID
    // - **DataSourceType**: Data source type
    std::shared_ptr<string> key_ = nullptr;
    // Matching method. Default is IN. This refers to the matching operation (Operator) supported by the Key and Value in the filter. Possible values include:
    // 
    // - **EQUAL**: Equal to
    // - **NOT_EQUAL**: Not equal to
    // - **GREATER_THAN**: Greater than
    // - **GREATER_THAN_OR_EQUAL**: Greater than or equal to
    // - **LESS_THAN**: Less than
    // - **LESS_THAN_OR_EQUAL**: Less than or equal to
    // - **BETWEEN**: Range, where value is a JSON array `[lower_bound, upper_bound]`.
    // - **IN**: In the set, where value is an array.
    std::shared_ptr<string> operator_ = nullptr;
    // Values to be matched in the query filter.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
