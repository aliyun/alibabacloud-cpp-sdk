// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterPerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_TO_JSON(PerformanceItem, performanceItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(PerformanceItem, performanceItem_);
    };
    DescribeDBClusterPerformanceResponseBodyPerformanceKeys() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeys(const DescribeDBClusterPerformanceResponseBodyPerformanceKeys &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeys(DescribeDBClusterPerformanceResponseBodyPerformanceKeys &&) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeys() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeys& operator=(const DescribeDBClusterPerformanceResponseBodyPerformanceKeys &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeys& operator=(DescribeDBClusterPerformanceResponseBodyPerformanceKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->performanceItem_ == nullptr; };
    // performanceItem Field Functions 
    bool hasPerformanceItem() const { return this->performanceItem_ != nullptr;};
    void deletePerformanceItem() { this->performanceItem_ = nullptr;};
    inline const vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem> & performanceItem() const { DARABONBA_PTR_GET_CONST(performanceItem_, vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem>) };
    inline vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem> performanceItem() { DARABONBA_PTR_GET(performanceItem_, vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem>) };
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeys& setPerformanceItem(const vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem> & performanceItem) { DARABONBA_PTR_SET_VALUE(performanceItem_, performanceItem) };
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeys& setPerformanceItem(vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem> && performanceItem) { DARABONBA_PTR_SET_RVALUE(performanceItem_, performanceItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem>> performanceItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
