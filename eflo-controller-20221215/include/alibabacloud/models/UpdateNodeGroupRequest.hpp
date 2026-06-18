// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENODEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENODEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class UpdateNodeGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNodeGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemMountEnabled, fileSystemMountEnabled_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_TO_JSON(NewNodeGroupName, newNodeGroupName_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNodeGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemMountEnabled, fileSystemMountEnabled_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_FROM_JSON(NewNodeGroupName, newNodeGroupName_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    UpdateNodeGroupRequest() = default ;
    UpdateNodeGroupRequest(const UpdateNodeGroupRequest &) = default ;
    UpdateNodeGroupRequest(UpdateNodeGroupRequest &&) = default ;
    UpdateNodeGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNodeGroupRequest() = default ;
    UpdateNodeGroupRequest& operator=(const UpdateNodeGroupRequest &) = default ;
    UpdateNodeGroupRequest& operator=(UpdateNodeGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemMountEnabled_ == nullptr
        && this->imageId_ == nullptr && this->keyPairName_ == nullptr && this->loginPassword_ == nullptr && this->newNodeGroupName_ == nullptr && this->nodeGroupId_ == nullptr
        && this->ramRoleName_ == nullptr && this->userData_ == nullptr; };
    // fileSystemMountEnabled Field Functions 
    bool hasFileSystemMountEnabled() const { return this->fileSystemMountEnabled_ != nullptr;};
    void deleteFileSystemMountEnabled() { this->fileSystemMountEnabled_ = nullptr;};
    inline bool getFileSystemMountEnabled() const { DARABONBA_PTR_GET_DEFAULT(fileSystemMountEnabled_, false) };
    inline UpdateNodeGroupRequest& setFileSystemMountEnabled(bool fileSystemMountEnabled) { DARABONBA_PTR_SET_VALUE(fileSystemMountEnabled_, fileSystemMountEnabled) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpdateNodeGroupRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline UpdateNodeGroupRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string getLoginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline UpdateNodeGroupRequest& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // newNodeGroupName Field Functions 
    bool hasNewNodeGroupName() const { return this->newNodeGroupName_ != nullptr;};
    void deleteNewNodeGroupName() { this->newNodeGroupName_ = nullptr;};
    inline string getNewNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(newNodeGroupName_, "") };
    inline UpdateNodeGroupRequest& setNewNodeGroupName(string newNodeGroupName) { DARABONBA_PTR_SET_VALUE(newNodeGroupName_, newNodeGroupName) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline UpdateNodeGroupRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline UpdateNodeGroupRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline UpdateNodeGroupRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Specifies whether to mount file storage on nodes.
    shared_ptr<bool> fileSystemMountEnabled_ {};
    // The ID of the image for the node group. If you omit this parameter, the image remains unchanged.
    shared_ptr<string> imageId_ {};
    // The name of the key pair.
    shared_ptr<string> keyPairName_ {};
    // The login password for the nodes in the node group.
    shared_ptr<string> loginPassword_ {};
    // The new name of the node group.
    shared_ptr<string> newNodeGroupName_ {};
    // The ID of the node group.
    shared_ptr<string> nodeGroupId_ {};
    // To query the RAM roles that you have created, call the ListRoles operation in the RAM API. The trust policy for the role must specify Intelligent Computing Lingjun as the trusted entity. Note: You cannot remove a role by clearing this parameter.
    shared_ptr<string> ramRoleName_ {};
    // The user data. This script runs at node startup.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
