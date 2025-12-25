// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWDAGREQUESTDAG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWDAGREQUESTDAG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWorkflowDAGRequestDagEdges.hpp>
#include <alibabacloud/models/UpdateWorkflowDAGRequestDagNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateWorkflowDAGRequestDag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowDAGRequestDag& obj) { 
      DARABONBA_PTR_TO_JSON(Edges, edges_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowDAGRequestDag& obj) { 
      DARABONBA_PTR_FROM_JSON(Edges, edges_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    UpdateWorkflowDAGRequestDag() = default ;
    UpdateWorkflowDAGRequestDag(const UpdateWorkflowDAGRequestDag &) = default ;
    UpdateWorkflowDAGRequestDag(UpdateWorkflowDAGRequestDag &&) = default ;
    UpdateWorkflowDAGRequestDag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowDAGRequestDag() = default ;
    UpdateWorkflowDAGRequestDag& operator=(const UpdateWorkflowDAGRequestDag &) = default ;
    UpdateWorkflowDAGRequestDag& operator=(UpdateWorkflowDAGRequestDag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edges_ == nullptr
        && return this->nodes_ == nullptr; };
    // edges Field Functions 
    bool hasEdges() const { return this->edges_ != nullptr;};
    void deleteEdges() { this->edges_ = nullptr;};
    inline const vector<Models::UpdateWorkflowDAGRequestDagEdges> & edges() const { DARABONBA_PTR_GET_CONST(edges_, vector<Models::UpdateWorkflowDAGRequestDagEdges>) };
    inline vector<Models::UpdateWorkflowDAGRequestDagEdges> edges() { DARABONBA_PTR_GET(edges_, vector<Models::UpdateWorkflowDAGRequestDagEdges>) };
    inline UpdateWorkflowDAGRequestDag& setEdges(const vector<Models::UpdateWorkflowDAGRequestDagEdges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
    inline UpdateWorkflowDAGRequestDag& setEdges(vector<Models::UpdateWorkflowDAGRequestDagEdges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::UpdateWorkflowDAGRequestDagNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::UpdateWorkflowDAGRequestDagNodes>) };
    inline vector<Models::UpdateWorkflowDAGRequestDagNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::UpdateWorkflowDAGRequestDagNodes>) };
    inline UpdateWorkflowDAGRequestDag& setNodes(const vector<Models::UpdateWorkflowDAGRequestDagNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline UpdateWorkflowDAGRequestDag& setNodes(vector<Models::UpdateWorkflowDAGRequestDagNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    std::shared_ptr<vector<Models::UpdateWorkflowDAGRequestDagEdges>> edges_ = nullptr;
    std::shared_ptr<vector<Models::UpdateWorkflowDAGRequestDagNodes>> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
