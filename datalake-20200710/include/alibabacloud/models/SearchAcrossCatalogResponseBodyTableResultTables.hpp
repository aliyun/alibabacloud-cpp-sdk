// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHACROSSCATALOGRESPONSEBODYTABLERESULTTABLES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHACROSSCATALOGRESPONSEBODYTABLERESULTTABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HighLight.hpp>
#include <alibabacloud/models/Table.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class SearchAcrossCatalogResponseBodyTableResultTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAcrossCatalogResponseBodyTableResultTables& obj) { 
      DARABONBA_PTR_TO_JSON(HighLightList, highLightList_);
      DARABONBA_PTR_TO_JSON(Table, table_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAcrossCatalogResponseBodyTableResultTables& obj) { 
      DARABONBA_PTR_FROM_JSON(HighLightList, highLightList_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
    };
    SearchAcrossCatalogResponseBodyTableResultTables() = default ;
    SearchAcrossCatalogResponseBodyTableResultTables(const SearchAcrossCatalogResponseBodyTableResultTables &) = default ;
    SearchAcrossCatalogResponseBodyTableResultTables(SearchAcrossCatalogResponseBodyTableResultTables &&) = default ;
    SearchAcrossCatalogResponseBodyTableResultTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAcrossCatalogResponseBodyTableResultTables() = default ;
    SearchAcrossCatalogResponseBodyTableResultTables& operator=(const SearchAcrossCatalogResponseBodyTableResultTables &) = default ;
    SearchAcrossCatalogResponseBodyTableResultTables& operator=(SearchAcrossCatalogResponseBodyTableResultTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->highLightList_ == nullptr
        && return this->table_ == nullptr; };
    // highLightList Field Functions 
    bool hasHighLightList() const { return this->highLightList_ != nullptr;};
    void deleteHighLightList() { this->highLightList_ = nullptr;};
    inline const vector<Models::HighLight> & highLightList() const { DARABONBA_PTR_GET_CONST(highLightList_, vector<Models::HighLight>) };
    inline vector<Models::HighLight> highLightList() { DARABONBA_PTR_GET(highLightList_, vector<Models::HighLight>) };
    inline SearchAcrossCatalogResponseBodyTableResultTables& setHighLightList(const vector<Models::HighLight> & highLightList) { DARABONBA_PTR_SET_VALUE(highLightList_, highLightList) };
    inline SearchAcrossCatalogResponseBodyTableResultTables& setHighLightList(vector<Models::HighLight> && highLightList) { DARABONBA_PTR_SET_RVALUE(highLightList_, highLightList) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const Models::Table & table() const { DARABONBA_PTR_GET_CONST(table_, Models::Table) };
    inline Models::Table table() { DARABONBA_PTR_GET(table_, Models::Table) };
    inline SearchAcrossCatalogResponseBodyTableResultTables& setTable(const Models::Table & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline SearchAcrossCatalogResponseBodyTableResultTables& setTable(Models::Table && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


  protected:
    // The returned highlighted text.
    std::shared_ptr<vector<Models::HighLight>> highLightList_ = nullptr;
    // The returned table.
    std::shared_ptr<Models::Table> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
