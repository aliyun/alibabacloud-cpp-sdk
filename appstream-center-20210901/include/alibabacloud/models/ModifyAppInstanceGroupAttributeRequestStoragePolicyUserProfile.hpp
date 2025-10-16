// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUESTSTORAGEPOLICYUSERPROFILE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUESTSTORAGEPOLICYUSERPROFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(UserProfileSwitch, userProfileSwitch_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(UserProfileSwitch, userProfileSwitch_);
    };
    ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile() = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile(const ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile &) = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile(ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile &&) = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile() = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile& operator=(const ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile &) = default ;
    ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile& operator=(ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && return this->userProfileSwitch_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // userProfileSwitch Field Functions 
    bool hasUserProfileSwitch() const { return this->userProfileSwitch_ != nullptr;};
    void deleteUserProfileSwitch() { this->userProfileSwitch_ = nullptr;};
    inline bool userProfileSwitch() const { DARABONBA_PTR_GET_DEFAULT(userProfileSwitch_, false) };
    inline ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile& setUserProfileSwitch(bool userProfileSwitch) { DARABONBA_PTR_SET_VALUE(userProfileSwitch_, userProfileSwitch) };


  protected:
    // The ID of the File Storage NAS (NAS) file system used to store user data.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // Specifies whether user data roaming is enabled.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> userProfileSwitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
