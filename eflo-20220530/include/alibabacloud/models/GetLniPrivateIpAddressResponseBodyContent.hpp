// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLNIPRIVATEIPADDRESSRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETLNIPRIVATEIPADDRESSRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetLniPrivateIpAddressResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLniPrivateIpAddressResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(IpAddressMac, ipAddressMac_);
      DARABONBA_PTR_TO_JSON(IpName, ipName_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLniPrivateIpAddressResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(IpAddressMac, ipAddressMac_);
      DARABONBA_PTR_FROM_JSON(IpName, ipName_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
    };
    GetLniPrivateIpAddressResponseBodyContent() = default ;
    GetLniPrivateIpAddressResponseBodyContent(const GetLniPrivateIpAddressResponseBodyContent &) = default ;
    GetLniPrivateIpAddressResponseBodyContent(GetLniPrivateIpAddressResponseBodyContent &&) = default ;
    GetLniPrivateIpAddressResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLniPrivateIpAddressResponseBodyContent() = default ;
    GetLniPrivateIpAddressResponseBodyContent& operator=(const GetLniPrivateIpAddressResponseBodyContent &) = default ;
    GetLniPrivateIpAddressResponseBodyContent& operator=(GetLniPrivateIpAddressResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->ipAddressMac_ == nullptr && return this->ipName_ == nullptr && return this->message_ == nullptr && return this->networkInterfaceId_ == nullptr
        && return this->privateIpAddress_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->subnetId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetLniPrivateIpAddressResponseBodyContent& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetLniPrivateIpAddressResponseBodyContent& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // ipAddressMac Field Functions 
    bool hasIpAddressMac() const { return this->ipAddressMac_ != nullptr;};
    void deleteIpAddressMac() { this->ipAddressMac_ = nullptr;};
    inline string ipAddressMac() const { DARABONBA_PTR_GET_DEFAULT(ipAddressMac_, "") };
    inline GetLniPrivateIpAddressResponseBodyContent& setIpAddressMac(string ipAddressMac) { DARABONBA_PTR_SET_VALUE(ipAddressMac_, ipAddressMac) };


    // ipName Field Functions 
    bool hasIpName() const { return this->ipName_ != nullptr;};
    void deleteIpName() { this->ipName_ = nullptr;};
    inline string ipName() const { DARABONBA_PTR_GET_DEFAULT(ipName_, "") };
    inline GetLniPrivateIpAddressResponseBodyContent& setIpName(string ipName) { DARABONBA_PTR_SET_VALUE(ipName_, ipName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLniPrivateIpAddressResponseBodyContent& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline GetLniPrivateIpAddressResponseBodyContent& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline GetLniPrivateIpAddressResponseBodyContent& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLniPrivateIpAddressResponseBodyContent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetLniPrivateIpAddressResponseBodyContent& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLniPrivateIpAddressResponseBodyContent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string subnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline GetLniPrivateIpAddressResponseBodyContent& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


  protected:
    // The instance description.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the data address was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // MAC address of the secondary private network
    std::shared_ptr<string> ipAddressMac_ = nullptr;
    // IP unique identifier
    std::shared_ptr<string> ipName_ = nullptr;
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    std::shared_ptr<string> message_ = nullptr;
    // Lingjun network interface controller ID
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The secondary private IP address of the Lingjun network interface controller.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group instance ID
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The state of the rule.
    std::shared_ptr<string> status_ = nullptr;
    // The subnet instance ID.
    std::shared_ptr<string> subnetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
