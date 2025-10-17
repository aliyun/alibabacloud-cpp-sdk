// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESRESPONSEBODYASSIGNEDPRIVATEIPADDRESSESSET_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESRESPONSEBODYASSIGNEDPRIVATEIPADDRESSESSET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet.hpp>
#include <alibabacloud/models/AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4PrefixSet, ipv4PrefixSet_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(PrivateIpSet, privateIpSet_);
    };
    friend void from_json(const Darabonba::Json& j, AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4PrefixSet, ipv4PrefixSet_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpSet, privateIpSet_);
    };
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet() = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet(const AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet &) = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet(AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet &&) = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet() = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet& operator=(const AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet &) = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet& operator=(AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv4PrefixSet_ == nullptr
        && return this->networkInterfaceId_ == nullptr && return this->privateIpSet_ == nullptr; };
    // ipv4PrefixSet Field Functions 
    bool hasIpv4PrefixSet() const { return this->ipv4PrefixSet_ != nullptr;};
    void deleteIpv4PrefixSet() { this->ipv4PrefixSet_ = nullptr;};
    inline const Models::AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet & ipv4PrefixSet() const { DARABONBA_PTR_GET_CONST(ipv4PrefixSet_, Models::AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet) };
    inline Models::AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet ipv4PrefixSet() { DARABONBA_PTR_GET(ipv4PrefixSet_, Models::AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet) };
    inline AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet& setIpv4PrefixSet(const Models::AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet & ipv4PrefixSet) { DARABONBA_PTR_SET_VALUE(ipv4PrefixSet_, ipv4PrefixSet) };
    inline AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet& setIpv4PrefixSet(Models::AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet && ipv4PrefixSet) { DARABONBA_PTR_SET_RVALUE(ipv4PrefixSet_, ipv4PrefixSet) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // privateIpSet Field Functions 
    bool hasPrivateIpSet() const { return this->privateIpSet_ != nullptr;};
    void deletePrivateIpSet() { this->privateIpSet_ = nullptr;};
    inline const Models::AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet & privateIpSet() const { DARABONBA_PTR_GET_CONST(privateIpSet_, Models::AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet) };
    inline Models::AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet privateIpSet() { DARABONBA_PTR_GET(privateIpSet_, Models::AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet) };
    inline AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet& setPrivateIpSet(const Models::AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet & privateIpSet) { DARABONBA_PTR_SET_VALUE(privateIpSet_, privateIpSet) };
    inline AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet& setPrivateIpSet(Models::AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet && privateIpSet) { DARABONBA_PTR_SET_RVALUE(privateIpSet_, privateIpSet) };


  protected:
    // Details about the assigned IPv4 prefixes.
    std::shared_ptr<Models::AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet> ipv4PrefixSet_ = nullptr;
    // The ENI ID.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The secondary private IP addresses that are assigned to the ENI.
    std::shared_ptr<Models::AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet> privateIpSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
