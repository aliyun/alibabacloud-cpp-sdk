// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEPOOLCOMPONENTINSTANCENODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEPOOLCOMPONENTINSTANCENODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListNodePoolComponentInstanceNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodePoolComponentInstanceNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(max_results, maxResults_);
      DARABONBA_PTR_TO_JSON(next_token, nextToken_);
      DARABONBA_PTR_TO_JSON(node_list, nodeList_);
      DARABONBA_PTR_TO_JSON(total_count, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodePoolComponentInstanceNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(max_results, maxResults_);
      DARABONBA_PTR_FROM_JSON(next_token, nextToken_);
      DARABONBA_PTR_FROM_JSON(node_list, nodeList_);
      DARABONBA_PTR_FROM_JSON(total_count, totalCount_);
    };
    ListNodePoolComponentInstanceNodesResponseBody() = default ;
    ListNodePoolComponentInstanceNodesResponseBody(const ListNodePoolComponentInstanceNodesResponseBody &) = default ;
    ListNodePoolComponentInstanceNodesResponseBody(ListNodePoolComponentInstanceNodesResponseBody &&) = default ;
    ListNodePoolComponentInstanceNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodePoolComponentInstanceNodesResponseBody() = default ;
    ListNodePoolComponentInstanceNodesResponseBody& operator=(const ListNodePoolComponentInstanceNodesResponseBody &) = default ;
    ListNodePoolComponentInstanceNodesResponseBody& operator=(ListNodePoolComponentInstanceNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeList& obj) { 
        DARABONBA_PTR_TO_JSON(component, component_);
        DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
        DARABONBA_PTR_TO_JSON(node_name, nodeName_);
      };
      friend void from_json(const Darabonba::Json& j, NodeList& obj) { 
        DARABONBA_PTR_FROM_JSON(component, component_);
        DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
        DARABONBA_PTR_FROM_JSON(node_name, nodeName_);
      };
      NodeList() = default ;
      NodeList(const NodeList &) = default ;
      NodeList(NodeList &&) = default ;
      NodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeList() = default ;
      NodeList& operator=(const NodeList &) = default ;
      NodeList& operator=(NodeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Component : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Component& obj) { 
          DARABONBA_PTR_TO_JSON(config, config_);
          DARABONBA_PTR_TO_JSON(config_revision, configRevision_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Component& obj) { 
          DARABONBA_PTR_FROM_JSON(config, config_);
          DARABONBA_PTR_FROM_JSON(config_revision, configRevision_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        Component() = default ;
        Component(const Component &) = default ;
        Component(Component &&) = default ;
        Component(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Component() = default ;
        Component& operator=(const Component &) = default ;
        Component& operator=(Component &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Config : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Config& obj) { 
            DARABONBA_ANY_TO_JSON(custom_config, customConfig_);
          };
          friend void from_json(const Darabonba::Json& j, Config& obj) { 
            DARABONBA_ANY_FROM_JSON(custom_config, customConfig_);
          };
          Config() = default ;
          Config(const Config &) = default ;
          Config(Config &&) = default ;
          Config(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Config() = default ;
          Config& operator=(const Config &) = default ;
          Config& operator=(Config &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->customConfig_ == nullptr; };
          // customConfig Field Functions 
          bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
          void deleteCustomConfig() { this->customConfig_ = nullptr;};
          inline           const Darabonba::Json & getCustomConfig() const { DARABONBA_GET(customConfig_) };
          Darabonba::Json & getCustomConfig() { DARABONBA_GET(customConfig_) };
          inline Config& setCustomConfig(const Darabonba::Json & customConfig) { DARABONBA_SET_VALUE(customConfig_, customConfig) };
          inline Config& setCustomConfig(Darabonba::Json && customConfig) { DARABONBA_SET_RVALUE(customConfig_, customConfig) };


        protected:
          // The custom configuration of the node component.
          Darabonba::Json customConfig_ {};
        };

        virtual bool empty() const override { return this->config_ == nullptr
        && this->configRevision_ == nullptr && this->name_ == nullptr && this->version_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline const Component::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Component::Config) };
        inline Component::Config getConfig() { DARABONBA_PTR_GET(config_, Component::Config) };
        inline Component& setConfig(const Component::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
        inline Component& setConfig(Component::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


        // configRevision Field Functions 
        bool hasConfigRevision() const { return this->configRevision_ != nullptr;};
        void deleteConfigRevision() { this->configRevision_ = nullptr;};
        inline string getConfigRevision() const { DARABONBA_PTR_GET_DEFAULT(configRevision_, "") };
        inline Component& setConfigRevision(string configRevision) { DARABONBA_PTR_SET_VALUE(configRevision_, configRevision) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Component& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Component& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The configuration of the node component.
        shared_ptr<Component::Config> config_ {};
        // The custom configuration version number of the component on the node.
        shared_ptr<string> configRevision_ {};
        // The name of the component on the node.
        shared_ptr<string> name_ {};
        // The version of the component on the node.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->component_ == nullptr
        && this->instanceId_ == nullptr && this->nodeName_ == nullptr; };
      // component Field Functions 
      bool hasComponent() const { return this->component_ != nullptr;};
      void deleteComponent() { this->component_ = nullptr;};
      inline const NodeList::Component & getComponent() const { DARABONBA_PTR_GET_CONST(component_, NodeList::Component) };
      inline NodeList::Component getComponent() { DARABONBA_PTR_GET(component_, NodeList::Component) };
      inline NodeList& setComponent(const NodeList::Component & component) { DARABONBA_PTR_SET_VALUE(component_, component) };
      inline NodeList& setComponent(NodeList::Component && component) { DARABONBA_PTR_SET_RVALUE(component_, component) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NodeList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline NodeList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    protected:
      // The details of the component on the node.
      shared_ptr<NodeList::Component> component_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The node name.
      shared_ptr<string> nodeName_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->nodeList_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodePoolComponentInstanceNodesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodePoolComponentInstanceNodesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeList Field Functions 
    bool hasNodeList() const { return this->nodeList_ != nullptr;};
    void deleteNodeList() { this->nodeList_ = nullptr;};
    inline const vector<ListNodePoolComponentInstanceNodesResponseBody::NodeList> & getNodeList() const { DARABONBA_PTR_GET_CONST(nodeList_, vector<ListNodePoolComponentInstanceNodesResponseBody::NodeList>) };
    inline vector<ListNodePoolComponentInstanceNodesResponseBody::NodeList> getNodeList() { DARABONBA_PTR_GET(nodeList_, vector<ListNodePoolComponentInstanceNodesResponseBody::NodeList>) };
    inline ListNodePoolComponentInstanceNodesResponseBody& setNodeList(const vector<ListNodePoolComponentInstanceNodesResponseBody::NodeList> & nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };
    inline ListNodePoolComponentInstanceNodesResponseBody& setNodeList(vector<ListNodePoolComponentInstanceNodesResponseBody::NodeList> && nodeList) { DARABONBA_PTR_SET_RVALUE(nodeList_, nodeList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNodePoolComponentInstanceNodesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of records returned in a single response for pagination.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination cursor. Do not specify this parameter for the first request. For subsequent requests, specify the token returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The list of nodes.
    shared_ptr<vector<ListNodePoolComponentInstanceNodesResponseBody::NodeList>> nodeList_ {};
    // The total number of nodes.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
