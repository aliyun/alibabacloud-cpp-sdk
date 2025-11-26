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
        && return this->clusterAutoRenew_ == nullptr && return this->clusterAutoRenewDuration_ == nullptr && return this->clusterAutoRenewDurationUnit_ == nullptr && return this->clusterId_ == nullptr && return this->regionId_ == nullptr
        && return this->renewAllInstances_ == nullptr; };
    // autoRenewInstances Field Functions 
    bool hasAutoRenewInstances() const { return this->autoRenewInstances_ != nullptr;};
    void deleteAutoRenewInstances() { this->autoRenewInstances_ = nullptr;};
    inline const vector<AutoRenewInstance> & autoRenewInstances() const { DARABONBA_PTR_GET_CONST(autoRenewInstances_, vector<AutoRenewInstance>) };
    inline vector<AutoRenewInstance> autoRenewInstances() { DARABONBA_PTR_GET(autoRenewInstances_, vector<AutoRenewInstance>) };
    inline UpdateClusterAutoRenewRequest& setAutoRenewInstances(const vector<AutoRenewInstance> & autoRenewInstances) { DARABONBA_PTR_SET_VALUE(autoRenewInstances_, autoRenewInstances) };
    inline UpdateClusterAutoRenewRequest& setAutoRenewInstances(vector<AutoRenewInstance> && autoRenewInstances) { DARABONBA_PTR_SET_RVALUE(autoRenewInstances_, autoRenewInstances) };


    // clusterAutoRenew Field Functions 
    bool hasClusterAutoRenew() const { return this->clusterAutoRenew_ != nullptr;};
    void deleteClusterAutoRenew() { this->clusterAutoRenew_ = nullptr;};
    inline bool clusterAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(clusterAutoRenew_, false) };
    inline UpdateClusterAutoRenewRequest& setClusterAutoRenew(bool clusterAutoRenew) { DARABONBA_PTR_SET_VALUE(clusterAutoRenew_, clusterAutoRenew) };


    // clusterAutoRenewDuration Field Functions 
    bool hasClusterAutoRenewDuration() const { return this->clusterAutoRenewDuration_ != nullptr;};
    void deleteClusterAutoRenewDuration() { this->clusterAutoRenewDuration_ = nullptr;};
    inline int32_t clusterAutoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(clusterAutoRenewDuration_, 0) };
    inline UpdateClusterAutoRenewRequest& setClusterAutoRenewDuration(int32_t clusterAutoRenewDuration) { DARABONBA_PTR_SET_VALUE(clusterAutoRenewDuration_, clusterAutoRenewDuration) };


    // clusterAutoRenewDurationUnit Field Functions 
    bool hasClusterAutoRenewDurationUnit() const { return this->clusterAutoRenewDurationUnit_ != nullptr;};
    void deleteClusterAutoRenewDurationUnit() { this->clusterAutoRenewDurationUnit_ = nullptr;};
    inline string clusterAutoRenewDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(clusterAutoRenewDurationUnit_, "") };
    inline UpdateClusterAutoRenewRequest& setClusterAutoRenewDurationUnit(string clusterAutoRenewDurationUnit) { DARABONBA_PTR_SET_VALUE(clusterAutoRenewDurationUnit_, clusterAutoRenewDurationUnit) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateClusterAutoRenewRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateClusterAutoRenewRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // renewAllInstances Field Functions 
    bool hasRenewAllInstances() const { return this->renewAllInstances_ != nullptr;};
    void deleteRenewAllInstances() { this->renewAllInstances_ = nullptr;};
    inline bool renewAllInstances() const { DARABONBA_PTR_GET_DEFAULT(renewAllInstances_, false) };
    inline UpdateClusterAutoRenewRequest& setRenewAllInstances(bool renewAllInstances) { DARABONBA_PTR_SET_VALUE(renewAllInstances_, renewAllInstances) };


  protected:
    // 自动续费ECS实例列表。
    std::shared_ptr<vector<AutoRenewInstance>> autoRenewInstances_ = nullptr;
    // 集群是否自动续费。
    std::shared_ptr<bool> clusterAutoRenew_ = nullptr;
    // 集群自动续费时长。
    std::shared_ptr<int32_t> clusterAutoRenewDuration_ = nullptr;
    // 集群续费时长单位。
    std::shared_ptr<string> clusterAutoRenewDurationUnit_ = nullptr;
    // 集群ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // 区域ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // 续费所有ECS实例。
    std::shared_ptr<bool> renewAllInstances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
