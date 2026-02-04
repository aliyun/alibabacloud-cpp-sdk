// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGICINSTANCETOPOLOGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGICINSTANCETOPOLOGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeLogicInstanceTopologyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogicInstanceTopologyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RedisProxyList, redisProxyList_);
      DARABONBA_PTR_TO_JSON(RedisShardList, redisShardList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogicInstanceTopologyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RedisProxyList, redisProxyList_);
      DARABONBA_PTR_FROM_JSON(RedisShardList, redisShardList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLogicInstanceTopologyResponseBody() = default ;
    DescribeLogicInstanceTopologyResponseBody(const DescribeLogicInstanceTopologyResponseBody &) = default ;
    DescribeLogicInstanceTopologyResponseBody(DescribeLogicInstanceTopologyResponseBody &&) = default ;
    DescribeLogicInstanceTopologyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogicInstanceTopologyResponseBody() = default ;
    DescribeLogicInstanceTopologyResponseBody& operator=(const DescribeLogicInstanceTopologyResponseBody &) = default ;
    DescribeLogicInstanceTopologyResponseBody& operator=(DescribeLogicInstanceTopologyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RedisShardList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RedisShardList& obj) { 
        DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
      };
      friend void from_json(const Darabonba::Json& j, RedisShardList& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
      };
      RedisShardList() = default ;
      RedisShardList(const RedisShardList &) = default ;
      RedisShardList(RedisShardList &&) = default ;
      RedisShardList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RedisShardList() = default ;
      RedisShardList& operator=(const RedisShardList &) = default ;
      RedisShardList& operator=(RedisShardList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(Capacity, capacity_);
          DARABONBA_PTR_TO_JSON(Connection, connection_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(SubInstanceType, subInstanceType_);
        };
        friend void from_json(const Darabonba::Json& j, NodeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
          DARABONBA_PTR_FROM_JSON(Connection, connection_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(SubInstanceType, subInstanceType_);
        };
        NodeInfo() = default ;
        NodeInfo(const NodeInfo &) = default ;
        NodeInfo(NodeInfo &&) = default ;
        NodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeInfo() = default ;
        NodeInfo& operator=(const NodeInfo &) = default ;
        NodeInfo& operator=(NodeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->capacity_ == nullptr && this->connection_ == nullptr && this->nodeId_ == nullptr && this->nodeType_ == nullptr && this->subInstanceType_ == nullptr; };
        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
        inline NodeInfo& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // capacity Field Functions 
        bool hasCapacity() const { return this->capacity_ != nullptr;};
        void deleteCapacity() { this->capacity_ = nullptr;};
        inline string getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, "") };
        inline NodeInfo& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


        // connection Field Functions 
        bool hasConnection() const { return this->connection_ != nullptr;};
        void deleteConnection() { this->connection_ = nullptr;};
        inline string getConnection() const { DARABONBA_PTR_GET_DEFAULT(connection_, "") };
        inline NodeInfo& setConnection(string connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline NodeInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline NodeInfo& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // subInstanceType Field Functions 
        bool hasSubInstanceType() const { return this->subInstanceType_ != nullptr;};
        void deleteSubInstanceType() { this->subInstanceType_ = nullptr;};
        inline string getSubInstanceType() const { DARABONBA_PTR_GET_DEFAULT(subInstanceType_, "") };
        inline NodeInfo& setSubInstanceType(string subInstanceType) { DARABONBA_PTR_SET_VALUE(subInstanceType_, subInstanceType) };


      protected:
        // The bandwidth throttling of the node. Unit: MB/s.
        shared_ptr<string> bandwidth_ {};
        // The storage capacity of the node. Unit: MB.
        shared_ptr<string> capacity_ {};
        // The maximum number of connections.
        shared_ptr<string> connection_ {};
        // The ID of the node.
        shared_ptr<string> nodeId_ {};
        // The node type. Valid values:
        // 
        // *   **proxy**: proxy node
        // *   **db**: data node
        shared_ptr<string> nodeType_ {};
        // 子实例类型，返回值：
        // * **master**：主节点类型。
        // * **readonly**：只读实例类型。
        shared_ptr<string> subInstanceType_ {};
      };

      virtual bool empty() const override { return this->nodeInfo_ == nullptr; };
      // nodeInfo Field Functions 
      bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
      void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
      inline const vector<RedisShardList::NodeInfo> & getNodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, vector<RedisShardList::NodeInfo>) };
      inline vector<RedisShardList::NodeInfo> getNodeInfo() { DARABONBA_PTR_GET(nodeInfo_, vector<RedisShardList::NodeInfo>) };
      inline RedisShardList& setNodeInfo(const vector<RedisShardList::NodeInfo> & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
      inline RedisShardList& setNodeInfo(vector<RedisShardList::NodeInfo> && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


    protected:
      shared_ptr<vector<RedisShardList::NodeInfo>> nodeInfo_ {};
    };

    class RedisProxyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RedisProxyList& obj) { 
        DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
      };
      friend void from_json(const Darabonba::Json& j, RedisProxyList& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
      };
      RedisProxyList() = default ;
      RedisProxyList(const RedisProxyList &) = default ;
      RedisProxyList(RedisProxyList &&) = default ;
      RedisProxyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RedisProxyList() = default ;
      RedisProxyList& operator=(const RedisProxyList &) = default ;
      RedisProxyList& operator=(RedisProxyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(Capacity, capacity_);
          DARABONBA_PTR_TO_JSON(Connection, connection_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        };
        friend void from_json(const Darabonba::Json& j, NodeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
          DARABONBA_PTR_FROM_JSON(Connection, connection_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        };
        NodeInfo() = default ;
        NodeInfo(const NodeInfo &) = default ;
        NodeInfo(NodeInfo &&) = default ;
        NodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeInfo() = default ;
        NodeInfo& operator=(const NodeInfo &) = default ;
        NodeInfo& operator=(NodeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->capacity_ == nullptr && this->connection_ == nullptr && this->nodeId_ == nullptr && this->nodeType_ == nullptr; };
        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
        inline NodeInfo& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // capacity Field Functions 
        bool hasCapacity() const { return this->capacity_ != nullptr;};
        void deleteCapacity() { this->capacity_ = nullptr;};
        inline string getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, "") };
        inline NodeInfo& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


        // connection Field Functions 
        bool hasConnection() const { return this->connection_ != nullptr;};
        void deleteConnection() { this->connection_ = nullptr;};
        inline string getConnection() const { DARABONBA_PTR_GET_DEFAULT(connection_, "") };
        inline NodeInfo& setConnection(string connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline NodeInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline NodeInfo& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      protected:
        // The bandwidth throttling of the node. Unit: MB/s.
        shared_ptr<string> bandwidth_ {};
        // The storage capacity of the node. Unit: MB.
        shared_ptr<string> capacity_ {};
        // The maximum number of connections.
        shared_ptr<string> connection_ {};
        // The ID of the node.
        shared_ptr<string> nodeId_ {};
        // The node type. Valid values:
        // 
        // *   **proxy**: proxy node
        // *   **db**: data node
        shared_ptr<string> nodeType_ {};
      };

      virtual bool empty() const override { return this->nodeInfo_ == nullptr; };
      // nodeInfo Field Functions 
      bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
      void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
      inline const vector<RedisProxyList::NodeInfo> & getNodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, vector<RedisProxyList::NodeInfo>) };
      inline vector<RedisProxyList::NodeInfo> getNodeInfo() { DARABONBA_PTR_GET(nodeInfo_, vector<RedisProxyList::NodeInfo>) };
      inline RedisProxyList& setNodeInfo(const vector<RedisProxyList::NodeInfo> & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
      inline RedisProxyList& setNodeInfo(vector<RedisProxyList::NodeInfo> && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


    protected:
      shared_ptr<vector<RedisProxyList::NodeInfo>> nodeInfo_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->redisProxyList_ == nullptr && this->redisShardList_ == nullptr && this->requestId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeLogicInstanceTopologyResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // redisProxyList Field Functions 
    bool hasRedisProxyList() const { return this->redisProxyList_ != nullptr;};
    void deleteRedisProxyList() { this->redisProxyList_ = nullptr;};
    inline const DescribeLogicInstanceTopologyResponseBody::RedisProxyList & getRedisProxyList() const { DARABONBA_PTR_GET_CONST(redisProxyList_, DescribeLogicInstanceTopologyResponseBody::RedisProxyList) };
    inline DescribeLogicInstanceTopologyResponseBody::RedisProxyList getRedisProxyList() { DARABONBA_PTR_GET(redisProxyList_, DescribeLogicInstanceTopologyResponseBody::RedisProxyList) };
    inline DescribeLogicInstanceTopologyResponseBody& setRedisProxyList(const DescribeLogicInstanceTopologyResponseBody::RedisProxyList & redisProxyList) { DARABONBA_PTR_SET_VALUE(redisProxyList_, redisProxyList) };
    inline DescribeLogicInstanceTopologyResponseBody& setRedisProxyList(DescribeLogicInstanceTopologyResponseBody::RedisProxyList && redisProxyList) { DARABONBA_PTR_SET_RVALUE(redisProxyList_, redisProxyList) };


    // redisShardList Field Functions 
    bool hasRedisShardList() const { return this->redisShardList_ != nullptr;};
    void deleteRedisShardList() { this->redisShardList_ = nullptr;};
    inline const DescribeLogicInstanceTopologyResponseBody::RedisShardList & getRedisShardList() const { DARABONBA_PTR_GET_CONST(redisShardList_, DescribeLogicInstanceTopologyResponseBody::RedisShardList) };
    inline DescribeLogicInstanceTopologyResponseBody::RedisShardList getRedisShardList() { DARABONBA_PTR_GET(redisShardList_, DescribeLogicInstanceTopologyResponseBody::RedisShardList) };
    inline DescribeLogicInstanceTopologyResponseBody& setRedisShardList(const DescribeLogicInstanceTopologyResponseBody::RedisShardList & redisShardList) { DARABONBA_PTR_SET_VALUE(redisShardList_, redisShardList) };
    inline DescribeLogicInstanceTopologyResponseBody& setRedisShardList(DescribeLogicInstanceTopologyResponseBody::RedisShardList && redisShardList) { DARABONBA_PTR_SET_RVALUE(redisShardList_, redisShardList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogicInstanceTopologyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // The detailed proxy information, including information about proxy nodes.
    shared_ptr<DescribeLogicInstanceTopologyResponseBody::RedisProxyList> redisProxyList_ {};
    // Details of data shards, which includes node information such as NodeInfo.
    shared_ptr<DescribeLogicInstanceTopologyResponseBody::RedisShardList> redisShardList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
