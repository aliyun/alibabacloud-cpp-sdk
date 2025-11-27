// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancePerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_TO_JSON(PerformanceKey, performanceKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(PerformanceKey, performanceKey_);
    };
    DescribeDBInstancePerformanceResponseBodyPerformanceKeys() = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeys(const DescribeDBInstancePerformanceResponseBodyPerformanceKeys &) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeys(DescribeDBInstancePerformanceResponseBodyPerformanceKeys &&) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancePerformanceResponseBodyPerformanceKeys() = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeys& operator=(const DescribeDBInstancePerformanceResponseBodyPerformanceKeys &) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeys& operator=(DescribeDBInstancePerformanceResponseBodyPerformanceKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->performanceKey_ == nullptr; };
    // performanceKey Field Functions 
    bool hasPerformanceKey() const { return this->performanceKey_ != nullptr;};
    void deletePerformanceKey() { this->performanceKey_ = nullptr;};
    inline const vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey> & performanceKey() const { DARABONBA_PTR_GET_CONST(performanceKey_, vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey>) };
    inline vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey> performanceKey() { DARABONBA_PTR_GET(performanceKey_, vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey>) };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeys& setPerformanceKey(const vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey> & performanceKey) { DARABONBA_PTR_SET_VALUE(performanceKey_, performanceKey) };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeys& setPerformanceKey(vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey> && performanceKey) { DARABONBA_PTR_SET_RVALUE(performanceKey_, performanceKey) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey>> performanceKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
