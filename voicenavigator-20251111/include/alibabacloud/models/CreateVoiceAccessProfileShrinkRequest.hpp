// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVOICEACCESSPROFILESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVOICEACCESSPROFILESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class CreateVoiceAccessProfileShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVoiceAccessProfileShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NlsEngine, nlsEngine_);
      DARABONBA_PTR_TO_JSON(Profile, profileShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVoiceAccessProfileShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NlsEngine, nlsEngine_);
      DARABONBA_PTR_FROM_JSON(Profile, profileShrink_);
    };
    CreateVoiceAccessProfileShrinkRequest() = default ;
    CreateVoiceAccessProfileShrinkRequest(const CreateVoiceAccessProfileShrinkRequest &) = default ;
    CreateVoiceAccessProfileShrinkRequest(CreateVoiceAccessProfileShrinkRequest &&) = default ;
    CreateVoiceAccessProfileShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVoiceAccessProfileShrinkRequest() = default ;
    CreateVoiceAccessProfileShrinkRequest& operator=(const CreateVoiceAccessProfileShrinkRequest &) = default ;
    CreateVoiceAccessProfileShrinkRequest& operator=(CreateVoiceAccessProfileShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nlsEngine_ == nullptr && this->profileShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateVoiceAccessProfileShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nlsEngine Field Functions 
    bool hasNlsEngine() const { return this->nlsEngine_ != nullptr;};
    void deleteNlsEngine() { this->nlsEngine_ = nullptr;};
    inline string getNlsEngine() const { DARABONBA_PTR_GET_DEFAULT(nlsEngine_, "") };
    inline CreateVoiceAccessProfileShrinkRequest& setNlsEngine(string nlsEngine) { DARABONBA_PTR_SET_VALUE(nlsEngine_, nlsEngine) };


    // profileShrink Field Functions 
    bool hasProfileShrink() const { return this->profileShrink_ != nullptr;};
    void deleteProfileShrink() { this->profileShrink_ = nullptr;};
    inline string getProfileShrink() const { DARABONBA_PTR_GET_DEFAULT(profileShrink_, "") };
    inline CreateVoiceAccessProfileShrinkRequest& setProfileShrink(string profileShrink) { DARABONBA_PTR_SET_VALUE(profileShrink_, profileShrink) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> nlsEngine_ {};
    shared_ptr<string> profileShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
