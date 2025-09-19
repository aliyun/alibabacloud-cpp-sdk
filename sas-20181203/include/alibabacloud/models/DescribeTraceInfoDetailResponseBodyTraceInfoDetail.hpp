// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILRESPONSEBODYTRACEINFODETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILRESPONSEBODYTRACEINFODETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList.hpp>
#include <alibabacloud/models/DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList.hpp>
#include <alibabacloud/models/DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList.hpp>
#include <alibabacloud/models/DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTraceInfoDetailResponseBodyTraceInfoDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceInfoDetailResponseBodyTraceInfoDetail& obj) { 
      DARABONBA_PTR_TO_JSON(EdgeList, edgeList_);
      DARABONBA_PTR_TO_JSON(EntityTypeList, entityTypeList_);
      DARABONBA_PTR_TO_JSON(RelationTypeList, relationTypeList_);
      DARABONBA_PTR_TO_JSON(VertexList, vertexList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceInfoDetailResponseBodyTraceInfoDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(EdgeList, edgeList_);
      DARABONBA_PTR_FROM_JSON(EntityTypeList, entityTypeList_);
      DARABONBA_PTR_FROM_JSON(RelationTypeList, relationTypeList_);
      DARABONBA_PTR_FROM_JSON(VertexList, vertexList_);
    };
    DescribeTraceInfoDetailResponseBodyTraceInfoDetail() = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetail(const DescribeTraceInfoDetailResponseBodyTraceInfoDetail &) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetail(DescribeTraceInfoDetailResponseBodyTraceInfoDetail &&) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceInfoDetailResponseBodyTraceInfoDetail() = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetail& operator=(const DescribeTraceInfoDetailResponseBodyTraceInfoDetail &) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetail& operator=(DescribeTraceInfoDetailResponseBodyTraceInfoDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edgeList_ != nullptr
        && this->entityTypeList_ != nullptr && this->relationTypeList_ != nullptr && this->vertexList_ != nullptr; };
    // edgeList Field Functions 
    bool hasEdgeList() const { return this->edgeList_ != nullptr;};
    void deleteEdgeList() { this->edgeList_ = nullptr;};
    inline const vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList> & edgeList() const { DARABONBA_PTR_GET_CONST(edgeList_, vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList>) };
    inline vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList> edgeList() { DARABONBA_PTR_GET(edgeList_, vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList>) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetail& setEdgeList(const vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList> & edgeList) { DARABONBA_PTR_SET_VALUE(edgeList_, edgeList) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetail& setEdgeList(vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList> && edgeList) { DARABONBA_PTR_SET_RVALUE(edgeList_, edgeList) };


    // entityTypeList Field Functions 
    bool hasEntityTypeList() const { return this->entityTypeList_ != nullptr;};
    void deleteEntityTypeList() { this->entityTypeList_ = nullptr;};
    inline const vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList> & entityTypeList() const { DARABONBA_PTR_GET_CONST(entityTypeList_, vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList>) };
    inline vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList> entityTypeList() { DARABONBA_PTR_GET(entityTypeList_, vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList>) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetail& setEntityTypeList(const vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList> & entityTypeList) { DARABONBA_PTR_SET_VALUE(entityTypeList_, entityTypeList) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetail& setEntityTypeList(vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList> && entityTypeList) { DARABONBA_PTR_SET_RVALUE(entityTypeList_, entityTypeList) };


    // relationTypeList Field Functions 
    bool hasRelationTypeList() const { return this->relationTypeList_ != nullptr;};
    void deleteRelationTypeList() { this->relationTypeList_ = nullptr;};
    inline const vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList> & relationTypeList() const { DARABONBA_PTR_GET_CONST(relationTypeList_, vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList>) };
    inline vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList> relationTypeList() { DARABONBA_PTR_GET(relationTypeList_, vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList>) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetail& setRelationTypeList(const vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList> & relationTypeList) { DARABONBA_PTR_SET_VALUE(relationTypeList_, relationTypeList) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetail& setRelationTypeList(vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList> && relationTypeList) { DARABONBA_PTR_SET_RVALUE(relationTypeList_, relationTypeList) };


    // vertexList Field Functions 
    bool hasVertexList() const { return this->vertexList_ != nullptr;};
    void deleteVertexList() { this->vertexList_ = nullptr;};
    inline const vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList> & vertexList() const { DARABONBA_PTR_GET_CONST(vertexList_, vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList>) };
    inline vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList> vertexList() { DARABONBA_PTR_GET(vertexList_, vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList>) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetail& setVertexList(const vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList> & vertexList) { DARABONBA_PTR_SET_VALUE(vertexList_, vertexList) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetail& setVertexList(vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList> && vertexList) { DARABONBA_PTR_SET_RVALUE(vertexList_, vertexList) };


  protected:
    // An array that consists of the edges of the tracing diagram.
    std::shared_ptr<vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList>> edgeList_ = nullptr;
    // An array that consists of the metadata configurations of the vertex type.
    std::shared_ptr<vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList>> entityTypeList_ = nullptr;
    // An array that consists of the metadata configurations of the edge type.
    std::shared_ptr<vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList>> relationTypeList_ = nullptr;
    // An array that consists of all vertexes of the tracing diagram.
    std::shared_ptr<vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList>> vertexList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
