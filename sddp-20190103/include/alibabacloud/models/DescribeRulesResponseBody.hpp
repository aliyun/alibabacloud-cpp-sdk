// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRulesResponseBody() = default ;
    DescribeRulesResponseBody(const DescribeRulesResponseBody &) = default ;
    DescribeRulesResponseBody(DescribeRulesResponseBody &&) = default ;
    DescribeRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRulesResponseBody() = default ;
    DescribeRulesResponseBody& operator=(const DescribeRulesResponseBody &) = default ;
    DescribeRulesResponseBody& operator=(DescribeRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AuditMode, auditMode_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ContentCategory, contentCategory_);
        DARABONBA_PTR_TO_JSON(CustomType, customType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(HitTotalCount, hitTotalCount_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LoginName, loginName_);
        DARABONBA_PTR_TO_JSON(MajorKey, majorKey_);
        DARABONBA_PTR_TO_JSON(MatchType, matchType_);
        DARABONBA_PTR_TO_JSON(ModelRuleIds, modelRuleIds_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
        DARABONBA_PTR_TO_JSON(StatExpress, statExpress_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupportForm, supportForm_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(TemplateRuleIds, templateRuleIds_);
        DARABONBA_PTR_TO_JSON(ThreatAnalysisStatus, threatAnalysisStatus_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(WarnLevel, warnLevel_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditMode, auditMode_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ContentCategory, contentCategory_);
        DARABONBA_PTR_FROM_JSON(CustomType, customType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(HitTotalCount, hitTotalCount_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
        DARABONBA_PTR_FROM_JSON(MajorKey, majorKey_);
        DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
        DARABONBA_PTR_FROM_JSON(ModelRuleIds, modelRuleIds_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
        DARABONBA_PTR_FROM_JSON(StatExpress, statExpress_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupportForm, supportForm_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(TemplateRuleIds, templateRuleIds_);
        DARABONBA_PTR_FROM_JSON(ThreatAnalysisStatus, threatAnalysisStatus_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(WarnLevel, warnLevel_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auditMode_ == nullptr
        && this->category_ == nullptr && this->categoryName_ == nullptr && this->content_ == nullptr && this->contentCategory_ == nullptr && this->customType_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->groupId_ == nullptr
        && this->hitTotalCount_ == nullptr && this->id_ == nullptr && this->loginName_ == nullptr && this->majorKey_ == nullptr && this->matchType_ == nullptr
        && this->modelRuleIds_ == nullptr && this->name_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr && this->riskLevelId_ == nullptr
        && this->riskLevelName_ == nullptr && this->statExpress_ == nullptr && this->status_ == nullptr && this->supportForm_ == nullptr && this->target_ == nullptr
        && this->templateRuleIds_ == nullptr && this->threatAnalysisStatus_ == nullptr && this->userId_ == nullptr && this->warnLevel_ == nullptr; };
      // auditMode Field Functions 
      bool hasAuditMode() const { return this->auditMode_ != nullptr;};
      void deleteAuditMode() { this->auditMode_ = nullptr;};
      inline int32_t getAuditMode() const { DARABONBA_PTR_GET_DEFAULT(auditMode_, 0) };
      inline Items& setAuditMode(int32_t auditMode) { DARABONBA_PTR_SET_VALUE(auditMode_, auditMode) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
      inline Items& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline Items& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Items& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contentCategory Field Functions 
      bool hasContentCategory() const { return this->contentCategory_ != nullptr;};
      void deleteContentCategory() { this->contentCategory_ = nullptr;};
      inline string getContentCategory() const { DARABONBA_PTR_GET_DEFAULT(contentCategory_, "") };
      inline Items& setContentCategory(string contentCategory) { DARABONBA_PTR_SET_VALUE(contentCategory_, contentCategory) };


      // customType Field Functions 
      bool hasCustomType() const { return this->customType_ != nullptr;};
      void deleteCustomType() { this->customType_ = nullptr;};
      inline int32_t getCustomType() const { DARABONBA_PTR_GET_DEFAULT(customType_, 0) };
      inline Items& setCustomType(int32_t customType) { DARABONBA_PTR_SET_VALUE(customType_, customType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Items& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Items& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Items& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Items& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // hitTotalCount Field Functions 
      bool hasHitTotalCount() const { return this->hitTotalCount_ != nullptr;};
      void deleteHitTotalCount() { this->hitTotalCount_ = nullptr;};
      inline int32_t getHitTotalCount() const { DARABONBA_PTR_GET_DEFAULT(hitTotalCount_, 0) };
      inline Items& setHitTotalCount(int32_t hitTotalCount) { DARABONBA_PTR_SET_VALUE(hitTotalCount_, hitTotalCount) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // loginName Field Functions 
      bool hasLoginName() const { return this->loginName_ != nullptr;};
      void deleteLoginName() { this->loginName_ = nullptr;};
      inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
      inline Items& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


      // majorKey Field Functions 
      bool hasMajorKey() const { return this->majorKey_ != nullptr;};
      void deleteMajorKey() { this->majorKey_ = nullptr;};
      inline string getMajorKey() const { DARABONBA_PTR_GET_DEFAULT(majorKey_, "") };
      inline Items& setMajorKey(string majorKey) { DARABONBA_PTR_SET_VALUE(majorKey_, majorKey) };


      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline int32_t getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, 0) };
      inline Items& setMatchType(int32_t matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      // modelRuleIds Field Functions 
      bool hasModelRuleIds() const { return this->modelRuleIds_ != nullptr;};
      void deleteModelRuleIds() { this->modelRuleIds_ = nullptr;};
      inline string getModelRuleIds() const { DARABONBA_PTR_GET_DEFAULT(modelRuleIds_, "") };
      inline Items& setModelRuleIds(string modelRuleIds) { DARABONBA_PTR_SET_VALUE(modelRuleIds_, modelRuleIds) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Items& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
      inline Items& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // riskLevelId Field Functions 
      bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
      void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
      inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
      inline Items& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


      // riskLevelName Field Functions 
      bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
      void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
      inline string getRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
      inline Items& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


      // statExpress Field Functions 
      bool hasStatExpress() const { return this->statExpress_ != nullptr;};
      void deleteStatExpress() { this->statExpress_ = nullptr;};
      inline string getStatExpress() const { DARABONBA_PTR_GET_DEFAULT(statExpress_, "") };
      inline Items& setStatExpress(string statExpress) { DARABONBA_PTR_SET_VALUE(statExpress_, statExpress) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Items& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supportForm Field Functions 
      bool hasSupportForm() const { return this->supportForm_ != nullptr;};
      void deleteSupportForm() { this->supportForm_ = nullptr;};
      inline int32_t getSupportForm() const { DARABONBA_PTR_GET_DEFAULT(supportForm_, 0) };
      inline Items& setSupportForm(int32_t supportForm) { DARABONBA_PTR_SET_VALUE(supportForm_, supportForm) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline Items& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // templateRuleIds Field Functions 
      bool hasTemplateRuleIds() const { return this->templateRuleIds_ != nullptr;};
      void deleteTemplateRuleIds() { this->templateRuleIds_ = nullptr;};
      inline string getTemplateRuleIds() const { DARABONBA_PTR_GET_DEFAULT(templateRuleIds_, "") };
      inline Items& setTemplateRuleIds(string templateRuleIds) { DARABONBA_PTR_SET_VALUE(templateRuleIds_, templateRuleIds) };


      // threatAnalysisStatus Field Functions 
      bool hasThreatAnalysisStatus() const { return this->threatAnalysisStatus_ != nullptr;};
      void deleteThreatAnalysisStatus() { this->threatAnalysisStatus_ = nullptr;};
      inline int32_t getThreatAnalysisStatus() const { DARABONBA_PTR_GET_DEFAULT(threatAnalysisStatus_, 0) };
      inline Items& setThreatAnalysisStatus(int32_t threatAnalysisStatus) { DARABONBA_PTR_SET_VALUE(threatAnalysisStatus_, threatAnalysisStatus) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Items& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // warnLevel Field Functions 
      bool hasWarnLevel() const { return this->warnLevel_ != nullptr;};
      void deleteWarnLevel() { this->warnLevel_ = nullptr;};
      inline int32_t getWarnLevel() const { DARABONBA_PTR_GET_DEFAULT(warnLevel_, 0) };
      inline Items& setWarnLevel(int32_t warnLevel) { DARABONBA_PTR_SET_VALUE(warnLevel_, warnLevel) };


    protected:
      shared_ptr<int32_t> auditMode_ {};
      // The content type of the sensitive data detection rule. Valid values:
      // 
      // *   **0**: keyword
      // *   **2**: regular expression
      shared_ptr<int32_t> category_ {};
      // The name of the content type of the sensitive data detection rule.
      shared_ptr<string> categoryName_ {};
      // The content in the sensitive data detection rule.
      // 
      // >  A built-in detection rule whose CustomType is 0 does not return the content of the rule.
      shared_ptr<string> content_ {};
      // The type of the content in the sensitive data detection rule. Valid values include **1**, **2**, **3**, **4**, and **5**. The value 1 indicates attempts to exploit SQL injections. The value 2 indicates bypass by using SQL injections. The value 3 indicates abuse of stored procedures. The value 4 indicates buffer overflow. The value 5 indicates SQL injections based on errors.
      shared_ptr<string> contentCategory_ {};
      // The type of the sensitive data detection rule.
      // 
      // *   0: built-in rule
      // *   1: custom rule
      shared_ptr<int32_t> customType_ {};
      // The description of the sensitive data detection rule.
      shared_ptr<string> description_ {};
      // The display name of the account that is used to create the sensitive data detection rule.
      shared_ptr<string> displayName_ {};
      // The time when the sensitive data detection rule is created. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The time when the sensitive data detection rule is modified. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> gmtModified_ {};
      // The parent group type of the rule.
      shared_ptr<string> groupId_ {};
      // The number of times that the sensitive data detection rule is hit.
      shared_ptr<int32_t> hitTotalCount_ {};
      // The ID of the sensitive data detection rule.
      shared_ptr<int64_t> id_ {};
      // The username of the account that is used to create the sensitive data detection rule.
      shared_ptr<string> loginName_ {};
      // The key of the primary dimension.
      shared_ptr<string> majorKey_ {};
      // The match type. Valid values:
      // 
      // *   **1**: rule-based match
      // *   **2**: dictionary-based match
      shared_ptr<int32_t> matchType_ {};
      // The IDs of the models for sensitive data audit.
      shared_ptr<string> modelRuleIds_ {};
      // The name of the sensitive data detection rule.
      shared_ptr<string> name_ {};
      // The name of the service to which the data asset belongs. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
      shared_ptr<string> productCode_ {};
      // The ID of the service to which the sensitive data detection rule is applied. Valid values include **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates OSS. The value 3 indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
      shared_ptr<int64_t> productId_ {};
      // The sensitivity level of the sensitive data that hits the sensitive data detection rule. Valid values:
      // 
      // *   **1**: N/A, which indicates that no sensitive data is detected.
      // *   **2**: S1, which indicates the low sensitivity level.
      // *   **3**: S2, which indicates the medium sensitivity level.
      // *   **4**: S3, which indicates the high sensitivity level.
      // *   **5**: S4, which indicates the highest sensitivity level.
      shared_ptr<int64_t> riskLevelId_ {};
      // The sensitivity level of data that hits the sensitive data detection rule. Valid values:
      // 
      // *   **N/A**: indicates that no sensitive data is detected.
      // *   **S1**: indicates the low sensitivity level.
      // *   **S2**: indicates the medium sensitivity level.
      // *   **S3**: indicates the high sensitivity level.
      // *   **S4**: indicates the highest sensitivity level.
      shared_ptr<string> riskLevelName_ {};
      // The statistical expression.
      shared_ptr<string> statExpress_ {};
      // The status of the sensitive data detection rule. Valid values:
      // 
      // *   **0**: disabled
      // *   **1**: enabled
      shared_ptr<int32_t> status_ {};
      // The data asset type that is supported by the sensitive data detection rule. Valid values:
      // 
      // *   **0**: all data assets
      // *   **1**: structured data assets
      // *   **2**: unstructured data assets
      shared_ptr<int32_t> supportForm_ {};
      // The name of the service to which the data asset belongs. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
      shared_ptr<string> target_ {};
      // The IDs of the templates that are used to audit sensitive data.
      shared_ptr<string> templateRuleIds_ {};
      shared_ptr<int32_t> threatAnalysisStatus_ {};
      // The ID of the account that is used to create the sensitive data detection rule.
      shared_ptr<int64_t> userId_ {};
      // The severity level. Valid values:
      // 
      // *   **1**: low
      // *   **2**: medium
      // *   **3**: high
      shared_ptr<int32_t> warnLevel_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeRulesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeRulesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeRulesResponseBody::Items>) };
    inline vector<DescribeRulesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeRulesResponseBody::Items>) };
    inline DescribeRulesResponseBody& setItems(const vector<DescribeRulesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeRulesResponseBody& setItems(vector<DescribeRulesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The sensitive data detection rules.
    shared_ptr<vector<DescribeRulesResponseBody::Items>> items_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
