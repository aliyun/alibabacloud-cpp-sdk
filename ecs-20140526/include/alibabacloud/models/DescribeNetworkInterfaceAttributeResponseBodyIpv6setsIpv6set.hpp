// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYIPV6SETSIPV6SET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYIPV6SETSIPV6SET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
    };
    DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set(const DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set(DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set& operator=(const DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set& operator=(DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6Address_ != nullptr; };
    // ipv6Address Field Functions 
    bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
    void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
    inline string ipv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBodyIpv6SetsIpv6Set& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


  protected:
    // The IPv6 address of the ENI.
    std::shared_ptr<string> ipv6Address_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
