// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBACKUPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBACKUPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateBackupConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBackupConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupConfig, backupConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBackupConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupConfig, backupConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
    };
    UpdateBackupConfigRequest() = default ;
    UpdateBackupConfigRequest(const UpdateBackupConfigRequest &) = default ;
    UpdateBackupConfigRequest(UpdateBackupConfigRequest &&) = default ;
    UpdateBackupConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBackupConfigRequest() = default ;
    UpdateBackupConfigRequest& operator=(const UpdateBackupConfigRequest &) = default ;
    UpdateBackupConfigRequest& operator=(UpdateBackupConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupConfig_ == nullptr
        && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->serviceCode_ == nullptr; };
    // backupConfig Field Functions 
    bool hasBackupConfig() const { return this->backupConfig_ != nullptr;};
    void deleteBackupConfig() { this->backupConfig_ = nullptr;};
    inline string getBackupConfig() const { DARABONBA_PTR_GET_DEFAULT(backupConfig_, "") };
    inline UpdateBackupConfigRequest& setBackupConfig(string backupConfig) { DARABONBA_PTR_SET_VALUE(backupConfig_, backupConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateBackupConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UpdateBackupConfigRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline UpdateBackupConfigRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


  protected:
    // Evidence backup configuration.
    shared_ptr<string> backupConfig_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Resource type.
    shared_ptr<string> resourceType_ {};
    // Service code.
    shared_ptr<string> serviceCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
