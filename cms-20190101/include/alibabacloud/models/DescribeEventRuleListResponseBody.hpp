// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODY_HPP_
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
  class DescribeEventRuleListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EventRules, eventRules_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EventRules, eventRules_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeEventRuleListResponseBody() = default ;
    DescribeEventRuleListResponseBody(const DescribeEventRuleListResponseBody &) = default ;
    DescribeEventRuleListResponseBody(DescribeEventRuleListResponseBody &&) = default ;
    DescribeEventRuleListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleListResponseBody() = default ;
    DescribeEventRuleListResponseBody& operator=(const DescribeEventRuleListResponseBody &) = default ;
    DescribeEventRuleListResponseBody& operator=(DescribeEventRuleListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventRules& obj) { 
        DARABONBA_PTR_TO_JSON(EventRule, eventRule_);
      };
      friend void from_json(const Darabonba::Json& j, EventRules& obj) { 
        DARABONBA_PTR_FROM_JSON(EventRule, eventRule_);
      };
      EventRules() = default ;
      EventRules(const EventRules &) = default ;
      EventRules(EventRules &&) = default ;
      EventRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventRules() = default ;
      EventRules& operator=(const EventRules &) = default ;
      EventRules& operator=(EventRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EventRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventRule& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EventPattern, eventPattern_);
          DARABONBA_PTR_TO_JSON(EventType, eventType_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
          DARABONBA_PTR_TO_JSON(State, state_);
        };
        friend void from_json(const Darabonba::Json& j, EventRule& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EventPattern, eventPattern_);
          DARABONBA_PTR_FROM_JSON(EventType, eventType_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
          DARABONBA_PTR_FROM_JSON(State, state_);
        };
        EventRule() = default ;
        EventRule(const EventRule &) = default ;
        EventRule(EventRule &&) = default ;
        EventRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventRule() = default ;
        EventRule& operator=(const EventRule &) = default ;
        EventRule& operator=(EventRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EventPattern : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EventPattern& obj) { 
            DARABONBA_PTR_TO_JSON(EventPattern, eventPattern_);
          };
          friend void from_json(const Darabonba::Json& j, EventPattern& obj) { 
            DARABONBA_PTR_FROM_JSON(EventPattern, eventPattern_);
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
          class EventPatternItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EventPatternItem& obj) { 
              DARABONBA_PTR_TO_JSON(CustomFilters, customFilters_);
              DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
              DARABONBA_PTR_TO_JSON(KeywordFilter, keywordFilter_);
              DARABONBA_PTR_TO_JSON(LevelList, levelList_);
              DARABONBA_PTR_TO_JSON(NameList, nameList_);
              DARABONBA_PTR_TO_JSON(Product, product_);
              DARABONBA_PTR_TO_JSON(SQLFilter, SQLFilter_);
            };
            friend void from_json(const Darabonba::Json& j, EventPatternItem& obj) { 
              DARABONBA_PTR_FROM_JSON(CustomFilters, customFilters_);
              DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
              DARABONBA_PTR_FROM_JSON(KeywordFilter, keywordFilter_);
              DARABONBA_PTR_FROM_JSON(LevelList, levelList_);
              DARABONBA_PTR_FROM_JSON(NameList, nameList_);
              DARABONBA_PTR_FROM_JSON(Product, product_);
              DARABONBA_PTR_FROM_JSON(SQLFilter, SQLFilter_);
            };
            EventPatternItem() = default ;
            EventPatternItem(const EventPatternItem &) = default ;
            EventPatternItem(EventPatternItem &&) = default ;
            EventPatternItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EventPatternItem() = default ;
            EventPatternItem& operator=(const EventPatternItem &) = default ;
            EventPatternItem& operator=(EventPatternItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class NameList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const NameList& obj) { 
                DARABONBA_PTR_TO_JSON(NameList, nameList_);
              };
              friend void from_json(const Darabonba::Json& j, NameList& obj) { 
                DARABONBA_PTR_FROM_JSON(NameList, nameList_);
              };
              NameList() = default ;
              NameList(const NameList &) = default ;
              NameList(NameList &&) = default ;
              NameList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~NameList() = default ;
              NameList& operator=(const NameList &) = default ;
              NameList& operator=(NameList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->nameList_ == nullptr; };
              // nameList Field Functions 
              bool hasNameList() const { return this->nameList_ != nullptr;};
              void deleteNameList() { this->nameList_ = nullptr;};
              inline const vector<string> & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
              inline vector<string> getNameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
              inline NameList& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
              inline NameList& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


            protected:
              shared_ptr<vector<string>> nameList_ {};
            };

            class LevelList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const LevelList& obj) { 
                DARABONBA_PTR_TO_JSON(LevelList, levelList_);
              };
              friend void from_json(const Darabonba::Json& j, LevelList& obj) { 
                DARABONBA_PTR_FROM_JSON(LevelList, levelList_);
              };
              LevelList() = default ;
              LevelList(const LevelList &) = default ;
              LevelList(LevelList &&) = default ;
              LevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~LevelList() = default ;
              LevelList& operator=(const LevelList &) = default ;
              LevelList& operator=(LevelList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->levelList_ == nullptr; };
              // levelList Field Functions 
              bool hasLevelList() const { return this->levelList_ != nullptr;};
              void deleteLevelList() { this->levelList_ = nullptr;};
              inline const vector<string> & getLevelList() const { DARABONBA_PTR_GET_CONST(levelList_, vector<string>) };
              inline vector<string> getLevelList() { DARABONBA_PTR_GET(levelList_, vector<string>) };
              inline LevelList& setLevelList(const vector<string> & levelList) { DARABONBA_PTR_SET_VALUE(levelList_, levelList) };
              inline LevelList& setLevelList(vector<string> && levelList) { DARABONBA_PTR_SET_RVALUE(levelList_, levelList) };


            protected:
              shared_ptr<vector<string>> levelList_ {};
            };

            class KeywordFilter : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const KeywordFilter& obj) { 
                DARABONBA_PTR_TO_JSON(Keywords, keywords_);
                DARABONBA_PTR_TO_JSON(Relation, relation_);
              };
              friend void from_json(const Darabonba::Json& j, KeywordFilter& obj) { 
                DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
                DARABONBA_PTR_FROM_JSON(Relation, relation_);
              };
              KeywordFilter() = default ;
              KeywordFilter(const KeywordFilter &) = default ;
              KeywordFilter(KeywordFilter &&) = default ;
              KeywordFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~KeywordFilter() = default ;
              KeywordFilter& operator=(const KeywordFilter &) = default ;
              KeywordFilter& operator=(KeywordFilter &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Keywords : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Keywords& obj) { 
                  DARABONBA_PTR_TO_JSON(Keywords, keywords_);
                };
                friend void from_json(const Darabonba::Json& j, Keywords& obj) { 
                  DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
                };
                Keywords() = default ;
                Keywords(const Keywords &) = default ;
                Keywords(Keywords &&) = default ;
                Keywords(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Keywords() = default ;
                Keywords& operator=(const Keywords &) = default ;
                Keywords& operator=(Keywords &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->keywords_ == nullptr; };
                // keywords Field Functions 
                bool hasKeywords() const { return this->keywords_ != nullptr;};
                void deleteKeywords() { this->keywords_ = nullptr;};
                inline const vector<string> & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
                inline vector<string> getKeywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
                inline Keywords& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
                inline Keywords& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


              protected:
                shared_ptr<vector<string>> keywords_ {};
              };

              virtual bool empty() const override { return this->keywords_ == nullptr
        && this->relation_ == nullptr; };
              // keywords Field Functions 
              bool hasKeywords() const { return this->keywords_ != nullptr;};
              void deleteKeywords() { this->keywords_ = nullptr;};
              inline const KeywordFilter::Keywords & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, KeywordFilter::Keywords) };
              inline KeywordFilter::Keywords getKeywords() { DARABONBA_PTR_GET(keywords_, KeywordFilter::Keywords) };
              inline KeywordFilter& setKeywords(const KeywordFilter::Keywords & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
              inline KeywordFilter& setKeywords(KeywordFilter::Keywords && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


              // relation Field Functions 
              bool hasRelation() const { return this->relation_ != nullptr;};
              void deleteRelation() { this->relation_ = nullptr;};
              inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
              inline KeywordFilter& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


            protected:
              // The keywords that are used to match events.
              shared_ptr<KeywordFilter::Keywords> keywords_ {};
              // The relationship between multiple keywords in a condition. Valid values:
              // 
              // *   OR: The relationship between keywords is OR.
              // *   NOT: The keyword is excluded. The value NOT indicates that all events that do not contain the keywords are matched.
              shared_ptr<string> relation_ {};
            };

            class EventTypeList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const EventTypeList& obj) { 
                DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
              };
              friend void from_json(const Darabonba::Json& j, EventTypeList& obj) { 
                DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
              };
              EventTypeList() = default ;
              EventTypeList(const EventTypeList &) = default ;
              EventTypeList(EventTypeList &&) = default ;
              EventTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~EventTypeList() = default ;
              EventTypeList& operator=(const EventTypeList &) = default ;
              EventTypeList& operator=(EventTypeList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->eventTypeList_ == nullptr; };
              // eventTypeList Field Functions 
              bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
              void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
              inline const vector<string> & getEventTypeList() const { DARABONBA_PTR_GET_CONST(eventTypeList_, vector<string>) };
              inline vector<string> getEventTypeList() { DARABONBA_PTR_GET(eventTypeList_, vector<string>) };
              inline EventTypeList& setEventTypeList(const vector<string> & eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };
              inline EventTypeList& setEventTypeList(vector<string> && eventTypeList) { DARABONBA_PTR_SET_RVALUE(eventTypeList_, eventTypeList) };


            protected:
              shared_ptr<vector<string>> eventTypeList_ {};
            };

            virtual bool empty() const override { return this->customFilters_ == nullptr
        && this->eventTypeList_ == nullptr && this->keywordFilter_ == nullptr && this->levelList_ == nullptr && this->nameList_ == nullptr && this->product_ == nullptr
        && this->SQLFilter_ == nullptr; };
            // customFilters Field Functions 
            bool hasCustomFilters() const { return this->customFilters_ != nullptr;};
            void deleteCustomFilters() { this->customFilters_ = nullptr;};
            inline string getCustomFilters() const { DARABONBA_PTR_GET_DEFAULT(customFilters_, "") };
            inline EventPatternItem& setCustomFilters(string customFilters) { DARABONBA_PTR_SET_VALUE(customFilters_, customFilters) };


            // eventTypeList Field Functions 
            bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
            void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
            inline const EventPatternItem::EventTypeList & getEventTypeList() const { DARABONBA_PTR_GET_CONST(eventTypeList_, EventPatternItem::EventTypeList) };
            inline EventPatternItem::EventTypeList getEventTypeList() { DARABONBA_PTR_GET(eventTypeList_, EventPatternItem::EventTypeList) };
            inline EventPatternItem& setEventTypeList(const EventPatternItem::EventTypeList & eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };
            inline EventPatternItem& setEventTypeList(EventPatternItem::EventTypeList && eventTypeList) { DARABONBA_PTR_SET_RVALUE(eventTypeList_, eventTypeList) };


            // keywordFilter Field Functions 
            bool hasKeywordFilter() const { return this->keywordFilter_ != nullptr;};
            void deleteKeywordFilter() { this->keywordFilter_ = nullptr;};
            inline const EventPatternItem::KeywordFilter & getKeywordFilter() const { DARABONBA_PTR_GET_CONST(keywordFilter_, EventPatternItem::KeywordFilter) };
            inline EventPatternItem::KeywordFilter getKeywordFilter() { DARABONBA_PTR_GET(keywordFilter_, EventPatternItem::KeywordFilter) };
            inline EventPatternItem& setKeywordFilter(const EventPatternItem::KeywordFilter & keywordFilter) { DARABONBA_PTR_SET_VALUE(keywordFilter_, keywordFilter) };
            inline EventPatternItem& setKeywordFilter(EventPatternItem::KeywordFilter && keywordFilter) { DARABONBA_PTR_SET_RVALUE(keywordFilter_, keywordFilter) };


            // levelList Field Functions 
            bool hasLevelList() const { return this->levelList_ != nullptr;};
            void deleteLevelList() { this->levelList_ = nullptr;};
            inline const EventPatternItem::LevelList & getLevelList() const { DARABONBA_PTR_GET_CONST(levelList_, EventPatternItem::LevelList) };
            inline EventPatternItem::LevelList getLevelList() { DARABONBA_PTR_GET(levelList_, EventPatternItem::LevelList) };
            inline EventPatternItem& setLevelList(const EventPatternItem::LevelList & levelList) { DARABONBA_PTR_SET_VALUE(levelList_, levelList) };
            inline EventPatternItem& setLevelList(EventPatternItem::LevelList && levelList) { DARABONBA_PTR_SET_RVALUE(levelList_, levelList) };


            // nameList Field Functions 
            bool hasNameList() const { return this->nameList_ != nullptr;};
            void deleteNameList() { this->nameList_ = nullptr;};
            inline const EventPatternItem::NameList & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, EventPatternItem::NameList) };
            inline EventPatternItem::NameList getNameList() { DARABONBA_PTR_GET(nameList_, EventPatternItem::NameList) };
            inline EventPatternItem& setNameList(const EventPatternItem::NameList & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
            inline EventPatternItem& setNameList(EventPatternItem::NameList && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


            // product Field Functions 
            bool hasProduct() const { return this->product_ != nullptr;};
            void deleteProduct() { this->product_ = nullptr;};
            inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
            inline EventPatternItem& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


            // SQLFilter Field Functions 
            bool hasSQLFilter() const { return this->SQLFilter_ != nullptr;};
            void deleteSQLFilter() { this->SQLFilter_ = nullptr;};
            inline string getSQLFilter() const { DARABONBA_PTR_GET_DEFAULT(SQLFilter_, "") };
            inline EventPatternItem& setSQLFilter(string SQLFilter) { DARABONBA_PTR_SET_VALUE(SQLFilter_, SQLFilter) };


          protected:
            // The custom filter conditions.
            shared_ptr<string> customFilters_ {};
            // The types of the event-triggered alert rules.
            shared_ptr<EventPatternItem::EventTypeList> eventTypeList_ {};
            // The keyword for filtering.
            shared_ptr<EventPatternItem::KeywordFilter> keywordFilter_ {};
            // The levels of the event-triggered alerts.
            shared_ptr<EventPatternItem::LevelList> levelList_ {};
            // The event names.
            shared_ptr<EventPatternItem::NameList> nameList_ {};
            // The abbreviation of the Alibaba Cloud service name.
            shared_ptr<string> product_ {};
            // Indicates that logs are filtered based on the specified SQL statement. If the specified conditions are met, an alert is triggered.
            shared_ptr<string> SQLFilter_ {};
          };

          virtual bool empty() const override { return this->eventPattern_ == nullptr; };
          // eventPattern Field Functions 
          bool hasEventPattern() const { return this->eventPattern_ != nullptr;};
          void deleteEventPattern() { this->eventPattern_ = nullptr;};
          inline const vector<EventPattern::EventPatternItem> & getEventPattern() const { DARABONBA_PTR_GET_CONST(eventPattern_, vector<EventPattern::EventPatternItem>) };
          inline vector<EventPattern::EventPatternItem> getEventPattern() { DARABONBA_PTR_GET(eventPattern_, vector<EventPattern::EventPatternItem>) };
          inline EventPattern& setEventPattern(const vector<EventPattern::EventPatternItem> & eventPattern) { DARABONBA_PTR_SET_VALUE(eventPattern_, eventPattern) };
          inline EventPattern& setEventPattern(vector<EventPattern::EventPatternItem> && eventPattern) { DARABONBA_PTR_SET_RVALUE(eventPattern_, eventPattern) };


        protected:
          shared_ptr<vector<EventPattern::EventPatternItem>> eventPattern_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->eventPattern_ == nullptr && this->eventType_ == nullptr && this->groupId_ == nullptr && this->name_ == nullptr && this->silenceTime_ == nullptr
        && this->state_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline EventRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // eventPattern Field Functions 
        bool hasEventPattern() const { return this->eventPattern_ != nullptr;};
        void deleteEventPattern() { this->eventPattern_ = nullptr;};
        inline const EventRule::EventPattern & getEventPattern() const { DARABONBA_PTR_GET_CONST(eventPattern_, EventRule::EventPattern) };
        inline EventRule::EventPattern getEventPattern() { DARABONBA_PTR_GET(eventPattern_, EventRule::EventPattern) };
        inline EventRule& setEventPattern(const EventRule::EventPattern & eventPattern) { DARABONBA_PTR_SET_VALUE(eventPattern_, eventPattern) };
        inline EventRule& setEventPattern(EventRule::EventPattern && eventPattern) { DARABONBA_PTR_SET_RVALUE(eventPattern_, eventPattern) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline EventRule& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline EventRule& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EventRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // silenceTime Field Functions 
        bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
        void deleteSilenceTime() { this->silenceTime_ = nullptr;};
        inline int64_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0L) };
        inline EventRule& setSilenceTime(int64_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline EventRule& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        // The description of the event-triggered alert rule.
        shared_ptr<string> description_ {};
        // The mode of the event-triggered alert rule.
        shared_ptr<EventRule::EventPattern> eventPattern_ {};
        // The type of the event-triggered alert rule. Valid values:
        // 
        // *   SYSTEM: system event-triggered alert rule
        // *   CUSTOM: custom event-triggered alert rule
        shared_ptr<string> eventType_ {};
        // The ID of the application group.
        shared_ptr<string> groupId_ {};
        // The name of the event-triggered alert rule.
        shared_ptr<string> name_ {};
        // The mute period during which new alert notifications are not sent even if the trigger conditions are met.
        shared_ptr<int64_t> silenceTime_ {};
        // The status of the event-triggered alert rule. Valid values:
        // 
        // *   ENABLED
        // *   DISABLED
        shared_ptr<string> state_ {};
      };

      virtual bool empty() const override { return this->eventRule_ == nullptr; };
      // eventRule Field Functions 
      bool hasEventRule() const { return this->eventRule_ != nullptr;};
      void deleteEventRule() { this->eventRule_ = nullptr;};
      inline const vector<EventRules::EventRule> & getEventRule() const { DARABONBA_PTR_GET_CONST(eventRule_, vector<EventRules::EventRule>) };
      inline vector<EventRules::EventRule> getEventRule() { DARABONBA_PTR_GET(eventRule_, vector<EventRules::EventRule>) };
      inline EventRules& setEventRule(const vector<EventRules::EventRule> & eventRule) { DARABONBA_PTR_SET_VALUE(eventRule_, eventRule) };
      inline EventRules& setEventRule(vector<EventRules::EventRule> && eventRule) { DARABONBA_PTR_SET_RVALUE(eventRule_, eventRule) };


    protected:
      shared_ptr<vector<EventRules::EventRule>> eventRule_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->eventRules_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeEventRuleListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // eventRules Field Functions 
    bool hasEventRules() const { return this->eventRules_ != nullptr;};
    void deleteEventRules() { this->eventRules_ = nullptr;};
    inline const DescribeEventRuleListResponseBody::EventRules & getEventRules() const { DARABONBA_PTR_GET_CONST(eventRules_, DescribeEventRuleListResponseBody::EventRules) };
    inline DescribeEventRuleListResponseBody::EventRules getEventRules() { DARABONBA_PTR_GET(eventRules_, DescribeEventRuleListResponseBody::EventRules) };
    inline DescribeEventRuleListResponseBody& setEventRules(const DescribeEventRuleListResponseBody::EventRules & eventRules) { DARABONBA_PTR_SET_VALUE(eventRules_, eventRules) };
    inline DescribeEventRuleListResponseBody& setEventRules(DescribeEventRuleListResponseBody::EventRules && eventRules) { DARABONBA_PTR_SET_RVALUE(eventRules_, eventRules) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEventRuleListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventRuleListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeEventRuleListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeEventRuleListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The event-triggered alert rule.
    shared_ptr<DescribeEventRuleListResponseBody::EventRules> eventRules_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
