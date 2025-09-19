// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList.hpp>
#include <alibabacloud/models/DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList.hpp>
#include <alibabacloud/models/DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList.hpp>
#include <alibabacloud/models/DescribeGraph4InvestigationOnlineResponseBodyDataVertexList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGraph4InvestigationOnlineResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGraph4InvestigationOnlineResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EdgeList, edgeList_);
      DARABONBA_PTR_TO_JSON(EntityTypeList, entityTypeList_);
      DARABONBA_PTR_TO_JSON(RelationTypeList, relationTypeList_);
      DARABONBA_PTR_TO_JSON(VertexList, vertexList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGraph4InvestigationOnlineResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EdgeList, edgeList_);
      DARABONBA_PTR_FROM_JSON(EntityTypeList, entityTypeList_);
      DARABONBA_PTR_FROM_JSON(RelationTypeList, relationTypeList_);
      DARABONBA_PTR_FROM_JSON(VertexList, vertexList_);
    };
    DescribeGraph4InvestigationOnlineResponseBodyData() = default ;
    DescribeGraph4InvestigationOnlineResponseBodyData(const DescribeGraph4InvestigationOnlineResponseBodyData &) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyData(DescribeGraph4InvestigationOnlineResponseBodyData &&) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGraph4InvestigationOnlineResponseBodyData() = default ;
    DescribeGraph4InvestigationOnlineResponseBodyData& operator=(const DescribeGraph4InvestigationOnlineResponseBodyData &) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyData& operator=(DescribeGraph4InvestigationOnlineResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edgeList_ != nullptr
        && this->entityTypeList_ != nullptr && this->relationTypeList_ != nullptr && this->vertexList_ != nullptr; };
    // edgeList Field Functions 
    bool hasEdgeList() const { return this->edgeList_ != nullptr;};
    void deleteEdgeList() { this->edgeList_ = nullptr;};
    inline const vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList> & edgeList() const { DARABONBA_PTR_GET_CONST(edgeList_, vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList>) };
    inline vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList> edgeList() { DARABONBA_PTR_GET(edgeList_, vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList>) };
    inline DescribeGraph4InvestigationOnlineResponseBodyData& setEdgeList(const vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList> & edgeList) { DARABONBA_PTR_SET_VALUE(edgeList_, edgeList) };
    inline DescribeGraph4InvestigationOnlineResponseBodyData& setEdgeList(vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList> && edgeList) { DARABONBA_PTR_SET_RVALUE(edgeList_, edgeList) };


    // entityTypeList Field Functions 
    bool hasEntityTypeList() const { return this->entityTypeList_ != nullptr;};
    void deleteEntityTypeList() { this->entityTypeList_ = nullptr;};
    inline const vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList> & entityTypeList() const { DARABONBA_PTR_GET_CONST(entityTypeList_, vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList>) };
    inline vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList> entityTypeList() { DARABONBA_PTR_GET(entityTypeList_, vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList>) };
    inline DescribeGraph4InvestigationOnlineResponseBodyData& setEntityTypeList(const vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList> & entityTypeList) { DARABONBA_PTR_SET_VALUE(entityTypeList_, entityTypeList) };
    inline DescribeGraph4InvestigationOnlineResponseBodyData& setEntityTypeList(vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList> && entityTypeList) { DARABONBA_PTR_SET_RVALUE(entityTypeList_, entityTypeList) };


    // relationTypeList Field Functions 
    bool hasRelationTypeList() const { return this->relationTypeList_ != nullptr;};
    void deleteRelationTypeList() { this->relationTypeList_ = nullptr;};
    inline const vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList> & relationTypeList() const { DARABONBA_PTR_GET_CONST(relationTypeList_, vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList>) };
    inline vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList> relationTypeList() { DARABONBA_PTR_GET(relationTypeList_, vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList>) };
    inline DescribeGraph4InvestigationOnlineResponseBodyData& setRelationTypeList(const vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList> & relationTypeList) { DARABONBA_PTR_SET_VALUE(relationTypeList_, relationTypeList) };
    inline DescribeGraph4InvestigationOnlineResponseBodyData& setRelationTypeList(vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList> && relationTypeList) { DARABONBA_PTR_SET_RVALUE(relationTypeList_, relationTypeList) };


    // vertexList Field Functions 
    bool hasVertexList() const { return this->vertexList_ != nullptr;};
    void deleteVertexList() { this->vertexList_ = nullptr;};
    inline const vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataVertexList> & vertexList() const { DARABONBA_PTR_GET_CONST(vertexList_, vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataVertexList>) };
    inline vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataVertexList> vertexList() { DARABONBA_PTR_GET(vertexList_, vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataVertexList>) };
    inline DescribeGraph4InvestigationOnlineResponseBodyData& setVertexList(const vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataVertexList> & vertexList) { DARABONBA_PTR_SET_VALUE(vertexList_, vertexList) };
    inline DescribeGraph4InvestigationOnlineResponseBodyData& setVertexList(vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataVertexList> && vertexList) { DARABONBA_PTR_SET_RVALUE(vertexList_, vertexList) };


  protected:
    // List of edges.
    std::shared_ptr<vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList>> edgeList_ = nullptr;
    // List of vertex types.
    std::shared_ptr<vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataEntityTypeList>> entityTypeList_ = nullptr;
    // List of edge types.
    std::shared_ptr<vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataRelationTypeList>> relationTypeList_ = nullptr;
    // List of vertices.
    std::shared_ptr<vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataVertexList>> vertexList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
