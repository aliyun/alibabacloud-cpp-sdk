// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNODEGROUPSNODES_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNODEGROUPSNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterRequestNodeGroupsNodesDataDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequestNodeGroupsNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestNodeGroupsNodes& obj) { 
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestNodeGroupsNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateClusterRequestNodeGroupsNodes() = default ;
    CreateClusterRequestNodeGroupsNodes(const CreateClusterRequestNodeGroupsNodes &) = default ;
    CreateClusterRequestNodeGroupsNodes(CreateClusterRequestNodeGroupsNodes &&) = default ;
    CreateClusterRequestNodeGroupsNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestNodeGroupsNodes() = default ;
    CreateClusterRequestNodeGroupsNodes& operator=(const CreateClusterRequestNodeGroupsNodes &) = default ;
    CreateClusterRequestNodeGroupsNodes& operator=(CreateClusterRequestNodeGroupsNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDisk_ == nullptr
        && return this->hostname_ == nullptr && return this->loginPassword_ == nullptr && return this->nodeId_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<Models::CreateClusterRequestNodeGroupsNodesDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<Models::CreateClusterRequestNodeGroupsNodesDataDisk>) };
    inline vector<Models::CreateClusterRequestNodeGroupsNodesDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<Models::CreateClusterRequestNodeGroupsNodesDataDisk>) };
    inline CreateClusterRequestNodeGroupsNodes& setDataDisk(const vector<Models::CreateClusterRequestNodeGroupsNodesDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline CreateClusterRequestNodeGroupsNodes& setDataDisk(vector<Models::CreateClusterRequestNodeGroupsNodesDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline CreateClusterRequestNodeGroupsNodes& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline CreateClusterRequestNodeGroupsNodes& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateClusterRequestNodeGroupsNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateClusterRequestNodeGroupsNodes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateClusterRequestNodeGroupsNodes& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Data disk specifications.
    std::shared_ptr<vector<Models::CreateClusterRequestNodeGroupsNodesDataDisk>> dataDisk_ = nullptr;
    // Hostname
    std::shared_ptr<string> hostname_ = nullptr;
    // Login password
    std::shared_ptr<string> loginPassword_ = nullptr;
    // Node ID
    std::shared_ptr<string> nodeId_ = nullptr;
    // VSwitch ID
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // VPC ID
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
