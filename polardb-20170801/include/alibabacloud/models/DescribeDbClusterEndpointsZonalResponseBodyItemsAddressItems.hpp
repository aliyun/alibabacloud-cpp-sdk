// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENDPOINTSZONALRESPONSEBODYITEMSADDRESSITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENDPOINTSZONALRESPONSEBODYITEMSADDRESSITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(DashboardUsed, dashboardUsed_);
      DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrivateZoneConnectionString, privateZoneConnectionString_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(DashboardUsed, dashboardUsed_);
      DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrivateZoneConnectionString, privateZoneConnectionString_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
    };
    DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems() = default ;
    DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems(const DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems &) = default ;
    DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems(DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems &&) = default ;
    DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems() = default ;
    DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems& operator=(const DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems &) = default ;
    DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems& operator=(DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionString_ == nullptr
        && return this->dashboardUsed_ == nullptr && return this->IPAddress_ == nullptr && return this->netType_ == nullptr && return this->port_ == nullptr && return this->privateZoneConnectionString_ == nullptr
        && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcInstanceId_ == nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // dashboardUsed Field Functions 
    bool hasDashboardUsed() const { return this->dashboardUsed_ != nullptr;};
    void deleteDashboardUsed() { this->dashboardUsed_ = nullptr;};
    inline bool dashboardUsed() const { DARABONBA_PTR_GET_DEFAULT(dashboardUsed_, false) };
    inline DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems& setDashboardUsed(bool dashboardUsed) { DARABONBA_PTR_SET_VALUE(dashboardUsed_, dashboardUsed) };


    // IPAddress Field Functions 
    bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
    void deleteIPAddress() { this->IPAddress_ = nullptr;};
    inline string IPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateZoneConnectionString Field Functions 
    bool hasPrivateZoneConnectionString() const { return this->privateZoneConnectionString_ != nullptr;};
    void deletePrivateZoneConnectionString() { this->privateZoneConnectionString_ = nullptr;};
    inline string privateZoneConnectionString() const { DARABONBA_PTR_GET_DEFAULT(privateZoneConnectionString_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems& setPrivateZoneConnectionString(string privateZoneConnectionString) { DARABONBA_PTR_SET_VALUE(privateZoneConnectionString_, privateZoneConnectionString) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


  protected:
    std::shared_ptr<string> connectionString_ = nullptr;
    std::shared_ptr<bool> dashboardUsed_ = nullptr;
    std::shared_ptr<string> IPAddress_ = nullptr;
    std::shared_ptr<string> netType_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<string> privateZoneConnectionString_ = nullptr;
    std::shared_ptr<string> VPCId_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
