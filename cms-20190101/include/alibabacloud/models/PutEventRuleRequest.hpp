// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventPattern, eventPattern_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventPattern, eventPattern_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    PutEventRuleRequest() = default ;
    PutEventRuleRequest(const PutEventRuleRequest &) = default ;
    PutEventRuleRequest(PutEventRuleRequest &&) = default ;
    PutEventRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleRequest() = default ;
    PutEventRuleRequest& operator=(const PutEventRuleRequest &) = default ;
    PutEventRuleRequest& operator=(PutEventRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventPattern : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventPattern& obj) { 
        DARABONBA_PTR_TO_JSON(CustomFilters, customFilters_);
        DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
        DARABONBA_PTR_TO_JSON(LevelList, levelList_);
        DARABONBA_PTR_TO_JSON(NameList, nameList_);
        DARABONBA_PTR_TO_JSON(Product, product_);
        DARABONBA_PTR_TO_JSON(SQLFilter, SQLFilter_);
        DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      };
      friend void from_json(const Darabonba::Json& j, EventPattern& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomFilters, customFilters_);
        DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
        DARABONBA_PTR_FROM_JSON(LevelList, levelList_);
        DARABONBA_PTR_FROM_JSON(NameList, nameList_);
        DARABONBA_PTR_FROM_JSON(Product, product_);
        DARABONBA_PTR_FROM_JSON(SQLFilter, SQLFilter_);
        DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      };
      EventPattern() = default ;
      EventPattern(const EventPattern &) = default ;
      EventPattern(EventPattern &&) = default ;
      EventPattern(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventPattern() = default ;
      EventPattern& operator=(const EventPattern &) = default ;
      EventPattern& operator=(EventPattern &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customFilters_ == nullptr
        && this->eventTypeList_ == nullptr && this->levelList_ == nullptr && this->nameList_ == nullptr && this->product_ == nullptr && this->SQLFilter_ == nullptr
        && this->statusList_ == nullptr; };
      // customFilters Field Functions 
      bool hasCustomFilters() const { return this->customFilters_ != nullptr;};
      void deleteCustomFilters() { this->customFilters_ = nullptr;};
      inline string getCustomFilters() const { DARABONBA_PTR_GET_DEFAULT(customFilters_, "") };
      inline EventPattern& setCustomFilters(string customFilters) { DARABONBA_PTR_SET_VALUE(customFilters_, customFilters) };


      // eventTypeList Field Functions 
      bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
      void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
      inline const vector<string> & getEventTypeList() const { DARABONBA_PTR_GET_CONST(eventTypeList_, vector<string>) };
      inline vector<string> getEventTypeList() { DARABONBA_PTR_GET(eventTypeList_, vector<string>) };
      inline EventPattern& setEventTypeList(const vector<string> & eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };
      inline EventPattern& setEventTypeList(vector<string> && eventTypeList) { DARABONBA_PTR_SET_RVALUE(eventTypeList_, eventTypeList) };


      // levelList Field Functions 
      bool hasLevelList() const { return this->levelList_ != nullptr;};
      void deleteLevelList() { this->levelList_ = nullptr;};
      inline const vector<string> & getLevelList() const { DARABONBA_PTR_GET_CONST(levelList_, vector<string>) };
      inline vector<string> getLevelList() { DARABONBA_PTR_GET(levelList_, vector<string>) };
      inline EventPattern& setLevelList(const vector<string> & levelList) { DARABONBA_PTR_SET_VALUE(levelList_, levelList) };
      inline EventPattern& setLevelList(vector<string> && levelList) { DARABONBA_PTR_SET_RVALUE(levelList_, levelList) };


      // nameList Field Functions 
      bool hasNameList() const { return this->nameList_ != nullptr;};
      void deleteNameList() { this->nameList_ = nullptr;};
      inline const vector<string> & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
      inline vector<string> getNameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
      inline EventPattern& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
      inline EventPattern& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline EventPattern& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // SQLFilter Field Functions 
      bool hasSQLFilter() const { return this->SQLFilter_ != nullptr;};
      void deleteSQLFilter() { this->SQLFilter_ = nullptr;};
      inline string getSQLFilter() const { DARABONBA_PTR_GET_DEFAULT(SQLFilter_, "") };
      inline EventPattern& setSQLFilter(string SQLFilter) { DARABONBA_PTR_SET_VALUE(SQLFilter_, SQLFilter) };


      // statusList Field Functions 
      bool hasStatusList() const { return this->statusList_ != nullptr;};
      void deleteStatusList() { this->statusList_ = nullptr;};
      inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
      inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
      inline EventPattern& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
      inline EventPattern& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    protected:
      // The keyword that is used to filter events. If the content of an event contains the specified keyword, an alert is automatically triggered.
      shared_ptr<string> customFilters_ {};
      shared_ptr<vector<string>> eventTypeList_ {};
      shared_ptr<vector<string>> levelList_ {};
      shared_ptr<vector<string>> nameList_ {};
      // The type of the cloud service. Valid values of N: 1 to 50.
      // 
      // >  You can call the DescribeSystemEventMetaList operation to query the cloud services that support event-triggered alerts. For more information, see [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html).
      // 
      // This parameter is required.
      shared_ptr<string> product_ {};
      // The SQL condition that is used to filter events. If the content of an event meets the specified SQL condition, an alert is automatically triggered.
      // 
      // >  The syntax of SQL event filtering is consistent with the query syntax of Log Service.
      shared_ptr<string> SQLFilter_ {};
      shared_ptr<vector<string>> statusList_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->eventPattern_ == nullptr && this->eventType_ == nullptr && this->groupId_ == nullptr && this->regionId_ == nullptr && this->ruleName_ == nullptr
        && this->silenceTime_ == nullptr && this->state_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PutEventRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventPattern Field Functions 
    bool hasEventPattern() const { return this->eventPattern_ != nullptr;};
    void deleteEventPattern() { this->eventPattern_ = nullptr;};
    inline const vector<PutEventRuleRequest::EventPattern> & getEventPattern() const { DARABONBA_PTR_GET_CONST(eventPattern_, vector<PutEventRuleRequest::EventPattern>) };
    inline vector<PutEventRuleRequest::EventPattern> getEventPattern() { DARABONBA_PTR_GET(eventPattern_, vector<PutEventRuleRequest::EventPattern>) };
    inline PutEventRuleRequest& setEventPattern(const vector<PutEventRuleRequest::EventPattern> & eventPattern) { DARABONBA_PTR_SET_VALUE(eventPattern_, eventPattern) };
    inline PutEventRuleRequest& setEventPattern(vector<PutEventRuleRequest::EventPattern> && eventPattern) { DARABONBA_PTR_SET_RVALUE(eventPattern_, eventPattern) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline PutEventRuleRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline PutEventRuleRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutEventRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutEventRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int64_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0L) };
    inline PutEventRuleRequest& setSilenceTime(int64_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline PutEventRuleRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The description of the event-triggered alert rule.
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<vector<PutEventRuleRequest::EventPattern>> eventPattern_ {};
    // The type of the event-triggered alert rule. Valid values:
    // 
    // *   SYSTEM: system event-triggered alert rule
    // *   CUSTOM: custom event-triggered alert rule
    shared_ptr<string> eventType_ {};
    // The ID of the application group to which the event-triggered alert rule belongs.
    shared_ptr<string> groupId_ {};
    shared_ptr<string> regionId_ {};
    // The name of the event-triggered alert rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The mute period during which new alerts are not sent even if the trigger conditions are met. Unit: seconds.
    shared_ptr<int64_t> silenceTime_ {};
    // The status of the event-triggered alert rule. Valid values:
    // 
    // *   ENABLED: enabled
    // *   DISABLED: disabled
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
