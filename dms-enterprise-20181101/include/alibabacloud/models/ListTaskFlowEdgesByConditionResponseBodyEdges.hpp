// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWEDGESBYCONDITIONRESPONSEBODYEDGES_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWEDGESBYCONDITIONRESPONSEBODYEDGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskFlowEdgesByConditionResponseBodyEdgesEdge.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowEdgesByConditionResponseBodyEdges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowEdgesByConditionResponseBodyEdges& obj) { 
      DARABONBA_PTR_TO_JSON(Edge, edge_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowEdgesByConditionResponseBodyEdges& obj) { 
      DARABONBA_PTR_FROM_JSON(Edge, edge_);
    };
    ListTaskFlowEdgesByConditionResponseBodyEdges() = default ;
    ListTaskFlowEdgesByConditionResponseBodyEdges(const ListTaskFlowEdgesByConditionResponseBodyEdges &) = default ;
    ListTaskFlowEdgesByConditionResponseBodyEdges(ListTaskFlowEdgesByConditionResponseBodyEdges &&) = default ;
    ListTaskFlowEdgesByConditionResponseBodyEdges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowEdgesByConditionResponseBodyEdges() = default ;
    ListTaskFlowEdgesByConditionResponseBodyEdges& operator=(const ListTaskFlowEdgesByConditionResponseBodyEdges &) = default ;
    ListTaskFlowEdgesByConditionResponseBodyEdges& operator=(ListTaskFlowEdgesByConditionResponseBodyEdges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edge_ != nullptr; };
    // edge Field Functions 
    bool hasEdge() const { return this->edge_ != nullptr;};
    void deleteEdge() { this->edge_ = nullptr;};
    inline const vector<Models::ListTaskFlowEdgesByConditionResponseBodyEdgesEdge> & edge() const { DARABONBA_PTR_GET_CONST(edge_, vector<Models::ListTaskFlowEdgesByConditionResponseBodyEdgesEdge>) };
    inline vector<Models::ListTaskFlowEdgesByConditionResponseBodyEdgesEdge> edge() { DARABONBA_PTR_GET(edge_, vector<Models::ListTaskFlowEdgesByConditionResponseBodyEdgesEdge>) };
    inline ListTaskFlowEdgesByConditionResponseBodyEdges& setEdge(const vector<Models::ListTaskFlowEdgesByConditionResponseBodyEdgesEdge> & edge) { DARABONBA_PTR_SET_VALUE(edge_, edge) };
    inline ListTaskFlowEdgesByConditionResponseBodyEdges& setEdge(vector<Models::ListTaskFlowEdgesByConditionResponseBodyEdgesEdge> && edge) { DARABONBA_PTR_SET_RVALUE(edge_, edge) };


  protected:
    std::shared_ptr<vector<Models::ListTaskFlowEdgesByConditionResponseBodyEdgesEdge>> edge_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
