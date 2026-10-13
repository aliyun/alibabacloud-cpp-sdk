// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMSCRIPTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMSCRIPTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DeleteCustomScriptTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomScriptTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentProfileId, agentProfileId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomScriptTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentProfileId, agentProfileId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteCustomScriptTemplateRequest() = default ;
    DeleteCustomScriptTemplateRequest(const DeleteCustomScriptTemplateRequest &) = default ;
    DeleteCustomScriptTemplateRequest(DeleteCustomScriptTemplateRequest &&) = default ;
    DeleteCustomScriptTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomScriptTemplateRequest() = default ;
    DeleteCustomScriptTemplateRequest& operator=(const DeleteCustomScriptTemplateRequest &) = default ;
    DeleteCustomScriptTemplateRequest& operator=(DeleteCustomScriptTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentProfileId_ == nullptr
        && this->instanceId_ == nullptr; };
    // agentProfileId Field Functions 
    bool hasAgentProfileId() const { return this->agentProfileId_ != nullptr;};
    void deleteAgentProfileId() { this->agentProfileId_ = nullptr;};
    inline string getAgentProfileId() const { DARABONBA_PTR_GET_DEFAULT(agentProfileId_, "") };
    inline DeleteCustomScriptTemplateRequest& setAgentProfileId(string agentProfileId) { DARABONBA_PTR_SET_VALUE(agentProfileId_, agentProfileId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteCustomScriptTemplateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the custom scenario template.
    shared_ptr<string> agentProfileId_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
