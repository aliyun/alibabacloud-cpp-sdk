// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERRESOURCEPOOLPERFORMANCERESPONSEBODYPERFORMANCESRESOURCEPOOLPERFORMANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERRESOURCEPOOLPERFORMANCERESPONSEBODYPERFORMANCESRESOURCEPOOLPERFORMANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances& obj) { 
      DARABONBA_PTR_TO_JSON(ResourcePoolName, resourcePoolName_);
      DARABONBA_PTR_TO_JSON(ResourcePoolSeries, resourcePoolSeries_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourcePoolName, resourcePoolName_);
      DARABONBA_PTR_FROM_JSON(ResourcePoolSeries, resourcePoolSeries_);
    };
    DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances() = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances(const DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances &) = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances(DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances &&) = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances() = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances& operator=(const DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances &) = default ;
    DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances& operator=(DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourcePoolName_ != nullptr
        && this->resourcePoolSeries_ != nullptr; };
    // resourcePoolName Field Functions 
    bool hasResourcePoolName() const { return this->resourcePoolName_ != nullptr;};
    void deleteResourcePoolName() { this->resourcePoolName_ = nullptr;};
    inline string resourcePoolName() const { DARABONBA_PTR_GET_DEFAULT(resourcePoolName_, "") };
    inline DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances& setResourcePoolName(string resourcePoolName) { DARABONBA_PTR_SET_VALUE(resourcePoolName_, resourcePoolName) };


    // resourcePoolSeries Field Functions 
    bool hasResourcePoolSeries() const { return this->resourcePoolSeries_ != nullptr;};
    void deleteResourcePoolSeries() { this->resourcePoolSeries_ = nullptr;};
    inline const vector<Models::DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries> & resourcePoolSeries() const { DARABONBA_PTR_GET_CONST(resourcePoolSeries_, vector<Models::DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries>) };
    inline vector<Models::DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries> resourcePoolSeries() { DARABONBA_PTR_GET(resourcePoolSeries_, vector<Models::DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries>) };
    inline DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances& setResourcePoolSeries(const vector<Models::DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries> & resourcePoolSeries) { DARABONBA_PTR_SET_VALUE(resourcePoolSeries_, resourcePoolSeries) };
    inline DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances& setResourcePoolSeries(vector<Models::DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries> && resourcePoolSeries) { DARABONBA_PTR_SET_RVALUE(resourcePoolSeries_, resourcePoolSeries) };


  protected:
    // The name of the resource group.
    std::shared_ptr<string> resourcePoolName_ = nullptr;
    // The sequential monitoring information about the resource groups.
    std::shared_ptr<vector<Models::DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries>> resourcePoolSeries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
