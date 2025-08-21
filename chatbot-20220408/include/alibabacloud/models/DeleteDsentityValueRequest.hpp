// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDSENTITYVALUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDSENTITYVALUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DeleteDSEntityValueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDSEntityValueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityValueId, entityValueId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDSEntityValueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityValueId, entityValueId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteDSEntityValueRequest() = default ;
    DeleteDSEntityValueRequest(const DeleteDSEntityValueRequest &) = default ;
    DeleteDSEntityValueRequest(DeleteDSEntityValueRequest &&) = default ;
    DeleteDSEntityValueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDSEntityValueRequest() = default ;
    DeleteDSEntityValueRequest& operator=(const DeleteDSEntityValueRequest &) = default ;
    DeleteDSEntityValueRequest& operator=(DeleteDSEntityValueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->entityId_ != nullptr && this->entityValueId_ != nullptr && this->instanceId_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline DeleteDSEntityValueRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline DeleteDSEntityValueRequest& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityValueId Field Functions 
    bool hasEntityValueId() const { return this->entityValueId_ != nullptr;};
    void deleteEntityValueId() { this->entityValueId_ = nullptr;};
    inline int64_t entityValueId() const { DARABONBA_PTR_GET_DEFAULT(entityValueId_, 0L) };
    inline DeleteDSEntityValueRequest& setEntityValueId(int64_t entityValueId) { DARABONBA_PTR_SET_VALUE(entityValueId_, entityValueId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteDSEntityValueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> entityId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> entityValueId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
