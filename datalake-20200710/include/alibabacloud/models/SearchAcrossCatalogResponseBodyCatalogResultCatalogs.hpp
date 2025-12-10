// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHACROSSCATALOGRESPONSEBODYCATALOGRESULTCATALOGS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHACROSSCATALOGRESPONSEBODYCATALOGRESULTCATALOGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Catalog.hpp>
#include <vector>
#include <alibabacloud/models/HighLight.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class SearchAcrossCatalogResponseBodyCatalogResultCatalogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAcrossCatalogResponseBodyCatalogResultCatalogs& obj) { 
      DARABONBA_PTR_TO_JSON(Catalog, catalog_);
      DARABONBA_PTR_TO_JSON(HighLightList, highLightList_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAcrossCatalogResponseBodyCatalogResultCatalogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
      DARABONBA_PTR_FROM_JSON(HighLightList, highLightList_);
    };
    SearchAcrossCatalogResponseBodyCatalogResultCatalogs() = default ;
    SearchAcrossCatalogResponseBodyCatalogResultCatalogs(const SearchAcrossCatalogResponseBodyCatalogResultCatalogs &) = default ;
    SearchAcrossCatalogResponseBodyCatalogResultCatalogs(SearchAcrossCatalogResponseBodyCatalogResultCatalogs &&) = default ;
    SearchAcrossCatalogResponseBodyCatalogResultCatalogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAcrossCatalogResponseBodyCatalogResultCatalogs() = default ;
    SearchAcrossCatalogResponseBodyCatalogResultCatalogs& operator=(const SearchAcrossCatalogResponseBodyCatalogResultCatalogs &) = default ;
    SearchAcrossCatalogResponseBodyCatalogResultCatalogs& operator=(SearchAcrossCatalogResponseBodyCatalogResultCatalogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalog_ == nullptr
        && return this->highLightList_ == nullptr; };
    // catalog Field Functions 
    bool hasCatalog() const { return this->catalog_ != nullptr;};
    void deleteCatalog() { this->catalog_ = nullptr;};
    inline const Models::Catalog & catalog() const { DARABONBA_PTR_GET_CONST(catalog_, Models::Catalog) };
    inline Models::Catalog catalog() { DARABONBA_PTR_GET(catalog_, Models::Catalog) };
    inline SearchAcrossCatalogResponseBodyCatalogResultCatalogs& setCatalog(const Models::Catalog & catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };
    inline SearchAcrossCatalogResponseBodyCatalogResultCatalogs& setCatalog(Models::Catalog && catalog) { DARABONBA_PTR_SET_RVALUE(catalog_, catalog) };


    // highLightList Field Functions 
    bool hasHighLightList() const { return this->highLightList_ != nullptr;};
    void deleteHighLightList() { this->highLightList_ = nullptr;};
    inline const vector<Models::HighLight> & highLightList() const { DARABONBA_PTR_GET_CONST(highLightList_, vector<Models::HighLight>) };
    inline vector<Models::HighLight> highLightList() { DARABONBA_PTR_GET(highLightList_, vector<Models::HighLight>) };
    inline SearchAcrossCatalogResponseBodyCatalogResultCatalogs& setHighLightList(const vector<Models::HighLight> & highLightList) { DARABONBA_PTR_SET_VALUE(highLightList_, highLightList) };
    inline SearchAcrossCatalogResponseBodyCatalogResultCatalogs& setHighLightList(vector<Models::HighLight> && highLightList) { DARABONBA_PTR_SET_RVALUE(highLightList_, highLightList) };


  protected:
    // The returned catalog.
    std::shared_ptr<Models::Catalog> catalog_ = nullptr;
    // The returned highlighted text.
    std::shared_ptr<vector<Models::HighLight>> highLightList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
