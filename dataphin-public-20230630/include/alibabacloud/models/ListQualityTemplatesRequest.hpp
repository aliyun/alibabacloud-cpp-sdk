// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYTEMPLATESREQUEST_HPP_
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
  class ListQualityTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListQualityTemplatesRequest() = default ;
    ListQualityTemplatesRequest(const ListQualityTemplatesRequest &) = default ;
    ListQualityTemplatesRequest(ListQualityTemplatesRequest &&) = default ;
    ListQualityTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityTemplatesRequest() = default ;
    ListQualityTemplatesRequest& operator=(const ListQualityTemplatesRequest &) = default ;
    ListQualityTemplatesRequest& operator=(ListQualityTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(CatalogList, catalogList_);
        DARABONBA_PTR_TO_JSON(CurrentUserOwned, currentUserOwned_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(SupportDataSourceTypeList, supportDataSourceTypeList_);
        DARABONBA_PTR_TO_JSON(TemplateOwnerList, templateOwnerList_);
        DARABONBA_PTR_TO_JSON(TemplateSourceList, templateSourceList_);
        DARABONBA_PTR_TO_JSON(TemplateTypeList, templateTypeList_);
        DARABONBA_PTR_TO_JSON(WatchTypeList, watchTypeList_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(CatalogList, catalogList_);
        DARABONBA_PTR_FROM_JSON(CurrentUserOwned, currentUserOwned_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(SupportDataSourceTypeList, supportDataSourceTypeList_);
        DARABONBA_PTR_FROM_JSON(TemplateOwnerList, templateOwnerList_);
        DARABONBA_PTR_FROM_JSON(TemplateSourceList, templateSourceList_);
        DARABONBA_PTR_FROM_JSON(TemplateTypeList, templateTypeList_);
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
      virtual bool empty() const override { return this->catalogList_ == nullptr
        && this->currentUserOwned_ == nullptr && this->keyword_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->supportDataSourceTypeList_ == nullptr
        && this->templateOwnerList_ == nullptr && this->templateSourceList_ == nullptr && this->templateTypeList_ == nullptr && this->watchTypeList_ == nullptr; };
      // catalogList Field Functions 
      bool hasCatalogList() const { return this->catalogList_ != nullptr;};
      void deleteCatalogList() { this->catalogList_ = nullptr;};
      inline const vector<string> & getCatalogList() const { DARABONBA_PTR_GET_CONST(catalogList_, vector<string>) };
      inline vector<string> getCatalogList() { DARABONBA_PTR_GET(catalogList_, vector<string>) };
      inline ListQuery& setCatalogList(const vector<string> & catalogList) { DARABONBA_PTR_SET_VALUE(catalogList_, catalogList) };
      inline ListQuery& setCatalogList(vector<string> && catalogList) { DARABONBA_PTR_SET_RVALUE(catalogList_, catalogList) };


      // currentUserOwned Field Functions 
      bool hasCurrentUserOwned() const { return this->currentUserOwned_ != nullptr;};
      void deleteCurrentUserOwned() { this->currentUserOwned_ = nullptr;};
      inline bool getCurrentUserOwned() const { DARABONBA_PTR_GET_DEFAULT(currentUserOwned_, false) };
      inline ListQuery& setCurrentUserOwned(bool currentUserOwned) { DARABONBA_PTR_SET_VALUE(currentUserOwned_, currentUserOwned) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


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


      // supportDataSourceTypeList Field Functions 
      bool hasSupportDataSourceTypeList() const { return this->supportDataSourceTypeList_ != nullptr;};
      void deleteSupportDataSourceTypeList() { this->supportDataSourceTypeList_ = nullptr;};
      inline const vector<string> & getSupportDataSourceTypeList() const { DARABONBA_PTR_GET_CONST(supportDataSourceTypeList_, vector<string>) };
      inline vector<string> getSupportDataSourceTypeList() { DARABONBA_PTR_GET(supportDataSourceTypeList_, vector<string>) };
      inline ListQuery& setSupportDataSourceTypeList(const vector<string> & supportDataSourceTypeList) { DARABONBA_PTR_SET_VALUE(supportDataSourceTypeList_, supportDataSourceTypeList) };
      inline ListQuery& setSupportDataSourceTypeList(vector<string> && supportDataSourceTypeList) { DARABONBA_PTR_SET_RVALUE(supportDataSourceTypeList_, supportDataSourceTypeList) };


      // templateOwnerList Field Functions 
      bool hasTemplateOwnerList() const { return this->templateOwnerList_ != nullptr;};
      void deleteTemplateOwnerList() { this->templateOwnerList_ = nullptr;};
      inline const vector<string> & getTemplateOwnerList() const { DARABONBA_PTR_GET_CONST(templateOwnerList_, vector<string>) };
      inline vector<string> getTemplateOwnerList() { DARABONBA_PTR_GET(templateOwnerList_, vector<string>) };
      inline ListQuery& setTemplateOwnerList(const vector<string> & templateOwnerList) { DARABONBA_PTR_SET_VALUE(templateOwnerList_, templateOwnerList) };
      inline ListQuery& setTemplateOwnerList(vector<string> && templateOwnerList) { DARABONBA_PTR_SET_RVALUE(templateOwnerList_, templateOwnerList) };


      // templateSourceList Field Functions 
      bool hasTemplateSourceList() const { return this->templateSourceList_ != nullptr;};
      void deleteTemplateSourceList() { this->templateSourceList_ = nullptr;};
      inline const vector<string> & getTemplateSourceList() const { DARABONBA_PTR_GET_CONST(templateSourceList_, vector<string>) };
      inline vector<string> getTemplateSourceList() { DARABONBA_PTR_GET(templateSourceList_, vector<string>) };
      inline ListQuery& setTemplateSourceList(const vector<string> & templateSourceList) { DARABONBA_PTR_SET_VALUE(templateSourceList_, templateSourceList) };
      inline ListQuery& setTemplateSourceList(vector<string> && templateSourceList) { DARABONBA_PTR_SET_RVALUE(templateSourceList_, templateSourceList) };


      // templateTypeList Field Functions 
      bool hasTemplateTypeList() const { return this->templateTypeList_ != nullptr;};
      void deleteTemplateTypeList() { this->templateTypeList_ = nullptr;};
      inline const vector<string> & getTemplateTypeList() const { DARABONBA_PTR_GET_CONST(templateTypeList_, vector<string>) };
      inline vector<string> getTemplateTypeList() { DARABONBA_PTR_GET(templateTypeList_, vector<string>) };
      inline ListQuery& setTemplateTypeList(const vector<string> & templateTypeList) { DARABONBA_PTR_SET_VALUE(templateTypeList_, templateTypeList) };
      inline ListQuery& setTemplateTypeList(vector<string> && templateTypeList) { DARABONBA_PTR_SET_RVALUE(templateTypeList_, templateTypeList) };


      // watchTypeList Field Functions 
      bool hasWatchTypeList() const { return this->watchTypeList_ != nullptr;};
      void deleteWatchTypeList() { this->watchTypeList_ = nullptr;};
      inline const vector<string> & getWatchTypeList() const { DARABONBA_PTR_GET_CONST(watchTypeList_, vector<string>) };
      inline vector<string> getWatchTypeList() { DARABONBA_PTR_GET(watchTypeList_, vector<string>) };
      inline ListQuery& setWatchTypeList(const vector<string> & watchTypeList) { DARABONBA_PTR_SET_VALUE(watchTypeList_, watchTypeList) };
      inline ListQuery& setWatchTypeList(vector<string> && watchTypeList) { DARABONBA_PTR_SET_RVALUE(watchTypeList_, watchTypeList) };


    protected:
      // The rule type. Valid values:
      // - CONSISTENT: consistency
      // - EFFECTIVE: validity
      // - TIMELINESE: timeliness
      // - ACCURATE: accuracy
      // - UNIQUENESS: uniqueness
      // - COMPLETENESS: completeness
      // - STABILITY: stability
      // - CUSTOM: custom.
      shared_ptr<vector<string>> catalogList_ {};
      // Specifies whether to query only templates owned by the current user.
      shared_ptr<bool> currentUserOwned_ {};
      // The search keyword. Template name filtering is supported.
      shared_ptr<string> keyword_ {};
      // The page number. Default value: 1.
      shared_ptr<int32_t> pageNo_ {};
      // The number of records per page. Default value: 20.
      shared_ptr<int32_t> pageSize_ {};
      // The supported data source types, such as MAX_COMPUTE, MYSQL, and HIVE.
      shared_ptr<vector<string>> supportDataSourceTypeList_ {};
      // The template owners.
      shared_ptr<vector<string>> templateOwnerList_ {};
      // The template source. Valid values:
      // - SYSTEM: system template
      // - CUSTOM: custom template.
      shared_ptr<vector<string>> templateSourceList_ {};
      // The templatetype. Valid values:
      // - FIELD_NULL_VALUE_VALIDATE: field null value check
      // - FIELD_EMPTY_STRING_VALIDATE: field empty character string check
      // - FIELD_UNIQUE_VALIDATE: field uniqueness check
      // - FIELD_GROUP_COUNT_VALIDATE: field unique value count check
      // - FIELD_DUPLICATE_VALUE_COUNT_VALIDATE: field duplicate value count check
      // - FUNCTION_TIME_COMPARE: time function comparison
      // - SINGLE_TABLE_TIME_COMPARE: non-partitioned table time field comparison
      // - DOUBLE_TABLE_TIME_COMPARE: two-table time field comparison
      // - FIELD_FORMAT_VALIDATE: field format check
      // - FIELD_LENGTH_VALIDATE: field length check
      // - FIELD_VALUE_RANGE_VALIDATE: field value range check
      // - CODE_TABLE_COMPARE: lookup table reference comparison
      // - STANDARD_CODE_TABLE_COMPARE: data standard lookup table reference comparison
      // - SINGLE_TABLE_FIELD_VALUE_COMPARE: non-partitioned table field value consistency comparison
      // - SINGLE_TABLE_FIELD_STATISTICAL_COMPARE: non-partitioned table field statistical value consistency comparison
      // - SINGLE_TABLE_FIELD_EXP_COMPARE: non-partitioned table field business logic consistency comparison
      // - DOUBLE_TABLE_FIELD_VALUE_COMPARE: two-table field value consistency comparison
      // - DOUBLE_TABLE_FIELD_STATISTICAL_COMPARE: two-table field statistical value consistency comparison
      // - CROSS_DOUBLE_TABLE_FIELD_STATISTICAL_COMPARE: cross-source two-table field statistical value consistency comparison
      // - DOUBLE_TABLE_FIELD_EXP_COMPARE: two-table field business logic consistency comparison
      // - TABLE_STABILITY_VALIDATE: table stability check
      // - TABLE_FLUCTUATION_VALIDATE: table fluctuation check
      // - FIELD_STABILITY_VALIDATE: field stability check
      // - FIELD_FLUCTUATION_VALIDATE: field fluctuation check
      // - CUSTOM_STATISTICAL_VALIDATE: custom statistical metric check
      // - CUSTOM_DATA_DETAILS_VALIDATE: custom data details check
      // - DATASOURCE_AVAILABLE_CHECK: data source connectivity monitoring
      // - TABLE_SCHEMA_CHECK: table schema change monitoring
      // - REAL_TIME_OFFLINE_COMPARE: real-time and offline comparison
      // - REAL_TIME_STATISTICAL_VALIDATE: real-time statistical value monitoring
      // - REAL_TIME_MULTI_CHAIN_COMPARE: real-time multi-link comparison.
      shared_ptr<vector<string>> templateTypeList_ {};
      // The monitored object type. Valid values:
      // - TABLE: Dataphin table
      // - DATASOURCE_TABLE: full-domain table
      // - DATASOURCE: data source
      // - INDEX: metric
      // - REALTIME_LOGICAL_TABLE: real-time meta table.
      shared_ptr<vector<string>> watchTypeList_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListQualityTemplatesRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListQualityTemplatesRequest::ListQuery) };
    inline ListQualityTemplatesRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListQualityTemplatesRequest::ListQuery) };
    inline ListQualityTemplatesRequest& setListQuery(const ListQualityTemplatesRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListQualityTemplatesRequest& setListQuery(ListQualityTemplatesRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListQualityTemplatesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // The paged query conditions.
    shared_ptr<ListQualityTemplatesRequest::ListQuery> listQuery_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
