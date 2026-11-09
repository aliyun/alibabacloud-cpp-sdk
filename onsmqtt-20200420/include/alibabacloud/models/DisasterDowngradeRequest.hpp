// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASTERDOWNGRADEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISASTERDOWNGRADEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class DisasterDowngradeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisasterDowngradeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DowngradeInstanceId, downgradeInstanceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DisasterDowngradeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DowngradeInstanceId, downgradeInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DisasterDowngradeRequest() = default ;
    DisasterDowngradeRequest(const DisasterDowngradeRequest &) = default ;
    DisasterDowngradeRequest(DisasterDowngradeRequest &&) = default ;
    DisasterDowngradeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisasterDowngradeRequest() = default ;
    DisasterDowngradeRequest& operator=(const DisasterDowngradeRequest &) = default ;
    DisasterDowngradeRequest& operator=(DisasterDowngradeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downgradeInstanceId_ == nullptr
        && this->instanceId_ == nullptr; };
    // downgradeInstanceId Field Functions 
    bool hasDowngradeInstanceId() const { return this->downgradeInstanceId_ != nullptr;};
    void deleteDowngradeInstanceId() { this->downgradeInstanceId_ = nullptr;};
    inline string getDowngradeInstanceId() const { DARABONBA_PTR_GET_DEFAULT(downgradeInstanceId_, "") };
    inline DisasterDowngradeRequest& setDowngradeInstanceId(string downgradeInstanceId) { DARABONBA_PTR_SET_VALUE(downgradeInstanceId_, downgradeInstanceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisasterDowngradeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The instance ID to be downgraded.
    // 
    // This parameter is required.
    shared_ptr<string> downgradeInstanceId_ {};
    // The ID of the ApsaraMQ for MQTT (MSMQ) instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
