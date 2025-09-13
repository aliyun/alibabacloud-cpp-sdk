// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNODEGROUPSHYPERNODES_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNODEGROUPSHYPERNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterRequestNodeGroupsHyperNodesDataDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequestNodeGroupsHyperNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestNodeGroupsHyperNodes& obj) { 
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(HyperNodeId, hyperNodeId_);
      DARABONBA_PTR_TO_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestNodeGroupsHyperNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(HyperNodeId, hyperNodeId_);
      DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateClusterRequestNodeGroupsHyperNodes() = default ;
    CreateClusterRequestNodeGroupsHyperNodes(const CreateClusterRequestNodeGroupsHyperNodes &) = default ;
    CreateClusterRequestNodeGroupsHyperNodes(CreateClusterRequestNodeGroupsHyperNodes &&) = default ;
    CreateClusterRequestNodeGroupsHyperNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestNodeGroupsHyperNodes() = default ;
    CreateClusterRequestNodeGroupsHyperNodes& operator=(const CreateClusterRequestNodeGroupsHyperNodes &) = default ;
    CreateClusterRequestNodeGroupsHyperNodes& operator=(CreateClusterRequestNodeGroupsHyperNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataDisk_ != nullptr
        && this->hostname_ != nullptr && this->hyperNodeId_ != nullptr && this->loginPassword_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr; };
    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<Models::CreateClusterRequestNodeGroupsHyperNodesDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<Models::CreateClusterRequestNodeGroupsHyperNodesDataDisk>) };
    inline vector<Models::CreateClusterRequestNodeGroupsHyperNodesDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<Models::CreateClusterRequestNodeGroupsHyperNodesDataDisk>) };
    inline CreateClusterRequestNodeGroupsHyperNodes& setDataDisk(const vector<Models::CreateClusterRequestNodeGroupsHyperNodesDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline CreateClusterRequestNodeGroupsHyperNodes& setDataDisk(vector<Models::CreateClusterRequestNodeGroupsHyperNodesDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline CreateClusterRequestNodeGroupsHyperNodes& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // hyperNodeId Field Functions 
    bool hasHyperNodeId() const { return this->hyperNodeId_ != nullptr;};
    void deleteHyperNodeId() { this->hyperNodeId_ = nullptr;};
    inline string hyperNodeId() const { DARABONBA_PTR_GET_DEFAULT(hyperNodeId_, "") };
    inline CreateClusterRequestNodeGroupsHyperNodes& setHyperNodeId(string hyperNodeId) { DARABONBA_PTR_SET_VALUE(hyperNodeId_, hyperNodeId) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline CreateClusterRequestNodeGroupsHyperNodes& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateClusterRequestNodeGroupsHyperNodes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateClusterRequestNodeGroupsHyperNodes& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<vector<Models::CreateClusterRequestNodeGroupsHyperNodesDataDisk>> dataDisk_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<string> hyperNodeId_ = nullptr;
    std::shared_ptr<string> loginPassword_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
