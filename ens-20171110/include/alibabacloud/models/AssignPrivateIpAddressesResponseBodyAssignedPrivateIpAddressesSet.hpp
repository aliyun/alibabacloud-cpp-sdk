// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESRESPONSEBODYASSIGNEDPRIVATEIPADDRESSESSET_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESRESPONSEBODYASSIGNEDPRIVATEIPADDRESSESSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(PrivateIpSet, privateIpSet_);
    };
    friend void from_json(const Darabonba::Json& j, AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet& obj) { 
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
    virtual bool empty() const override { return this->networkInterfaceId_ == nullptr
        && return this->privateIpSet_ == nullptr; };
    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // privateIpSet Field Functions 
    bool hasPrivateIpSet() const { return this->privateIpSet_ != nullptr;};
    void deletePrivateIpSet() { this->privateIpSet_ = nullptr;};
    inline const vector<string> & privateIpSet() const { DARABONBA_PTR_GET_CONST(privateIpSet_, vector<string>) };
    inline vector<string> privateIpSet() { DARABONBA_PTR_GET(privateIpSet_, vector<string>) };
    inline AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet& setPrivateIpSet(const vector<string> & privateIpSet) { DARABONBA_PTR_SET_VALUE(privateIpSet_, privateIpSet) };
    inline AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet& setPrivateIpSet(vector<string> && privateIpSet) { DARABONBA_PTR_SET_RVALUE(privateIpSet_, privateIpSet) };


  protected:
    // The ID of the ENI.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The assigned private IP addresses.
    std::shared_ptr<vector<string>> privateIpSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
