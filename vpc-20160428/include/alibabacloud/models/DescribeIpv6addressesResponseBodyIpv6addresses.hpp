// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6ADDRESSESRESPONSEBODYIPV6ADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6ADDRESSESRESPONSEBODYIPV6ADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIpv6AddressesResponseBodyIpv6Addresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6AddressesResponseBodyIpv6Addresses& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6AddressesResponseBodyIpv6Addresses& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
    };
    DescribeIpv6AddressesResponseBodyIpv6Addresses() = default ;
    DescribeIpv6AddressesResponseBodyIpv6Addresses(const DescribeIpv6AddressesResponseBodyIpv6Addresses &) = default ;
    DescribeIpv6AddressesResponseBodyIpv6Addresses(DescribeIpv6AddressesResponseBodyIpv6Addresses &&) = default ;
    DescribeIpv6AddressesResponseBodyIpv6Addresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6AddressesResponseBodyIpv6Addresses() = default ;
    DescribeIpv6AddressesResponseBodyIpv6Addresses& operator=(const DescribeIpv6AddressesResponseBodyIpv6Addresses &) = default ;
    DescribeIpv6AddressesResponseBodyIpv6Addresses& operator=(DescribeIpv6AddressesResponseBodyIpv6Addresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6Address_ != nullptr; };
    // ipv6Address Field Functions 
    bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
    void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
    inline const vector<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address> & ipv6Address() const { DARABONBA_PTR_GET_CONST(ipv6Address_, vector<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address>) };
    inline vector<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address> ipv6Address() { DARABONBA_PTR_GET(ipv6Address_, vector<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address>) };
    inline DescribeIpv6AddressesResponseBodyIpv6Addresses& setIpv6Address(const vector<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address> & ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };
    inline DescribeIpv6AddressesResponseBodyIpv6Addresses& setIpv6Address(vector<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address> && ipv6Address) { DARABONBA_PTR_SET_RVALUE(ipv6Address_, ipv6Address) };


  protected:
    std::shared_ptr<vector<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address>> ipv6Address_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
