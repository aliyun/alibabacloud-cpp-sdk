// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMOUNTPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMOUNTPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class CreateMountPointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMountPointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(UsePerformanceMode, usePerformanceMode_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMountPointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(UsePerformanceMode, usePerformanceMode_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateMountPointRequest() = default ;
    CreateMountPointRequest(const CreateMountPointRequest &) = default ;
    CreateMountPointRequest(CreateMountPointRequest &&) = default ;
    CreateMountPointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMountPointRequest() = default ;
    CreateMountPointRequest& operator=(const CreateMountPointRequest &) = default ;
    CreateMountPointRequest& operator=(CreateMountPointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupId_ == nullptr
        && return this->description_ == nullptr && return this->fileSystemId_ == nullptr && return this->inputRegionId_ == nullptr && return this->networkType_ == nullptr && return this->usePerformanceMode_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // accessGroupId Field Functions 
    bool hasAccessGroupId() const { return this->accessGroupId_ != nullptr;};
    void deleteAccessGroupId() { this->accessGroupId_ = nullptr;};
    inline string accessGroupId() const { DARABONBA_PTR_GET_DEFAULT(accessGroupId_, "") };
    inline CreateMountPointRequest& setAccessGroupId(string accessGroupId) { DARABONBA_PTR_SET_VALUE(accessGroupId_, accessGroupId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateMountPointRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateMountPointRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline CreateMountPointRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateMountPointRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // usePerformanceMode Field Functions 
    bool hasUsePerformanceMode() const { return this->usePerformanceMode_ != nullptr;};
    void deleteUsePerformanceMode() { this->usePerformanceMode_ = nullptr;};
    inline bool usePerformanceMode() const { DARABONBA_PTR_GET_DEFAULT(usePerformanceMode_, false) };
    inline CreateMountPointRequest& setUsePerformanceMode(bool usePerformanceMode) { DARABONBA_PTR_SET_VALUE(usePerformanceMode_, usePerformanceMode) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateMountPointRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateMountPointRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accessGroupId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<bool> usePerformanceMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
