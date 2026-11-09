// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASTERRECOVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISASTERRECOVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class DisasterRecoveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisasterRecoveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RecoveryInstanceId, recoveryInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DisasterRecoveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RecoveryInstanceId, recoveryInstanceId_);
    };
    DisasterRecoveryRequest() = default ;
    DisasterRecoveryRequest(const DisasterRecoveryRequest &) = default ;
    DisasterRecoveryRequest(DisasterRecoveryRequest &&) = default ;
    DisasterRecoveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisasterRecoveryRequest() = default ;
    DisasterRecoveryRequest& operator=(const DisasterRecoveryRequest &) = default ;
    DisasterRecoveryRequest& operator=(DisasterRecoveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->recoveryInstanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisasterRecoveryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // recoveryInstanceId Field Functions 
    bool hasRecoveryInstanceId() const { return this->recoveryInstanceId_ != nullptr;};
    void deleteRecoveryInstanceId() { this->recoveryInstanceId_ = nullptr;};
    inline string getRecoveryInstanceId() const { DARABONBA_PTR_GET_DEFAULT(recoveryInstanceId_, "") };
    inline DisasterRecoveryRequest& setRecoveryInstanceId(string recoveryInstanceId) { DARABONBA_PTR_SET_VALUE(recoveryInstanceId_, recoveryInstanceId) };


  protected:
    // The ID of the ApsaraMQ for MQTT instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the instance to recover.
    // 
    // This parameter is required.
    shared_ptr<string> recoveryInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
