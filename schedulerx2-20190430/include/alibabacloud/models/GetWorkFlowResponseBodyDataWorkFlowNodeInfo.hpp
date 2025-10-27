// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYDATAWORKFLOWNODEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYDATAWORKFLOWNODEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges.hpp>
#include <alibabacloud/models/GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetWorkFlowResponseBodyDataWorkFlowNodeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkFlowResponseBodyDataWorkFlowNodeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Edges, edges_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkFlowResponseBodyDataWorkFlowNodeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Edges, edges_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    GetWorkFlowResponseBodyDataWorkFlowNodeInfo() = default ;
    GetWorkFlowResponseBodyDataWorkFlowNodeInfo(const GetWorkFlowResponseBodyDataWorkFlowNodeInfo &) = default ;
    GetWorkFlowResponseBodyDataWorkFlowNodeInfo(GetWorkFlowResponseBodyDataWorkFlowNodeInfo &&) = default ;
    GetWorkFlowResponseBodyDataWorkFlowNodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkFlowResponseBodyDataWorkFlowNodeInfo() = default ;
    GetWorkFlowResponseBodyDataWorkFlowNodeInfo& operator=(const GetWorkFlowResponseBodyDataWorkFlowNodeInfo &) = default ;
    GetWorkFlowResponseBodyDataWorkFlowNodeInfo& operator=(GetWorkFlowResponseBodyDataWorkFlowNodeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edges_ == nullptr
        && return this->nodes_ == nullptr; };
    // edges Field Functions 
    bool hasEdges() const { return this->edges_ != nullptr;};
    void deleteEdges() { this->edges_ = nullptr;};
    inline const vector<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges> & edges() const { DARABONBA_PTR_GET_CONST(edges_, vector<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges>) };
    inline vector<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges> edges() { DARABONBA_PTR_GET(edges_, vector<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges>) };
    inline GetWorkFlowResponseBodyDataWorkFlowNodeInfo& setEdges(const vector<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
    inline GetWorkFlowResponseBodyDataWorkFlowNodeInfo& setEdges(vector<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes>) };
    inline vector<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes>) };
    inline GetWorkFlowResponseBodyDataWorkFlowNodeInfo& setNodes(const vector<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetWorkFlowResponseBodyDataWorkFlowNodeInfo& setNodes(vector<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    // The workflow edges.
    std::shared_ptr<vector<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges>> edges_ = nullptr;
    // The list of workflow nodes.
    std::shared_ptr<vector<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes>> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
