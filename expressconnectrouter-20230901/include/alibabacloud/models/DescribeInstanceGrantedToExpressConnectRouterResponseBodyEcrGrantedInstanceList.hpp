// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEGRANTEDTOEXPRESSCONNECTROUTERRESPONSEBODYECRGRANTEDINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEGRANTEDTOEXPRESSCONNECTROUTERRESPONSEBODYECRGRANTEDINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(EcrOwnerAliUid, ecrOwnerAliUid_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GrantId, grantId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeOwnerBid, nodeOwnerBid_);
      DARABONBA_PTR_TO_JSON(NodeOwnerUid, nodeOwnerUid_);
      DARABONBA_PTR_TO_JSON(NodeRegionId, nodeRegionId_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(EcrOwnerAliUid, ecrOwnerAliUid_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GrantId, grantId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeOwnerBid, nodeOwnerBid_);
      DARABONBA_PTR_FROM_JSON(NodeOwnerUid, nodeOwnerUid_);
      DARABONBA_PTR_FROM_JSON(NodeRegionId, nodeRegionId_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList() = default ;
    DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList(const DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList &) = default ;
    DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList(DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList &&) = default ;
    DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList() = default ;
    DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& operator=(const DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList &) = default ;
    DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& operator=(DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecrId_ == nullptr
        && return this->ecrOwnerAliUid_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->grantId_ == nullptr && return this->nodeId_ == nullptr
        && return this->nodeOwnerBid_ == nullptr && return this->nodeOwnerUid_ == nullptr && return this->nodeRegionId_ == nullptr && return this->nodeType_ == nullptr && return this->status_ == nullptr; };
    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string ecrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // ecrOwnerAliUid Field Functions 
    bool hasEcrOwnerAliUid() const { return this->ecrOwnerAliUid_ != nullptr;};
    void deleteEcrOwnerAliUid() { this->ecrOwnerAliUid_ = nullptr;};
    inline string ecrOwnerAliUid() const { DARABONBA_PTR_GET_DEFAULT(ecrOwnerAliUid_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& setEcrOwnerAliUid(string ecrOwnerAliUid) { DARABONBA_PTR_SET_VALUE(ecrOwnerAliUid_, ecrOwnerAliUid) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // grantId Field Functions 
    bool hasGrantId() const { return this->grantId_ != nullptr;};
    void deleteGrantId() { this->grantId_ = nullptr;};
    inline string grantId() const { DARABONBA_PTR_GET_DEFAULT(grantId_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& setGrantId(string grantId) { DARABONBA_PTR_SET_VALUE(grantId_, grantId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeOwnerBid Field Functions 
    bool hasNodeOwnerBid() const { return this->nodeOwnerBid_ != nullptr;};
    void deleteNodeOwnerBid() { this->nodeOwnerBid_ = nullptr;};
    inline string nodeOwnerBid() const { DARABONBA_PTR_GET_DEFAULT(nodeOwnerBid_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& setNodeOwnerBid(string nodeOwnerBid) { DARABONBA_PTR_SET_VALUE(nodeOwnerBid_, nodeOwnerBid) };


    // nodeOwnerUid Field Functions 
    bool hasNodeOwnerUid() const { return this->nodeOwnerUid_ != nullptr;};
    void deleteNodeOwnerUid() { this->nodeOwnerUid_ = nullptr;};
    inline int64_t nodeOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(nodeOwnerUid_, 0L) };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& setNodeOwnerUid(int64_t nodeOwnerUid) { DARABONBA_PTR_SET_VALUE(nodeOwnerUid_, nodeOwnerUid) };


    // nodeRegionId Field Functions 
    bool hasNodeRegionId() const { return this->nodeRegionId_ != nullptr;};
    void deleteNodeRegionId() { this->nodeRegionId_ = nullptr;};
    inline string nodeRegionId() const { DARABONBA_PTR_GET_DEFAULT(nodeRegionId_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& setNodeRegionId(string nodeRegionId) { DARABONBA_PTR_SET_VALUE(nodeRegionId_, nodeRegionId) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ECR ID.
    std::shared_ptr<string> ecrId_ = nullptr;
    // The ID of the Alibaba Cloud account that owns the ECR to which you want to grant permissions.
    std::shared_ptr<string> ecrOwnerAliUid_ = nullptr;
    // The time when the network instance was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the network instance was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The authorization ID.
    std::shared_ptr<string> grantId_ = nullptr;
    // The ID of the network instance.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The ID of the Alibaba Cloud enterprise account that owns the network instance.
    std::shared_ptr<string> nodeOwnerBid_ = nullptr;
    // The ID of the Alibaba Cloud account that owns the network instance.
    std::shared_ptr<int64_t> nodeOwnerUid_ = nullptr;
    // The region ID of the network instance.
    std::shared_ptr<string> nodeRegionId_ = nullptr;
    // The type of the network instance. Valid values:
    // 
    // *   **VBR**
    // *   **VPC**
    std::shared_ptr<string> nodeType_ = nullptr;
    // The state of the network instance.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
