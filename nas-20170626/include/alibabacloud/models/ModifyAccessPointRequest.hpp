// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCESSPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCESSPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyAccessPointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccessPointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroup, accessGroup_);
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(AccessPointName, accessPointName_);
      DARABONBA_PTR_TO_JSON(EnabledRam, enabledRam_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccessPointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroup, accessGroup_);
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(AccessPointName, accessPointName_);
      DARABONBA_PTR_FROM_JSON(EnabledRam, enabledRam_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    ModifyAccessPointRequest() = default ;
    ModifyAccessPointRequest(const ModifyAccessPointRequest &) = default ;
    ModifyAccessPointRequest(ModifyAccessPointRequest &&) = default ;
    ModifyAccessPointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccessPointRequest() = default ;
    ModifyAccessPointRequest& operator=(const ModifyAccessPointRequest &) = default ;
    ModifyAccessPointRequest& operator=(ModifyAccessPointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroup_ == nullptr
        && return this->accessPointId_ == nullptr && return this->accessPointName_ == nullptr && return this->enabledRam_ == nullptr && return this->fileSystemId_ == nullptr; };
    // accessGroup Field Functions 
    bool hasAccessGroup() const { return this->accessGroup_ != nullptr;};
    void deleteAccessGroup() { this->accessGroup_ = nullptr;};
    inline string accessGroup() const { DARABONBA_PTR_GET_DEFAULT(accessGroup_, "") };
    inline ModifyAccessPointRequest& setAccessGroup(string accessGroup) { DARABONBA_PTR_SET_VALUE(accessGroup_, accessGroup) };


    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline ModifyAccessPointRequest& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // accessPointName Field Functions 
    bool hasAccessPointName() const { return this->accessPointName_ != nullptr;};
    void deleteAccessPointName() { this->accessPointName_ = nullptr;};
    inline string accessPointName() const { DARABONBA_PTR_GET_DEFAULT(accessPointName_, "") };
    inline ModifyAccessPointRequest& setAccessPointName(string accessPointName) { DARABONBA_PTR_SET_VALUE(accessPointName_, accessPointName) };


    // enabledRam Field Functions 
    bool hasEnabledRam() const { return this->enabledRam_ != nullptr;};
    void deleteEnabledRam() { this->enabledRam_ = nullptr;};
    inline bool enabledRam() const { DARABONBA_PTR_GET_DEFAULT(enabledRam_, false) };
    inline ModifyAccessPointRequest& setEnabledRam(bool enabledRam) { DARABONBA_PTR_SET_VALUE(enabledRam_, enabledRam) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyAccessPointRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // The name of the permission group.
    // 
    // This parameter is required for a General-purpose File Storage NAS (NAS) file system.
    // 
    // The default permission group for virtual private clouds (VPCs) is named DEFAULT_VPC_GROUP_NAME.
    std::shared_ptr<string> accessGroup_ = nullptr;
    // The ID of the access point.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessPointId_ = nullptr;
    // The name of the access point.
    std::shared_ptr<string> accessPointName_ = nullptr;
    // Specifies whether to enable the Resource Access Management (RAM) policy. Valid values:
    // 
    // *   true: The RAM policy is enabled.
    // *   false (default): The RAM policy is disabled.
    // 
    // >  After the RAM policy is enabled for access points, no RAM user is allowed to use access points to mount and access data by default. To use access points to mount and access data as a RAM user, you must grant the related access permissions to the RAM user. If the RAM policy is disabled, access points can be anonymously mounted.
    std::shared_ptr<bool> enabledRam_ = nullptr;
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
