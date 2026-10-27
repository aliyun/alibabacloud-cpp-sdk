// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVOICECLONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVOICECLONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyVoiceCloneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVoiceCloneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
      DARABONBA_PTR_TO_JSON(VoiceName, voiceName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVoiceCloneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
      DARABONBA_PTR_FROM_JSON(VoiceName, voiceName_);
    };
    ModifyVoiceCloneRequest() = default ;
    ModifyVoiceCloneRequest(const ModifyVoiceCloneRequest &) = default ;
    ModifyVoiceCloneRequest(ModifyVoiceCloneRequest &&) = default ;
    ModifyVoiceCloneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVoiceCloneRequest() = default ;
    ModifyVoiceCloneRequest& operator=(const ModifyVoiceCloneRequest &) = default ;
    ModifyVoiceCloneRequest& operator=(ModifyVoiceCloneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->status_ == nullptr && this->voiceId_ == nullptr && this->voiceName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyVoiceCloneRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyVoiceCloneRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline ModifyVoiceCloneRequest& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


    // voiceName Field Functions 
    bool hasVoiceName() const { return this->voiceName_ != nullptr;};
    void deleteVoiceName() { this->voiceName_ = nullptr;};
    inline string getVoiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
    inline ModifyVoiceCloneRequest& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The status of the voice. Note: For a newly created voice, you must call the ModifyVoiceClone operation and set Status to Enabled before it can be used.
    shared_ptr<string> status_ {};
    // The ID of the cloned voice to modify.
    // 
    // This parameter is required.
    shared_ptr<string> voiceId_ {};
    // The name of the voice.
    shared_ptr<string> voiceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
