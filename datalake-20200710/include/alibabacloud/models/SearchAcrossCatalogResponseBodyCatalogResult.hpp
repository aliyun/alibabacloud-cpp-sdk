// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHACROSSCATALOGRESPONSEBODYCATALOGRESULT_HPP_
#define ALIBABACLOUD_MODELS_SEARCHACROSSCATALOGRESPONSEBODYCATALOGRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchAcrossCatalogResponseBodyCatalogResultCatalogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class SearchAcrossCatalogResponseBodyCatalogResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAcrossCatalogResponseBodyCatalogResult& obj) { 
      DARABONBA_PTR_TO_JSON(Catalogs, catalogs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAcrossCatalogResponseBodyCatalogResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Catalogs, catalogs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchAcrossCatalogResponseBodyCatalogResult() = default ;
    SearchAcrossCatalogResponseBodyCatalogResult(const SearchAcrossCatalogResponseBodyCatalogResult &) = default ;
    SearchAcrossCatalogResponseBodyCatalogResult(SearchAcrossCatalogResponseBodyCatalogResult &&) = default ;
    SearchAcrossCatalogResponseBodyCatalogResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAcrossCatalogResponseBodyCatalogResult() = default ;
    SearchAcrossCatalogResponseBodyCatalogResult& operator=(const SearchAcrossCatalogResponseBodyCatalogResult &) = default ;
    SearchAcrossCatalogResponseBodyCatalogResult& operator=(SearchAcrossCatalogResponseBodyCatalogResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogs_ == nullptr
        && return this->totalCount_ == nullptr; };
    // catalogs Field Functions 
    bool hasCatalogs() const { return this->catalogs_ != nullptr;};
    void deleteCatalogs() { this->catalogs_ = nullptr;};
    inline const vector<Models::SearchAcrossCatalogResponseBodyCatalogResultCatalogs> & catalogs() const { DARABONBA_PTR_GET_CONST(catalogs_, vector<Models::SearchAcrossCatalogResponseBodyCatalogResultCatalogs>) };
    inline vector<Models::SearchAcrossCatalogResponseBodyCatalogResultCatalogs> catalogs() { DARABONBA_PTR_GET(catalogs_, vector<Models::SearchAcrossCatalogResponseBodyCatalogResultCatalogs>) };
    inline SearchAcrossCatalogResponseBodyCatalogResult& setCatalogs(const vector<Models::SearchAcrossCatalogResponseBodyCatalogResultCatalogs> & catalogs) { DARABONBA_PTR_SET_VALUE(catalogs_, catalogs) };
    inline SearchAcrossCatalogResponseBodyCatalogResult& setCatalogs(vector<Models::SearchAcrossCatalogResponseBodyCatalogResultCatalogs> && catalogs) { DARABONBA_PTR_SET_RVALUE(catalogs_, catalogs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchAcrossCatalogResponseBodyCatalogResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned catalogs.
    std::shared_ptr<vector<Models::SearchAcrossCatalogResponseBodyCatalogResultCatalogs>> catalogs_ = nullptr;
    // Total number of catalogs that meet the match conditions
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
