// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKFLOWGRAPHRESPONSEBODYTASKFLOWGRAPH_HPP_
#define ALIBABACLOUD_MODELS_GETTASKFLOWGRAPHRESPONSEBODYTASKFLOWGRAPH_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTaskFlowGraphResponseBodyTaskFlowGraphEdges.hpp>
#include <alibabacloud/models/GetTaskFlowGraphResponseBodyTaskFlowGraphNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTaskFlowGraphResponseBodyTaskFlowGraph : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskFlowGraphResponseBodyTaskFlowGraph& obj) { 
      DARABONBA_PTR_TO_JSON(CanEdit, canEdit_);
      DARABONBA_PTR_TO_JSON(DagName, dagName_);
      DARABONBA_PTR_TO_JSON(Edges, edges_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskFlowGraphResponseBodyTaskFlowGraph& obj) { 
      DARABONBA_PTR_FROM_JSON(CanEdit, canEdit_);
      DARABONBA_PTR_FROM_JSON(DagName, dagName_);
      DARABONBA_PTR_FROM_JSON(Edges, edges_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetTaskFlowGraphResponseBodyTaskFlowGraph() = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraph(const GetTaskFlowGraphResponseBodyTaskFlowGraph &) = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraph(GetTaskFlowGraphResponseBodyTaskFlowGraph &&) = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraph(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskFlowGraphResponseBodyTaskFlowGraph() = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraph& operator=(const GetTaskFlowGraphResponseBodyTaskFlowGraph &) = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraph& operator=(GetTaskFlowGraphResponseBodyTaskFlowGraph &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canEdit_ != nullptr
        && this->dagName_ != nullptr && this->edges_ != nullptr && this->nodes_ != nullptr && this->status_ != nullptr; };
    // canEdit Field Functions 
    bool hasCanEdit() const { return this->canEdit_ != nullptr;};
    void deleteCanEdit() { this->canEdit_ = nullptr;};
    inline bool canEdit() const { DARABONBA_PTR_GET_DEFAULT(canEdit_, false) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraph& setCanEdit(bool canEdit) { DARABONBA_PTR_SET_VALUE(canEdit_, canEdit) };


    // dagName Field Functions 
    bool hasDagName() const { return this->dagName_ != nullptr;};
    void deleteDagName() { this->dagName_ = nullptr;};
    inline string dagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraph& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


    // edges Field Functions 
    bool hasEdges() const { return this->edges_ != nullptr;};
    void deleteEdges() { this->edges_ = nullptr;};
    inline const Models::GetTaskFlowGraphResponseBodyTaskFlowGraphEdges & edges() const { DARABONBA_PTR_GET_CONST(edges_, Models::GetTaskFlowGraphResponseBodyTaskFlowGraphEdges) };
    inline Models::GetTaskFlowGraphResponseBodyTaskFlowGraphEdges edges() { DARABONBA_PTR_GET(edges_, Models::GetTaskFlowGraphResponseBodyTaskFlowGraphEdges) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraph& setEdges(const Models::GetTaskFlowGraphResponseBodyTaskFlowGraphEdges & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraph& setEdges(Models::GetTaskFlowGraphResponseBodyTaskFlowGraphEdges && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const Models::GetTaskFlowGraphResponseBodyTaskFlowGraphNodes & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, Models::GetTaskFlowGraphResponseBodyTaskFlowGraphNodes) };
    inline Models::GetTaskFlowGraphResponseBodyTaskFlowGraphNodes nodes() { DARABONBA_PTR_GET(nodes_, Models::GetTaskFlowGraphResponseBodyTaskFlowGraphNodes) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraph& setNodes(const Models::GetTaskFlowGraphResponseBodyTaskFlowGraphNodes & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraph& setNodes(Models::GetTaskFlowGraphResponseBodyTaskFlowGraphNodes && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraph& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates whether the task flow is editable. Valid values:
    // 
    // - **true**: editable
    // - **false**: non-editable
    std::shared_ptr<bool> canEdit_ = nullptr;
    // The name of the task flow.
    std::shared_ptr<string> dagName_ = nullptr;
    // The list of task flow edges.
    std::shared_ptr<Models::GetTaskFlowGraphResponseBodyTaskFlowGraphEdges> edges_ = nullptr;
    // The node list of the task flow.
    std::shared_ptr<Models::GetTaskFlowGraphResponseBodyTaskFlowGraphNodes> nodes_ = nullptr;
    // The status of the task flow. Valid values:
    // 
    // - **0**: invalid
    // - **1**: not scheduled
    // - **2**: to be scheduled
    std::shared_ptr<int64_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
