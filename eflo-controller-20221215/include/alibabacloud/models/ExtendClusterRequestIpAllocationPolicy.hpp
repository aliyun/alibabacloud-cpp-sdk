// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUESTIPALLOCATIONPOLICY_HPP_
#define ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUESTIPALLOCATIONPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExtendClusterRequestIpAllocationPolicyBondPolicy.hpp>
#include <vector>
#include <alibabacloud/models/ExtendClusterRequestIpAllocationPolicyMachineTypePolicy.hpp>
#include <alibabacloud/models/ExtendClusterRequestIpAllocationPolicyNodePolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ExtendClusterRequestIpAllocationPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtendClusterRequestIpAllocationPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(BondPolicy, bondPolicy_);
      DARABONBA_PTR_TO_JSON(MachineTypePolicy, machineTypePolicy_);
      DARABONBA_PTR_TO_JSON(NodePolicy, nodePolicy_);
    };
    friend void from_json(const Darabonba::Json& j, ExtendClusterRequestIpAllocationPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(BondPolicy, bondPolicy_);
      DARABONBA_PTR_FROM_JSON(MachineTypePolicy, machineTypePolicy_);
      DARABONBA_PTR_FROM_JSON(NodePolicy, nodePolicy_);
    };
    ExtendClusterRequestIpAllocationPolicy() = default ;
    ExtendClusterRequestIpAllocationPolicy(const ExtendClusterRequestIpAllocationPolicy &) = default ;
    ExtendClusterRequestIpAllocationPolicy(ExtendClusterRequestIpAllocationPolicy &&) = default ;
    ExtendClusterRequestIpAllocationPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtendClusterRequestIpAllocationPolicy() = default ;
    ExtendClusterRequestIpAllocationPolicy& operator=(const ExtendClusterRequestIpAllocationPolicy &) = default ;
    ExtendClusterRequestIpAllocationPolicy& operator=(ExtendClusterRequestIpAllocationPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bondPolicy_ != nullptr
        && this->machineTypePolicy_ != nullptr && this->nodePolicy_ != nullptr; };
    // bondPolicy Field Functions 
    bool hasBondPolicy() const { return this->bondPolicy_ != nullptr;};
    void deleteBondPolicy() { this->bondPolicy_ = nullptr;};
    inline const Models::ExtendClusterRequestIpAllocationPolicyBondPolicy & bondPolicy() const { DARABONBA_PTR_GET_CONST(bondPolicy_, Models::ExtendClusterRequestIpAllocationPolicyBondPolicy) };
    inline Models::ExtendClusterRequestIpAllocationPolicyBondPolicy bondPolicy() { DARABONBA_PTR_GET(bondPolicy_, Models::ExtendClusterRequestIpAllocationPolicyBondPolicy) };
    inline ExtendClusterRequestIpAllocationPolicy& setBondPolicy(const Models::ExtendClusterRequestIpAllocationPolicyBondPolicy & bondPolicy) { DARABONBA_PTR_SET_VALUE(bondPolicy_, bondPolicy) };
    inline ExtendClusterRequestIpAllocationPolicy& setBondPolicy(Models::ExtendClusterRequestIpAllocationPolicyBondPolicy && bondPolicy) { DARABONBA_PTR_SET_RVALUE(bondPolicy_, bondPolicy) };


    // machineTypePolicy Field Functions 
    bool hasMachineTypePolicy() const { return this->machineTypePolicy_ != nullptr;};
    void deleteMachineTypePolicy() { this->machineTypePolicy_ = nullptr;};
    inline const vector<Models::ExtendClusterRequestIpAllocationPolicyMachineTypePolicy> & machineTypePolicy() const { DARABONBA_PTR_GET_CONST(machineTypePolicy_, vector<Models::ExtendClusterRequestIpAllocationPolicyMachineTypePolicy>) };
    inline vector<Models::ExtendClusterRequestIpAllocationPolicyMachineTypePolicy> machineTypePolicy() { DARABONBA_PTR_GET(machineTypePolicy_, vector<Models::ExtendClusterRequestIpAllocationPolicyMachineTypePolicy>) };
    inline ExtendClusterRequestIpAllocationPolicy& setMachineTypePolicy(const vector<Models::ExtendClusterRequestIpAllocationPolicyMachineTypePolicy> & machineTypePolicy) { DARABONBA_PTR_SET_VALUE(machineTypePolicy_, machineTypePolicy) };
    inline ExtendClusterRequestIpAllocationPolicy& setMachineTypePolicy(vector<Models::ExtendClusterRequestIpAllocationPolicyMachineTypePolicy> && machineTypePolicy) { DARABONBA_PTR_SET_RVALUE(machineTypePolicy_, machineTypePolicy) };


    // nodePolicy Field Functions 
    bool hasNodePolicy() const { return this->nodePolicy_ != nullptr;};
    void deleteNodePolicy() { this->nodePolicy_ = nullptr;};
    inline const vector<Models::ExtendClusterRequestIpAllocationPolicyNodePolicy> & nodePolicy() const { DARABONBA_PTR_GET_CONST(nodePolicy_, vector<Models::ExtendClusterRequestIpAllocationPolicyNodePolicy>) };
    inline vector<Models::ExtendClusterRequestIpAllocationPolicyNodePolicy> nodePolicy() { DARABONBA_PTR_GET(nodePolicy_, vector<Models::ExtendClusterRequestIpAllocationPolicyNodePolicy>) };
    inline ExtendClusterRequestIpAllocationPolicy& setNodePolicy(const vector<Models::ExtendClusterRequestIpAllocationPolicyNodePolicy> & nodePolicy) { DARABONBA_PTR_SET_VALUE(nodePolicy_, nodePolicy) };
    inline ExtendClusterRequestIpAllocationPolicy& setNodePolicy(vector<Models::ExtendClusterRequestIpAllocationPolicyNodePolicy> && nodePolicy) { DARABONBA_PTR_SET_RVALUE(nodePolicy_, nodePolicy) };


  protected:
    // Specify the cluster subnet ID based on the bond name
    std::shared_ptr<Models::ExtendClusterRequestIpAllocationPolicyBondPolicy> bondPolicy_ = nullptr;
    // Machine type allocation policy
    std::shared_ptr<vector<Models::ExtendClusterRequestIpAllocationPolicyMachineTypePolicy>> machineTypePolicy_ = nullptr;
    // Node allocation policy
    std::shared_ptr<vector<Models::ExtendClusterRequestIpAllocationPolicyNodePolicy>> nodePolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
