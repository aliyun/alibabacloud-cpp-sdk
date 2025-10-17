// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNIPV6ADDRESSESRESPONSEBODYIPV6SETS_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNIPV6ADDRESSESRESPONSEBODYIPV6SETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AssignIpv6AddressesResponseBodyIpv6Sets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignIpv6AddressesResponseBodyIpv6Sets& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
    };
    friend void from_json(const Darabonba::Json& j, AssignIpv6AddressesResponseBodyIpv6Sets& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
    };
    AssignIpv6AddressesResponseBodyIpv6Sets() = default ;
    AssignIpv6AddressesResponseBodyIpv6Sets(const AssignIpv6AddressesResponseBodyIpv6Sets &) = default ;
    AssignIpv6AddressesResponseBodyIpv6Sets(AssignIpv6AddressesResponseBodyIpv6Sets &&) = default ;
    AssignIpv6AddressesResponseBodyIpv6Sets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignIpv6AddressesResponseBodyIpv6Sets() = default ;
    AssignIpv6AddressesResponseBodyIpv6Sets& operator=(const AssignIpv6AddressesResponseBodyIpv6Sets &) = default ;
    AssignIpv6AddressesResponseBodyIpv6Sets& operator=(AssignIpv6AddressesResponseBodyIpv6Sets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv6Address_ == nullptr; };
    // ipv6Address Field Functions 
    bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
    void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
    inline const vector<string> & ipv6Address() const { DARABONBA_PTR_GET_CONST(ipv6Address_, vector<string>) };
    inline vector<string> ipv6Address() { DARABONBA_PTR_GET(ipv6Address_, vector<string>) };
    inline AssignIpv6AddressesResponseBodyIpv6Sets& setIpv6Address(const vector<string> & ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };
    inline AssignIpv6AddressesResponseBodyIpv6Sets& setIpv6Address(vector<string> && ipv6Address) { DARABONBA_PTR_SET_RVALUE(ipv6Address_, ipv6Address) };


  protected:
    std::shared_ptr<vector<string>> ipv6Address_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
