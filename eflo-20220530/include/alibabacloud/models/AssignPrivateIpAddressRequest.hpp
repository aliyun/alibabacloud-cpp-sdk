// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class AssignPrivateIpAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignPrivateIpAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssignMac, assignMac_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SkipConfig, skipConfig_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
    };
    friend void from_json(const Darabonba::Json& j, AssignPrivateIpAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignMac, assignMac_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SkipConfig, skipConfig_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
    };
    AssignPrivateIpAddressRequest() = default ;
    AssignPrivateIpAddressRequest(const AssignPrivateIpAddressRequest &) = default ;
    AssignPrivateIpAddressRequest(AssignPrivateIpAddressRequest &&) = default ;
    AssignPrivateIpAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignPrivateIpAddressRequest() = default ;
    AssignPrivateIpAddressRequest& operator=(const AssignPrivateIpAddressRequest &) = default ;
    AssignPrivateIpAddressRequest& operator=(AssignPrivateIpAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignMac_ == nullptr
        && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->networkInterfaceId_ == nullptr && return this->privateIpAddress_ == nullptr && return this->regionId_ == nullptr
        && return this->skipConfig_ == nullptr && return this->subnetId_ == nullptr; };
    // assignMac Field Functions 
    bool hasAssignMac() const { return this->assignMac_ != nullptr;};
    void deleteAssignMac() { this->assignMac_ = nullptr;};
    inline bool assignMac() const { DARABONBA_PTR_GET_DEFAULT(assignMac_, false) };
    inline AssignPrivateIpAddressRequest& setAssignMac(bool assignMac) { DARABONBA_PTR_SET_VALUE(assignMac_, assignMac) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AssignPrivateIpAddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AssignPrivateIpAddressRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline AssignPrivateIpAddressRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline AssignPrivateIpAddressRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssignPrivateIpAddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // skipConfig Field Functions 
    bool hasSkipConfig() const { return this->skipConfig_ != nullptr;};
    void deleteSkipConfig() { this->skipConfig_ = nullptr;};
    inline bool skipConfig() const { DARABONBA_PTR_GET_DEFAULT(skipConfig_, false) };
    inline AssignPrivateIpAddressRequest& setSkipConfig(bool skipConfig) { DARABONBA_PTR_SET_VALUE(skipConfig_, skipConfig) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string subnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline AssignPrivateIpAddressRequest& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


  protected:
    // Specifies whether to assign a mac address.
    std::shared_ptr<bool> assignMac_ = nullptr;
    // By default, popApi is not ignored and idempotent
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the variable.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the network interface controller.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The secondary private IP address.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The default value is false. If you set the value to true, the secondary private IP address application process can be accelerated.
    // 
    // >  For more information, submit a ticket.
    std::shared_ptr<bool> skipConfig_ = nullptr;
    // It belongs to the Lingjun subnet.
    // 
    // This parameter is required.
    std::shared_ptr<string> subnetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
