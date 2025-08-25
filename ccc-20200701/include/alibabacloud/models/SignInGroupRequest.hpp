// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIGNINGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SIGNINGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class SignInGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SignInGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Additivity, additivity_);
      DARABONBA_PTR_TO_JSON(ChatDeviceId, chatDeviceId_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SignedSkillGroupIdList, signedSkillGroupIdList_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SignInGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Additivity, additivity_);
      DARABONBA_PTR_FROM_JSON(ChatDeviceId, chatDeviceId_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SignedSkillGroupIdList, signedSkillGroupIdList_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    SignInGroupRequest() = default ;
    SignInGroupRequest(const SignInGroupRequest &) = default ;
    SignInGroupRequest(SignInGroupRequest &&) = default ;
    SignInGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SignInGroupRequest() = default ;
    SignInGroupRequest& operator=(const SignInGroupRequest &) = default ;
    SignInGroupRequest& operator=(SignInGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additivity_ != nullptr
        && this->chatDeviceId_ != nullptr && this->deviceId_ != nullptr && this->instanceId_ != nullptr && this->signedSkillGroupIdList_ != nullptr && this->userId_ != nullptr; };
    // additivity Field Functions 
    bool hasAdditivity() const { return this->additivity_ != nullptr;};
    void deleteAdditivity() { this->additivity_ = nullptr;};
    inline bool additivity() const { DARABONBA_PTR_GET_DEFAULT(additivity_, false) };
    inline SignInGroupRequest& setAdditivity(bool additivity) { DARABONBA_PTR_SET_VALUE(additivity_, additivity) };


    // chatDeviceId Field Functions 
    bool hasChatDeviceId() const { return this->chatDeviceId_ != nullptr;};
    void deleteChatDeviceId() { this->chatDeviceId_ = nullptr;};
    inline string chatDeviceId() const { DARABONBA_PTR_GET_DEFAULT(chatDeviceId_, "") };
    inline SignInGroupRequest& setChatDeviceId(string chatDeviceId) { DARABONBA_PTR_SET_VALUE(chatDeviceId_, chatDeviceId) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline SignInGroupRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SignInGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // signedSkillGroupIdList Field Functions 
    bool hasSignedSkillGroupIdList() const { return this->signedSkillGroupIdList_ != nullptr;};
    void deleteSignedSkillGroupIdList() { this->signedSkillGroupIdList_ = nullptr;};
    inline string signedSkillGroupIdList() const { DARABONBA_PTR_GET_DEFAULT(signedSkillGroupIdList_, "") };
    inline SignInGroupRequest& setSignedSkillGroupIdList(string signedSkillGroupIdList) { DARABONBA_PTR_SET_VALUE(signedSkillGroupIdList_, signedSkillGroupIdList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SignInGroupRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<bool> additivity_ = nullptr;
    std::shared_ptr<string> chatDeviceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> signedSkillGroupIdList_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
