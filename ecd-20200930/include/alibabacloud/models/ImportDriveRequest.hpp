// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTDRIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTDRIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ImportDriveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportDriveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(ForceUpdate, forceUpdate_);
      DARABONBA_PTR_TO_JSON(MountUrl, mountUrl_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportDriveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(ForceUpdate, forceUpdate_);
      DARABONBA_PTR_FROM_JSON(MountUrl, mountUrl_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ImportDriveRequest() = default ;
    ImportDriveRequest(const ImportDriveRequest &) = default ;
    ImportDriveRequest(ImportDriveRequest &&) = default ;
    ImportDriveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportDriveRequest() = default ;
    ImportDriveRequest& operator=(const ImportDriveRequest &) = default ;
    ImportDriveRequest& operator=(ImportDriveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainId_ == nullptr
        && this->endUserId_ == nullptr && this->forceUpdate_ == nullptr && this->mountUrl_ == nullptr && this->platform_ == nullptr && this->regionId_ == nullptr; };
    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline ImportDriveRequest& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline ImportDriveRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // forceUpdate Field Functions 
    bool hasForceUpdate() const { return this->forceUpdate_ != nullptr;};
    void deleteForceUpdate() { this->forceUpdate_ = nullptr;};
    inline bool getForceUpdate() const { DARABONBA_PTR_GET_DEFAULT(forceUpdate_, false) };
    inline ImportDriveRequest& setForceUpdate(bool forceUpdate) { DARABONBA_PTR_SET_VALUE(forceUpdate_, forceUpdate) };


    // mountUrl Field Functions 
    bool hasMountUrl() const { return this->mountUrl_ != nullptr;};
    void deleteMountUrl() { this->mountUrl_ = nullptr;};
    inline string getMountUrl() const { DARABONBA_PTR_GET_DEFAULT(mountUrl_, "") };
    inline ImportDriveRequest& setMountUrl(string mountUrl) { DARABONBA_PTR_SET_VALUE(mountUrl_, mountUrl) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ImportDriveRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ImportDriveRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The target UPM domain ID. For workspace scenarios, use the UpmDomainId instead of the NAS file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> domainId_ {};
    // The target ECD end user ID. The caller account is obtained from the authentication context.
    // 
    // This parameter is required.
    shared_ptr<string> endUserId_ {};
    // Specifies whether to force an update. Default value: false. If the file already exists and this parameter is set to false, the request fails. If this parameter is set to true, the original DriveId is reused for the update.
    shared_ptr<bool> forceUpdate_ {};
    // The relative path of the cloud application UPM. It must be the same as the path specified during upload authorization. For cloud desktops, do not pass this parameter or pass an empty value.
    shared_ptr<string> mountUrl_ {};
    // The target platform. Valid values: WINDOWS_10, WINDOWS_11, WINDOWS_SERVER_2019, WINDOWS_SERVER_2022, and WINDOWS_SERVER_2025.
    // 
    // This parameter is required.
    shared_ptr<string> platform_ {};
    // The region of the target UPM.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
