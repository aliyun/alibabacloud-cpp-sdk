// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODYDATAVERTEXLISTNEIGHBORLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODYDATAVERTEXLISTNEIGHBORLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList() = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList(const DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList &) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList(DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList &&) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList() = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList& operator=(const DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList &) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList& operator=(DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->hasMore_ != nullptr && this->type_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataVertexListNeighborList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Number of neighboring nodes.
    std::shared_ptr<int32_t> count_ = nullptr;
    // Indicates whether there are more neighboring vertices.
    std::shared_ptr<bool> hasMore_ = nullptr;
    // Neighbor node type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
