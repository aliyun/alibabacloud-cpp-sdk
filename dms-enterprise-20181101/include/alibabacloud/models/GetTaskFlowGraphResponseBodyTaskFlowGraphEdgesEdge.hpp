// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKFLOWGRAPHRESPONSEBODYTASKFLOWGRAPHEDGESEDGE_HPP_
#define ALIBABACLOUD_MODELS_GETTASKFLOWGRAPHRESPONSEBODYTASKFLOWGRAPHEDGESEDGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NodeEnd, nodeEnd_);
      DARABONBA_PTR_TO_JSON(NodeFrom, nodeFrom_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NodeEnd, nodeEnd_);
      DARABONBA_PTR_FROM_JSON(NodeFrom, nodeFrom_);
    };
    GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge() = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge(const GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge &) = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge(GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge &&) = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge() = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge& operator=(const GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge &) = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge& operator=(GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagId_ != nullptr
        && this->id_ != nullptr && this->nodeEnd_ != nullptr && this->nodeFrom_ != nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // nodeEnd Field Functions 
    bool hasNodeEnd() const { return this->nodeEnd_ != nullptr;};
    void deleteNodeEnd() { this->nodeEnd_ = nullptr;};
    inline int64_t nodeEnd() const { DARABONBA_PTR_GET_DEFAULT(nodeEnd_, 0L) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge& setNodeEnd(int64_t nodeEnd) { DARABONBA_PTR_SET_VALUE(nodeEnd_, nodeEnd) };


    // nodeFrom Field Functions 
    bool hasNodeFrom() const { return this->nodeFrom_ != nullptr;};
    void deleteNodeFrom() { this->nodeFrom_ = nullptr;};
    inline int64_t nodeFrom() const { DARABONBA_PTR_GET_DEFAULT(nodeFrom_, 0L) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge& setNodeFrom(int64_t nodeFrom) { DARABONBA_PTR_SET_VALUE(nodeFrom_, nodeFrom) };


  protected:
    // The ID of the task flow.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The ID of the task flow edge.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the end node on the edge.
    std::shared_ptr<int64_t> nodeEnd_ = nullptr;
    // The ID of the start node on the edge.
    std::shared_ptr<int64_t> nodeFrom_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
