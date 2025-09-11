// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERRESOURCEPOOLPERFORMANCERESPONSEBODYPERFORMANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERRESOURCEPOOLPERFORMANCERESPONSEBODYPERFORMANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(ResourcePoolPerformances, resourcePoolPerformances_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(ResourcePoolPerformances, resourcePoolPerformances_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances() = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances(const DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances &) = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances(DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances &&) = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances() = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances& operator=(const DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances &) = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances& operator=(DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->resourcePoolPerformances_ != nullptr && this->unit_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // resourcePoolPerformances Field Functions 
    bool hasResourcePoolPerformances() const { return this->resourcePoolPerformances_ != nullptr;};
    void deleteResourcePoolPerformances() { this->resourcePoolPerformances_ = nullptr;};
    inline const vector<Models::DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances> & resourcePoolPerformances() const { DARABONBA_PTR_GET_CONST(resourcePoolPerformances_, vector<Models::DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances>) };
    inline vector<Models::DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances> resourcePoolPerformances() { DARABONBA_PTR_GET(resourcePoolPerformances_, vector<Models::DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances>) };
    inline DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances& setResourcePoolPerformances(const vector<Models::DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances> & resourcePoolPerformances) { DARABONBA_PTR_SET_VALUE(resourcePoolPerformances_, resourcePoolPerformances) };
    inline DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances& setResourcePoolPerformances(vector<Models::DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances> && resourcePoolPerformances) { DARABONBA_PTR_SET_RVALUE(resourcePoolPerformances_, resourcePoolPerformances) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // The metric of the resource group.
    std::shared_ptr<string> key_ = nullptr;
    // The queried monitoring information about the resource groups.
    std::shared_ptr<vector<Models::DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances>> resourcePoolPerformances_ = nullptr;
    // The unit of the metric value.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
