// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWEDGESBYCONDITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWEDGESBYCONDITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowEdgesByConditionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowEdgesByConditionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Edges, edges_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowEdgesByConditionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Edges, edges_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTaskFlowEdgesByConditionResponseBody() = default ;
    ListTaskFlowEdgesByConditionResponseBody(const ListTaskFlowEdgesByConditionResponseBody &) = default ;
    ListTaskFlowEdgesByConditionResponseBody(ListTaskFlowEdgesByConditionResponseBody &&) = default ;
    ListTaskFlowEdgesByConditionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowEdgesByConditionResponseBody() = default ;
    ListTaskFlowEdgesByConditionResponseBody& operator=(const ListTaskFlowEdgesByConditionResponseBody &) = default ;
    ListTaskFlowEdgesByConditionResponseBody& operator=(ListTaskFlowEdgesByConditionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Edges : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Edges& obj) { 
        DARABONBA_PTR_TO_JSON(Edge, edge_);
      };
      friend void from_json(const Darabonba::Json& j, Edges& obj) { 
        DARABONBA_PTR_FROM_JSON(Edge, edge_);
      };
      Edges() = default ;
      Edges(const Edges &) = default ;
      Edges(Edges &&) = default ;
      Edges(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Edges() = default ;
      Edges& operator=(const Edges &) = default ;
      Edges& operator=(Edges &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Edge : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Edge& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(NodeEnd, nodeEnd_);
          DARABONBA_PTR_TO_JSON(NodeFrom, nodeFrom_);
        };
        friend void from_json(const Darabonba::Json& j, Edge& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(NodeEnd, nodeEnd_);
          DARABONBA_PTR_FROM_JSON(NodeFrom, nodeFrom_);
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
        virtual bool empty() const override { return this->id_ == nullptr
        && this->nodeEnd_ == nullptr && this->nodeFrom_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Edge& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // nodeEnd Field Functions 
        bool hasNodeEnd() const { return this->nodeEnd_ != nullptr;};
        void deleteNodeEnd() { this->nodeEnd_ = nullptr;};
        inline int64_t getNodeEnd() const { DARABONBA_PTR_GET_DEFAULT(nodeEnd_, 0L) };
        inline Edge& setNodeEnd(int64_t nodeEnd) { DARABONBA_PTR_SET_VALUE(nodeEnd_, nodeEnd) };


        // nodeFrom Field Functions 
        bool hasNodeFrom() const { return this->nodeFrom_ != nullptr;};
        void deleteNodeFrom() { this->nodeFrom_ = nullptr;};
        inline int64_t getNodeFrom() const { DARABONBA_PTR_GET_DEFAULT(nodeFrom_, 0L) };
        inline Edge& setNodeFrom(int64_t nodeFrom) { DARABONBA_PTR_SET_VALUE(nodeFrom_, nodeFrom) };


      protected:
        // The ID of the task flow edge.
        shared_ptr<int64_t> id_ {};
        // The ID of the end node on the edge.
        shared_ptr<int64_t> nodeEnd_ {};
        // The ID of the start node on the edge.
        shared_ptr<int64_t> nodeFrom_ {};
      };

      virtual bool empty() const override { return this->edge_ == nullptr; };
      // edge Field Functions 
      bool hasEdge() const { return this->edge_ != nullptr;};
      void deleteEdge() { this->edge_ = nullptr;};
      inline const vector<Edges::Edge> & getEdge() const { DARABONBA_PTR_GET_CONST(edge_, vector<Edges::Edge>) };
      inline vector<Edges::Edge> getEdge() { DARABONBA_PTR_GET(edge_, vector<Edges::Edge>) };
      inline Edges& setEdge(const vector<Edges::Edge> & edge) { DARABONBA_PTR_SET_VALUE(edge_, edge) };
      inline Edges& setEdge(vector<Edges::Edge> && edge) { DARABONBA_PTR_SET_RVALUE(edge_, edge) };


    protected:
      shared_ptr<vector<Edges::Edge>> edge_ {};
    };

    virtual bool empty() const override { return this->edges_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // edges Field Functions 
    bool hasEdges() const { return this->edges_ != nullptr;};
    void deleteEdges() { this->edges_ = nullptr;};
    inline const ListTaskFlowEdgesByConditionResponseBody::Edges & getEdges() const { DARABONBA_PTR_GET_CONST(edges_, ListTaskFlowEdgesByConditionResponseBody::Edges) };
    inline ListTaskFlowEdgesByConditionResponseBody::Edges getEdges() { DARABONBA_PTR_GET(edges_, ListTaskFlowEdgesByConditionResponseBody::Edges) };
    inline ListTaskFlowEdgesByConditionResponseBody& setEdges(const ListTaskFlowEdgesByConditionResponseBody::Edges & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
    inline ListTaskFlowEdgesByConditionResponseBody& setEdges(ListTaskFlowEdgesByConditionResponseBody::Edges && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTaskFlowEdgesByConditionResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTaskFlowEdgesByConditionResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskFlowEdgesByConditionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskFlowEdgesByConditionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of task flow edges.
    shared_ptr<ListTaskFlowEdgesByConditionResponseBody::Edges> edges_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request. You can use the ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
