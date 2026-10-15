// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULETEMPLATEAPPLYRECORD_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULETEMPLATEAPPLYRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleTemplateApplyRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleTemplateApplyRecord& obj) { 
      DARABONBA_PTR_TO_JSON(applyConfig, applyConfig_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(templateUuid, templateUuid_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleTemplateApplyRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(applyConfig, applyConfig_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(templateUuid, templateUuid_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    AlertRuleTemplateApplyRecord() = default ;
    AlertRuleTemplateApplyRecord(const AlertRuleTemplateApplyRecord &) = default ;
    AlertRuleTemplateApplyRecord(AlertRuleTemplateApplyRecord &&) = default ;
    AlertRuleTemplateApplyRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleTemplateApplyRecord() = default ;
    AlertRuleTemplateApplyRecord& operator=(const AlertRuleTemplateApplyRecord &) = default ;
    AlertRuleTemplateApplyRecord& operator=(AlertRuleTemplateApplyRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyConfig_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->regionId_ == nullptr && this->ruleId_ == nullptr
        && this->status_ == nullptr && this->templateUuid_ == nullptr && this->userId_ == nullptr; };
    // applyConfig Field Functions 
    bool hasApplyConfig() const { return this->applyConfig_ != nullptr;};
    void deleteApplyConfig() { this->applyConfig_ = nullptr;};
    inline string getApplyConfig() const { DARABONBA_PTR_GET_DEFAULT(applyConfig_, "") };
    inline AlertRuleTemplateApplyRecord& setApplyConfig(string applyConfig) { DARABONBA_PTR_SET_VALUE(applyConfig_, applyConfig) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline AlertRuleTemplateApplyRecord& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline AlertRuleTemplateApplyRecord& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AlertRuleTemplateApplyRecord& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AlertRuleTemplateApplyRecord& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline AlertRuleTemplateApplyRecord& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AlertRuleTemplateApplyRecord& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateUuid Field Functions 
    bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
    void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
    inline string getTemplateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
    inline AlertRuleTemplateApplyRecord& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AlertRuleTemplateApplyRecord& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The effective configuration for the rule application.
    shared_ptr<string> applyConfig_ {};
    // The time when the record was created.
    shared_ptr<int64_t> gmtCreate_ {};
    // The time when the record was updated.
    shared_ptr<int64_t> gmtModified_ {};
    // The record ID.
    shared_ptr<int64_t> id_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The rule ID.
    shared_ptr<string> ruleId_ {};
    // The status.
    shared_ptr<string> status_ {};
    // The UUID of the alert rule template.
    shared_ptr<string> templateUuid_ {};
    // The user ID.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
