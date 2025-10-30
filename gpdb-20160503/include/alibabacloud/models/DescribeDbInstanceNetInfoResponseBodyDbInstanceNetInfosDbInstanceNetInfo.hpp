// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODYDBINSTANCENETINFOSDBINSTANCENETINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODYDBINSTANCENETINFOSDBINSTANCENETINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_TO_JSON(IPType, IPType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_FROM_JSON(IPType, IPType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
    };
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo() = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo(const DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo &) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo(DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo &&) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo() = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& operator=(const DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo &) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& operator=(DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressType_ == nullptr
        && return this->connectionString_ == nullptr && return this->IPAddress_ == nullptr && return this->IPType_ == nullptr && return this->port_ == nullptr && return this->VPCId_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vpcInstanceId_ == nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // IPAddress Field Functions 
    bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
    void deleteIPAddress() { this->IPAddress_ = nullptr;};
    inline string IPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


    // IPType Field Functions 
    bool hasIPType() const { return this->IPType_ != nullptr;};
    void deleteIPType() { this->IPType_ = nullptr;};
    inline string IPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


  protected:
    // The type of the endpoint.
    std::shared_ptr<string> addressType_ = nullptr;
    // The endpoint that is used to connect to the instance.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The IP address.
    std::shared_ptr<string> IPAddress_ = nullptr;
    // The type of the IP address.
    // 
    // *   Valid values for instances in the classic network: Inner and Public.
    // *   Valid values for instances in a virtual private cloud (VPC): Private and Public.
    std::shared_ptr<string> IPType_ = nullptr;
    // The port number.
    std::shared_ptr<string> port_ = nullptr;
    // The VPC ID of the instance.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The vSwitch ID. Multiple IDs are separated by commas (,).
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the instance that is deployed in a VPC.
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
