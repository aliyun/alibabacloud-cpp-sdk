// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTSRESPONSEBODYINSTANCESTATUSESINSTANCESTATUS_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTSRESPONSEBODYINSTANCESTATUSESINSTANCESTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateClientsResponseBodyInstanceStatusesInstanceStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientsResponseBodyInstanceStatusesInstanceStatus& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ValidInstance, validInstance_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClientsResponseBodyInstanceStatusesInstanceStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ValidInstance, validInstance_);
    };
    CreateClientsResponseBodyInstanceStatusesInstanceStatus() = default ;
    CreateClientsResponseBodyInstanceStatusesInstanceStatus(const CreateClientsResponseBodyInstanceStatusesInstanceStatus &) = default ;
    CreateClientsResponseBodyInstanceStatusesInstanceStatus(CreateClientsResponseBodyInstanceStatusesInstanceStatus &&) = default ;
    CreateClientsResponseBodyInstanceStatusesInstanceStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientsResponseBodyInstanceStatusesInstanceStatus() = default ;
    CreateClientsResponseBodyInstanceStatusesInstanceStatus& operator=(const CreateClientsResponseBodyInstanceStatusesInstanceStatus &) = default ;
    CreateClientsResponseBodyInstanceStatusesInstanceStatus& operator=(CreateClientsResponseBodyInstanceStatusesInstanceStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->validInstance_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateClientsResponseBodyInstanceStatusesInstanceStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // validInstance Field Functions 
    bool hasValidInstance() const { return this->validInstance_ != nullptr;};
    void deleteValidInstance() { this->validInstance_ = nullptr;};
    inline bool validInstance() const { DARABONBA_PTR_GET_DEFAULT(validInstance_, false) };
    inline CreateClientsResponseBodyInstanceStatusesInstanceStatus& setValidInstance(bool validInstance) { DARABONBA_PTR_SET_VALUE(validInstance_, validInstance) };


  protected:
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether an HBR client can be installed on the ECS instance. Valid values:
    // 
    // *   true: An HBR client can be installed on the ECS instance.
    // *   false: An HBR client cannot be installed on the ECS instance.
    std::shared_ptr<bool> validInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
