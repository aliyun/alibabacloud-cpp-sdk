// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENDPOINTSRESPONSEBODYDATAENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENDPOINTSRESPONSEBODYDATAENDPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEndpointsResponseBodyDataEndpointsPorts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeEndpointsResponseBodyDataEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEndpointsResponseBodyDataEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEndpointsResponseBodyDataEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
    };
    DescribeEndpointsResponseBodyDataEndpoints() = default ;
    DescribeEndpointsResponseBodyDataEndpoints(const DescribeEndpointsResponseBodyDataEndpoints &) = default ;
    DescribeEndpointsResponseBodyDataEndpoints(DescribeEndpointsResponseBodyDataEndpoints &&) = default ;
    DescribeEndpointsResponseBodyDataEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEndpointsResponseBodyDataEndpoints() = default ;
    DescribeEndpointsResponseBodyDataEndpoints& operator=(const DescribeEndpointsResponseBodyDataEndpoints &) = default ;
    DescribeEndpointsResponseBodyDataEndpoints& operator=(DescribeEndpointsResponseBodyDataEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionString_ == nullptr
        && return this->IPAddress_ == nullptr && return this->netType_ == nullptr && return this->ports_ == nullptr && return this->status_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->vpcId_ == nullptr && return this->vpcInstanceId_ == nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeEndpointsResponseBodyDataEndpoints& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // IPAddress Field Functions 
    bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
    void deleteIPAddress() { this->IPAddress_ = nullptr;};
    inline string IPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
    inline DescribeEndpointsResponseBodyDataEndpoints& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeEndpointsResponseBodyDataEndpoints& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<Models::DescribeEndpointsResponseBodyDataEndpointsPorts> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<Models::DescribeEndpointsResponseBodyDataEndpointsPorts>) };
    inline vector<Models::DescribeEndpointsResponseBodyDataEndpointsPorts> ports() { DARABONBA_PTR_GET(ports_, vector<Models::DescribeEndpointsResponseBodyDataEndpointsPorts>) };
    inline DescribeEndpointsResponseBodyDataEndpoints& setPorts(const vector<Models::DescribeEndpointsResponseBodyDataEndpointsPorts> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline DescribeEndpointsResponseBodyDataEndpoints& setPorts(vector<Models::DescribeEndpointsResponseBodyDataEndpointsPorts> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEndpointsResponseBodyDataEndpoints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeEndpointsResponseBodyDataEndpoints& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeEndpointsResponseBodyDataEndpoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline DescribeEndpointsResponseBodyDataEndpoints& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


  protected:
    // The endpoint of the cluster.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The IP address.
    std::shared_ptr<string> IPAddress_ = nullptr;
    // The network type of the endpoint. Valid values:
    // 
    // *   VPC
    // *   PUBLIC
    std::shared_ptr<string> netType_ = nullptr;
    // The details of the ports.
    std::shared_ptr<vector<Models::DescribeEndpointsResponseBodyDataEndpointsPorts>> ports_ = nullptr;
    // The state of the cluster.
    std::shared_ptr<string> status_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
