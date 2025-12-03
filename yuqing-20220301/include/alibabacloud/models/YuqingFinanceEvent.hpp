// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_YUQINGFINANCEEVENT_HPP_
#define ALIBABACLOUD_MODELS_YUQINGFINANCEEVENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class YuqingFinanceEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const YuqingFinanceEvent& obj) { 
      DARABONBA_PTR_TO_JSON(comprehensiveRisk, comprehensiveRisk_);
      DARABONBA_PTR_TO_JSON(entityArea, entityArea_);
      DARABONBA_PTR_TO_JSON(entityCrn, entityCrn_);
      DARABONBA_PTR_TO_JSON(entityEmotionScore, entityEmotionScore_);
      DARABONBA_PTR_TO_JSON(entityId, entityId_);
      DARABONBA_PTR_TO_JSON(entityName, entityName_);
      DARABONBA_PTR_TO_JSON(entityRelevanceScore, entityRelevanceScore_);
      DARABONBA_PTR_TO_JSON(entityShowName, entityShowName_);
      DARABONBA_PTR_TO_JSON(entitySummary, entitySummary_);
      DARABONBA_PTR_TO_JSON(entityType, entityType_);
      DARABONBA_PTR_TO_JSON(eventId, eventId_);
      DARABONBA_PTR_TO_JSON(eventLevel3Code, eventLevel3Code_);
      DARABONBA_PTR_TO_JSON(eventLevel3Name, eventLevel3Name_);
      DARABONBA_PTR_TO_JSON(eventTags, eventTags_);
      DARABONBA_PTR_TO_JSON(eventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(securityAbbreviation, securityAbbreviation_);
      DARABONBA_PTR_TO_JSON(securityCategoryCodes, securityCategoryCodes_);
      DARABONBA_PTR_TO_JSON(securityCodes, securityCodes_);
      DARABONBA_PTR_TO_JSON(securityMarketsCodes, securityMarketsCodes_);
      DARABONBA_PTR_TO_JSON(spamScore, spamScore_);
      DARABONBA_PTR_TO_JSON(userSubscribeEntityTags, userSubscribeEntityTags_);
      DARABONBA_PTR_TO_JSON(userSubscribeEventTags, userSubscribeEventTags_);
    };
    friend void from_json(const Darabonba::Json& j, YuqingFinanceEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(comprehensiveRisk, comprehensiveRisk_);
      DARABONBA_PTR_FROM_JSON(entityArea, entityArea_);
      DARABONBA_PTR_FROM_JSON(entityCrn, entityCrn_);
      DARABONBA_PTR_FROM_JSON(entityEmotionScore, entityEmotionScore_);
      DARABONBA_PTR_FROM_JSON(entityId, entityId_);
      DARABONBA_PTR_FROM_JSON(entityName, entityName_);
      DARABONBA_PTR_FROM_JSON(entityRelevanceScore, entityRelevanceScore_);
      DARABONBA_PTR_FROM_JSON(entityShowName, entityShowName_);
      DARABONBA_PTR_FROM_JSON(entitySummary, entitySummary_);
      DARABONBA_PTR_FROM_JSON(entityType, entityType_);
      DARABONBA_PTR_FROM_JSON(eventId, eventId_);
      DARABONBA_PTR_FROM_JSON(eventLevel3Code, eventLevel3Code_);
      DARABONBA_PTR_FROM_JSON(eventLevel3Name, eventLevel3Name_);
      DARABONBA_PTR_FROM_JSON(eventTags, eventTags_);
      DARABONBA_PTR_FROM_JSON(eventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(securityAbbreviation, securityAbbreviation_);
      DARABONBA_PTR_FROM_JSON(securityCategoryCodes, securityCategoryCodes_);
      DARABONBA_PTR_FROM_JSON(securityCodes, securityCodes_);
      DARABONBA_PTR_FROM_JSON(securityMarketsCodes, securityMarketsCodes_);
      DARABONBA_PTR_FROM_JSON(spamScore, spamScore_);
      DARABONBA_PTR_FROM_JSON(userSubscribeEntityTags, userSubscribeEntityTags_);
      DARABONBA_PTR_FROM_JSON(userSubscribeEventTags, userSubscribeEventTags_);
    };
    YuqingFinanceEvent() = default ;
    YuqingFinanceEvent(const YuqingFinanceEvent &) = default ;
    YuqingFinanceEvent(YuqingFinanceEvent &&) = default ;
    YuqingFinanceEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~YuqingFinanceEvent() = default ;
    YuqingFinanceEvent& operator=(const YuqingFinanceEvent &) = default ;
    YuqingFinanceEvent& operator=(YuqingFinanceEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comprehensiveRisk_ == nullptr
        && return this->entityArea_ == nullptr && return this->entityCrn_ == nullptr && return this->entityEmotionScore_ == nullptr && return this->entityId_ == nullptr && return this->entityName_ == nullptr
        && return this->entityRelevanceScore_ == nullptr && return this->entityShowName_ == nullptr && return this->entitySummary_ == nullptr && return this->entityType_ == nullptr && return this->eventId_ == nullptr
        && return this->eventLevel3Code_ == nullptr && return this->eventLevel3Name_ == nullptr && return this->eventTags_ == nullptr && return this->eventTime_ == nullptr && return this->securityAbbreviation_ == nullptr
        && return this->securityCategoryCodes_ == nullptr && return this->securityCodes_ == nullptr && return this->securityMarketsCodes_ == nullptr && return this->spamScore_ == nullptr && return this->userSubscribeEntityTags_ == nullptr
        && return this->userSubscribeEventTags_ == nullptr; };
    // comprehensiveRisk Field Functions 
    bool hasComprehensiveRisk() const { return this->comprehensiveRisk_ != nullptr;};
    void deleteComprehensiveRisk() { this->comprehensiveRisk_ = nullptr;};
    inline double comprehensiveRisk() const { DARABONBA_PTR_GET_DEFAULT(comprehensiveRisk_, 0.0) };
    inline YuqingFinanceEvent& setComprehensiveRisk(double comprehensiveRisk) { DARABONBA_PTR_SET_VALUE(comprehensiveRisk_, comprehensiveRisk) };


    // entityArea Field Functions 
    bool hasEntityArea() const { return this->entityArea_ != nullptr;};
    void deleteEntityArea() { this->entityArea_ = nullptr;};
    inline string entityArea() const { DARABONBA_PTR_GET_DEFAULT(entityArea_, "") };
    inline YuqingFinanceEvent& setEntityArea(string entityArea) { DARABONBA_PTR_SET_VALUE(entityArea_, entityArea) };


    // entityCrn Field Functions 
    bool hasEntityCrn() const { return this->entityCrn_ != nullptr;};
    void deleteEntityCrn() { this->entityCrn_ = nullptr;};
    inline string entityCrn() const { DARABONBA_PTR_GET_DEFAULT(entityCrn_, "") };
    inline YuqingFinanceEvent& setEntityCrn(string entityCrn) { DARABONBA_PTR_SET_VALUE(entityCrn_, entityCrn) };


    // entityEmotionScore Field Functions 
    bool hasEntityEmotionScore() const { return this->entityEmotionScore_ != nullptr;};
    void deleteEntityEmotionScore() { this->entityEmotionScore_ = nullptr;};
    inline double entityEmotionScore() const { DARABONBA_PTR_GET_DEFAULT(entityEmotionScore_, 0.0) };
    inline YuqingFinanceEvent& setEntityEmotionScore(double entityEmotionScore) { DARABONBA_PTR_SET_VALUE(entityEmotionScore_, entityEmotionScore) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline YuqingFinanceEvent& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityName Field Functions 
    bool hasEntityName() const { return this->entityName_ != nullptr;};
    void deleteEntityName() { this->entityName_ = nullptr;};
    inline string entityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
    inline YuqingFinanceEvent& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


    // entityRelevanceScore Field Functions 
    bool hasEntityRelevanceScore() const { return this->entityRelevanceScore_ != nullptr;};
    void deleteEntityRelevanceScore() { this->entityRelevanceScore_ = nullptr;};
    inline double entityRelevanceScore() const { DARABONBA_PTR_GET_DEFAULT(entityRelevanceScore_, 0.0) };
    inline YuqingFinanceEvent& setEntityRelevanceScore(double entityRelevanceScore) { DARABONBA_PTR_SET_VALUE(entityRelevanceScore_, entityRelevanceScore) };


    // entityShowName Field Functions 
    bool hasEntityShowName() const { return this->entityShowName_ != nullptr;};
    void deleteEntityShowName() { this->entityShowName_ = nullptr;};
    inline string entityShowName() const { DARABONBA_PTR_GET_DEFAULT(entityShowName_, "") };
    inline YuqingFinanceEvent& setEntityShowName(string entityShowName) { DARABONBA_PTR_SET_VALUE(entityShowName_, entityShowName) };


    // entitySummary Field Functions 
    bool hasEntitySummary() const { return this->entitySummary_ != nullptr;};
    void deleteEntitySummary() { this->entitySummary_ = nullptr;};
    inline string entitySummary() const { DARABONBA_PTR_GET_DEFAULT(entitySummary_, "") };
    inline YuqingFinanceEvent& setEntitySummary(string entitySummary) { DARABONBA_PTR_SET_VALUE(entitySummary_, entitySummary) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline YuqingFinanceEvent& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline YuqingFinanceEvent& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventLevel3Code Field Functions 
    bool hasEventLevel3Code() const { return this->eventLevel3Code_ != nullptr;};
    void deleteEventLevel3Code() { this->eventLevel3Code_ = nullptr;};
    inline int64_t eventLevel3Code() const { DARABONBA_PTR_GET_DEFAULT(eventLevel3Code_, 0L) };
    inline YuqingFinanceEvent& setEventLevel3Code(int64_t eventLevel3Code) { DARABONBA_PTR_SET_VALUE(eventLevel3Code_, eventLevel3Code) };


    // eventLevel3Name Field Functions 
    bool hasEventLevel3Name() const { return this->eventLevel3Name_ != nullptr;};
    void deleteEventLevel3Name() { this->eventLevel3Name_ = nullptr;};
    inline string eventLevel3Name() const { DARABONBA_PTR_GET_DEFAULT(eventLevel3Name_, "") };
    inline YuqingFinanceEvent& setEventLevel3Name(string eventLevel3Name) { DARABONBA_PTR_SET_VALUE(eventLevel3Name_, eventLevel3Name) };


    // eventTags Field Functions 
    bool hasEventTags() const { return this->eventTags_ != nullptr;};
    void deleteEventTags() { this->eventTags_ = nullptr;};
    inline string eventTags() const { DARABONBA_PTR_GET_DEFAULT(eventTags_, "") };
    inline YuqingFinanceEvent& setEventTags(string eventTags) { DARABONBA_PTR_SET_VALUE(eventTags_, eventTags) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline int64_t eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
    inline YuqingFinanceEvent& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // securityAbbreviation Field Functions 
    bool hasSecurityAbbreviation() const { return this->securityAbbreviation_ != nullptr;};
    void deleteSecurityAbbreviation() { this->securityAbbreviation_ = nullptr;};
    inline string securityAbbreviation() const { DARABONBA_PTR_GET_DEFAULT(securityAbbreviation_, "") };
    inline YuqingFinanceEvent& setSecurityAbbreviation(string securityAbbreviation) { DARABONBA_PTR_SET_VALUE(securityAbbreviation_, securityAbbreviation) };


    // securityCategoryCodes Field Functions 
    bool hasSecurityCategoryCodes() const { return this->securityCategoryCodes_ != nullptr;};
    void deleteSecurityCategoryCodes() { this->securityCategoryCodes_ = nullptr;};
    inline const vector<string> & securityCategoryCodes() const { DARABONBA_PTR_GET_CONST(securityCategoryCodes_, vector<string>) };
    inline vector<string> securityCategoryCodes() { DARABONBA_PTR_GET(securityCategoryCodes_, vector<string>) };
    inline YuqingFinanceEvent& setSecurityCategoryCodes(const vector<string> & securityCategoryCodes) { DARABONBA_PTR_SET_VALUE(securityCategoryCodes_, securityCategoryCodes) };
    inline YuqingFinanceEvent& setSecurityCategoryCodes(vector<string> && securityCategoryCodes) { DARABONBA_PTR_SET_RVALUE(securityCategoryCodes_, securityCategoryCodes) };


    // securityCodes Field Functions 
    bool hasSecurityCodes() const { return this->securityCodes_ != nullptr;};
    void deleteSecurityCodes() { this->securityCodes_ = nullptr;};
    inline const vector<string> & securityCodes() const { DARABONBA_PTR_GET_CONST(securityCodes_, vector<string>) };
    inline vector<string> securityCodes() { DARABONBA_PTR_GET(securityCodes_, vector<string>) };
    inline YuqingFinanceEvent& setSecurityCodes(const vector<string> & securityCodes) { DARABONBA_PTR_SET_VALUE(securityCodes_, securityCodes) };
    inline YuqingFinanceEvent& setSecurityCodes(vector<string> && securityCodes) { DARABONBA_PTR_SET_RVALUE(securityCodes_, securityCodes) };


    // securityMarketsCodes Field Functions 
    bool hasSecurityMarketsCodes() const { return this->securityMarketsCodes_ != nullptr;};
    void deleteSecurityMarketsCodes() { this->securityMarketsCodes_ = nullptr;};
    inline const vector<string> & securityMarketsCodes() const { DARABONBA_PTR_GET_CONST(securityMarketsCodes_, vector<string>) };
    inline vector<string> securityMarketsCodes() { DARABONBA_PTR_GET(securityMarketsCodes_, vector<string>) };
    inline YuqingFinanceEvent& setSecurityMarketsCodes(const vector<string> & securityMarketsCodes) { DARABONBA_PTR_SET_VALUE(securityMarketsCodes_, securityMarketsCodes) };
    inline YuqingFinanceEvent& setSecurityMarketsCodes(vector<string> && securityMarketsCodes) { DARABONBA_PTR_SET_RVALUE(securityMarketsCodes_, securityMarketsCodes) };


    // spamScore Field Functions 
    bool hasSpamScore() const { return this->spamScore_ != nullptr;};
    void deleteSpamScore() { this->spamScore_ = nullptr;};
    inline double spamScore() const { DARABONBA_PTR_GET_DEFAULT(spamScore_, 0.0) };
    inline YuqingFinanceEvent& setSpamScore(double spamScore) { DARABONBA_PTR_SET_VALUE(spamScore_, spamScore) };


    // userSubscribeEntityTags Field Functions 
    bool hasUserSubscribeEntityTags() const { return this->userSubscribeEntityTags_ != nullptr;};
    void deleteUserSubscribeEntityTags() { this->userSubscribeEntityTags_ = nullptr;};
    inline const vector<string> & userSubscribeEntityTags() const { DARABONBA_PTR_GET_CONST(userSubscribeEntityTags_, vector<string>) };
    inline vector<string> userSubscribeEntityTags() { DARABONBA_PTR_GET(userSubscribeEntityTags_, vector<string>) };
    inline YuqingFinanceEvent& setUserSubscribeEntityTags(const vector<string> & userSubscribeEntityTags) { DARABONBA_PTR_SET_VALUE(userSubscribeEntityTags_, userSubscribeEntityTags) };
    inline YuqingFinanceEvent& setUserSubscribeEntityTags(vector<string> && userSubscribeEntityTags) { DARABONBA_PTR_SET_RVALUE(userSubscribeEntityTags_, userSubscribeEntityTags) };


    // userSubscribeEventTags Field Functions 
    bool hasUserSubscribeEventTags() const { return this->userSubscribeEventTags_ != nullptr;};
    void deleteUserSubscribeEventTags() { this->userSubscribeEventTags_ = nullptr;};
    inline const vector<int64_t> & userSubscribeEventTags() const { DARABONBA_PTR_GET_CONST(userSubscribeEventTags_, vector<int64_t>) };
    inline vector<int64_t> userSubscribeEventTags() { DARABONBA_PTR_GET(userSubscribeEventTags_, vector<int64_t>) };
    inline YuqingFinanceEvent& setUserSubscribeEventTags(const vector<int64_t> & userSubscribeEventTags) { DARABONBA_PTR_SET_VALUE(userSubscribeEventTags_, userSubscribeEventTags) };
    inline YuqingFinanceEvent& setUserSubscribeEventTags(vector<int64_t> && userSubscribeEventTags) { DARABONBA_PTR_SET_RVALUE(userSubscribeEventTags_, userSubscribeEventTags) };


  protected:
    std::shared_ptr<double> comprehensiveRisk_ = nullptr;
    std::shared_ptr<string> entityArea_ = nullptr;
    std::shared_ptr<string> entityCrn_ = nullptr;
    std::shared_ptr<double> entityEmotionScore_ = nullptr;
    std::shared_ptr<int64_t> entityId_ = nullptr;
    std::shared_ptr<string> entityName_ = nullptr;
    std::shared_ptr<double> entityRelevanceScore_ = nullptr;
    std::shared_ptr<string> entityShowName_ = nullptr;
    std::shared_ptr<string> entitySummary_ = nullptr;
    std::shared_ptr<string> entityType_ = nullptr;
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<int64_t> eventLevel3Code_ = nullptr;
    std::shared_ptr<string> eventLevel3Name_ = nullptr;
    std::shared_ptr<string> eventTags_ = nullptr;
    std::shared_ptr<int64_t> eventTime_ = nullptr;
    std::shared_ptr<string> securityAbbreviation_ = nullptr;
    std::shared_ptr<vector<string>> securityCategoryCodes_ = nullptr;
    std::shared_ptr<vector<string>> securityCodes_ = nullptr;
    std::shared_ptr<vector<string>> securityMarketsCodes_ = nullptr;
    std::shared_ptr<double> spamScore_ = nullptr;
    std::shared_ptr<vector<string>> userSubscribeEntityTags_ = nullptr;
    std::shared_ptr<vector<int64_t>> userSubscribeEventTags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
