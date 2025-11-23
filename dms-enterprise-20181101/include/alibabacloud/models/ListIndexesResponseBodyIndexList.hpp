// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXESRESPONSEBODYINDEXLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXESRESPONSEBODYINDEXLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIndexesResponseBodyIndexListIndex.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListIndexesResponseBodyIndexList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexesResponseBodyIndexList& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexesResponseBodyIndexList& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
    };
    ListIndexesResponseBodyIndexList() = default ;
    ListIndexesResponseBodyIndexList(const ListIndexesResponseBodyIndexList &) = default ;
    ListIndexesResponseBodyIndexList(ListIndexesResponseBodyIndexList &&) = default ;
    ListIndexesResponseBodyIndexList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexesResponseBodyIndexList() = default ;
    ListIndexesResponseBodyIndexList& operator=(const ListIndexesResponseBodyIndexList &) = default ;
    ListIndexesResponseBodyIndexList& operator=(ListIndexesResponseBodyIndexList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->index_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline const vector<Models::ListIndexesResponseBodyIndexListIndex> & index() const { DARABONBA_PTR_GET_CONST(index_, vector<Models::ListIndexesResponseBodyIndexListIndex>) };
    inline vector<Models::ListIndexesResponseBodyIndexListIndex> index() { DARABONBA_PTR_GET(index_, vector<Models::ListIndexesResponseBodyIndexListIndex>) };
    inline ListIndexesResponseBodyIndexList& setIndex(const vector<Models::ListIndexesResponseBodyIndexListIndex> & index) { DARABONBA_PTR_SET_VALUE(index_, index) };
    inline ListIndexesResponseBodyIndexList& setIndex(vector<Models::ListIndexesResponseBodyIndexListIndex> && index) { DARABONBA_PTR_SET_RVALUE(index_, index) };


  protected:
    std::shared_ptr<vector<Models::ListIndexesResponseBodyIndexListIndex>> index_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
