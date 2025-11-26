// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTLGFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBEEBOTINTENTLGFREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateBeebotIntentLgfRequestLgfDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateBeebotIntentLgfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBeebotIntentLgfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LgfDefinition, lgfDefinition_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBeebotIntentLgfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LgfDefinition, lgfDefinition_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    CreateBeebotIntentLgfRequest() = default ;
    CreateBeebotIntentLgfRequest(const CreateBeebotIntentLgfRequest &) = default ;
    CreateBeebotIntentLgfRequest(CreateBeebotIntentLgfRequest &&) = default ;
    CreateBeebotIntentLgfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBeebotIntentLgfRequest() = default ;
    CreateBeebotIntentLgfRequest& operator=(const CreateBeebotIntentLgfRequest &) = default ;
    CreateBeebotIntentLgfRequest& operator=(CreateBeebotIntentLgfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->lgfDefinition_ == nullptr && return this->scriptId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBeebotIntentLgfRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lgfDefinition Field Functions 
    bool hasLgfDefinition() const { return this->lgfDefinition_ != nullptr;};
    void deleteLgfDefinition() { this->lgfDefinition_ = nullptr;};
    inline const CreateBeebotIntentLgfRequestLgfDefinition & lgfDefinition() const { DARABONBA_PTR_GET_CONST(lgfDefinition_, CreateBeebotIntentLgfRequestLgfDefinition) };
    inline CreateBeebotIntentLgfRequestLgfDefinition lgfDefinition() { DARABONBA_PTR_GET(lgfDefinition_, CreateBeebotIntentLgfRequestLgfDefinition) };
    inline CreateBeebotIntentLgfRequest& setLgfDefinition(const CreateBeebotIntentLgfRequestLgfDefinition & lgfDefinition) { DARABONBA_PTR_SET_VALUE(lgfDefinition_, lgfDefinition) };
    inline CreateBeebotIntentLgfRequest& setLgfDefinition(CreateBeebotIntentLgfRequestLgfDefinition && lgfDefinition) { DARABONBA_PTR_SET_RVALUE(lgfDefinition_, lgfDefinition) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateBeebotIntentLgfRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateBeebotIntentLgfRequestLgfDefinition> lgfDefinition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
