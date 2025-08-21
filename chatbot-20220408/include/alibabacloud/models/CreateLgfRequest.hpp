// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELGFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELGFREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLgfRequestLgfDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateLgfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLgfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LgfDefinition, lgfDefinition_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLgfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LgfDefinition, lgfDefinition_);
    };
    CreateLgfRequest() = default ;
    CreateLgfRequest(const CreateLgfRequest &) = default ;
    CreateLgfRequest(CreateLgfRequest &&) = default ;
    CreateLgfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLgfRequest() = default ;
    CreateLgfRequest& operator=(const CreateLgfRequest &) = default ;
    CreateLgfRequest& operator=(CreateLgfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->instanceId_ != nullptr && this->lgfDefinition_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreateLgfRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateLgfRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lgfDefinition Field Functions 
    bool hasLgfDefinition() const { return this->lgfDefinition_ != nullptr;};
    void deleteLgfDefinition() { this->lgfDefinition_ = nullptr;};
    inline const CreateLgfRequestLgfDefinition & lgfDefinition() const { DARABONBA_PTR_GET_CONST(lgfDefinition_, CreateLgfRequestLgfDefinition) };
    inline CreateLgfRequestLgfDefinition lgfDefinition() { DARABONBA_PTR_GET(lgfDefinition_, CreateLgfRequestLgfDefinition) };
    inline CreateLgfRequest& setLgfDefinition(const CreateLgfRequestLgfDefinition & lgfDefinition) { DARABONBA_PTR_SET_VALUE(lgfDefinition_, lgfDefinition) };
    inline CreateLgfRequest& setLgfDefinition(CreateLgfRequestLgfDefinition && lgfDefinition) { DARABONBA_PTR_SET_RVALUE(lgfDefinition_, lgfDefinition) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<CreateLgfRequestLgfDefinition> lgfDefinition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
