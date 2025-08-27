// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSIPALLOCATIONPOLICYMACHINETYPEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSIPALLOCATIONPOLICYMACHINETYPEPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Bonds, bonds_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Bonds, bonds_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
    };
    CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy() = default ;
    CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy(const CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy &) = default ;
    CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy(CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy &&) = default ;
    CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy() = default ;
    CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy& operator=(const CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy &) = default ;
    CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy& operator=(CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bonds_ != nullptr
        && this->machineType_ != nullptr; };
    // bonds Field Functions 
    bool hasBonds() const { return this->bonds_ != nullptr;};
    void deleteBonds() { this->bonds_ = nullptr;};
    inline const vector<Models::CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds> & bonds() const { DARABONBA_PTR_GET_CONST(bonds_, vector<Models::CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds>) };
    inline vector<Models::CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds> bonds() { DARABONBA_PTR_GET(bonds_, vector<Models::CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds>) };
    inline CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy& setBonds(const vector<Models::CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds> & bonds) { DARABONBA_PTR_SET_VALUE(bonds_, bonds) };
    inline CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy& setBonds(vector<Models::CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds> && bonds) { DARABONBA_PTR_SET_RVALUE(bonds_, bonds) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string machineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


  protected:
    // Bond information
    std::shared_ptr<vector<Models::CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds>> bonds_ = nullptr;
    // Machine type
    std::shared_ptr<string> machineType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
