// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYIPV4PREFIXSETSIPV4PREFIXSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYIPV4PREFIXSETSIPV4PREFIXSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4Prefix, ipv4Prefix_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4Prefix, ipv4Prefix_);
    };
    DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet(const DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet(DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet& operator=(const DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet& operator=(DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv4Prefix_ == nullptr; };
    // ipv4Prefix Field Functions 
    bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
    void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
    inline string ipv4Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv4Prefix_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet& setIpv4Prefix(string ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };


  protected:
    // The IPv4 prefix of the ENI.
    std::shared_ptr<string> ipv4Prefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
