// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyBeebotIntentRequestIntentDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyBeebotIntentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBeebotIntentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentDefinition, intentDefinition_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBeebotIntentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentDefinition, intentDefinition_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    ModifyBeebotIntentRequest() = default ;
    ModifyBeebotIntentRequest(const ModifyBeebotIntentRequest &) = default ;
    ModifyBeebotIntentRequest(ModifyBeebotIntentRequest &&) = default ;
    ModifyBeebotIntentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBeebotIntentRequest() = default ;
    ModifyBeebotIntentRequest& operator=(const ModifyBeebotIntentRequest &) = default ;
    ModifyBeebotIntentRequest& operator=(ModifyBeebotIntentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->intentDefinition_ == nullptr && return this->intentId_ == nullptr && return this->scriptId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyBeebotIntentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentDefinition Field Functions 
    bool hasIntentDefinition() const { return this->intentDefinition_ != nullptr;};
    void deleteIntentDefinition() { this->intentDefinition_ = nullptr;};
    inline const ModifyBeebotIntentRequestIntentDefinition & intentDefinition() const { DARABONBA_PTR_GET_CONST(intentDefinition_, ModifyBeebotIntentRequestIntentDefinition) };
    inline ModifyBeebotIntentRequestIntentDefinition intentDefinition() { DARABONBA_PTR_GET(intentDefinition_, ModifyBeebotIntentRequestIntentDefinition) };
    inline ModifyBeebotIntentRequest& setIntentDefinition(const ModifyBeebotIntentRequestIntentDefinition & intentDefinition) { DARABONBA_PTR_SET_VALUE(intentDefinition_, intentDefinition) };
    inline ModifyBeebotIntentRequest& setIntentDefinition(ModifyBeebotIntentRequestIntentDefinition && intentDefinition) { DARABONBA_PTR_SET_RVALUE(intentDefinition_, intentDefinition) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline ModifyBeebotIntentRequest& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyBeebotIntentRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ModifyBeebotIntentRequestIntentDefinition> intentDefinition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> intentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
