// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWDAGPREVIEWRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWDAGPREVIEWRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkflowDAGPreviewResponseBodyDataEdges.hpp>
#include <alibabacloud/models/GetWorkflowDAGPreviewResponseBodyDataNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetWorkflowDAGPreviewResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowDAGPreviewResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Edges, edges_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowDAGPreviewResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Edges, edges_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    GetWorkflowDAGPreviewResponseBodyData() = default ;
    GetWorkflowDAGPreviewResponseBodyData(const GetWorkflowDAGPreviewResponseBodyData &) = default ;
    GetWorkflowDAGPreviewResponseBodyData(GetWorkflowDAGPreviewResponseBodyData &&) = default ;
    GetWorkflowDAGPreviewResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowDAGPreviewResponseBodyData() = default ;
    GetWorkflowDAGPreviewResponseBodyData& operator=(const GetWorkflowDAGPreviewResponseBodyData &) = default ;
    GetWorkflowDAGPreviewResponseBodyData& operator=(GetWorkflowDAGPreviewResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edges_ == nullptr
        && return this->nodes_ == nullptr; };
    // edges Field Functions 
    bool hasEdges() const { return this->edges_ != nullptr;};
    void deleteEdges() { this->edges_ = nullptr;};
    inline const vector<Models::GetWorkflowDAGPreviewResponseBodyDataEdges> & edges() const { DARABONBA_PTR_GET_CONST(edges_, vector<Models::GetWorkflowDAGPreviewResponseBodyDataEdges>) };
    inline vector<Models::GetWorkflowDAGPreviewResponseBodyDataEdges> edges() { DARABONBA_PTR_GET(edges_, vector<Models::GetWorkflowDAGPreviewResponseBodyDataEdges>) };
    inline GetWorkflowDAGPreviewResponseBodyData& setEdges(const vector<Models::GetWorkflowDAGPreviewResponseBodyDataEdges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
    inline GetWorkflowDAGPreviewResponseBodyData& setEdges(vector<Models::GetWorkflowDAGPreviewResponseBodyDataEdges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::GetWorkflowDAGPreviewResponseBodyDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::GetWorkflowDAGPreviewResponseBodyDataNodes>) };
    inline vector<Models::GetWorkflowDAGPreviewResponseBodyDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::GetWorkflowDAGPreviewResponseBodyDataNodes>) };
    inline GetWorkflowDAGPreviewResponseBodyData& setNodes(const vector<Models::GetWorkflowDAGPreviewResponseBodyDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetWorkflowDAGPreviewResponseBodyData& setNodes(vector<Models::GetWorkflowDAGPreviewResponseBodyDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    std::shared_ptr<vector<Models::GetWorkflowDAGPreviewResponseBodyDataEdges>> edges_ = nullptr;
    std::shared_ptr<vector<Models::GetWorkflowDAGPreviewResponseBodyDataNodes>> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
