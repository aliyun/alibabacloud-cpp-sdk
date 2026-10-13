// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVOICECLONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVOICECLONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DeleteVoiceCloneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVoiceCloneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVoiceCloneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
    };
    DeleteVoiceCloneRequest() = default ;
    DeleteVoiceCloneRequest(const DeleteVoiceCloneRequest &) = default ;
    DeleteVoiceCloneRequest(DeleteVoiceCloneRequest &&) = default ;
    DeleteVoiceCloneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVoiceCloneRequest() = default ;
    DeleteVoiceCloneRequest& operator=(const DeleteVoiceCloneRequest &) = default ;
    DeleteVoiceCloneRequest& operator=(DeleteVoiceCloneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->voiceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteVoiceCloneRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline DeleteVoiceCloneRequest& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the cloned voice to delete.
    // 
    // This parameter is required.
    shared_ptr<string> voiceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
