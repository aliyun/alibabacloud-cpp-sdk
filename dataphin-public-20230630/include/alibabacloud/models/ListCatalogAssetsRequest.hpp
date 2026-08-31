// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATALOGASSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCATALOGASSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListCatalogAssetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCatalogAssetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListCatalogAssetsQuery, listCatalogAssetsQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCatalogAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListCatalogAssetsQuery, listCatalogAssetsQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ListCatalogAssetsRequest() = default ;
    ListCatalogAssetsRequest(const ListCatalogAssetsRequest &) = default ;
    ListCatalogAssetsRequest(ListCatalogAssetsRequest &&) = default ;
    ListCatalogAssetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCatalogAssetsRequest() = default ;
    ListCatalogAssetsRequest& operator=(const ListCatalogAssetsRequest &) = default ;
    ListCatalogAssetsRequest& operator=(ListCatalogAssetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListCatalogAssetsQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListCatalogAssetsQuery& obj) { 
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(QueryMode, queryMode_);
        DARABONBA_PTR_TO_JSON(ShelveDirectoryIds, shelveDirectoryIds_);
      };
      friend void from_json(const Darabonba::Json& j, ListCatalogAssetsQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(QueryMode, queryMode_);
        DARABONBA_PTR_FROM_JSON(ShelveDirectoryIds, shelveDirectoryIds_);
      };
      ListCatalogAssetsQuery() = default ;
      ListCatalogAssetsQuery(const ListCatalogAssetsQuery &) = default ;
      ListCatalogAssetsQuery(ListCatalogAssetsQuery &&) = default ;
      ListCatalogAssetsQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListCatalogAssetsQuery() = default ;
      ListCatalogAssetsQuery& operator=(const ListCatalogAssetsQuery &) = default ;
      ListCatalogAssetsQuery& operator=(ListCatalogAssetsQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetType_ == nullptr
        && this->keyword_ == nullptr && this->name_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->queryMode_ == nullptr
        && this->shelveDirectoryIds_ == nullptr; };
      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
      inline ListCatalogAssetsQuery& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListCatalogAssetsQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ListCatalogAssetsQuery& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline ListCatalogAssetsQuery& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListCatalogAssetsQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // queryMode Field Functions 
      bool hasQueryMode() const { return this->queryMode_ != nullptr;};
      void deleteQueryMode() { this->queryMode_ = nullptr;};
      inline string getQueryMode() const { DARABONBA_PTR_GET_DEFAULT(queryMode_, "") };
      inline ListCatalogAssetsQuery& setQueryMode(string queryMode) { DARABONBA_PTR_SET_VALUE(queryMode_, queryMode) };


      // shelveDirectoryIds Field Functions 
      bool hasShelveDirectoryIds() const { return this->shelveDirectoryIds_ != nullptr;};
      void deleteShelveDirectoryIds() { this->shelveDirectoryIds_ = nullptr;};
      inline const vector<int64_t> & getShelveDirectoryIds() const { DARABONBA_PTR_GET_CONST(shelveDirectoryIds_, vector<int64_t>) };
      inline vector<int64_t> getShelveDirectoryIds() { DARABONBA_PTR_GET(shelveDirectoryIds_, vector<int64_t>) };
      inline ListCatalogAssetsQuery& setShelveDirectoryIds(const vector<int64_t> & shelveDirectoryIds) { DARABONBA_PTR_SET_VALUE(shelveDirectoryIds_, shelveDirectoryIds) };
      inline ListCatalogAssetsQuery& setShelveDirectoryIds(vector<int64_t> && shelveDirectoryIds) { DARABONBA_PTR_SET_RVALUE(shelveDirectoryIds_, shelveDirectoryIds) };


    protected:
      // The asset type. Default value: TABLE. Valid values:
      // - TABLE: tables, including views and materialized views.
      // - INDEX: technical metrics.
      // - BIZ_INDEX: business metrics.
      // - API
      // - PAGE: dashboards.
      shared_ptr<string> assetType_ {};
      // The search keyword. Used when queryMode is set to ASSET_SEARCH. Supports keyword matching against the asset full name, asset name, asset display name, and asset description. If not specified, all assets are returned by default.
      shared_ptr<string> keyword_ {};
      // The asset name. Used when queryMode is set to EXACT_MATCH. If not specified, all assets are returned by default.
      shared_ptr<string> name_ {};
      // The page number. Default value: 1.
      shared_ptr<int32_t> pageNum_ {};
      // The page size. Default value: 10.
      shared_ptr<int32_t> pageSize_ {};
      // The query type. Determines whether to use name for exact match or keyword for fuzzy search. Default value: EXACT_MATCH. Valid values:
      // - EXACT_MATCH: exact match.
      // - ASSET_SEARCH: fuzzy search.
      shared_ptr<string> queryMode_ {};
      // The list of folder IDs to which the assets belong. Multiple folders are matched with OR logic. Only the specified folders are matched, and subfolders are not included.
      shared_ptr<vector<int64_t>> shelveDirectoryIds_ {};
    };

    virtual bool empty() const override { return this->listCatalogAssetsQuery_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // listCatalogAssetsQuery Field Functions 
    bool hasListCatalogAssetsQuery() const { return this->listCatalogAssetsQuery_ != nullptr;};
    void deleteListCatalogAssetsQuery() { this->listCatalogAssetsQuery_ = nullptr;};
    inline const ListCatalogAssetsRequest::ListCatalogAssetsQuery & getListCatalogAssetsQuery() const { DARABONBA_PTR_GET_CONST(listCatalogAssetsQuery_, ListCatalogAssetsRequest::ListCatalogAssetsQuery) };
    inline ListCatalogAssetsRequest::ListCatalogAssetsQuery getListCatalogAssetsQuery() { DARABONBA_PTR_GET(listCatalogAssetsQuery_, ListCatalogAssetsRequest::ListCatalogAssetsQuery) };
    inline ListCatalogAssetsRequest& setListCatalogAssetsQuery(const ListCatalogAssetsRequest::ListCatalogAssetsQuery & listCatalogAssetsQuery) { DARABONBA_PTR_SET_VALUE(listCatalogAssetsQuery_, listCatalogAssetsQuery) };
    inline ListCatalogAssetsRequest& setListCatalogAssetsQuery(ListCatalogAssetsRequest::ListCatalogAssetsQuery && listCatalogAssetsQuery) { DARABONBA_PTR_SET_RVALUE(listCatalogAssetsQuery_, listCatalogAssetsQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListCatalogAssetsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListCatalogAssetsRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The query parameters.
    // 
    // This parameter is required.
    shared_ptr<ListCatalogAssetsRequest::ListCatalogAssetsQuery> listCatalogAssetsQuery_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
