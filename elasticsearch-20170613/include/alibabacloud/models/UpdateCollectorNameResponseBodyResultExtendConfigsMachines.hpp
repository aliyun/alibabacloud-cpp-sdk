// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOLLECTORNAMERESPONSEBODYRESULTEXTENDCONFIGSMACHINES_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOLLECTORNAMERESPONSEBODYRESULTEXTENDCONFIGSMACHINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateCollectorNameResponseBodyResultExtendConfigsMachines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCollectorNameResponseBodyResultExtendConfigsMachines& obj) { 
      DARABONBA_PTR_TO_JSON(agentStatus, agentStatus_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCollectorNameResponseBodyResultExtendConfigsMachines& obj) { 
      DARABONBA_PTR_FROM_JSON(agentStatus, agentStatus_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
    };
    UpdateCollectorNameResponseBodyResultExtendConfigsMachines() = default ;
    UpdateCollectorNameResponseBodyResultExtendConfigsMachines(const UpdateCollectorNameResponseBodyResultExtendConfigsMachines &) = default ;
    UpdateCollectorNameResponseBodyResultExtendConfigsMachines(UpdateCollectorNameResponseBodyResultExtendConfigsMachines &&) = default ;
    UpdateCollectorNameResponseBodyResultExtendConfigsMachines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCollectorNameResponseBodyResultExtendConfigsMachines() = default ;
    UpdateCollectorNameResponseBodyResultExtendConfigsMachines& operator=(const UpdateCollectorNameResponseBodyResultExtendConfigsMachines &) = default ;
    UpdateCollectorNameResponseBodyResultExtendConfigsMachines& operator=(UpdateCollectorNameResponseBodyResultExtendConfigsMachines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentStatus_ != nullptr
        && this->instanceId_ != nullptr; };
    // agentStatus Field Functions 
    bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
    void deleteAgentStatus() { this->agentStatus_ = nullptr;};
    inline string agentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
    inline UpdateCollectorNameResponseBodyResultExtendConfigsMachines& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateCollectorNameResponseBodyResultExtendConfigsMachines& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The status of the shipper on the ECS instance. Valid values: **heartOk**, **heartLost**, **uninstalled**, and **failed**.
    std::shared_ptr<string> agentStatus_ = nullptr;
    // The IDs of the ECS instances.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
