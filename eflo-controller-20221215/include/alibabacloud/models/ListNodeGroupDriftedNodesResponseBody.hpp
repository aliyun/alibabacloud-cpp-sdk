// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEGROUPDRIFTEDNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEGROUPDRIFTEDNODESRESPONSEBODY_HPP_
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
  class ListNodeGroupDriftedNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeGroupDriftedNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeGroupDriftedNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNodeGroupDriftedNodesResponseBody() = default ;
    ListNodeGroupDriftedNodesResponseBody(const ListNodeGroupDriftedNodesResponseBody &) = default ;
    ListNodeGroupDriftedNodesResponseBody(ListNodeGroupDriftedNodesResponseBody &&) = default ;
    ListNodeGroupDriftedNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeGroupDriftedNodesResponseBody() = default ;
    ListNodeGroupDriftedNodesResponseBody& operator=(const ListNodeGroupDriftedNodesResponseBody &) = default ;
    ListNodeGroupDriftedNodesResponseBody& operator=(ListNodeGroupDriftedNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Nodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(PropertyDrifts, propertyDrifts_);
      };
      friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(PropertyDrifts, propertyDrifts_);
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
      class PropertyDrifts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PropertyDrifts& obj) { 
          DARABONBA_PTR_TO_JSON(ActualValue, actualValue_);
          DARABONBA_PTR_TO_JSON(MinRequiredAction, minRequiredAction_);
          DARABONBA_PTR_TO_JSON(PropertyPath, propertyPath_);
          DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
        };
        friend void from_json(const Darabonba::Json& j, PropertyDrifts& obj) { 
          DARABONBA_PTR_FROM_JSON(ActualValue, actualValue_);
          DARABONBA_PTR_FROM_JSON(MinRequiredAction, minRequiredAction_);
          DARABONBA_PTR_FROM_JSON(PropertyPath, propertyPath_);
          DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
        };
        PropertyDrifts() = default ;
        PropertyDrifts(const PropertyDrifts &) = default ;
        PropertyDrifts(PropertyDrifts &&) = default ;
        PropertyDrifts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PropertyDrifts() = default ;
        PropertyDrifts& operator=(const PropertyDrifts &) = default ;
        PropertyDrifts& operator=(PropertyDrifts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actualValue_ == nullptr
        && this->minRequiredAction_ == nullptr && this->propertyPath_ == nullptr && this->targetValue_ == nullptr; };
        // actualValue Field Functions 
        bool hasActualValue() const { return this->actualValue_ != nullptr;};
        void deleteActualValue() { this->actualValue_ = nullptr;};
        inline string getActualValue() const { DARABONBA_PTR_GET_DEFAULT(actualValue_, "") };
        inline PropertyDrifts& setActualValue(string actualValue) { DARABONBA_PTR_SET_VALUE(actualValue_, actualValue) };


        // minRequiredAction Field Functions 
        bool hasMinRequiredAction() const { return this->minRequiredAction_ != nullptr;};
        void deleteMinRequiredAction() { this->minRequiredAction_ = nullptr;};
        inline string getMinRequiredAction() const { DARABONBA_PTR_GET_DEFAULT(minRequiredAction_, "") };
        inline PropertyDrifts& setMinRequiredAction(string minRequiredAction) { DARABONBA_PTR_SET_VALUE(minRequiredAction_, minRequiredAction) };


        // propertyPath Field Functions 
        bool hasPropertyPath() const { return this->propertyPath_ != nullptr;};
        void deletePropertyPath() { this->propertyPath_ = nullptr;};
        inline string getPropertyPath() const { DARABONBA_PTR_GET_DEFAULT(propertyPath_, "") };
        inline PropertyDrifts& setPropertyPath(string propertyPath) { DARABONBA_PTR_SET_VALUE(propertyPath_, propertyPath) };


        // targetValue Field Functions 
        bool hasTargetValue() const { return this->targetValue_ != nullptr;};
        void deleteTargetValue() { this->targetValue_ = nullptr;};
        inline string getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
        inline PropertyDrifts& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


      protected:
        // The current value of the node property. Complex types are serialized as JSON strings.
        shared_ptr<string> actualValue_ {};
        // The minimum action required to apply the TargetValue: Refresh / Reboot / Reimage. For more information, refer to the MaxDisruptiveAction parameter description in the RefreshNodeGroupNodes operation.
        shared_ptr<string> minRequiredAction_ {};
        // The property path in dot notation (such as a.b.c), compatible with both flat and nested properties.
        shared_ptr<string> propertyPath_ {};
        // The target value of the node property. Complex types are serialized as JSON strings.
        shared_ptr<string> targetValue_ {};
      };

      virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->propertyDrifts_ == nullptr; };
      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Nodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // propertyDrifts Field Functions 
      bool hasPropertyDrifts() const { return this->propertyDrifts_ != nullptr;};
      void deletePropertyDrifts() { this->propertyDrifts_ = nullptr;};
      inline const vector<Nodes::PropertyDrifts> & getPropertyDrifts() const { DARABONBA_PTR_GET_CONST(propertyDrifts_, vector<Nodes::PropertyDrifts>) };
      inline vector<Nodes::PropertyDrifts> getPropertyDrifts() { DARABONBA_PTR_GET(propertyDrifts_, vector<Nodes::PropertyDrifts>) };
      inline Nodes& setPropertyDrifts(const vector<Nodes::PropertyDrifts> & propertyDrifts) { DARABONBA_PTR_SET_VALUE(propertyDrifts_, propertyDrifts) };
      inline Nodes& setPropertyDrifts(vector<Nodes::PropertyDrifts> && propertyDrifts) { DARABONBA_PTR_SET_RVALUE(propertyDrifts_, propertyDrifts) };


    protected:
      // The ID of the node.
      shared_ptr<string> nodeId_ {};
      // The list of inconsistent properties for this node.
      shared_ptr<vector<Nodes::PropertyDrifts>> propertyDrifts_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->nodes_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodeGroupDriftedNodesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodeGroupDriftedNodesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<ListNodeGroupDriftedNodesResponseBody::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<ListNodeGroupDriftedNodesResponseBody::Nodes>) };
    inline vector<ListNodeGroupDriftedNodesResponseBody::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<ListNodeGroupDriftedNodesResponseBody::Nodes>) };
    inline ListNodeGroupDriftedNodesResponseBody& setNodes(const vector<ListNodeGroupDriftedNodesResponseBody::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ListNodeGroupDriftedNodesResponseBody& setNodes(vector<ListNodeGroupDriftedNodesResponseBody::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodeGroupDriftedNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The maximum number of entries per page for a single query.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token returned by this call. An empty value indicates that no more pages are available.
    shared_ptr<string> nextToken_ {};
    // The list of nodes that are inconsistent with the node group configuration (paginated).
    shared_ptr<vector<ListNodeGroupDriftedNodesResponseBody::Nodes>> nodes_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
