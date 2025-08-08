// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKFLOWGRAPHRESPONSEBODYTASKFLOWGRAPHEDGES_HPP_
#define ALIBABACLOUD_MODELS_GETTASKFLOWGRAPHRESPONSEBODYTASKFLOWGRAPHEDGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTaskFlowGraphResponseBodyTaskFlowGraphEdges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskFlowGraphResponseBodyTaskFlowGraphEdges& obj) { 
      DARABONBA_PTR_TO_JSON(Edge, edge_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskFlowGraphResponseBodyTaskFlowGraphEdges& obj) { 
      DARABONBA_PTR_FROM_JSON(Edge, edge_);
    };
    GetTaskFlowGraphResponseBodyTaskFlowGraphEdges() = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphEdges(const GetTaskFlowGraphResponseBodyTaskFlowGraphEdges &) = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphEdges(GetTaskFlowGraphResponseBodyTaskFlowGraphEdges &&) = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphEdges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskFlowGraphResponseBodyTaskFlowGraphEdges() = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphEdges& operator=(const GetTaskFlowGraphResponseBodyTaskFlowGraphEdges &) = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphEdges& operator=(GetTaskFlowGraphResponseBodyTaskFlowGraphEdges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edge_ != nullptr; };
    // edge Field Functions 
    bool hasEdge() const { return this->edge_ != nullptr;};
    void deleteEdge() { this->edge_ = nullptr;};
    inline const vector<Models::GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge> & edge() const { DARABONBA_PTR_GET_CONST(edge_, vector<Models::GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge>) };
    inline vector<Models::GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge> edge() { DARABONBA_PTR_GET(edge_, vector<Models::GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge>) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraphEdges& setEdge(const vector<Models::GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge> & edge) { DARABONBA_PTR_SET_VALUE(edge_, edge) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraphEdges& setEdge(vector<Models::GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge> && edge) { DARABONBA_PTR_SET_RVALUE(edge_, edge) };


  protected:
    std::shared_ptr<vector<Models::GetTaskFlowGraphResponseBodyTaskFlowGraphEdgesEdge>> edge_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
