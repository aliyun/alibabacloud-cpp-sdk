// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKZONESRESPONSEBODYNETWORKZONES_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKZONESRESPONSEBODYNETWORKZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListNetworkZonesResponseBodyNetworkZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkZonesResponseBodyNetworkZones& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ipv4Cidrs, ipv4Cidrs_);
      DARABONBA_PTR_TO_JSON(Ipv6Cidrs, ipv6Cidrs_);
      DARABONBA_PTR_TO_JSON(NetworkZoneId, networkZoneId_);
      DARABONBA_PTR_TO_JSON(NetworkZoneName, networkZoneName_);
      DARABONBA_PTR_TO_JSON(NetworkZoneType, networkZoneType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkZonesResponseBodyNetworkZones& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ipv4Cidrs, ipv4Cidrs_);
      DARABONBA_PTR_FROM_JSON(Ipv6Cidrs, ipv6Cidrs_);
      DARABONBA_PTR_FROM_JSON(NetworkZoneId, networkZoneId_);
      DARABONBA_PTR_FROM_JSON(NetworkZoneName, networkZoneName_);
      DARABONBA_PTR_FROM_JSON(NetworkZoneType, networkZoneType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListNetworkZonesResponseBodyNetworkZones() = default ;
    ListNetworkZonesResponseBodyNetworkZones(const ListNetworkZonesResponseBodyNetworkZones &) = default ;
    ListNetworkZonesResponseBodyNetworkZones(ListNetworkZonesResponseBodyNetworkZones &&) = default ;
    ListNetworkZonesResponseBodyNetworkZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkZonesResponseBodyNetworkZones() = default ;
    ListNetworkZonesResponseBodyNetworkZones& operator=(const ListNetworkZonesResponseBodyNetworkZones &) = default ;
    ListNetworkZonesResponseBodyNetworkZones& operator=(ListNetworkZonesResponseBodyNetworkZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->instanceId_ == nullptr && return this->ipv4Cidrs_ == nullptr && return this->ipv6Cidrs_ == nullptr && return this->networkZoneId_ == nullptr && return this->networkZoneName_ == nullptr
        && return this->networkZoneType_ == nullptr && return this->vpcId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListNetworkZonesResponseBodyNetworkZones& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListNetworkZonesResponseBodyNetworkZones& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipv4Cidrs Field Functions 
    bool hasIpv4Cidrs() const { return this->ipv4Cidrs_ != nullptr;};
    void deleteIpv4Cidrs() { this->ipv4Cidrs_ = nullptr;};
    inline const vector<string> & ipv4Cidrs() const { DARABONBA_PTR_GET_CONST(ipv4Cidrs_, vector<string>) };
    inline vector<string> ipv4Cidrs() { DARABONBA_PTR_GET(ipv4Cidrs_, vector<string>) };
    inline ListNetworkZonesResponseBodyNetworkZones& setIpv4Cidrs(const vector<string> & ipv4Cidrs) { DARABONBA_PTR_SET_VALUE(ipv4Cidrs_, ipv4Cidrs) };
    inline ListNetworkZonesResponseBodyNetworkZones& setIpv4Cidrs(vector<string> && ipv4Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv4Cidrs_, ipv4Cidrs) };


    // ipv6Cidrs Field Functions 
    bool hasIpv6Cidrs() const { return this->ipv6Cidrs_ != nullptr;};
    void deleteIpv6Cidrs() { this->ipv6Cidrs_ = nullptr;};
    inline const vector<string> & ipv6Cidrs() const { DARABONBA_PTR_GET_CONST(ipv6Cidrs_, vector<string>) };
    inline vector<string> ipv6Cidrs() { DARABONBA_PTR_GET(ipv6Cidrs_, vector<string>) };
    inline ListNetworkZonesResponseBodyNetworkZones& setIpv6Cidrs(const vector<string> & ipv6Cidrs) { DARABONBA_PTR_SET_VALUE(ipv6Cidrs_, ipv6Cidrs) };
    inline ListNetworkZonesResponseBodyNetworkZones& setIpv6Cidrs(vector<string> && ipv6Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv6Cidrs_, ipv6Cidrs) };


    // networkZoneId Field Functions 
    bool hasNetworkZoneId() const { return this->networkZoneId_ != nullptr;};
    void deleteNetworkZoneId() { this->networkZoneId_ = nullptr;};
    inline string networkZoneId() const { DARABONBA_PTR_GET_DEFAULT(networkZoneId_, "") };
    inline ListNetworkZonesResponseBodyNetworkZones& setNetworkZoneId(string networkZoneId) { DARABONBA_PTR_SET_VALUE(networkZoneId_, networkZoneId) };


    // networkZoneName Field Functions 
    bool hasNetworkZoneName() const { return this->networkZoneName_ != nullptr;};
    void deleteNetworkZoneName() { this->networkZoneName_ = nullptr;};
    inline string networkZoneName() const { DARABONBA_PTR_GET_DEFAULT(networkZoneName_, "") };
    inline ListNetworkZonesResponseBodyNetworkZones& setNetworkZoneName(string networkZoneName) { DARABONBA_PTR_SET_VALUE(networkZoneName_, networkZoneName) };


    // networkZoneType Field Functions 
    bool hasNetworkZoneType() const { return this->networkZoneType_ != nullptr;};
    void deleteNetworkZoneType() { this->networkZoneType_ = nullptr;};
    inline string networkZoneType() const { DARABONBA_PTR_GET_DEFAULT(networkZoneType_, "") };
    inline ListNetworkZonesResponseBodyNetworkZones& setNetworkZoneType(string networkZoneType) { DARABONBA_PTR_SET_VALUE(networkZoneType_, networkZoneType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListNetworkZonesResponseBodyNetworkZones& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // IDaaS EIAM 网络区域描述
    std::shared_ptr<string> description_ = nullptr;
    // 实例ID。
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<string>> ipv4Cidrs_ = nullptr;
    std::shared_ptr<vector<string>> ipv6Cidrs_ = nullptr;
    // IDaaS EIAM 网络区域Id
    std::shared_ptr<string> networkZoneId_ = nullptr;
    // IDaaS EIAM 网络区域名称
    std::shared_ptr<string> networkZoneName_ = nullptr;
    // IDaaS EIAM 网络区域类型
    std::shared_ptr<string> networkZoneType_ = nullptr;
    // IDaaS EIAM 专有网络VpcId
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
