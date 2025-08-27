// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSIPALLOCATIONPOLICYBONDPOLICYBONDS_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSIPALLOCATIONPOLICYBONDPOLICYBONDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Subnet, subnet_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Subnet, subnet_);
    };
    CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds() = default ;
    CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds(const CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds &) = default ;
    CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds(CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds &&) = default ;
    CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds() = default ;
    CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds& operator=(const CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds &) = default ;
    CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds& operator=(CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->subnet_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subnet Field Functions 
    bool hasSubnet() const { return this->subnet_ != nullptr;};
    void deleteSubnet() { this->subnet_ = nullptr;};
    inline string subnet() const { DARABONBA_PTR_GET_DEFAULT(subnet_, "") };
    inline CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds& setSubnet(string subnet) { DARABONBA_PTR_SET_VALUE(subnet_, subnet) };


  protected:
    // Bond name
    std::shared_ptr<string> name_ = nullptr;
    // IP source subnet for the cluster
    std::shared_ptr<string> subnet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
