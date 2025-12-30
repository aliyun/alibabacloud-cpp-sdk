// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateNodeGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NodeGroup, nodeGroup_);
      DARABONBA_ANY_TO_JSON(NodeUnit, nodeUnit_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NodeGroup, nodeGroup_);
      DARABONBA_ANY_FROM_JSON(NodeUnit, nodeUnit_);
    };
    CreateNodeGroupRequest() = default ;
    CreateNodeGroupRequest(const CreateNodeGroupRequest &) = default ;
    CreateNodeGroupRequest(CreateNodeGroupRequest &&) = default ;
    CreateNodeGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeGroupRequest() = default ;
    CreateNodeGroupRequest& operator=(const CreateNodeGroupRequest &) = default ;
    CreateNodeGroupRequest& operator=(CreateNodeGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeGroup& obj) { 
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
      friend void from_json(const Darabonba::Json& j, NodeGroup& obj) { 
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
      NodeGroup() = default ;
      NodeGroup(const NodeGroup &) = default ;
      NodeGroup(NodeGroup &&) = default ;
      NodeGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeGroup() = default ;
      NodeGroup& operator=(const NodeGroup &) = default ;
      NodeGroup& operator=(NodeGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SystemDisk : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
          DARABONBA_PTR_TO_JSON(Size, size_);
        };
        friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
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
        virtual bool empty() const override { return this->category_ == nullptr
        && this->performanceLevel_ == nullptr && this->size_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline SystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // performanceLevel Field Functions 
        bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
        void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
        inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
        inline SystemDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
        inline SystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      protected:
        // Disk type. Value range:
        // 
        //  - cloud_essd: ESSD cloud disk.
        shared_ptr<string> category_ {};
        // When creating an ESSD cloud disk as a system disk, set the performance level of the cloud disk. Value range:
        // - PL0: Maximum random read/write IOPS per disk 10,000.
        // - PL1: Maximum random read/write IOPS per disk 50,000.
        shared_ptr<string> performanceLevel_ {};
        // Unit: GB.
        shared_ptr<int32_t> size_ {};
      };

      virtual bool empty() const override { return this->az_ == nullptr
        && this->fileSystemMountEnabled_ == nullptr && this->imageId_ == nullptr && this->keyPairName_ == nullptr && this->loginPassword_ == nullptr && this->machineType_ == nullptr
        && this->nodeGroupDescription_ == nullptr && this->nodeGroupName_ == nullptr && this->systemDisk_ == nullptr && this->userData_ == nullptr && this->virtualGpuEnabled_ == nullptr; };
      // az Field Functions 
      bool hasAz() const { return this->az_ != nullptr;};
      void deleteAz() { this->az_ = nullptr;};
      inline string getAz() const { DARABONBA_PTR_GET_DEFAULT(az_, "") };
      inline NodeGroup& setAz(string az) { DARABONBA_PTR_SET_VALUE(az_, az) };


      // fileSystemMountEnabled Field Functions 
      bool hasFileSystemMountEnabled() const { return this->fileSystemMountEnabled_ != nullptr;};
      void deleteFileSystemMountEnabled() { this->fileSystemMountEnabled_ = nullptr;};
      inline bool getFileSystemMountEnabled() const { DARABONBA_PTR_GET_DEFAULT(fileSystemMountEnabled_, false) };
      inline NodeGroup& setFileSystemMountEnabled(bool fileSystemMountEnabled) { DARABONBA_PTR_SET_VALUE(fileSystemMountEnabled_, fileSystemMountEnabled) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline NodeGroup& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // keyPairName Field Functions 
      bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
      void deleteKeyPairName() { this->keyPairName_ = nullptr;};
      inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
      inline NodeGroup& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


      // loginPassword Field Functions 
      bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
      void deleteLoginPassword() { this->loginPassword_ = nullptr;};
      inline string getLoginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
      inline NodeGroup& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


      // machineType Field Functions 
      bool hasMachineType() const { return this->machineType_ != nullptr;};
      void deleteMachineType() { this->machineType_ = nullptr;};
      inline string getMachineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
      inline NodeGroup& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


      // nodeGroupDescription Field Functions 
      bool hasNodeGroupDescription() const { return this->nodeGroupDescription_ != nullptr;};
      void deleteNodeGroupDescription() { this->nodeGroupDescription_ = nullptr;};
      inline string getNodeGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupDescription_, "") };
      inline NodeGroup& setNodeGroupDescription(string nodeGroupDescription) { DARABONBA_PTR_SET_VALUE(nodeGroupDescription_, nodeGroupDescription) };


      // nodeGroupName Field Functions 
      bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
      void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
      inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
      inline NodeGroup& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


      // systemDisk Field Functions 
      bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
      void deleteSystemDisk() { this->systemDisk_ = nullptr;};
      inline const NodeGroup::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, NodeGroup::SystemDisk) };
      inline NodeGroup::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, NodeGroup::SystemDisk) };
      inline NodeGroup& setSystemDisk(const NodeGroup::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
      inline NodeGroup& setSystemDisk(NodeGroup::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline NodeGroup& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // virtualGpuEnabled Field Functions 
      bool hasVirtualGpuEnabled() const { return this->virtualGpuEnabled_ != nullptr;};
      void deleteVirtualGpuEnabled() { this->virtualGpuEnabled_ = nullptr;};
      inline bool getVirtualGpuEnabled() const { DARABONBA_PTR_GET_DEFAULT(virtualGpuEnabled_, false) };
      inline NodeGroup& setVirtualGpuEnabled(bool virtualGpuEnabled) { DARABONBA_PTR_SET_VALUE(virtualGpuEnabled_, virtualGpuEnabled) };


    protected:
      // Availability Zone
      // 
      // This parameter is required.
      shared_ptr<string> az_ {};
      // Whether file storage mounting is supported
      shared_ptr<bool> fileSystemMountEnabled_ {};
      // Image ID.
      // 
      // This parameter is required.
      shared_ptr<string> imageId_ {};
      // Key pair name.
      shared_ptr<string> keyPairName_ {};
      // Password
      shared_ptr<string> loginPassword_ {};
      // Machine type
      // 
      // This parameter is required.
      shared_ptr<string> machineType_ {};
      // Node group description
      shared_ptr<string> nodeGroupDescription_ {};
      // Node group name
      // 
      // This parameter is required.
      shared_ptr<string> nodeGroupName_ {};
      // Details of the node system disk configuration.
      shared_ptr<NodeGroup::SystemDisk> systemDisk_ {};
      // User-defined data
      shared_ptr<string> userData_ {};
      // Whether to enable gpu virtualization or not
      shared_ptr<bool> virtualGpuEnabled_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->nodeGroup_ == nullptr && this->nodeUnit_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateNodeGroupRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // nodeGroup Field Functions 
    bool hasNodeGroup() const { return this->nodeGroup_ != nullptr;};
    void deleteNodeGroup() { this->nodeGroup_ = nullptr;};
    inline const CreateNodeGroupRequest::NodeGroup & getNodeGroup() const { DARABONBA_PTR_GET_CONST(nodeGroup_, CreateNodeGroupRequest::NodeGroup) };
    inline CreateNodeGroupRequest::NodeGroup getNodeGroup() { DARABONBA_PTR_GET(nodeGroup_, CreateNodeGroupRequest::NodeGroup) };
    inline CreateNodeGroupRequest& setNodeGroup(const CreateNodeGroupRequest::NodeGroup & nodeGroup) { DARABONBA_PTR_SET_VALUE(nodeGroup_, nodeGroup) };
    inline CreateNodeGroupRequest& setNodeGroup(CreateNodeGroupRequest::NodeGroup && nodeGroup) { DARABONBA_PTR_SET_RVALUE(nodeGroup_, nodeGroup) };


    // nodeUnit Field Functions 
    bool hasNodeUnit() const { return this->nodeUnit_ != nullptr;};
    void deleteNodeUnit() { this->nodeUnit_ = nullptr;};
    inline     const Darabonba::Json & getNodeUnit() const { DARABONBA_GET(nodeUnit_) };
    Darabonba::Json & getNodeUnit() { DARABONBA_GET(nodeUnit_) };
    inline CreateNodeGroupRequest& setNodeUnit(const Darabonba::Json & nodeUnit) { DARABONBA_SET_VALUE(nodeUnit_, nodeUnit) };
    inline CreateNodeGroupRequest& setNodeUnit(Darabonba::Json && nodeUnit) { DARABONBA_SET_RVALUE(nodeUnit_, nodeUnit) };


  protected:
    // Cluster ID
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // Node ID.
    // 
    // This parameter is required.
    shared_ptr<CreateNodeGroupRequest::NodeGroup> nodeGroup_ {};
    // Node information
    Darabonba::Json nodeUnit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
