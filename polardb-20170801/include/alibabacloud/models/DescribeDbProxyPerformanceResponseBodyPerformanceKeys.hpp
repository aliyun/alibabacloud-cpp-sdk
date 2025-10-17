// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBProxyPerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyPerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_TO_JSON(PerformanceItem, performanceItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyPerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(PerformanceItem, performanceItem_);
    };
    DescribeDBProxyPerformanceResponseBodyPerformanceKeys() = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeys(const DescribeDBProxyPerformanceResponseBodyPerformanceKeys &) = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeys(DescribeDBProxyPerformanceResponseBodyPerformanceKeys &&) = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyPerformanceResponseBodyPerformanceKeys() = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeys& operator=(const DescribeDBProxyPerformanceResponseBodyPerformanceKeys &) = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeys& operator=(DescribeDBProxyPerformanceResponseBodyPerformanceKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->performanceItem_ == nullptr; };
    // performanceItem Field Functions 
    bool hasPerformanceItem() const { return this->performanceItem_ != nullptr;};
    void deletePerformanceItem() { this->performanceItem_ = nullptr;};
    inline const vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem> & performanceItem() const { DARABONBA_PTR_GET_CONST(performanceItem_, vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem>) };
    inline vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem> performanceItem() { DARABONBA_PTR_GET(performanceItem_, vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem>) };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeys& setPerformanceItem(const vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem> & performanceItem) { DARABONBA_PTR_SET_VALUE(performanceItem_, performanceItem) };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeys& setPerformanceItem(vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem> && performanceItem) { DARABONBA_PTR_SET_RVALUE(performanceItem_, performanceItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem>> performanceItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
