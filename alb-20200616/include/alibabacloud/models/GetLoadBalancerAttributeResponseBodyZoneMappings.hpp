// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODYZONEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODYZONEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetLoadBalancerAttributeResponseBodyZoneMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerAttributeResponseBodyZoneMappings& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerAddresses, loadBalancerAddresses_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerAttributeResponseBodyZoneMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerAddresses, loadBalancerAddresses_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetLoadBalancerAttributeResponseBodyZoneMappings() = default ;
    GetLoadBalancerAttributeResponseBodyZoneMappings(const GetLoadBalancerAttributeResponseBodyZoneMappings &) = default ;
    GetLoadBalancerAttributeResponseBodyZoneMappings(GetLoadBalancerAttributeResponseBodyZoneMappings &&) = default ;
    GetLoadBalancerAttributeResponseBodyZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoadBalancerAttributeResponseBodyZoneMappings() = default ;
    GetLoadBalancerAttributeResponseBodyZoneMappings& operator=(const GetLoadBalancerAttributeResponseBodyZoneMappings &) = default ;
    GetLoadBalancerAttributeResponseBodyZoneMappings& operator=(GetLoadBalancerAttributeResponseBodyZoneMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loadBalancerAddresses_ != nullptr
        && this->status_ != nullptr && this->vSwitchId_ != nullptr && this->zoneId_ != nullptr; };
    // loadBalancerAddresses Field Functions 
    bool hasLoadBalancerAddresses() const { return this->loadBalancerAddresses_ != nullptr;};
    void deleteLoadBalancerAddresses() { this->loadBalancerAddresses_ = nullptr;};
    inline const vector<Models::GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses> & loadBalancerAddresses() const { DARABONBA_PTR_GET_CONST(loadBalancerAddresses_, vector<Models::GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses>) };
    inline vector<Models::GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses> loadBalancerAddresses() { DARABONBA_PTR_GET(loadBalancerAddresses_, vector<Models::GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses>) };
    inline GetLoadBalancerAttributeResponseBodyZoneMappings& setLoadBalancerAddresses(const vector<Models::GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses> & loadBalancerAddresses) { DARABONBA_PTR_SET_VALUE(loadBalancerAddresses_, loadBalancerAddresses) };
    inline GetLoadBalancerAttributeResponseBodyZoneMappings& setLoadBalancerAddresses(vector<Models::GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses> && loadBalancerAddresses) { DARABONBA_PTR_SET_RVALUE(loadBalancerAddresses_, loadBalancerAddresses) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappings& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The address of the ALB instance.
    std::shared_ptr<vector<Models::GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses>> loadBalancerAddresses_ = nullptr;
    // The zone status. Valid values:
    // 
    // - **Active**: The ALB instance is running.
    // 
    // - **Stopped**: The ALB instance is disabled. 
    // 
    // - **Shifted**: The ALB instance is removed.
    // 
    // - **Starting**: The ALB instance is starting.
    // 
    // - **Stopping**: The ALB instance is stopping.
    std::shared_ptr<string> status_ = nullptr;
    // The vSwitch in the zone. You can specify only one vSwitch (subnet) in each zone of an ALB instance.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID of the ALB instance.
    // 
    // You can call the [DescribeZones](https://help.aliyun.com/document_detail/189196.html) operation to query the most recent zone list.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
