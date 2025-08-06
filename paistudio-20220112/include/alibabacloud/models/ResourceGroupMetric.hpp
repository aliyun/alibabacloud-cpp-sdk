// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEGROUPMETRIC_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEGROUPMETRIC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/PaiStudio20220112.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ResourceGroupMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceGroupMetric& obj) { 
      DARABONBA_PTR_TO_JSON(GpuType, gpuType_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(ResourceGroupID, resourceGroupID_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceGroupMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(GpuType, gpuType_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupID, resourceGroupID_);
    };
    ResourceGroupMetric() = default ;
    ResourceGroupMetric(const ResourceGroupMetric &) = default ;
    ResourceGroupMetric(ResourceGroupMetric &&) = default ;
    ResourceGroupMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceGroupMetric() = default ;
    ResourceGroupMetric& operator=(const ResourceGroupMetric &) = default ;
    ResourceGroupMetric& operator=(ResourceGroupMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gpuType_ != nullptr
        && this->metrics_ != nullptr && this->resourceGroupID_ != nullptr; };
    // gpuType Field Functions 
    bool hasGpuType() const { return this->gpuType_ != nullptr;};
    void deleteGpuType() { this->gpuType_ = nullptr;};
    inline string gpuType() const { DARABONBA_PTR_GET_DEFAULT(gpuType_, "") };
    inline ResourceGroupMetric& setGpuType(string gpuType) { DARABONBA_PTR_SET_VALUE(gpuType_, gpuType) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Metric> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Metric>) };
    inline vector<Metric> metrics() { DARABONBA_PTR_GET(metrics_, vector<Metric>) };
    inline ResourceGroupMetric& setMetrics(const vector<Metric> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ResourceGroupMetric& setMetrics(vector<Metric> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string resourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline ResourceGroupMetric& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


  protected:
    std::shared_ptr<string> gpuType_ = nullptr;
    std::shared_ptr<vector<Metric>> metrics_ = nullptr;
    std::shared_ptr<string> resourceGroupID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
