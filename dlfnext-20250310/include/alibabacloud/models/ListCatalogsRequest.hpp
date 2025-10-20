// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATALOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCATALOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListCatalogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCatalogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(catalogNamePattern, catalogNamePattern_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(pageToken, pageToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListCatalogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogNamePattern, catalogNamePattern_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(pageToken, pageToken_);
    };
    ListCatalogsRequest() = default ;
    ListCatalogsRequest(const ListCatalogsRequest &) = default ;
    ListCatalogsRequest(ListCatalogsRequest &&) = default ;
    ListCatalogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCatalogsRequest() = default ;
    ListCatalogsRequest& operator=(const ListCatalogsRequest &) = default ;
    ListCatalogsRequest& operator=(ListCatalogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogNamePattern_ == nullptr
        && return this->maxResults_ == nullptr && return this->pageToken_ == nullptr; };
    // catalogNamePattern Field Functions 
    bool hasCatalogNamePattern() const { return this->catalogNamePattern_ != nullptr;};
    void deleteCatalogNamePattern() { this->catalogNamePattern_ = nullptr;};
    inline string catalogNamePattern() const { DARABONBA_PTR_GET_DEFAULT(catalogNamePattern_, "") };
    inline ListCatalogsRequest& setCatalogNamePattern(string catalogNamePattern) { DARABONBA_PTR_SET_VALUE(catalogNamePattern_, catalogNamePattern) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCatalogsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string pageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline ListCatalogsRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


  protected:
    std::shared_ptr<string> catalogNamePattern_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> pageToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
