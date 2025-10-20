// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATALOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCATALOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Catalog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListCatalogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCatalogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(catalogs, catalogs_);
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListCatalogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogs, catalogs_);
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
    };
    ListCatalogsResponseBody() = default ;
    ListCatalogsResponseBody(const ListCatalogsResponseBody &) = default ;
    ListCatalogsResponseBody(ListCatalogsResponseBody &&) = default ;
    ListCatalogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCatalogsResponseBody() = default ;
    ListCatalogsResponseBody& operator=(const ListCatalogsResponseBody &) = default ;
    ListCatalogsResponseBody& operator=(ListCatalogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogs_ == nullptr
        && return this->nextPageToken_ == nullptr; };
    // catalogs Field Functions 
    bool hasCatalogs() const { return this->catalogs_ != nullptr;};
    void deleteCatalogs() { this->catalogs_ = nullptr;};
    inline const vector<Catalog> & catalogs() const { DARABONBA_PTR_GET_CONST(catalogs_, vector<Catalog>) };
    inline vector<Catalog> catalogs() { DARABONBA_PTR_GET(catalogs_, vector<Catalog>) };
    inline ListCatalogsResponseBody& setCatalogs(const vector<Catalog> & catalogs) { DARABONBA_PTR_SET_VALUE(catalogs_, catalogs) };
    inline ListCatalogsResponseBody& setCatalogs(vector<Catalog> && catalogs) { DARABONBA_PTR_SET_RVALUE(catalogs_, catalogs) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListCatalogsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


  protected:
    std::shared_ptr<vector<Catalog>> catalogs_ = nullptr;
    std::shared_ptr<string> nextPageToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
