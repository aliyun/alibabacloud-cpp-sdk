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
        && this->accessPointId_ == nullptr && this->accessPointName_ == nullptr && this->enabledRam_ == nullptr && this->fileSystemId_ == nullptr; };
    // accessGroup Field Functions 
    bool hasAccessGroup() const { return this->accessGroup_ != nullptr;};
    void deleteAccessGroup() { this->accessGroup_ = nullptr;};
    inline string getAccessGroup() const { DARABONBA_PTR_GET_DEFAULT(accessGroup_, "") };
    inline ModifyAccessPointRequest& setAccessGroup(string accessGroup) { DARABONBA_PTR_SET_VALUE(accessGroup_, accessGroup) };


    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline ModifyAccessPointRequest& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // accessPointName Field Functions 
    bool hasAccessPointName() const { return this->accessPointName_ != nullptr;};
    void deleteAccessPointName() { this->accessPointName_ = nullptr;};
    inline string getAccessPointName() const { DARABONBA_PTR_GET_DEFAULT(accessPointName_, "") };
    inline ModifyAccessPointRequest& setAccessPointName(string accessPointName) { DARABONBA_PTR_SET_VALUE(accessPointName_, accessPointName) };


    // enabledRam Field Functions 
    bool hasEnabledRam() const { return this->enabledRam_ != nullptr;};
    void deleteEnabledRam() { this->enabledRam_ = nullptr;};
    inline bool getEnabledRam() const { DARABONBA_PTR_GET_DEFAULT(enabledRam_, false) };
    inline ModifyAccessPointRequest& setEnabledRam(bool enabledRam) { DARABONBA_PTR_SET_VALUE(enabledRam_, enabledRam) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyAccessPointRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // The permission group name.
    // 
    // This parameter is required when the file system is a General-purpose NAS file system.
    // 
    // Default permission group: DEFAULT_VPC_GROUP_NAME (the default VPC permission group).
    // > Agentic file systems do not support this parameter.
    shared_ptr<string> accessGroup_ {};
    // The access point ID.
    // 
    // This parameter is required.
    shared_ptr<string> accessPointId_ {};
    // The access point name.
    shared_ptr<string> accessPointName_ {};
    // Specifies whether to enable the RAM policy. Valid values:
    // 
    // - true: Enabled.
    // - false (default): Not enabled.
    // 
    // > After you enable the access point RAM policy, all Resource Access Management (RAM) users are denied access to mount and access data through the access point by default. You must grant the corresponding access permissions through authorization and mount and access data through the access point. After you disable the RAM policy, the access point allows anonymity mounting.
    // 
    // > Agentic file systems do not support this parameter.
    shared_ptr<bool> enabledRam_ {};
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
