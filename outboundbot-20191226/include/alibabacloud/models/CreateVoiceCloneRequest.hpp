// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVOICECLONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVOICECLONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateVoiceCloneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVoiceCloneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(VoiceName, voiceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVoiceCloneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(VoiceName, voiceName_);
    };
    CreateVoiceCloneRequest() = default ;
    CreateVoiceCloneRequest(const CreateVoiceCloneRequest &) = default ;
    CreateVoiceCloneRequest(CreateVoiceCloneRequest &&) = default ;
    CreateVoiceCloneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVoiceCloneRequest() = default ;
    CreateVoiceCloneRequest& operator=(const CreateVoiceCloneRequest &) = default ;
    CreateVoiceCloneRequest& operator=(CreateVoiceCloneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && this->instanceId_ == nullptr && this->model_ == nullptr && this->voiceName_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline CreateVoiceCloneRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateVoiceCloneRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateVoiceCloneRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // voiceName Field Functions 
    bool hasVoiceName() const { return this->voiceName_ != nullptr;};
    void deleteVoiceName() { this->voiceName_ = nullptr;};
    inline string getVoiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
    inline CreateVoiceCloneRequest& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


  protected:
    // The Folder field returned after a file is uploaded by calling the GetJobDataUploadParams operation.
    // 
    // This parameter is required.
    shared_ptr<string> fileId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The model used for voice cloning.
    shared_ptr<string> model_ {};
    // The name of the cloned voice. The names of enabled voices within the same instance must be unique.
    // 
    // This parameter is required.
    shared_ptr<string> voiceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
