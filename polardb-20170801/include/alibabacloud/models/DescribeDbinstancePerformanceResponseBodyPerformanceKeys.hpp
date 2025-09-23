// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBInstancePerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_TO_JSON(PerformanceItem, performanceItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(PerformanceItem, performanceItem_);
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
    virtual bool empty() const override { this->performanceItem_ != nullptr; };
    // performanceItem Field Functions 
    bool hasPerformanceItem() const { return this->performanceItem_ != nullptr;};
    void deletePerformanceItem() { this->performanceItem_ = nullptr;};
    inline const vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItem> & performanceItem() const { DARABONBA_PTR_GET_CONST(performanceItem_, vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItem>) };
    inline vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItem> performanceItem() { DARABONBA_PTR_GET(performanceItem_, vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItem>) };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeys& setPerformanceItem(const vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItem> & performanceItem) { DARABONBA_PTR_SET_VALUE(performanceItem_, performanceItem) };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeys& setPerformanceItem(vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItem> && performanceItem) { DARABONBA_PTR_SET_RVALUE(performanceItem_, performanceItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItem>> performanceItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
