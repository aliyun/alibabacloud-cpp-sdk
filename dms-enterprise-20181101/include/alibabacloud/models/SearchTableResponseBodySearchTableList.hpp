// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTABLERESPONSEBODYSEARCHTABLELIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTABLERESPONSEBODYSEARCHTABLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchTableResponseBodySearchTableListSearchTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchTableResponseBodySearchTableList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTableResponseBodySearchTableList& obj) { 
      DARABONBA_PTR_TO_JSON(SearchTable, searchTable_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTableResponseBodySearchTableList& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchTable, searchTable_);
    };
    SearchTableResponseBodySearchTableList() = default ;
    SearchTableResponseBodySearchTableList(const SearchTableResponseBodySearchTableList &) = default ;
    SearchTableResponseBodySearchTableList(SearchTableResponseBodySearchTableList &&) = default ;
    SearchTableResponseBodySearchTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTableResponseBodySearchTableList() = default ;
    SearchTableResponseBodySearchTableList& operator=(const SearchTableResponseBodySearchTableList &) = default ;
    SearchTableResponseBodySearchTableList& operator=(SearchTableResponseBodySearchTableList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->searchTable_ == nullptr; };
    // searchTable Field Functions 
    bool hasSearchTable() const { return this->searchTable_ != nullptr;};
    void deleteSearchTable() { this->searchTable_ = nullptr;};
    inline const vector<Models::SearchTableResponseBodySearchTableListSearchTable> & searchTable() const { DARABONBA_PTR_GET_CONST(searchTable_, vector<Models::SearchTableResponseBodySearchTableListSearchTable>) };
    inline vector<Models::SearchTableResponseBodySearchTableListSearchTable> searchTable() { DARABONBA_PTR_GET(searchTable_, vector<Models::SearchTableResponseBodySearchTableListSearchTable>) };
    inline SearchTableResponseBodySearchTableList& setSearchTable(const vector<Models::SearchTableResponseBodySearchTableListSearchTable> & searchTable) { DARABONBA_PTR_SET_VALUE(searchTable_, searchTable) };
    inline SearchTableResponseBodySearchTableList& setSearchTable(vector<Models::SearchTableResponseBodySearchTableListSearchTable> && searchTable) { DARABONBA_PTR_SET_RVALUE(searchTable_, searchTable) };


  protected:
    std::shared_ptr<vector<Models::SearchTableResponseBodySearchTableListSearchTable>> searchTable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
