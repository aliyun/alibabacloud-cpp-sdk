// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDRIVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDRIVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateDriveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDriveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Drive, drive_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDriveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Drive, drive_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateDriveResponseBody() = default ;
    CreateDriveResponseBody(const CreateDriveResponseBody &) = default ;
    CreateDriveResponseBody(CreateDriveResponseBody &&) = default ;
    CreateDriveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDriveResponseBody() = default ;
    CreateDriveResponseBody& operator=(const CreateDriveResponseBody &) = default ;
    CreateDriveResponseBody& operator=(CreateDriveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Drive : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Drive& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Drive& obj) { 
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
      Drive() = default ;
      Drive(const Drive &) = default ;
      Drive(Drive &&) = default ;
      Drive(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Drive() = default ;
      Drive& operator=(const Drive &) = default ;
      Drive& operator=(Drive &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->description_ == nullptr && this->domainId_ == nullptr && this->driveId_ == nullptr && this->externalDriveId_ == nullptr && this->externalUserId_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->profileRoaming_ == nullptr
        && this->status_ == nullptr && this->totalSize_ == nullptr && this->type_ == nullptr && this->usedSize_ == nullptr && this->userId_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline Drive& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Drive& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline Drive& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // driveId Field Functions 
      bool hasDriveId() const { return this->driveId_ != nullptr;};
      void deleteDriveId() { this->driveId_ = nullptr;};
      inline string getDriveId() const { DARABONBA_PTR_GET_DEFAULT(driveId_, "") };
      inline Drive& setDriveId(string driveId) { DARABONBA_PTR_SET_VALUE(driveId_, driveId) };


      // externalDriveId Field Functions 
      bool hasExternalDriveId() const { return this->externalDriveId_ != nullptr;};
      void deleteExternalDriveId() { this->externalDriveId_ = nullptr;};
      inline string getExternalDriveId() const { DARABONBA_PTR_GET_DEFAULT(externalDriveId_, "") };
      inline Drive& setExternalDriveId(string externalDriveId) { DARABONBA_PTR_SET_VALUE(externalDriveId_, externalDriveId) };


      // externalUserId Field Functions 
      bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
      void deleteExternalUserId() { this->externalUserId_ = nullptr;};
      inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
      inline Drive& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Drive& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Drive& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Drive& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Drive& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // profileRoaming Field Functions 
      bool hasProfileRoaming() const { return this->profileRoaming_ != nullptr;};
      void deleteProfileRoaming() { this->profileRoaming_ = nullptr;};
      inline bool getProfileRoaming() const { DARABONBA_PTR_GET_DEFAULT(profileRoaming_, false) };
      inline Drive& setProfileRoaming(bool profileRoaming) { DARABONBA_PTR_SET_VALUE(profileRoaming_, profileRoaming) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Drive& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Drive& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Drive& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // usedSize Field Functions 
      bool hasUsedSize() const { return this->usedSize_ != nullptr;};
      void deleteUsedSize() { this->usedSize_ = nullptr;};
      inline int64_t getUsedSize() const { DARABONBA_PTR_GET_DEFAULT(usedSize_, 0L) };
      inline Drive& setUsedSize(int64_t usedSize) { DARABONBA_PTR_SET_VALUE(usedSize_, usedSize) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Drive& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> aliUid_ {};
      // The description of the storage resource.
      shared_ptr<string> description_ {};
      // The ID of the storage resource.
      shared_ptr<string> domainId_ {};
      // The ID of the user-level storage resource.
      shared_ptr<string> driveId_ {};
      // The ID of the external user-level storage resource.
      // 
      // >  A value is returned for this parameter only if ResourceType is set to PDS.
      shared_ptr<string> externalDriveId_ {};
      // The ID of the external user.
      shared_ptr<string> externalUserId_ {};
      // The time when the storage resource was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the storage resource was last modified.
      shared_ptr<string> gmtModified_ {};
      // The ID.
      shared_ptr<string> id_ {};
      // The name of the storage resource.
      shared_ptr<string> name_ {};
      // >  This parameter is deprecated.
      shared_ptr<bool> profileRoaming_ {};
      // The status of the user-level storage resource.
      // 
      // Valid values:
      // 
      // *   INIT: initializing
      // *   MAINTAIN: maintaining
      // *   DELETING
      // *   INVALID
      // *   NORMAL
      // *   FAIL: failed
      shared_ptr<string> status_ {};
      // The total amount of the user-level storage resource capacity.
      // 
      // >  Unit: bytes.
      shared_ptr<int64_t> totalSize_ {};
      // The usage of the storage resource.
      // 
      // Valid values:
      // 
      // *   DESKTOP: data disk space
      // *   USER_PROFILE: space for personal data of the user
      shared_ptr<string> type_ {};
      // The amount of user-level storage resource capacity used.
      // 
      // >  Unit: bytes.
      shared_ptr<int64_t> usedSize_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->drive_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateDriveResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // drive Field Functions 
    bool hasDrive() const { return this->drive_ != nullptr;};
    void deleteDrive() { this->drive_ = nullptr;};
    inline const CreateDriveResponseBody::Drive & getDrive() const { DARABONBA_PTR_GET_CONST(drive_, CreateDriveResponseBody::Drive) };
    inline CreateDriveResponseBody::Drive getDrive() { DARABONBA_PTR_GET(drive_, CreateDriveResponseBody::Drive) };
    inline CreateDriveResponseBody& setDrive(const CreateDriveResponseBody::Drive & drive) { DARABONBA_PTR_SET_VALUE(drive_, drive) };
    inline CreateDriveResponseBody& setDrive(CreateDriveResponseBody::Drive && drive) { DARABONBA_PTR_SET_RVALUE(drive_, drive) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateDriveResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDriveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateDriveResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The value 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The user-level storage resource.
    shared_ptr<CreateDriveResponseBody::Drive> drive_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
