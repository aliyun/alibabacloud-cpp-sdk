// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYIPV6PREFIXSETSIPV6PREFIXSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYIPV6PREFIXSETSIPV6PREFIXSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Prefix, ipv6Prefix_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Prefix, ipv6Prefix_);
    };
    DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet(const DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet(DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet& operator=(const DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet& operator=(DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv6Prefix_ == nullptr; };
    // ipv6Prefix Field Functions 
    bool hasIpv6Prefix() const { return this->ipv6Prefix_ != nullptr;};
    void deleteIpv6Prefix() { this->ipv6Prefix_ = nullptr;};
    inline string ipv6Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv6Prefix_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSetsIpv6PrefixSet& setIpv6Prefix(string ipv6Prefix) { DARABONBA_PTR_SET_VALUE(ipv6Prefix_, ipv6Prefix) };


  protected:
    // The IPv6 prefix of the ENI.
    std::shared_ptr<string> ipv6Prefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
