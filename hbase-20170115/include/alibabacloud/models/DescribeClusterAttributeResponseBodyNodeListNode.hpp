// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERATTRIBUTERESPONSEBODYNODELISTNODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERATTRIBUTERESPONSEBODYNODELISTNODE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterAttributeResponseBodyNodeListNodeDaemonList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterAttributeResponseBodyNodeListNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAttributeResponseBodyNodeListNode& obj) { 
      DARABONBA_PTR_TO_JSON(DaemonList, daemonList_);
      DARABONBA_PTR_TO_JSON(MemStore, memStore_);
      DARABONBA_PTR_TO_JSON(NodeDiskQuantity, nodeDiskQuantity_);
      DARABONBA_PTR_TO_JSON(NodeDiskSize, nodeDiskSize_);
      DARABONBA_PTR_TO_JSON(NodeDiskType, nodeDiskType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(RegionQuantity, regionQuantity_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(StoreFile, storeFile_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAttributeResponseBodyNodeListNode& obj) { 
      DARABONBA_PTR_FROM_JSON(DaemonList, daemonList_);
      DARABONBA_PTR_FROM_JSON(MemStore, memStore_);
      DARABONBA_PTR_FROM_JSON(NodeDiskQuantity, nodeDiskQuantity_);
      DARABONBA_PTR_FROM_JSON(NodeDiskSize, nodeDiskSize_);
      DARABONBA_PTR_FROM_JSON(NodeDiskType, nodeDiskType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(RegionQuantity, regionQuantity_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(StoreFile, storeFile_);
    };
    DescribeClusterAttributeResponseBodyNodeListNode() = default ;
    DescribeClusterAttributeResponseBodyNodeListNode(const DescribeClusterAttributeResponseBodyNodeListNode &) = default ;
    DescribeClusterAttributeResponseBodyNodeListNode(DescribeClusterAttributeResponseBodyNodeListNode &&) = default ;
    DescribeClusterAttributeResponseBodyNodeListNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAttributeResponseBodyNodeListNode() = default ;
    DescribeClusterAttributeResponseBodyNodeListNode& operator=(const DescribeClusterAttributeResponseBodyNodeListNode &) = default ;
    DescribeClusterAttributeResponseBodyNodeListNode& operator=(DescribeClusterAttributeResponseBodyNodeListNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->daemonList_ == nullptr
        && return this->memStore_ == nullptr && return this->nodeDiskQuantity_ == nullptr && return this->nodeDiskSize_ == nullptr && return this->nodeDiskType_ == nullptr && return this->nodeId_ == nullptr
        && return this->nodeInstanceType_ == nullptr && return this->nodeStatus_ == nullptr && return this->nodeType_ == nullptr && return this->regionQuantity_ == nullptr && return this->serviceType_ == nullptr
        && return this->storeFile_ == nullptr; };
    // daemonList Field Functions 
    bool hasDaemonList() const { return this->daemonList_ != nullptr;};
    void deleteDaemonList() { this->daemonList_ = nullptr;};
    inline const Models::DescribeClusterAttributeResponseBodyNodeListNodeDaemonList & daemonList() const { DARABONBA_PTR_GET_CONST(daemonList_, Models::DescribeClusterAttributeResponseBodyNodeListNodeDaemonList) };
    inline Models::DescribeClusterAttributeResponseBodyNodeListNodeDaemonList daemonList() { DARABONBA_PTR_GET(daemonList_, Models::DescribeClusterAttributeResponseBodyNodeListNodeDaemonList) };
    inline DescribeClusterAttributeResponseBodyNodeListNode& setDaemonList(const Models::DescribeClusterAttributeResponseBodyNodeListNodeDaemonList & daemonList) { DARABONBA_PTR_SET_VALUE(daemonList_, daemonList) };
    inline DescribeClusterAttributeResponseBodyNodeListNode& setDaemonList(Models::DescribeClusterAttributeResponseBodyNodeListNodeDaemonList && daemonList) { DARABONBA_PTR_SET_RVALUE(daemonList_, daemonList) };


    // memStore Field Functions 
    bool hasMemStore() const { return this->memStore_ != nullptr;};
    void deleteMemStore() { this->memStore_ = nullptr;};
    inline string memStore() const { DARABONBA_PTR_GET_DEFAULT(memStore_, "") };
    inline DescribeClusterAttributeResponseBodyNodeListNode& setMemStore(string memStore) { DARABONBA_PTR_SET_VALUE(memStore_, memStore) };


    // nodeDiskQuantity Field Functions 
    bool hasNodeDiskQuantity() const { return this->nodeDiskQuantity_ != nullptr;};
    void deleteNodeDiskQuantity() { this->nodeDiskQuantity_ = nullptr;};
    inline string nodeDiskQuantity() const { DARABONBA_PTR_GET_DEFAULT(nodeDiskQuantity_, "") };
    inline DescribeClusterAttributeResponseBodyNodeListNode& setNodeDiskQuantity(string nodeDiskQuantity) { DARABONBA_PTR_SET_VALUE(nodeDiskQuantity_, nodeDiskQuantity) };


    // nodeDiskSize Field Functions 
    bool hasNodeDiskSize() const { return this->nodeDiskSize_ != nullptr;};
    void deleteNodeDiskSize() { this->nodeDiskSize_ = nullptr;};
    inline string nodeDiskSize() const { DARABONBA_PTR_GET_DEFAULT(nodeDiskSize_, "") };
    inline DescribeClusterAttributeResponseBodyNodeListNode& setNodeDiskSize(string nodeDiskSize) { DARABONBA_PTR_SET_VALUE(nodeDiskSize_, nodeDiskSize) };


    // nodeDiskType Field Functions 
    bool hasNodeDiskType() const { return this->nodeDiskType_ != nullptr;};
    void deleteNodeDiskType() { this->nodeDiskType_ = nullptr;};
    inline string nodeDiskType() const { DARABONBA_PTR_GET_DEFAULT(nodeDiskType_, "") };
    inline DescribeClusterAttributeResponseBodyNodeListNode& setNodeDiskType(string nodeDiskType) { DARABONBA_PTR_SET_VALUE(nodeDiskType_, nodeDiskType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeClusterAttributeResponseBodyNodeListNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeInstanceType Field Functions 
    bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
    void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
    inline string nodeInstanceType() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceType_, "") };
    inline DescribeClusterAttributeResponseBodyNodeListNode& setNodeInstanceType(string nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };


    // nodeStatus Field Functions 
    bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
    void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
    inline string nodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
    inline DescribeClusterAttributeResponseBodyNodeListNode& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline DescribeClusterAttributeResponseBodyNodeListNode& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // regionQuantity Field Functions 
    bool hasRegionQuantity() const { return this->regionQuantity_ != nullptr;};
    void deleteRegionQuantity() { this->regionQuantity_ = nullptr;};
    inline string regionQuantity() const { DARABONBA_PTR_GET_DEFAULT(regionQuantity_, "") };
    inline DescribeClusterAttributeResponseBodyNodeListNode& setRegionQuantity(string regionQuantity) { DARABONBA_PTR_SET_VALUE(regionQuantity_, regionQuantity) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline DescribeClusterAttributeResponseBodyNodeListNode& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // storeFile Field Functions 
    bool hasStoreFile() const { return this->storeFile_ != nullptr;};
    void deleteStoreFile() { this->storeFile_ = nullptr;};
    inline string storeFile() const { DARABONBA_PTR_GET_DEFAULT(storeFile_, "") };
    inline DescribeClusterAttributeResponseBodyNodeListNode& setStoreFile(string storeFile) { DARABONBA_PTR_SET_VALUE(storeFile_, storeFile) };


  protected:
    std::shared_ptr<Models::DescribeClusterAttributeResponseBodyNodeListNodeDaemonList> daemonList_ = nullptr;
    std::shared_ptr<string> memStore_ = nullptr;
    std::shared_ptr<string> nodeDiskQuantity_ = nullptr;
    std::shared_ptr<string> nodeDiskSize_ = nullptr;
    std::shared_ptr<string> nodeDiskType_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> nodeInstanceType_ = nullptr;
    std::shared_ptr<string> nodeStatus_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<string> regionQuantity_ = nullptr;
    std::shared_ptr<string> serviceType_ = nullptr;
    std::shared_ptr<string> storeFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
