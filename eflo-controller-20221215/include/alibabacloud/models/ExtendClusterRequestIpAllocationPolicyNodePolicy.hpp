// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUESTIPALLOCATIONPOLICYNODEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUESTIPALLOCATIONPOLICYNODEPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExtendClusterRequestIpAllocationPolicyNodePolicyBonds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ExtendClusterRequestIpAllocationPolicyNodePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtendClusterRequestIpAllocationPolicyNodePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Bonds, bonds_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ExtendClusterRequestIpAllocationPolicyNodePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Bonds, bonds_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    ExtendClusterRequestIpAllocationPolicyNodePolicy() = default ;
    ExtendClusterRequestIpAllocationPolicyNodePolicy(const ExtendClusterRequestIpAllocationPolicyNodePolicy &) = default ;
    ExtendClusterRequestIpAllocationPolicyNodePolicy(ExtendClusterRequestIpAllocationPolicyNodePolicy &&) = default ;
    ExtendClusterRequestIpAllocationPolicyNodePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtendClusterRequestIpAllocationPolicyNodePolicy() = default ;
    ExtendClusterRequestIpAllocationPolicyNodePolicy& operator=(const ExtendClusterRequestIpAllocationPolicyNodePolicy &) = default ;
    ExtendClusterRequestIpAllocationPolicyNodePolicy& operator=(ExtendClusterRequestIpAllocationPolicyNodePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bonds_ == nullptr
        && return this->hostname_ == nullptr && return this->nodeId_ == nullptr; };
    // bonds Field Functions 
    bool hasBonds() const { return this->bonds_ != nullptr;};
    void deleteBonds() { this->bonds_ = nullptr;};
    inline const vector<Models::ExtendClusterRequestIpAllocationPolicyNodePolicyBonds> & bonds() const { DARABONBA_PTR_GET_CONST(bonds_, vector<Models::ExtendClusterRequestIpAllocationPolicyNodePolicyBonds>) };
    inline vector<Models::ExtendClusterRequestIpAllocationPolicyNodePolicyBonds> bonds() { DARABONBA_PTR_GET(bonds_, vector<Models::ExtendClusterRequestIpAllocationPolicyNodePolicyBonds>) };
    inline ExtendClusterRequestIpAllocationPolicyNodePolicy& setBonds(const vector<Models::ExtendClusterRequestIpAllocationPolicyNodePolicyBonds> & bonds) { DARABONBA_PTR_SET_VALUE(bonds_, bonds) };
    inline ExtendClusterRequestIpAllocationPolicyNodePolicy& setBonds(vector<Models::ExtendClusterRequestIpAllocationPolicyNodePolicyBonds> && bonds) { DARABONBA_PTR_SET_RVALUE(bonds_, bonds) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ExtendClusterRequestIpAllocationPolicyNodePolicy& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ExtendClusterRequestIpAllocationPolicyNodePolicy& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // Bond information
    std::shared_ptr<vector<Models::ExtendClusterRequestIpAllocationPolicyNodePolicyBonds>> bonds_ = nullptr;
    // Hostname
    std::shared_ptr<string> hostname_ = nullptr;
    // Node ID
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
