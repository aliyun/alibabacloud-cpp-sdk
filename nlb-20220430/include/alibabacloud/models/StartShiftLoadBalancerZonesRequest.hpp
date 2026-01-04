// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSHIFTLOADBALANCERZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTSHIFTLOADBALANCERZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class StartShiftLoadBalancerZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartShiftLoadBalancerZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, StartShiftLoadBalancerZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    StartShiftLoadBalancerZonesRequest() = default ;
    StartShiftLoadBalancerZonesRequest(const StartShiftLoadBalancerZonesRequest &) = default ;
    StartShiftLoadBalancerZonesRequest(StartShiftLoadBalancerZonesRequest &&) = default ;
    StartShiftLoadBalancerZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartShiftLoadBalancerZonesRequest() = default ;
    StartShiftLoadBalancerZonesRequest& operator=(const StartShiftLoadBalancerZonesRequest &) = default ;
    StartShiftLoadBalancerZonesRequest& operator=(StartShiftLoadBalancerZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneMappings& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      ZoneMappings() = default ;
      ZoneMappings(const ZoneMappings &) = default ;
      ZoneMappings(ZoneMappings &&) = default ;
      ZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZoneMappings() = default ;
      ZoneMappings& operator=(const ZoneMappings &) = default ;
      ZoneMappings& operator=(ZoneMappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vSwitchId_ == nullptr
        && this->zoneId_ == nullptr; };
      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The ID of the vSwitch in the zone. By default, each zone uses one vSwitch and one subnet.
      // 
      // This parameter is required.
      shared_ptr<string> vSwitchId_ {};
      // The zone ID of the NLB instance.
      // 
      // >  You can remove only one IP address (or zone) in each call.
      // 
      // You can call the [DescribeZones](https://help.aliyun.com/document_detail/443890.html) operation to query the most recent zone list.
      // 
      // This parameter is required.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->loadBalancerId_ == nullptr && this->regionId_ == nullptr && this->zoneMappings_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline StartShiftLoadBalancerZonesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline StartShiftLoadBalancerZonesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline StartShiftLoadBalancerZonesRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartShiftLoadBalancerZonesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<StartShiftLoadBalancerZonesRequest::ZoneMappings> & getZoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<StartShiftLoadBalancerZonesRequest::ZoneMappings>) };
    inline vector<StartShiftLoadBalancerZonesRequest::ZoneMappings> getZoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<StartShiftLoadBalancerZonesRequest::ZoneMappings>) };
    inline StartShiftLoadBalancerZonesRequest& setZoneMappings(const vector<StartShiftLoadBalancerZonesRequest::ZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline StartShiftLoadBalancerZonesRequest& setZoneMappings(vector<StartShiftLoadBalancerZonesRequest::ZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token. Ensure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** is different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run, without sending the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and sends the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The NLB instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
    // The region ID of the NLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The mappings between zones and vSwitches.
    // 
    // >  You can remove only one IP address (or zone) in each call.
    // 
    // This parameter is required.
    shared_ptr<vector<StartShiftLoadBalancerZonesRequest::ZoneMappings>> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
