// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeEventRuleAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeEventRuleAttributeResponseBody() = default ;
    DescribeEventRuleAttributeResponseBody(const DescribeEventRuleAttributeResponseBody &) = default ;
    DescribeEventRuleAttributeResponseBody(DescribeEventRuleAttributeResponseBody &&) = default ;
    DescribeEventRuleAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleAttributeResponseBody() = default ;
    DescribeEventRuleAttributeResponseBody& operator=(const DescribeEventRuleAttributeResponseBody &) = default ;
    DescribeEventRuleAttributeResponseBody& operator=(DescribeEventRuleAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EventPattern, eventPattern_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EventPattern, eventPattern_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EventPattern : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventPattern& obj) { 
          DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
          DARABONBA_PTR_TO_JSON(KeywordFilterObj, keywordFilterObj_);
          DARABONBA_PTR_TO_JSON(LevelList, levelList_);
          DARABONBA_PTR_TO_JSON(NameList, nameList_);
          DARABONBA_PTR_TO_JSON(Product, product_);
          DARABONBA_PTR_TO_JSON(SQLFilter, SQLFilter_);
          DARABONBA_PTR_TO_JSON(StatusList, statusList_);
        };
        friend void from_json(const Darabonba::Json& j, EventPattern& obj) { 
          DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
          DARABONBA_PTR_FROM_JSON(KeywordFilterObj, keywordFilterObj_);
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
        class StatusList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StatusList& obj) { 
            DARABONBA_PTR_TO_JSON(StatusList, statusList_);
          };
          friend void from_json(const Darabonba::Json& j, StatusList& obj) { 
            DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
          };
          StatusList() = default ;
          StatusList(const StatusList &) = default ;
          StatusList(StatusList &&) = default ;
          StatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StatusList() = default ;
          StatusList& operator=(const StatusList &) = default ;
          StatusList& operator=(StatusList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->statusList_ == nullptr; };
          // statusList Field Functions 
          bool hasStatusList() const { return this->statusList_ != nullptr;};
          void deleteStatusList() { this->statusList_ = nullptr;};
          inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
          inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
          inline StatusList& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
          inline StatusList& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


        protected:
          shared_ptr<vector<string>> statusList_ {};
        };

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

        class KeywordFilterObj : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const KeywordFilterObj& obj) { 
            DARABONBA_PTR_TO_JSON(Keywords, keywords_);
            DARABONBA_PTR_TO_JSON(Relation, relation_);
          };
          friend void from_json(const Darabonba::Json& j, KeywordFilterObj& obj) { 
            DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
            DARABONBA_PTR_FROM_JSON(Relation, relation_);
          };
          KeywordFilterObj() = default ;
          KeywordFilterObj(const KeywordFilterObj &) = default ;
          KeywordFilterObj(KeywordFilterObj &&) = default ;
          KeywordFilterObj(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~KeywordFilterObj() = default ;
          KeywordFilterObj& operator=(const KeywordFilterObj &) = default ;
          KeywordFilterObj& operator=(KeywordFilterObj &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Keywords : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Keywords& obj) { 
              DARABONBA_PTR_TO_JSON(keyword, keyword_);
            };
            friend void from_json(const Darabonba::Json& j, Keywords& obj) { 
              DARABONBA_PTR_FROM_JSON(keyword, keyword_);
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
            virtual bool empty() const override { return this->keyword_ == nullptr; };
            // keyword Field Functions 
            bool hasKeyword() const { return this->keyword_ != nullptr;};
            void deleteKeyword() { this->keyword_ = nullptr;};
            inline const vector<string> & getKeyword() const { DARABONBA_PTR_GET_CONST(keyword_, vector<string>) };
            inline vector<string> getKeyword() { DARABONBA_PTR_GET(keyword_, vector<string>) };
            inline Keywords& setKeyword(const vector<string> & keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };
            inline Keywords& setKeyword(vector<string> && keyword) { DARABONBA_PTR_SET_RVALUE(keyword_, keyword) };


          protected:
            shared_ptr<vector<string>> keyword_ {};
          };

          virtual bool empty() const override { return this->keywords_ == nullptr
        && this->relation_ == nullptr; };
          // keywords Field Functions 
          bool hasKeywords() const { return this->keywords_ != nullptr;};
          void deleteKeywords() { this->keywords_ = nullptr;};
          inline const KeywordFilterObj::Keywords & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, KeywordFilterObj::Keywords) };
          inline KeywordFilterObj::Keywords getKeywords() { DARABONBA_PTR_GET(keywords_, KeywordFilterObj::Keywords) };
          inline KeywordFilterObj& setKeywords(const KeywordFilterObj::Keywords & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
          inline KeywordFilterObj& setKeywords(KeywordFilterObj::Keywords && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


          // relation Field Functions 
          bool hasRelation() const { return this->relation_ != nullptr;};
          void deleteRelation() { this->relation_ = nullptr;};
          inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
          inline KeywordFilterObj& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


        protected:
          // The keywords that are used to match events.
          shared_ptr<KeywordFilterObj::Keywords> keywords_ {};
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

        virtual bool empty() const override { return this->eventTypeList_ == nullptr
        && this->keywordFilterObj_ == nullptr && this->levelList_ == nullptr && this->nameList_ == nullptr && this->product_ == nullptr && this->SQLFilter_ == nullptr
        && this->statusList_ == nullptr; };
        // eventTypeList Field Functions 
        bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
        void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
        inline const EventPattern::EventTypeList & getEventTypeList() const { DARABONBA_PTR_GET_CONST(eventTypeList_, EventPattern::EventTypeList) };
        inline EventPattern::EventTypeList getEventTypeList() { DARABONBA_PTR_GET(eventTypeList_, EventPattern::EventTypeList) };
        inline EventPattern& setEventTypeList(const EventPattern::EventTypeList & eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };
        inline EventPattern& setEventTypeList(EventPattern::EventTypeList && eventTypeList) { DARABONBA_PTR_SET_RVALUE(eventTypeList_, eventTypeList) };


        // keywordFilterObj Field Functions 
        bool hasKeywordFilterObj() const { return this->keywordFilterObj_ != nullptr;};
        void deleteKeywordFilterObj() { this->keywordFilterObj_ = nullptr;};
        inline const EventPattern::KeywordFilterObj & getKeywordFilterObj() const { DARABONBA_PTR_GET_CONST(keywordFilterObj_, EventPattern::KeywordFilterObj) };
        inline EventPattern::KeywordFilterObj getKeywordFilterObj() { DARABONBA_PTR_GET(keywordFilterObj_, EventPattern::KeywordFilterObj) };
        inline EventPattern& setKeywordFilterObj(const EventPattern::KeywordFilterObj & keywordFilterObj) { DARABONBA_PTR_SET_VALUE(keywordFilterObj_, keywordFilterObj) };
        inline EventPattern& setKeywordFilterObj(EventPattern::KeywordFilterObj && keywordFilterObj) { DARABONBA_PTR_SET_RVALUE(keywordFilterObj_, keywordFilterObj) };


        // levelList Field Functions 
        bool hasLevelList() const { return this->levelList_ != nullptr;};
        void deleteLevelList() { this->levelList_ = nullptr;};
        inline const EventPattern::LevelList & getLevelList() const { DARABONBA_PTR_GET_CONST(levelList_, EventPattern::LevelList) };
        inline EventPattern::LevelList getLevelList() { DARABONBA_PTR_GET(levelList_, EventPattern::LevelList) };
        inline EventPattern& setLevelList(const EventPattern::LevelList & levelList) { DARABONBA_PTR_SET_VALUE(levelList_, levelList) };
        inline EventPattern& setLevelList(EventPattern::LevelList && levelList) { DARABONBA_PTR_SET_RVALUE(levelList_, levelList) };


        // nameList Field Functions 
        bool hasNameList() const { return this->nameList_ != nullptr;};
        void deleteNameList() { this->nameList_ = nullptr;};
        inline const EventPattern::NameList & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, EventPattern::NameList) };
        inline EventPattern::NameList getNameList() { DARABONBA_PTR_GET(nameList_, EventPattern::NameList) };
        inline EventPattern& setNameList(const EventPattern::NameList & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
        inline EventPattern& setNameList(EventPattern::NameList && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


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
        inline const EventPattern::StatusList & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, EventPattern::StatusList) };
        inline EventPattern::StatusList getStatusList() { DARABONBA_PTR_GET(statusList_, EventPattern::StatusList) };
        inline EventPattern& setStatusList(const EventPattern::StatusList & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
        inline EventPattern& setStatusList(EventPattern::StatusList && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


      protected:
        // The types of the event-triggered alert rules.
        shared_ptr<EventPattern::EventTypeList> eventTypeList_ {};
        // The keyword for filtering.
        shared_ptr<EventPattern::KeywordFilterObj> keywordFilterObj_ {};
        shared_ptr<EventPattern::LevelList> levelList_ {};
        shared_ptr<EventPattern::NameList> nameList_ {};
        // The name of the cloud service.
        shared_ptr<string> product_ {};
        // Indicates that logs are filtered based on the specified SQL statement. If the specified conditions are met, an alert is triggered.
        shared_ptr<string> SQLFilter_ {};
        shared_ptr<EventPattern::StatusList> statusList_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->eventPattern_ == nullptr && this->eventType_ == nullptr && this->groupId_ == nullptr && this->name_ == nullptr && this->state_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // eventPattern Field Functions 
      bool hasEventPattern() const { return this->eventPattern_ != nullptr;};
      void deleteEventPattern() { this->eventPattern_ = nullptr;};
      inline const Result::EventPattern & getEventPattern() const { DARABONBA_PTR_GET_CONST(eventPattern_, Result::EventPattern) };
      inline Result::EventPattern getEventPattern() { DARABONBA_PTR_GET(eventPattern_, Result::EventPattern) };
      inline Result& setEventPattern(const Result::EventPattern & eventPattern) { DARABONBA_PTR_SET_VALUE(eventPattern_, eventPattern) };
      inline Result& setEventPattern(Result::EventPattern && eventPattern) { DARABONBA_PTR_SET_RVALUE(eventPattern_, eventPattern) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Result& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Result& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Result& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The description of the event-triggered alert rule.
      shared_ptr<string> description_ {};
      // The event pattern. This parameter describes the trigger conditions of an event.
      shared_ptr<Result::EventPattern> eventPattern_ {};
      // The event type. Valid values:
      // 
      // *   SYSTEM: system event
      // *   CUSTOM: custom event
      shared_ptr<string> eventType_ {};
      // The ID of the application group.
      shared_ptr<string> groupId_ {};
      // The name of the event-triggered alert rule.
      shared_ptr<string> name_ {};
      // The status of the event-triggered alert rule. Valid values:
      // 
      // *   ENABLED
      // *   DISABLED
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeEventRuleAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEventRuleAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventRuleAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeEventRuleAttributeResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeEventRuleAttributeResponseBody::Result) };
    inline DescribeEventRuleAttributeResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeEventRuleAttributeResponseBody::Result) };
    inline DescribeEventRuleAttributeResponseBody& setResult(const DescribeEventRuleAttributeResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeEventRuleAttributeResponseBody& setResult(DescribeEventRuleAttributeResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeEventRuleAttributeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the event-triggered alert rule.
    shared_ptr<DescribeEventRuleAttributeResponseBody::Result> result_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
