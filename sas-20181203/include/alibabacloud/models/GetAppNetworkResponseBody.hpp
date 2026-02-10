// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPNETWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPNETWORKRESPONSEBODY_HPP_
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
  class GetAppNetworkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppNetworkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppNetwork, appNetwork_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppNetworkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppNetwork, appNetwork_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAppNetworkResponseBody() = default ;
    GetAppNetworkResponseBody(const GetAppNetworkResponseBody &) = default ;
    GetAppNetworkResponseBody(GetAppNetworkResponseBody &&) = default ;
    GetAppNetworkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppNetworkResponseBody() = default ;
    GetAppNetworkResponseBody& operator=(const GetAppNetworkResponseBody &) = default ;
    GetAppNetworkResponseBody& operator=(GetAppNetworkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppNetwork : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppNetwork& obj) { 
        DARABONBA_PTR_TO_JSON(Edge, edge_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Node, node_);
      };
      friend void from_json(const Darabonba::Json& j, AppNetwork& obj) { 
        DARABONBA_PTR_FROM_JSON(Edge, edge_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Node, node_);
      };
      AppNetwork() = default ;
      AppNetwork(const AppNetwork &) = default ;
      AppNetwork(AppNetwork &&) = default ;
      AppNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppNetwork() = default ;
      AppNetwork& operator=(const AppNetwork &) = default ;
      AppNetwork& operator=(AppNetwork &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Node : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Node& obj) { 
          DARABONBA_PTR_TO_JSON(ContainerIds, containerIds_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Node& obj) { 
          DARABONBA_PTR_FROM_JSON(ContainerIds, containerIds_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
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
        virtual bool empty() const override { return this->containerIds_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->namespaceId_ == nullptr && this->riskLevel_ == nullptr && this->type_ == nullptr; };
        // containerIds Field Functions 
        bool hasContainerIds() const { return this->containerIds_ != nullptr;};
        void deleteContainerIds() { this->containerIds_ = nullptr;};
        inline const vector<string> & getContainerIds() const { DARABONBA_PTR_GET_CONST(containerIds_, vector<string>) };
        inline vector<string> getContainerIds() { DARABONBA_PTR_GET(containerIds_, vector<string>) };
        inline Node& setContainerIds(const vector<string> & containerIds) { DARABONBA_PTR_SET_VALUE(containerIds_, containerIds) };
        inline Node& setContainerIds(vector<string> && containerIds) { DARABONBA_PTR_SET_RVALUE(containerIds_, containerIds) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Node& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Node& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespaceId Field Functions 
        bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
        void deleteNamespaceId() { this->namespaceId_ = nullptr;};
        inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
        inline Node& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


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
        // The list of the container IDs.
        shared_ptr<vector<string>> containerIds_ {};
        // The ID of the node.
        shared_ptr<string> id_ {};
        // The name of the node.
        shared_ptr<string> name_ {};
        // The ID of the namespace.
        shared_ptr<string> namespaceId_ {};
        // The risk level. Valid values:
        // 
        // *   **3**: high
        // *   **2**: medium
        // *   **1**: low
        // *   **0**: warning
        // *   **-1**: unknown
        shared_ptr<string> riskLevel_ {};
        // The type of the node. Valid values:
        // 
        // *   **app**: an application
        // *   **internet**: a network node in another cluster
        shared_ptr<string> type_ {};
      };

      class Namespace : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Namespace& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Namespace& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Namespace() = default ;
        Namespace(const Namespace &) = default ;
        Namespace(Namespace &&) = default ;
        Namespace(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Namespace() = default ;
        Namespace& operator=(const Namespace &) = default ;
        Namespace& operator=(Namespace &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Namespace& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Namespace& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The ID of the namespace.
        shared_ptr<string> id_ {};
        // The name of the custom namespace.
        shared_ptr<string> name_ {};
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
        // *   **app**: an application
        // *   **internet**: a network node in another cluster
        shared_ptr<string> dstNodeType_ {};
        // The ID of the edge.
        shared_ptr<string> id_ {};
        // The number of the destination port.
        shared_ptr<string> port_ {};
        // The ID of the source node.
        shared_ptr<string> srcNodeId_ {};
        // The type of the source node. Valid values:
        // 
        // *   **app**: an application
        // *   **internet**: a network node in another cluster
        shared_ptr<string> srcNodeType_ {};
      };

      virtual bool empty() const override { return this->edge_ == nullptr
        && this->namespace_ == nullptr && this->node_ == nullptr; };
      // edge Field Functions 
      bool hasEdge() const { return this->edge_ != nullptr;};
      void deleteEdge() { this->edge_ = nullptr;};
      inline const vector<AppNetwork::Edge> & getEdge() const { DARABONBA_PTR_GET_CONST(edge_, vector<AppNetwork::Edge>) };
      inline vector<AppNetwork::Edge> getEdge() { DARABONBA_PTR_GET(edge_, vector<AppNetwork::Edge>) };
      inline AppNetwork& setEdge(const vector<AppNetwork::Edge> & edge) { DARABONBA_PTR_SET_VALUE(edge_, edge) };
      inline AppNetwork& setEdge(vector<AppNetwork::Edge> && edge) { DARABONBA_PTR_SET_RVALUE(edge_, edge) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline const vector<AppNetwork::Namespace> & getNamespace() const { DARABONBA_PTR_GET_CONST(namespace_, vector<AppNetwork::Namespace>) };
      inline vector<AppNetwork::Namespace> getNamespace() { DARABONBA_PTR_GET(namespace_, vector<AppNetwork::Namespace>) };
      inline AppNetwork& setNamespace(const vector<AppNetwork::Namespace> & _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };
      inline AppNetwork& setNamespace(vector<AppNetwork::Namespace> && _namespace) { DARABONBA_PTR_SET_RVALUE(namespace_, _namespace) };


      // node Field Functions 
      bool hasNode() const { return this->node_ != nullptr;};
      void deleteNode() { this->node_ = nullptr;};
      inline const vector<AppNetwork::Node> & getNode() const { DARABONBA_PTR_GET_CONST(node_, vector<AppNetwork::Node>) };
      inline vector<AppNetwork::Node> getNode() { DARABONBA_PTR_GET(node_, vector<AppNetwork::Node>) };
      inline AppNetwork& setNode(const vector<AppNetwork::Node> & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
      inline AppNetwork& setNode(vector<AppNetwork::Node> && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


    protected:
      // The information about the topology edge.
      shared_ptr<vector<AppNetwork::Edge>> edge_ {};
      // The namespace.
      shared_ptr<vector<AppNetwork::Namespace>> namespace_ {};
      // The information about the application node.
      shared_ptr<vector<AppNetwork::Node>> node_ {};
    };

    virtual bool empty() const override { return this->appNetwork_ == nullptr
        && this->requestId_ == nullptr; };
    // appNetwork Field Functions 
    bool hasAppNetwork() const { return this->appNetwork_ != nullptr;};
    void deleteAppNetwork() { this->appNetwork_ = nullptr;};
    inline const GetAppNetworkResponseBody::AppNetwork & getAppNetwork() const { DARABONBA_PTR_GET_CONST(appNetwork_, GetAppNetworkResponseBody::AppNetwork) };
    inline GetAppNetworkResponseBody::AppNetwork getAppNetwork() { DARABONBA_PTR_GET(appNetwork_, GetAppNetworkResponseBody::AppNetwork) };
    inline GetAppNetworkResponseBody& setAppNetwork(const GetAppNetworkResponseBody::AppNetwork & appNetwork) { DARABONBA_PTR_SET_VALUE(appNetwork_, appNetwork) };
    inline GetAppNetworkResponseBody& setAppNetwork(GetAppNetworkResponseBody::AppNetwork && appNetwork) { DARABONBA_PTR_SET_RVALUE(appNetwork_, appNetwork) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppNetworkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the application network topology.
    shared_ptr<GetAppNetworkResponseBody::AppNetwork> appNetwork_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
