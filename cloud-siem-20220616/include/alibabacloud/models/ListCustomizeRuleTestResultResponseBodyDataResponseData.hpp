// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMIZERULETESTRESULTRESPONSEBODYDATARESPONSEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMIZERULETESTRESULTRESPONSEBODYDATARESPONSEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListCustomizeRuleTestResultResponseBodyDataResponseData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomizeRuleTestResultResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertDesc, alertDesc_);
      DARABONBA_PTR_TO_JSON(AlertDetail, alertDetail_);
      DARABONBA_PTR_TO_JSON(AlertSrcProd, alertSrcProd_);
      DARABONBA_PTR_TO_JSON(AlertSrcProdModule, alertSrcProdModule_);
      DARABONBA_PTR_TO_JSON(AttCk, attCk_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(LogSource, logSource_);
      DARABONBA_PTR_TO_JSON(LogTime, logTime_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(MainUserId, mainUserId_);
      DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VerifyType, verifyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomizeRuleTestResultResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertDesc, alertDesc_);
      DARABONBA_PTR_FROM_JSON(AlertDetail, alertDetail_);
      DARABONBA_PTR_FROM_JSON(AlertSrcProd, alertSrcProd_);
      DARABONBA_PTR_FROM_JSON(AlertSrcProdModule, alertSrcProdModule_);
      DARABONBA_PTR_FROM_JSON(AttCk, attCk_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(LogSource, logSource_);
      DARABONBA_PTR_FROM_JSON(LogTime, logTime_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(MainUserId, mainUserId_);
      DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VerifyType, verifyType_);
    };
    ListCustomizeRuleTestResultResponseBodyDataResponseData() = default ;
    ListCustomizeRuleTestResultResponseBodyDataResponseData(const ListCustomizeRuleTestResultResponseBodyDataResponseData &) = default ;
    ListCustomizeRuleTestResultResponseBodyDataResponseData(ListCustomizeRuleTestResultResponseBodyDataResponseData &&) = default ;
    ListCustomizeRuleTestResultResponseBodyDataResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomizeRuleTestResultResponseBodyDataResponseData() = default ;
    ListCustomizeRuleTestResultResponseBodyDataResponseData& operator=(const ListCustomizeRuleTestResultResponseBodyDataResponseData &) = default ;
    ListCustomizeRuleTestResultResponseBodyDataResponseData& operator=(ListCustomizeRuleTestResultResponseBodyDataResponseData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertDesc_ != nullptr
        && this->alertDetail_ != nullptr && this->alertSrcProd_ != nullptr && this->alertSrcProdModule_ != nullptr && this->attCk_ != nullptr && this->eventName_ != nullptr
        && this->eventType_ != nullptr && this->level_ != nullptr && this->logSource_ != nullptr && this->logTime_ != nullptr && this->logType_ != nullptr
        && this->mainUserId_ != nullptr && this->onlineStatus_ != nullptr && this->subUserId_ != nullptr && this->uuid_ != nullptr && this->verifyType_ != nullptr; };
    // alertDesc Field Functions 
    bool hasAlertDesc() const { return this->alertDesc_ != nullptr;};
    void deleteAlertDesc() { this->alertDesc_ = nullptr;};
    inline string alertDesc() const { DARABONBA_PTR_GET_DEFAULT(alertDesc_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setAlertDesc(string alertDesc) { DARABONBA_PTR_SET_VALUE(alertDesc_, alertDesc) };


    // alertDetail Field Functions 
    bool hasAlertDetail() const { return this->alertDetail_ != nullptr;};
    void deleteAlertDetail() { this->alertDetail_ = nullptr;};
    inline string alertDetail() const { DARABONBA_PTR_GET_DEFAULT(alertDetail_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setAlertDetail(string alertDetail) { DARABONBA_PTR_SET_VALUE(alertDetail_, alertDetail) };


    // alertSrcProd Field Functions 
    bool hasAlertSrcProd() const { return this->alertSrcProd_ != nullptr;};
    void deleteAlertSrcProd() { this->alertSrcProd_ = nullptr;};
    inline string alertSrcProd() const { DARABONBA_PTR_GET_DEFAULT(alertSrcProd_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setAlertSrcProd(string alertSrcProd) { DARABONBA_PTR_SET_VALUE(alertSrcProd_, alertSrcProd) };


    // alertSrcProdModule Field Functions 
    bool hasAlertSrcProdModule() const { return this->alertSrcProdModule_ != nullptr;};
    void deleteAlertSrcProdModule() { this->alertSrcProdModule_ = nullptr;};
    inline string alertSrcProdModule() const { DARABONBA_PTR_GET_DEFAULT(alertSrcProdModule_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setAlertSrcProdModule(string alertSrcProdModule) { DARABONBA_PTR_SET_VALUE(alertSrcProdModule_, alertSrcProdModule) };


    // attCk Field Functions 
    bool hasAttCk() const { return this->attCk_ != nullptr;};
    void deleteAttCk() { this->attCk_ = nullptr;};
    inline string attCk() const { DARABONBA_PTR_GET_DEFAULT(attCk_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setAttCk(string attCk) { DARABONBA_PTR_SET_VALUE(attCk_, attCk) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // logSource Field Functions 
    bool hasLogSource() const { return this->logSource_ != nullptr;};
    void deleteLogSource() { this->logSource_ = nullptr;};
    inline string logSource() const { DARABONBA_PTR_GET_DEFAULT(logSource_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setLogSource(string logSource) { DARABONBA_PTR_SET_VALUE(logSource_, logSource) };


    // logTime Field Functions 
    bool hasLogTime() const { return this->logTime_ != nullptr;};
    void deleteLogTime() { this->logTime_ = nullptr;};
    inline string logTime() const { DARABONBA_PTR_GET_DEFAULT(logTime_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setLogTime(string logTime) { DARABONBA_PTR_SET_VALUE(logTime_, logTime) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // mainUserId Field Functions 
    bool hasMainUserId() const { return this->mainUserId_ != nullptr;};
    void deleteMainUserId() { this->mainUserId_ = nullptr;};
    inline string mainUserId() const { DARABONBA_PTR_GET_DEFAULT(mainUserId_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setMainUserId(string mainUserId) { DARABONBA_PTR_SET_VALUE(mainUserId_, mainUserId) };


    // onlineStatus Field Functions 
    bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
    void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
    inline string onlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setOnlineStatus(string onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline string subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setSubUserId(string subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // verifyType Field Functions 
    bool hasVerifyType() const { return this->verifyType_ != nullptr;};
    void deleteVerifyType() { this->verifyType_ = nullptr;};
    inline string verifyType() const { DARABONBA_PTR_GET_DEFAULT(verifyType_, "") };
    inline ListCustomizeRuleTestResultResponseBodyDataResponseData& setVerifyType(string verifyType) { DARABONBA_PTR_SET_VALUE(verifyType_, verifyType) };


  protected:
    // The description of the alert.
    std::shared_ptr<string> alertDesc_ = nullptr;
    // The alert details in the JSON format.
    std::shared_ptr<string> alertDetail_ = nullptr;
    // The source of the alert.
    std::shared_ptr<string> alertSrcProd_ = nullptr;
    // The sub-module of the source.
    std::shared_ptr<string> alertSrcProdModule_ = nullptr;
    // The tag of the ATT\\&CK attack.
    std::shared_ptr<string> attCk_ = nullptr;
    // The name of the alert, which corresponds to the name of the custom rule.
    std::shared_ptr<string> eventName_ = nullptr;
    // The threat type, which indicates the alert type.
    std::shared_ptr<string> eventType_ = nullptr;
    // The threat level. Valid values:
    // 
    // *   serious: high.
    // *   suspicious: medium.
    // *   remind: low.
    std::shared_ptr<string> level_ = nullptr;
    // The log source of the rule.
    std::shared_ptr<string> logSource_ = nullptr;
    // The time when the alert was recorded.
    std::shared_ptr<string> logTime_ = nullptr;
    // The log type of the rule.
    std::shared_ptr<string> logType_ = nullptr;
    // The ID of the Alibaba Cloud account that is associated with the alert in SIEM.
    std::shared_ptr<string> mainUserId_ = nullptr;
    // The status of the alert data. Valid values:
    // 
    // *   test: business test data.
    // *   online: online data.
    std::shared_ptr<string> onlineStatus_ = nullptr;
    // The ID of the Alibaba Cloud account within which the alert is generated.
    std::shared_ptr<string> subUserId_ = nullptr;
    // The UUID of the alert.
    std::shared_ptr<string> uuid_ = nullptr;
    std::shared_ptr<string> verifyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
