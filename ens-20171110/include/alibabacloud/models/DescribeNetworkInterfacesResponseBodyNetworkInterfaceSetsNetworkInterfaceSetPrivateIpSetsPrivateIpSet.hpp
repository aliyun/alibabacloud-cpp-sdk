// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODYNETWORKINTERFACESETSNETWORKINTERFACESETPRIVATEIPSETSPRIVATEIPSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODYNETWORKINTERFACESETSNETWORKINTERFACESETPRIVATEIPSETSPRIVATEIPSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet& obj) { 
      DARABONBA_PTR_TO_JSON(Primary, primary_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet& obj) { 
      DARABONBA_PTR_FROM_JSON(Primary, primary_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
    };
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet() = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet(const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet &) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet(DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet &&) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet() = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet& operator=(const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet &) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet& operator=(DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->primary_ != nullptr
        && this->privateIpAddress_ != nullptr; };
    // primary Field Functions 
    bool hasPrimary() const { return this->primary_ != nullptr;};
    void deletePrimary() { this->primary_ = nullptr;};
    inline bool primary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


  protected:
    // Specifies whether the private IP address is the primary private IP address. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> primary_ = nullptr;
    // The private IP address.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
