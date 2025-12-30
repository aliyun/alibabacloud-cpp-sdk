// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHRINKCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SHRINKCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ShrinkClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShrinkClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ShrinkClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroups_);
    };
    ShrinkClusterRequest() = default ;
    ShrinkClusterRequest(const ShrinkClusterRequest &) = default ;
    ShrinkClusterRequest(ShrinkClusterRequest &&) = default ;
    ShrinkClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShrinkClusterRequest() = default ;
    ShrinkClusterRequest& operator=(const ShrinkClusterRequest &) = default ;
    ShrinkClusterRequest& operator=(ShrinkClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeGroups& obj) { 
        DARABONBA_PTR_TO_JSON(HyperNodes, hyperNodes_);
        DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      };
      friend void from_json(const Darabonba::Json& j, NodeGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(HyperNodes, hyperNodes_);
        DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      };
      NodeGroups() = default ;
      NodeGroups(const NodeGroups &) = default ;
      NodeGroups(NodeGroups &&) = default ;
      NodeGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeGroups() = default ;
      NodeGroups& operator=(const NodeGroups &) = default ;
      NodeGroups& operator=(NodeGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nodeId_ == nullptr; };
        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Nodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      protected:
        // The node ID.
        shared_ptr<string> nodeId_ {};
      };

      class HyperNodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HyperNodes& obj) { 
          DARABONBA_PTR_TO_JSON(HyperNodeId, hyperNodeId_);
        };
        friend void from_json(const Darabonba::Json& j, HyperNodes& obj) { 
          DARABONBA_PTR_FROM_JSON(HyperNodeId, hyperNodeId_);
        };
        HyperNodes() = default ;
        HyperNodes(const HyperNodes &) = default ;
        HyperNodes(HyperNodes &&) = default ;
        HyperNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HyperNodes() = default ;
        HyperNodes& operator=(const HyperNodes &) = default ;
        HyperNodes& operator=(HyperNodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hyperNodeId_ == nullptr; };
        // hyperNodeId Field Functions 
        bool hasHyperNodeId() const { return this->hyperNodeId_ != nullptr;};
        void deleteHyperNodeId() { this->hyperNodeId_ = nullptr;};
        inline string getHyperNodeId() const { DARABONBA_PTR_GET_DEFAULT(hyperNodeId_, "") };
        inline HyperNodes& setHyperNodeId(string hyperNodeId) { DARABONBA_PTR_SET_VALUE(hyperNodeId_, hyperNodeId) };


      protected:
        shared_ptr<string> hyperNodeId_ {};
      };

      virtual bool empty() const override { return this->hyperNodes_ == nullptr
        && this->nodeGroupId_ == nullptr && this->nodes_ == nullptr; };
      // hyperNodes Field Functions 
      bool hasHyperNodes() const { return this->hyperNodes_ != nullptr;};
      void deleteHyperNodes() { this->hyperNodes_ = nullptr;};
      inline const vector<NodeGroups::HyperNodes> & getHyperNodes() const { DARABONBA_PTR_GET_CONST(hyperNodes_, vector<NodeGroups::HyperNodes>) };
      inline vector<NodeGroups::HyperNodes> getHyperNodes() { DARABONBA_PTR_GET(hyperNodes_, vector<NodeGroups::HyperNodes>) };
      inline NodeGroups& setHyperNodes(const vector<NodeGroups::HyperNodes> & hyperNodes) { DARABONBA_PTR_SET_VALUE(hyperNodes_, hyperNodes) };
      inline NodeGroups& setHyperNodes(vector<NodeGroups::HyperNodes> && hyperNodes) { DARABONBA_PTR_SET_RVALUE(hyperNodes_, hyperNodes) };


      // nodeGroupId Field Functions 
      bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
      void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
      inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
      inline NodeGroups& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<NodeGroups::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<NodeGroups::Nodes>) };
      inline vector<NodeGroups::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<NodeGroups::Nodes>) };
      inline NodeGroups& setNodes(const vector<NodeGroups::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline NodeGroups& setNodes(vector<NodeGroups::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    protected:
      shared_ptr<vector<NodeGroups::HyperNodes>> hyperNodes_ {};
      // The node group ID.
      shared_ptr<string> nodeGroupId_ {};
      // The nodes.
      shared_ptr<vector<NodeGroups::Nodes>> nodes_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->ignoreFailedNodeTasks_ == nullptr && this->nodeGroups_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ShrinkClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ignoreFailedNodeTasks Field Functions 
    bool hasIgnoreFailedNodeTasks() const { return this->ignoreFailedNodeTasks_ != nullptr;};
    void deleteIgnoreFailedNodeTasks() { this->ignoreFailedNodeTasks_ = nullptr;};
    inline bool getIgnoreFailedNodeTasks() const { DARABONBA_PTR_GET_DEFAULT(ignoreFailedNodeTasks_, false) };
    inline ShrinkClusterRequest& setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) { DARABONBA_PTR_SET_VALUE(ignoreFailedNodeTasks_, ignoreFailedNodeTasks) };


    // nodeGroups Field Functions 
    bool hasNodeGroups() const { return this->nodeGroups_ != nullptr;};
    void deleteNodeGroups() { this->nodeGroups_ = nullptr;};
    inline const vector<ShrinkClusterRequest::NodeGroups> & getNodeGroups() const { DARABONBA_PTR_GET_CONST(nodeGroups_, vector<ShrinkClusterRequest::NodeGroups>) };
    inline vector<ShrinkClusterRequest::NodeGroups> getNodeGroups() { DARABONBA_PTR_GET(nodeGroups_, vector<ShrinkClusterRequest::NodeGroups>) };
    inline ShrinkClusterRequest& setNodeGroups(const vector<ShrinkClusterRequest::NodeGroups> & nodeGroups) { DARABONBA_PTR_SET_VALUE(nodeGroups_, nodeGroups) };
    inline ShrinkClusterRequest& setNodeGroups(vector<ShrinkClusterRequest::NodeGroups> && nodeGroups) { DARABONBA_PTR_SET_RVALUE(nodeGroups_, nodeGroups) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // Specifies whether to allow skipping failed nodes. Default value: False.
    shared_ptr<bool> ignoreFailedNodeTasks_ {};
    // The node groups.
    shared_ptr<vector<ShrinkClusterRequest::NodeGroups>> nodeGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
