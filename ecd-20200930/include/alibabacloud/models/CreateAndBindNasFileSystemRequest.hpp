// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDBINDNASFILESYSTEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDBINDNASFILESYSTEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateAndBindNasFileSystemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndBindNasFileSystemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndBindNasFileSystemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    CreateAndBindNasFileSystemRequest() = default ;
    CreateAndBindNasFileSystemRequest(const CreateAndBindNasFileSystemRequest &) = default ;
    CreateAndBindNasFileSystemRequest(CreateAndBindNasFileSystemRequest &&) = default ;
    CreateAndBindNasFileSystemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndBindNasFileSystemRequest() = default ;
    CreateAndBindNasFileSystemRequest& operator=(const CreateAndBindNasFileSystemRequest &) = default ;
    CreateAndBindNasFileSystemRequest& operator=(CreateAndBindNasFileSystemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->desktopGroupId_ == nullptr && this->encryptType_ == nullptr && this->endUserIds_ == nullptr && this->fileSystemName_ == nullptr && this->officeSiteId_ == nullptr
        && this->regionId_ == nullptr && this->storageType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAndBindNasFileSystemRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline CreateAndBindNasFileSystemRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline int32_t getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, 0) };
    inline CreateAndBindNasFileSystemRequest& setEncryptType(int32_t encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline CreateAndBindNasFileSystemRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline CreateAndBindNasFileSystemRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // fileSystemName Field Functions 
    bool hasFileSystemName() const { return this->fileSystemName_ != nullptr;};
    void deleteFileSystemName() { this->fileSystemName_ = nullptr;};
    inline string getFileSystemName() const { DARABONBA_PTR_GET_DEFAULT(fileSystemName_, "") };
    inline CreateAndBindNasFileSystemRequest& setFileSystemName(string fileSystemName) { DARABONBA_PTR_SET_VALUE(fileSystemName_, fileSystemName) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateAndBindNasFileSystemRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAndBindNasFileSystemRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateAndBindNasFileSystemRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The description of the NAS file system.
    shared_ptr<string> description_ {};
    // The ID of the desktop group.
    // 
    // This parameter is required.
    shared_ptr<string> desktopGroupId_ {};
    // Specifies whether to encrypt data in the NAS file system. You can use keys that are hosted by Key Management Service (KMS) to encrypt data in a file system. When you read and write the encrypted data, the data is automatically decrypted. Valid values:
    // 
    // *   0: does not encrypt data in the NAS file system.
    // *   1: encrypts data in the NAS file system by using a NAS-managed key. ` If you set  `FileSystemType`  to  `standard`  or  `extreme`, you can use a NAS-managed key to encrypt data in a NAS file system.`
    // *   2: encrypts data in the NAS file system by using a KMS-managed key. `If` you set FileSystemType`  to  `extreme`, you can use a KMS-managed key to encrypt data in a NAS file system.`
    // 
    // Default value: 0.
    shared_ptr<int32_t> encryptType_ {};
    // The list of users.
    shared_ptr<vector<string>> endUserIds_ {};
    // The name of the NAS file system.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemName_ {};
    // The ID of the workspace.
    // 
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The storage type of the NAS file system. Valid values:
    // 
    // *   Capacity
    // *   Performance
    // 
    // Default value: Capacity.
    // 
    // This parameter is required.
    shared_ptr<string> storageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
