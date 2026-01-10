// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKFLOWRELATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKFLOWRELATIONSREQUEST_HPP_
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
  class UpdateTaskFlowRelationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskFlowRelationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Edges, edges_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskFlowRelationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Edges, edges_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateTaskFlowRelationsRequest() = default ;
    UpdateTaskFlowRelationsRequest(const UpdateTaskFlowRelationsRequest &) = default ;
    UpdateTaskFlowRelationsRequest(UpdateTaskFlowRelationsRequest &&) = default ;
    UpdateTaskFlowRelationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskFlowRelationsRequest() = default ;
    UpdateTaskFlowRelationsRequest& operator=(const UpdateTaskFlowRelationsRequest &) = default ;
    UpdateTaskFlowRelationsRequest& operator=(UpdateTaskFlowRelationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Edges : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Edges& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(NodeEnd, nodeEnd_);
        DARABONBA_PTR_TO_JSON(NodeFrom, nodeFrom_);
      };
      friend void from_json(const Darabonba::Json& j, Edges& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(NodeEnd, nodeEnd_);
        DARABONBA_PTR_FROM_JSON(NodeFrom, nodeFrom_);
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
      virtual bool empty() const override { return this->id_ == nullptr
        && this->nodeEnd_ == nullptr && this->nodeFrom_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Edges& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // nodeEnd Field Functions 
      bool hasNodeEnd() const { return this->nodeEnd_ != nullptr;};
      void deleteNodeEnd() { this->nodeEnd_ = nullptr;};
      inline int64_t getNodeEnd() const { DARABONBA_PTR_GET_DEFAULT(nodeEnd_, 0L) };
      inline Edges& setNodeEnd(int64_t nodeEnd) { DARABONBA_PTR_SET_VALUE(nodeEnd_, nodeEnd) };


      // nodeFrom Field Functions 
      bool hasNodeFrom() const { return this->nodeFrom_ != nullptr;};
      void deleteNodeFrom() { this->nodeFrom_ = nullptr;};
      inline int64_t getNodeFrom() const { DARABONBA_PTR_GET_DEFAULT(nodeFrom_, 0L) };
      inline Edges& setNodeFrom(int64_t nodeFrom) { DARABONBA_PTR_SET_VALUE(nodeFrom_, nodeFrom) };


    protected:
      // The ID of the task flow edge.
      shared_ptr<int64_t> id_ {};
      // The ID of the end node on the edge.
      shared_ptr<int64_t> nodeEnd_ {};
      // The ID of the start node on the edge.
      shared_ptr<int64_t> nodeFrom_ {};
    };

    virtual bool empty() const override { return this->dagId_ == nullptr
        && this->edges_ == nullptr && this->tid_ == nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateTaskFlowRelationsRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // edges Field Functions 
    bool hasEdges() const { return this->edges_ != nullptr;};
    void deleteEdges() { this->edges_ = nullptr;};
    inline const vector<UpdateTaskFlowRelationsRequest::Edges> & getEdges() const { DARABONBA_PTR_GET_CONST(edges_, vector<UpdateTaskFlowRelationsRequest::Edges>) };
    inline vector<UpdateTaskFlowRelationsRequest::Edges> getEdges() { DARABONBA_PTR_GET(edges_, vector<UpdateTaskFlowRelationsRequest::Edges>) };
    inline UpdateTaskFlowRelationsRequest& setEdges(const vector<UpdateTaskFlowRelationsRequest::Edges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
    inline UpdateTaskFlowRelationsRequest& setEdges(vector<UpdateTaskFlowRelationsRequest::Edges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskFlowRelationsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dagId_ {};
    // The list of task flow edges to be updated.
    shared_ptr<vector<UpdateTaskFlowRelationsRequest::Edges>> edges_ {};
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
