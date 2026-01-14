// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ContentCategory, contentCategory_);
      DARABONBA_PTR_TO_JSON(CooperationChannel, cooperationChannel_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(CustomType, customType_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(KeywordCompatible, keywordCompatible_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Simplify, simplify_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportForm, supportForm_);
      DARABONBA_PTR_TO_JSON(WarnLevel, warnLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ContentCategory, contentCategory_);
      DARABONBA_PTR_FROM_JSON(CooperationChannel, cooperationChannel_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(CustomType, customType_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(KeywordCompatible, keywordCompatible_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Simplify, simplify_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportForm, supportForm_);
      DARABONBA_PTR_FROM_JSON(WarnLevel, warnLevel_);
    };
    DescribeRulesRequest() = default ;
    DescribeRulesRequest(const DescribeRulesRequest &) = default ;
    DescribeRulesRequest(DescribeRulesRequest &&) = default ;
    DescribeRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRulesRequest() = default ;
    DescribeRulesRequest& operator=(const DescribeRulesRequest &) = default ;
    DescribeRulesRequest& operator=(DescribeRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->contentCategory_ == nullptr && this->cooperationChannel_ == nullptr && this->currentPage_ == nullptr && this->customType_ == nullptr && this->featureType_ == nullptr
        && this->groupId_ == nullptr && this->keywordCompatible_ == nullptr && this->lang_ == nullptr && this->matchType_ == nullptr && this->name_ == nullptr
        && this->pageSize_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr && this->riskLevelId_ == nullptr && this->ruleType_ == nullptr
        && this->simplify_ == nullptr && this->status_ == nullptr && this->supportForm_ == nullptr && this->warnLevel_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline DescribeRulesRequest& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // contentCategory Field Functions 
    bool hasContentCategory() const { return this->contentCategory_ != nullptr;};
    void deleteContentCategory() { this->contentCategory_ = nullptr;};
    inline int32_t getContentCategory() const { DARABONBA_PTR_GET_DEFAULT(contentCategory_, 0) };
    inline DescribeRulesRequest& setContentCategory(int32_t contentCategory) { DARABONBA_PTR_SET_VALUE(contentCategory_, contentCategory) };


    // cooperationChannel Field Functions 
    bool hasCooperationChannel() const { return this->cooperationChannel_ != nullptr;};
    void deleteCooperationChannel() { this->cooperationChannel_ = nullptr;};
    inline string getCooperationChannel() const { DARABONBA_PTR_GET_DEFAULT(cooperationChannel_, "") };
    inline DescribeRulesRequest& setCooperationChannel(string cooperationChannel) { DARABONBA_PTR_SET_VALUE(cooperationChannel_, cooperationChannel) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeRulesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // customType Field Functions 
    bool hasCustomType() const { return this->customType_ != nullptr;};
    void deleteCustomType() { this->customType_ = nullptr;};
    inline int32_t getCustomType() const { DARABONBA_PTR_GET_DEFAULT(customType_, 0) };
    inline DescribeRulesRequest& setCustomType(int32_t customType) { DARABONBA_PTR_SET_VALUE(customType_, customType) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline DescribeRulesRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeRulesRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // keywordCompatible Field Functions 
    bool hasKeywordCompatible() const { return this->keywordCompatible_ != nullptr;};
    void deleteKeywordCompatible() { this->keywordCompatible_ = nullptr;};
    inline bool getKeywordCompatible() const { DARABONBA_PTR_GET_DEFAULT(keywordCompatible_, false) };
    inline DescribeRulesRequest& setKeywordCompatible(bool keywordCompatible) { DARABONBA_PTR_SET_VALUE(keywordCompatible_, keywordCompatible) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRulesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline int32_t getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, 0) };
    inline DescribeRulesRequest& setMatchType(int32_t matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeRulesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline int32_t getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, 0) };
    inline DescribeRulesRequest& setProductCode(int32_t productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DescribeRulesRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeRulesRequest& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline DescribeRulesRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // simplify Field Functions 
    bool hasSimplify() const { return this->simplify_ != nullptr;};
    void deleteSimplify() { this->simplify_ = nullptr;};
    inline bool getSimplify() const { DARABONBA_PTR_GET_DEFAULT(simplify_, false) };
    inline DescribeRulesRequest& setSimplify(bool simplify) { DARABONBA_PTR_SET_VALUE(simplify_, simplify) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeRulesRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportForm Field Functions 
    bool hasSupportForm() const { return this->supportForm_ != nullptr;};
    void deleteSupportForm() { this->supportForm_ = nullptr;};
    inline int32_t getSupportForm() const { DARABONBA_PTR_GET_DEFAULT(supportForm_, 0) };
    inline DescribeRulesRequest& setSupportForm(int32_t supportForm) { DARABONBA_PTR_SET_VALUE(supportForm_, supportForm) };


    // warnLevel Field Functions 
    bool hasWarnLevel() const { return this->warnLevel_ != nullptr;};
    void deleteWarnLevel() { this->warnLevel_ = nullptr;};
    inline int32_t getWarnLevel() const { DARABONBA_PTR_GET_DEFAULT(warnLevel_, 0) };
    inline DescribeRulesRequest& setWarnLevel(int32_t warnLevel) { DARABONBA_PTR_SET_VALUE(warnLevel_, warnLevel) };


  protected:
    // The content type of the sensitive data detection rule. Valid values:
    // 
    // *   **0**: keyword
    // *   **2**: regular expression
    shared_ptr<int32_t> category_ {};
    // The type of the content in the sensitive data detection rule. Valid values include **1**, **2**, **3**, **4**, and **5**. The value 1 indicates attempts to exploit SQL injections. The value 2 indicates bypass by using SQL injections. The value 3 indicates abuse of stored procedures. The value 4 indicates buffer overflow. The value 5 indicates SQL injections based on errors.
    shared_ptr<int32_t> contentCategory_ {};
    // The external cooperation channel. Valid values:
    // 
    // *   DAS
    // *   YAOCHI
    shared_ptr<string> cooperationChannel_ {};
    // The page number of the page to return.
    shared_ptr<int32_t> currentPage_ {};
    // The type of the sensitive data detection rule. Valid values:
    // 
    // *   **0**: built-in rule
    // *   **1**: custom rule
    shared_ptr<int32_t> customType_ {};
    // This parameter is deprecated.
    shared_ptr<int32_t> featureType_ {};
    // The parent group type of the rule.
    shared_ptr<string> groupId_ {};
    // Specifies whether to allow earlier versions of request parameters to support keywords that are supported in later versions of request parameters. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // > To specify keywords as the content type of the sensitive data detection rule, you can set the Category parameter to 0 for earlier versions of request parameters and set the Category parameter to 5 for later versions of request parameters. You can specify the KeywordCompatible parameter based on your business requirements.
    shared_ptr<bool> keywordCompatible_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The match type. Valid values:
    // 
    // *   1: rule-based match
    // *   2: dictionary-based match
    shared_ptr<int32_t> matchType_ {};
    // The name of the sensitive data detection rule. Fuzzy match is supported.
    shared_ptr<string> name_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the service to which the data asset belongs. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
    shared_ptr<int32_t> productCode_ {};
    // The ID of the service to which the sensitive data detection rule is applied. Valid values include **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates Object Storage Service (OSS). The value 3 indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
    shared_ptr<int64_t> productId_ {};
    // The sensitivity level of the sensitive data that hits the sensitive data detection rule. Valid values:
    // 
    // *   **1**: N/A, which indicates that no sensitive data is detected.
    // *   **2**: S1, which indicates the low sensitivity level.
    // *   **3**: S2, which indicates the medium sensitivity level.
    // *   **4**: S3, which indicates the high sensitivity level.
    // *   **5**: S4, which indicates the highest sensitivity level.
    shared_ptr<int64_t> riskLevelId_ {};
    // The type of the sensitive data detection rule. Valid values:
    // 
    // *   **1**: sensitive data detection rule
    // *   **2**: audit rule
    // *   **3**: anomalous event detection rule
    // *   **99**: custom rule
    shared_ptr<int32_t> ruleType_ {};
    // Specifies whether to query a simplified rule. The simplified rule contains only the rule name. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> simplify_ {};
    // The status of the sensitive data detection rule. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    shared_ptr<int32_t> status_ {};
    // The type of the data asset. Valid values:
    // 
    // *   **0**: all data assets
    // *   **1**: structured data asset
    // *   **2**: unstructured data asset
    // 
    // > If you set the parameter to 1 or 2, rules that support all data assets and rules that support the queried data asset type are returned.
    shared_ptr<int32_t> supportForm_ {};
    // The severity level of the alert. Valid values:
    // 
    // *   **1**: low
    // *   **2**: medium
    // *   **3**: high
    shared_ptr<int32_t> warnLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
