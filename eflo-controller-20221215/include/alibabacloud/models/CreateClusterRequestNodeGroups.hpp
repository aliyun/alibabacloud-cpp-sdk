// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNODEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNODEGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterRequestNodeGroupsHyperNodes.hpp>
#include <alibabacloud/models/CreateClusterRequestNodeGroupsNodes.hpp>
#include <alibabacloud/models/CreateClusterRequestNodeGroupsSystemDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequestNodeGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestNodeGroups& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemMountEnabled, fileSystemMountEnabled_);
      DARABONBA_PTR_TO_JSON(HyperNodes, hyperNodes_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(NodeGroupDescription, nodeGroupDescription_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VirtualGpuEnabled, virtualGpuEnabled_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestNodeGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemMountEnabled, fileSystemMountEnabled_);
      DARABONBA_PTR_FROM_JSON(HyperNodes, hyperNodes_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(NodeGroupDescription, nodeGroupDescription_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VirtualGpuEnabled, virtualGpuEnabled_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateClusterRequestNodeGroups() = default ;
    CreateClusterRequestNodeGroups(const CreateClusterRequestNodeGroups &) = default ;
    CreateClusterRequestNodeGroups(CreateClusterRequestNodeGroups &&) = default ;
    CreateClusterRequestNodeGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestNodeGroups() = default ;
    CreateClusterRequestNodeGroups& operator=(const CreateClusterRequestNodeGroups &) = default ;
    CreateClusterRequestNodeGroups& operator=(CreateClusterRequestNodeGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSystemMountEnabled_ != nullptr
        && this->hyperNodes_ != nullptr && this->imageId_ != nullptr && this->keyPairName_ != nullptr && this->loginPassword_ != nullptr && this->machineType_ != nullptr
        && this->nodeGroupDescription_ != nullptr && this->nodeGroupName_ != nullptr && this->nodes_ != nullptr && this->systemDisk_ != nullptr && this->userData_ != nullptr
        && this->virtualGpuEnabled_ != nullptr && this->zoneId_ != nullptr; };
    // fileSystemMountEnabled Field Functions 
    bool hasFileSystemMountEnabled() const { return this->fileSystemMountEnabled_ != nullptr;};
    void deleteFileSystemMountEnabled() { this->fileSystemMountEnabled_ = nullptr;};
    inline bool fileSystemMountEnabled() const { DARABONBA_PTR_GET_DEFAULT(fileSystemMountEnabled_, false) };
    inline CreateClusterRequestNodeGroups& setFileSystemMountEnabled(bool fileSystemMountEnabled) { DARABONBA_PTR_SET_VALUE(fileSystemMountEnabled_, fileSystemMountEnabled) };


    // hyperNodes Field Functions 
    bool hasHyperNodes() const { return this->hyperNodes_ != nullptr;};
    void deleteHyperNodes() { this->hyperNodes_ = nullptr;};
    inline const vector<Models::CreateClusterRequestNodeGroupsHyperNodes> & hyperNodes() const { DARABONBA_PTR_GET_CONST(hyperNodes_, vector<Models::CreateClusterRequestNodeGroupsHyperNodes>) };
    inline vector<Models::CreateClusterRequestNodeGroupsHyperNodes> hyperNodes() { DARABONBA_PTR_GET(hyperNodes_, vector<Models::CreateClusterRequestNodeGroupsHyperNodes>) };
    inline CreateClusterRequestNodeGroups& setHyperNodes(const vector<Models::CreateClusterRequestNodeGroupsHyperNodes> & hyperNodes) { DARABONBA_PTR_SET_VALUE(hyperNodes_, hyperNodes) };
    inline CreateClusterRequestNodeGroups& setHyperNodes(vector<Models::CreateClusterRequestNodeGroupsHyperNodes> && hyperNodes) { DARABONBA_PTR_SET_RVALUE(hyperNodes_, hyperNodes) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateClusterRequestNodeGroups& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateClusterRequestNodeGroups& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline CreateClusterRequestNodeGroups& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string machineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline CreateClusterRequestNodeGroups& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // nodeGroupDescription Field Functions 
    bool hasNodeGroupDescription() const { return this->nodeGroupDescription_ != nullptr;};
    void deleteNodeGroupDescription() { this->nodeGroupDescription_ = nullptr;};
    inline string nodeGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupDescription_, "") };
    inline CreateClusterRequestNodeGroups& setNodeGroupDescription(string nodeGroupDescription) { DARABONBA_PTR_SET_VALUE(nodeGroupDescription_, nodeGroupDescription) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string nodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline CreateClusterRequestNodeGroups& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::CreateClusterRequestNodeGroupsNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::CreateClusterRequestNodeGroupsNodes>) };
    inline vector<Models::CreateClusterRequestNodeGroupsNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::CreateClusterRequestNodeGroupsNodes>) };
    inline CreateClusterRequestNodeGroups& setNodes(const vector<Models::CreateClusterRequestNodeGroupsNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline CreateClusterRequestNodeGroups& setNodes(vector<Models::CreateClusterRequestNodeGroupsNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const Models::CreateClusterRequestNodeGroupsSystemDisk & systemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, Models::CreateClusterRequestNodeGroupsSystemDisk) };
    inline Models::CreateClusterRequestNodeGroupsSystemDisk systemDisk() { DARABONBA_PTR_GET(systemDisk_, Models::CreateClusterRequestNodeGroupsSystemDisk) };
    inline CreateClusterRequestNodeGroups& setSystemDisk(const Models::CreateClusterRequestNodeGroupsSystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline CreateClusterRequestNodeGroups& setSystemDisk(Models::CreateClusterRequestNodeGroupsSystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateClusterRequestNodeGroups& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // virtualGpuEnabled Field Functions 
    bool hasVirtualGpuEnabled() const { return this->virtualGpuEnabled_ != nullptr;};
    void deleteVirtualGpuEnabled() { this->virtualGpuEnabled_ = nullptr;};
    inline bool virtualGpuEnabled() const { DARABONBA_PTR_GET_DEFAULT(virtualGpuEnabled_, false) };
    inline CreateClusterRequestNodeGroups& setVirtualGpuEnabled(bool virtualGpuEnabled) { DARABONBA_PTR_SET_VALUE(virtualGpuEnabled_, virtualGpuEnabled) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateClusterRequestNodeGroups& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Whether to support file system mounting
    std::shared_ptr<bool> fileSystemMountEnabled_ = nullptr;
    std::shared_ptr<vector<Models::CreateClusterRequestNodeGroupsHyperNodes>> hyperNodes_ = nullptr;
    // System image ID
    std::shared_ptr<string> imageId_ = nullptr;
    // Key pair name.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // Login password
    std::shared_ptr<string> loginPassword_ = nullptr;
    // Machine type
    std::shared_ptr<string> machineType_ = nullptr;
    // Node group description
    std::shared_ptr<string> nodeGroupDescription_ = nullptr;
    // Node group name
    std::shared_ptr<string> nodeGroupName_ = nullptr;
    // Node list
    std::shared_ptr<vector<Models::CreateClusterRequestNodeGroupsNodes>> nodes_ = nullptr;
    // System disk information
    std::shared_ptr<Models::CreateClusterRequestNodeGroupsSystemDisk> systemDisk_ = nullptr;
    // Instance custom data. It needs to be encoded in Base64, and the original data should not exceed 16 KB.
    std::shared_ptr<string> userData_ = nullptr;
    // Whether to enable gpu virtualization or not
    std::shared_ptr<bool> virtualGpuEnabled_ = nullptr;
    // Zone ID
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
