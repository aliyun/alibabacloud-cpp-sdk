// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDSIEMPREDEFINEDRULESRESPONSEBODYDATARESPONSEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDSIEMPREDEFINEDRULESRESPONSEBODYDATARESPONSEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListCloudSiemPredefinedRulesResponseBodyDataResponseData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudSiemPredefinedRulesResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(AttCk, attCk_);
      DARABONBA_PTR_TO_JSON(EventTransferType, eventTransferType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RuleDescMds, ruleDescMds_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleNameCn, ruleNameCn_);
      DARABONBA_PTR_TO_JSON(RuleNameEn, ruleNameEn_);
      DARABONBA_PTR_TO_JSON(RuleNameMds, ruleNameMds_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudSiemPredefinedRulesResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(AttCk, attCk_);
      DARABONBA_PTR_FROM_JSON(EventTransferType, eventTransferType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RuleDescMds, ruleDescMds_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleNameCn, ruleNameCn_);
      DARABONBA_PTR_FROM_JSON(RuleNameEn, ruleNameEn_);
      DARABONBA_PTR_FROM_JSON(RuleNameMds, ruleNameMds_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
    };
    ListCloudSiemPredefinedRulesResponseBodyDataResponseData() = default ;
    ListCloudSiemPredefinedRulesResponseBodyDataResponseData(const ListCloudSiemPredefinedRulesResponseBodyDataResponseData &) = default ;
    ListCloudSiemPredefinedRulesResponseBodyDataResponseData(ListCloudSiemPredefinedRulesResponseBodyDataResponseData &&) = default ;
    ListCloudSiemPredefinedRulesResponseBodyDataResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudSiemPredefinedRulesResponseBodyDataResponseData() = default ;
    ListCloudSiemPredefinedRulesResponseBodyDataResponseData& operator=(const ListCloudSiemPredefinedRulesResponseBodyDataResponseData &) = default ;
    ListCloudSiemPredefinedRulesResponseBodyDataResponseData& operator=(ListCloudSiemPredefinedRulesResponseBodyDataResponseData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertType_ != nullptr
        && this->attCk_ != nullptr && this->eventTransferType_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr
        && this->ruleDescMds_ != nullptr && this->ruleName_ != nullptr && this->ruleNameCn_ != nullptr && this->ruleNameEn_ != nullptr && this->ruleNameMds_ != nullptr
        && this->source_ != nullptr && this->status_ != nullptr && this->threatLevel_ != nullptr; };
    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline ListCloudSiemPredefinedRulesResponseBodyDataResponseData& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // attCk Field Functions 
    bool hasAttCk() const { return this->attCk_ != nullptr;};
    void deleteAttCk() { this->attCk_ = nullptr;};
    inline string attCk() const { DARABONBA_PTR_GET_DEFAULT(attCk_, "") };
    inline ListCloudSiemPredefinedRulesResponseBodyDataResponseData& setAttCk(string attCk) { DARABONBA_PTR_SET_VALUE(attCk_, attCk) };


    // eventTransferType Field Functions 
    bool hasEventTransferType() const { return this->eventTransferType_ != nullptr;};
    void deleteEventTransferType() { this->eventTransferType_ = nullptr;};
    inline string eventTransferType() const { DARABONBA_PTR_GET_DEFAULT(eventTransferType_, "") };
    inline ListCloudSiemPredefinedRulesResponseBodyDataResponseData& setEventTransferType(string eventTransferType) { DARABONBA_PTR_SET_VALUE(eventTransferType_, eventTransferType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListCloudSiemPredefinedRulesResponseBodyDataResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListCloudSiemPredefinedRulesResponseBodyDataResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListCloudSiemPredefinedRulesResponseBodyDataResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ruleDescMds Field Functions 
    bool hasRuleDescMds() const { return this->ruleDescMds_ != nullptr;};
    void deleteRuleDescMds() { this->ruleDescMds_ = nullptr;};
    inline string ruleDescMds() const { DARABONBA_PTR_GET_DEFAULT(ruleDescMds_, "") };
    inline ListCloudSiemPredefinedRulesResponseBodyDataResponseData& setRuleDescMds(string ruleDescMds) { DARABONBA_PTR_SET_VALUE(ruleDescMds_, ruleDescMds) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListCloudSiemPredefinedRulesResponseBodyDataResponseData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleNameCn Field Functions 
    bool hasRuleNameCn() const { return this->ruleNameCn_ != nullptr;};
    void deleteRuleNameCn() { this->ruleNameCn_ = nullptr;};
    inline string ruleNameCn() const { DARABONBA_PTR_GET_DEFAULT(ruleNameCn_, "") };
    inline ListCloudSiemPredefinedRulesResponseBodyDataResponseData& setRuleNameCn(string ruleNameCn) { DARABONBA_PTR_SET_VALUE(ruleNameCn_, ruleNameCn) };


    // ruleNameEn Field Functions 
    bool hasRuleNameEn() const { return this->ruleNameEn_ != nullptr;};
    void deleteRuleNameEn() { this->ruleNameEn_ = nullptr;};
    inline string ruleNameEn() const { DARABONBA_PTR_GET_DEFAULT(ruleNameEn_, "") };
    inline ListCloudSiemPredefinedRulesResponseBodyDataResponseData& setRuleNameEn(string ruleNameEn) { DARABONBA_PTR_SET_VALUE(ruleNameEn_, ruleNameEn) };


    // ruleNameMds Field Functions 
    bool hasRuleNameMds() const { return this->ruleNameMds_ != nullptr;};
    void deleteRuleNameMds() { this->ruleNameMds_ = nullptr;};
    inline string ruleNameMds() const { DARABONBA_PTR_GET_DEFAULT(ruleNameMds_, "") };
    inline ListCloudSiemPredefinedRulesResponseBodyDataResponseData& setRuleNameMds(string ruleNameMds) { DARABONBA_PTR_SET_VALUE(ruleNameMds_, ruleNameMds) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListCloudSiemPredefinedRulesResponseBodyDataResponseData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListCloudSiemPredefinedRulesResponseBodyDataResponseData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline string threatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
    inline ListCloudSiemPredefinedRulesResponseBodyDataResponseData& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


  protected:
    // The type of the risk.
    std::shared_ptr<string> alertType_ = nullptr;
    // The alert additional field for ATT\\&CK.
    std::shared_ptr<string> attCk_ = nullptr;
    // The method that is used to generate an event. Valid values:
    // 
    // *   default: built-in method.
    // *   singleToSingle: The system generates an event for each alert.
    // *   allToSingle: The system generates an event for alerts within a period of time.
    std::shared_ptr<string> eventTransferType_ = nullptr;
    // The time when the rule was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the rule was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the predefined rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The internal code of the rule description.
    std::shared_ptr<string> ruleDescMds_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The rule name in Chinese.
    std::shared_ptr<string> ruleNameCn_ = nullptr;
    // The rule name in English.
    std::shared_ptr<string> ruleNameEn_ = nullptr;
    // The internal code of the rule name.
    std::shared_ptr<string> ruleNameMds_ = nullptr;
    // The log source of the rule.
    std::shared_ptr<string> source_ = nullptr;
    // The status of the predefined rule. Valid values:
    // 
    // *   0: The rule is in the initial state.
    // *   100: The rule takes effect.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   serious: high.
    // *   suspicious: medium.
    // *   remind: low.
    std::shared_ptr<string> threatLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
