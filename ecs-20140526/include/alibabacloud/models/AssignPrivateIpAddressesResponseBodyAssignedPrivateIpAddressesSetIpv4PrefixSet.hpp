// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESRESPONSEBODYASSIGNEDPRIVATEIPADDRESSESSETIPV4PREFIXSET_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESRESPONSEBODYASSIGNEDPRIVATEIPADDRESSESSETIPV4PREFIXSET_HPP_
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
  class AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4Prefixes, ipv4Prefixes_);
    };
    friend void from_json(const Darabonba::Json& j, AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4Prefixes, ipv4Prefixes_);
    };
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet() = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet(const AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet &) = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet(AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet &&) = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet() = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet& operator=(const AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet &) = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet& operator=(AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv4Prefixes_ == nullptr; };
    // ipv4Prefixes Field Functions 
    bool hasIpv4Prefixes() const { return this->ipv4Prefixes_ != nullptr;};
    void deleteIpv4Prefixes() { this->ipv4Prefixes_ = nullptr;};
    inline const vector<string> & ipv4Prefixes() const { DARABONBA_PTR_GET_CONST(ipv4Prefixes_, vector<string>) };
    inline vector<string> ipv4Prefixes() { DARABONBA_PTR_GET(ipv4Prefixes_, vector<string>) };
    inline AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet& setIpv4Prefixes(const vector<string> & ipv4Prefixes) { DARABONBA_PTR_SET_VALUE(ipv4Prefixes_, ipv4Prefixes) };
    inline AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetIpv4PrefixSet& setIpv4Prefixes(vector<string> && ipv4Prefixes) { DARABONBA_PTR_SET_RVALUE(ipv4Prefixes_, ipv4Prefixes) };


  protected:
    std::shared_ptr<vector<string>> ipv4Prefixes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
