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
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(FileCategoryCode, fileCategoryCode_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberAccount, memberAccount_);
      DARABONBA_PTR_TO_JSON(ModelIds, modelIds_);
      DARABONBA_PTR_TO_JSON(ModelTagIds, modelTagIds_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentCategoryIds, parentCategoryIds_);
      DARABONBA_PTR_TO_JSON(ProductIds, productIds_);
      DARABONBA_PTR_TO_JSON(QueryName, queryName_);
      DARABONBA_PTR_TO_JSON(RiskLevels, riskLevels_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataObjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(FileCategoryCode, fileCategoryCode_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberAccount, memberAccount_);
      DARABONBA_PTR_FROM_JSON(ModelIds, modelIds_);
      DARABONBA_PTR_FROM_JSON(ModelTagIds, modelTagIds_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentCategoryIds, parentCategoryIds_);
      DARABONBA_PTR_FROM_JSON(ProductIds, productIds_);
      DARABONBA_PTR_FROM_JSON(QueryName, queryName_);
      DARABONBA_PTR_FROM_JSON(RiskLevels, riskLevels_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
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
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->domainId_ != nullptr && this->featureType_ != nullptr && this->fileCategoryCode_ != nullptr && this->fileType_ != nullptr && this->instanceId_ != nullptr
        && this->lang_ != nullptr && this->memberAccount_ != nullptr && this->modelIds_ != nullptr && this->modelTagIds_ != nullptr && this->pageSize_ != nullptr
        && this->parentCategoryIds_ != nullptr && this->productIds_ != nullptr && this->queryName_ != nullptr && this->riskLevels_ != nullptr && this->serviceRegionId_ != nullptr
        && this->templateId_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDataObjectsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline DescribeDataObjectsRequest& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t featureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline DescribeDataObjectsRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // fileCategoryCode Field Functions 
    bool hasFileCategoryCode() const { return this->fileCategoryCode_ != nullptr;};
    void deleteFileCategoryCode() { this->fileCategoryCode_ = nullptr;};
    inline int64_t fileCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(fileCategoryCode_, 0L) };
    inline DescribeDataObjectsRequest& setFileCategoryCode(int64_t fileCategoryCode) { DARABONBA_PTR_SET_VALUE(fileCategoryCode_, fileCategoryCode) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int64_t fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0L) };
    inline DescribeDataObjectsRequest& setFileType(int64_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDataObjectsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDataObjectsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberAccount Field Functions 
    bool hasMemberAccount() const { return this->memberAccount_ != nullptr;};
    void deleteMemberAccount() { this->memberAccount_ = nullptr;};
    inline int64_t memberAccount() const { DARABONBA_PTR_GET_DEFAULT(memberAccount_, 0L) };
    inline DescribeDataObjectsRequest& setMemberAccount(int64_t memberAccount) { DARABONBA_PTR_SET_VALUE(memberAccount_, memberAccount) };


    // modelIds Field Functions 
    bool hasModelIds() const { return this->modelIds_ != nullptr;};
    void deleteModelIds() { this->modelIds_ = nullptr;};
    inline string modelIds() const { DARABONBA_PTR_GET_DEFAULT(modelIds_, "") };
    inline DescribeDataObjectsRequest& setModelIds(string modelIds) { DARABONBA_PTR_SET_VALUE(modelIds_, modelIds) };


    // modelTagIds Field Functions 
    bool hasModelTagIds() const { return this->modelTagIds_ != nullptr;};
    void deleteModelTagIds() { this->modelTagIds_ = nullptr;};
    inline string modelTagIds() const { DARABONBA_PTR_GET_DEFAULT(modelTagIds_, "") };
    inline DescribeDataObjectsRequest& setModelTagIds(string modelTagIds) { DARABONBA_PTR_SET_VALUE(modelTagIds_, modelTagIds) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataObjectsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentCategoryIds Field Functions 
    bool hasParentCategoryIds() const { return this->parentCategoryIds_ != nullptr;};
    void deleteParentCategoryIds() { this->parentCategoryIds_ = nullptr;};
    inline string parentCategoryIds() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryIds_, "") };
    inline DescribeDataObjectsRequest& setParentCategoryIds(string parentCategoryIds) { DARABONBA_PTR_SET_VALUE(parentCategoryIds_, parentCategoryIds) };


    // productIds Field Functions 
    bool hasProductIds() const { return this->productIds_ != nullptr;};
    void deleteProductIds() { this->productIds_ = nullptr;};
    inline string productIds() const { DARABONBA_PTR_GET_DEFAULT(productIds_, "") };
    inline DescribeDataObjectsRequest& setProductIds(string productIds) { DARABONBA_PTR_SET_VALUE(productIds_, productIds) };


    // queryName Field Functions 
    bool hasQueryName() const { return this->queryName_ != nullptr;};
    void deleteQueryName() { this->queryName_ = nullptr;};
    inline string queryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
    inline DescribeDataObjectsRequest& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


    // riskLevels Field Functions 
    bool hasRiskLevels() const { return this->riskLevels_ != nullptr;};
    void deleteRiskLevels() { this->riskLevels_ = nullptr;};
    inline string riskLevels() const { DARABONBA_PTR_GET_DEFAULT(riskLevels_, "") };
    inline DescribeDataObjectsRequest& setRiskLevels(string riskLevels) { DARABONBA_PTR_SET_VALUE(riskLevels_, riskLevels) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string serviceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline DescribeDataObjectsRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeDataObjectsRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // Page number for the paginated query. Default value: 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // ID of the data domain to which the data asset belongs.
    std::shared_ptr<int64_t> domainId_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> featureType_ = nullptr;
    // File category code.
    std::shared_ptr<int64_t> fileCategoryCode_ = nullptr;
    // OSS file types that are supported for recognition.
    // 
    // > You can obtain the supported OSS file types by calling [DescribeDocTypes](https://help.aliyun.com/document_detail/2536492.html), using the Code field value from the response. This parameter is only valid for querying OSS-type assets.
    std::shared_ptr<int64_t> fileType_ = nullptr;
    // Keyword for the asset instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The language type for request and response messages, default is **zh_cn**. Values:
    // - **zh_cn**: Chinese.
    // - **en_us**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // Member account ID.
    std::shared_ptr<int64_t> memberAccount_ = nullptr;
    // Model IDs of the industry template, separated by commas.
    // > You can obtain the industry template model identifier ID by calling [DescribeTemplateAllRules](https://help.aliyun.com/document_detail/2536491.html).
    std::shared_ptr<string> modelIds_ = nullptr;
    // Data labels to be queried, separated by commas. Values:
    // - **101**: Personal Sensitive Information.
    // - **102**: Personal Information.
    // - **107**: General Information.
    std::shared_ptr<string> modelTagIds_ = nullptr;
    // When performing a paginated query, set the maximum number of data asset instances to display per page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // List of parent category IDs for the template to be queried, separated by commas.
    std::shared_ptr<string> parentCategoryIds_ = nullptr;
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
    std::shared_ptr<string> productIds_ = nullptr;
    // Keyword for the data object to be queried.
    std::shared_ptr<string> queryName_ = nullptr;
    // Specify the risk levels of the data assets to be queried, separated by commas if multiple.
    // - **2**: S1, low risk level.
    // - **3**: S2, medium risk level.
    // - **4**: S3, high risk level.
    // - **5**: S4, highest risk level.
    std::shared_ptr<string> riskLevels_ = nullptr;
    // Region where the asset is located. Values:
    // - **cn-beijing**: North China 2 (Beijing).
    // - **cn-zhangjiakou**: North China 3 (Zhangjiakou).
    // - **cn-huhehaote**: North China 5 (Hohhot).
    // - **cn-hangzhou**: East China 1 (Hangzhou).
    // - **cn-shanghai**: East China 2 (Shanghai).
    // - **cn-shenzhen**: South China 1 (Shenzhen).
    // - **cn-hongkong**: Hong Kong, China.
    std::shared_ptr<string> serviceRegionId_ = nullptr;
    // Industry template ID.
    // 
    // > You can obtain the industry template identifier ID by calling [DescribeCategoryTemplateList](https://help.aliyun.com/document_detail/2399296.html).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
