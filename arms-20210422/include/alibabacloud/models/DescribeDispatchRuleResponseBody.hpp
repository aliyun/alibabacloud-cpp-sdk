// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class DescribeDispatchRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDispatchRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DispatchRule, dispatchRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDispatchRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DispatchRule, dispatchRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDispatchRuleResponseBody() = default ;
    DescribeDispatchRuleResponseBody(const DescribeDispatchRuleResponseBody &) = default ;
    DescribeDispatchRuleResponseBody(DescribeDispatchRuleResponseBody &&) = default ;
    DescribeDispatchRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDispatchRuleResponseBody() = default ;
    DescribeDispatchRuleResponseBody& operator=(const DescribeDispatchRuleResponseBody &) = default ;
    DescribeDispatchRuleResponseBody& operator=(DescribeDispatchRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DispatchRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DispatchRule& obj) { 
        DARABONBA_PTR_TO_JSON(GroupRules, groupRules_);
        DARABONBA_PTR_TO_JSON(LabelMatchExpressionGrid, labelMatchExpressionGrid_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NotifyRules, notifyRules_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, DispatchRule& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupRules, groupRules_);
        DARABONBA_PTR_FROM_JSON(LabelMatchExpressionGrid, labelMatchExpressionGrid_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NotifyRules, notifyRules_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      DispatchRule() = default ;
      DispatchRule(const DispatchRule &) = default ;
      DispatchRule(DispatchRule &&) = default ;
      DispatchRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DispatchRule() = default ;
      DispatchRule& operator=(const DispatchRule &) = default ;
      DispatchRule& operator=(DispatchRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NotifyRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NotifyRules& obj) { 
          DARABONBA_PTR_TO_JSON(NotifyChannels, notifyChannels_);
          DARABONBA_PTR_TO_JSON(NotifyObjects, notifyObjects_);
        };
        friend void from_json(const Darabonba::Json& j, NotifyRules& obj) { 
          DARABONBA_PTR_FROM_JSON(NotifyChannels, notifyChannels_);
          DARABONBA_PTR_FROM_JSON(NotifyObjects, notifyObjects_);
        };
        NotifyRules() = default ;
        NotifyRules(const NotifyRules &) = default ;
        NotifyRules(NotifyRules &&) = default ;
        NotifyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NotifyRules() = default ;
        NotifyRules& operator=(const NotifyRules &) = default ;
        NotifyRules& operator=(NotifyRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NotifyObjects : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NotifyObjects& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(NotifyObjectId, notifyObjectId_);
            DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
          };
          friend void from_json(const Darabonba::Json& j, NotifyObjects& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(NotifyObjectId, notifyObjectId_);
            DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
          };
          NotifyObjects() = default ;
          NotifyObjects(const NotifyObjects &) = default ;
          NotifyObjects(NotifyObjects &&) = default ;
          NotifyObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NotifyObjects() = default ;
          NotifyObjects& operator=(const NotifyObjects &) = default ;
          NotifyObjects& operator=(NotifyObjects &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->notifyObjectId_ == nullptr && this->notifyType_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline NotifyObjects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // notifyObjectId Field Functions 
          bool hasNotifyObjectId() const { return this->notifyObjectId_ != nullptr;};
          void deleteNotifyObjectId() { this->notifyObjectId_ = nullptr;};
          inline string getNotifyObjectId() const { DARABONBA_PTR_GET_DEFAULT(notifyObjectId_, "") };
          inline NotifyObjects& setNotifyObjectId(string notifyObjectId) { DARABONBA_PTR_SET_VALUE(notifyObjectId_, notifyObjectId) };


          // notifyType Field Functions 
          bool hasNotifyType() const { return this->notifyType_ != nullptr;};
          void deleteNotifyType() { this->notifyType_ = nullptr;};
          inline string getNotifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
          inline NotifyObjects& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<string> notifyObjectId_ {};
          shared_ptr<string> notifyType_ {};
        };

        virtual bool empty() const override { return this->notifyChannels_ == nullptr
        && this->notifyObjects_ == nullptr; };
        // notifyChannels Field Functions 
        bool hasNotifyChannels() const { return this->notifyChannels_ != nullptr;};
        void deleteNotifyChannels() { this->notifyChannels_ = nullptr;};
        inline const vector<string> & getNotifyChannels() const { DARABONBA_PTR_GET_CONST(notifyChannels_, vector<string>) };
        inline vector<string> getNotifyChannels() { DARABONBA_PTR_GET(notifyChannels_, vector<string>) };
        inline NotifyRules& setNotifyChannels(const vector<string> & notifyChannels) { DARABONBA_PTR_SET_VALUE(notifyChannels_, notifyChannels) };
        inline NotifyRules& setNotifyChannels(vector<string> && notifyChannels) { DARABONBA_PTR_SET_RVALUE(notifyChannels_, notifyChannels) };


        // notifyObjects Field Functions 
        bool hasNotifyObjects() const { return this->notifyObjects_ != nullptr;};
        void deleteNotifyObjects() { this->notifyObjects_ = nullptr;};
        inline const vector<NotifyRules::NotifyObjects> & getNotifyObjects() const { DARABONBA_PTR_GET_CONST(notifyObjects_, vector<NotifyRules::NotifyObjects>) };
        inline vector<NotifyRules::NotifyObjects> getNotifyObjects() { DARABONBA_PTR_GET(notifyObjects_, vector<NotifyRules::NotifyObjects>) };
        inline NotifyRules& setNotifyObjects(const vector<NotifyRules::NotifyObjects> & notifyObjects) { DARABONBA_PTR_SET_VALUE(notifyObjects_, notifyObjects) };
        inline NotifyRules& setNotifyObjects(vector<NotifyRules::NotifyObjects> && notifyObjects) { DARABONBA_PTR_SET_RVALUE(notifyObjects_, notifyObjects) };


      protected:
        shared_ptr<vector<string>> notifyChannels_ {};
        shared_ptr<vector<NotifyRules::NotifyObjects>> notifyObjects_ {};
      };

      class LabelMatchExpressionGrid : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LabelMatchExpressionGrid& obj) { 
          DARABONBA_PTR_TO_JSON(LabelMatchExpressionGroups, labelMatchExpressionGroups_);
        };
        friend void from_json(const Darabonba::Json& j, LabelMatchExpressionGrid& obj) { 
          DARABONBA_PTR_FROM_JSON(LabelMatchExpressionGroups, labelMatchExpressionGroups_);
        };
        LabelMatchExpressionGrid() = default ;
        LabelMatchExpressionGrid(const LabelMatchExpressionGrid &) = default ;
        LabelMatchExpressionGrid(LabelMatchExpressionGrid &&) = default ;
        LabelMatchExpressionGrid(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LabelMatchExpressionGrid() = default ;
        LabelMatchExpressionGrid& operator=(const LabelMatchExpressionGrid &) = default ;
        LabelMatchExpressionGrid& operator=(LabelMatchExpressionGrid &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LabelMatchExpressionGroups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LabelMatchExpressionGroups& obj) { 
            DARABONBA_PTR_TO_JSON(LabelMatchExpressions, labelMatchExpressions_);
          };
          friend void from_json(const Darabonba::Json& j, LabelMatchExpressionGroups& obj) { 
            DARABONBA_PTR_FROM_JSON(LabelMatchExpressions, labelMatchExpressions_);
          };
          LabelMatchExpressionGroups() = default ;
          LabelMatchExpressionGroups(const LabelMatchExpressionGroups &) = default ;
          LabelMatchExpressionGroups(LabelMatchExpressionGroups &&) = default ;
          LabelMatchExpressionGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LabelMatchExpressionGroups() = default ;
          LabelMatchExpressionGroups& operator=(const LabelMatchExpressionGroups &) = default ;
          LabelMatchExpressionGroups& operator=(LabelMatchExpressionGroups &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class LabelMatchExpressions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LabelMatchExpressions& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Operator, operator_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, LabelMatchExpressions& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Operator, operator_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            LabelMatchExpressions() = default ;
            LabelMatchExpressions(const LabelMatchExpressions &) = default ;
            LabelMatchExpressions(LabelMatchExpressions &&) = default ;
            LabelMatchExpressions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LabelMatchExpressions() = default ;
            LabelMatchExpressions& operator=(const LabelMatchExpressions &) = default ;
            LabelMatchExpressions& operator=(LabelMatchExpressions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline LabelMatchExpressions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
            inline LabelMatchExpressions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline LabelMatchExpressions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> operator_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->labelMatchExpressions_ == nullptr; };
          // labelMatchExpressions Field Functions 
          bool hasLabelMatchExpressions() const { return this->labelMatchExpressions_ != nullptr;};
          void deleteLabelMatchExpressions() { this->labelMatchExpressions_ = nullptr;};
          inline const vector<LabelMatchExpressionGroups::LabelMatchExpressions> & getLabelMatchExpressions() const { DARABONBA_PTR_GET_CONST(labelMatchExpressions_, vector<LabelMatchExpressionGroups::LabelMatchExpressions>) };
          inline vector<LabelMatchExpressionGroups::LabelMatchExpressions> getLabelMatchExpressions() { DARABONBA_PTR_GET(labelMatchExpressions_, vector<LabelMatchExpressionGroups::LabelMatchExpressions>) };
          inline LabelMatchExpressionGroups& setLabelMatchExpressions(const vector<LabelMatchExpressionGroups::LabelMatchExpressions> & labelMatchExpressions) { DARABONBA_PTR_SET_VALUE(labelMatchExpressions_, labelMatchExpressions) };
          inline LabelMatchExpressionGroups& setLabelMatchExpressions(vector<LabelMatchExpressionGroups::LabelMatchExpressions> && labelMatchExpressions) { DARABONBA_PTR_SET_RVALUE(labelMatchExpressions_, labelMatchExpressions) };


        protected:
          shared_ptr<vector<LabelMatchExpressionGroups::LabelMatchExpressions>> labelMatchExpressions_ {};
        };

        virtual bool empty() const override { return this->labelMatchExpressionGroups_ == nullptr; };
        // labelMatchExpressionGroups Field Functions 
        bool hasLabelMatchExpressionGroups() const { return this->labelMatchExpressionGroups_ != nullptr;};
        void deleteLabelMatchExpressionGroups() { this->labelMatchExpressionGroups_ = nullptr;};
        inline const vector<LabelMatchExpressionGrid::LabelMatchExpressionGroups> & getLabelMatchExpressionGroups() const { DARABONBA_PTR_GET_CONST(labelMatchExpressionGroups_, vector<LabelMatchExpressionGrid::LabelMatchExpressionGroups>) };
        inline vector<LabelMatchExpressionGrid::LabelMatchExpressionGroups> getLabelMatchExpressionGroups() { DARABONBA_PTR_GET(labelMatchExpressionGroups_, vector<LabelMatchExpressionGrid::LabelMatchExpressionGroups>) };
        inline LabelMatchExpressionGrid& setLabelMatchExpressionGroups(const vector<LabelMatchExpressionGrid::LabelMatchExpressionGroups> & labelMatchExpressionGroups) { DARABONBA_PTR_SET_VALUE(labelMatchExpressionGroups_, labelMatchExpressionGroups) };
        inline LabelMatchExpressionGrid& setLabelMatchExpressionGroups(vector<LabelMatchExpressionGrid::LabelMatchExpressionGroups> && labelMatchExpressionGroups) { DARABONBA_PTR_SET_RVALUE(labelMatchExpressionGroups_, labelMatchExpressionGroups) };


      protected:
        shared_ptr<vector<LabelMatchExpressionGrid::LabelMatchExpressionGroups>> labelMatchExpressionGroups_ {};
      };

      class GroupRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupRules& obj) { 
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupInterval, groupInterval_);
          DARABONBA_PTR_TO_JSON(GroupWaitTime, groupWaitTime_);
          DARABONBA_PTR_TO_JSON(GroupingFields, groupingFields_);
        };
        friend void from_json(const Darabonba::Json& j, GroupRules& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupInterval, groupInterval_);
          DARABONBA_PTR_FROM_JSON(GroupWaitTime, groupWaitTime_);
          DARABONBA_PTR_FROM_JSON(GroupingFields, groupingFields_);
        };
        GroupRules() = default ;
        GroupRules(const GroupRules &) = default ;
        GroupRules(GroupRules &&) = default ;
        GroupRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupRules() = default ;
        GroupRules& operator=(const GroupRules &) = default ;
        GroupRules& operator=(GroupRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupInterval_ == nullptr && this->groupWaitTime_ == nullptr && this->groupingFields_ == nullptr; };
        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
        inline GroupRules& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupInterval Field Functions 
        bool hasGroupInterval() const { return this->groupInterval_ != nullptr;};
        void deleteGroupInterval() { this->groupInterval_ = nullptr;};
        inline int64_t getGroupInterval() const { DARABONBA_PTR_GET_DEFAULT(groupInterval_, 0L) };
        inline GroupRules& setGroupInterval(int64_t groupInterval) { DARABONBA_PTR_SET_VALUE(groupInterval_, groupInterval) };


        // groupWaitTime Field Functions 
        bool hasGroupWaitTime() const { return this->groupWaitTime_ != nullptr;};
        void deleteGroupWaitTime() { this->groupWaitTime_ = nullptr;};
        inline int64_t getGroupWaitTime() const { DARABONBA_PTR_GET_DEFAULT(groupWaitTime_, 0L) };
        inline GroupRules& setGroupWaitTime(int64_t groupWaitTime) { DARABONBA_PTR_SET_VALUE(groupWaitTime_, groupWaitTime) };


        // groupingFields Field Functions 
        bool hasGroupingFields() const { return this->groupingFields_ != nullptr;};
        void deleteGroupingFields() { this->groupingFields_ = nullptr;};
        inline const vector<string> & getGroupingFields() const { DARABONBA_PTR_GET_CONST(groupingFields_, vector<string>) };
        inline vector<string> getGroupingFields() { DARABONBA_PTR_GET(groupingFields_, vector<string>) };
        inline GroupRules& setGroupingFields(const vector<string> & groupingFields) { DARABONBA_PTR_SET_VALUE(groupingFields_, groupingFields) };
        inline GroupRules& setGroupingFields(vector<string> && groupingFields) { DARABONBA_PTR_SET_RVALUE(groupingFields_, groupingFields) };


      protected:
        shared_ptr<int64_t> groupId_ {};
        shared_ptr<int64_t> groupInterval_ {};
        shared_ptr<int64_t> groupWaitTime_ {};
        shared_ptr<vector<string>> groupingFields_ {};
      };

      virtual bool empty() const override { return this->groupRules_ == nullptr
        && this->labelMatchExpressionGrid_ == nullptr && this->name_ == nullptr && this->notifyRules_ == nullptr && this->ruleId_ == nullptr && this->state_ == nullptr; };
      // groupRules Field Functions 
      bool hasGroupRules() const { return this->groupRules_ != nullptr;};
      void deleteGroupRules() { this->groupRules_ = nullptr;};
      inline const vector<DispatchRule::GroupRules> & getGroupRules() const { DARABONBA_PTR_GET_CONST(groupRules_, vector<DispatchRule::GroupRules>) };
      inline vector<DispatchRule::GroupRules> getGroupRules() { DARABONBA_PTR_GET(groupRules_, vector<DispatchRule::GroupRules>) };
      inline DispatchRule& setGroupRules(const vector<DispatchRule::GroupRules> & groupRules) { DARABONBA_PTR_SET_VALUE(groupRules_, groupRules) };
      inline DispatchRule& setGroupRules(vector<DispatchRule::GroupRules> && groupRules) { DARABONBA_PTR_SET_RVALUE(groupRules_, groupRules) };


      // labelMatchExpressionGrid Field Functions 
      bool hasLabelMatchExpressionGrid() const { return this->labelMatchExpressionGrid_ != nullptr;};
      void deleteLabelMatchExpressionGrid() { this->labelMatchExpressionGrid_ = nullptr;};
      inline const DispatchRule::LabelMatchExpressionGrid & getLabelMatchExpressionGrid() const { DARABONBA_PTR_GET_CONST(labelMatchExpressionGrid_, DispatchRule::LabelMatchExpressionGrid) };
      inline DispatchRule::LabelMatchExpressionGrid getLabelMatchExpressionGrid() { DARABONBA_PTR_GET(labelMatchExpressionGrid_, DispatchRule::LabelMatchExpressionGrid) };
      inline DispatchRule& setLabelMatchExpressionGrid(const DispatchRule::LabelMatchExpressionGrid & labelMatchExpressionGrid) { DARABONBA_PTR_SET_VALUE(labelMatchExpressionGrid_, labelMatchExpressionGrid) };
      inline DispatchRule& setLabelMatchExpressionGrid(DispatchRule::LabelMatchExpressionGrid && labelMatchExpressionGrid) { DARABONBA_PTR_SET_RVALUE(labelMatchExpressionGrid_, labelMatchExpressionGrid) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DispatchRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // notifyRules Field Functions 
      bool hasNotifyRules() const { return this->notifyRules_ != nullptr;};
      void deleteNotifyRules() { this->notifyRules_ = nullptr;};
      inline const vector<DispatchRule::NotifyRules> & getNotifyRules() const { DARABONBA_PTR_GET_CONST(notifyRules_, vector<DispatchRule::NotifyRules>) };
      inline vector<DispatchRule::NotifyRules> getNotifyRules() { DARABONBA_PTR_GET(notifyRules_, vector<DispatchRule::NotifyRules>) };
      inline DispatchRule& setNotifyRules(const vector<DispatchRule::NotifyRules> & notifyRules) { DARABONBA_PTR_SET_VALUE(notifyRules_, notifyRules) };
      inline DispatchRule& setNotifyRules(vector<DispatchRule::NotifyRules> && notifyRules) { DARABONBA_PTR_SET_RVALUE(notifyRules_, notifyRules) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline DispatchRule& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline DispatchRule& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      shared_ptr<vector<DispatchRule::GroupRules>> groupRules_ {};
      shared_ptr<DispatchRule::LabelMatchExpressionGrid> labelMatchExpressionGrid_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<DispatchRule::NotifyRules>> notifyRules_ {};
      shared_ptr<int64_t> ruleId_ {};
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->dispatchRule_ == nullptr
        && this->requestId_ == nullptr; };
    // dispatchRule Field Functions 
    bool hasDispatchRule() const { return this->dispatchRule_ != nullptr;};
    void deleteDispatchRule() { this->dispatchRule_ = nullptr;};
    inline const DescribeDispatchRuleResponseBody::DispatchRule & getDispatchRule() const { DARABONBA_PTR_GET_CONST(dispatchRule_, DescribeDispatchRuleResponseBody::DispatchRule) };
    inline DescribeDispatchRuleResponseBody::DispatchRule getDispatchRule() { DARABONBA_PTR_GET(dispatchRule_, DescribeDispatchRuleResponseBody::DispatchRule) };
    inline DescribeDispatchRuleResponseBody& setDispatchRule(const DescribeDispatchRuleResponseBody::DispatchRule & dispatchRule) { DARABONBA_PTR_SET_VALUE(dispatchRule_, dispatchRule) };
    inline DescribeDispatchRuleResponseBody& setDispatchRule(DescribeDispatchRuleResponseBody::DispatchRule && dispatchRule) { DARABONBA_PTR_SET_RVALUE(dispatchRule_, dispatchRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDispatchRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDispatchRuleResponseBody::DispatchRule> dispatchRule_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
