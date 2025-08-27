// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSIPALLOCATIONPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSIPALLOCATIONPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateClusterRequestNetworksIpAllocationPolicyBondPolicy.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy.hpp>
#include <alibabacloud/models/CreateClusterRequestNetworksIpAllocationPolicyNodePolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequestNetworksIpAllocationPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestNetworksIpAllocationPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(BondPolicy, bondPolicy_);
      DARABONBA_PTR_TO_JSON(MachineTypePolicy, machineTypePolicy_);
      DARABONBA_PTR_TO_JSON(NodePolicy, nodePolicy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestNetworksIpAllocationPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(BondPolicy, bondPolicy_);
      DARABONBA_PTR_FROM_JSON(MachineTypePolicy, machineTypePolicy_);
      DARABONBA_PTR_FROM_JSON(NodePolicy, nodePolicy_);
    };
    CreateClusterRequestNetworksIpAllocationPolicy() = default ;
    CreateClusterRequestNetworksIpAllocationPolicy(const CreateClusterRequestNetworksIpAllocationPolicy &) = default ;
    CreateClusterRequestNetworksIpAllocationPolicy(CreateClusterRequestNetworksIpAllocationPolicy &&) = default ;
    CreateClusterRequestNetworksIpAllocationPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestNetworksIpAllocationPolicy() = default ;
    CreateClusterRequestNetworksIpAllocationPolicy& operator=(const CreateClusterRequestNetworksIpAllocationPolicy &) = default ;
    CreateClusterRequestNetworksIpAllocationPolicy& operator=(CreateClusterRequestNetworksIpAllocationPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bondPolicy_ != nullptr
        && this->machineTypePolicy_ != nullptr && this->nodePolicy_ != nullptr; };
    // bondPolicy Field Functions 
    bool hasBondPolicy() const { return this->bondPolicy_ != nullptr;};
    void deleteBondPolicy() { this->bondPolicy_ = nullptr;};
    inline const Models::CreateClusterRequestNetworksIpAllocationPolicyBondPolicy & bondPolicy() const { DARABONBA_PTR_GET_CONST(bondPolicy_, Models::CreateClusterRequestNetworksIpAllocationPolicyBondPolicy) };
    inline Models::CreateClusterRequestNetworksIpAllocationPolicyBondPolicy bondPolicy() { DARABONBA_PTR_GET(bondPolicy_, Models::CreateClusterRequestNetworksIpAllocationPolicyBondPolicy) };
    inline CreateClusterRequestNetworksIpAllocationPolicy& setBondPolicy(const Models::CreateClusterRequestNetworksIpAllocationPolicyBondPolicy & bondPolicy) { DARABONBA_PTR_SET_VALUE(bondPolicy_, bondPolicy) };
    inline CreateClusterRequestNetworksIpAllocationPolicy& setBondPolicy(Models::CreateClusterRequestNetworksIpAllocationPolicyBondPolicy && bondPolicy) { DARABONBA_PTR_SET_RVALUE(bondPolicy_, bondPolicy) };


    // machineTypePolicy Field Functions 
    bool hasMachineTypePolicy() const { return this->machineTypePolicy_ != nullptr;};
    void deleteMachineTypePolicy() { this->machineTypePolicy_ = nullptr;};
    inline const vector<Models::CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy> & machineTypePolicy() const { DARABONBA_PTR_GET_CONST(machineTypePolicy_, vector<Models::CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy>) };
    inline vector<Models::CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy> machineTypePolicy() { DARABONBA_PTR_GET(machineTypePolicy_, vector<Models::CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy>) };
    inline CreateClusterRequestNetworksIpAllocationPolicy& setMachineTypePolicy(const vector<Models::CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy> & machineTypePolicy) { DARABONBA_PTR_SET_VALUE(machineTypePolicy_, machineTypePolicy) };
    inline CreateClusterRequestNetworksIpAllocationPolicy& setMachineTypePolicy(vector<Models::CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy> && machineTypePolicy) { DARABONBA_PTR_SET_RVALUE(machineTypePolicy_, machineTypePolicy) };


    // nodePolicy Field Functions 
    bool hasNodePolicy() const { return this->nodePolicy_ != nullptr;};
    void deleteNodePolicy() { this->nodePolicy_ = nullptr;};
    inline const vector<Models::CreateClusterRequestNetworksIpAllocationPolicyNodePolicy> & nodePolicy() const { DARABONBA_PTR_GET_CONST(nodePolicy_, vector<Models::CreateClusterRequestNetworksIpAllocationPolicyNodePolicy>) };
    inline vector<Models::CreateClusterRequestNetworksIpAllocationPolicyNodePolicy> nodePolicy() { DARABONBA_PTR_GET(nodePolicy_, vector<Models::CreateClusterRequestNetworksIpAllocationPolicyNodePolicy>) };
    inline CreateClusterRequestNetworksIpAllocationPolicy& setNodePolicy(const vector<Models::CreateClusterRequestNetworksIpAllocationPolicyNodePolicy> & nodePolicy) { DARABONBA_PTR_SET_VALUE(nodePolicy_, nodePolicy) };
    inline CreateClusterRequestNetworksIpAllocationPolicy& setNodePolicy(vector<Models::CreateClusterRequestNetworksIpAllocationPolicyNodePolicy> && nodePolicy) { DARABONBA_PTR_SET_RVALUE(nodePolicy_, nodePolicy) };


  protected:
    // Bond policy
    std::shared_ptr<Models::CreateClusterRequestNetworksIpAllocationPolicyBondPolicy> bondPolicy_ = nullptr;
    // Machine type allocation policy
    std::shared_ptr<vector<Models::CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy>> machineTypePolicy_ = nullptr;
    // Node allocation policy
    std::shared_ptr<vector<Models::CreateClusterRequestNetworksIpAllocationPolicyNodePolicy>> nodePolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
