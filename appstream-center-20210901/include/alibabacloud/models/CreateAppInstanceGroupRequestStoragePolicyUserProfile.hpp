// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTSTORAGEPOLICYUSERPROFILE_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTSTORAGEPOLICYUSERPROFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupRequestStoragePolicyUserProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupRequestStoragePolicyUserProfile& obj) { 
      DARABONBA_PTR_TO_JSON(RemoteStoragePath, remoteStoragePath_);
      DARABONBA_PTR_TO_JSON(RemoteStorageType, remoteStorageType_);
      DARABONBA_PTR_TO_JSON(UserProfileSwitch, userProfileSwitch_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupRequestStoragePolicyUserProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(RemoteStoragePath, remoteStoragePath_);
      DARABONBA_PTR_FROM_JSON(RemoteStorageType, remoteStorageType_);
      DARABONBA_PTR_FROM_JSON(UserProfileSwitch, userProfileSwitch_);
    };
    CreateAppInstanceGroupRequestStoragePolicyUserProfile() = default ;
    CreateAppInstanceGroupRequestStoragePolicyUserProfile(const CreateAppInstanceGroupRequestStoragePolicyUserProfile &) = default ;
    CreateAppInstanceGroupRequestStoragePolicyUserProfile(CreateAppInstanceGroupRequestStoragePolicyUserProfile &&) = default ;
    CreateAppInstanceGroupRequestStoragePolicyUserProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupRequestStoragePolicyUserProfile() = default ;
    CreateAppInstanceGroupRequestStoragePolicyUserProfile& operator=(const CreateAppInstanceGroupRequestStoragePolicyUserProfile &) = default ;
    CreateAppInstanceGroupRequestStoragePolicyUserProfile& operator=(CreateAppInstanceGroupRequestStoragePolicyUserProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remoteStoragePath_ == nullptr
        && return this->remoteStorageType_ == nullptr && return this->userProfileSwitch_ == nullptr; };
    // remoteStoragePath Field Functions 
    bool hasRemoteStoragePath() const { return this->remoteStoragePath_ != nullptr;};
    void deleteRemoteStoragePath() { this->remoteStoragePath_ = nullptr;};
    inline string remoteStoragePath() const { DARABONBA_PTR_GET_DEFAULT(remoteStoragePath_, "") };
    inline CreateAppInstanceGroupRequestStoragePolicyUserProfile& setRemoteStoragePath(string remoteStoragePath) { DARABONBA_PTR_SET_VALUE(remoteStoragePath_, remoteStoragePath) };


    // remoteStorageType Field Functions 
    bool hasRemoteStorageType() const { return this->remoteStorageType_ != nullptr;};
    void deleteRemoteStorageType() { this->remoteStorageType_ = nullptr;};
    inline string remoteStorageType() const { DARABONBA_PTR_GET_DEFAULT(remoteStorageType_, "") };
    inline CreateAppInstanceGroupRequestStoragePolicyUserProfile& setRemoteStorageType(string remoteStorageType) { DARABONBA_PTR_SET_VALUE(remoteStorageType_, remoteStorageType) };


    // userProfileSwitch Field Functions 
    bool hasUserProfileSwitch() const { return this->userProfileSwitch_ != nullptr;};
    void deleteUserProfileSwitch() { this->userProfileSwitch_ = nullptr;};
    inline bool userProfileSwitch() const { DARABONBA_PTR_GET_DEFAULT(userProfileSwitch_, false) };
    inline CreateAppInstanceGroupRequestStoragePolicyUserProfile& setUserProfileSwitch(bool userProfileSwitch) { DARABONBA_PTR_SET_VALUE(userProfileSwitch_, userProfileSwitch) };


  protected:
    // Remote storage path for user data roaming.
    // 
    // - If left empty, the default value is the delivery group ID.
    // - For cross-delivery-group (within the same VPC) user data roaming, the same value must be configured for all participating delivery groups.
    std::shared_ptr<string> remoteStoragePath_ = nullptr;
    // Remote storage type used for user data roaming.
    std::shared_ptr<string> remoteStorageType_ = nullptr;
    // User data roaming toggle.
    std::shared_ptr<bool> userProfileSwitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
