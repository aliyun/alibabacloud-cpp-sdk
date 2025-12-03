// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeSubscriptionPerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionPerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_TO_JSON(PerformanceKey, performanceKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionPerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(PerformanceKey, performanceKey_);
    };
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeys() = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeys(const DescribeSubscriptionPerformanceResponseBodyPerformanceKeys &) = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeys(DescribeSubscriptionPerformanceResponseBodyPerformanceKeys &&) = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionPerformanceResponseBodyPerformanceKeys() = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeys& operator=(const DescribeSubscriptionPerformanceResponseBodyPerformanceKeys &) = default ;
    DescribeSubscriptionPerformanceResponseBodyPerformanceKeys& operator=(DescribeSubscriptionPerformanceResponseBodyPerformanceKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->performanceKey_ == nullptr; };
    // performanceKey Field Functions 
    bool hasPerformanceKey() const { return this->performanceKey_ != nullptr;};
    void deletePerformanceKey() { this->performanceKey_ = nullptr;};
    inline const vector<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey> & performanceKey() const { DARABONBA_PTR_GET_CONST(performanceKey_, vector<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey>) };
    inline vector<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey> performanceKey() { DARABONBA_PTR_GET(performanceKey_, vector<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey>) };
    inline DescribeSubscriptionPerformanceResponseBodyPerformanceKeys& setPerformanceKey(const vector<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey> & performanceKey) { DARABONBA_PTR_SET_VALUE(performanceKey_, performanceKey) };
    inline DescribeSubscriptionPerformanceResponseBodyPerformanceKeys& setPerformanceKey(vector<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey> && performanceKey) { DARABONBA_PTR_SET_RVALUE(performanceKey_, performanceKey) };


  protected:
    std::shared_ptr<vector<Models::DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey>> performanceKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
