// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELLMACCESSPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELLMACCESSPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class UpdateLlmAccessProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLlmAccessProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLlmAccessProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
    };
    UpdateLlmAccessProfileRequest() = default ;
    UpdateLlmAccessProfileRequest(const UpdateLlmAccessProfileRequest &) = default ;
    UpdateLlmAccessProfileRequest(UpdateLlmAccessProfileRequest &&) = default ;
    UpdateLlmAccessProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLlmAccessProfileRequest() = default ;
    UpdateLlmAccessProfileRequest& operator=(const UpdateLlmAccessProfileRequest &) = default ;
    UpdateLlmAccessProfileRequest& operator=(UpdateLlmAccessProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Profile : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Profile& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Profile& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Profile() = default ;
      Profile(const Profile &) = default ;
      Profile(Profile &&) = default ;
      Profile(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Profile() = default ;
      Profile& operator=(const Profile &) = default ;
      Profile& operator=(Profile &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->endpoint_ == nullptr && this->name_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Profile& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Profile& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Profile& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> apiKey_ {};
      shared_ptr<string> endpoint_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->accessProfileId_ == nullptr
        && this->instanceId_ == nullptr && this->profile_ == nullptr; };
    // accessProfileId Field Functions 
    bool hasAccessProfileId() const { return this->accessProfileId_ != nullptr;};
    void deleteAccessProfileId() { this->accessProfileId_ = nullptr;};
    inline string getAccessProfileId() const { DARABONBA_PTR_GET_DEFAULT(accessProfileId_, "") };
    inline UpdateLlmAccessProfileRequest& setAccessProfileId(string accessProfileId) { DARABONBA_PTR_SET_VALUE(accessProfileId_, accessProfileId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateLlmAccessProfileRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline const UpdateLlmAccessProfileRequest::Profile & getProfile() const { DARABONBA_PTR_GET_CONST(profile_, UpdateLlmAccessProfileRequest::Profile) };
    inline UpdateLlmAccessProfileRequest::Profile getProfile() { DARABONBA_PTR_GET(profile_, UpdateLlmAccessProfileRequest::Profile) };
    inline UpdateLlmAccessProfileRequest& setProfile(const UpdateLlmAccessProfileRequest::Profile & profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };
    inline UpdateLlmAccessProfileRequest& setProfile(UpdateLlmAccessProfileRequest::Profile && profile) { DARABONBA_PTR_SET_RVALUE(profile_, profile) };


  protected:
    shared_ptr<string> accessProfileId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<UpdateLlmAccessProfileRequest::Profile> profile_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
