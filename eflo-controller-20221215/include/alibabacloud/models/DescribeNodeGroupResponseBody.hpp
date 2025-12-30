// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeNodeGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Az, az_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FileSystemMountEnabled, fileSystemMountEnabled_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(LoginType, loginType_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeGroupDescription, nodeGroupDescription_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VirtualGpuEnabled, virtualGpuEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Az, az_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FileSystemMountEnabled, fileSystemMountEnabled_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(LoginType, loginType_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeGroupDescription, nodeGroupDescription_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VirtualGpuEnabled, virtualGpuEnabled_);
    };
    DescribeNodeGroupResponseBody() = default ;
    DescribeNodeGroupResponseBody(const DescribeNodeGroupResponseBody &) = default ;
    DescribeNodeGroupResponseBody(DescribeNodeGroupResponseBody &&) = default ;
    DescribeNodeGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeGroupResponseBody() = default ;
    DescribeNodeGroupResponseBody& operator=(const DescribeNodeGroupResponseBody &) = default ;
    DescribeNodeGroupResponseBody& operator=(DescribeNodeGroupResponseBody &&) = default ;
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
      shared_ptr<string> category_ {};
      shared_ptr<string> performanceLevel_ {};
      shared_ptr<int32_t> size_ {};
    };

    virtual bool empty() const override { return this->az_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->createTime_ == nullptr && this->fileSystemMountEnabled_ == nullptr && this->imageId_ == nullptr
        && this->imageName_ == nullptr && this->keyPairName_ == nullptr && this->loginType_ == nullptr && this->machineType_ == nullptr && this->nodeCount_ == nullptr
        && this->nodeGroupDescription_ == nullptr && this->nodeGroupId_ == nullptr && this->nodeGroupName_ == nullptr && this->requestId_ == nullptr && this->systemDisk_ == nullptr
        && this->updateTime_ == nullptr && this->userData_ == nullptr && this->virtualGpuEnabled_ == nullptr; };
    // az Field Functions 
    bool hasAz() const { return this->az_ != nullptr;};
    void deleteAz() { this->az_ = nullptr;};
    inline string getAz() const { DARABONBA_PTR_GET_DEFAULT(az_, "") };
    inline DescribeNodeGroupResponseBody& setAz(string az) { DARABONBA_PTR_SET_VALUE(az_, az) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeNodeGroupResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeNodeGroupResponseBody& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeNodeGroupResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // fileSystemMountEnabled Field Functions 
    bool hasFileSystemMountEnabled() const { return this->fileSystemMountEnabled_ != nullptr;};
    void deleteFileSystemMountEnabled() { this->fileSystemMountEnabled_ = nullptr;};
    inline bool getFileSystemMountEnabled() const { DARABONBA_PTR_GET_DEFAULT(fileSystemMountEnabled_, false) };
    inline DescribeNodeGroupResponseBody& setFileSystemMountEnabled(bool fileSystemMountEnabled) { DARABONBA_PTR_SET_VALUE(fileSystemMountEnabled_, fileSystemMountEnabled) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeNodeGroupResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeNodeGroupResponseBody& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline DescribeNodeGroupResponseBody& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // loginType Field Functions 
    bool hasLoginType() const { return this->loginType_ != nullptr;};
    void deleteLoginType() { this->loginType_ = nullptr;};
    inline string getLoginType() const { DARABONBA_PTR_GET_DEFAULT(loginType_, "") };
    inline DescribeNodeGroupResponseBody& setLoginType(string loginType) { DARABONBA_PTR_SET_VALUE(loginType_, loginType) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string getMachineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline DescribeNodeGroupResponseBody& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline string getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, "") };
    inline DescribeNodeGroupResponseBody& setNodeCount(string nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeGroupDescription Field Functions 
    bool hasNodeGroupDescription() const { return this->nodeGroupDescription_ != nullptr;};
    void deleteNodeGroupDescription() { this->nodeGroupDescription_ = nullptr;};
    inline string getNodeGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupDescription_, "") };
    inline DescribeNodeGroupResponseBody& setNodeGroupDescription(string nodeGroupDescription) { DARABONBA_PTR_SET_VALUE(nodeGroupDescription_, nodeGroupDescription) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline DescribeNodeGroupResponseBody& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline DescribeNodeGroupResponseBody& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNodeGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const DescribeNodeGroupResponseBody::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, DescribeNodeGroupResponseBody::SystemDisk) };
    inline DescribeNodeGroupResponseBody::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, DescribeNodeGroupResponseBody::SystemDisk) };
    inline DescribeNodeGroupResponseBody& setSystemDisk(const DescribeNodeGroupResponseBody::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline DescribeNodeGroupResponseBody& setSystemDisk(DescribeNodeGroupResponseBody::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeNodeGroupResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline DescribeNodeGroupResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // virtualGpuEnabled Field Functions 
    bool hasVirtualGpuEnabled() const { return this->virtualGpuEnabled_ != nullptr;};
    void deleteVirtualGpuEnabled() { this->virtualGpuEnabled_ = nullptr;};
    inline bool getVirtualGpuEnabled() const { DARABONBA_PTR_GET_DEFAULT(virtualGpuEnabled_, false) };
    inline DescribeNodeGroupResponseBody& setVirtualGpuEnabled(bool virtualGpuEnabled) { DARABONBA_PTR_SET_VALUE(virtualGpuEnabled_, virtualGpuEnabled) };


  protected:
    shared_ptr<string> az_ {};
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> clusterName_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<bool> fileSystemMountEnabled_ {};
    shared_ptr<string> imageId_ {};
    shared_ptr<string> imageName_ {};
    shared_ptr<string> keyPairName_ {};
    shared_ptr<string> loginType_ {};
    shared_ptr<string> machineType_ {};
    shared_ptr<string> nodeCount_ {};
    shared_ptr<string> nodeGroupDescription_ {};
    shared_ptr<string> nodeGroupId_ {};
    shared_ptr<string> nodeGroupName_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeNodeGroupResponseBody::SystemDisk> systemDisk_ {};
    shared_ptr<string> updateTime_ {};
    shared_ptr<string> userData_ {};
    shared_ptr<bool> virtualGpuEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
