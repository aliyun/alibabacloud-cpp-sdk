// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELGFSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELGFSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateLgfShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLgfShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LgfDefinition, lgfDefinitionShrink_);
      DARABONBA_PTR_TO_JSON(LgfId, lgfId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLgfShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LgfDefinition, lgfDefinitionShrink_);
      DARABONBA_PTR_FROM_JSON(LgfId, lgfId_);
    };
    UpdateLgfShrinkRequest() = default ;
    UpdateLgfShrinkRequest(const UpdateLgfShrinkRequest &) = default ;
    UpdateLgfShrinkRequest(UpdateLgfShrinkRequest &&) = default ;
    UpdateLgfShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLgfShrinkRequest() = default ;
    UpdateLgfShrinkRequest& operator=(const UpdateLgfShrinkRequest &) = default ;
    UpdateLgfShrinkRequest& operator=(UpdateLgfShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->instanceId_ == nullptr && return this->lgfDefinitionShrink_ == nullptr && return this->lgfId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateLgfShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateLgfShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lgfDefinitionShrink Field Functions 
    bool hasLgfDefinitionShrink() const { return this->lgfDefinitionShrink_ != nullptr;};
    void deleteLgfDefinitionShrink() { this->lgfDefinitionShrink_ = nullptr;};
    inline string lgfDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(lgfDefinitionShrink_, "") };
    inline UpdateLgfShrinkRequest& setLgfDefinitionShrink(string lgfDefinitionShrink) { DARABONBA_PTR_SET_VALUE(lgfDefinitionShrink_, lgfDefinitionShrink) };


    // lgfId Field Functions 
    bool hasLgfId() const { return this->lgfId_ != nullptr;};
    void deleteLgfId() { this->lgfId_ = nullptr;};
    inline int64_t lgfId() const { DARABONBA_PTR_GET_DEFAULT(lgfId_, 0L) };
    inline UpdateLgfShrinkRequest& setLgfId(int64_t lgfId) { DARABONBA_PTR_SET_VALUE(lgfId_, lgfId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> lgfDefinitionShrink_ = nullptr;
    // LGF ID
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> lgfId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
