// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeOssObjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssObjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FileCategoryCode, fileCategoryCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LastScanTimeEnd, lastScanTimeEnd_);
      DARABONBA_PTR_TO_JSON(LastScanTimeStart, lastScanTimeStart_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssObjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FileCategoryCode, fileCategoryCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LastScanTimeEnd, lastScanTimeEnd_);
      DARABONBA_PTR_FROM_JSON(LastScanTimeStart, lastScanTimeStart_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeOssObjectsRequest() = default ;
    DescribeOssObjectsRequest(const DescribeOssObjectsRequest &) = default ;
    DescribeOssObjectsRequest(DescribeOssObjectsRequest &&) = default ;
    DescribeOssObjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssObjectsRequest() = default ;
    DescribeOssObjectsRequest& operator=(const DescribeOssObjectsRequest &) = default ;
    DescribeOssObjectsRequest& operator=(DescribeOssObjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->fileCategoryCode_ == nullptr && this->instanceId_ == nullptr && this->lang_ == nullptr && this->lastScanTimeEnd_ == nullptr && this->lastScanTimeStart_ == nullptr
        && this->marker_ == nullptr && this->name_ == nullptr && this->pageSize_ == nullptr && this->riskLevelId_ == nullptr && this->ruleId_ == nullptr
        && this->serviceRegionId_ == nullptr && this->templateId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeOssObjectsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // fileCategoryCode Field Functions 
    bool hasFileCategoryCode() const { return this->fileCategoryCode_ != nullptr;};
    void deleteFileCategoryCode() { this->fileCategoryCode_ = nullptr;};
    inline int64_t getFileCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(fileCategoryCode_, 0L) };
    inline DescribeOssObjectsRequest& setFileCategoryCode(int64_t fileCategoryCode) { DARABONBA_PTR_SET_VALUE(fileCategoryCode_, fileCategoryCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeOssObjectsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeOssObjectsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lastScanTimeEnd Field Functions 
    bool hasLastScanTimeEnd() const { return this->lastScanTimeEnd_ != nullptr;};
    void deleteLastScanTimeEnd() { this->lastScanTimeEnd_ = nullptr;};
    inline int64_t getLastScanTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(lastScanTimeEnd_, 0L) };
    inline DescribeOssObjectsRequest& setLastScanTimeEnd(int64_t lastScanTimeEnd) { DARABONBA_PTR_SET_VALUE(lastScanTimeEnd_, lastScanTimeEnd) };


    // lastScanTimeStart Field Functions 
    bool hasLastScanTimeStart() const { return this->lastScanTimeStart_ != nullptr;};
    void deleteLastScanTimeStart() { this->lastScanTimeStart_ = nullptr;};
    inline int64_t getLastScanTimeStart() const { DARABONBA_PTR_GET_DEFAULT(lastScanTimeStart_, 0L) };
    inline DescribeOssObjectsRequest& setLastScanTimeStart(int64_t lastScanTimeStart) { DARABONBA_PTR_SET_VALUE(lastScanTimeStart_, lastScanTimeStart) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline int64_t getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, 0L) };
    inline DescribeOssObjectsRequest& setMarker(int64_t marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeOssObjectsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeOssObjectsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int32_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0) };
    inline DescribeOssObjectsRequest& setRiskLevelId(int32_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeOssObjectsRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string getServiceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline DescribeOssObjectsRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeOssObjectsRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The page number of the page to return.
    shared_ptr<int32_t> currentPage_ {};
    // The code of the file type.
    shared_ptr<int64_t> fileCategoryCode_ {};
    // The ID of the instance to which the OSS object belongs.
    // 
    // > You can call the **DescribeInstances** operation to query the instance ID.
    shared_ptr<string> instanceId_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The end time of the last scan. The value is a UNIX timestamp. Unit: milliseconds.
    shared_ptr<int64_t> lastScanTimeEnd_ {};
    // The start time of the last scan. The value is a UNIX timestamp. Unit: milliseconds.
    shared_ptr<int64_t> lastScanTimeStart_ {};
    // When you query data by page, use the `Marker` parameter to query the data that follows the `Marker` value.
    shared_ptr<int64_t> marker_ {};
    // The search keyword. Fuzzy match is supported.
    shared_ptr<string> name_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The sensitivity level of the OSS object. Valid values:
    // 
    // *   **1**: N/A, which indicates that no sensitive data is detected.
    // *   **2**: S1, which indicates the low sensitivity level.
    // *   **3**: S2, which indicates the medium sensitivity level.
    // *   **4**: S3, which indicates the high sensitivity level.
    // *   **5**: S4, which indicates the highest sensitivity level.
    shared_ptr<int32_t> riskLevelId_ {};
    // The ID of the sensitive data detection rule that the OSS object hits.
    // 
    // > You can call the **DescribeRules** operation to query the ID of the sensitive data detection rule.
    shared_ptr<int64_t> ruleId_ {};
    // The region in which the data asset resides.
    shared_ptr<string> serviceRegionId_ {};
    // The ID of the industry-specific rule template.
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
