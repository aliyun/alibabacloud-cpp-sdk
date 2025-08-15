// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHARERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSHARERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ShareResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListShareResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListShareResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(catalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(shareResources, shareResources_);
    };
    friend void from_json(const Darabonba::Json& j, ListShareResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(shareResources, shareResources_);
    };
    ListShareResourcesResponseBody() = default ;
    ListShareResourcesResponseBody(const ListShareResourcesResponseBody &) = default ;
    ListShareResourcesResponseBody(ListShareResourcesResponseBody &&) = default ;
    ListShareResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListShareResourcesResponseBody() = default ;
    ListShareResourcesResponseBody& operator=(const ListShareResourcesResponseBody &) = default ;
    ListShareResourcesResponseBody& operator=(ListShareResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalogId_ != nullptr
        && this->nextPageToken_ != nullptr && this->shareResources_ != nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline ListShareResourcesResponseBody& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListShareResourcesResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // shareResources Field Functions 
    bool hasShareResources() const { return this->shareResources_ != nullptr;};
    void deleteShareResources() { this->shareResources_ = nullptr;};
    inline const vector<ShareResource> & shareResources() const { DARABONBA_PTR_GET_CONST(shareResources_, vector<ShareResource>) };
    inline vector<ShareResource> shareResources() { DARABONBA_PTR_GET(shareResources_, vector<ShareResource>) };
    inline ListShareResourcesResponseBody& setShareResources(const vector<ShareResource> & shareResources) { DARABONBA_PTR_SET_VALUE(shareResources_, shareResources) };
    inline ListShareResourcesResponseBody& setShareResources(vector<ShareResource> && shareResources) { DARABONBA_PTR_SET_RVALUE(shareResources_, shareResources) };


  protected:
    std::shared_ptr<string> catalogId_ = nullptr;
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<vector<ShareResource>> shareResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
