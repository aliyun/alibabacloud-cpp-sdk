// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataObjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataObjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(APIVersion, APIVersion_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(FileCategoryCode, fileCategoryCode_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(LogStoreFlag, logStoreFlag_);
      DARABONBA_PTR_TO_JSON(MemberAccount, memberAccount_);
      DARABONBA_PTR_TO_JSON(ModelIds, modelIds_);
      DARABONBA_PTR_TO_JSON(ModelTagIds, modelTagIds_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentCategoryIds, parentCategoryIds_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductIds, productIds_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(QueryName, queryName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RiskLevelIdList, riskLevelIdList_);
      DARABONBA_PTR_TO_JSON(RiskLevels, riskLevels_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataObjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(APIVersion, APIVersion_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(FileCategoryCode, fileCategoryCode_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(LogStoreFlag, logStoreFlag_);
      DARABONBA_PTR_FROM_JSON(MemberAccount, memberAccount_);
      DARABONBA_PTR_FROM_JSON(ModelIds, modelIds_);
      DARABONBA_PTR_FROM_JSON(ModelTagIds, modelTagIds_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentCategoryIds, parentCategoryIds_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductIds, productIds_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(QueryName, queryName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelIdList, riskLevelIdList_);
      DARABONBA_PTR_FROM_JSON(RiskLevels, riskLevels_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeDataObjectsRequest() = default ;
    DescribeDataObjectsRequest(const DescribeDataObjectsRequest &) = default ;
    DescribeDataObjectsRequest(DescribeDataObjectsRequest &&) = default ;
    DescribeDataObjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataObjectsRequest() = default ;
    DescribeDataObjectsRequest& operator=(const DescribeDataObjectsRequest &) = default ;
    DescribeDataObjectsRequest& operator=(DescribeDataObjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->APIVersion_ == nullptr
        && this->bucket_ == nullptr && this->currentPage_ == nullptr && this->dbName_ == nullptr && this->domainId_ == nullptr && this->featureType_ == nullptr
        && this->fileCategoryCode_ == nullptr && this->fileType_ == nullptr && this->instanceId_ == nullptr && this->lang_ == nullptr && this->logStore_ == nullptr
        && this->logStoreFlag_ == nullptr && this->memberAccount_ == nullptr && this->modelIds_ == nullptr && this->modelTagIds_ == nullptr && this->pageSize_ == nullptr
        && this->parentCategoryIds_ == nullptr && this->path_ == nullptr && this->productId_ == nullptr && this->productIds_ == nullptr && this->project_ == nullptr
        && this->queryName_ == nullptr && this->regionId_ == nullptr && this->riskLevelIdList_ == nullptr && this->riskLevels_ == nullptr && this->ruleIds_ == nullptr
        && this->serviceRegionId_ == nullptr && this->tableName_ == nullptr && this->taskId_ == nullptr && this->templateId_ == nullptr; };
    // APIVersion Field Functions 
    bool hasAPIVersion() const { return this->APIVersion_ != nullptr;};
    void deleteAPIVersion() { this->APIVersion_ = nullptr;};
    inline int32_t getAPIVersion() const { DARABONBA_PTR_GET_DEFAULT(APIVersion_, 0) };
    inline DescribeDataObjectsRequest& setAPIVersion(int32_t APIVersion) { DARABONBA_PTR_SET_VALUE(APIVersion_, APIVersion) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline DescribeDataObjectsRequest& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDataObjectsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeDataObjectsRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline DescribeDataObjectsRequest& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline DescribeDataObjectsRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // fileCategoryCode Field Functions 
    bool hasFileCategoryCode() const { return this->fileCategoryCode_ != nullptr;};
    void deleteFileCategoryCode() { this->fileCategoryCode_ = nullptr;};
    inline int64_t getFileCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(fileCategoryCode_, 0L) };
    inline DescribeDataObjectsRequest& setFileCategoryCode(int64_t fileCategoryCode) { DARABONBA_PTR_SET_VALUE(fileCategoryCode_, fileCategoryCode) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int64_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0L) };
    inline DescribeDataObjectsRequest& setFileType(int64_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDataObjectsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDataObjectsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline DescribeDataObjectsRequest& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // logStoreFlag Field Functions 
    bool hasLogStoreFlag() const { return this->logStoreFlag_ != nullptr;};
    void deleteLogStoreFlag() { this->logStoreFlag_ = nullptr;};
    inline int32_t getLogStoreFlag() const { DARABONBA_PTR_GET_DEFAULT(logStoreFlag_, 0) };
    inline DescribeDataObjectsRequest& setLogStoreFlag(int32_t logStoreFlag) { DARABONBA_PTR_SET_VALUE(logStoreFlag_, logStoreFlag) };


    // memberAccount Field Functions 
    bool hasMemberAccount() const { return this->memberAccount_ != nullptr;};
    void deleteMemberAccount() { this->memberAccount_ = nullptr;};
    inline int64_t getMemberAccount() const { DARABONBA_PTR_GET_DEFAULT(memberAccount_, 0L) };
    inline DescribeDataObjectsRequest& setMemberAccount(int64_t memberAccount) { DARABONBA_PTR_SET_VALUE(memberAccount_, memberAccount) };


    // modelIds Field Functions 
    bool hasModelIds() const { return this->modelIds_ != nullptr;};
    void deleteModelIds() { this->modelIds_ = nullptr;};
    inline string getModelIds() const { DARABONBA_PTR_GET_DEFAULT(modelIds_, "") };
    inline DescribeDataObjectsRequest& setModelIds(string modelIds) { DARABONBA_PTR_SET_VALUE(modelIds_, modelIds) };


    // modelTagIds Field Functions 
    bool hasModelTagIds() const { return this->modelTagIds_ != nullptr;};
    void deleteModelTagIds() { this->modelTagIds_ = nullptr;};
    inline string getModelTagIds() const { DARABONBA_PTR_GET_DEFAULT(modelTagIds_, "") };
    inline DescribeDataObjectsRequest& setModelTagIds(string modelTagIds) { DARABONBA_PTR_SET_VALUE(modelTagIds_, modelTagIds) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataObjectsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentCategoryIds Field Functions 
    bool hasParentCategoryIds() const { return this->parentCategoryIds_ != nullptr;};
    void deleteParentCategoryIds() { this->parentCategoryIds_ = nullptr;};
    inline string getParentCategoryIds() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryIds_, "") };
    inline DescribeDataObjectsRequest& setParentCategoryIds(string parentCategoryIds) { DARABONBA_PTR_SET_VALUE(parentCategoryIds_, parentCategoryIds) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeDataObjectsRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int32_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0) };
    inline DescribeDataObjectsRequest& setProductId(int32_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productIds Field Functions 
    bool hasProductIds() const { return this->productIds_ != nullptr;};
    void deleteProductIds() { this->productIds_ = nullptr;};
    inline string getProductIds() const { DARABONBA_PTR_GET_DEFAULT(productIds_, "") };
    inline DescribeDataObjectsRequest& setProductIds(string productIds) { DARABONBA_PTR_SET_VALUE(productIds_, productIds) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DescribeDataObjectsRequest& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // queryName Field Functions 
    bool hasQueryName() const { return this->queryName_ != nullptr;};
    void deleteQueryName() { this->queryName_ = nullptr;};
    inline string getQueryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
    inline DescribeDataObjectsRequest& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataObjectsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // riskLevelIdList Field Functions 
    bool hasRiskLevelIdList() const { return this->riskLevelIdList_ != nullptr;};
    void deleteRiskLevelIdList() { this->riskLevelIdList_ = nullptr;};
    inline string getRiskLevelIdList() const { DARABONBA_PTR_GET_DEFAULT(riskLevelIdList_, "") };
    inline DescribeDataObjectsRequest& setRiskLevelIdList(string riskLevelIdList) { DARABONBA_PTR_SET_VALUE(riskLevelIdList_, riskLevelIdList) };


    // riskLevels Field Functions 
    bool hasRiskLevels() const { return this->riskLevels_ != nullptr;};
    void deleteRiskLevels() { this->riskLevels_ = nullptr;};
    inline string getRiskLevels() const { DARABONBA_PTR_GET_DEFAULT(riskLevels_, "") };
    inline DescribeDataObjectsRequest& setRiskLevels(string riskLevels) { DARABONBA_PTR_SET_VALUE(riskLevels_, riskLevels) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline string getRuleIds() const { DARABONBA_PTR_GET_DEFAULT(ruleIds_, "") };
    inline DescribeDataObjectsRequest& setRuleIds(string ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string getServiceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline DescribeDataObjectsRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeDataObjectsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeDataObjectsRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeDataObjectsRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    shared_ptr<int32_t> APIVersion_ {};
    shared_ptr<string> bucket_ {};
    // Page number for the paginated query. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<string> dbName_ {};
    // ID of the data domain to which the data asset belongs.
    shared_ptr<int64_t> domainId_ {};
    // This parameter is deprecated.
    shared_ptr<int32_t> featureType_ {};
    // File category code.
    shared_ptr<int64_t> fileCategoryCode_ {};
    // OSS file types that are supported for recognition.
    // 
    // > You can obtain the supported OSS file types by calling [DescribeDocTypes](https://help.aliyun.com/document_detail/2536492.html), using the Code field value from the response. This parameter is only valid for querying OSS-type assets.
    shared_ptr<int64_t> fileType_ {};
    // Keyword for the asset instance ID.
    shared_ptr<string> instanceId_ {};
    // The language type for request and response messages, default is **zh_cn**. Values:
    // - **zh_cn**: Chinese.
    // - **en_us**: English.
    shared_ptr<string> lang_ {};
    shared_ptr<string> logStore_ {};
    shared_ptr<int32_t> logStoreFlag_ {};
    // Member account ID.
    shared_ptr<int64_t> memberAccount_ {};
    // Model IDs of the industry template, separated by commas.
    // > You can obtain the industry template model identifier ID by calling [DescribeTemplateAllRules](https://help.aliyun.com/document_detail/2536491.html).
    shared_ptr<string> modelIds_ {};
    // Data labels to be queried, separated by commas. Values:
    // - **101**: Personal Sensitive Information.
    // - **102**: Personal Information.
    // - **107**: General Information.
    shared_ptr<string> modelTagIds_ {};
    // When performing a paginated query, set the maximum number of data asset instances to display per page. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // List of parent category IDs for the template to be queried, separated by commas.
    shared_ptr<string> parentCategoryIds_ {};
    shared_ptr<string> path_ {};
    shared_ptr<int32_t> productId_ {};
    // It is recommended to fill in the list of product IDs to be queried, separated by commas. Values:
    // - **1**: MaxCompute
    // - **2**: OSS
    // - **3**: ADB-MYSQL
    // - **4**: TableStore
    // - **5**: RDS
    // - **6**: SELF_DB
    // - **7**: PolarDB-X
    // - **8**: PolarDB
    // - **9**: ADB-PG
    // - **10**: OceanBase
    // - **11**: MongoDB
    // - **25**: Redis
    // 
    // > OSS is mutually exclusive with other products, meaning if OSS is included in the query, no other products can be listed; by default, non-OSS products are queried.
    shared_ptr<string> productIds_ {};
    shared_ptr<string> project_ {};
    // Keyword for the data object to be queried.
    shared_ptr<string> queryName_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> riskLevelIdList_ {};
    // Specify the risk levels of the data assets to be queried, separated by commas if multiple.
    // - **2**: S1, low risk level.
    // - **3**: S2, medium risk level.
    // - **4**: S3, high risk level.
    // - **5**: S4, highest risk level.
    shared_ptr<string> riskLevels_ {};
    shared_ptr<string> ruleIds_ {};
    // Region where the asset is located. Values:
    // - **cn-beijing**: North China 2 (Beijing).
    // - **cn-zhangjiakou**: North China 3 (Zhangjiakou).
    // - **cn-huhehaote**: North China 5 (Hohhot).
    // - **cn-hangzhou**: East China 1 (Hangzhou).
    // - **cn-shanghai**: East China 2 (Shanghai).
    // - **cn-shenzhen**: South China 1 (Shenzhen).
    // - **cn-hongkong**: Hong Kong, China.
    shared_ptr<string> serviceRegionId_ {};
    shared_ptr<string> tableName_ {};
    shared_ptr<int64_t> taskId_ {};
    // Industry template ID.
    // 
    // > You can obtain the industry template identifier ID by calling [DescribeCategoryTemplateList](https://help.aliyun.com/document_detail/2399296.html).
    // 
    // This parameter is required.
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
