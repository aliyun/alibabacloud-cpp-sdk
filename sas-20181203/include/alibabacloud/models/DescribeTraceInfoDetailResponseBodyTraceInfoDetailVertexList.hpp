// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILRESPONSEBODYTRACEINFODETAILVERTEXLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILRESPONSEBODYTRACEINFODETAILVERTEXLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexListNeighborList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NeighborList, neighborList_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NeighborList, neighborList_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList() = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList(const DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList &) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList(DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList &&) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList() = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList& operator=(const DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList &) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList& operator=(DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->neighborList_ != nullptr && this->time_ != nullptr && this->type_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // neighborList Field Functions 
    bool hasNeighborList() const { return this->neighborList_ != nullptr;};
    void deleteNeighborList() { this->neighborList_ = nullptr;};
    inline const vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexListNeighborList> & neighborList() const { DARABONBA_PTR_GET_CONST(neighborList_, vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexListNeighborList>) };
    inline vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexListNeighborList> neighborList() { DARABONBA_PTR_GET(neighborList_, vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexListNeighborList>) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList& setNeighborList(const vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexListNeighborList> & neighborList) { DARABONBA_PTR_SET_VALUE(neighborList_, neighborList) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList& setNeighborList(vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexListNeighborList> && neighborList) { DARABONBA_PTR_SET_RVALUE(neighborList_, neighborList) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of times.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The ID of the vertex.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the entity represented by the vertex.
    std::shared_ptr<string> name_ = nullptr;
    // An array that consists of the neighbor nodes.
    std::shared_ptr<vector<Models::DescribeTraceInfoDetailResponseBodyTraceInfoDetailVertexListNeighborList>> neighborList_ = nullptr;
    // The point in time.
    std::shared_ptr<string> time_ = nullptr;
    // The type of the entity represented by the vertex.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
