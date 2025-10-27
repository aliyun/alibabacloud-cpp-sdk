// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODYDATAWFINSTANCEDAG_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODYDATAWFINSTANCEDAG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkflowInstanceResponseBodyDataWfInstanceDagEdges.hpp>
#include <alibabacloud/models/GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetWorkflowInstanceResponseBodyDataWfInstanceDag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowInstanceResponseBodyDataWfInstanceDag& obj) { 
      DARABONBA_PTR_TO_JSON(Edges, edges_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowInstanceResponseBodyDataWfInstanceDag& obj) { 
      DARABONBA_PTR_FROM_JSON(Edges, edges_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    GetWorkflowInstanceResponseBodyDataWfInstanceDag() = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceDag(const GetWorkflowInstanceResponseBodyDataWfInstanceDag &) = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceDag(GetWorkflowInstanceResponseBodyDataWfInstanceDag &&) = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceDag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowInstanceResponseBodyDataWfInstanceDag() = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceDag& operator=(const GetWorkflowInstanceResponseBodyDataWfInstanceDag &) = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceDag& operator=(GetWorkflowInstanceResponseBodyDataWfInstanceDag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edges_ == nullptr
        && return this->nodes_ == nullptr; };
    // edges Field Functions 
    bool hasEdges() const { return this->edges_ != nullptr;};
    void deleteEdges() { this->edges_ = nullptr;};
    inline const vector<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDagEdges> & edges() const { DARABONBA_PTR_GET_CONST(edges_, vector<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDagEdges>) };
    inline vector<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDagEdges> edges() { DARABONBA_PTR_GET(edges_, vector<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDagEdges>) };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDag& setEdges(const vector<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDagEdges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDag& setEdges(vector<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDagEdges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes>) };
    inline vector<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes>) };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDag& setNodes(const vector<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDag& setNodes(vector<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    // The dependencies between job instances.
    std::shared_ptr<vector<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDagEdges>> edges_ = nullptr;
    // The job instances.
    std::shared_ptr<vector<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes>> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
