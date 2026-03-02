// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORNOTIFYOBJECTRESULT_HPP_
#define ALIBABACLOUD_MODELS_MONITORNOTIFYOBJECTRESULT_HPP_
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
  class MonitorNotifyObjectResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorNotifyObjectResult& obj) { 
      DARABONBA_PTR_TO_JSON(contactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(contacts, contacts_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(webhooks, webhooks_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorNotifyObjectResult& obj) { 
      DARABONBA_PTR_FROM_JSON(contactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(webhooks, webhooks_);
    };
    MonitorNotifyObjectResult() = default ;
    MonitorNotifyObjectResult(const MonitorNotifyObjectResult &) = default ;
    MonitorNotifyObjectResult(MonitorNotifyObjectResult &&) = default ;
    MonitorNotifyObjectResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorNotifyObjectResult() = default ;
    MonitorNotifyObjectResult& operator=(const MonitorNotifyObjectResult &) = default ;
    MonitorNotifyObjectResult& operator=(MonitorNotifyObjectResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroups_ == nullptr
        && this->contacts_ == nullptr && this->requestId_ == nullptr && this->webhooks_ == nullptr; };
    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const vector<MonitorContactGroup> & getContactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, vector<MonitorContactGroup>) };
    inline vector<MonitorContactGroup> getContactGroups() { DARABONBA_PTR_GET(contactGroups_, vector<MonitorContactGroup>) };
    inline MonitorNotifyObjectResult& setContactGroups(const vector<MonitorContactGroup> & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline MonitorNotifyObjectResult& setContactGroups(vector<MonitorContactGroup> && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<MonitorContact> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<MonitorContact>) };
    inline vector<MonitorContact> getContacts() { DARABONBA_PTR_GET(contacts_, vector<MonitorContact>) };
    inline MonitorNotifyObjectResult& setContacts(const vector<MonitorContact> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline MonitorNotifyObjectResult& setContacts(vector<MonitorContact> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MonitorNotifyObjectResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webhooks Field Functions 
    bool hasWebhooks() const { return this->webhooks_ != nullptr;};
    void deleteWebhooks() { this->webhooks_ = nullptr;};
    inline const vector<MonitorWebhook> & getWebhooks() const { DARABONBA_PTR_GET_CONST(webhooks_, vector<MonitorWebhook>) };
    inline vector<MonitorWebhook> getWebhooks() { DARABONBA_PTR_GET(webhooks_, vector<MonitorWebhook>) };
    inline MonitorNotifyObjectResult& setWebhooks(const vector<MonitorWebhook> & webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };
    inline MonitorNotifyObjectResult& setWebhooks(vector<MonitorWebhook> && webhooks) { DARABONBA_PTR_SET_RVALUE(webhooks_, webhooks) };


  protected:
    shared_ptr<vector<MonitorContactGroup>> contactGroups_ {};
    shared_ptr<vector<MonitorContact>> contacts_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<MonitorWebhook>> webhooks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
