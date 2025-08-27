// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUESTNODEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUESTNODEGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExtendClusterRequestNodeGroupsNodeTag.hpp>
#include <alibabacloud/models/ExtendClusterRequestNodeGroupsNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ExtendClusterRequestNodeGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtendClusterRequestNodeGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Hostnames, hostnames_);
      DARABONBA_PTR_TO_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeTag, nodeTag_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ExtendClusterRequestNodeGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Hostnames, hostnames_);
      DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeTag, nodeTag_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ExtendClusterRequestNodeGroups() = default ;
    ExtendClusterRequestNodeGroups(const ExtendClusterRequestNodeGroups &) = default ;
    ExtendClusterRequestNodeGroups(ExtendClusterRequestNodeGroups &&) = default ;
    ExtendClusterRequestNodeGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtendClusterRequestNodeGroups() = default ;
    ExtendClusterRequestNodeGroups& operator=(const ExtendClusterRequestNodeGroups &) = default ;
    ExtendClusterRequestNodeGroups& operator=(ExtendClusterRequestNodeGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->autoRenew_ != nullptr && this->chargeType_ != nullptr && this->hostnames_ != nullptr && this->loginPassword_ != nullptr && this->nodeGroupId_ != nullptr
        && this->nodeTag_ != nullptr && this->nodes_ != nullptr && this->period_ != nullptr && this->userData_ != nullptr && this->vSwitchId_ != nullptr
        && this->vpcId_ != nullptr && this->zoneId_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline ExtendClusterRequestNodeGroups& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline ExtendClusterRequestNodeGroups& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ExtendClusterRequestNodeGroups& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // hostnames Field Functions 
    bool hasHostnames() const { return this->hostnames_ != nullptr;};
    void deleteHostnames() { this->hostnames_ = nullptr;};
    inline const vector<string> & hostnames() const { DARABONBA_PTR_GET_CONST(hostnames_, vector<string>) };
    inline vector<string> hostnames() { DARABONBA_PTR_GET(hostnames_, vector<string>) };
    inline ExtendClusterRequestNodeGroups& setHostnames(const vector<string> & hostnames) { DARABONBA_PTR_SET_VALUE(hostnames_, hostnames) };
    inline ExtendClusterRequestNodeGroups& setHostnames(vector<string> && hostnames) { DARABONBA_PTR_SET_RVALUE(hostnames_, hostnames) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline ExtendClusterRequestNodeGroups& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ExtendClusterRequestNodeGroups& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeTag Field Functions 
    bool hasNodeTag() const { return this->nodeTag_ != nullptr;};
    void deleteNodeTag() { this->nodeTag_ = nullptr;};
    inline const vector<Models::ExtendClusterRequestNodeGroupsNodeTag> & nodeTag() const { DARABONBA_PTR_GET_CONST(nodeTag_, vector<Models::ExtendClusterRequestNodeGroupsNodeTag>) };
    inline vector<Models::ExtendClusterRequestNodeGroupsNodeTag> nodeTag() { DARABONBA_PTR_GET(nodeTag_, vector<Models::ExtendClusterRequestNodeGroupsNodeTag>) };
    inline ExtendClusterRequestNodeGroups& setNodeTag(const vector<Models::ExtendClusterRequestNodeGroupsNodeTag> & nodeTag) { DARABONBA_PTR_SET_VALUE(nodeTag_, nodeTag) };
    inline ExtendClusterRequestNodeGroups& setNodeTag(vector<Models::ExtendClusterRequestNodeGroupsNodeTag> && nodeTag) { DARABONBA_PTR_SET_RVALUE(nodeTag_, nodeTag) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::ExtendClusterRequestNodeGroupsNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::ExtendClusterRequestNodeGroupsNodes>) };
    inline vector<Models::ExtendClusterRequestNodeGroupsNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::ExtendClusterRequestNodeGroupsNodes>) };
    inline ExtendClusterRequestNodeGroups& setNodes(const vector<Models::ExtendClusterRequestNodeGroupsNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ExtendClusterRequestNodeGroups& setNodes(vector<Models::ExtendClusterRequestNodeGroupsNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline ExtendClusterRequestNodeGroups& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ExtendClusterRequestNodeGroups& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ExtendClusterRequestNodeGroups& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ExtendClusterRequestNodeGroups& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ExtendClusterRequestNodeGroups& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Number of nodes to purchase. Range: 0~500. If the Amount parameter is set to 0, it means no new nodes will be purchased and existing nodes will be used for scaling. If the Amount parameter is set to 1~500, it means a certain number of nodes will be purchased and used for scaling. Default value: 0
    std::shared_ptr<int64_t> amount_ = nullptr;
    // Whether to automatically renew the purchased nodes. This parameter takes effect when the Amount parameter is not 0 and the ChargeType is set to PrePaid. Valid values: True (auto-renewal); False (no auto-renewal). Default value: False
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // Payment method for the nodes. When the Amount parameter is set to 0, this parameter does not take effect. Valid values: PrePaid (Subscription); PostPaid (Pay-As-You-Go). Default value: PrePaid.
    std::shared_ptr<string> chargeType_ = nullptr;
    // Set the hostnames for the purchased nodes. This parameter does not take effect when the Amount parameter is set to 0.
    std::shared_ptr<vector<string>> hostnames_ = nullptr;
    // Set the login password for the purchased nodes. This parameter is not effective when the Amount parameter is set to 0.
    std::shared_ptr<string> loginPassword_ = nullptr;
    // Node Group ID
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // Node tags
    std::shared_ptr<vector<Models::ExtendClusterRequestNodeGroupsNodeTag>> nodeTag_ = nullptr;
    // List of Nodes
    std::shared_ptr<vector<Models::ExtendClusterRequestNodeGroupsNodes>> nodes_ = nullptr;
    // Duration of the node purchase (in months). Valid values: 1, 6, 12, 24, 36, 48. This parameter takes effect when the Amount parameter is not 0 and the ChargeType is set to PrePaid.
    std::shared_ptr<int64_t> period_ = nullptr;
    // Custom Data
    std::shared_ptr<string> userData_ = nullptr;
    // VSwitch ID
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // VPC ID
    std::shared_ptr<string> vpcId_ = nullptr;
    // Zone ID
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
