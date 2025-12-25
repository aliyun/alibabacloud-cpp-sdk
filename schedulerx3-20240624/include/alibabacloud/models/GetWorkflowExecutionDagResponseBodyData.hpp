// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWEXECUTIONDAGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWEXECUTIONDAGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkflowExecutionDAGResponseBodyDataEdges.hpp>
#include <alibabacloud/models/GetWorkflowExecutionDAGResponseBodyDataNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetWorkflowExecutionDAGResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowExecutionDAGResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Edges, edges_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowExecutionDAGResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Edges, edges_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    GetWorkflowExecutionDAGResponseBodyData() = default ;
    GetWorkflowExecutionDAGResponseBodyData(const GetWorkflowExecutionDAGResponseBodyData &) = default ;
    GetWorkflowExecutionDAGResponseBodyData(GetWorkflowExecutionDAGResponseBodyData &&) = default ;
    GetWorkflowExecutionDAGResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowExecutionDAGResponseBodyData() = default ;
    GetWorkflowExecutionDAGResponseBodyData& operator=(const GetWorkflowExecutionDAGResponseBodyData &) = default ;
    GetWorkflowExecutionDAGResponseBodyData& operator=(GetWorkflowExecutionDAGResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edges_ == nullptr
        && return this->nodes_ == nullptr; };
    // edges Field Functions 
    bool hasEdges() const { return this->edges_ != nullptr;};
    void deleteEdges() { this->edges_ = nullptr;};
    inline const vector<Models::GetWorkflowExecutionDAGResponseBodyDataEdges> & edges() const { DARABONBA_PTR_GET_CONST(edges_, vector<Models::GetWorkflowExecutionDAGResponseBodyDataEdges>) };
    inline vector<Models::GetWorkflowExecutionDAGResponseBodyDataEdges> edges() { DARABONBA_PTR_GET(edges_, vector<Models::GetWorkflowExecutionDAGResponseBodyDataEdges>) };
    inline GetWorkflowExecutionDAGResponseBodyData& setEdges(const vector<Models::GetWorkflowExecutionDAGResponseBodyDataEdges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
    inline GetWorkflowExecutionDAGResponseBodyData& setEdges(vector<Models::GetWorkflowExecutionDAGResponseBodyDataEdges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::GetWorkflowExecutionDAGResponseBodyDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::GetWorkflowExecutionDAGResponseBodyDataNodes>) };
    inline vector<Models::GetWorkflowExecutionDAGResponseBodyDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::GetWorkflowExecutionDAGResponseBodyDataNodes>) };
    inline GetWorkflowExecutionDAGResponseBodyData& setNodes(const vector<Models::GetWorkflowExecutionDAGResponseBodyDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetWorkflowExecutionDAGResponseBodyData& setNodes(vector<Models::GetWorkflowExecutionDAGResponseBodyDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    std::shared_ptr<vector<Models::GetWorkflowExecutionDAGResponseBodyDataEdges>> edges_ = nullptr;
    std::shared_ptr<vector<Models::GetWorkflowExecutionDAGResponseBodyDataNodes>> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
