// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
namespace Models
{
  class GetFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Flow, flow_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Flow, flow_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFlowResponseBody() = default ;
    GetFlowResponseBody(const GetFlowResponseBody &) = default ;
    GetFlowResponseBody(GetFlowResponseBody &&) = default ;
    GetFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlowResponseBody() = default ;
    GetFlowResponseBody& operator=(const GetFlowResponseBody &) = default ;
    GetFlowResponseBody& operator=(GetFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Flow : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Flow& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(FlowDesc, flowDesc_);
        DARABONBA_PTR_TO_JSON(FlowId, flowId_);
        DARABONBA_PTR_TO_JSON(FlowName, flowName_);
        DARABONBA_PTR_TO_JSON(FlowNodes, flowNodes_);
        DARABONBA_PTR_TO_JSON(FlowTemplate, flowTemplate_);
        DARABONBA_PTR_TO_JSON(FlowVersion, flowVersion_);
        DARABONBA_PTR_TO_JSON(FlowVersionStatus, flowVersionStatus_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Flow& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(FlowDesc, flowDesc_);
        DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
        DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
        DARABONBA_PTR_FROM_JSON(FlowNodes, flowNodes_);
        DARABONBA_PTR_FROM_JSON(FlowTemplate, flowTemplate_);
        DARABONBA_PTR_FROM_JSON(FlowVersion, flowVersion_);
        DARABONBA_PTR_FROM_JSON(FlowVersionStatus, flowVersionStatus_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      Flow() = default ;
      Flow(const Flow &) = default ;
      Flow(Flow &&) = default ;
      Flow(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Flow() = default ;
      Flow& operator=(const Flow &) = default ;
      Flow& operator=(Flow &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class FlowNodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlowNodes& obj) { 
          DARABONBA_PTR_TO_JSON(AuthMetadata, authMetadata_);
          DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
          DARABONBA_PTR_TO_JSON(ConnectorVersion, connectorVersion_);
          DARABONBA_PTR_TO_JSON(FlowId, flowId_);
          DARABONBA_PTR_TO_JSON(FlowVersion, flowVersion_);
          DARABONBA_PTR_TO_JSON(InputSchema, inputSchema_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeKey, nodeKey_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(PrevNodeId, prevNodeId_);
          DARABONBA_PTR_TO_JSON(RefId, refId_);
          DARABONBA_PTR_TO_JSON(RefVersion, refVersion_);
          DARABONBA_PTR_TO_JSON(WebhookUrl, webhookUrl_);
        };
        friend void from_json(const Darabonba::Json& j, FlowNodes& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthMetadata, authMetadata_);
          DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
          DARABONBA_PTR_FROM_JSON(ConnectorVersion, connectorVersion_);
          DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
          DARABONBA_PTR_FROM_JSON(FlowVersion, flowVersion_);
          DARABONBA_PTR_FROM_JSON(InputSchema, inputSchema_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeKey, nodeKey_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(PrevNodeId, prevNodeId_);
          DARABONBA_PTR_FROM_JSON(RefId, refId_);
          DARABONBA_PTR_FROM_JSON(RefVersion, refVersion_);
          DARABONBA_PTR_FROM_JSON(WebhookUrl, webhookUrl_);
        };
        FlowNodes() = default ;
        FlowNodes(const FlowNodes &) = default ;
        FlowNodes(FlowNodes &&) = default ;
        FlowNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlowNodes() = default ;
        FlowNodes& operator=(const FlowNodes &) = default ;
        FlowNodes& operator=(FlowNodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authMetadata_ == nullptr
        && this->connectorId_ == nullptr && this->connectorVersion_ == nullptr && this->flowId_ == nullptr && this->flowVersion_ == nullptr && this->inputSchema_ == nullptr
        && this->nodeId_ == nullptr && this->nodeKey_ == nullptr && this->nodeName_ == nullptr && this->nodeType_ == nullptr && this->prevNodeId_ == nullptr
        && this->refId_ == nullptr && this->refVersion_ == nullptr && this->webhookUrl_ == nullptr; };
        // authMetadata Field Functions 
        bool hasAuthMetadata() const { return this->authMetadata_ != nullptr;};
        void deleteAuthMetadata() { this->authMetadata_ = nullptr;};
        inline string getAuthMetadata() const { DARABONBA_PTR_GET_DEFAULT(authMetadata_, "") };
        inline FlowNodes& setAuthMetadata(string authMetadata) { DARABONBA_PTR_SET_VALUE(authMetadata_, authMetadata) };


        // connectorId Field Functions 
        bool hasConnectorId() const { return this->connectorId_ != nullptr;};
        void deleteConnectorId() { this->connectorId_ = nullptr;};
        inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
        inline FlowNodes& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


        // connectorVersion Field Functions 
        bool hasConnectorVersion() const { return this->connectorVersion_ != nullptr;};
        void deleteConnectorVersion() { this->connectorVersion_ = nullptr;};
        inline string getConnectorVersion() const { DARABONBA_PTR_GET_DEFAULT(connectorVersion_, "") };
        inline FlowNodes& setConnectorVersion(string connectorVersion) { DARABONBA_PTR_SET_VALUE(connectorVersion_, connectorVersion) };


        // flowId Field Functions 
        bool hasFlowId() const { return this->flowId_ != nullptr;};
        void deleteFlowId() { this->flowId_ = nullptr;};
        inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
        inline FlowNodes& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


        // flowVersion Field Functions 
        bool hasFlowVersion() const { return this->flowVersion_ != nullptr;};
        void deleteFlowVersion() { this->flowVersion_ = nullptr;};
        inline string getFlowVersion() const { DARABONBA_PTR_GET_DEFAULT(flowVersion_, "") };
        inline FlowNodes& setFlowVersion(string flowVersion) { DARABONBA_PTR_SET_VALUE(flowVersion_, flowVersion) };


        // inputSchema Field Functions 
        bool hasInputSchema() const { return this->inputSchema_ != nullptr;};
        void deleteInputSchema() { this->inputSchema_ = nullptr;};
        inline string getInputSchema() const { DARABONBA_PTR_GET_DEFAULT(inputSchema_, "") };
        inline FlowNodes& setInputSchema(string inputSchema) { DARABONBA_PTR_SET_VALUE(inputSchema_, inputSchema) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline FlowNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeKey Field Functions 
        bool hasNodeKey() const { return this->nodeKey_ != nullptr;};
        void deleteNodeKey() { this->nodeKey_ = nullptr;};
        inline string getNodeKey() const { DARABONBA_PTR_GET_DEFAULT(nodeKey_, "") };
        inline FlowNodes& setNodeKey(string nodeKey) { DARABONBA_PTR_SET_VALUE(nodeKey_, nodeKey) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline FlowNodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline FlowNodes& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // prevNodeId Field Functions 
        bool hasPrevNodeId() const { return this->prevNodeId_ != nullptr;};
        void deletePrevNodeId() { this->prevNodeId_ = nullptr;};
        inline string getPrevNodeId() const { DARABONBA_PTR_GET_DEFAULT(prevNodeId_, "") };
        inline FlowNodes& setPrevNodeId(string prevNodeId) { DARABONBA_PTR_SET_VALUE(prevNodeId_, prevNodeId) };


        // refId Field Functions 
        bool hasRefId() const { return this->refId_ != nullptr;};
        void deleteRefId() { this->refId_ = nullptr;};
        inline string getRefId() const { DARABONBA_PTR_GET_DEFAULT(refId_, "") };
        inline FlowNodes& setRefId(string refId) { DARABONBA_PTR_SET_VALUE(refId_, refId) };


        // refVersion Field Functions 
        bool hasRefVersion() const { return this->refVersion_ != nullptr;};
        void deleteRefVersion() { this->refVersion_ = nullptr;};
        inline string getRefVersion() const { DARABONBA_PTR_GET_DEFAULT(refVersion_, "") };
        inline FlowNodes& setRefVersion(string refVersion) { DARABONBA_PTR_SET_VALUE(refVersion_, refVersion) };


        // webhookUrl Field Functions 
        bool hasWebhookUrl() const { return this->webhookUrl_ != nullptr;};
        void deleteWebhookUrl() { this->webhookUrl_ = nullptr;};
        inline string getWebhookUrl() const { DARABONBA_PTR_GET_DEFAULT(webhookUrl_, "") };
        inline FlowNodes& setWebhookUrl(string webhookUrl) { DARABONBA_PTR_SET_VALUE(webhookUrl_, webhookUrl) };


      protected:
        shared_ptr<string> authMetadata_ {};
        shared_ptr<string> connectorId_ {};
        shared_ptr<string> connectorVersion_ {};
        shared_ptr<string> flowId_ {};
        shared_ptr<string> flowVersion_ {};
        shared_ptr<string> inputSchema_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> nodeKey_ {};
        shared_ptr<string> nodeName_ {};
        shared_ptr<string> nodeType_ {};
        shared_ptr<string> prevNodeId_ {};
        shared_ptr<string> refId_ {};
        shared_ptr<string> refVersion_ {};
        shared_ptr<string> webhookUrl_ {};
      };

      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->flowDesc_ == nullptr && this->flowId_ == nullptr && this->flowName_ == nullptr && this->flowNodes_ == nullptr && this->flowTemplate_ == nullptr
        && this->flowVersion_ == nullptr && this->flowVersionStatus_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->tags_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline string getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
      inline Flow& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // flowDesc Field Functions 
      bool hasFlowDesc() const { return this->flowDesc_ != nullptr;};
      void deleteFlowDesc() { this->flowDesc_ = nullptr;};
      inline string getFlowDesc() const { DARABONBA_PTR_GET_DEFAULT(flowDesc_, "") };
      inline Flow& setFlowDesc(string flowDesc) { DARABONBA_PTR_SET_VALUE(flowDesc_, flowDesc) };


      // flowId Field Functions 
      bool hasFlowId() const { return this->flowId_ != nullptr;};
      void deleteFlowId() { this->flowId_ = nullptr;};
      inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
      inline Flow& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


      // flowName Field Functions 
      bool hasFlowName() const { return this->flowName_ != nullptr;};
      void deleteFlowName() { this->flowName_ = nullptr;};
      inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
      inline Flow& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


      // flowNodes Field Functions 
      bool hasFlowNodes() const { return this->flowNodes_ != nullptr;};
      void deleteFlowNodes() { this->flowNodes_ = nullptr;};
      inline const vector<Flow::FlowNodes> & getFlowNodes() const { DARABONBA_PTR_GET_CONST(flowNodes_, vector<Flow::FlowNodes>) };
      inline vector<Flow::FlowNodes> getFlowNodes() { DARABONBA_PTR_GET(flowNodes_, vector<Flow::FlowNodes>) };
      inline Flow& setFlowNodes(const vector<Flow::FlowNodes> & flowNodes) { DARABONBA_PTR_SET_VALUE(flowNodes_, flowNodes) };
      inline Flow& setFlowNodes(vector<Flow::FlowNodes> && flowNodes) { DARABONBA_PTR_SET_RVALUE(flowNodes_, flowNodes) };


      // flowTemplate Field Functions 
      bool hasFlowTemplate() const { return this->flowTemplate_ != nullptr;};
      void deleteFlowTemplate() { this->flowTemplate_ = nullptr;};
      inline string getFlowTemplate() const { DARABONBA_PTR_GET_DEFAULT(flowTemplate_, "") };
      inline Flow& setFlowTemplate(string flowTemplate) { DARABONBA_PTR_SET_VALUE(flowTemplate_, flowTemplate) };


      // flowVersion Field Functions 
      bool hasFlowVersion() const { return this->flowVersion_ != nullptr;};
      void deleteFlowVersion() { this->flowVersion_ = nullptr;};
      inline string getFlowVersion() const { DARABONBA_PTR_GET_DEFAULT(flowVersion_, "") };
      inline Flow& setFlowVersion(string flowVersion) { DARABONBA_PTR_SET_VALUE(flowVersion_, flowVersion) };


      // flowVersionStatus Field Functions 
      bool hasFlowVersionStatus() const { return this->flowVersionStatus_ != nullptr;};
      void deleteFlowVersionStatus() { this->flowVersionStatus_ = nullptr;};
      inline string getFlowVersionStatus() const { DARABONBA_PTR_GET_DEFAULT(flowVersionStatus_, "") };
      inline Flow& setFlowVersionStatus(string flowVersionStatus) { DARABONBA_PTR_SET_VALUE(flowVersionStatus_, flowVersionStatus) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Flow& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Flow& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Flow::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Flow::Tags>) };
      inline vector<Flow::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Flow::Tags>) };
      inline Flow& setTags(const vector<Flow::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Flow& setTags(vector<Flow::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<string> enabled_ {};
      shared_ptr<string> flowDesc_ {};
      shared_ptr<string> flowId_ {};
      shared_ptr<string> flowName_ {};
      shared_ptr<vector<Flow::FlowNodes>> flowNodes_ {};
      shared_ptr<string> flowTemplate_ {};
      shared_ptr<string> flowVersion_ {};
      shared_ptr<string> flowVersionStatus_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<vector<Flow::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->flow_ == nullptr
        && this->requestId_ == nullptr; };
    // flow Field Functions 
    bool hasFlow() const { return this->flow_ != nullptr;};
    void deleteFlow() { this->flow_ = nullptr;};
    inline const GetFlowResponseBody::Flow & getFlow() const { DARABONBA_PTR_GET_CONST(flow_, GetFlowResponseBody::Flow) };
    inline GetFlowResponseBody::Flow getFlow() { DARABONBA_PTR_GET(flow_, GetFlowResponseBody::Flow) };
    inline GetFlowResponseBody& setFlow(const GetFlowResponseBody::Flow & flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };
    inline GetFlowResponseBody& setFlow(GetFlowResponseBody::Flow && flow) { DARABONBA_PTR_SET_RVALUE(flow_, flow) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetFlowResponseBody::Flow> flow_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
