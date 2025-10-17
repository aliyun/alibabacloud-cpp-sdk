// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYPRIVATEIPSETSPRIVATEIPSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYPRIVATEIPSETSPRIVATEIPSET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSetAssociatedPublicIp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedPublicIp, associatedPublicIp_);
      DARABONBA_PTR_TO_JSON(Primary, primary_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedPublicIp, associatedPublicIp_);
      DARABONBA_PTR_FROM_JSON(Primary, primary_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
    };
    DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet(const DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet(DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet& operator=(const DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet& operator=(DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedPublicIp_ == nullptr
        && return this->primary_ == nullptr && return this->privateIpAddress_ == nullptr; };
    // associatedPublicIp Field Functions 
    bool hasAssociatedPublicIp() const { return this->associatedPublicIp_ != nullptr;};
    void deleteAssociatedPublicIp() { this->associatedPublicIp_ = nullptr;};
    inline const Models::DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSetAssociatedPublicIp & associatedPublicIp() const { DARABONBA_PTR_GET_CONST(associatedPublicIp_, Models::DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSetAssociatedPublicIp) };
    inline Models::DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSetAssociatedPublicIp associatedPublicIp() { DARABONBA_PTR_GET(associatedPublicIp_, Models::DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSetAssociatedPublicIp) };
    inline DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet& setAssociatedPublicIp(const Models::DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSetAssociatedPublicIp & associatedPublicIp) { DARABONBA_PTR_SET_VALUE(associatedPublicIp_, associatedPublicIp) };
    inline DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet& setAssociatedPublicIp(Models::DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSetAssociatedPublicIp && associatedPublicIp) { DARABONBA_PTR_SET_RVALUE(associatedPublicIp_, associatedPublicIp) };


    // primary Field Functions 
    bool hasPrimary() const { return this->primary_ != nullptr;};
    void deletePrimary() { this->primary_ = nullptr;};
    inline bool primary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
    inline DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


  protected:
    // The EIP that is associated with the secondary private IP address of the ENI.
    std::shared_ptr<Models::DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSetAssociatedPublicIp> associatedPublicIp_ = nullptr;
    // Indicates whether the IP address is the primary private IP address. Valid values:
    // 
    // *   true: The IP address is the primary private IP address.
    // *   false: The IP address is a secondary private IP address.
    std::shared_ptr<bool> primary_ = nullptr;
    // The private IP address of the ENI.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
