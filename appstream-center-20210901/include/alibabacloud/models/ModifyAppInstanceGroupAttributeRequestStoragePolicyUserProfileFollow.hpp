// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUESTSTORAGEPOLICYUSERPROFILEFOLLOW_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUESTSTORAGEPOLICYUSERPROFILEFOLLOW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(ProfileFollowSwitch, profileFollowSwitch_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(ProfileFollowSwitch, profileFollowSwitch_);
    };
    ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow() = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow(const ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow &) = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow(ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow &&) = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow() = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow& operator=(const ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow &) = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow& operator=(ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && return this->profileFollowSwitch_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // profileFollowSwitch Field Functions 
    bool hasProfileFollowSwitch() const { return this->profileFollowSwitch_ != nullptr;};
    void deleteProfileFollowSwitch() { this->profileFollowSwitch_ = nullptr;};
    inline bool profileFollowSwitch() const { DARABONBA_PTR_GET_DEFAULT(profileFollowSwitch_, false) };
    inline ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow& setProfileFollowSwitch(bool profileFollowSwitch) { DARABONBA_PTR_SET_VALUE(profileFollowSwitch_, profileFollowSwitch) };


  protected:
    std::shared_ptr<string> fileSystemId_ = nullptr;
    std::shared_ptr<bool> profileFollowSwitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
