// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOSCALINGACTIVITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOSCALINGACTIVITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetAutoScalingActivityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoScalingActivityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScalingActivityId, scalingActivityId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoScalingActivityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityId, scalingActivityId_);
    };
    GetAutoScalingActivityRequest() = default ;
    GetAutoScalingActivityRequest(const GetAutoScalingActivityRequest &) = default ;
    GetAutoScalingActivityRequest(GetAutoScalingActivityRequest &&) = default ;
    GetAutoScalingActivityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoScalingActivityRequest() = default ;
    GetAutoScalingActivityRequest& operator=(const GetAutoScalingActivityRequest &) = default ;
    GetAutoScalingActivityRequest& operator=(GetAutoScalingActivityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->regionId_ != nullptr && this->scalingActivityId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetAutoScalingActivityRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAutoScalingActivityRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scalingActivityId Field Functions 
    bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
    void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
    inline string scalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
    inline GetAutoScalingActivityRequest& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the scaling activity.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingActivityId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
