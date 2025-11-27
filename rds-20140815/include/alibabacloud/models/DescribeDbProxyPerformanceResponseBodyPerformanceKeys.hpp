// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBProxyPerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyPerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_TO_JSON(PerformanceKey, performanceKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyPerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(PerformanceKey, performanceKey_);
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
    virtual bool empty() const override { return this->performanceKey_ == nullptr; };
    // performanceKey Field Functions 
    bool hasPerformanceKey() const { return this->performanceKey_ != nullptr;};
    void deletePerformanceKey() { this->performanceKey_ = nullptr;};
    inline const vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey> & performanceKey() const { DARABONBA_PTR_GET_CONST(performanceKey_, vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey>) };
    inline vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey> performanceKey() { DARABONBA_PTR_GET(performanceKey_, vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey>) };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeys& setPerformanceKey(const vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey> & performanceKey) { DARABONBA_PTR_SET_VALUE(performanceKey_, performanceKey) };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeys& setPerformanceKey(vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey> && performanceKey) { DARABONBA_PTR_SET_RVALUE(performanceKey_, performanceKey) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey>> performanceKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
