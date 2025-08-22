// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMETRICDROPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMETRICDROPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateMetricDropRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMetricDropRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(MetricDrop, metricDrop_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMetricDropRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(MetricDrop, metricDrop_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateMetricDropRequest() = default ;
    UpdateMetricDropRequest(const UpdateMetricDropRequest &) = default ;
    UpdateMetricDropRequest(UpdateMetricDropRequest &&) = default ;
    UpdateMetricDropRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMetricDropRequest() = default ;
    UpdateMetricDropRequest& operator=(const UpdateMetricDropRequest &) = default ;
    UpdateMetricDropRequest& operator=(UpdateMetricDropRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->metricDrop_ != nullptr && this->regionId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateMetricDropRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // metricDrop Field Functions 
    bool hasMetricDrop() const { return this->metricDrop_ != nullptr;};
    void deleteMetricDrop() { this->metricDrop_ = nullptr;};
    inline string metricDrop() const { DARABONBA_PTR_GET_DEFAULT(metricDrop_, "") };
    inline UpdateMetricDropRequest& setMetricDrop(string metricDrop) { DARABONBA_PTR_SET_VALUE(metricDrop_, metricDrop) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateMetricDropRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the Prometheus instance.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The list of discarded metrics. Specify one metric name in each line.
    std::shared_ptr<string> metricDrop_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
