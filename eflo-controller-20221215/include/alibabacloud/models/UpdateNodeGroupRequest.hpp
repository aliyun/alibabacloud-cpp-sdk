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
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNodeGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemMountEnabled, fileSystemMountEnabled_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
      DARABONBA_PTR_FROM_JSON(NewNodeGroupName, newNodeGroupName_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
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
        && return this->imageId_ == nullptr && return this->keyPairName_ == nullptr && return this->loginPassword_ == nullptr && return this->newNodeGroupName_ == nullptr && return this->nodeGroupId_ == nullptr
        && return this->userData_ == nullptr; };
    // fileSystemMountEnabled Field Functions 
    bool hasFileSystemMountEnabled() const { return this->fileSystemMountEnabled_ != nullptr;};
    void deleteFileSystemMountEnabled() { this->fileSystemMountEnabled_ = nullptr;};
    inline bool fileSystemMountEnabled() const { DARABONBA_PTR_GET_DEFAULT(fileSystemMountEnabled_, false) };
    inline UpdateNodeGroupRequest& setFileSystemMountEnabled(bool fileSystemMountEnabled) { DARABONBA_PTR_SET_VALUE(fileSystemMountEnabled_, fileSystemMountEnabled) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpdateNodeGroupRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline UpdateNodeGroupRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline UpdateNodeGroupRequest& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // newNodeGroupName Field Functions 
    bool hasNewNodeGroupName() const { return this->newNodeGroupName_ != nullptr;};
    void deleteNewNodeGroupName() { this->newNodeGroupName_ = nullptr;};
    inline string newNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(newNodeGroupName_, "") };
    inline UpdateNodeGroupRequest& setNewNodeGroupName(string newNodeGroupName) { DARABONBA_PTR_SET_VALUE(newNodeGroupName_, newNodeGroupName) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline UpdateNodeGroupRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline UpdateNodeGroupRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Whether file storage mounting is supported
    std::shared_ptr<bool> fileSystemMountEnabled_ = nullptr;
    // The default image ID of the node group. If not set, it will not change.
    std::shared_ptr<string> imageId_ = nullptr;
    // Key pair name.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // Login password for machines within the node group
    std::shared_ptr<string> loginPassword_ = nullptr;
    // Node group name
    std::shared_ptr<string> newNodeGroupName_ = nullptr;
    // Node group ID
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // User-defined script
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
