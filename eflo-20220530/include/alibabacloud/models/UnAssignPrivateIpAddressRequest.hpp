// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNASSIGNPRIVATEIPADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNASSIGNPRIVATEIPADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class UnAssignPrivateIpAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnAssignPrivateIpAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(IpName, ipName_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
    };
    friend void from_json(const Darabonba::Json& j, UnAssignPrivateIpAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(IpName, ipName_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
    };
    UnAssignPrivateIpAddressRequest() = default ;
    UnAssignPrivateIpAddressRequest(const UnAssignPrivateIpAddressRequest &) = default ;
    UnAssignPrivateIpAddressRequest(UnAssignPrivateIpAddressRequest &&) = default ;
    UnAssignPrivateIpAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnAssignPrivateIpAddressRequest() = default ;
    UnAssignPrivateIpAddressRequest& operator=(const UnAssignPrivateIpAddressRequest &) = default ;
    UnAssignPrivateIpAddressRequest& operator=(UnAssignPrivateIpAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->ipName_ == nullptr && this->networkInterfaceId_ == nullptr && this->privateIpAddress_ == nullptr && this->regionId_ == nullptr && this->subnetId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UnAssignPrivateIpAddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ipName Field Functions 
    bool hasIpName() const { return this->ipName_ != nullptr;};
    void deleteIpName() { this->ipName_ = nullptr;};
    inline string getIpName() const { DARABONBA_PTR_GET_DEFAULT(ipName_, "") };
    inline UnAssignPrivateIpAddressRequest& setIpName(string ipName) { DARABONBA_PTR_SET_VALUE(ipName_, ipName) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline UnAssignPrivateIpAddressRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline UnAssignPrivateIpAddressRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UnAssignPrivateIpAddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string getSubnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline UnAssignPrivateIpAddressRequest& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


  protected:
    // By default, popApi is not ignored and idempotent
    shared_ptr<string> clientToken_ {};
    // IP unique identifier
    // 
    // This parameter is required.
    shared_ptr<string> ipName_ {};
    // Lingjun network interface controller ID
    // 
    // This parameter is required.
    shared_ptr<string> networkInterfaceId_ {};
    // The private IP address of the instance.
    shared_ptr<string> privateIpAddress_ {};
    // Region
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Subnet
    // 
    // This parameter is required.
    shared_ptr<string> subnetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
