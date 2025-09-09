// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class CreateRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentCategory, contentCategory_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(ModelRuleIds, modelRuleIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StatExpress, statExpress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportForm, supportForm_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TemplateRuleIds, templateRuleIds_);
      DARABONBA_PTR_TO_JSON(WarnLevel, warnLevel_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentCategory, contentCategory_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(ModelRuleIds, modelRuleIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StatExpress, statExpress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportForm, supportForm_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TemplateRuleIds, templateRuleIds_);
      DARABONBA_PTR_FROM_JSON(WarnLevel, warnLevel_);
    };
    CreateRuleRequest() = default ;
    CreateRuleRequest(const CreateRuleRequest &) = default ;
    CreateRuleRequest(CreateRuleRequest &&) = default ;
    CreateRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleRequest() = default ;
    CreateRuleRequest& operator=(const CreateRuleRequest &) = default ;
    CreateRuleRequest& operator=(CreateRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->content_ != nullptr && this->contentCategory_ != nullptr && this->description_ != nullptr && this->lang_ != nullptr && this->matchType_ != nullptr
        && this->modelRuleIds_ != nullptr && this->name_ != nullptr && this->productCode_ != nullptr && this->productId_ != nullptr && this->riskLevelId_ != nullptr
        && this->ruleType_ != nullptr && this->sourceIp_ != nullptr && this->statExpress_ != nullptr && this->status_ != nullptr && this->supportForm_ != nullptr
        && this->target_ != nullptr && this->templateRuleIds_ != nullptr && this->warnLevel_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline CreateRuleRequest& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateRuleRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentCategory Field Functions 
    bool hasContentCategory() const { return this->contentCategory_ != nullptr;};
    void deleteContentCategory() { this->contentCategory_ = nullptr;};
    inline int32_t contentCategory() const { DARABONBA_PTR_GET_DEFAULT(contentCategory_, 0) };
    inline CreateRuleRequest& setContentCategory(int32_t contentCategory) { DARABONBA_PTR_SET_VALUE(contentCategory_, contentCategory) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline int32_t matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, 0) };
    inline CreateRuleRequest& setMatchType(int32_t matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // modelRuleIds Field Functions 
    bool hasModelRuleIds() const { return this->modelRuleIds_ != nullptr;};
    void deleteModelRuleIds() { this->modelRuleIds_ = nullptr;};
    inline string modelRuleIds() const { DARABONBA_PTR_GET_DEFAULT(modelRuleIds_, "") };
    inline CreateRuleRequest& setModelRuleIds(string modelRuleIds) { DARABONBA_PTR_SET_VALUE(modelRuleIds_, modelRuleIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateRuleRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline CreateRuleRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline CreateRuleRequest& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline CreateRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateRuleRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // statExpress Field Functions 
    bool hasStatExpress() const { return this->statExpress_ != nullptr;};
    void deleteStatExpress() { this->statExpress_ = nullptr;};
    inline string statExpress() const { DARABONBA_PTR_GET_DEFAULT(statExpress_, "") };
    inline CreateRuleRequest& setStatExpress(string statExpress) { DARABONBA_PTR_SET_VALUE(statExpress_, statExpress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CreateRuleRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportForm Field Functions 
    bool hasSupportForm() const { return this->supportForm_ != nullptr;};
    void deleteSupportForm() { this->supportForm_ = nullptr;};
    inline int32_t supportForm() const { DARABONBA_PTR_GET_DEFAULT(supportForm_, 0) };
    inline CreateRuleRequest& setSupportForm(int32_t supportForm) { DARABONBA_PTR_SET_VALUE(supportForm_, supportForm) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline CreateRuleRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // templateRuleIds Field Functions 
    bool hasTemplateRuleIds() const { return this->templateRuleIds_ != nullptr;};
    void deleteTemplateRuleIds() { this->templateRuleIds_ = nullptr;};
    inline string templateRuleIds() const { DARABONBA_PTR_GET_DEFAULT(templateRuleIds_, "") };
    inline CreateRuleRequest& setTemplateRuleIds(string templateRuleIds) { DARABONBA_PTR_SET_VALUE(templateRuleIds_, templateRuleIds) };


    // warnLevel Field Functions 
    bool hasWarnLevel() const { return this->warnLevel_ != nullptr;};
    void deleteWarnLevel() { this->warnLevel_ = nullptr;};
    inline int32_t warnLevel() const { DARABONBA_PTR_GET_DEFAULT(warnLevel_, 0) };
    inline CreateRuleRequest& setWarnLevel(int32_t warnLevel) { DARABONBA_PTR_SET_VALUE(warnLevel_, warnLevel) };


  protected:
    // The content type of the sensitive data detection rule. Valid values:
    // 
    // *   **0**: keyword
    // *   **2**: regular expression
    std::shared_ptr<int32_t> category_ = nullptr;
    // The content of the sensitive data detection rule. You can specify a regular expression or keywords that are used to match sensitive fields or text.
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // The type of the content in the sensitive data detection rule. Valid values include **1**, **2**, **3**, **4**, and **5**. The value 1 indicates attempts to exploit SQL injections. The value 2 indicates bypass by using SQL injections. The value 3 indicates abuse of stored procedures. The value 4 indicates buffer overflow. The value 5 indicates SQL injections based on errors.
    std::shared_ptr<int32_t> contentCategory_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> description_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The match type. Valid values:
    // 
    // *   **1**: rule-based match
    // *   **2**: dictionary-based match
    std::shared_ptr<int32_t> matchType_ = nullptr;
    // The IDs of the models for sensitive data audit.
    std::shared_ptr<string> modelRuleIds_ = nullptr;
    // The name of the sensitive data detection rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the service to which data in the column of the table belongs. Valid values include **MaxCompute**, **OSS**, **ADS**, **OTS**, and **RDS**.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the service to which the data asset belongs. Valid values include **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates Object Storage Service (OSS). The value 3 indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
    std::shared_ptr<int64_t> productId_ = nullptr;
    // The sensitivity level of the sensitive data that hits the sensitive data detection rule. Valid values:
    // 
    // *   **1**: N/A, which indicates that no sensitive data is detected.
    // *   **2**: S1, which indicates the low sensitivity level.
    // *   **3**: S2, which indicates the medium sensitivity level.
    // *   **4**: S3, which indicates the high sensitivity level.
    // *   **5**: S4, which indicates the highest sensitivity level.
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
    // The type of the sensitive data detection rule. Valid values:
    // 
    // *   **1**: sensitive data detection rule
    // *   **2**: audit rule
    // *   **3**: anomalous event detection rule
    // *   **99**: custom rule
    std::shared_ptr<int32_t> ruleType_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The statistical expression.
    std::shared_ptr<string> statExpress_ = nullptr;
    // Specifies whether to enable the sensitive data detection rule. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> status_ = nullptr;
    // The type of the data asset. Valid values:
    // 
    // *   **0**: all data assets
    // *   **1**: structured data asset
    // *   **2**: unstructured data asset
    // 
    // > If you set the parameter to 1 or 2, rules that support all data assets and rules that support the queried data asset type are returned.
    std::shared_ptr<int32_t> supportForm_ = nullptr;
    // The code of the service to which the sensitive data detection rule is applied. Valid values include **MaxCompute**, **OSS**, **ADS**, **OTS**, and **RDS**.
    std::shared_ptr<string> target_ = nullptr;
    // The IDs of the templates that are used to audit sensitive data.
    std::shared_ptr<string> templateRuleIds_ = nullptr;
    // The risk level of the alert that is triggered. Valid values:
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
