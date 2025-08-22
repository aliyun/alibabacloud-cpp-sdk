// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class EnableMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DropMetric, dropMetric_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DropMetric, dropMetric_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    EnableMetricRequest() = default ;
    EnableMetricRequest(const EnableMetricRequest &) = default ;
    EnableMetricRequest(EnableMetricRequest &&) = default ;
    EnableMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableMetricRequest() = default ;
    EnableMetricRequest& operator=(const EnableMetricRequest &) = default ;
    EnableMetricRequest& operator=(EnableMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->dropMetric_ != nullptr && this->regionId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline EnableMetricRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dropMetric Field Functions 
    bool hasDropMetric() const { return this->dropMetric_ != nullptr;};
    void deleteDropMetric() { this->dropMetric_ = nullptr;};
    inline string dropMetric() const { DARABONBA_PTR_GET_DEFAULT(dropMetric_, "") };
    inline EnableMetricRequest& setDropMetric(string dropMetric) { DARABONBA_PTR_SET_VALUE(dropMetric_, dropMetric) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableMetricRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The metric name.
    std::shared_ptr<string> dropMetric_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
