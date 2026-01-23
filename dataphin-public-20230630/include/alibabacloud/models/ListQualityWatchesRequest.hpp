// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYWATCHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYWATCHESREQUEST_HPP_
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
  class ListQualityWatchesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityWatchesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityWatchesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListQualityWatchesRequest() = default ;
    ListQualityWatchesRequest(const ListQualityWatchesRequest &) = default ;
    ListQualityWatchesRequest(ListQualityWatchesRequest &&) = default ;
    ListQualityWatchesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityWatchesRequest() = default ;
    ListQualityWatchesRequest& operator=(const ListQualityWatchesRequest &) = default ;
    ListQualityWatchesRequest& operator=(ListQualityWatchesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(BizUnitNameList, bizUnitNameList_);
        DARABONBA_PTR_TO_JSON(CurrentUserOwned, currentUserOwned_);
        DARABONBA_PTR_TO_JSON(DataSourceIdList, dataSourceIdList_);
        DARABONBA_PTR_TO_JSON(DataSourceOwnerList, dataSourceOwnerList_);
        DARABONBA_PTR_TO_JSON(DataSourceScopeList, dataSourceScopeList_);
        DARABONBA_PTR_TO_JSON(DataSourceTypeList, dataSourceTypeList_);
        DARABONBA_PTR_TO_JSON(IndexComputeTypeList, indexComputeTypeList_);
        DARABONBA_PTR_TO_JSON(IndexOwnerList, indexOwnerList_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(LatestWatchTaskStatusList, latestWatchTaskStatusList_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ProjectNameList, projectNameList_);
        DARABONBA_PTR_TO_JSON(QualityOwnerList, qualityOwnerList_);
        DARABONBA_PTR_TO_JSON(StatusList, statusList_);
        DARABONBA_PTR_TO_JSON(TableOwnerList, tableOwnerList_);
        DARABONBA_PTR_TO_JSON(TableTypeList, tableTypeList_);
        DARABONBA_PTR_TO_JSON(WatchTypeList, watchTypeList_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(BizUnitNameList, bizUnitNameList_);
        DARABONBA_PTR_FROM_JSON(CurrentUserOwned, currentUserOwned_);
        DARABONBA_PTR_FROM_JSON(DataSourceIdList, dataSourceIdList_);
        DARABONBA_PTR_FROM_JSON(DataSourceOwnerList, dataSourceOwnerList_);
        DARABONBA_PTR_FROM_JSON(DataSourceScopeList, dataSourceScopeList_);
        DARABONBA_PTR_FROM_JSON(DataSourceTypeList, dataSourceTypeList_);
        DARABONBA_PTR_FROM_JSON(IndexComputeTypeList, indexComputeTypeList_);
        DARABONBA_PTR_FROM_JSON(IndexOwnerList, indexOwnerList_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(LatestWatchTaskStatusList, latestWatchTaskStatusList_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ProjectNameList, projectNameList_);
        DARABONBA_PTR_FROM_JSON(QualityOwnerList, qualityOwnerList_);
        DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
        DARABONBA_PTR_FROM_JSON(TableOwnerList, tableOwnerList_);
        DARABONBA_PTR_FROM_JSON(TableTypeList, tableTypeList_);
        DARABONBA_PTR_FROM_JSON(WatchTypeList, watchTypeList_);
      };
      ListQuery() = default ;
      ListQuery(const ListQuery &) = default ;
      ListQuery(ListQuery &&) = default ;
      ListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListQuery() = default ;
      ListQuery& operator=(const ListQuery &) = default ;
      ListQuery& operator=(ListQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizUnitNameList_ == nullptr
        && this->currentUserOwned_ == nullptr && this->dataSourceIdList_ == nullptr && this->dataSourceOwnerList_ == nullptr && this->dataSourceScopeList_ == nullptr && this->dataSourceTypeList_ == nullptr
        && this->indexComputeTypeList_ == nullptr && this->indexOwnerList_ == nullptr && this->keyword_ == nullptr && this->latestWatchTaskStatusList_ == nullptr && this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->projectNameList_ == nullptr && this->qualityOwnerList_ == nullptr && this->statusList_ == nullptr && this->tableOwnerList_ == nullptr
        && this->tableTypeList_ == nullptr && this->watchTypeList_ == nullptr; };
      // bizUnitNameList Field Functions 
      bool hasBizUnitNameList() const { return this->bizUnitNameList_ != nullptr;};
      void deleteBizUnitNameList() { this->bizUnitNameList_ = nullptr;};
      inline const vector<string> & getBizUnitNameList() const { DARABONBA_PTR_GET_CONST(bizUnitNameList_, vector<string>) };
      inline vector<string> getBizUnitNameList() { DARABONBA_PTR_GET(bizUnitNameList_, vector<string>) };
      inline ListQuery& setBizUnitNameList(const vector<string> & bizUnitNameList) { DARABONBA_PTR_SET_VALUE(bizUnitNameList_, bizUnitNameList) };
      inline ListQuery& setBizUnitNameList(vector<string> && bizUnitNameList) { DARABONBA_PTR_SET_RVALUE(bizUnitNameList_, bizUnitNameList) };


      // currentUserOwned Field Functions 
      bool hasCurrentUserOwned() const { return this->currentUserOwned_ != nullptr;};
      void deleteCurrentUserOwned() { this->currentUserOwned_ = nullptr;};
      inline bool getCurrentUserOwned() const { DARABONBA_PTR_GET_DEFAULT(currentUserOwned_, false) };
      inline ListQuery& setCurrentUserOwned(bool currentUserOwned) { DARABONBA_PTR_SET_VALUE(currentUserOwned_, currentUserOwned) };


      // dataSourceIdList Field Functions 
      bool hasDataSourceIdList() const { return this->dataSourceIdList_ != nullptr;};
      void deleteDataSourceIdList() { this->dataSourceIdList_ = nullptr;};
      inline const vector<int64_t> & getDataSourceIdList() const { DARABONBA_PTR_GET_CONST(dataSourceIdList_, vector<int64_t>) };
      inline vector<int64_t> getDataSourceIdList() { DARABONBA_PTR_GET(dataSourceIdList_, vector<int64_t>) };
      inline ListQuery& setDataSourceIdList(const vector<int64_t> & dataSourceIdList) { DARABONBA_PTR_SET_VALUE(dataSourceIdList_, dataSourceIdList) };
      inline ListQuery& setDataSourceIdList(vector<int64_t> && dataSourceIdList) { DARABONBA_PTR_SET_RVALUE(dataSourceIdList_, dataSourceIdList) };


      // dataSourceOwnerList Field Functions 
      bool hasDataSourceOwnerList() const { return this->dataSourceOwnerList_ != nullptr;};
      void deleteDataSourceOwnerList() { this->dataSourceOwnerList_ = nullptr;};
      inline const vector<string> & getDataSourceOwnerList() const { DARABONBA_PTR_GET_CONST(dataSourceOwnerList_, vector<string>) };
      inline vector<string> getDataSourceOwnerList() { DARABONBA_PTR_GET(dataSourceOwnerList_, vector<string>) };
      inline ListQuery& setDataSourceOwnerList(const vector<string> & dataSourceOwnerList) { DARABONBA_PTR_SET_VALUE(dataSourceOwnerList_, dataSourceOwnerList) };
      inline ListQuery& setDataSourceOwnerList(vector<string> && dataSourceOwnerList) { DARABONBA_PTR_SET_RVALUE(dataSourceOwnerList_, dataSourceOwnerList) };


      // dataSourceScopeList Field Functions 
      bool hasDataSourceScopeList() const { return this->dataSourceScopeList_ != nullptr;};
      void deleteDataSourceScopeList() { this->dataSourceScopeList_ = nullptr;};
      inline const vector<string> & getDataSourceScopeList() const { DARABONBA_PTR_GET_CONST(dataSourceScopeList_, vector<string>) };
      inline vector<string> getDataSourceScopeList() { DARABONBA_PTR_GET(dataSourceScopeList_, vector<string>) };
      inline ListQuery& setDataSourceScopeList(const vector<string> & dataSourceScopeList) { DARABONBA_PTR_SET_VALUE(dataSourceScopeList_, dataSourceScopeList) };
      inline ListQuery& setDataSourceScopeList(vector<string> && dataSourceScopeList) { DARABONBA_PTR_SET_RVALUE(dataSourceScopeList_, dataSourceScopeList) };


      // dataSourceTypeList Field Functions 
      bool hasDataSourceTypeList() const { return this->dataSourceTypeList_ != nullptr;};
      void deleteDataSourceTypeList() { this->dataSourceTypeList_ = nullptr;};
      inline const vector<string> & getDataSourceTypeList() const { DARABONBA_PTR_GET_CONST(dataSourceTypeList_, vector<string>) };
      inline vector<string> getDataSourceTypeList() { DARABONBA_PTR_GET(dataSourceTypeList_, vector<string>) };
      inline ListQuery& setDataSourceTypeList(const vector<string> & dataSourceTypeList) { DARABONBA_PTR_SET_VALUE(dataSourceTypeList_, dataSourceTypeList) };
      inline ListQuery& setDataSourceTypeList(vector<string> && dataSourceTypeList) { DARABONBA_PTR_SET_RVALUE(dataSourceTypeList_, dataSourceTypeList) };


      // indexComputeTypeList Field Functions 
      bool hasIndexComputeTypeList() const { return this->indexComputeTypeList_ != nullptr;};
      void deleteIndexComputeTypeList() { this->indexComputeTypeList_ = nullptr;};
      inline const vector<string> & getIndexComputeTypeList() const { DARABONBA_PTR_GET_CONST(indexComputeTypeList_, vector<string>) };
      inline vector<string> getIndexComputeTypeList() { DARABONBA_PTR_GET(indexComputeTypeList_, vector<string>) };
      inline ListQuery& setIndexComputeTypeList(const vector<string> & indexComputeTypeList) { DARABONBA_PTR_SET_VALUE(indexComputeTypeList_, indexComputeTypeList) };
      inline ListQuery& setIndexComputeTypeList(vector<string> && indexComputeTypeList) { DARABONBA_PTR_SET_RVALUE(indexComputeTypeList_, indexComputeTypeList) };


      // indexOwnerList Field Functions 
      bool hasIndexOwnerList() const { return this->indexOwnerList_ != nullptr;};
      void deleteIndexOwnerList() { this->indexOwnerList_ = nullptr;};
      inline const vector<string> & getIndexOwnerList() const { DARABONBA_PTR_GET_CONST(indexOwnerList_, vector<string>) };
      inline vector<string> getIndexOwnerList() { DARABONBA_PTR_GET(indexOwnerList_, vector<string>) };
      inline ListQuery& setIndexOwnerList(const vector<string> & indexOwnerList) { DARABONBA_PTR_SET_VALUE(indexOwnerList_, indexOwnerList) };
      inline ListQuery& setIndexOwnerList(vector<string> && indexOwnerList) { DARABONBA_PTR_SET_RVALUE(indexOwnerList_, indexOwnerList) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // latestWatchTaskStatusList Field Functions 
      bool hasLatestWatchTaskStatusList() const { return this->latestWatchTaskStatusList_ != nullptr;};
      void deleteLatestWatchTaskStatusList() { this->latestWatchTaskStatusList_ = nullptr;};
      inline const vector<string> & getLatestWatchTaskStatusList() const { DARABONBA_PTR_GET_CONST(latestWatchTaskStatusList_, vector<string>) };
      inline vector<string> getLatestWatchTaskStatusList() { DARABONBA_PTR_GET(latestWatchTaskStatusList_, vector<string>) };
      inline ListQuery& setLatestWatchTaskStatusList(const vector<string> & latestWatchTaskStatusList) { DARABONBA_PTR_SET_VALUE(latestWatchTaskStatusList_, latestWatchTaskStatusList) };
      inline ListQuery& setLatestWatchTaskStatusList(vector<string> && latestWatchTaskStatusList) { DARABONBA_PTR_SET_RVALUE(latestWatchTaskStatusList_, latestWatchTaskStatusList) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline ListQuery& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // projectNameList Field Functions 
      bool hasProjectNameList() const { return this->projectNameList_ != nullptr;};
      void deleteProjectNameList() { this->projectNameList_ = nullptr;};
      inline const vector<string> & getProjectNameList() const { DARABONBA_PTR_GET_CONST(projectNameList_, vector<string>) };
      inline vector<string> getProjectNameList() { DARABONBA_PTR_GET(projectNameList_, vector<string>) };
      inline ListQuery& setProjectNameList(const vector<string> & projectNameList) { DARABONBA_PTR_SET_VALUE(projectNameList_, projectNameList) };
      inline ListQuery& setProjectNameList(vector<string> && projectNameList) { DARABONBA_PTR_SET_RVALUE(projectNameList_, projectNameList) };


      // qualityOwnerList Field Functions 
      bool hasQualityOwnerList() const { return this->qualityOwnerList_ != nullptr;};
      void deleteQualityOwnerList() { this->qualityOwnerList_ = nullptr;};
      inline const vector<string> & getQualityOwnerList() const { DARABONBA_PTR_GET_CONST(qualityOwnerList_, vector<string>) };
      inline vector<string> getQualityOwnerList() { DARABONBA_PTR_GET(qualityOwnerList_, vector<string>) };
      inline ListQuery& setQualityOwnerList(const vector<string> & qualityOwnerList) { DARABONBA_PTR_SET_VALUE(qualityOwnerList_, qualityOwnerList) };
      inline ListQuery& setQualityOwnerList(vector<string> && qualityOwnerList) { DARABONBA_PTR_SET_RVALUE(qualityOwnerList_, qualityOwnerList) };


      // statusList Field Functions 
      bool hasStatusList() const { return this->statusList_ != nullptr;};
      void deleteStatusList() { this->statusList_ = nullptr;};
      inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
      inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
      inline ListQuery& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
      inline ListQuery& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


      // tableOwnerList Field Functions 
      bool hasTableOwnerList() const { return this->tableOwnerList_ != nullptr;};
      void deleteTableOwnerList() { this->tableOwnerList_ = nullptr;};
      inline const vector<string> & getTableOwnerList() const { DARABONBA_PTR_GET_CONST(tableOwnerList_, vector<string>) };
      inline vector<string> getTableOwnerList() { DARABONBA_PTR_GET(tableOwnerList_, vector<string>) };
      inline ListQuery& setTableOwnerList(const vector<string> & tableOwnerList) { DARABONBA_PTR_SET_VALUE(tableOwnerList_, tableOwnerList) };
      inline ListQuery& setTableOwnerList(vector<string> && tableOwnerList) { DARABONBA_PTR_SET_RVALUE(tableOwnerList_, tableOwnerList) };


      // tableTypeList Field Functions 
      bool hasTableTypeList() const { return this->tableTypeList_ != nullptr;};
      void deleteTableTypeList() { this->tableTypeList_ = nullptr;};
      inline const vector<string> & getTableTypeList() const { DARABONBA_PTR_GET_CONST(tableTypeList_, vector<string>) };
      inline vector<string> getTableTypeList() { DARABONBA_PTR_GET(tableTypeList_, vector<string>) };
      inline ListQuery& setTableTypeList(const vector<string> & tableTypeList) { DARABONBA_PTR_SET_VALUE(tableTypeList_, tableTypeList) };
      inline ListQuery& setTableTypeList(vector<string> && tableTypeList) { DARABONBA_PTR_SET_RVALUE(tableTypeList_, tableTypeList) };


      // watchTypeList Field Functions 
      bool hasWatchTypeList() const { return this->watchTypeList_ != nullptr;};
      void deleteWatchTypeList() { this->watchTypeList_ = nullptr;};
      inline const vector<string> & getWatchTypeList() const { DARABONBA_PTR_GET_CONST(watchTypeList_, vector<string>) };
      inline vector<string> getWatchTypeList() { DARABONBA_PTR_GET(watchTypeList_, vector<string>) };
      inline ListQuery& setWatchTypeList(const vector<string> & watchTypeList) { DARABONBA_PTR_SET_VALUE(watchTypeList_, watchTypeList) };
      inline ListQuery& setWatchTypeList(vector<string> && watchTypeList) { DARABONBA_PTR_SET_RVALUE(watchTypeList_, watchTypeList) };


    protected:
      shared_ptr<vector<string>> bizUnitNameList_ {};
      shared_ptr<bool> currentUserOwned_ {};
      shared_ptr<vector<int64_t>> dataSourceIdList_ {};
      shared_ptr<vector<string>> dataSourceOwnerList_ {};
      shared_ptr<vector<string>> dataSourceScopeList_ {};
      shared_ptr<vector<string>> dataSourceTypeList_ {};
      shared_ptr<vector<string>> indexComputeTypeList_ {};
      shared_ptr<vector<string>> indexOwnerList_ {};
      shared_ptr<string> keyword_ {};
      shared_ptr<vector<string>> latestWatchTaskStatusList_ {};
      shared_ptr<int32_t> pageNo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<string>> projectNameList_ {};
      shared_ptr<vector<string>> qualityOwnerList_ {};
      shared_ptr<vector<string>> statusList_ {};
      shared_ptr<vector<string>> tableOwnerList_ {};
      shared_ptr<vector<string>> tableTypeList_ {};
      shared_ptr<vector<string>> watchTypeList_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListQualityWatchesRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListQualityWatchesRequest::ListQuery) };
    inline ListQualityWatchesRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListQualityWatchesRequest::ListQuery) };
    inline ListQualityWatchesRequest& setListQuery(const ListQualityWatchesRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListQualityWatchesRequest& setListQuery(ListQualityWatchesRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListQualityWatchesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<ListQualityWatchesRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
