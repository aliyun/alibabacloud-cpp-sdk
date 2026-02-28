// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTICHANNELRECORDINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTICHANNELRECORDINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListMultiChannelRecordingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiChannelRecordingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentChannelId, agentChannelId_);
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiChannelRecordingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentChannelId, agentChannelId_);
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ListMultiChannelRecordingsRequest() = default ;
    ListMultiChannelRecordingsRequest(const ListMultiChannelRecordingsRequest &) = default ;
    ListMultiChannelRecordingsRequest(ListMultiChannelRecordingsRequest &&) = default ;
    ListMultiChannelRecordingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiChannelRecordingsRequest() = default ;
    ListMultiChannelRecordingsRequest& operator=(const ListMultiChannelRecordingsRequest &) = default ;
    ListMultiChannelRecordingsRequest& operator=(ListMultiChannelRecordingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentChannelId_ == nullptr
        && this->agentId_ == nullptr && this->contactId_ == nullptr && this->instanceId_ == nullptr; };
    // agentChannelId Field Functions 
    bool hasAgentChannelId() const { return this->agentChannelId_ != nullptr;};
    void deleteAgentChannelId() { this->agentChannelId_ = nullptr;};
    inline string getAgentChannelId() const { DARABONBA_PTR_GET_DEFAULT(agentChannelId_, "") };
    inline ListMultiChannelRecordingsRequest& setAgentChannelId(string agentChannelId) { DARABONBA_PTR_SET_VALUE(agentChannelId_, agentChannelId) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListMultiChannelRecordingsRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ListMultiChannelRecordingsRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListMultiChannelRecordingsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<string> agentChannelId_ {};
    shared_ptr<string> agentId_ {};
    // This parameter is required.
    shared_ptr<string> contactId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
