// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCINSTANCENETWORKSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCINSTANCENETWORKSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCInstanceNetworkSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCInstanceNetworkSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(NetworkChargeType, networkChargeType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCInstanceNetworkSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(NetworkChargeType, networkChargeType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyRCInstanceNetworkSpecRequest() = default ;
    ModifyRCInstanceNetworkSpecRequest(const ModifyRCInstanceNetworkSpecRequest &) = default ;
    ModifyRCInstanceNetworkSpecRequest(ModifyRCInstanceNetworkSpecRequest &&) = default ;
    ModifyRCInstanceNetworkSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCInstanceNetworkSpecRequest() = default ;
    ModifyRCInstanceNetworkSpecRequest& operator=(const ModifyRCInstanceNetworkSpecRequest &) = default ;
    ModifyRCInstanceNetworkSpecRequest& operator=(ModifyRCInstanceNetworkSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->internetMaxBandwidthOut_ == nullptr && this->networkChargeType_ == nullptr && this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyRCInstanceNetworkSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline string getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, "") };
    inline ModifyRCInstanceNetworkSpecRequest& setInternetMaxBandwidthOut(string internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // networkChargeType Field Functions 
    bool hasNetworkChargeType() const { return this->networkChargeType_ != nullptr;};
    void deleteNetworkChargeType() { this->networkChargeType_ = nullptr;};
    inline string getNetworkChargeType() const { DARABONBA_PTR_GET_DEFAULT(networkChargeType_, "") };
    inline ModifyRCInstanceNetworkSpecRequest& setNetworkChargeType(string networkChargeType) { DARABONBA_PTR_SET_VALUE(networkChargeType_, networkChargeType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRCInstanceNetworkSpecRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the RDS Custom instance.
    shared_ptr<string> instanceId_ {};
    // The maximum outbound public bandwidth. Unit: Mbit/s.
    // 
    // Valid values: 0 to 1024. Default value: 0.
    shared_ptr<string> internetMaxBandwidthOut_ {};
    // The billing method of the bandwidth. Only the **pay-by-traffic** billing method is supported.
    // 
    // >  If the **pay-by-traffic** billing method is used for network usage, the maximum inbound and outbound bandwidths are used as the upper limits of bandwidths instead of guaranteed performance specifications. In scenarios where demand outstrips resource supplies, these maximum bandwidth values may not be limited.
    shared_ptr<string> networkChargeType_ {};
    // The region ID of the instance. You can call the DescribeRegions operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
