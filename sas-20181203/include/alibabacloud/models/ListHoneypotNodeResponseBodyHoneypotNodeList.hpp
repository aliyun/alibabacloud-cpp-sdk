// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTNODERESPONSEBODYHONEYPOTNODELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTNODERESPONSEBODYHONEYPOTNODELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotNodeResponseBodyHoneypotNodeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotNodeResponseBodyHoneypotNodeList& obj) { 
      DARABONBA_PTR_TO_JSON(AllowHoneypotAccessInternet, allowHoneypotAccessInternet_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultNode, defaultNode_);
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(HoneypotTotalCount, honeypotTotalCount_);
      DARABONBA_PTR_TO_JSON(HoneypotUsedCount, honeypotUsedCount_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeIp, nodeIp_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(ProbeTotalCount, probeTotalCount_);
      DARABONBA_PTR_TO_JSON(ProbeUsedCount, probeUsedCount_);
      DARABONBA_PTR_TO_JSON(SecurityGroupProbeIpList, securityGroupProbeIpList_);
      DARABONBA_PTR_TO_JSON(TotalStatus, totalStatus_);
      DARABONBA_PTR_TO_JSON(UpgradeAvailable, upgradeAvailable_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotNodeResponseBodyHoneypotNodeList& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowHoneypotAccessInternet, allowHoneypotAccessInternet_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultNode, defaultNode_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(HoneypotTotalCount, honeypotTotalCount_);
      DARABONBA_PTR_FROM_JSON(HoneypotUsedCount, honeypotUsedCount_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeIp, nodeIp_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(ProbeTotalCount, probeTotalCount_);
      DARABONBA_PTR_FROM_JSON(ProbeUsedCount, probeUsedCount_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupProbeIpList, securityGroupProbeIpList_);
      DARABONBA_PTR_FROM_JSON(TotalStatus, totalStatus_);
      DARABONBA_PTR_FROM_JSON(UpgradeAvailable, upgradeAvailable_);
    };
    ListHoneypotNodeResponseBodyHoneypotNodeList() = default ;
    ListHoneypotNodeResponseBodyHoneypotNodeList(const ListHoneypotNodeResponseBodyHoneypotNodeList &) = default ;
    ListHoneypotNodeResponseBodyHoneypotNodeList(ListHoneypotNodeResponseBodyHoneypotNodeList &&) = default ;
    ListHoneypotNodeResponseBodyHoneypotNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotNodeResponseBodyHoneypotNodeList() = default ;
    ListHoneypotNodeResponseBodyHoneypotNodeList& operator=(const ListHoneypotNodeResponseBodyHoneypotNodeList &) = default ;
    ListHoneypotNodeResponseBodyHoneypotNodeList& operator=(ListHoneypotNodeResponseBodyHoneypotNodeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowHoneypotAccessInternet_ == nullptr
        && return this->createTime_ == nullptr && return this->defaultNode_ == nullptr && return this->ecsInstanceId_ == nullptr && return this->honeypotTotalCount_ == nullptr && return this->honeypotUsedCount_ == nullptr
        && return this->nodeId_ == nullptr && return this->nodeIp_ == nullptr && return this->nodeName_ == nullptr && return this->probeTotalCount_ == nullptr && return this->probeUsedCount_ == nullptr
        && return this->securityGroupProbeIpList_ == nullptr && return this->totalStatus_ == nullptr && return this->upgradeAvailable_ == nullptr; };
    // allowHoneypotAccessInternet Field Functions 
    bool hasAllowHoneypotAccessInternet() const { return this->allowHoneypotAccessInternet_ != nullptr;};
    void deleteAllowHoneypotAccessInternet() { this->allowHoneypotAccessInternet_ = nullptr;};
    inline bool allowHoneypotAccessInternet() const { DARABONBA_PTR_GET_DEFAULT(allowHoneypotAccessInternet_, false) };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setAllowHoneypotAccessInternet(bool allowHoneypotAccessInternet) { DARABONBA_PTR_SET_VALUE(allowHoneypotAccessInternet_, allowHoneypotAccessInternet) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultNode Field Functions 
    bool hasDefaultNode() const { return this->defaultNode_ != nullptr;};
    void deleteDefaultNode() { this->defaultNode_ = nullptr;};
    inline bool defaultNode() const { DARABONBA_PTR_GET_DEFAULT(defaultNode_, false) };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setDefaultNode(bool defaultNode) { DARABONBA_PTR_SET_VALUE(defaultNode_, defaultNode) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // honeypotTotalCount Field Functions 
    bool hasHoneypotTotalCount() const { return this->honeypotTotalCount_ != nullptr;};
    void deleteHoneypotTotalCount() { this->honeypotTotalCount_ = nullptr;};
    inline int32_t honeypotTotalCount() const { DARABONBA_PTR_GET_DEFAULT(honeypotTotalCount_, 0) };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setHoneypotTotalCount(int32_t honeypotTotalCount) { DARABONBA_PTR_SET_VALUE(honeypotTotalCount_, honeypotTotalCount) };


    // honeypotUsedCount Field Functions 
    bool hasHoneypotUsedCount() const { return this->honeypotUsedCount_ != nullptr;};
    void deleteHoneypotUsedCount() { this->honeypotUsedCount_ = nullptr;};
    inline int32_t honeypotUsedCount() const { DARABONBA_PTR_GET_DEFAULT(honeypotUsedCount_, 0) };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setHoneypotUsedCount(int32_t honeypotUsedCount) { DARABONBA_PTR_SET_VALUE(honeypotUsedCount_, honeypotUsedCount) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeIp Field Functions 
    bool hasNodeIp() const { return this->nodeIp_ != nullptr;};
    void deleteNodeIp() { this->nodeIp_ = nullptr;};
    inline string nodeIp() const { DARABONBA_PTR_GET_DEFAULT(nodeIp_, "") };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setNodeIp(string nodeIp) { DARABONBA_PTR_SET_VALUE(nodeIp_, nodeIp) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // probeTotalCount Field Functions 
    bool hasProbeTotalCount() const { return this->probeTotalCount_ != nullptr;};
    void deleteProbeTotalCount() { this->probeTotalCount_ = nullptr;};
    inline int32_t probeTotalCount() const { DARABONBA_PTR_GET_DEFAULT(probeTotalCount_, 0) };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setProbeTotalCount(int32_t probeTotalCount) { DARABONBA_PTR_SET_VALUE(probeTotalCount_, probeTotalCount) };


    // probeUsedCount Field Functions 
    bool hasProbeUsedCount() const { return this->probeUsedCount_ != nullptr;};
    void deleteProbeUsedCount() { this->probeUsedCount_ = nullptr;};
    inline int32_t probeUsedCount() const { DARABONBA_PTR_GET_DEFAULT(probeUsedCount_, 0) };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setProbeUsedCount(int32_t probeUsedCount) { DARABONBA_PTR_SET_VALUE(probeUsedCount_, probeUsedCount) };


    // securityGroupProbeIpList Field Functions 
    bool hasSecurityGroupProbeIpList() const { return this->securityGroupProbeIpList_ != nullptr;};
    void deleteSecurityGroupProbeIpList() { this->securityGroupProbeIpList_ = nullptr;};
    inline const vector<string> & securityGroupProbeIpList() const { DARABONBA_PTR_GET_CONST(securityGroupProbeIpList_, vector<string>) };
    inline vector<string> securityGroupProbeIpList() { DARABONBA_PTR_GET(securityGroupProbeIpList_, vector<string>) };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setSecurityGroupProbeIpList(const vector<string> & securityGroupProbeIpList) { DARABONBA_PTR_SET_VALUE(securityGroupProbeIpList_, securityGroupProbeIpList) };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setSecurityGroupProbeIpList(vector<string> && securityGroupProbeIpList) { DARABONBA_PTR_SET_RVALUE(securityGroupProbeIpList_, securityGroupProbeIpList) };


    // totalStatus Field Functions 
    bool hasTotalStatus() const { return this->totalStatus_ != nullptr;};
    void deleteTotalStatus() { this->totalStatus_ = nullptr;};
    inline int32_t totalStatus() const { DARABONBA_PTR_GET_DEFAULT(totalStatus_, 0) };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setTotalStatus(int32_t totalStatus) { DARABONBA_PTR_SET_VALUE(totalStatus_, totalStatus) };


    // upgradeAvailable Field Functions 
    bool hasUpgradeAvailable() const { return this->upgradeAvailable_ != nullptr;};
    void deleteUpgradeAvailable() { this->upgradeAvailable_ = nullptr;};
    inline bool upgradeAvailable() const { DARABONBA_PTR_GET_DEFAULT(upgradeAvailable_, false) };
    inline ListHoneypotNodeResponseBodyHoneypotNodeList& setUpgradeAvailable(bool upgradeAvailable) { DARABONBA_PTR_SET_VALUE(upgradeAvailable_, upgradeAvailable) };


  protected:
    // Indicates whether a honeypot is allowed to access the Internet. Valid values:
    // 
    // *   **true**: The honeypot is allowed to access the Internet.
    // *   **false**: The honeypot is not allowed to access the Internet.
    std::shared_ptr<bool> allowHoneypotAccessInternet_ = nullptr;
    // The time when the management node was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The type of the management node. Default value: **false**. Valid values:
    // 
    // *   **false**: non-default type
    // *   **true**: default type
    std::shared_ptr<bool> defaultNode_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The maximum number of honeypots that can be deployed to the management node.
    std::shared_ptr<int32_t> honeypotTotalCount_ = nullptr;
    // The number of honeypots that are deployed to the management node.
    std::shared_ptr<int32_t> honeypotUsedCount_ = nullptr;
    // The ID of the management node.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The IP address of the management node.
    std::shared_ptr<string> nodeIp_ = nullptr;
    // The name of the management node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The maximum number of probes that can be deployed for the management node.
    std::shared_ptr<int32_t> probeTotalCount_ = nullptr;
    // The number of probes that are deployed for the management node.
    std::shared_ptr<int32_t> probeUsedCount_ = nullptr;
    // An array consisting of the CIDR blocks that are allowed to access the management node.
    std::shared_ptr<vector<string>> securityGroupProbeIpList_ = nullptr;
    // The status of the management node. Valid values:
    // 
    // *   **1**: normal
    // *   **2**: abnormal
    std::shared_ptr<int32_t> totalStatus_ = nullptr;
    // Indicates whether the management node can be upgraded. Valid values:
    // 
    // *   **false**: no
    // *   **true**: yes
    std::shared_ptr<bool> upgradeAvailable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
