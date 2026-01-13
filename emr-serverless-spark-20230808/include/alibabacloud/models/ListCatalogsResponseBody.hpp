// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATALOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCATALOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListCatalogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCatalogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(catalogs, catalogs_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCatalogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogs, catalogs_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
    class Catalogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Catalogs& obj) { 
        DARABONBA_PTR_TO_JSON(alias, alias_);
        DARABONBA_PTR_TO_JSON(catalogId, catalogId_);
        DARABONBA_PTR_TO_JSON(catalogProvider, catalogProvider_);
        DARABONBA_PTR_TO_JSON(catalogType, catalogType_);
        DARABONBA_PTR_TO_JSON(environments, environments_);
        DARABONBA_PTR_TO_JSON(extras, extras_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(resourceOwnerId, resourceOwnerId_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Catalogs& obj) { 
        DARABONBA_PTR_FROM_JSON(alias, alias_);
        DARABONBA_PTR_FROM_JSON(catalogId, catalogId_);
        DARABONBA_PTR_FROM_JSON(catalogProvider, catalogProvider_);
        DARABONBA_PTR_FROM_JSON(catalogType, catalogType_);
        DARABONBA_PTR_FROM_JSON(environments, environments_);
        DARABONBA_PTR_FROM_JSON(extras, extras_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(resourceOwnerId, resourceOwnerId_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Catalogs() = default ;
      Catalogs(const Catalogs &) = default ;
      Catalogs(Catalogs &&) = default ;
      Catalogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Catalogs() = default ;
      Catalogs& operator=(const Catalogs &) = default ;
      Catalogs& operator=(Catalogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->catalogId_ == nullptr && this->catalogProvider_ == nullptr && this->catalogType_ == nullptr && this->environments_ == nullptr && this->extras_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->resourceOwnerId_ == nullptr && this->workspaceId_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Catalogs& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // catalogId Field Functions 
      bool hasCatalogId() const { return this->catalogId_ != nullptr;};
      void deleteCatalogId() { this->catalogId_ = nullptr;};
      inline string getCatalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
      inline Catalogs& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


      // catalogProvider Field Functions 
      bool hasCatalogProvider() const { return this->catalogProvider_ != nullptr;};
      void deleteCatalogProvider() { this->catalogProvider_ = nullptr;};
      inline string getCatalogProvider() const { DARABONBA_PTR_GET_DEFAULT(catalogProvider_, "") };
      inline Catalogs& setCatalogProvider(string catalogProvider) { DARABONBA_PTR_SET_VALUE(catalogProvider_, catalogProvider) };


      // catalogType Field Functions 
      bool hasCatalogType() const { return this->catalogType_ != nullptr;};
      void deleteCatalogType() { this->catalogType_ = nullptr;};
      inline string getCatalogType() const { DARABONBA_PTR_GET_DEFAULT(catalogType_, "") };
      inline Catalogs& setCatalogType(string catalogType) { DARABONBA_PTR_SET_VALUE(catalogType_, catalogType) };


      // environments Field Functions 
      bool hasEnvironments() const { return this->environments_ != nullptr;};
      void deleteEnvironments() { this->environments_ = nullptr;};
      inline const vector<string> & getEnvironments() const { DARABONBA_PTR_GET_CONST(environments_, vector<string>) };
      inline vector<string> getEnvironments() { DARABONBA_PTR_GET(environments_, vector<string>) };
      inline Catalogs& setEnvironments(const vector<string> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
      inline Catalogs& setEnvironments(vector<string> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


      // extras Field Functions 
      bool hasExtras() const { return this->extras_ != nullptr;};
      void deleteExtras() { this->extras_ = nullptr;};
      inline const map<string, string> & getExtras() const { DARABONBA_PTR_GET_CONST(extras_, map<string, string>) };
      inline map<string, string> getExtras() { DARABONBA_PTR_GET(extras_, map<string, string>) };
      inline Catalogs& setExtras(const map<string, string> & extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };
      inline Catalogs& setExtras(map<string, string> && extras) { DARABONBA_PTR_SET_RVALUE(extras_, extras) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Catalogs& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Catalogs& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // resourceOwnerId Field Functions 
      bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
      void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
      inline string getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
      inline Catalogs& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Catalogs& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> alias_ {};
      // regionId。
      shared_ptr<string> catalogId_ {};
      shared_ptr<string> catalogProvider_ {};
      shared_ptr<string> catalogType_ {};
      shared_ptr<vector<string>> environments_ {};
      shared_ptr<map<string, string>> extras_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<string> resourceOwnerId_ {};
      // 工作空间id。
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->catalogs_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // catalogs Field Functions 
    bool hasCatalogs() const { return this->catalogs_ != nullptr;};
    void deleteCatalogs() { this->catalogs_ = nullptr;};
    inline const vector<ListCatalogsResponseBody::Catalogs> & getCatalogs() const { DARABONBA_PTR_GET_CONST(catalogs_, vector<ListCatalogsResponseBody::Catalogs>) };
    inline vector<ListCatalogsResponseBody::Catalogs> getCatalogs() { DARABONBA_PTR_GET(catalogs_, vector<ListCatalogsResponseBody::Catalogs>) };
    inline ListCatalogsResponseBody& setCatalogs(const vector<ListCatalogsResponseBody::Catalogs> & catalogs) { DARABONBA_PTR_SET_VALUE(catalogs_, catalogs) };
    inline ListCatalogsResponseBody& setCatalogs(vector<ListCatalogsResponseBody::Catalogs> && catalogs) { DARABONBA_PTR_SET_RVALUE(catalogs_, catalogs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCatalogsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCatalogsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCatalogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCatalogsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListCatalogsResponseBody::Catalogs>> catalogs_ {};
    // 一次获取的最大记录数。
    shared_ptr<int32_t> maxResults_ {};
    // 下一页TOKEN。
    shared_ptr<string> nextToken_ {};
    // 请求ID。
    shared_ptr<string> requestId_ {};
    // 记录总数。
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
