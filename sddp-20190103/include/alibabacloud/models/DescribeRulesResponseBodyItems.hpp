// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeRulesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRulesResponseBodyItems& obj) { 
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
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WarnLevel, warnLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRulesResponseBodyItems& obj) { 
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
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WarnLevel, warnLevel_);
    };
    DescribeRulesResponseBodyItems() = default ;
    DescribeRulesResponseBodyItems(const DescribeRulesResponseBodyItems &) = default ;
    DescribeRulesResponseBodyItems(DescribeRulesResponseBodyItems &&) = default ;
    DescribeRulesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRulesResponseBodyItems() = default ;
    DescribeRulesResponseBodyItems& operator=(const DescribeRulesResponseBodyItems &) = default ;
    DescribeRulesResponseBodyItems& operator=(DescribeRulesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->categoryName_ == nullptr && return this->content_ == nullptr && return this->contentCategory_ == nullptr && return this->customType_ == nullptr && return this->description_ == nullptr
        && return this->displayName_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->groupId_ == nullptr && return this->hitTotalCount_ == nullptr
        && return this->id_ == nullptr && return this->loginName_ == nullptr && return this->majorKey_ == nullptr && return this->matchType_ == nullptr && return this->modelRuleIds_ == nullptr
        && return this->name_ == nullptr && return this->productCode_ == nullptr && return this->productId_ == nullptr && return this->riskLevelId_ == nullptr && return this->riskLevelName_ == nullptr
        && return this->statExpress_ == nullptr && return this->status_ == nullptr && return this->supportForm_ == nullptr && return this->target_ == nullptr && return this->templateRuleIds_ == nullptr
        && return this->userId_ == nullptr && return this->warnLevel_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline DescribeRulesResponseBodyItems& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DescribeRulesResponseBodyItems& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeRulesResponseBodyItems& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentCategory Field Functions 
    bool hasContentCategory() const { return this->contentCategory_ != nullptr;};
    void deleteContentCategory() { this->contentCategory_ = nullptr;};
    inline string contentCategory() const { DARABONBA_PTR_GET_DEFAULT(contentCategory_, "") };
    inline DescribeRulesResponseBodyItems& setContentCategory(string contentCategory) { DARABONBA_PTR_SET_VALUE(contentCategory_, contentCategory) };


    // customType Field Functions 
    bool hasCustomType() const { return this->customType_ != nullptr;};
    void deleteCustomType() { this->customType_ = nullptr;};
    inline int32_t customType() const { DARABONBA_PTR_GET_DEFAULT(customType_, 0) };
    inline DescribeRulesResponseBodyItems& setCustomType(int32_t customType) { DARABONBA_PTR_SET_VALUE(customType_, customType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRulesResponseBodyItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeRulesResponseBodyItems& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeRulesResponseBodyItems& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeRulesResponseBodyItems& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeRulesResponseBodyItems& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hitTotalCount Field Functions 
    bool hasHitTotalCount() const { return this->hitTotalCount_ != nullptr;};
    void deleteHitTotalCount() { this->hitTotalCount_ = nullptr;};
    inline int32_t hitTotalCount() const { DARABONBA_PTR_GET_DEFAULT(hitTotalCount_, 0) };
    inline DescribeRulesResponseBodyItems& setHitTotalCount(int32_t hitTotalCount) { DARABONBA_PTR_SET_VALUE(hitTotalCount_, hitTotalCount) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeRulesResponseBodyItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string loginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline DescribeRulesResponseBodyItems& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // majorKey Field Functions 
    bool hasMajorKey() const { return this->majorKey_ != nullptr;};
    void deleteMajorKey() { this->majorKey_ = nullptr;};
    inline string majorKey() const { DARABONBA_PTR_GET_DEFAULT(majorKey_, "") };
    inline DescribeRulesResponseBodyItems& setMajorKey(string majorKey) { DARABONBA_PTR_SET_VALUE(majorKey_, majorKey) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline int32_t matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, 0) };
    inline DescribeRulesResponseBodyItems& setMatchType(int32_t matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // modelRuleIds Field Functions 
    bool hasModelRuleIds() const { return this->modelRuleIds_ != nullptr;};
    void deleteModelRuleIds() { this->modelRuleIds_ = nullptr;};
    inline string modelRuleIds() const { DARABONBA_PTR_GET_DEFAULT(modelRuleIds_, "") };
    inline DescribeRulesResponseBodyItems& setModelRuleIds(string modelRuleIds) { DARABONBA_PTR_SET_VALUE(modelRuleIds_, modelRuleIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeRulesResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeRulesResponseBodyItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DescribeRulesResponseBodyItems& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeRulesResponseBodyItems& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // riskLevelName Field Functions 
    bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
    void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
    inline string riskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
    inline DescribeRulesResponseBodyItems& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


    // statExpress Field Functions 
    bool hasStatExpress() const { return this->statExpress_ != nullptr;};
    void deleteStatExpress() { this->statExpress_ = nullptr;};
    inline string statExpress() const { DARABONBA_PTR_GET_DEFAULT(statExpress_, "") };
    inline DescribeRulesResponseBodyItems& setStatExpress(string statExpress) { DARABONBA_PTR_SET_VALUE(statExpress_, statExpress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeRulesResponseBodyItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportForm Field Functions 
    bool hasSupportForm() const { return this->supportForm_ != nullptr;};
    void deleteSupportForm() { this->supportForm_ = nullptr;};
    inline int32_t supportForm() const { DARABONBA_PTR_GET_DEFAULT(supportForm_, 0) };
    inline DescribeRulesResponseBodyItems& setSupportForm(int32_t supportForm) { DARABONBA_PTR_SET_VALUE(supportForm_, supportForm) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeRulesResponseBodyItems& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // templateRuleIds Field Functions 
    bool hasTemplateRuleIds() const { return this->templateRuleIds_ != nullptr;};
    void deleteTemplateRuleIds() { this->templateRuleIds_ = nullptr;};
    inline string templateRuleIds() const { DARABONBA_PTR_GET_DEFAULT(templateRuleIds_, "") };
    inline DescribeRulesResponseBodyItems& setTemplateRuleIds(string templateRuleIds) { DARABONBA_PTR_SET_VALUE(templateRuleIds_, templateRuleIds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeRulesResponseBodyItems& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // warnLevel Field Functions 
    bool hasWarnLevel() const { return this->warnLevel_ != nullptr;};
    void deleteWarnLevel() { this->warnLevel_ = nullptr;};
    inline int32_t warnLevel() const { DARABONBA_PTR_GET_DEFAULT(warnLevel_, 0) };
    inline DescribeRulesResponseBodyItems& setWarnLevel(int32_t warnLevel) { DARABONBA_PTR_SET_VALUE(warnLevel_, warnLevel) };


  protected:
    // The content type of the sensitive data detection rule. Valid values:
    // 
    // *   **0**: keyword
    // *   **2**: regular expression
    std::shared_ptr<int32_t> category_ = nullptr;
    // The name of the content type of the sensitive data detection rule.
    std::shared_ptr<string> categoryName_ = nullptr;
    // The content in the sensitive data detection rule.
    // 
    // >  A built-in detection rule whose CustomType is 0 does not return the content of the rule.
    std::shared_ptr<string> content_ = nullptr;
    // The type of the content in the sensitive data detection rule. Valid values include **1**, **2**, **3**, **4**, and **5**. The value 1 indicates attempts to exploit SQL injections. The value 2 indicates bypass by using SQL injections. The value 3 indicates abuse of stored procedures. The value 4 indicates buffer overflow. The value 5 indicates SQL injections based on errors.
    std::shared_ptr<string> contentCategory_ = nullptr;
    // The type of the sensitive data detection rule.
    // 
    // *   0: built-in rule
    // *   1: custom rule
    std::shared_ptr<int32_t> customType_ = nullptr;
    // The description of the sensitive data detection rule.
    std::shared_ptr<string> description_ = nullptr;
    // The display name of the account that is used to create the sensitive data detection rule.
    std::shared_ptr<string> displayName_ = nullptr;
    // The time when the sensitive data detection rule is created. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The time when the sensitive data detection rule is modified. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The parent group type of the rule.
    std::shared_ptr<string> groupId_ = nullptr;
    // The number of times that the sensitive data detection rule is hit.
    std::shared_ptr<int32_t> hitTotalCount_ = nullptr;
    // The ID of the sensitive data detection rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The username of the account that is used to create the sensitive data detection rule.
    std::shared_ptr<string> loginName_ = nullptr;
    // The key of the primary dimension.
    std::shared_ptr<string> majorKey_ = nullptr;
    // The match type. Valid values:
    // 
    // *   **1**: rule-based match
    // *   **2**: dictionary-based match
    std::shared_ptr<int32_t> matchType_ = nullptr;
    // The IDs of the models for sensitive data audit.
    std::shared_ptr<string> modelRuleIds_ = nullptr;
    // The name of the sensitive data detection rule.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the service to which the data asset belongs. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the service to which the sensitive data detection rule is applied. Valid values include **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates OSS. The value 3 indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
    std::shared_ptr<int64_t> productId_ = nullptr;
    // The sensitivity level of the sensitive data that hits the sensitive data detection rule. Valid values:
    // 
    // *   **1**: N/A, which indicates that no sensitive data is detected.
    // *   **2**: S1, which indicates the low sensitivity level.
    // *   **3**: S2, which indicates the medium sensitivity level.
    // *   **4**: S3, which indicates the high sensitivity level.
    // *   **5**: S4, which indicates the highest sensitivity level.
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
    // The sensitivity level of data that hits the sensitive data detection rule. Valid values:
    // 
    // *   **N/A**: indicates that no sensitive data is detected.
    // *   **S1**: indicates the low sensitivity level.
    // *   **S2**: indicates the medium sensitivity level.
    // *   **S3**: indicates the high sensitivity level.
    // *   **S4**: indicates the highest sensitivity level.
    std::shared_ptr<string> riskLevelName_ = nullptr;
    // The statistical expression.
    std::shared_ptr<string> statExpress_ = nullptr;
    // The status of the sensitive data detection rule. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    std::shared_ptr<int32_t> status_ = nullptr;
    // The data asset type that is supported by the sensitive data detection rule. Valid values:
    // 
    // *   **0**: all data assets
    // *   **1**: structured data assets
    // *   **2**: unstructured data assets
    std::shared_ptr<int32_t> supportForm_ = nullptr;
    // The name of the service to which the data asset belongs. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
    std::shared_ptr<string> target_ = nullptr;
    // The IDs of the templates that are used to audit sensitive data.
    std::shared_ptr<string> templateRuleIds_ = nullptr;
    // The ID of the account that is used to create the sensitive data detection rule.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The severity level. Valid values:
    // 
    // *   **1**: low
    // *   **2**: medium
    // *   **3**: high
    std::shared_ptr<int32_t> warnLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
