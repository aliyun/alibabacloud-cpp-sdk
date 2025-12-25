// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWDAGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWDAGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkflowDAGResponseBodyDataEdges.hpp>
#include <alibabacloud/models/GetWorkflowDAGResponseBodyDataNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetWorkflowDAGResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowDAGResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Edges, edges_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowDAGResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Edges, edges_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    GetWorkflowDAGResponseBodyData() = default ;
    GetWorkflowDAGResponseBodyData(const GetWorkflowDAGResponseBodyData &) = default ;
    GetWorkflowDAGResponseBodyData(GetWorkflowDAGResponseBodyData &&) = default ;
    GetWorkflowDAGResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowDAGResponseBodyData() = default ;
    GetWorkflowDAGResponseBodyData& operator=(const GetWorkflowDAGResponseBodyData &) = default ;
    GetWorkflowDAGResponseBodyData& operator=(GetWorkflowDAGResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edges_ == nullptr
        && return this->nodes_ == nullptr; };
    // edges Field Functions 
    bool hasEdges() const { return this->edges_ != nullptr;};
    void deleteEdges() { this->edges_ = nullptr;};
    inline const vector<Models::GetWorkflowDAGResponseBodyDataEdges> & edges() const { DARABONBA_PTR_GET_CONST(edges_, vector<Models::GetWorkflowDAGResponseBodyDataEdges>) };
    inline vector<Models::GetWorkflowDAGResponseBodyDataEdges> edges() { DARABONBA_PTR_GET(edges_, vector<Models::GetWorkflowDAGResponseBodyDataEdges>) };
    inline GetWorkflowDAGResponseBodyData& setEdges(const vector<Models::GetWorkflowDAGResponseBodyDataEdges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
    inline GetWorkflowDAGResponseBodyData& setEdges(vector<Models::GetWorkflowDAGResponseBodyDataEdges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::GetWorkflowDAGResponseBodyDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::GetWorkflowDAGResponseBodyDataNodes>) };
    inline vector<Models::GetWorkflowDAGResponseBodyDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::GetWorkflowDAGResponseBodyDataNodes>) };
    inline GetWorkflowDAGResponseBodyData& setNodes(const vector<Models::GetWorkflowDAGResponseBodyDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetWorkflowDAGResponseBodyData& setNodes(vector<Models::GetWorkflowDAGResponseBodyDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    std::shared_ptr<vector<Models::GetWorkflowDAGResponseBodyDataEdges>> edges_ = nullptr;
    std::shared_ptr<vector<Models::GetWorkflowDAGResponseBodyDataNodes>> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
