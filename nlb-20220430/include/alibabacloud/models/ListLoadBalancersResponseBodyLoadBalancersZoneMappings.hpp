// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERSZONEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERSZONEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListLoadBalancersResponseBodyLoadBalancersZoneMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBodyLoadBalancersZoneMappings& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerAddresses, loadBalancerAddresses_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBodyLoadBalancersZoneMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerAddresses, loadBalancerAddresses_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListLoadBalancersResponseBodyLoadBalancersZoneMappings() = default ;
    ListLoadBalancersResponseBodyLoadBalancersZoneMappings(const ListLoadBalancersResponseBodyLoadBalancersZoneMappings &) = default ;
    ListLoadBalancersResponseBodyLoadBalancersZoneMappings(ListLoadBalancersResponseBodyLoadBalancersZoneMappings &&) = default ;
    ListLoadBalancersResponseBodyLoadBalancersZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersResponseBodyLoadBalancersZoneMappings() = default ;
    ListLoadBalancersResponseBodyLoadBalancersZoneMappings& operator=(const ListLoadBalancersResponseBodyLoadBalancersZoneMappings &) = default ;
    ListLoadBalancersResponseBodyLoadBalancersZoneMappings& operator=(ListLoadBalancersResponseBodyLoadBalancersZoneMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loadBalancerAddresses_ != nullptr
        && this->status_ != nullptr && this->vSwitchId_ != nullptr && this->zoneId_ != nullptr; };
    // loadBalancerAddresses Field Functions 
    bool hasLoadBalancerAddresses() const { return this->loadBalancerAddresses_ != nullptr;};
    void deleteLoadBalancerAddresses() { this->loadBalancerAddresses_ = nullptr;};
    inline const vector<Models::ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses> & loadBalancerAddresses() const { DARABONBA_PTR_GET_CONST(loadBalancerAddresses_, vector<Models::ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses>) };
    inline vector<Models::ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses> loadBalancerAddresses() { DARABONBA_PTR_GET(loadBalancerAddresses_, vector<Models::ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses>) };
    inline ListLoadBalancersResponseBodyLoadBalancersZoneMappings& setLoadBalancerAddresses(const vector<Models::ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses> & loadBalancerAddresses) { DARABONBA_PTR_SET_VALUE(loadBalancerAddresses_, loadBalancerAddresses) };
    inline ListLoadBalancersResponseBodyLoadBalancersZoneMappings& setLoadBalancerAddresses(vector<Models::ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses> && loadBalancerAddresses) { DARABONBA_PTR_SET_RVALUE(loadBalancerAddresses_, loadBalancerAddresses) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancersZoneMappings& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancersZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancersZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The IP addresses that are used by the NLB instance.
    std::shared_ptr<vector<Models::ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses>> loadBalancerAddresses_ = nullptr;
    // The zone status. Valid values:
    // 
    // - **Active**: The zone is available.
    // 
    // - **Stopped**: The zone is disabled. You can set the zone to this status only by using Cloud Architect Design Tools (CADT).
    // 
    // - **Shifted**: The DNS record is removed.
    // 
    // - **Starting**: The zone is being enabled. You can set the zone to this status only by using CADT.
    // 
    // - **Stopping** You can set the zone to this status only by using CADT.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the vSwitch in the zone. By default, each zone contains one vSwitch and one subnet.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The name of the zone. You can call the [DescribeZones](https://help.aliyun.com/document_detail/443890.html) operation to query the zones.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
