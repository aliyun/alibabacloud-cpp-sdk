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
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
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
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
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
    class SystemDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      };
      friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      };
      SystemDisk() = default ;
      SystemDisk(const SystemDisk &) = default ;
      SystemDisk(SystemDisk &&) = default ;
      SystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemDisk() = default ;
      SystemDisk& operator=(const SystemDisk &) = default ;
      SystemDisk& operator=(SystemDisk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->performanceLevel_ == nullptr; };
      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
      inline SystemDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    protected:
      // The performance level.
      shared_ptr<string> performanceLevel_ {};
    };

    virtual bool empty() const override { return this->fileSystemMountEnabled_ == nullptr
        && this->imageId_ == nullptr && this->keyPairName_ == nullptr && this->loginPassword_ == nullptr && this->newNodeGroupName_ == nullptr && this->nodeGroupId_ == nullptr
        && this->ramRoleName_ == nullptr && this->systemDisk_ == nullptr && this->userData_ == nullptr; };
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


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const UpdateNodeGroupRequest::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, UpdateNodeGroupRequest::SystemDisk) };
    inline UpdateNodeGroupRequest::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, UpdateNodeGroupRequest::SystemDisk) };
    inline UpdateNodeGroupRequest& setSystemDisk(const UpdateNodeGroupRequest::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline UpdateNodeGroupRequest& setSystemDisk(UpdateNodeGroupRequest::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline UpdateNodeGroupRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Specifies whether file storage mounting is supported.
    shared_ptr<bool> fileSystemMountEnabled_ {};
    // The default image ID of the node group. If you do not specify this parameter, the image ID remains unchanged.
    shared_ptr<string> imageId_ {};
    // The name of the key pair.
    shared_ptr<string> keyPairName_ {};
    // The logon password for the machines in the node group.
    shared_ptr<string> loginPassword_ {};
    // The name of the node group.
    shared_ptr<string> newNodeGroupName_ {};
    // The ID of the node group.
    shared_ptr<string> nodeGroupId_ {};
    // The name of the RAM role for the node. You can call the ListRoles API operation of RAM to query the RAM roles that you have created. The trusted entity of the role must be Lingjun AI Computing Service. <warning>Submitting an empty string "" clears the RAM role of the node group.</warning>
    shared_ptr<string> ramRoleName_ {};
    // The system cloud disk configuration.
    shared_ptr<UpdateNodeGroupRequest::SystemDisk> systemDisk_ {};
    // The custom executable shell script. It must be Base64-encoded, and the maximum size of the raw data is 16 KB.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
