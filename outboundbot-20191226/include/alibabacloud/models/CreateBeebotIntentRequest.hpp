// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateBeebotIntentRequestIntentDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateBeebotIntentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBeebotIntentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentDefinition, intentDefinition_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBeebotIntentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentDefinition, intentDefinition_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    CreateBeebotIntentRequest() = default ;
    CreateBeebotIntentRequest(const CreateBeebotIntentRequest &) = default ;
    CreateBeebotIntentRequest(CreateBeebotIntentRequest &&) = default ;
    CreateBeebotIntentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBeebotIntentRequest() = default ;
    CreateBeebotIntentRequest& operator=(const CreateBeebotIntentRequest &) = default ;
    CreateBeebotIntentRequest& operator=(CreateBeebotIntentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->intentDefinition_ == nullptr && return this->scriptId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBeebotIntentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentDefinition Field Functions 
    bool hasIntentDefinition() const { return this->intentDefinition_ != nullptr;};
    void deleteIntentDefinition() { this->intentDefinition_ = nullptr;};
    inline const CreateBeebotIntentRequestIntentDefinition & intentDefinition() const { DARABONBA_PTR_GET_CONST(intentDefinition_, CreateBeebotIntentRequestIntentDefinition) };
    inline CreateBeebotIntentRequestIntentDefinition intentDefinition() { DARABONBA_PTR_GET(intentDefinition_, CreateBeebotIntentRequestIntentDefinition) };
    inline CreateBeebotIntentRequest& setIntentDefinition(const CreateBeebotIntentRequestIntentDefinition & intentDefinition) { DARABONBA_PTR_SET_VALUE(intentDefinition_, intentDefinition) };
    inline CreateBeebotIntentRequest& setIntentDefinition(CreateBeebotIntentRequestIntentDefinition && intentDefinition) { DARABONBA_PTR_SET_RVALUE(intentDefinition_, intentDefinition) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateBeebotIntentRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateBeebotIntentRequestIntentDefinition> intentDefinition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
