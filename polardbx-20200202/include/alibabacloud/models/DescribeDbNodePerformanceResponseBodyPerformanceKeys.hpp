// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBNODEPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBNODEPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBNodePerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBNodePerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_TO_JSON(PerformanceItem, performanceItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBNodePerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(PerformanceItem, performanceItem_);
    };
    DescribeDBNodePerformanceResponseBodyPerformanceKeys() = default ;
    DescribeDBNodePerformanceResponseBodyPerformanceKeys(const DescribeDBNodePerformanceResponseBodyPerformanceKeys &) = default ;
    DescribeDBNodePerformanceResponseBodyPerformanceKeys(DescribeDBNodePerformanceResponseBodyPerformanceKeys &&) = default ;
    DescribeDBNodePerformanceResponseBodyPerformanceKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBNodePerformanceResponseBodyPerformanceKeys() = default ;
    DescribeDBNodePerformanceResponseBodyPerformanceKeys& operator=(const DescribeDBNodePerformanceResponseBodyPerformanceKeys &) = default ;
    DescribeDBNodePerformanceResponseBodyPerformanceKeys& operator=(DescribeDBNodePerformanceResponseBodyPerformanceKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->performanceItem_ == nullptr; };
    // performanceItem Field Functions 
    bool hasPerformanceItem() const { return this->performanceItem_ != nullptr;};
    void deletePerformanceItem() { this->performanceItem_ = nullptr;};
    inline const vector<Models::DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem> & performanceItem() const { DARABONBA_PTR_GET_CONST(performanceItem_, vector<Models::DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem>) };
    inline vector<Models::DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem> performanceItem() { DARABONBA_PTR_GET(performanceItem_, vector<Models::DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem>) };
    inline DescribeDBNodePerformanceResponseBodyPerformanceKeys& setPerformanceItem(const vector<Models::DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem> & performanceItem) { DARABONBA_PTR_SET_VALUE(performanceItem_, performanceItem) };
    inline DescribeDBNodePerformanceResponseBodyPerformanceKeys& setPerformanceItem(vector<Models::DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem> && performanceItem) { DARABONBA_PTR_SET_RVALUE(performanceItem_, performanceItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem>> performanceItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
