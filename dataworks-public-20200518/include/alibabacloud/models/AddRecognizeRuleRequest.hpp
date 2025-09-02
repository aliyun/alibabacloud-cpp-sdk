// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRECOGNIZERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRECOGNIZERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class AddRecognizeRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRecognizeRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(ColExclude, colExclude_);
      DARABONBA_PTR_TO_JSON(ColScan, colScan_);
      DARABONBA_PTR_TO_JSON(CommentScan, commentScan_);
      DARABONBA_PTR_TO_JSON(ContentScan, contentScan_);
      DARABONBA_PTR_TO_JSON(HitThreshold, hitThreshold_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(LevelName, levelName_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeParent, nodeParent_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(RecognizeRules, recognizeRules_);
      DARABONBA_PTR_TO_JSON(RecognizeRulesType, recognizeRulesType_);
      DARABONBA_PTR_TO_JSON(SensitiveDescription, sensitiveDescription_);
      DARABONBA_PTR_TO_JSON(SensitiveName, sensitiveName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AddRecognizeRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(ColExclude, colExclude_);
      DARABONBA_PTR_FROM_JSON(ColScan, colScan_);
      DARABONBA_PTR_FROM_JSON(CommentScan, commentScan_);
      DARABONBA_PTR_FROM_JSON(ContentScan, contentScan_);
      DARABONBA_PTR_FROM_JSON(HitThreshold, hitThreshold_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(LevelName, levelName_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeParent, nodeParent_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(RecognizeRules, recognizeRules_);
      DARABONBA_PTR_FROM_JSON(RecognizeRulesType, recognizeRulesType_);
      DARABONBA_PTR_FROM_JSON(SensitiveDescription, sensitiveDescription_);
      DARABONBA_PTR_FROM_JSON(SensitiveName, sensitiveName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    AddRecognizeRuleRequest() = default ;
    AddRecognizeRuleRequest(const AddRecognizeRuleRequest &) = default ;
    AddRecognizeRuleRequest(AddRecognizeRuleRequest &&) = default ;
    AddRecognizeRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRecognizeRuleRequest() = default ;
    AddRecognizeRuleRequest& operator=(const AddRecognizeRuleRequest &) = default ;
    AddRecognizeRuleRequest& operator=(AddRecognizeRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->colExclude_ != nullptr && this->colScan_ != nullptr && this->commentScan_ != nullptr && this->contentScan_ != nullptr && this->hitThreshold_ != nullptr
        && this->level_ != nullptr && this->levelName_ != nullptr && this->nodeId_ != nullptr && this->nodeParent_ != nullptr && this->operationType_ != nullptr
        && this->recognizeRules_ != nullptr && this->recognizeRulesType_ != nullptr && this->sensitiveDescription_ != nullptr && this->sensitiveName_ != nullptr && this->status_ != nullptr
        && this->templateId_ != nullptr && this->tenantId_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline AddRecognizeRuleRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // colExclude Field Functions 
    bool hasColExclude() const { return this->colExclude_ != nullptr;};
    void deleteColExclude() { this->colExclude_ = nullptr;};
    inline string colExclude() const { DARABONBA_PTR_GET_DEFAULT(colExclude_, "") };
    inline AddRecognizeRuleRequest& setColExclude(string colExclude) { DARABONBA_PTR_SET_VALUE(colExclude_, colExclude) };


    // colScan Field Functions 
    bool hasColScan() const { return this->colScan_ != nullptr;};
    void deleteColScan() { this->colScan_ = nullptr;};
    inline string colScan() const { DARABONBA_PTR_GET_DEFAULT(colScan_, "") };
    inline AddRecognizeRuleRequest& setColScan(string colScan) { DARABONBA_PTR_SET_VALUE(colScan_, colScan) };


    // commentScan Field Functions 
    bool hasCommentScan() const { return this->commentScan_ != nullptr;};
    void deleteCommentScan() { this->commentScan_ = nullptr;};
    inline string commentScan() const { DARABONBA_PTR_GET_DEFAULT(commentScan_, "") };
    inline AddRecognizeRuleRequest& setCommentScan(string commentScan) { DARABONBA_PTR_SET_VALUE(commentScan_, commentScan) };


    // contentScan Field Functions 
    bool hasContentScan() const { return this->contentScan_ != nullptr;};
    void deleteContentScan() { this->contentScan_ = nullptr;};
    inline string contentScan() const { DARABONBA_PTR_GET_DEFAULT(contentScan_, "") };
    inline AddRecognizeRuleRequest& setContentScan(string contentScan) { DARABONBA_PTR_SET_VALUE(contentScan_, contentScan) };


    // hitThreshold Field Functions 
    bool hasHitThreshold() const { return this->hitThreshold_ != nullptr;};
    void deleteHitThreshold() { this->hitThreshold_ = nullptr;};
    inline int32_t hitThreshold() const { DARABONBA_PTR_GET_DEFAULT(hitThreshold_, 0) };
    inline AddRecognizeRuleRequest& setHitThreshold(int32_t hitThreshold) { DARABONBA_PTR_SET_VALUE(hitThreshold_, hitThreshold) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline AddRecognizeRuleRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // levelName Field Functions 
    bool hasLevelName() const { return this->levelName_ != nullptr;};
    void deleteLevelName() { this->levelName_ = nullptr;};
    inline string levelName() const { DARABONBA_PTR_GET_DEFAULT(levelName_, "") };
    inline AddRecognizeRuleRequest& setLevelName(string levelName) { DARABONBA_PTR_SET_VALUE(levelName_, levelName) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline AddRecognizeRuleRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeParent Field Functions 
    bool hasNodeParent() const { return this->nodeParent_ != nullptr;};
    void deleteNodeParent() { this->nodeParent_ = nullptr;};
    inline string nodeParent() const { DARABONBA_PTR_GET_DEFAULT(nodeParent_, "") };
    inline AddRecognizeRuleRequest& setNodeParent(string nodeParent) { DARABONBA_PTR_SET_VALUE(nodeParent_, nodeParent) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline int32_t operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, 0) };
    inline AddRecognizeRuleRequest& setOperationType(int32_t operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // recognizeRules Field Functions 
    bool hasRecognizeRules() const { return this->recognizeRules_ != nullptr;};
    void deleteRecognizeRules() { this->recognizeRules_ = nullptr;};
    inline string recognizeRules() const { DARABONBA_PTR_GET_DEFAULT(recognizeRules_, "") };
    inline AddRecognizeRuleRequest& setRecognizeRules(string recognizeRules) { DARABONBA_PTR_SET_VALUE(recognizeRules_, recognizeRules) };


    // recognizeRulesType Field Functions 
    bool hasRecognizeRulesType() const { return this->recognizeRulesType_ != nullptr;};
    void deleteRecognizeRulesType() { this->recognizeRulesType_ = nullptr;};
    inline string recognizeRulesType() const { DARABONBA_PTR_GET_DEFAULT(recognizeRulesType_, "") };
    inline AddRecognizeRuleRequest& setRecognizeRulesType(string recognizeRulesType) { DARABONBA_PTR_SET_VALUE(recognizeRulesType_, recognizeRulesType) };


    // sensitiveDescription Field Functions 
    bool hasSensitiveDescription() const { return this->sensitiveDescription_ != nullptr;};
    void deleteSensitiveDescription() { this->sensitiveDescription_ = nullptr;};
    inline string sensitiveDescription() const { DARABONBA_PTR_GET_DEFAULT(sensitiveDescription_, "") };
    inline AddRecognizeRuleRequest& setSensitiveDescription(string sensitiveDescription) { DARABONBA_PTR_SET_VALUE(sensitiveDescription_, sensitiveDescription) };


    // sensitiveName Field Functions 
    bool hasSensitiveName() const { return this->sensitiveName_ != nullptr;};
    void deleteSensitiveName() { this->sensitiveName_ = nullptr;};
    inline string sensitiveName() const { DARABONBA_PTR_GET_DEFAULT(sensitiveName_, "") };
    inline AddRecognizeRuleRequest& setSensitiveName(string sensitiveName) { DARABONBA_PTR_SET_VALUE(sensitiveName_, sensitiveName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline AddRecognizeRuleRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline AddRecognizeRuleRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline AddRecognizeRuleRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The Alibaba Cloud account that is used to create a sensitive data identification rule. Enter the username of the Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // Excludes fields. The system does not identify fields that are assigned with values.
    // 
    // *   The value must be in the ${Project name}.${Table name}.${Field name} or ${Project name}.${Schema name}.${Table name}.${Field name} format.
    // *   *Wildcards are supported. For example, the asterisk (\\*) in default.table.column1\\* can be used to match any content following default.table.column1, such as default.table.column10.
    std::shared_ptr<string> colExclude_ = nullptr;
    // Scans fields. The system identifies only fields that are assigned with values.
    // 
    // *   The value must be in the ${Project name}.${Table name}.${Field name} or ${Project name}.${Schema name}.${Table name}.${Field name} format.
    // *   *Wildcards are supported. For example, the asterisk (\\*) in default.table.column1\\* can be used to match any content following default.table.column1, such as default.table.column10.
    std::shared_ptr<string> colScan_ = nullptr;
    // Scans content. The value is the text of each field comment in your data asset. Fuzzy match is supported.
    std::shared_ptr<string> commentScan_ = nullptr;
    // Identifies content. You can call the [QuerySensNodeInfo](https://help.aliyun.com/document_detail/2747189.html) operation to query the value of the current parameter for a built-in sensitive field.
    std::shared_ptr<string> contentScan_ = nullptr;
    // The hit ratio threshold. If more than 60%, which is a sample hit ratio threshold, of all sample data records hit the Name Entity Recognition (NER) model, the sensitive field is hit. The value can be an integer from 0 to 100.
    std::shared_ptr<int32_t> hitThreshold_ = nullptr;
    // The sensitivity level of the sensitive field. You can select one from all sensitivity levels that are defined in a template as the sensitivity level of the sensitive field, such as level 1 to level 10.
    // 
    // This parameter is required.
    std::shared_ptr<string> level_ = nullptr;
    // The name of the sensitivity level. You can call the [QueryDefaultTemplate](https://help.aliyun.com/document_detail/2743948.html) operation to obtain the name of the sensitivity level in the related template.
    std::shared_ptr<string> levelName_ = nullptr;
    // The ID of the data category. You can call the [QuerySensClassification](https://help.aliyun.com/document_detail/2746850.html) operation to query the ID of all data categories. Then, you can select a data category to create a sensitive field. Enter the ID of the selected data category.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The information about the parent data category of the current data category. You can call the [QuerySensClassification](https://help.aliyun.com/document_detail/2746850.html) operation to obtain the ID of a data category.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeParent_ = nullptr;
    // The type of the arithmetic operation. Valid values:
    // 
    // *   0: OR
    // *   1: AND
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> operationType_ = nullptr;
    // The content of the sensitive data identification rule. You can call the [QuerySensNodeInfo](https://help.aliyun.com/document_detail/2747189.html) operation to query the value of the current parameter for a built-in sensitive field.
    std::shared_ptr<string> recognizeRules_ = nullptr;
    // The type of the sensitive data identification rule. Valid values:
    // 
    // *   1: regular expression
    // *   2: built-in rule
    // *   3: sample library
    // *   4: self-generated data identification model
    std::shared_ptr<string> recognizeRulesType_ = nullptr;
    // The description of the sensitive field. Enter a string that is less than 128 characters in length.
    std::shared_ptr<string> sensitiveDescription_ = nullptr;
    // The name of the custom sensitive field. Enter a string that is less than 128 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> sensitiveName_ = nullptr;
    // The status of the sensitive field. Valid values:
    // 
    // *   0: draft
    // *   1: effective
    std::shared_ptr<int32_t> status_ = nullptr;
    // The template ID. You can call the [QueryDefaultTemplate](https://help.aliyun.com/document_detail/2743948.html) operation to obtain the template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    // The tenant ID. To obtain the tenant ID, perform the following steps: Log on to the [DataWorks console](https://workbench.data.aliyun.com/console). Find your workspace and go to the DataStudio page. On the DataStudio page, click the logon username in the upper-right corner and click User Info in the Menu section.
    // 
    // This parameter is required.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
