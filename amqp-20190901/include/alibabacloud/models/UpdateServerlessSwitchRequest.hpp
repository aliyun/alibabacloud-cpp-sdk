// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVERLESSSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVERLESSSWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class UpdateServerlessSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServerlessSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ServerlessSwitch, serverlessSwitch_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServerlessSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ServerlessSwitch, serverlessSwitch_);
    };
    UpdateServerlessSwitchRequest() = default ;
    UpdateServerlessSwitchRequest(const UpdateServerlessSwitchRequest &) = default ;
    UpdateServerlessSwitchRequest(UpdateServerlessSwitchRequest &&) = default ;
    UpdateServerlessSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServerlessSwitchRequest() = default ;
    UpdateServerlessSwitchRequest& operator=(const UpdateServerlessSwitchRequest &) = default ;
    UpdateServerlessSwitchRequest& operator=(UpdateServerlessSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr
        && return this->instanceId_ == nullptr && return this->serverlessSwitch_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline UpdateServerlessSwitchRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateServerlessSwitchRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // serverlessSwitch Field Functions 
    bool hasServerlessSwitch() const { return this->serverlessSwitch_ != nullptr;};
    void deleteServerlessSwitch() { this->serverlessSwitch_ = nullptr;};
    inline bool serverlessSwitch() const { DARABONBA_PTR_GET_DEFAULT(serverlessSwitch_, false) };
    inline UpdateServerlessSwitchRequest& setServerlessSwitch(bool serverlessSwitch) { DARABONBA_PTR_SET_VALUE(serverlessSwitch_, serverlessSwitch) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> serverlessSwitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
