// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODEGROUPREQUESTNODEGROUP_HPP_
#define ALIBABACLOUD_MODELS_CREATENODEGROUPREQUESTNODEGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateNodeGroupRequestNodeGroupSystemDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateNodeGroupRequestNodeGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeGroupRequestNodeGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Az, az_);
      DARABONBA_PTR_TO_JSON(FileSystemMountEnabled, fileSystemMountEnabled_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(NodeGroupDescription, nodeGroupDescription_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VirtualGpuEnabled, virtualGpuEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeGroupRequestNodeGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Az, az_);
      DARABONBA_PTR_FROM_JSON(FileSystemMountEnabled, fileSystemMountEnabled_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(NodeGroupDescription, nodeGroupDescription_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VirtualGpuEnabled, virtualGpuEnabled_);
    };
    CreateNodeGroupRequestNodeGroup() = default ;
    CreateNodeGroupRequestNodeGroup(const CreateNodeGroupRequestNodeGroup &) = default ;
    CreateNodeGroupRequestNodeGroup(CreateNodeGroupRequestNodeGroup &&) = default ;
    CreateNodeGroupRequestNodeGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeGroupRequestNodeGroup() = default ;
    CreateNodeGroupRequestNodeGroup& operator=(const CreateNodeGroupRequestNodeGroup &) = default ;
    CreateNodeGroupRequestNodeGroup& operator=(CreateNodeGroupRequestNodeGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->az_ != nullptr
        && this->fileSystemMountEnabled_ != nullptr && this->imageId_ != nullptr && this->keyPairName_ != nullptr && this->loginPassword_ != nullptr && this->machineType_ != nullptr
        && this->nodeGroupDescription_ != nullptr && this->nodeGroupName_ != nullptr && this->systemDisk_ != nullptr && this->userData_ != nullptr && this->virtualGpuEnabled_ != nullptr; };
    // az Field Functions 
    bool hasAz() const { return this->az_ != nullptr;};
    void deleteAz() { this->az_ = nullptr;};
    inline string az() const { DARABONBA_PTR_GET_DEFAULT(az_, "") };
    inline CreateNodeGroupRequestNodeGroup& setAz(string az) { DARABONBA_PTR_SET_VALUE(az_, az) };


    // fileSystemMountEnabled Field Functions 
    bool hasFileSystemMountEnabled() const { return this->fileSystemMountEnabled_ != nullptr;};
    void deleteFileSystemMountEnabled() { this->fileSystemMountEnabled_ = nullptr;};
    inline bool fileSystemMountEnabled() const { DARABONBA_PTR_GET_DEFAULT(fileSystemMountEnabled_, false) };
    inline CreateNodeGroupRequestNodeGroup& setFileSystemMountEnabled(bool fileSystemMountEnabled) { DARABONBA_PTR_SET_VALUE(fileSystemMountEnabled_, fileSystemMountEnabled) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateNodeGroupRequestNodeGroup& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateNodeGroupRequestNodeGroup& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline CreateNodeGroupRequestNodeGroup& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string machineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline CreateNodeGroupRequestNodeGroup& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // nodeGroupDescription Field Functions 
    bool hasNodeGroupDescription() const { return this->nodeGroupDescription_ != nullptr;};
    void deleteNodeGroupDescription() { this->nodeGroupDescription_ = nullptr;};
    inline string nodeGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupDescription_, "") };
    inline CreateNodeGroupRequestNodeGroup& setNodeGroupDescription(string nodeGroupDescription) { DARABONBA_PTR_SET_VALUE(nodeGroupDescription_, nodeGroupDescription) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string nodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline CreateNodeGroupRequestNodeGroup& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const Models::CreateNodeGroupRequestNodeGroupSystemDisk & systemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, Models::CreateNodeGroupRequestNodeGroupSystemDisk) };
    inline Models::CreateNodeGroupRequestNodeGroupSystemDisk systemDisk() { DARABONBA_PTR_GET(systemDisk_, Models::CreateNodeGroupRequestNodeGroupSystemDisk) };
    inline CreateNodeGroupRequestNodeGroup& setSystemDisk(const Models::CreateNodeGroupRequestNodeGroupSystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline CreateNodeGroupRequestNodeGroup& setSystemDisk(Models::CreateNodeGroupRequestNodeGroupSystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateNodeGroupRequestNodeGroup& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // virtualGpuEnabled Field Functions 
    bool hasVirtualGpuEnabled() const { return this->virtualGpuEnabled_ != nullptr;};
    void deleteVirtualGpuEnabled() { this->virtualGpuEnabled_ = nullptr;};
    inline bool virtualGpuEnabled() const { DARABONBA_PTR_GET_DEFAULT(virtualGpuEnabled_, false) };
    inline CreateNodeGroupRequestNodeGroup& setVirtualGpuEnabled(bool virtualGpuEnabled) { DARABONBA_PTR_SET_VALUE(virtualGpuEnabled_, virtualGpuEnabled) };


  protected:
    // Availability Zone
    // 
    // This parameter is required.
    std::shared_ptr<string> az_ = nullptr;
    // Whether file storage mounting is supported
    std::shared_ptr<bool> fileSystemMountEnabled_ = nullptr;
    // Image ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    // Key pair name.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // Password
    std::shared_ptr<string> loginPassword_ = nullptr;
    // Machine type
    // 
    // This parameter is required.
    std::shared_ptr<string> machineType_ = nullptr;
    // Node group description
    std::shared_ptr<string> nodeGroupDescription_ = nullptr;
    // Node group name
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeGroupName_ = nullptr;
    // Details of the node system disk configuration.
    std::shared_ptr<Models::CreateNodeGroupRequestNodeGroupSystemDisk> systemDisk_ = nullptr;
    // User-defined data
    std::shared_ptr<string> userData_ = nullptr;
    // Whether to enable gpu virtualization or not
    std::shared_ptr<bool> virtualGpuEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
