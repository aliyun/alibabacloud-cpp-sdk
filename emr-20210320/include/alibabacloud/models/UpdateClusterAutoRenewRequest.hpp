// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLUSTERAUTORENEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLUSTERAUTORENEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AutoRenewInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class UpdateClusterAutoRenewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClusterAutoRenewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewInstances, autoRenewInstances_);
      DARABONBA_PTR_TO_JSON(ClusterAutoRenew, clusterAutoRenew_);
      DARABONBA_PTR_TO_JSON(ClusterAutoRenewDuration, clusterAutoRenewDuration_);
      DARABONBA_PTR_TO_JSON(ClusterAutoRenewDurationUnit, clusterAutoRenewDurationUnit_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RenewAllInstances, renewAllInstances_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClusterAutoRenewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewInstances, autoRenewInstances_);
      DARABONBA_PTR_FROM_JSON(ClusterAutoRenew, clusterAutoRenew_);
      DARABONBA_PTR_FROM_JSON(ClusterAutoRenewDuration, clusterAutoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(ClusterAutoRenewDurationUnit, clusterAutoRenewDurationUnit_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RenewAllInstances, renewAllInstances_);
    };
    UpdateClusterAutoRenewRequest() = default ;
    UpdateClusterAutoRenewRequest(const UpdateClusterAutoRenewRequest &) = default ;
    UpdateClusterAutoRenewRequest(UpdateClusterAutoRenewRequest &&) = default ;
    UpdateClusterAutoRenewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClusterAutoRenewRequest() = default ;
    UpdateClusterAutoRenewRequest& operator=(const UpdateClusterAutoRenewRequest &) = default ;
    UpdateClusterAutoRenewRequest& operator=(UpdateClusterAutoRenewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewInstances_ == nullptr
        && this->clusterAutoRenew_ == nullptr && this->clusterAutoRenewDuration_ == nullptr && this->clusterAutoRenewDurationUnit_ == nullptr && this->clusterId_ == nullptr && this->regionId_ == nullptr
        && this->renewAllInstances_ == nullptr; };
    // autoRenewInstances Field Functions 
    bool hasAutoRenewInstances() const { return this->autoRenewInstances_ != nullptr;};
    void deleteAutoRenewInstances() { this->autoRenewInstances_ = nullptr;};
    inline const vector<AutoRenewInstance> & getAutoRenewInstances() const { DARABONBA_PTR_GET_CONST(autoRenewInstances_, vector<AutoRenewInstance>) };
    inline vector<AutoRenewInstance> getAutoRenewInstances() { DARABONBA_PTR_GET(autoRenewInstances_, vector<AutoRenewInstance>) };
    inline UpdateClusterAutoRenewRequest& setAutoRenewInstances(const vector<AutoRenewInstance> & autoRenewInstances) { DARABONBA_PTR_SET_VALUE(autoRenewInstances_, autoRenewInstances) };
    inline UpdateClusterAutoRenewRequest& setAutoRenewInstances(vector<AutoRenewInstance> && autoRenewInstances) { DARABONBA_PTR_SET_RVALUE(autoRenewInstances_, autoRenewInstances) };


    // clusterAutoRenew Field Functions 
    bool hasClusterAutoRenew() const { return this->clusterAutoRenew_ != nullptr;};
    void deleteClusterAutoRenew() { this->clusterAutoRenew_ = nullptr;};
    inline bool getClusterAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(clusterAutoRenew_, false) };
    inline UpdateClusterAutoRenewRequest& setClusterAutoRenew(bool clusterAutoRenew) { DARABONBA_PTR_SET_VALUE(clusterAutoRenew_, clusterAutoRenew) };


    // clusterAutoRenewDuration Field Functions 
    bool hasClusterAutoRenewDuration() const { return this->clusterAutoRenewDuration_ != nullptr;};
    void deleteClusterAutoRenewDuration() { this->clusterAutoRenewDuration_ = nullptr;};
    inline int32_t getClusterAutoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(clusterAutoRenewDuration_, 0) };
    inline UpdateClusterAutoRenewRequest& setClusterAutoRenewDuration(int32_t clusterAutoRenewDuration) { DARABONBA_PTR_SET_VALUE(clusterAutoRenewDuration_, clusterAutoRenewDuration) };


    // clusterAutoRenewDurationUnit Field Functions 
    bool hasClusterAutoRenewDurationUnit() const { return this->clusterAutoRenewDurationUnit_ != nullptr;};
    void deleteClusterAutoRenewDurationUnit() { this->clusterAutoRenewDurationUnit_ = nullptr;};
    inline string getClusterAutoRenewDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(clusterAutoRenewDurationUnit_, "") };
    inline UpdateClusterAutoRenewRequest& setClusterAutoRenewDurationUnit(string clusterAutoRenewDurationUnit) { DARABONBA_PTR_SET_VALUE(clusterAutoRenewDurationUnit_, clusterAutoRenewDurationUnit) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateClusterAutoRenewRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateClusterAutoRenewRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // renewAllInstances Field Functions 
    bool hasRenewAllInstances() const { return this->renewAllInstances_ != nullptr;};
    void deleteRenewAllInstances() { this->renewAllInstances_ = nullptr;};
    inline bool getRenewAllInstances() const { DARABONBA_PTR_GET_DEFAULT(renewAllInstances_, false) };
    inline UpdateClusterAutoRenewRequest& setRenewAllInstances(bool renewAllInstances) { DARABONBA_PTR_SET_VALUE(renewAllInstances_, renewAllInstances) };


  protected:
    // The list of ECS instances for which to enable auto-renewal. This parameter takes effect only when RenewAllInstances is not set to true.
    shared_ptr<vector<AutoRenewInstance>> autoRenewInstances_ {};
    // Specifies whether to enable auto-renewal for the cluster. Valid values:
    // 
    // - true: Enables auto-renewal.
    // 
    // - false: Disables auto-renewal.
    // 
    // Default value: false.
    shared_ptr<bool> clusterAutoRenew_ {};
    // The auto-renewal duration for the cluster. This parameter takes effect only when ClusterAutoRenew is set to true.
    // If ClusterAutoRenewDurationUnit is set to Month, the valid values are 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, and 36. If ClusterAutoRenewDurationUnit is set to Year, the valid values are 1, 2, and 3.
    shared_ptr<int32_t> clusterAutoRenewDuration_ {};
    // The unit of the auto-renewal duration. Valid values:
    // 
    // - Month
    // 
    // - Year
    // 
    // Default value: Month.
    shared_ptr<string> clusterAutoRenewDurationUnit_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether to enable auto-renewal for all ECS instances in the cluster. Valid values:
    // 
    // - true: Enables auto-renewal for all ECS instances in the cluster. The default auto-renewal duration is one month.
    // 
    // - false: Does not enable auto-renewal for all ECS instances in the cluster. You can specify the ECS instances for which to enable auto-renewal in the AutoRenewInstances parameter.
    // 
    // Default value: false.
    shared_ptr<bool> renewAllInstances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
