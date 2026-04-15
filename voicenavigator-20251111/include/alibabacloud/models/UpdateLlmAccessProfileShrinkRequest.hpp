// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELLMACCESSPROFILESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELLMACCESSPROFILESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class UpdateLlmAccessProfileShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLlmAccessProfileShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Profile, profileShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLlmAccessProfileShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Profile, profileShrink_);
    };
    UpdateLlmAccessProfileShrinkRequest() = default ;
    UpdateLlmAccessProfileShrinkRequest(const UpdateLlmAccessProfileShrinkRequest &) = default ;
    UpdateLlmAccessProfileShrinkRequest(UpdateLlmAccessProfileShrinkRequest &&) = default ;
    UpdateLlmAccessProfileShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLlmAccessProfileShrinkRequest() = default ;
    UpdateLlmAccessProfileShrinkRequest& operator=(const UpdateLlmAccessProfileShrinkRequest &) = default ;
    UpdateLlmAccessProfileShrinkRequest& operator=(UpdateLlmAccessProfileShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessProfileId_ == nullptr
        && this->instanceId_ == nullptr && this->profileShrink_ == nullptr; };
    // accessProfileId Field Functions 
    bool hasAccessProfileId() const { return this->accessProfileId_ != nullptr;};
    void deleteAccessProfileId() { this->accessProfileId_ = nullptr;};
    inline string getAccessProfileId() const { DARABONBA_PTR_GET_DEFAULT(accessProfileId_, "") };
    inline UpdateLlmAccessProfileShrinkRequest& setAccessProfileId(string accessProfileId) { DARABONBA_PTR_SET_VALUE(accessProfileId_, accessProfileId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateLlmAccessProfileShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // profileShrink Field Functions 
    bool hasProfileShrink() const { return this->profileShrink_ != nullptr;};
    void deleteProfileShrink() { this->profileShrink_ = nullptr;};
    inline string getProfileShrink() const { DARABONBA_PTR_GET_DEFAULT(profileShrink_, "") };
    inline UpdateLlmAccessProfileShrinkRequest& setProfileShrink(string profileShrink) { DARABONBA_PTR_SET_VALUE(profileShrink_, profileShrink) };


  protected:
    shared_ptr<string> accessProfileId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> profileShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
