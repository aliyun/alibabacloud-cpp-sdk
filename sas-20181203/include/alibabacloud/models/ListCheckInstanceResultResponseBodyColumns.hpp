// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTRESPONSEBODYCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTRESPONSEBODYCOLUMNS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckInstanceResultResponseBodyColumnsGrids.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckInstanceResultResponseBodyColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckInstanceResultResponseBodyColumns& obj) { 
      DARABONBA_PTR_TO_JSON(Grids, grids_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Search, search_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckInstanceResultResponseBodyColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(Grids, grids_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Search, search_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListCheckInstanceResultResponseBodyColumns() = default ;
    ListCheckInstanceResultResponseBodyColumns(const ListCheckInstanceResultResponseBodyColumns &) = default ;
    ListCheckInstanceResultResponseBodyColumns(ListCheckInstanceResultResponseBodyColumns &&) = default ;
    ListCheckInstanceResultResponseBodyColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckInstanceResultResponseBodyColumns() = default ;
    ListCheckInstanceResultResponseBodyColumns& operator=(const ListCheckInstanceResultResponseBodyColumns &) = default ;
    ListCheckInstanceResultResponseBodyColumns& operator=(ListCheckInstanceResultResponseBodyColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->grids_ == nullptr
        && return this->key_ == nullptr && return this->search_ == nullptr && return this->searchKey_ == nullptr && return this->showName_ == nullptr && return this->type_ == nullptr; };
    // grids Field Functions 
    bool hasGrids() const { return this->grids_ != nullptr;};
    void deleteGrids() { this->grids_ = nullptr;};
    inline const vector<Models::ListCheckInstanceResultResponseBodyColumnsGrids> & grids() const { DARABONBA_PTR_GET_CONST(grids_, vector<Models::ListCheckInstanceResultResponseBodyColumnsGrids>) };
    inline vector<Models::ListCheckInstanceResultResponseBodyColumnsGrids> grids() { DARABONBA_PTR_GET(grids_, vector<Models::ListCheckInstanceResultResponseBodyColumnsGrids>) };
    inline ListCheckInstanceResultResponseBodyColumns& setGrids(const vector<Models::ListCheckInstanceResultResponseBodyColumnsGrids> & grids) { DARABONBA_PTR_SET_VALUE(grids_, grids) };
    inline ListCheckInstanceResultResponseBodyColumns& setGrids(vector<Models::ListCheckInstanceResultResponseBodyColumnsGrids> && grids) { DARABONBA_PTR_SET_RVALUE(grids_, grids) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListCheckInstanceResultResponseBodyColumns& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline bool search() const { DARABONBA_PTR_GET_DEFAULT(search_, false) };
    inline ListCheckInstanceResultResponseBodyColumns& setSearch(bool search) { DARABONBA_PTR_SET_VALUE(search_, search) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string searchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListCheckInstanceResultResponseBodyColumns& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ListCheckInstanceResultResponseBodyColumns& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCheckInstanceResultResponseBodyColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The metadata information about the details of the instance.
    std::shared_ptr<vector<Models::ListCheckInstanceResultResponseBodyColumnsGrids>> grids_ = nullptr;
    // The search condition.
    std::shared_ptr<string> key_ = nullptr;
    // Indicates whether the search condition is used. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> search_ = nullptr;
    // The search key.
    std::shared_ptr<string> searchKey_ = nullptr;
    // The display name of the search condition.
    std::shared_ptr<string> showName_ = nullptr;
    // The type of the check result for the instance. Valid values:
    // 
    // *   **text**
    // *   **link**
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
