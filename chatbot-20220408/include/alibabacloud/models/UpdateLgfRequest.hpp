// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELGFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELGFREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLgfRequestLgfDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateLgfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLgfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LgfDefinition, lgfDefinition_);
      DARABONBA_PTR_TO_JSON(LgfId, lgfId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLgfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LgfDefinition, lgfDefinition_);
      DARABONBA_PTR_FROM_JSON(LgfId, lgfId_);
    };
    UpdateLgfRequest() = default ;
    UpdateLgfRequest(const UpdateLgfRequest &) = default ;
    UpdateLgfRequest(UpdateLgfRequest &&) = default ;
    UpdateLgfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLgfRequest() = default ;
    UpdateLgfRequest& operator=(const UpdateLgfRequest &) = default ;
    UpdateLgfRequest& operator=(UpdateLgfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->instanceId_ == nullptr && return this->lgfDefinition_ == nullptr && return this->lgfId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateLgfRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateLgfRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lgfDefinition Field Functions 
    bool hasLgfDefinition() const { return this->lgfDefinition_ != nullptr;};
    void deleteLgfDefinition() { this->lgfDefinition_ = nullptr;};
    inline const UpdateLgfRequestLgfDefinition & lgfDefinition() const { DARABONBA_PTR_GET_CONST(lgfDefinition_, UpdateLgfRequestLgfDefinition) };
    inline UpdateLgfRequestLgfDefinition lgfDefinition() { DARABONBA_PTR_GET(lgfDefinition_, UpdateLgfRequestLgfDefinition) };
    inline UpdateLgfRequest& setLgfDefinition(const UpdateLgfRequestLgfDefinition & lgfDefinition) { DARABONBA_PTR_SET_VALUE(lgfDefinition_, lgfDefinition) };
    inline UpdateLgfRequest& setLgfDefinition(UpdateLgfRequestLgfDefinition && lgfDefinition) { DARABONBA_PTR_SET_RVALUE(lgfDefinition_, lgfDefinition) };


    // lgfId Field Functions 
    bool hasLgfId() const { return this->lgfId_ != nullptr;};
    void deleteLgfId() { this->lgfId_ = nullptr;};
    inline int64_t lgfId() const { DARABONBA_PTR_GET_DEFAULT(lgfId_, 0L) };
    inline UpdateLgfRequest& setLgfId(int64_t lgfId) { DARABONBA_PTR_SET_VALUE(lgfId_, lgfId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<UpdateLgfRequestLgfDefinition> lgfDefinition_ = nullptr;
    // LGF ID
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> lgfId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
