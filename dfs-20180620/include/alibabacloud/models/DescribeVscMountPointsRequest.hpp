// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSCMOUNTPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSCMOUNTPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DescribeVscMountPointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVscMountPointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VscId, vscId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVscMountPointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VscId, vscId_);
    };
    DescribeVscMountPointsRequest() = default ;
    DescribeVscMountPointsRequest(const DescribeVscMountPointsRequest &) = default ;
    DescribeVscMountPointsRequest(DescribeVscMountPointsRequest &&) = default ;
    DescribeVscMountPointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVscMountPointsRequest() = default ;
    DescribeVscMountPointsRequest& operator=(const DescribeVscMountPointsRequest &) = default ;
    DescribeVscMountPointsRequest& operator=(DescribeVscMountPointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && return this->inputRegionId_ == nullptr && return this->instanceId_ == nullptr && return this->mountPointId_ == nullptr && return this->status_ == nullptr && return this->vscId_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeVscMountPointsRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline DescribeVscMountPointsRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVscMountPointsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mountPointId Field Functions 
    bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
    void deleteMountPointId() { this->mountPointId_ = nullptr;};
    inline string mountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
    inline DescribeVscMountPointsRequest& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVscMountPointsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vscId Field Functions 
    bool hasVscId() const { return this->vscId_ != nullptr;};
    void deleteVscId() { this->vscId_ = nullptr;};
    inline string vscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
    inline DescribeVscMountPointsRequest& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> mountPointId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> vscId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
