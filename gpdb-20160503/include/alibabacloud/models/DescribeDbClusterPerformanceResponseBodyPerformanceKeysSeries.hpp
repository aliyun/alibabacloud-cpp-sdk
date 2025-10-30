// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCEKEYSSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCEKEYSSERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries(const DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries(DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries &&) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries& operator=(const DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries& operator=(DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->role_ == nullptr && return this->values_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues>) };
    inline vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues> values() { DARABONBA_PTR_GET(values_, vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues>) };
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries& setValues(const vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries& setValues(vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The name of the compute node or compute group.
    std::shared_ptr<string> name_ = nullptr;
    // The role of the node. Valid values:
    // 
    // *   **master**: primary coordinator node
    // *   **standby**: standby coordinator node
    // *   **segment**: compute node
    std::shared_ptr<string> role_ = nullptr;
    // The value of the performance metric collected at a point in time.
    std::shared_ptr<vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
