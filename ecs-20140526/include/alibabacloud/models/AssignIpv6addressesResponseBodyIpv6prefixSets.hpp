// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNIPV6ADDRESSESRESPONSEBODYIPV6PREFIXSETS_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNIPV6ADDRESSESRESPONSEBODYIPV6PREFIXSETS_HPP_
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
  class AssignIpv6AddressesResponseBodyIpv6PrefixSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignIpv6AddressesResponseBodyIpv6PrefixSets& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Prefix, ipv6Prefix_);
    };
    friend void from_json(const Darabonba::Json& j, AssignIpv6AddressesResponseBodyIpv6PrefixSets& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Prefix, ipv6Prefix_);
    };
    AssignIpv6AddressesResponseBodyIpv6PrefixSets() = default ;
    AssignIpv6AddressesResponseBodyIpv6PrefixSets(const AssignIpv6AddressesResponseBodyIpv6PrefixSets &) = default ;
    AssignIpv6AddressesResponseBodyIpv6PrefixSets(AssignIpv6AddressesResponseBodyIpv6PrefixSets &&) = default ;
    AssignIpv6AddressesResponseBodyIpv6PrefixSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignIpv6AddressesResponseBodyIpv6PrefixSets() = default ;
    AssignIpv6AddressesResponseBodyIpv6PrefixSets& operator=(const AssignIpv6AddressesResponseBodyIpv6PrefixSets &) = default ;
    AssignIpv6AddressesResponseBodyIpv6PrefixSets& operator=(AssignIpv6AddressesResponseBodyIpv6PrefixSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6Prefix_ != nullptr; };
    // ipv6Prefix Field Functions 
    bool hasIpv6Prefix() const { return this->ipv6Prefix_ != nullptr;};
    void deleteIpv6Prefix() { this->ipv6Prefix_ = nullptr;};
    inline const vector<string> & ipv6Prefix() const { DARABONBA_PTR_GET_CONST(ipv6Prefix_, vector<string>) };
    inline vector<string> ipv6Prefix() { DARABONBA_PTR_GET(ipv6Prefix_, vector<string>) };
    inline AssignIpv6AddressesResponseBodyIpv6PrefixSets& setIpv6Prefix(const vector<string> & ipv6Prefix) { DARABONBA_PTR_SET_VALUE(ipv6Prefix_, ipv6Prefix) };
    inline AssignIpv6AddressesResponseBodyIpv6PrefixSets& setIpv6Prefix(vector<string> && ipv6Prefix) { DARABONBA_PTR_SET_RVALUE(ipv6Prefix_, ipv6Prefix) };


  protected:
    std::shared_ptr<vector<string>> ipv6Prefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
