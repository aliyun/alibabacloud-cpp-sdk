// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERTCROBOTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERTCROBOTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateRtcRobotInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRtcRobotInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRtcRobotInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateRtcRobotInstanceRequest() = default ;
    UpdateRtcRobotInstanceRequest(const UpdateRtcRobotInstanceRequest &) = default ;
    UpdateRtcRobotInstanceRequest(UpdateRtcRobotInstanceRequest &&) = default ;
    UpdateRtcRobotInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRtcRobotInstanceRequest() = default ;
    UpdateRtcRobotInstanceRequest& operator=(const UpdateRtcRobotInstanceRequest &) = default ;
    UpdateRtcRobotInstanceRequest& operator=(UpdateRtcRobotInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(EnableVoiceInterrupt, enableVoiceInterrupt_);
        DARABONBA_PTR_TO_JSON(Greeting, greeting_);
        DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableVoiceInterrupt, enableVoiceInterrupt_);
        DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
        DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableVoiceInterrupt_ == nullptr
        && this->greeting_ == nullptr && this->voiceId_ == nullptr; };
      // enableVoiceInterrupt Field Functions 
      bool hasEnableVoiceInterrupt() const { return this->enableVoiceInterrupt_ != nullptr;};
      void deleteEnableVoiceInterrupt() { this->enableVoiceInterrupt_ = nullptr;};
      inline bool getEnableVoiceInterrupt() const { DARABONBA_PTR_GET_DEFAULT(enableVoiceInterrupt_, false) };
      inline Config& setEnableVoiceInterrupt(bool enableVoiceInterrupt) { DARABONBA_PTR_SET_VALUE(enableVoiceInterrupt_, enableVoiceInterrupt) };


      // greeting Field Functions 
      bool hasGreeting() const { return this->greeting_ != nullptr;};
      void deleteGreeting() { this->greeting_ = nullptr;};
      inline string getGreeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
      inline Config& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


      // voiceId Field Functions 
      bool hasVoiceId() const { return this->voiceId_ != nullptr;};
      void deleteVoiceId() { this->voiceId_ = nullptr;};
      inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
      inline Config& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


    protected:
      shared_ptr<bool> enableVoiceInterrupt_ {};
      shared_ptr<string> greeting_ {};
      shared_ptr<string> voiceId_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->instanceId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const UpdateRtcRobotInstanceRequest::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, UpdateRtcRobotInstanceRequest::Config) };
    inline UpdateRtcRobotInstanceRequest::Config getConfig() { DARABONBA_PTR_GET(config_, UpdateRtcRobotInstanceRequest::Config) };
    inline UpdateRtcRobotInstanceRequest& setConfig(const UpdateRtcRobotInstanceRequest::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline UpdateRtcRobotInstanceRequest& setConfig(UpdateRtcRobotInstanceRequest::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateRtcRobotInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<UpdateRtcRobotInstanceRequest::Config> config_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
