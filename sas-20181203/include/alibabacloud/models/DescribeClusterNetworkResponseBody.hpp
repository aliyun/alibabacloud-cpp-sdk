// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETWORKRESPONSEBODY_HPP_
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
  class DescribeClusterNetworkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNetworkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterNetwork, clusterNetwork_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNetworkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterNetwork, clusterNetwork_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterNetworkResponseBody() = default ;
    DescribeClusterNetworkResponseBody(const DescribeClusterNetworkResponseBody &) = default ;
    DescribeClusterNetworkResponseBody(DescribeClusterNetworkResponseBody &&) = default ;
    DescribeClusterNetworkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNetworkResponseBody() = default ;
    DescribeClusterNetworkResponseBody& operator=(const DescribeClusterNetworkResponseBody &) = default ;
    DescribeClusterNetworkResponseBody& operator=(DescribeClusterNetworkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterNetwork : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterNetwork& obj) { 
        DARABONBA_PTR_TO_JSON(Edge, edge_);
        DARABONBA_PTR_TO_JSON(Node, node_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterNetwork& obj) { 
        DARABONBA_PTR_FROM_JSON(Edge, edge_);
        DARABONBA_PTR_FROM_JSON(Node, node_);
      };
      ClusterNetwork() = default ;
      ClusterNetwork(const ClusterNetwork &) = default ;
      ClusterNetwork(ClusterNetwork &&) = default ;
      ClusterNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterNetwork() = default ;
      ClusterNetwork& operator=(const ClusterNetwork &) = default ;
      ClusterNetwork& operator=(ClusterNetwork &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Node : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Node& obj) { 
          DARABONBA_PTR_TO_JSON(CnnfSwitch, cnnfSwitch_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InterceptionType, interceptionType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NetTopoSwitch, netTopoSwitch_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Node& obj) { 
          DARABONBA_PTR_FROM_JSON(CnnfSwitch, cnnfSwitch_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InterceptionType, interceptionType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NetTopoSwitch, netTopoSwitch_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Node() = default ;
        Node(const Node &) = default ;
        Node(Node &&) = default ;
        Node(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Node() = default ;
        Node& operator=(const Node &) = default ;
        Node& operator=(Node &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cnnfSwitch_ == nullptr
        && this->id_ == nullptr && this->interceptionType_ == nullptr && this->name_ == nullptr && this->netTopoSwitch_ == nullptr && this->riskLevel_ == nullptr
        && this->type_ == nullptr; };
        // cnnfSwitch Field Functions 
        bool hasCnnfSwitch() const { return this->cnnfSwitch_ != nullptr;};
        void deleteCnnfSwitch() { this->cnnfSwitch_ = nullptr;};
        inline int32_t getCnnfSwitch() const { DARABONBA_PTR_GET_DEFAULT(cnnfSwitch_, 0) };
        inline Node& setCnnfSwitch(int32_t cnnfSwitch) { DARABONBA_PTR_SET_VALUE(cnnfSwitch_, cnnfSwitch) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Node& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // interceptionType Field Functions 
        bool hasInterceptionType() const { return this->interceptionType_ != nullptr;};
        void deleteInterceptionType() { this->interceptionType_ = nullptr;};
        inline int32_t getInterceptionType() const { DARABONBA_PTR_GET_DEFAULT(interceptionType_, 0) };
        inline Node& setInterceptionType(int32_t interceptionType) { DARABONBA_PTR_SET_VALUE(interceptionType_, interceptionType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Node& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // netTopoSwitch Field Functions 
        bool hasNetTopoSwitch() const { return this->netTopoSwitch_ != nullptr;};
        void deleteNetTopoSwitch() { this->netTopoSwitch_ = nullptr;};
        inline string getNetTopoSwitch() const { DARABONBA_PTR_GET_DEFAULT(netTopoSwitch_, "") };
        inline Node& setNetTopoSwitch(string netTopoSwitch) { DARABONBA_PTR_SET_VALUE(netTopoSwitch_, netTopoSwitch) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline Node& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Node& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The status of the microsegmentation switch. Valid values:
        // 
        // *   **0**: off.
        // *   **1**: on.
        shared_ptr<int32_t> cnnfSwitch_ {};
        // The ID of the node.
        shared_ptr<string> id_ {};
        // The network type. Valid values:
        // 
        // *   **0**: classic network.
        // *   **1**: virtual private cloud (VPC).
        shared_ptr<int32_t> interceptionType_ {};
        // The name of the node.
        shared_ptr<string> name_ {};
        // The status of the network topology switch. Valid values:
        // 
        // *   **ON**
        // *   **OFF**
        shared_ptr<string> netTopoSwitch_ {};
        // The risk level. Valid values:
        // 
        // *   **3**: high.
        // *   **2**: medium.
        // *   **1**: low.
        // *   **0**: secure.
        // *   **-1**: unknown.
        shared_ptr<string> riskLevel_ {};
        // The type of the node. Valid values:
        // 
        // *   **cluster**: a cluster.
        // *   **internet**: a network node outside the cluster.
        shared_ptr<string> type_ {};
      };

      class Edge : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Edge& obj) { 
          DARABONBA_PTR_TO_JSON(DstNodeId, dstNodeId_);
          DARABONBA_PTR_TO_JSON(DstNodeType, dstNodeType_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(SrcNodeId, srcNodeId_);
          DARABONBA_PTR_TO_JSON(SrcNodeType, srcNodeType_);
        };
        friend void from_json(const Darabonba::Json& j, Edge& obj) { 
          DARABONBA_PTR_FROM_JSON(DstNodeId, dstNodeId_);
          DARABONBA_PTR_FROM_JSON(DstNodeType, dstNodeType_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(SrcNodeId, srcNodeId_);
          DARABONBA_PTR_FROM_JSON(SrcNodeType, srcNodeType_);
        };
        Edge() = default ;
        Edge(const Edge &) = default ;
        Edge(Edge &&) = default ;
        Edge(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Edge() = default ;
        Edge& operator=(const Edge &) = default ;
        Edge& operator=(Edge &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dstNodeId_ == nullptr
        && this->dstNodeType_ == nullptr && this->id_ == nullptr && this->port_ == nullptr && this->srcNodeId_ == nullptr && this->srcNodeType_ == nullptr; };
        // dstNodeId Field Functions 
        bool hasDstNodeId() const { return this->dstNodeId_ != nullptr;};
        void deleteDstNodeId() { this->dstNodeId_ = nullptr;};
        inline string getDstNodeId() const { DARABONBA_PTR_GET_DEFAULT(dstNodeId_, "") };
        inline Edge& setDstNodeId(string dstNodeId) { DARABONBA_PTR_SET_VALUE(dstNodeId_, dstNodeId) };


        // dstNodeType Field Functions 
        bool hasDstNodeType() const { return this->dstNodeType_ != nullptr;};
        void deleteDstNodeType() { this->dstNodeType_ = nullptr;};
        inline string getDstNodeType() const { DARABONBA_PTR_GET_DEFAULT(dstNodeType_, "") };
        inline Edge& setDstNodeType(string dstNodeType) { DARABONBA_PTR_SET_VALUE(dstNodeType_, dstNodeType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Edge& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline Edge& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // srcNodeId Field Functions 
        bool hasSrcNodeId() const { return this->srcNodeId_ != nullptr;};
        void deleteSrcNodeId() { this->srcNodeId_ = nullptr;};
        inline string getSrcNodeId() const { DARABONBA_PTR_GET_DEFAULT(srcNodeId_, "") };
        inline Edge& setSrcNodeId(string srcNodeId) { DARABONBA_PTR_SET_VALUE(srcNodeId_, srcNodeId) };


        // srcNodeType Field Functions 
        bool hasSrcNodeType() const { return this->srcNodeType_ != nullptr;};
        void deleteSrcNodeType() { this->srcNodeType_ = nullptr;};
        inline string getSrcNodeType() const { DARABONBA_PTR_GET_DEFAULT(srcNodeType_, "") };
        inline Edge& setSrcNodeType(string srcNodeType) { DARABONBA_PTR_SET_VALUE(srcNodeType_, srcNodeType) };


      protected:
        // The ID of the destination node.
        shared_ptr<string> dstNodeId_ {};
        // The type of the destination node. Valid values:
        // 
        // *   Set the value to **cluster**.
        shared_ptr<string> dstNodeType_ {};
        // The ID of the topology edge.
        shared_ptr<string> id_ {};
        // The port number of the topology edge.
        shared_ptr<string> port_ {};
        // The ID of the source node.
        shared_ptr<string> srcNodeId_ {};
        // The type of the source node. Valid values:
        // 
        // *   **cluster**: a cluster.
        // *   **internet**: a network node outside the cluster
        shared_ptr<string> srcNodeType_ {};
      };

      virtual bool empty() const override { return this->edge_ == nullptr
        && this->node_ == nullptr; };
      // edge Field Functions 
      bool hasEdge() const { return this->edge_ != nullptr;};
      void deleteEdge() { this->edge_ = nullptr;};
      inline const vector<ClusterNetwork::Edge> & getEdge() const { DARABONBA_PTR_GET_CONST(edge_, vector<ClusterNetwork::Edge>) };
      inline vector<ClusterNetwork::Edge> getEdge() { DARABONBA_PTR_GET(edge_, vector<ClusterNetwork::Edge>) };
      inline ClusterNetwork& setEdge(const vector<ClusterNetwork::Edge> & edge) { DARABONBA_PTR_SET_VALUE(edge_, edge) };
      inline ClusterNetwork& setEdge(vector<ClusterNetwork::Edge> && edge) { DARABONBA_PTR_SET_RVALUE(edge_, edge) };


      // node Field Functions 
      bool hasNode() const { return this->node_ != nullptr;};
      void deleteNode() { this->node_ = nullptr;};
      inline const vector<ClusterNetwork::Node> & getNode() const { DARABONBA_PTR_GET_CONST(node_, vector<ClusterNetwork::Node>) };
      inline vector<ClusterNetwork::Node> getNode() { DARABONBA_PTR_GET(node_, vector<ClusterNetwork::Node>) };
      inline ClusterNetwork& setNode(const vector<ClusterNetwork::Node> & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
      inline ClusterNetwork& setNode(vector<ClusterNetwork::Node> && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


    protected:
      // An array that consists of information about the topology edge.
      shared_ptr<vector<ClusterNetwork::Edge>> edge_ {};
      // An array that consists of information about the node.
      shared_ptr<vector<ClusterNetwork::Node>> node_ {};
    };

    virtual bool empty() const override { return this->clusterNetwork_ == nullptr
        && this->requestId_ == nullptr; };
    // clusterNetwork Field Functions 
    bool hasClusterNetwork() const { return this->clusterNetwork_ != nullptr;};
    void deleteClusterNetwork() { this->clusterNetwork_ = nullptr;};
    inline const DescribeClusterNetworkResponseBody::ClusterNetwork & getClusterNetwork() const { DARABONBA_PTR_GET_CONST(clusterNetwork_, DescribeClusterNetworkResponseBody::ClusterNetwork) };
    inline DescribeClusterNetworkResponseBody::ClusterNetwork getClusterNetwork() { DARABONBA_PTR_GET(clusterNetwork_, DescribeClusterNetworkResponseBody::ClusterNetwork) };
    inline DescribeClusterNetworkResponseBody& setClusterNetwork(const DescribeClusterNetworkResponseBody::ClusterNetwork & clusterNetwork) { DARABONBA_PTR_SET_VALUE(clusterNetwork_, clusterNetwork) };
    inline DescribeClusterNetworkResponseBody& setClusterNetwork(DescribeClusterNetworkResponseBody::ClusterNetwork && clusterNetwork) { DARABONBA_PTR_SET_RVALUE(clusterNetwork_, clusterNetwork) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterNetworkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Information about the network topology edge in the cluster.
    shared_ptr<DescribeClusterNetworkResponseBody::ClusterNetwork> clusterNetwork_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
