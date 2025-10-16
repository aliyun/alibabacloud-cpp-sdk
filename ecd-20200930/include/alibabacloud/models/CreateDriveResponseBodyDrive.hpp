// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDRIVERESPONSEBODYDRIVE_HPP_
#define ALIBABACLOUD_MODELS_CREATEDRIVERESPONSEBODYDRIVE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateDriveResponseBodyDrive : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDriveResponseBodyDrive& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DriveId, driveId_);
      DARABONBA_PTR_TO_JSON(ExternalDriveId, externalDriveId_);
      DARABONBA_PTR_TO_JSON(ExternalUserId, externalUserId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProfileRoaming, profileRoaming_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UsedSize, usedSize_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDriveResponseBodyDrive& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DriveId, driveId_);
      DARABONBA_PTR_FROM_JSON(ExternalDriveId, externalDriveId_);
      DARABONBA_PTR_FROM_JSON(ExternalUserId, externalUserId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProfileRoaming, profileRoaming_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UsedSize, usedSize_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateDriveResponseBodyDrive() = default ;
    CreateDriveResponseBodyDrive(const CreateDriveResponseBodyDrive &) = default ;
    CreateDriveResponseBodyDrive(CreateDriveResponseBodyDrive &&) = default ;
    CreateDriveResponseBodyDrive(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDriveResponseBodyDrive() = default ;
    CreateDriveResponseBodyDrive& operator=(const CreateDriveResponseBodyDrive &) = default ;
    CreateDriveResponseBodyDrive& operator=(CreateDriveResponseBodyDrive &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->description_ == nullptr && return this->domainId_ == nullptr && return this->driveId_ == nullptr && return this->externalDriveId_ == nullptr && return this->externalUserId_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->profileRoaming_ == nullptr
        && return this->status_ == nullptr && return this->totalSize_ == nullptr && return this->type_ == nullptr && return this->usedSize_ == nullptr && return this->userId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline CreateDriveResponseBodyDrive& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDriveResponseBodyDrive& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline CreateDriveResponseBodyDrive& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // driveId Field Functions 
    bool hasDriveId() const { return this->driveId_ != nullptr;};
    void deleteDriveId() { this->driveId_ = nullptr;};
    inline string driveId() const { DARABONBA_PTR_GET_DEFAULT(driveId_, "") };
    inline CreateDriveResponseBodyDrive& setDriveId(string driveId) { DARABONBA_PTR_SET_VALUE(driveId_, driveId) };


    // externalDriveId Field Functions 
    bool hasExternalDriveId() const { return this->externalDriveId_ != nullptr;};
    void deleteExternalDriveId() { this->externalDriveId_ = nullptr;};
    inline string externalDriveId() const { DARABONBA_PTR_GET_DEFAULT(externalDriveId_, "") };
    inline CreateDriveResponseBodyDrive& setExternalDriveId(string externalDriveId) { DARABONBA_PTR_SET_VALUE(externalDriveId_, externalDriveId) };


    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string externalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline CreateDriveResponseBodyDrive& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline CreateDriveResponseBodyDrive& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline CreateDriveResponseBodyDrive& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateDriveResponseBodyDrive& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDriveResponseBodyDrive& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // profileRoaming Field Functions 
    bool hasProfileRoaming() const { return this->profileRoaming_ != nullptr;};
    void deleteProfileRoaming() { this->profileRoaming_ = nullptr;};
    inline bool profileRoaming() const { DARABONBA_PTR_GET_DEFAULT(profileRoaming_, false) };
    inline CreateDriveResponseBodyDrive& setProfileRoaming(bool profileRoaming) { DARABONBA_PTR_SET_VALUE(profileRoaming_, profileRoaming) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateDriveResponseBodyDrive& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline CreateDriveResponseBodyDrive& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateDriveResponseBodyDrive& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // usedSize Field Functions 
    bool hasUsedSize() const { return this->usedSize_ != nullptr;};
    void deleteUsedSize() { this->usedSize_ = nullptr;};
    inline int64_t usedSize() const { DARABONBA_PTR_GET_DEFAULT(usedSize_, 0L) };
    inline CreateDriveResponseBodyDrive& setUsedSize(int64_t usedSize) { DARABONBA_PTR_SET_VALUE(usedSize_, usedSize) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateDriveResponseBodyDrive& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> aliUid_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> domainId_ = nullptr;
    std::shared_ptr<string> driveId_ = nullptr;
    std::shared_ptr<string> externalDriveId_ = nullptr;
    std::shared_ptr<string> externalUserId_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    // ID。
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> profileRoaming_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> totalSize_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int64_t> usedSize_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
