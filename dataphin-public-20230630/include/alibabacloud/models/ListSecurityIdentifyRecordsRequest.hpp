// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYIDENTIFYRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYIDENTIFYRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListSecurityIdentifyRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityIdentifyRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityIdentifyRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListSecurityIdentifyRecordsRequest() = default ;
    ListSecurityIdentifyRecordsRequest(const ListSecurityIdentifyRecordsRequest &) = default ;
    ListSecurityIdentifyRecordsRequest(ListSecurityIdentifyRecordsRequest &&) = default ;
    ListSecurityIdentifyRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityIdentifyRecordsRequest() = default ;
    ListSecurityIdentifyRecordsRequest& operator=(const ListSecurityIdentifyRecordsRequest &) = default ;
    ListSecurityIdentifyRecordsRequest& operator=(ListSecurityIdentifyRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(DatasourceEnv, datasourceEnv_);
        DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(IsDatasourceTable, isDatasourceTable_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TableCatalog, tableCatalog_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(DatasourceEnv, datasourceEnv_);
        DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(IsDatasourceTable, isDatasourceTable_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TableCatalog, tableCatalog_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
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
      virtual bool empty() const override { return this->datasourceEnv_ == nullptr
        && this->datasourceName_ == nullptr && this->fieldName_ == nullptr && this->isDatasourceTable_ == nullptr && this->keyword_ == nullptr && this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->tableCatalog_ == nullptr && this->tableName_ == nullptr; };
      // datasourceEnv Field Functions 
      bool hasDatasourceEnv() const { return this->datasourceEnv_ != nullptr;};
      void deleteDatasourceEnv() { this->datasourceEnv_ = nullptr;};
      inline string getDatasourceEnv() const { DARABONBA_PTR_GET_DEFAULT(datasourceEnv_, "") };
      inline ListQuery& setDatasourceEnv(string datasourceEnv) { DARABONBA_PTR_SET_VALUE(datasourceEnv_, datasourceEnv) };


      // datasourceName Field Functions 
      bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
      void deleteDatasourceName() { this->datasourceName_ = nullptr;};
      inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
      inline ListQuery& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline ListQuery& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // isDatasourceTable Field Functions 
      bool hasIsDatasourceTable() const { return this->isDatasourceTable_ != nullptr;};
      void deleteIsDatasourceTable() { this->isDatasourceTable_ = nullptr;};
      inline bool getIsDatasourceTable() const { DARABONBA_PTR_GET_DEFAULT(isDatasourceTable_, false) };
      inline ListQuery& setIsDatasourceTable(bool isDatasourceTable) { DARABONBA_PTR_SET_VALUE(isDatasourceTable_, isDatasourceTable) };


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


      // tableCatalog Field Functions 
      bool hasTableCatalog() const { return this->tableCatalog_ != nullptr;};
      void deleteTableCatalog() { this->tableCatalog_ = nullptr;};
      inline string getTableCatalog() const { DARABONBA_PTR_GET_DEFAULT(tableCatalog_, "") };
      inline ListQuery& setTableCatalog(string tableCatalog) { DARABONBA_PTR_SET_VALUE(tableCatalog_, tableCatalog) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline ListQuery& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      shared_ptr<string> datasourceEnv_ {};
      shared_ptr<string> datasourceName_ {};
      // This parameter is required.
      shared_ptr<string> fieldName_ {};
      shared_ptr<bool> isDatasourceTable_ {};
      shared_ptr<string> keyword_ {};
      shared_ptr<int32_t> pageNo_ {};
      shared_ptr<int32_t> pageSize_ {};
      // This parameter is required.
      shared_ptr<string> tableCatalog_ {};
      // This parameter is required.
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListSecurityIdentifyRecordsRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListSecurityIdentifyRecordsRequest::ListQuery) };
    inline ListSecurityIdentifyRecordsRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListSecurityIdentifyRecordsRequest::ListQuery) };
    inline ListSecurityIdentifyRecordsRequest& setListQuery(const ListSecurityIdentifyRecordsRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListSecurityIdentifyRecordsRequest& setListQuery(ListSecurityIdentifyRecordsRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListSecurityIdentifyRecordsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<ListSecurityIdentifyRecordsRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
