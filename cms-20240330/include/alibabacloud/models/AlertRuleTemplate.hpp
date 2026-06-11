// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULETEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULETEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(alertType, alertType_);
      DARABONBA_PTR_TO_JSON(applyCount, applyCount_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isSystem, isSystem_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(ruleConfigs, ruleConfigs_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(subType, subType_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(alertType, alertType_);
      DARABONBA_PTR_FROM_JSON(applyCount, applyCount_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isSystem, isSystem_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(ruleConfigs, ruleConfigs_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(subType, subType_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
    };
    AlertRuleTemplate() = default ;
    AlertRuleTemplate(const AlertRuleTemplate &) = default ;
    AlertRuleTemplate(AlertRuleTemplate &&) = default ;
    AlertRuleTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleTemplate() = default ;
    AlertRuleTemplate& operator=(const AlertRuleTemplate &) = default ;
    AlertRuleTemplate& operator=(AlertRuleTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertType_ == nullptr
        && this->applyCount_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->isSystem_ == nullptr && this->labels_ == nullptr && this->ruleConfigs_ == nullptr && this->status_ == nullptr && this->subType_ == nullptr
        && this->templateName_ == nullptr && this->userId_ == nullptr && this->uuid_ == nullptr; };
    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline AlertRuleTemplate& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // applyCount Field Functions 
    bool hasApplyCount() const { return this->applyCount_ != nullptr;};
    void deleteApplyCount() { this->applyCount_ = nullptr;};
    inline int64_t getApplyCount() const { DARABONBA_PTR_GET_DEFAULT(applyCount_, 0L) };
    inline AlertRuleTemplate& setApplyCount(int64_t applyCount) { DARABONBA_PTR_SET_VALUE(applyCount_, applyCount) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AlertRuleTemplate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline AlertRuleTemplate& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline AlertRuleTemplate& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AlertRuleTemplate& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isSystem Field Functions 
    bool hasIsSystem() const { return this->isSystem_ != nullptr;};
    void deleteIsSystem() { this->isSystem_ = nullptr;};
    inline int32_t getIsSystem() const { DARABONBA_PTR_GET_DEFAULT(isSystem_, 0) };
    inline AlertRuleTemplate& setIsSystem(int32_t isSystem) { DARABONBA_PTR_SET_VALUE(isSystem_, isSystem) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline AlertRuleTemplate& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // ruleConfigs Field Functions 
    bool hasRuleConfigs() const { return this->ruleConfigs_ != nullptr;};
    void deleteRuleConfigs() { this->ruleConfigs_ = nullptr;};
    inline string getRuleConfigs() const { DARABONBA_PTR_GET_DEFAULT(ruleConfigs_, "") };
    inline AlertRuleTemplate& setRuleConfigs(string ruleConfigs) { DARABONBA_PTR_SET_VALUE(ruleConfigs_, ruleConfigs) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline AlertRuleTemplate& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline AlertRuleTemplate& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline AlertRuleTemplate& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AlertRuleTemplate& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline AlertRuleTemplate& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The type of the alert.
    shared_ptr<string> alertType_ {};
    // The number of alert rules created from this template.
    shared_ptr<int64_t> applyCount_ {};
    // The description of the template.
    shared_ptr<string> description_ {};
    // The creation time of the template, as a UNIX timestamp.
    shared_ptr<int64_t> gmtCreate_ {};
    // The time the template was last modified, as a UNIX timestamp.
    shared_ptr<int64_t> gmtModified_ {};
    // The ID of the alert rule template.
    shared_ptr<int64_t> id_ {};
    // Indicates whether the template is system-defined. Valid values: `0` (user-defined) and `1` (system-defined).
    shared_ptr<int32_t> isSystem_ {};
    // The labels associated with the template, formatted as a JSON string.
    shared_ptr<string> labels_ {};
    // The rule configuration, formatted as a JSON string.
    shared_ptr<string> ruleConfigs_ {};
    // The status of the template.
    shared_ptr<int32_t> status_ {};
    // The subtype of the alert.
    shared_ptr<string> subType_ {};
    // The name of the alert rule template.
    shared_ptr<string> templateName_ {};
    // The ID of the user who owns the template.
    shared_ptr<string> userId_ {};
    // The universally unique identifier (UUID) of the template.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
