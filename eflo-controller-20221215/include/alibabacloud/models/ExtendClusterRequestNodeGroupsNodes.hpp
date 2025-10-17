// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUESTNODEGROUPSNODES_HPP_
#define ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUESTNODEGROUPSNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExtendClusterRequestNodeGroupsNodesDataDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ExtendClusterRequestNodeGroupsNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtendClusterRequestNodeGroupsNodes& obj) { 
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ExtendClusterRequestNodeGroupsNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ExtendClusterRequestNodeGroupsNodes() = default ;
    ExtendClusterRequestNodeGroupsNodes(const ExtendClusterRequestNodeGroupsNodes &) = default ;
    ExtendClusterRequestNodeGroupsNodes(ExtendClusterRequestNodeGroupsNodes &&) = default ;
    ExtendClusterRequestNodeGroupsNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtendClusterRequestNodeGroupsNodes() = default ;
    ExtendClusterRequestNodeGroupsNodes& operator=(const ExtendClusterRequestNodeGroupsNodes &) = default ;
    ExtendClusterRequestNodeGroupsNodes& operator=(ExtendClusterRequestNodeGroupsNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDisk_ == nullptr
        && return this->hostname_ == nullptr && return this->loginPassword_ == nullptr && return this->nodeId_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<Models::ExtendClusterRequestNodeGroupsNodesDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<Models::ExtendClusterRequestNodeGroupsNodesDataDisk>) };
    inline vector<Models::ExtendClusterRequestNodeGroupsNodesDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<Models::ExtendClusterRequestNodeGroupsNodesDataDisk>) };
    inline ExtendClusterRequestNodeGroupsNodes& setDataDisk(const vector<Models::ExtendClusterRequestNodeGroupsNodesDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline ExtendClusterRequestNodeGroupsNodes& setDataDisk(vector<Models::ExtendClusterRequestNodeGroupsNodesDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ExtendClusterRequestNodeGroupsNodes& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline ExtendClusterRequestNodeGroupsNodes& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ExtendClusterRequestNodeGroupsNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ExtendClusterRequestNodeGroupsNodes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ExtendClusterRequestNodeGroupsNodes& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Data Disk Specifications
    std::shared_ptr<vector<Models::ExtendClusterRequestNodeGroupsNodesDataDisk>> dataDisk_ = nullptr;
    // Hostname
    std::shared_ptr<string> hostname_ = nullptr;
    // Login Password
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
