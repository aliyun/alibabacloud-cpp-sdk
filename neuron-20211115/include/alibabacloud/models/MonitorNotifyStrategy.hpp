// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORNOTIFYSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_MONITORNOTIFYSTRATEGY_HPP_
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
  class MonitorNotifyStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorNotifyStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(channels, channels_);
      DARABONBA_PTR_TO_JSON(contactGroupIds, contactGroupIds_);
      DARABONBA_PTR_TO_JSON(contactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(contactIds, contactIds_);
      DARABONBA_PTR_TO_JSON(contacts, contacts_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(webhookIds, webhookIds_);
      DARABONBA_PTR_TO_JSON(webhooks, webhooks_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorNotifyStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(channels, channels_);
      DARABONBA_PTR_FROM_JSON(contactGroupIds, contactGroupIds_);
      DARABONBA_PTR_FROM_JSON(contactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(contactIds, contactIds_);
      DARABONBA_PTR_FROM_JSON(contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(webhookIds, webhookIds_);
      DARABONBA_PTR_FROM_JSON(webhooks, webhooks_);
    };
    MonitorNotifyStrategy() = default ;
    MonitorNotifyStrategy(const MonitorNotifyStrategy &) = default ;
    MonitorNotifyStrategy(MonitorNotifyStrategy &&) = default ;
    MonitorNotifyStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorNotifyStrategy() = default ;
    MonitorNotifyStrategy& operator=(const MonitorNotifyStrategy &) = default ;
    MonitorNotifyStrategy& operator=(MonitorNotifyStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channels_ == nullptr
        && this->contactGroupIds_ == nullptr && this->contactGroups_ == nullptr && this->contactIds_ == nullptr && this->contacts_ == nullptr && this->endTime_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->webhookIds_ == nullptr
        && this->webhooks_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<string> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<string>) };
    inline vector<string> getChannels() { DARABONBA_PTR_GET(channels_, vector<string>) };
    inline MonitorNotifyStrategy& setChannels(const vector<string> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline MonitorNotifyStrategy& setChannels(vector<string> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // contactGroupIds Field Functions 
    bool hasContactGroupIds() const { return this->contactGroupIds_ != nullptr;};
    void deleteContactGroupIds() { this->contactGroupIds_ = nullptr;};
    inline const vector<int64_t> & getContactGroupIds() const { DARABONBA_PTR_GET_CONST(contactGroupIds_, vector<int64_t>) };
    inline vector<int64_t> getContactGroupIds() { DARABONBA_PTR_GET(contactGroupIds_, vector<int64_t>) };
    inline MonitorNotifyStrategy& setContactGroupIds(const vector<int64_t> & contactGroupIds) { DARABONBA_PTR_SET_VALUE(contactGroupIds_, contactGroupIds) };
    inline MonitorNotifyStrategy& setContactGroupIds(vector<int64_t> && contactGroupIds) { DARABONBA_PTR_SET_RVALUE(contactGroupIds_, contactGroupIds) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const vector<MonitorContactGroup> & getContactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, vector<MonitorContactGroup>) };
    inline vector<MonitorContactGroup> getContactGroups() { DARABONBA_PTR_GET(contactGroups_, vector<MonitorContactGroup>) };
    inline MonitorNotifyStrategy& setContactGroups(const vector<MonitorContactGroup> & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline MonitorNotifyStrategy& setContactGroups(vector<MonitorContactGroup> && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline const vector<int64_t> & getContactIds() const { DARABONBA_PTR_GET_CONST(contactIds_, vector<int64_t>) };
    inline vector<int64_t> getContactIds() { DARABONBA_PTR_GET(contactIds_, vector<int64_t>) };
    inline MonitorNotifyStrategy& setContactIds(const vector<int64_t> & contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };
    inline MonitorNotifyStrategy& setContactIds(vector<int64_t> && contactIds) { DARABONBA_PTR_SET_RVALUE(contactIds_, contactIds) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<MonitorContact> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<MonitorContact>) };
    inline vector<MonitorContact> getContacts() { DARABONBA_PTR_GET(contacts_, vector<MonitorContact>) };
    inline MonitorNotifyStrategy& setContacts(const vector<MonitorContact> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline MonitorNotifyStrategy& setContacts(vector<MonitorContact> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline MonitorNotifyStrategy& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MonitorNotifyStrategy& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MonitorNotifyStrategy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MonitorNotifyStrategy& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline MonitorNotifyStrategy& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // webhookIds Field Functions 
    bool hasWebhookIds() const { return this->webhookIds_ != nullptr;};
    void deleteWebhookIds() { this->webhookIds_ = nullptr;};
    inline const vector<int64_t> & getWebhookIds() const { DARABONBA_PTR_GET_CONST(webhookIds_, vector<int64_t>) };
    inline vector<int64_t> getWebhookIds() { DARABONBA_PTR_GET(webhookIds_, vector<int64_t>) };
    inline MonitorNotifyStrategy& setWebhookIds(const vector<int64_t> & webhookIds) { DARABONBA_PTR_SET_VALUE(webhookIds_, webhookIds) };
    inline MonitorNotifyStrategy& setWebhookIds(vector<int64_t> && webhookIds) { DARABONBA_PTR_SET_RVALUE(webhookIds_, webhookIds) };


    // webhooks Field Functions 
    bool hasWebhooks() const { return this->webhooks_ != nullptr;};
    void deleteWebhooks() { this->webhooks_ = nullptr;};
    inline const vector<MonitorWebhook> & getWebhooks() const { DARABONBA_PTR_GET_CONST(webhooks_, vector<MonitorWebhook>) };
    inline vector<MonitorWebhook> getWebhooks() { DARABONBA_PTR_GET(webhooks_, vector<MonitorWebhook>) };
    inline MonitorNotifyStrategy& setWebhooks(const vector<MonitorWebhook> & webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };
    inline MonitorNotifyStrategy& setWebhooks(vector<MonitorWebhook> && webhooks) { DARABONBA_PTR_SET_RVALUE(webhooks_, webhooks) };


  protected:
    shared_ptr<vector<string>> channels_ {};
    shared_ptr<vector<int64_t>> contactGroupIds_ {};
    shared_ptr<vector<MonitorContactGroup>> contactGroups_ {};
    shared_ptr<vector<int64_t>> contactIds_ {};
    shared_ptr<vector<MonitorContact>> contacts_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<vector<int64_t>> webhookIds_ {};
    shared_ptr<vector<MonitorWebhook>> webhooks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
