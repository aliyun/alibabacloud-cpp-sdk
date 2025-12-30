// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDRIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDRIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateDriveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDriveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DriveName, driveName_);
      DARABONBA_PTR_TO_JSON(ExternalDomainId, externalDomainId_);
      DARABONBA_PTR_TO_JSON(ProfileRoaming, profileRoaming_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDriveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DriveName, driveName_);
      DARABONBA_PTR_FROM_JSON(ExternalDomainId, externalDomainId_);
      DARABONBA_PTR_FROM_JSON(ProfileRoaming, profileRoaming_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateDriveRequest() = default ;
    CreateDriveRequest(const CreateDriveRequest &) = default ;
    CreateDriveRequest(CreateDriveRequest &&) = default ;
    CreateDriveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDriveRequest() = default ;
    CreateDriveRequest& operator=(const CreateDriveRequest &) = default ;
    CreateDriveRequest& operator=(CreateDriveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->description_ == nullptr && this->domainId_ == nullptr && this->driveName_ == nullptr && this->externalDomainId_ == nullptr && this->profileRoaming_ == nullptr
        && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->type_ == nullptr && this->userId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline CreateDriveRequest& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDriveRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline CreateDriveRequest& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // driveName Field Functions 
    bool hasDriveName() const { return this->driveName_ != nullptr;};
    void deleteDriveName() { this->driveName_ = nullptr;};
    inline string getDriveName() const { DARABONBA_PTR_GET_DEFAULT(driveName_, "") };
    inline CreateDriveRequest& setDriveName(string driveName) { DARABONBA_PTR_SET_VALUE(driveName_, driveName) };


    // externalDomainId Field Functions 
    bool hasExternalDomainId() const { return this->externalDomainId_ != nullptr;};
    void deleteExternalDomainId() { this->externalDomainId_ = nullptr;};
    inline string getExternalDomainId() const { DARABONBA_PTR_GET_DEFAULT(externalDomainId_, "") };
    inline CreateDriveRequest& setExternalDomainId(string externalDomainId) { DARABONBA_PTR_SET_VALUE(externalDomainId_, externalDomainId) };


    // profileRoaming Field Functions 
    bool hasProfileRoaming() const { return this->profileRoaming_ != nullptr;};
    void deleteProfileRoaming() { this->profileRoaming_ = nullptr;};
    inline bool getProfileRoaming() const { DARABONBA_PTR_GET_DEFAULT(profileRoaming_, false) };
    inline CreateDriveRequest& setProfileRoaming(bool profileRoaming) { DARABONBA_PTR_SET_VALUE(profileRoaming_, profileRoaming) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDriveRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateDriveRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateDriveRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateDriveRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of your Alibaba Cloud account.
    shared_ptr<int64_t> aliUid_ {};
    // The description of the user-level storage resource.
    shared_ptr<string> description_ {};
    // The ID of the storage resource.
    // 
    // >  Call the DescribeDrives operation to retrieve the storage resource ID.
    shared_ptr<string> domainId_ {};
    // The name of the user-level storage resource.
    shared_ptr<string> driveName_ {};
    // The ID of the external storage resource.
    // 
    // >  Call the DescribeDrives operation to retrieve the external storage resource ID.
    shared_ptr<string> externalDomainId_ {};
    // >  This parameter is deprecated.
    shared_ptr<bool> profileRoaming_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The type of the storage resource.
    // 
    // Valid values:
    // 
    // *   NAS: File Storage NAS
    // *   PDS: Drive and Photo Service
    shared_ptr<string> resourceType_ {};
    // The usage of the storage resource.
    // 
    // Valid values:
    // 
    // *   DESKTOP: data disk space
    // *   USER_PROFILE: space for personal data of the user
    shared_ptr<string> type_ {};
    // The user ID.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
