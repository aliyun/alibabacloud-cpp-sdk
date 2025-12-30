// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENASFILESYSTEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENASFILESYSTEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateNASFileSystemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNASFileSystemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNASFileSystemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    CreateNASFileSystemRequest() = default ;
    CreateNASFileSystemRequest(const CreateNASFileSystemRequest &) = default ;
    CreateNASFileSystemRequest(CreateNASFileSystemRequest &&) = default ;
    CreateNASFileSystemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNASFileSystemRequest() = default ;
    CreateNASFileSystemRequest& operator=(const CreateNASFileSystemRequest &) = default ;
    CreateNASFileSystemRequest& operator=(CreateNASFileSystemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->encryptType_ == nullptr && this->name_ == nullptr && this->officeSiteId_ == nullptr && this->regionId_ == nullptr && this->storageType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNASFileSystemRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline CreateNASFileSystemRequest& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateNASFileSystemRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateNASFileSystemRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNASFileSystemRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateNASFileSystemRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // Description of the NAS file system.
    shared_ptr<string> description_ {};
    // Whether the file system is encrypted. Uses KMS service-managed keys to encrypt the file system\\"s on-disk data. No decryption is required when reading and writing encrypted data. Possible values and their meanings:
    // 
    // - 0: Not encrypted.
    // - 1: Encrypted using NAS-managed keys.
    // 
    // Default value: 0
    shared_ptr<string> encryptType_ {};
    // Name of the NAS file system.
    // The file name must follow these rules:
    // - Length: 2 to 128 English or Chinese characters.
    // - Must start with an uppercase or lowercase letter or a Chinese character, cannot start with http:// or https://.
    // - Can include numbers, underscores (_), or hyphens (-).
    shared_ptr<string> name_ {};
    // Workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // Region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Storage specification type of the NAS file system. Allowed values:
    // 
    // - Capacity: Capacity type.
    // - Performance: Performance type.
    // 
    // Default value: Capacity
    shared_ptr<string> storageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
