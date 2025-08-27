// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUESTIPALLOCATIONPOLICYBONDPOLICY_HPP_
#define ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUESTIPALLOCATIONPOLICYBONDPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExtendClusterRequestIpAllocationPolicyBondPolicyBonds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ExtendClusterRequestIpAllocationPolicyBondPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtendClusterRequestIpAllocationPolicyBondPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(BondDefaultSubnet, bondDefaultSubnet_);
      DARABONBA_PTR_TO_JSON(Bonds, bonds_);
    };
    friend void from_json(const Darabonba::Json& j, ExtendClusterRequestIpAllocationPolicyBondPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(BondDefaultSubnet, bondDefaultSubnet_);
      DARABONBA_PTR_FROM_JSON(Bonds, bonds_);
    };
    ExtendClusterRequestIpAllocationPolicyBondPolicy() = default ;
    ExtendClusterRequestIpAllocationPolicyBondPolicy(const ExtendClusterRequestIpAllocationPolicyBondPolicy &) = default ;
    ExtendClusterRequestIpAllocationPolicyBondPolicy(ExtendClusterRequestIpAllocationPolicyBondPolicy &&) = default ;
    ExtendClusterRequestIpAllocationPolicyBondPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtendClusterRequestIpAllocationPolicyBondPolicy() = default ;
    ExtendClusterRequestIpAllocationPolicyBondPolicy& operator=(const ExtendClusterRequestIpAllocationPolicyBondPolicy &) = default ;
    ExtendClusterRequestIpAllocationPolicyBondPolicy& operator=(ExtendClusterRequestIpAllocationPolicyBondPolicy &&) = default ;
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
    inline ExtendClusterRequestIpAllocationPolicyBondPolicy& setBondDefaultSubnet(string bondDefaultSubnet) { DARABONBA_PTR_SET_VALUE(bondDefaultSubnet_, bondDefaultSubnet) };


    // bonds Field Functions 
    bool hasBonds() const { return this->bonds_ != nullptr;};
    void deleteBonds() { this->bonds_ = nullptr;};
    inline const vector<Models::ExtendClusterRequestIpAllocationPolicyBondPolicyBonds> & bonds() const { DARABONBA_PTR_GET_CONST(bonds_, vector<Models::ExtendClusterRequestIpAllocationPolicyBondPolicyBonds>) };
    inline vector<Models::ExtendClusterRequestIpAllocationPolicyBondPolicyBonds> bonds() { DARABONBA_PTR_GET(bonds_, vector<Models::ExtendClusterRequestIpAllocationPolicyBondPolicyBonds>) };
    inline ExtendClusterRequestIpAllocationPolicyBondPolicy& setBonds(const vector<Models::ExtendClusterRequestIpAllocationPolicyBondPolicyBonds> & bonds) { DARABONBA_PTR_SET_VALUE(bonds_, bonds) };
    inline ExtendClusterRequestIpAllocationPolicyBondPolicy& setBonds(vector<Models::ExtendClusterRequestIpAllocationPolicyBondPolicyBonds> && bonds) { DARABONBA_PTR_SET_RVALUE(bonds_, bonds) };


  protected:
    // Default bond cluster subnet
    std::shared_ptr<string> bondDefaultSubnet_ = nullptr;
    // Bond information
    std::shared_ptr<vector<Models::ExtendClusterRequestIpAllocationPolicyBondPolicyBonds>> bonds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
