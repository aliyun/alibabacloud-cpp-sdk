// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODYNETWORKINTERFACESETSNETWORKINTERFACESETIPV6SETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODYNETWORKINTERFACESETSNETWORKINTERFACESETIPV6SETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6SetsIpv6Set.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Set, ipv6Set_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Set, ipv6Set_);
    };
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets() = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets(const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets &) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets(DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets &&) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets() = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets& operator=(const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets &) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets& operator=(DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6Set_ != nullptr; };
    // ipv6Set Field Functions 
    bool hasIpv6Set() const { return this->ipv6Set_ != nullptr;};
    void deleteIpv6Set() { this->ipv6Set_ = nullptr;};
    inline const vector<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6SetsIpv6Set> & ipv6Set() const { DARABONBA_PTR_GET_CONST(ipv6Set_, vector<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6SetsIpv6Set>) };
    inline vector<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6SetsIpv6Set> ipv6Set() { DARABONBA_PTR_GET(ipv6Set_, vector<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6SetsIpv6Set>) };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets& setIpv6Set(const vector<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6SetsIpv6Set> & ipv6Set) { DARABONBA_PTR_SET_VALUE(ipv6Set_, ipv6Set) };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets& setIpv6Set(vector<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6SetsIpv6Set> && ipv6Set) { DARABONBA_PTR_SET_RVALUE(ipv6Set_, ipv6Set) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6SetsIpv6Set>> ipv6Set_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
