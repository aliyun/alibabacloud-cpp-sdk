// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLONEVOICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLONEVOICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class CreateCloneVoiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloneVoiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Model, model_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloneVoiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
    };
    CreateCloneVoiceRequest() = default ;
    CreateCloneVoiceRequest(const CreateCloneVoiceRequest &) = default ;
    CreateCloneVoiceRequest(CreateCloneVoiceRequest &&) = default ;
    CreateCloneVoiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloneVoiceRequest() = default ;
    CreateCloneVoiceRequest& operator=(const CreateCloneVoiceRequest &) = default ;
    CreateCloneVoiceRequest& operator=(CreateCloneVoiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileKey_ == nullptr
        && this->instanceId_ == nullptr && this->model_ == nullptr; };
    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string getFileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline CreateCloneVoiceRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCloneVoiceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateCloneVoiceRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


  protected:
    shared_ptr<string> fileKey_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> model_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
