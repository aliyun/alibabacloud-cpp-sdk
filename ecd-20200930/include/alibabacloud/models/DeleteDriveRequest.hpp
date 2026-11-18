// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDRIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDRIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteDriveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDriveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DriveId, driveId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDriveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DriveId, driveId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteDriveRequest() = default ;
    DeleteDriveRequest(const DeleteDriveRequest &) = default ;
    DeleteDriveRequest(DeleteDriveRequest &&) = default ;
    DeleteDriveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDriveRequest() = default ;
    DeleteDriveRequest& operator=(const DeleteDriveRequest &) = default ;
    DeleteDriveRequest& operator=(DeleteDriveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainId_ == nullptr
        && this->driveId_ == nullptr && this->endUserId_ == nullptr && this->officeSiteId_ == nullptr && this->regionId_ == nullptr; };
    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline DeleteDriveRequest& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // driveId Field Functions 
    bool hasDriveId() const { return this->driveId_ != nullptr;};
    void deleteDriveId() { this->driveId_ = nullptr;};
    inline string getDriveId() const { DARABONBA_PTR_GET_DEFAULT(driveId_, "") };
    inline DeleteDriveRequest& setDriveId(string driveId) { DARABONBA_PTR_SET_VALUE(driveId_, driveId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DeleteDriveRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DeleteDriveRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDriveRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID.
    shared_ptr<string> domainId_ {};
    // The ID of the user-level storage resource.
    shared_ptr<string> driveId_ {};
    // The ID of the end user. This parameter is used when locating the UPM drive by using DomainId or OfficeSiteId.
    shared_ptr<string> endUserId_ {};
    // The ID of the workspace.
    shared_ptr<string> officeSiteId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
