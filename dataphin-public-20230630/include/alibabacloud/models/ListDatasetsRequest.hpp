// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSREQUEST_HPP_
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
  class ListDatasetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetQuery, datasetQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetQuery, datasetQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListDatasetsRequest() = default ;
    ListDatasetsRequest(const ListDatasetsRequest &) = default ;
    ListDatasetsRequest(ListDatasetsRequest &&) = default ;
    ListDatasetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetsRequest() = default ;
    ListDatasetsRequest& operator=(const ListDatasetsRequest &) = default ;
    ListDatasetsRequest& operator=(ListDatasetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DatasetQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatasetQuery& obj) { 
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(DataUnit, dataUnit_);
        DARABONBA_PTR_TO_JSON(IncludeVersionList, includeVersionList_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Scenario, scenario_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(TypeList, typeList_);
      };
      friend void from_json(const Darabonba::Json& j, DatasetQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(DataUnit, dataUnit_);
        DARABONBA_PTR_FROM_JSON(IncludeVersionList, includeVersionList_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(TypeList, typeList_);
      };
      DatasetQuery() = default ;
      DatasetQuery(const DatasetQuery &) = default ;
      DatasetQuery(DatasetQuery &&) = default ;
      DatasetQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DatasetQuery() = default ;
      DatasetQuery& operator=(const DatasetQuery &) = default ;
      DatasetQuery& operator=(DatasetQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contentType_ == nullptr
        && this->dataUnit_ == nullptr && this->includeVersionList_ == nullptr && this->keyword_ == nullptr && this->owner_ == nullptr && this->page_ == nullptr
        && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->scenario_ == nullptr && this->storageType_ == nullptr && this->tenantId_ == nullptr
        && this->typeList_ == nullptr; };
      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline DatasetQuery& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // dataUnit Field Functions 
      bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
      void deleteDataUnit() { this->dataUnit_ = nullptr;};
      inline string getDataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
      inline DatasetQuery& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


      // includeVersionList Field Functions 
      bool hasIncludeVersionList() const { return this->includeVersionList_ != nullptr;};
      void deleteIncludeVersionList() { this->includeVersionList_ = nullptr;};
      inline bool getIncludeVersionList() const { DARABONBA_PTR_GET_DEFAULT(includeVersionList_, false) };
      inline DatasetQuery& setIncludeVersionList(bool includeVersionList) { DARABONBA_PTR_SET_VALUE(includeVersionList_, includeVersionList) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline DatasetQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline DatasetQuery& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline DatasetQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline DatasetQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline DatasetQuery& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // scenario Field Functions 
      bool hasScenario() const { return this->scenario_ != nullptr;};
      void deleteScenario() { this->scenario_ = nullptr;};
      inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
      inline DatasetQuery& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline DatasetQuery& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline DatasetQuery& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // typeList Field Functions 
      bool hasTypeList() const { return this->typeList_ != nullptr;};
      void deleteTypeList() { this->typeList_ = nullptr;};
      inline const vector<string> & getTypeList() const { DARABONBA_PTR_GET_CONST(typeList_, vector<string>) };
      inline vector<string> getTypeList() { DARABONBA_PTR_GET(typeList_, vector<string>) };
      inline DatasetQuery& setTypeList(const vector<string> & typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };
      inline DatasetQuery& setTypeList(vector<string> && typeList) { DARABONBA_PTR_SET_RVALUE(typeList_, typeList) };


    protected:
      // The content type.
      shared_ptr<string> contentType_ {};
      // The data domain ID.
      shared_ptr<string> dataUnit_ {};
      // Specifies whether to include version details. Default value: FALSE.
      shared_ptr<bool> includeVersionList_ {};
      // The keyword.
      shared_ptr<string> keyword_ {};
      // The owner ID.
      shared_ptr<string> owner_ {};
      // The page number.
      shared_ptr<int32_t> page_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The project ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      // The dataset scenario. Valid values:
      // - OFFLINE: offline.
      // - REALTIME: real-time.
      shared_ptr<string> scenario_ {};
      // The storage type.
      shared_ptr<string> storageType_ {};
      // The tenant ID.
      shared_ptr<int64_t> tenantId_ {};
      // The dataset type. If left empty, all types are queried.
      shared_ptr<vector<string>> typeList_ {};
    };

    virtual bool empty() const override { return this->datasetQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // datasetQuery Field Functions 
    bool hasDatasetQuery() const { return this->datasetQuery_ != nullptr;};
    void deleteDatasetQuery() { this->datasetQuery_ = nullptr;};
    inline const ListDatasetsRequest::DatasetQuery & getDatasetQuery() const { DARABONBA_PTR_GET_CONST(datasetQuery_, ListDatasetsRequest::DatasetQuery) };
    inline ListDatasetsRequest::DatasetQuery getDatasetQuery() { DARABONBA_PTR_GET(datasetQuery_, ListDatasetsRequest::DatasetQuery) };
    inline ListDatasetsRequest& setDatasetQuery(const ListDatasetsRequest::DatasetQuery & datasetQuery) { DARABONBA_PTR_SET_VALUE(datasetQuery_, datasetQuery) };
    inline ListDatasetsRequest& setDatasetQuery(ListDatasetsRequest::DatasetQuery && datasetQuery) { DARABONBA_PTR_SET_RVALUE(datasetQuery_, datasetQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListDatasetsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // The request body.
    shared_ptr<ListDatasetsRequest::DatasetQuery> datasetQuery_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
