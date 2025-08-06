// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODYIPV6PREFIXSETS_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODYIPV6PREFIXSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetworkInterfaceResponseBodyIpv6PrefixSetsIpv6PrefixSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNetworkInterfaceResponseBodyIpv6PrefixSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfaceResponseBodyIpv6PrefixSets& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6PrefixSet, ipv6PrefixSet_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfaceResponseBodyIpv6PrefixSets& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6PrefixSet, ipv6PrefixSet_);
    };
    CreateNetworkInterfaceResponseBodyIpv6PrefixSets() = default ;
    CreateNetworkInterfaceResponseBodyIpv6PrefixSets(const CreateNetworkInterfaceResponseBodyIpv6PrefixSets &) = default ;
    CreateNetworkInterfaceResponseBodyIpv6PrefixSets(CreateNetworkInterfaceResponseBodyIpv6PrefixSets &&) = default ;
    CreateNetworkInterfaceResponseBodyIpv6PrefixSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfaceResponseBodyIpv6PrefixSets() = default ;
    CreateNetworkInterfaceResponseBodyIpv6PrefixSets& operator=(const CreateNetworkInterfaceResponseBodyIpv6PrefixSets &) = default ;
    CreateNetworkInterfaceResponseBodyIpv6PrefixSets& operator=(CreateNetworkInterfaceResponseBodyIpv6PrefixSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6PrefixSet_ != nullptr; };
    // ipv6PrefixSet Field Functions 
    bool hasIpv6PrefixSet() const { return this->ipv6PrefixSet_ != nullptr;};
    void deleteIpv6PrefixSet() { this->ipv6PrefixSet_ = nullptr;};
    inline const vector<Models::CreateNetworkInterfaceResponseBodyIpv6PrefixSetsIpv6PrefixSet> & ipv6PrefixSet() const { DARABONBA_PTR_GET_CONST(ipv6PrefixSet_, vector<Models::CreateNetworkInterfaceResponseBodyIpv6PrefixSetsIpv6PrefixSet>) };
    inline vector<Models::CreateNetworkInterfaceResponseBodyIpv6PrefixSetsIpv6PrefixSet> ipv6PrefixSet() { DARABONBA_PTR_GET(ipv6PrefixSet_, vector<Models::CreateNetworkInterfaceResponseBodyIpv6PrefixSetsIpv6PrefixSet>) };
    inline CreateNetworkInterfaceResponseBodyIpv6PrefixSets& setIpv6PrefixSet(const vector<Models::CreateNetworkInterfaceResponseBodyIpv6PrefixSetsIpv6PrefixSet> & ipv6PrefixSet) { DARABONBA_PTR_SET_VALUE(ipv6PrefixSet_, ipv6PrefixSet) };
    inline CreateNetworkInterfaceResponseBodyIpv6PrefixSets& setIpv6PrefixSet(vector<Models::CreateNetworkInterfaceResponseBodyIpv6PrefixSetsIpv6PrefixSet> && ipv6PrefixSet) { DARABONBA_PTR_SET_RVALUE(ipv6PrefixSet_, ipv6PrefixSet) };


  protected:
    std::shared_ptr<vector<Models::CreateNetworkInterfaceResponseBodyIpv6PrefixSetsIpv6PrefixSet>> ipv6PrefixSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
