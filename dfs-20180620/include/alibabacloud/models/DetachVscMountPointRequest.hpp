// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHVSCMOUNTPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHVSCMOUNTPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DetachVscMountPointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachVscMountPointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_TO_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
      DARABONBA_PTR_TO_JSON(VscIds, vscIds_);
    };
    friend void from_json(const Darabonba::Json& j, DetachVscMountPointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_FROM_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
      DARABONBA_PTR_FROM_JSON(VscIds, vscIds_);
    };
    DetachVscMountPointRequest() = default ;
    DetachVscMountPointRequest(const DetachVscMountPointRequest &) = default ;
    DetachVscMountPointRequest(DetachVscMountPointRequest &&) = default ;
    DetachVscMountPointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachVscMountPointRequest() = default ;
    DetachVscMountPointRequest& operator=(const DetachVscMountPointRequest &) = default ;
    DetachVscMountPointRequest& operator=(DetachVscMountPointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->inputRegionId_ == nullptr && return this->instanceIds_ == nullptr && return this->mountPointId_ == nullptr && return this->useAssumeRoleChkServerPerm_ == nullptr
        && return this->vscIds_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DetachVscMountPointRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DetachVscMountPointRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline DetachVscMountPointRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DetachVscMountPointRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DetachVscMountPointRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // mountPointId Field Functions 
    bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
    void deleteMountPointId() { this->mountPointId_ = nullptr;};
    inline string mountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
    inline DetachVscMountPointRequest& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


    // useAssumeRoleChkServerPerm Field Functions 
    bool hasUseAssumeRoleChkServerPerm() const { return this->useAssumeRoleChkServerPerm_ != nullptr;};
    void deleteUseAssumeRoleChkServerPerm() { this->useAssumeRoleChkServerPerm_ = nullptr;};
    inline bool useAssumeRoleChkServerPerm() const { DARABONBA_PTR_GET_DEFAULT(useAssumeRoleChkServerPerm_, false) };
    inline DetachVscMountPointRequest& setUseAssumeRoleChkServerPerm(bool useAssumeRoleChkServerPerm) { DARABONBA_PTR_SET_VALUE(useAssumeRoleChkServerPerm_, useAssumeRoleChkServerPerm) };


    // vscIds Field Functions 
    bool hasVscIds() const { return this->vscIds_ != nullptr;};
    void deleteVscIds() { this->vscIds_ = nullptr;};
    inline const vector<string> & vscIds() const { DARABONBA_PTR_GET_CONST(vscIds_, vector<string>) };
    inline vector<string> vscIds() { DARABONBA_PTR_GET(vscIds_, vector<string>) };
    inline DetachVscMountPointRequest& setVscIds(const vector<string> & vscIds) { DARABONBA_PTR_SET_VALUE(vscIds_, vscIds) };
    inline DetachVscMountPointRequest& setVscIds(vector<string> && vscIds) { DARABONBA_PTR_SET_RVALUE(vscIds_, vscIds) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mountPointId_ = nullptr;
    std::shared_ptr<bool> useAssumeRoleChkServerPerm_ = nullptr;
    std::shared_ptr<vector<string>> vscIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
