// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNODEINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNODEINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterNodeInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNodeInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodeInfos, nodeInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNodeCount, totalNodeCount_);
      DARABONBA_PTR_TO_JSON(ZkNodeInfos, zkNodeInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNodeInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeInfos, nodeInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNodeCount, totalNodeCount_);
      DARABONBA_PTR_FROM_JSON(ZkNodeInfos, zkNodeInfos_);
    };
    DescribeDBClusterNodeInfosResponseBody() = default ;
    DescribeDBClusterNodeInfosResponseBody(const DescribeDBClusterNodeInfosResponseBody &) = default ;
    DescribeDBClusterNodeInfosResponseBody(DescribeDBClusterNodeInfosResponseBody &&) = default ;
    DescribeDBClusterNodeInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNodeInfosResponseBody() = default ;
    DescribeDBClusterNodeInfosResponseBody& operator=(const DescribeDBClusterNodeInfosResponseBody &) = default ;
    DescribeDBClusterNodeInfosResponseBody& operator=(DescribeDBClusterNodeInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZkNodeInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZkNodeInfos& obj) { 
        DARABONBA_PTR_TO_JSON(FailoverTesting, failoverTesting_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(ReplicaId, replicaId_);
      };
      friend void from_json(const Darabonba::Json& j, ZkNodeInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(FailoverTesting, failoverTesting_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(ReplicaId, replicaId_);
      };
      ZkNodeInfos() = default ;
      ZkNodeInfos(const ZkNodeInfos &) = default ;
      ZkNodeInfos(ZkNodeInfos &&) = default ;
      ZkNodeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZkNodeInfos() = default ;
      ZkNodeInfos& operator=(const ZkNodeInfos &) = default ;
      ZkNodeInfos& operator=(ZkNodeInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failoverTesting_ == nullptr
        && this->nodeName_ == nullptr && this->replicaId_ == nullptr; };
      // failoverTesting Field Functions 
      bool hasFailoverTesting() const { return this->failoverTesting_ != nullptr;};
      void deleteFailoverTesting() { this->failoverTesting_ = nullptr;};
      inline bool getFailoverTesting() const { DARABONBA_PTR_GET_DEFAULT(failoverTesting_, false) };
      inline ZkNodeInfos& setFailoverTesting(bool failoverTesting) { DARABONBA_PTR_SET_VALUE(failoverTesting_, failoverTesting) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline ZkNodeInfos& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // replicaId Field Functions 
      bool hasReplicaId() const { return this->replicaId_ != nullptr;};
      void deleteReplicaId() { this->replicaId_ = nullptr;};
      inline string getReplicaId() const { DARABONBA_PTR_GET_DEFAULT(replicaId_, "") };
      inline ZkNodeInfos& setReplicaId(string replicaId) { DARABONBA_PTR_SET_VALUE(replicaId_, replicaId) };


    protected:
      shared_ptr<bool> failoverTesting_ {};
      shared_ptr<string> nodeName_ {};
      shared_ptr<string> replicaId_ {};
    };

    class NodeInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeInfos& obj) { 
        DARABONBA_PTR_TO_JSON(FailoverTesting, failoverTesting_);
        DARABONBA_PTR_TO_JSON(NodeIp, nodeIp_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(ReplicaId, replicaId_);
        DARABONBA_PTR_TO_JSON(ShardId, shardId_);
      };
      friend void from_json(const Darabonba::Json& j, NodeInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(FailoverTesting, failoverTesting_);
        DARABONBA_PTR_FROM_JSON(NodeIp, nodeIp_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(ReplicaId, replicaId_);
        DARABONBA_PTR_FROM_JSON(ShardId, shardId_);
      };
      NodeInfos() = default ;
      NodeInfos(const NodeInfos &) = default ;
      NodeInfos(NodeInfos &&) = default ;
      NodeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeInfos() = default ;
      NodeInfos& operator=(const NodeInfos &) = default ;
      NodeInfos& operator=(NodeInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failoverTesting_ == nullptr
        && this->nodeIp_ == nullptr && this->nodeName_ == nullptr && this->replicaId_ == nullptr && this->shardId_ == nullptr; };
      // failoverTesting Field Functions 
      bool hasFailoverTesting() const { return this->failoverTesting_ != nullptr;};
      void deleteFailoverTesting() { this->failoverTesting_ = nullptr;};
      inline bool getFailoverTesting() const { DARABONBA_PTR_GET_DEFAULT(failoverTesting_, false) };
      inline NodeInfos& setFailoverTesting(bool failoverTesting) { DARABONBA_PTR_SET_VALUE(failoverTesting_, failoverTesting) };


      // nodeIp Field Functions 
      bool hasNodeIp() const { return this->nodeIp_ != nullptr;};
      void deleteNodeIp() { this->nodeIp_ = nullptr;};
      inline string getNodeIp() const { DARABONBA_PTR_GET_DEFAULT(nodeIp_, "") };
      inline NodeInfos& setNodeIp(string nodeIp) { DARABONBA_PTR_SET_VALUE(nodeIp_, nodeIp) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline NodeInfos& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // replicaId Field Functions 
      bool hasReplicaId() const { return this->replicaId_ != nullptr;};
      void deleteReplicaId() { this->replicaId_ = nullptr;};
      inline string getReplicaId() const { DARABONBA_PTR_GET_DEFAULT(replicaId_, "") };
      inline NodeInfos& setReplicaId(string replicaId) { DARABONBA_PTR_SET_VALUE(replicaId_, replicaId) };


      // shardId Field Functions 
      bool hasShardId() const { return this->shardId_ != nullptr;};
      void deleteShardId() { this->shardId_ = nullptr;};
      inline string getShardId() const { DARABONBA_PTR_GET_DEFAULT(shardId_, "") };
      inline NodeInfos& setShardId(string shardId) { DARABONBA_PTR_SET_VALUE(shardId_, shardId) };


    protected:
      shared_ptr<bool> failoverTesting_ {};
      shared_ptr<string> nodeIp_ {};
      shared_ptr<string> nodeName_ {};
      shared_ptr<string> replicaId_ {};
      shared_ptr<string> shardId_ {};
    };

    virtual bool empty() const override { return this->nodeInfos_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalNodeCount_ == nullptr && this->zkNodeInfos_ == nullptr; };
    // nodeInfos Field Functions 
    bool hasNodeInfos() const { return this->nodeInfos_ != nullptr;};
    void deleteNodeInfos() { this->nodeInfos_ = nullptr;};
    inline const vector<DescribeDBClusterNodeInfosResponseBody::NodeInfos> & getNodeInfos() const { DARABONBA_PTR_GET_CONST(nodeInfos_, vector<DescribeDBClusterNodeInfosResponseBody::NodeInfos>) };
    inline vector<DescribeDBClusterNodeInfosResponseBody::NodeInfos> getNodeInfos() { DARABONBA_PTR_GET(nodeInfos_, vector<DescribeDBClusterNodeInfosResponseBody::NodeInfos>) };
    inline DescribeDBClusterNodeInfosResponseBody& setNodeInfos(const vector<DescribeDBClusterNodeInfosResponseBody::NodeInfos> & nodeInfos) { DARABONBA_PTR_SET_VALUE(nodeInfos_, nodeInfos) };
    inline DescribeDBClusterNodeInfosResponseBody& setNodeInfos(vector<DescribeDBClusterNodeInfosResponseBody::NodeInfos> && nodeInfos) { DARABONBA_PTR_SET_RVALUE(nodeInfos_, nodeInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBClusterNodeInfosResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBClusterNodeInfosResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterNodeInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNodeCount Field Functions 
    bool hasTotalNodeCount() const { return this->totalNodeCount_ != nullptr;};
    void deleteTotalNodeCount() { this->totalNodeCount_ = nullptr;};
    inline int32_t getTotalNodeCount() const { DARABONBA_PTR_GET_DEFAULT(totalNodeCount_, 0) };
    inline DescribeDBClusterNodeInfosResponseBody& setTotalNodeCount(int32_t totalNodeCount) { DARABONBA_PTR_SET_VALUE(totalNodeCount_, totalNodeCount) };


    // zkNodeInfos Field Functions 
    bool hasZkNodeInfos() const { return this->zkNodeInfos_ != nullptr;};
    void deleteZkNodeInfos() { this->zkNodeInfos_ = nullptr;};
    inline const vector<DescribeDBClusterNodeInfosResponseBody::ZkNodeInfos> & getZkNodeInfos() const { DARABONBA_PTR_GET_CONST(zkNodeInfos_, vector<DescribeDBClusterNodeInfosResponseBody::ZkNodeInfos>) };
    inline vector<DescribeDBClusterNodeInfosResponseBody::ZkNodeInfos> getZkNodeInfos() { DARABONBA_PTR_GET(zkNodeInfos_, vector<DescribeDBClusterNodeInfosResponseBody::ZkNodeInfos>) };
    inline DescribeDBClusterNodeInfosResponseBody& setZkNodeInfos(const vector<DescribeDBClusterNodeInfosResponseBody::ZkNodeInfos> & zkNodeInfos) { DARABONBA_PTR_SET_VALUE(zkNodeInfos_, zkNodeInfos) };
    inline DescribeDBClusterNodeInfosResponseBody& setZkNodeInfos(vector<DescribeDBClusterNodeInfosResponseBody::ZkNodeInfos> && zkNodeInfos) { DARABONBA_PTR_SET_RVALUE(zkNodeInfos_, zkNodeInfos) };


  protected:
    shared_ptr<vector<DescribeDBClusterNodeInfosResponseBody::NodeInfos>> nodeInfos_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalNodeCount_ {};
    shared_ptr<vector<DescribeDBClusterNodeInfosResponseBody::ZkNodeInfos>> zkNodeInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
