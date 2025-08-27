// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSIPALLOCATIONPOLICYBONDPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSIPALLOCATIONPOLICYBONDPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequestNetworksIpAllocationPolicyBondPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestNetworksIpAllocationPolicyBondPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(BondDefaultSubnet, bondDefaultSubnet_);
      DARABONBA_PTR_TO_JSON(Bonds, bonds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestNetworksIpAllocationPolicyBondPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(BondDefaultSubnet, bondDefaultSubnet_);
      DARABONBA_PTR_FROM_JSON(Bonds, bonds_);
    };
    CreateClusterRequestNetworksIpAllocationPolicyBondPolicy() = default ;
    CreateClusterRequestNetworksIpAllocationPolicyBondPolicy(const CreateClusterRequestNetworksIpAllocationPolicyBondPolicy &) = default ;
    CreateClusterRequestNetworksIpAllocationPolicyBondPolicy(CreateClusterRequestNetworksIpAllocationPolicyBondPolicy &&) = default ;
    CreateClusterRequestNetworksIpAllocationPolicyBondPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestNetworksIpAllocationPolicyBondPolicy() = default ;
    CreateClusterRequestNetworksIpAllocationPolicyBondPolicy& operator=(const CreateClusterRequestNetworksIpAllocationPolicyBondPolicy &) = default ;
    CreateClusterRequestNetworksIpAllocationPolicyBondPolicy& operator=(CreateClusterRequestNetworksIpAllocationPolicyBondPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bondDefaultSubnet_ != nullptr
        && this->bonds_ != nullptr; };
    // bondDefaultSubnet Field Functions 
    bool hasBondDefaultSubnet() const { return this->bondDefaultSubnet_ != nullptr;};
    void deleteBondDefaultSubnet() { this->bondDefaultSubnet_ = nullptr;};
    inline string bondDefaultSubnet() const { DARABONBA_PTR_GET_DEFAULT(bondDefaultSubnet_, "") };
    inline CreateClusterRequestNetworksIpAllocationPolicyBondPolicy& setBondDefaultSubnet(string bondDefaultSubnet) { DARABONBA_PTR_SET_VALUE(bondDefaultSubnet_, bondDefaultSubnet) };


    // bonds Field Functions 
    bool hasBonds() const { return this->bonds_ != nullptr;};
    void deleteBonds() { this->bonds_ = nullptr;};
    inline const vector<Models::CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds> & bonds() const { DARABONBA_PTR_GET_CONST(bonds_, vector<Models::CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds>) };
    inline vector<Models::CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds> bonds() { DARABONBA_PTR_GET(bonds_, vector<Models::CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds>) };
    inline CreateClusterRequestNetworksIpAllocationPolicyBondPolicy& setBonds(const vector<Models::CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds> & bonds) { DARABONBA_PTR_SET_VALUE(bonds_, bonds) };
    inline CreateClusterRequestNetworksIpAllocationPolicyBondPolicy& setBonds(vector<Models::CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds> && bonds) { DARABONBA_PTR_SET_RVALUE(bonds_, bonds) };


  protected:
    // Default bond subnet for the cluster
    std::shared_ptr<string> bondDefaultSubnet_ = nullptr;
    // Bond information
    std::shared_ptr<vector<Models::CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds>> bonds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
