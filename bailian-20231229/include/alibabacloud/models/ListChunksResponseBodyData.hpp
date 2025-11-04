// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHUNKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCHUNKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListChunksResponseBodyDataNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListChunksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChunksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListChunksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListChunksResponseBodyData() = default ;
    ListChunksResponseBodyData(const ListChunksResponseBodyData &) = default ;
    ListChunksResponseBodyData(ListChunksResponseBodyData &&) = default ;
    ListChunksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChunksResponseBodyData() = default ;
    ListChunksResponseBodyData& operator=(const ListChunksResponseBodyData &) = default ;
    ListChunksResponseBodyData& operator=(ListChunksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodes_ == nullptr
        && return this->total_ == nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::ListChunksResponseBodyDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::ListChunksResponseBodyDataNodes>) };
    inline vector<Models::ListChunksResponseBodyDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::ListChunksResponseBodyDataNodes>) };
    inline ListChunksResponseBodyData& setNodes(const vector<Models::ListChunksResponseBodyDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ListChunksResponseBodyData& setNodes(vector<Models::ListChunksResponseBodyDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListChunksResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of chunks.
    std::shared_ptr<vector<Models::ListChunksResponseBodyDataNodes>> nodes_ = nullptr;
    // The total number of chunks returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
