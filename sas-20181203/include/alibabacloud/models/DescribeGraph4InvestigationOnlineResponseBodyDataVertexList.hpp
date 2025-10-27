// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODYDATAVERTEXLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODYDATAVERTEXLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGraph4InvestigationOnlineResponseBodyDataVertexList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGraph4InvestigationOnlineResponseBodyDataVertexList& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NeighborList, neighborList_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGraph4InvestigationOnlineResponseBodyDataVertexList& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NeighborList, neighborList_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeGraph4InvestigationOnlineResponseBodyDataVertexList() = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataVertexList(const DescribeGraph4InvestigationOnlineResponseBodyDataVertexList &) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataVertexList(DescribeGraph4InvestigationOnlineResponseBodyDataVertexList &&) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataVertexList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGraph4InvestigationOnlineResponseBodyDataVertexList() = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataVertexList& operator=(const DescribeGraph4InvestigationOnlineResponseBodyDataVertexList &) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataVertexList& operator=(DescribeGraph4InvestigationOnlineResponseBodyDataVertexList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->neighborList_ == nullptr && return this->properties_ == nullptr && return this->time_ == nullptr && return this->type_ == nullptr && return this->uuid_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataVertexList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // neighborList Field Functions 
    bool hasNeighborList() const { return this->neighborList_ != nullptr;};
    void deleteNeighborList() { this->neighborList_ = nullptr;};
    inline const vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList> & neighborList() const { DARABONBA_PTR_GET_CONST(neighborList_, vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList>) };
    inline vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList> neighborList() { DARABONBA_PTR_GET(neighborList_, vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList>) };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataVertexList& setNeighborList(const vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList> & neighborList) { DARABONBA_PTR_SET_VALUE(neighborList_, neighborList) };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataVertexList& setNeighborList(vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList> && neighborList) { DARABONBA_PTR_SET_RVALUE(neighborList_, neighborList) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline string properties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataVertexList& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataVertexList& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataVertexList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataVertexList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // Vertex name.
    std::shared_ptr<string> name_ = nullptr;
    // List of neighboring vertices of the current vertex.
    std::shared_ptr<vector<Models::DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList>> neighborList_ = nullptr;
    // Properties.
    std::shared_ptr<string> properties_ = nullptr;
    // Time.
    std::shared_ptr<string> time_ = nullptr;
    // Vertex type.
    std::shared_ptr<string> type_ = nullptr;
    // Asset UUID.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
