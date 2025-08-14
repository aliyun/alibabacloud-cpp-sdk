// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRANTVSWITCHENISRESPONSEBODYGRANTVSWITCHENIS_HPP_
#define ALIBABACLOUD_MODELS_LISTGRANTVSWITCHENISRESPONSEBODYGRANTVSWITCHENIS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_TO_JSON(PrimaryIpAddress, primaryIpAddress_);
      DARABONBA_PTR_TO_JSON(TransitRouterFlag, transitRouterFlag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_FROM_JSON(PrimaryIpAddress, primaryIpAddress_);
      DARABONBA_PTR_FROM_JSON(TransitRouterFlag, transitRouterFlag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis() = default ;
    ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis(const ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis &) = default ;
    ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis(ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis &&) = default ;
    ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis() = default ;
    ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis& operator=(const ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis &) = default ;
    ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis& operator=(ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->networkInterfaceId_ != nullptr && this->networkInterfaceName_ != nullptr && this->primaryIpAddress_ != nullptr && this->transitRouterFlag_ != nullptr && this->vSwitchId_ != nullptr
        && this->vpcId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfaceName Field Functions 
    bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
    void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
    inline string networkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
    inline ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


    // primaryIpAddress Field Functions 
    bool hasPrimaryIpAddress() const { return this->primaryIpAddress_ != nullptr;};
    void deletePrimaryIpAddress() { this->primaryIpAddress_ = nullptr;};
    inline string primaryIpAddress() const { DARABONBA_PTR_GET_DEFAULT(primaryIpAddress_, "") };
    inline ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis& setPrimaryIpAddress(string primaryIpAddress) { DARABONBA_PTR_SET_VALUE(primaryIpAddress_, primaryIpAddress) };


    // transitRouterFlag Field Functions 
    bool hasTransitRouterFlag() const { return this->transitRouterFlag_ != nullptr;};
    void deleteTransitRouterFlag() { this->transitRouterFlag_ = nullptr;};
    inline bool transitRouterFlag() const { DARABONBA_PTR_GET_DEFAULT(transitRouterFlag_, false) };
    inline ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis& setTransitRouterFlag(bool transitRouterFlag) { DARABONBA_PTR_SET_VALUE(transitRouterFlag_, transitRouterFlag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ENI description.
    std::shared_ptr<string> description_ = nullptr;
    // The ENI ID.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The ENI name.
    std::shared_ptr<string> networkInterfaceName_ = nullptr;
    // The primary private IPv4 address of the ENI.
    std::shared_ptr<string> primaryIpAddress_ = nullptr;
    // Indicates whether the ENI is created by a transit router. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // ENIs that are created by transit routers cannot be used as multicast sources or members.
    std::shared_ptr<bool> transitRouterFlag_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
