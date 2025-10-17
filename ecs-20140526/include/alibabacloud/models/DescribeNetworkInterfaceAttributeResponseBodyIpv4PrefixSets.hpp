// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYIPV4PREFIXSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYIPV4PREFIXSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4PrefixSet, ipv4PrefixSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4PrefixSet, ipv4PrefixSet_);
    };
    DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets(const DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets(DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets& operator=(const DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets& operator=(DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv4PrefixSet_ == nullptr; };
    // ipv4PrefixSet Field Functions 
    bool hasIpv4PrefixSet() const { return this->ipv4PrefixSet_ != nullptr;};
    void deleteIpv4PrefixSet() { this->ipv4PrefixSet_ = nullptr;};
    inline const vector<Models::DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet> & ipv4PrefixSet() const { DARABONBA_PTR_GET_CONST(ipv4PrefixSet_, vector<Models::DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet>) };
    inline vector<Models::DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet> ipv4PrefixSet() { DARABONBA_PTR_GET(ipv4PrefixSet_, vector<Models::DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet>) };
    inline DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets& setIpv4PrefixSet(const vector<Models::DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet> & ipv4PrefixSet) { DARABONBA_PTR_SET_VALUE(ipv4PrefixSet_, ipv4PrefixSet) };
    inline DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets& setIpv4PrefixSet(vector<Models::DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet> && ipv4PrefixSet) { DARABONBA_PTR_SET_RVALUE(ipv4PrefixSet_, ipv4PrefixSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSetsIpv4PrefixSet>> ipv4PrefixSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
