// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSIPALLOCATIONPOLICYNODEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSIPALLOCATIONPOLICYNODEPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequestNetworksIpAllocationPolicyNodePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestNetworksIpAllocationPolicyNodePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Bonds, bonds_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestNetworksIpAllocationPolicyNodePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Bonds, bonds_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    CreateClusterRequestNetworksIpAllocationPolicyNodePolicy() = default ;
    CreateClusterRequestNetworksIpAllocationPolicyNodePolicy(const CreateClusterRequestNetworksIpAllocationPolicyNodePolicy &) = default ;
    CreateClusterRequestNetworksIpAllocationPolicyNodePolicy(CreateClusterRequestNetworksIpAllocationPolicyNodePolicy &&) = default ;
    CreateClusterRequestNetworksIpAllocationPolicyNodePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestNetworksIpAllocationPolicyNodePolicy() = default ;
    CreateClusterRequestNetworksIpAllocationPolicyNodePolicy& operator=(const CreateClusterRequestNetworksIpAllocationPolicyNodePolicy &) = default ;
    CreateClusterRequestNetworksIpAllocationPolicyNodePolicy& operator=(CreateClusterRequestNetworksIpAllocationPolicyNodePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bonds_ != nullptr
        && this->nodeId_ != nullptr; };
    // bonds Field Functions 
    bool hasBonds() const { return this->bonds_ != nullptr;};
    void deleteBonds() { this->bonds_ = nullptr;};
    inline const vector<Models::CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds> & bonds() const { DARABONBA_PTR_GET_CONST(bonds_, vector<Models::CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds>) };
    inline vector<Models::CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds> bonds() { DARABONBA_PTR_GET(bonds_, vector<Models::CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds>) };
    inline CreateClusterRequestNetworksIpAllocationPolicyNodePolicy& setBonds(const vector<Models::CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds> & bonds) { DARABONBA_PTR_SET_VALUE(bonds_, bonds) };
    inline CreateClusterRequestNetworksIpAllocationPolicyNodePolicy& setBonds(vector<Models::CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds> && bonds) { DARABONBA_PTR_SET_RVALUE(bonds_, bonds) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateClusterRequestNetworksIpAllocationPolicyNodePolicy& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // Bond information
    std::shared_ptr<vector<Models::CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds>> bonds_ = nullptr;
    // Node ID
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
