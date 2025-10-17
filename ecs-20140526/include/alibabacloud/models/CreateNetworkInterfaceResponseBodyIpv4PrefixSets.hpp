// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODYIPV4PREFIXSETS_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODYIPV4PREFIXSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetworkInterfaceResponseBodyIpv4PrefixSetsIpv4PrefixSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNetworkInterfaceResponseBodyIpv4PrefixSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfaceResponseBodyIpv4PrefixSets& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4PrefixSet, ipv4PrefixSet_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfaceResponseBodyIpv4PrefixSets& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4PrefixSet, ipv4PrefixSet_);
    };
    CreateNetworkInterfaceResponseBodyIpv4PrefixSets() = default ;
    CreateNetworkInterfaceResponseBodyIpv4PrefixSets(const CreateNetworkInterfaceResponseBodyIpv4PrefixSets &) = default ;
    CreateNetworkInterfaceResponseBodyIpv4PrefixSets(CreateNetworkInterfaceResponseBodyIpv4PrefixSets &&) = default ;
    CreateNetworkInterfaceResponseBodyIpv4PrefixSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfaceResponseBodyIpv4PrefixSets() = default ;
    CreateNetworkInterfaceResponseBodyIpv4PrefixSets& operator=(const CreateNetworkInterfaceResponseBodyIpv4PrefixSets &) = default ;
    CreateNetworkInterfaceResponseBodyIpv4PrefixSets& operator=(CreateNetworkInterfaceResponseBodyIpv4PrefixSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv4PrefixSet_ == nullptr; };
    // ipv4PrefixSet Field Functions 
    bool hasIpv4PrefixSet() const { return this->ipv4PrefixSet_ != nullptr;};
    void deleteIpv4PrefixSet() { this->ipv4PrefixSet_ = nullptr;};
    inline const vector<Models::CreateNetworkInterfaceResponseBodyIpv4PrefixSetsIpv4PrefixSet> & ipv4PrefixSet() const { DARABONBA_PTR_GET_CONST(ipv4PrefixSet_, vector<Models::CreateNetworkInterfaceResponseBodyIpv4PrefixSetsIpv4PrefixSet>) };
    inline vector<Models::CreateNetworkInterfaceResponseBodyIpv4PrefixSetsIpv4PrefixSet> ipv4PrefixSet() { DARABONBA_PTR_GET(ipv4PrefixSet_, vector<Models::CreateNetworkInterfaceResponseBodyIpv4PrefixSetsIpv4PrefixSet>) };
    inline CreateNetworkInterfaceResponseBodyIpv4PrefixSets& setIpv4PrefixSet(const vector<Models::CreateNetworkInterfaceResponseBodyIpv4PrefixSetsIpv4PrefixSet> & ipv4PrefixSet) { DARABONBA_PTR_SET_VALUE(ipv4PrefixSet_, ipv4PrefixSet) };
    inline CreateNetworkInterfaceResponseBodyIpv4PrefixSets& setIpv4PrefixSet(vector<Models::CreateNetworkInterfaceResponseBodyIpv4PrefixSetsIpv4PrefixSet> && ipv4PrefixSet) { DARABONBA_PTR_SET_RVALUE(ipv4PrefixSet_, ipv4PrefixSet) };


  protected:
    std::shared_ptr<vector<Models::CreateNetworkInterfaceResponseBodyIpv4PrefixSetsIpv4PrefixSet>> ipv4PrefixSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
