// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORNOTIFYALERT_HPP_
#define ALIBABACLOUD_MODELS_MONITORNOTIFYALERT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MonitorContactGroup.hpp>
#include <alibabacloud/models/MonitorContact.hpp>
#include <alibabacloud/models/MonitorWebhook.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorNotifyAlert : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorNotifyAlert& obj) { 
      DARABONBA_PTR_TO_JSON(contactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(contacts, contacts_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(notifyChannels, notifyChannels_);
      DARABONBA_PTR_TO_JSON(ruleNames, ruleNames_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(webhooks, webhooks_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorNotifyAlert& obj) { 
      DARABONBA_PTR_FROM_JSON(contactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(notifyChannels, notifyChannels_);
      DARABONBA_PTR_FROM_JSON(ruleNames, ruleNames_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(webhooks, webhooks_);
    };
    MonitorNotifyAlert() = default ;
    MonitorNotifyAlert(const MonitorNotifyAlert &) = default ;
    MonitorNotifyAlert(MonitorNotifyAlert &&) = default ;
    MonitorNotifyAlert(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorNotifyAlert() = default ;
    MonitorNotifyAlert& operator=(const MonitorNotifyAlert &) = default ;
    MonitorNotifyAlert& operator=(MonitorNotifyAlert &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroups_ == nullptr
        && this->contacts_ == nullptr && this->endTime_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->notifyChannels_ == nullptr
        && this->ruleNames_ == nullptr && this->startTime_ == nullptr && this->type_ == nullptr && this->webhooks_ == nullptr; };
    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const vector<MonitorContactGroup> & getContactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, vector<MonitorContactGroup>) };
    inline vector<MonitorContactGroup> getContactGroups() { DARABONBA_PTR_GET(contactGroups_, vector<MonitorContactGroup>) };
    inline MonitorNotifyAlert& setContactGroups(const vector<MonitorContactGroup> & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline MonitorNotifyAlert& setContactGroups(vector<MonitorContactGroup> && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<MonitorContact> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<MonitorContact>) };
    inline vector<MonitorContact> getContacts() { DARABONBA_PTR_GET(contacts_, vector<MonitorContact>) };
    inline MonitorNotifyAlert& setContacts(const vector<MonitorContact> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline MonitorNotifyAlert& setContacts(vector<MonitorContact> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline MonitorNotifyAlert& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MonitorNotifyAlert& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MonitorNotifyAlert& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyChannels Field Functions 
    bool hasNotifyChannels() const { return this->notifyChannels_ != nullptr;};
    void deleteNotifyChannels() { this->notifyChannels_ = nullptr;};
    inline const vector<string> & getNotifyChannels() const { DARABONBA_PTR_GET_CONST(notifyChannels_, vector<string>) };
    inline vector<string> getNotifyChannels() { DARABONBA_PTR_GET(notifyChannels_, vector<string>) };
    inline MonitorNotifyAlert& setNotifyChannels(const vector<string> & notifyChannels) { DARABONBA_PTR_SET_VALUE(notifyChannels_, notifyChannels) };
    inline MonitorNotifyAlert& setNotifyChannels(vector<string> && notifyChannels) { DARABONBA_PTR_SET_RVALUE(notifyChannels_, notifyChannels) };


    // ruleNames Field Functions 
    bool hasRuleNames() const { return this->ruleNames_ != nullptr;};
    void deleteRuleNames() { this->ruleNames_ = nullptr;};
    inline const vector<string> & getRuleNames() const { DARABONBA_PTR_GET_CONST(ruleNames_, vector<string>) };
    inline vector<string> getRuleNames() { DARABONBA_PTR_GET(ruleNames_, vector<string>) };
    inline MonitorNotifyAlert& setRuleNames(const vector<string> & ruleNames) { DARABONBA_PTR_SET_VALUE(ruleNames_, ruleNames) };
    inline MonitorNotifyAlert& setRuleNames(vector<string> && ruleNames) { DARABONBA_PTR_SET_RVALUE(ruleNames_, ruleNames) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline MonitorNotifyAlert& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MonitorNotifyAlert& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // webhooks Field Functions 
    bool hasWebhooks() const { return this->webhooks_ != nullptr;};
    void deleteWebhooks() { this->webhooks_ = nullptr;};
    inline const vector<MonitorWebhook> & getWebhooks() const { DARABONBA_PTR_GET_CONST(webhooks_, vector<MonitorWebhook>) };
    inline vector<MonitorWebhook> getWebhooks() { DARABONBA_PTR_GET(webhooks_, vector<MonitorWebhook>) };
    inline MonitorNotifyAlert& setWebhooks(const vector<MonitorWebhook> & webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };
    inline MonitorNotifyAlert& setWebhooks(vector<MonitorWebhook> && webhooks) { DARABONBA_PTR_SET_RVALUE(webhooks_, webhooks) };


  protected:
    shared_ptr<vector<MonitorContactGroup>> contactGroups_ {};
    shared_ptr<vector<MonitorContact>> contacts_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<string>> notifyChannels_ {};
    shared_ptr<vector<string>> ruleNames_ {};
    shared_ptr<string> startTime_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
    shared_ptr<vector<MonitorWebhook>> webhooks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
