// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODY_HPP_
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
  class DescribeAlertHistoryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertHistoryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmHistoryList, alarmHistoryList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertHistoryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmHistoryList, alarmHistoryList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeAlertHistoryListResponseBody() = default ;
    DescribeAlertHistoryListResponseBody(const DescribeAlertHistoryListResponseBody &) = default ;
    DescribeAlertHistoryListResponseBody(DescribeAlertHistoryListResponseBody &&) = default ;
    DescribeAlertHistoryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertHistoryListResponseBody() = default ;
    DescribeAlertHistoryListResponseBody& operator=(const DescribeAlertHistoryListResponseBody &) = default ;
    DescribeAlertHistoryListResponseBody& operator=(DescribeAlertHistoryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlarmHistoryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlarmHistoryList& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmHistory, alarmHistory_);
      };
      friend void from_json(const Darabonba::Json& j, AlarmHistoryList& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmHistory, alarmHistory_);
      };
      AlarmHistoryList() = default ;
      AlarmHistoryList(const AlarmHistoryList &) = default ;
      AlarmHistoryList(AlarmHistoryList &&) = default ;
      AlarmHistoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlarmHistoryList() = default ;
      AlarmHistoryList& operator=(const AlarmHistoryList &) = default ;
      AlarmHistoryList& operator=(AlarmHistoryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlarmHistory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlarmHistory& obj) { 
          DARABONBA_PTR_TO_JSON(AlertTime, alertTime_);
          DARABONBA_PTR_TO_JSON(ContactALIIMs, contactALIIMs_);
          DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
          DARABONBA_PTR_TO_JSON(ContactMails, contactMails_);
          DARABONBA_PTR_TO_JSON(ContactSmses, contactSmses_);
          DARABONBA_PTR_TO_JSON(Contacts, contacts_);
          DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
          DARABONBA_PTR_TO_JSON(Expression, expression_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(Webhooks, webhooks_);
        };
        friend void from_json(const Darabonba::Json& j, AlarmHistory& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertTime, alertTime_);
          DARABONBA_PTR_FROM_JSON(ContactALIIMs, contactALIIMs_);
          DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
          DARABONBA_PTR_FROM_JSON(ContactMails, contactMails_);
          DARABONBA_PTR_FROM_JSON(ContactSmses, contactSmses_);
          DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
          DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
          DARABONBA_PTR_FROM_JSON(Expression, expression_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(Webhooks, webhooks_);
        };
        AlarmHistory() = default ;
        AlarmHistory(const AlarmHistory &) = default ;
        AlarmHistory(AlarmHistory &&) = default ;
        AlarmHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlarmHistory() = default ;
        AlarmHistory& operator=(const AlarmHistory &) = default ;
        AlarmHistory& operator=(AlarmHistory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Contacts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Contacts& obj) { 
            DARABONBA_PTR_TO_JSON(Contact, contact_);
          };
          friend void from_json(const Darabonba::Json& j, Contacts& obj) { 
            DARABONBA_PTR_FROM_JSON(Contact, contact_);
          };
          Contacts() = default ;
          Contacts(const Contacts &) = default ;
          Contacts(Contacts &&) = default ;
          Contacts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Contacts() = default ;
          Contacts& operator=(const Contacts &) = default ;
          Contacts& operator=(Contacts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contact_ == nullptr; };
          // contact Field Functions 
          bool hasContact() const { return this->contact_ != nullptr;};
          void deleteContact() { this->contact_ = nullptr;};
          inline const vector<string> & getContact() const { DARABONBA_PTR_GET_CONST(contact_, vector<string>) };
          inline vector<string> getContact() { DARABONBA_PTR_GET(contact_, vector<string>) };
          inline Contacts& setContact(const vector<string> & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
          inline Contacts& setContact(vector<string> && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


        protected:
          shared_ptr<vector<string>> contact_ {};
        };

        class ContactSmses : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ContactSmses& obj) { 
            DARABONBA_PTR_TO_JSON(ContactSms, contactSms_);
          };
          friend void from_json(const Darabonba::Json& j, ContactSmses& obj) { 
            DARABONBA_PTR_FROM_JSON(ContactSms, contactSms_);
          };
          ContactSmses() = default ;
          ContactSmses(const ContactSmses &) = default ;
          ContactSmses(ContactSmses &&) = default ;
          ContactSmses(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ContactSmses() = default ;
          ContactSmses& operator=(const ContactSmses &) = default ;
          ContactSmses& operator=(ContactSmses &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contactSms_ == nullptr; };
          // contactSms Field Functions 
          bool hasContactSms() const { return this->contactSms_ != nullptr;};
          void deleteContactSms() { this->contactSms_ = nullptr;};
          inline const vector<string> & getContactSms() const { DARABONBA_PTR_GET_CONST(contactSms_, vector<string>) };
          inline vector<string> getContactSms() { DARABONBA_PTR_GET(contactSms_, vector<string>) };
          inline ContactSmses& setContactSms(const vector<string> & contactSms) { DARABONBA_PTR_SET_VALUE(contactSms_, contactSms) };
          inline ContactSmses& setContactSms(vector<string> && contactSms) { DARABONBA_PTR_SET_RVALUE(contactSms_, contactSms) };


        protected:
          shared_ptr<vector<string>> contactSms_ {};
        };

        class ContactMails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ContactMails& obj) { 
            DARABONBA_PTR_TO_JSON(ContactMail, contactMail_);
          };
          friend void from_json(const Darabonba::Json& j, ContactMails& obj) { 
            DARABONBA_PTR_FROM_JSON(ContactMail, contactMail_);
          };
          ContactMails() = default ;
          ContactMails(const ContactMails &) = default ;
          ContactMails(ContactMails &&) = default ;
          ContactMails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ContactMails() = default ;
          ContactMails& operator=(const ContactMails &) = default ;
          ContactMails& operator=(ContactMails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contactMail_ == nullptr; };
          // contactMail Field Functions 
          bool hasContactMail() const { return this->contactMail_ != nullptr;};
          void deleteContactMail() { this->contactMail_ = nullptr;};
          inline const vector<string> & getContactMail() const { DARABONBA_PTR_GET_CONST(contactMail_, vector<string>) };
          inline vector<string> getContactMail() { DARABONBA_PTR_GET(contactMail_, vector<string>) };
          inline ContactMails& setContactMail(const vector<string> & contactMail) { DARABONBA_PTR_SET_VALUE(contactMail_, contactMail) };
          inline ContactMails& setContactMail(vector<string> && contactMail) { DARABONBA_PTR_SET_RVALUE(contactMail_, contactMail) };


        protected:
          shared_ptr<vector<string>> contactMail_ {};
        };

        class ContactGroups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ContactGroups& obj) { 
            DARABONBA_PTR_TO_JSON(ContactGroup, contactGroup_);
          };
          friend void from_json(const Darabonba::Json& j, ContactGroups& obj) { 
            DARABONBA_PTR_FROM_JSON(ContactGroup, contactGroup_);
          };
          ContactGroups() = default ;
          ContactGroups(const ContactGroups &) = default ;
          ContactGroups(ContactGroups &&) = default ;
          ContactGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ContactGroups() = default ;
          ContactGroups& operator=(const ContactGroups &) = default ;
          ContactGroups& operator=(ContactGroups &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contactGroup_ == nullptr; };
          // contactGroup Field Functions 
          bool hasContactGroup() const { return this->contactGroup_ != nullptr;};
          void deleteContactGroup() { this->contactGroup_ = nullptr;};
          inline const vector<string> & getContactGroup() const { DARABONBA_PTR_GET_CONST(contactGroup_, vector<string>) };
          inline vector<string> getContactGroup() { DARABONBA_PTR_GET(contactGroup_, vector<string>) };
          inline ContactGroups& setContactGroup(const vector<string> & contactGroup) { DARABONBA_PTR_SET_VALUE(contactGroup_, contactGroup) };
          inline ContactGroups& setContactGroup(vector<string> && contactGroup) { DARABONBA_PTR_SET_RVALUE(contactGroup_, contactGroup) };


        protected:
          shared_ptr<vector<string>> contactGroup_ {};
        };

        class ContactALIIMs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ContactALIIMs& obj) { 
            DARABONBA_PTR_TO_JSON(ContactALIIM, contactALIIM_);
          };
          friend void from_json(const Darabonba::Json& j, ContactALIIMs& obj) { 
            DARABONBA_PTR_FROM_JSON(ContactALIIM, contactALIIM_);
          };
          ContactALIIMs() = default ;
          ContactALIIMs(const ContactALIIMs &) = default ;
          ContactALIIMs(ContactALIIMs &&) = default ;
          ContactALIIMs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ContactALIIMs() = default ;
          ContactALIIMs& operator=(const ContactALIIMs &) = default ;
          ContactALIIMs& operator=(ContactALIIMs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contactALIIM_ == nullptr; };
          // contactALIIM Field Functions 
          bool hasContactALIIM() const { return this->contactALIIM_ != nullptr;};
          void deleteContactALIIM() { this->contactALIIM_ = nullptr;};
          inline const vector<string> & getContactALIIM() const { DARABONBA_PTR_GET_CONST(contactALIIM_, vector<string>) };
          inline vector<string> getContactALIIM() { DARABONBA_PTR_GET(contactALIIM_, vector<string>) };
          inline ContactALIIMs& setContactALIIM(const vector<string> & contactALIIM) { DARABONBA_PTR_SET_VALUE(contactALIIM_, contactALIIM) };
          inline ContactALIIMs& setContactALIIM(vector<string> && contactALIIM) { DARABONBA_PTR_SET_RVALUE(contactALIIM_, contactALIIM) };


        protected:
          shared_ptr<vector<string>> contactALIIM_ {};
        };

        virtual bool empty() const override { return this->alertTime_ == nullptr
        && this->contactALIIMs_ == nullptr && this->contactGroups_ == nullptr && this->contactMails_ == nullptr && this->contactSmses_ == nullptr && this->contacts_ == nullptr
        && this->dimensions_ == nullptr && this->evaluationCount_ == nullptr && this->expression_ == nullptr && this->groupId_ == nullptr && this->instanceName_ == nullptr
        && this->lastTime_ == nullptr && this->level_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->state_ == nullptr && this->status_ == nullptr && this->value_ == nullptr && this->webhooks_ == nullptr; };
        // alertTime Field Functions 
        bool hasAlertTime() const { return this->alertTime_ != nullptr;};
        void deleteAlertTime() { this->alertTime_ = nullptr;};
        inline int64_t getAlertTime() const { DARABONBA_PTR_GET_DEFAULT(alertTime_, 0L) };
        inline AlarmHistory& setAlertTime(int64_t alertTime) { DARABONBA_PTR_SET_VALUE(alertTime_, alertTime) };


        // contactALIIMs Field Functions 
        bool hasContactALIIMs() const { return this->contactALIIMs_ != nullptr;};
        void deleteContactALIIMs() { this->contactALIIMs_ = nullptr;};
        inline const AlarmHistory::ContactALIIMs & getContactALIIMs() const { DARABONBA_PTR_GET_CONST(contactALIIMs_, AlarmHistory::ContactALIIMs) };
        inline AlarmHistory::ContactALIIMs getContactALIIMs() { DARABONBA_PTR_GET(contactALIIMs_, AlarmHistory::ContactALIIMs) };
        inline AlarmHistory& setContactALIIMs(const AlarmHistory::ContactALIIMs & contactALIIMs) { DARABONBA_PTR_SET_VALUE(contactALIIMs_, contactALIIMs) };
        inline AlarmHistory& setContactALIIMs(AlarmHistory::ContactALIIMs && contactALIIMs) { DARABONBA_PTR_SET_RVALUE(contactALIIMs_, contactALIIMs) };


        // contactGroups Field Functions 
        bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
        void deleteContactGroups() { this->contactGroups_ = nullptr;};
        inline const AlarmHistory::ContactGroups & getContactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, AlarmHistory::ContactGroups) };
        inline AlarmHistory::ContactGroups getContactGroups() { DARABONBA_PTR_GET(contactGroups_, AlarmHistory::ContactGroups) };
        inline AlarmHistory& setContactGroups(const AlarmHistory::ContactGroups & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
        inline AlarmHistory& setContactGroups(AlarmHistory::ContactGroups && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


        // contactMails Field Functions 
        bool hasContactMails() const { return this->contactMails_ != nullptr;};
        void deleteContactMails() { this->contactMails_ = nullptr;};
        inline const AlarmHistory::ContactMails & getContactMails() const { DARABONBA_PTR_GET_CONST(contactMails_, AlarmHistory::ContactMails) };
        inline AlarmHistory::ContactMails getContactMails() { DARABONBA_PTR_GET(contactMails_, AlarmHistory::ContactMails) };
        inline AlarmHistory& setContactMails(const AlarmHistory::ContactMails & contactMails) { DARABONBA_PTR_SET_VALUE(contactMails_, contactMails) };
        inline AlarmHistory& setContactMails(AlarmHistory::ContactMails && contactMails) { DARABONBA_PTR_SET_RVALUE(contactMails_, contactMails) };


        // contactSmses Field Functions 
        bool hasContactSmses() const { return this->contactSmses_ != nullptr;};
        void deleteContactSmses() { this->contactSmses_ = nullptr;};
        inline const AlarmHistory::ContactSmses & getContactSmses() const { DARABONBA_PTR_GET_CONST(contactSmses_, AlarmHistory::ContactSmses) };
        inline AlarmHistory::ContactSmses getContactSmses() { DARABONBA_PTR_GET(contactSmses_, AlarmHistory::ContactSmses) };
        inline AlarmHistory& setContactSmses(const AlarmHistory::ContactSmses & contactSmses) { DARABONBA_PTR_SET_VALUE(contactSmses_, contactSmses) };
        inline AlarmHistory& setContactSmses(AlarmHistory::ContactSmses && contactSmses) { DARABONBA_PTR_SET_RVALUE(contactSmses_, contactSmses) };


        // contacts Field Functions 
        bool hasContacts() const { return this->contacts_ != nullptr;};
        void deleteContacts() { this->contacts_ = nullptr;};
        inline const AlarmHistory::Contacts & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, AlarmHistory::Contacts) };
        inline AlarmHistory::Contacts getContacts() { DARABONBA_PTR_GET(contacts_, AlarmHistory::Contacts) };
        inline AlarmHistory& setContacts(const AlarmHistory::Contacts & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
        inline AlarmHistory& setContacts(AlarmHistory::Contacts && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


        // dimensions Field Functions 
        bool hasDimensions() const { return this->dimensions_ != nullptr;};
        void deleteDimensions() { this->dimensions_ = nullptr;};
        inline string getDimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
        inline AlarmHistory& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


        // evaluationCount Field Functions 
        bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
        void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
        inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
        inline AlarmHistory& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
        inline AlarmHistory& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline AlarmHistory& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline AlarmHistory& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // lastTime Field Functions 
        bool hasLastTime() const { return this->lastTime_ != nullptr;};
        void deleteLastTime() { this->lastTime_ = nullptr;};
        inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
        inline AlarmHistory& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline AlarmHistory& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline AlarmHistory& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline AlarmHistory& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline AlarmHistory& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline AlarmHistory& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline AlarmHistory& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline AlarmHistory& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline AlarmHistory& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // webhooks Field Functions 
        bool hasWebhooks() const { return this->webhooks_ != nullptr;};
        void deleteWebhooks() { this->webhooks_ = nullptr;};
        inline string getWebhooks() const { DARABONBA_PTR_GET_DEFAULT(webhooks_, "") };
        inline AlarmHistory& setWebhooks(string webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };


      protected:
        // The timestamp when the alert was triggered. Unit: milliseconds.
        shared_ptr<int64_t> alertTime_ {};
        // The TradeManager IDs of the alert contacts.
        // 
        // > This parameter is valid only on the China site (aliyun.com).
        shared_ptr<AlarmHistory::ContactALIIMs> contactALIIMs_ {};
        // The alert contact groups.
        shared_ptr<AlarmHistory::ContactGroups> contactGroups_ {};
        // The email addresses of the alert contacts.
        shared_ptr<AlarmHistory::ContactMails> contactMails_ {};
        // The mobile numbers of the alert contacts.
        // 
        // > This parameter is valid only on the China site (aliyun.com).
        shared_ptr<AlarmHistory::ContactSmses> contactSmses_ {};
        // The alert contacts that receive alert notifications.
        shared_ptr<AlarmHistory::Contacts> contacts_ {};
        // The resources that are monitored.
        shared_ptr<string> dimensions_ {};
        // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered.
        shared_ptr<int32_t> evaluationCount_ {};
        // The expression that is used to trigger alerts.
        shared_ptr<string> expression_ {};
        // The ID of the application group.
        shared_ptr<string> groupId_ {};
        // The instance name.
        shared_ptr<string> instanceName_ {};
        // The duration of the alert. Unit: milliseconds.
        shared_ptr<int64_t> lastTime_ {};
        // The severity level and notification methods of the alert. Valid values:
        // 
        // *   P4: Alert notifications are sent by using emails and DingTalk chatbots.
        // *   OK: No alert is generated.
        shared_ptr<string> level_ {};
        // The metric name.
        shared_ptr<string> metricName_ {};
        // The namespace of the cloud service.
        shared_ptr<string> namespace_ {};
        // The ID of the alert rule.
        shared_ptr<string> ruleId_ {};
        // The name of the alert rule.
        shared_ptr<string> ruleName_ {};
        // The alert status. Valid values:
        // 
        // *   ALARM: Alerts are triggered.
        // *   OK: No alerts are triggered.
        shared_ptr<string> state_ {};
        // Indicates whether alerts are muted. Valid values:
        // 
        // *   2 (default): Alerts are muted and are not triggered within the mute period, even if the condition specified in the alert rule is met.
        // *   0: Alerts are triggered or cleared.
        // *   1: The alert rule is ineffective.
        shared_ptr<int32_t> status_ {};
        // The threshold of the metric value to trigger or clear an alert.
        shared_ptr<string> value_ {};
        // The callback URL.
        shared_ptr<string> webhooks_ {};
      };

      virtual bool empty() const override { return this->alarmHistory_ == nullptr; };
      // alarmHistory Field Functions 
      bool hasAlarmHistory() const { return this->alarmHistory_ != nullptr;};
      void deleteAlarmHistory() { this->alarmHistory_ = nullptr;};
      inline const vector<AlarmHistoryList::AlarmHistory> & getAlarmHistory() const { DARABONBA_PTR_GET_CONST(alarmHistory_, vector<AlarmHistoryList::AlarmHistory>) };
      inline vector<AlarmHistoryList::AlarmHistory> getAlarmHistory() { DARABONBA_PTR_GET(alarmHistory_, vector<AlarmHistoryList::AlarmHistory>) };
      inline AlarmHistoryList& setAlarmHistory(const vector<AlarmHistoryList::AlarmHistory> & alarmHistory) { DARABONBA_PTR_SET_VALUE(alarmHistory_, alarmHistory) };
      inline AlarmHistoryList& setAlarmHistory(vector<AlarmHistoryList::AlarmHistory> && alarmHistory) { DARABONBA_PTR_SET_RVALUE(alarmHistory_, alarmHistory) };


    protected:
      shared_ptr<vector<AlarmHistoryList::AlarmHistory>> alarmHistory_ {};
    };

    virtual bool empty() const override { return this->alarmHistoryList_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // alarmHistoryList Field Functions 
    bool hasAlarmHistoryList() const { return this->alarmHistoryList_ != nullptr;};
    void deleteAlarmHistoryList() { this->alarmHistoryList_ = nullptr;};
    inline const DescribeAlertHistoryListResponseBody::AlarmHistoryList & getAlarmHistoryList() const { DARABONBA_PTR_GET_CONST(alarmHistoryList_, DescribeAlertHistoryListResponseBody::AlarmHistoryList) };
    inline DescribeAlertHistoryListResponseBody::AlarmHistoryList getAlarmHistoryList() { DARABONBA_PTR_GET(alarmHistoryList_, DescribeAlertHistoryListResponseBody::AlarmHistoryList) };
    inline DescribeAlertHistoryListResponseBody& setAlarmHistoryList(const DescribeAlertHistoryListResponseBody::AlarmHistoryList & alarmHistoryList) { DARABONBA_PTR_SET_VALUE(alarmHistoryList_, alarmHistoryList) };
    inline DescribeAlertHistoryListResponseBody& setAlarmHistoryList(DescribeAlertHistoryListResponseBody::AlarmHistoryList && alarmHistoryList) { DARABONBA_PTR_SET_RVALUE(alarmHistoryList_, alarmHistoryList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAlertHistoryListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAlertHistoryListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlertHistoryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAlertHistoryListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline DescribeAlertHistoryListResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The details of historical alerts.
    shared_ptr<DescribeAlertHistoryListResponseBody::AlarmHistoryList> alarmHistoryList_ {};
    // The status code.
    // 
    // > The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<string> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
