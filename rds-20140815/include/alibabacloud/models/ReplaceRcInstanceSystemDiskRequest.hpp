// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACERCINSTANCESYSTEMDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACERCINSTANCESYSTEMDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ReplaceRCInstanceSystemDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceRCInstanceSystemDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsLocalDisk, isLocalDisk_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceRCInstanceSystemDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsLocalDisk, isLocalDisk_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ReplaceRCInstanceSystemDiskRequest() = default ;
    ReplaceRCInstanceSystemDiskRequest(const ReplaceRCInstanceSystemDiskRequest &) = default ;
    ReplaceRCInstanceSystemDiskRequest(ReplaceRCInstanceSystemDiskRequest &&) = default ;
    ReplaceRCInstanceSystemDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceRCInstanceSystemDiskRequest() = default ;
    ReplaceRCInstanceSystemDiskRequest& operator=(const ReplaceRCInstanceSystemDiskRequest &) = default ;
    ReplaceRCInstanceSystemDiskRequest& operator=(ReplaceRCInstanceSystemDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && return this->instanceId_ == nullptr && return this->isLocalDisk_ == nullptr && return this->keyPairName_ == nullptr && return this->password_ == nullptr && return this->regionId_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ReplaceRCInstanceSystemDiskRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReplaceRCInstanceSystemDiskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isLocalDisk Field Functions 
    bool hasIsLocalDisk() const { return this->isLocalDisk_ != nullptr;};
    void deleteIsLocalDisk() { this->isLocalDisk_ = nullptr;};
    inline bool isLocalDisk() const { DARABONBA_PTR_GET_DEFAULT(isLocalDisk_, false) };
    inline ReplaceRCInstanceSystemDiskRequest& setIsLocalDisk(bool isLocalDisk) { DARABONBA_PTR_SET_VALUE(isLocalDisk_, isLocalDisk) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline ReplaceRCInstanceSystemDiskRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ReplaceRCInstanceSystemDiskRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReplaceRCInstanceSystemDiskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The image ID that is used when you reinstall the OS.
    std::shared_ptr<string> imageId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<bool> isLocalDisk_ = nullptr;
    // The name of the new key pair. If you do not specify this parameter, you must reset the key pair after the OS is reinstalled.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The new logon password of the RDS Custom instance. If you do not specify this parameter, you must reset the logon password after the OS is reinstalled.
    // 
    // *   The value must be 8 to 30 characters in length.
    // *   The value must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. Supported special characters include: ( ) \\` ~ ! @ # $ % ^ & \\* - _ + =
    std::shared_ptr<string> password_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
