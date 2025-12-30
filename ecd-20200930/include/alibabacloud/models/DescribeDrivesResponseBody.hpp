// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRIVESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRIVESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDrivesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrivesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Drives, drives_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrivesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Drives, drives_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDrivesResponseBody() = default ;
    DescribeDrivesResponseBody(const DescribeDrivesResponseBody &) = default ;
    DescribeDrivesResponseBody(DescribeDrivesResponseBody &&) = default ;
    DescribeDrivesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrivesResponseBody() = default ;
    DescribeDrivesResponseBody& operator=(const DescribeDrivesResponseBody &) = default ;
    DescribeDrivesResponseBody& operator=(DescribeDrivesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Drives : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Drives& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DesktopGroupCount, desktopGroupCount_);
        DARABONBA_PTR_TO_JSON(DesktopGroups, desktopGroups_);
        DARABONBA_PTR_TO_JSON(DomainId, domainId_);
        DARABONBA_PTR_TO_JSON(DriveId, driveId_);
        DARABONBA_PTR_TO_JSON(EnableProfileManagement, enableProfileManagement_);
        DARABONBA_PTR_TO_JSON(ExternalDomainId, externalDomainId_);
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
      friend void from_json(const Darabonba::Json& j, Drives& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DesktopGroupCount, desktopGroupCount_);
        DARABONBA_PTR_FROM_JSON(DesktopGroups, desktopGroups_);
        DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
        DARABONBA_PTR_FROM_JSON(DriveId, driveId_);
        DARABONBA_PTR_FROM_JSON(EnableProfileManagement, enableProfileManagement_);
        DARABONBA_PTR_FROM_JSON(ExternalDomainId, externalDomainId_);
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
      Drives() = default ;
      Drives(const Drives &) = default ;
      Drives(Drives &&) = default ;
      Drives(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Drives() = default ;
      Drives& operator=(const Drives &) = default ;
      Drives& operator=(Drives &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DesktopGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DesktopGroups& obj) { 
          DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
          DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, DesktopGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
          DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
        };
        DesktopGroups() = default ;
        DesktopGroups(const DesktopGroups &) = default ;
        DesktopGroups(DesktopGroups &&) = default ;
        DesktopGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DesktopGroups() = default ;
        DesktopGroups& operator=(const DesktopGroups &) = default ;
        DesktopGroups& operator=(DesktopGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->desktopGroupId_ == nullptr
        && this->desktopGroupName_ == nullptr; };
        // desktopGroupId Field Functions 
        bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
        void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
        inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
        inline DesktopGroups& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


        // desktopGroupName Field Functions 
        bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
        void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
        inline string getDesktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
        inline DesktopGroups& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


      protected:
        // The ID of the cloud computer pool.
        shared_ptr<string> desktopGroupId_ {};
        // The name of the cloud computer pool.
        shared_ptr<string> desktopGroupName_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->description_ == nullptr && this->desktopGroupCount_ == nullptr && this->desktopGroups_ == nullptr && this->domainId_ == nullptr && this->driveId_ == nullptr
        && this->enableProfileManagement_ == nullptr && this->externalDomainId_ == nullptr && this->externalDriveId_ == nullptr && this->externalUserId_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->profileRoaming_ == nullptr && this->status_ == nullptr
        && this->totalSize_ == nullptr && this->type_ == nullptr && this->usedSize_ == nullptr && this->userId_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Drives& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Drives& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // desktopGroupCount Field Functions 
      bool hasDesktopGroupCount() const { return this->desktopGroupCount_ != nullptr;};
      void deleteDesktopGroupCount() { this->desktopGroupCount_ = nullptr;};
      inline int32_t getDesktopGroupCount() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupCount_, 0) };
      inline Drives& setDesktopGroupCount(int32_t desktopGroupCount) { DARABONBA_PTR_SET_VALUE(desktopGroupCount_, desktopGroupCount) };


      // desktopGroups Field Functions 
      bool hasDesktopGroups() const { return this->desktopGroups_ != nullptr;};
      void deleteDesktopGroups() { this->desktopGroups_ = nullptr;};
      inline const vector<Drives::DesktopGroups> & getDesktopGroups() const { DARABONBA_PTR_GET_CONST(desktopGroups_, vector<Drives::DesktopGroups>) };
      inline vector<Drives::DesktopGroups> getDesktopGroups() { DARABONBA_PTR_GET(desktopGroups_, vector<Drives::DesktopGroups>) };
      inline Drives& setDesktopGroups(const vector<Drives::DesktopGroups> & desktopGroups) { DARABONBA_PTR_SET_VALUE(desktopGroups_, desktopGroups) };
      inline Drives& setDesktopGroups(vector<Drives::DesktopGroups> && desktopGroups) { DARABONBA_PTR_SET_RVALUE(desktopGroups_, desktopGroups) };


      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline Drives& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // driveId Field Functions 
      bool hasDriveId() const { return this->driveId_ != nullptr;};
      void deleteDriveId() { this->driveId_ = nullptr;};
      inline string getDriveId() const { DARABONBA_PTR_GET_DEFAULT(driveId_, "") };
      inline Drives& setDriveId(string driveId) { DARABONBA_PTR_SET_VALUE(driveId_, driveId) };


      // enableProfileManagement Field Functions 
      bool hasEnableProfileManagement() const { return this->enableProfileManagement_ != nullptr;};
      void deleteEnableProfileManagement() { this->enableProfileManagement_ = nullptr;};
      inline bool getEnableProfileManagement() const { DARABONBA_PTR_GET_DEFAULT(enableProfileManagement_, false) };
      inline Drives& setEnableProfileManagement(bool enableProfileManagement) { DARABONBA_PTR_SET_VALUE(enableProfileManagement_, enableProfileManagement) };


      // externalDomainId Field Functions 
      bool hasExternalDomainId() const { return this->externalDomainId_ != nullptr;};
      void deleteExternalDomainId() { this->externalDomainId_ = nullptr;};
      inline string getExternalDomainId() const { DARABONBA_PTR_GET_DEFAULT(externalDomainId_, "") };
      inline Drives& setExternalDomainId(string externalDomainId) { DARABONBA_PTR_SET_VALUE(externalDomainId_, externalDomainId) };


      // externalDriveId Field Functions 
      bool hasExternalDriveId() const { return this->externalDriveId_ != nullptr;};
      void deleteExternalDriveId() { this->externalDriveId_ = nullptr;};
      inline string getExternalDriveId() const { DARABONBA_PTR_GET_DEFAULT(externalDriveId_, "") };
      inline Drives& setExternalDriveId(string externalDriveId) { DARABONBA_PTR_SET_VALUE(externalDriveId_, externalDriveId) };


      // externalUserId Field Functions 
      bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
      void deleteExternalUserId() { this->externalUserId_ = nullptr;};
      inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
      inline Drives& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Drives& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Drives& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Drives& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Drives& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // profileRoaming Field Functions 
      bool hasProfileRoaming() const { return this->profileRoaming_ != nullptr;};
      void deleteProfileRoaming() { this->profileRoaming_ = nullptr;};
      inline bool getProfileRoaming() const { DARABONBA_PTR_GET_DEFAULT(profileRoaming_, false) };
      inline Drives& setProfileRoaming(bool profileRoaming) { DARABONBA_PTR_SET_VALUE(profileRoaming_, profileRoaming) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Drives& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Drives& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Drives& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // usedSize Field Functions 
      bool hasUsedSize() const { return this->usedSize_ != nullptr;};
      void deleteUsedSize() { this->usedSize_ = nullptr;};
      inline int64_t getUsedSize() const { DARABONBA_PTR_GET_DEFAULT(usedSize_, 0L) };
      inline Drives& setUsedSize(int64_t usedSize) { DARABONBA_PTR_SET_VALUE(usedSize_, usedSize) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Drives& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<int64_t> aliUid_ {};
      // The introduction to the storage resource.
      shared_ptr<string> description_ {};
      // The number of associated cloud computer pools.
      // 
      // >  This parameter is returned only if ResourceType is set to NAS and Type is set to USER_PROFILE.
      shared_ptr<int32_t> desktopGroupCount_ {};
      // The details of the associated cloud computers.
      // 
      // >  This parameter is returned only if ResourceType is set to NAS and Type is set to USER_PROFILE.
      shared_ptr<vector<Drives::DesktopGroups>> desktopGroups_ {};
      // The ID of the storage resource.
      shared_ptr<string> domainId_ {};
      // The ID of the user-level storage resource.
      shared_ptr<string> driveId_ {};
      // Indicates whether the UPM feature is enabled.
      shared_ptr<bool> enableProfileManagement_ {};
      // The ID of the external storage resource.
      // 
      // *   If ResourceType is set to NAS, the NAS ID is returned for this parameter.
      // *   If ResourceType is set to PDS, the PDS ID is returned for this parameter.
      shared_ptr<string> externalDomainId_ {};
      // The ID of the storage resource at the external user level.
      // 
      // >  This parameter is returned only if ResourceType is set to PDS.
      shared_ptr<string> externalDriveId_ {};
      // The ID of the external user.
      // 
      // >  This parameter is returned only if ResourceType is set to PDS.
      shared_ptr<string> externalUserId_ {};
      // The time when the storage resource was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the storage resource was modified.
      shared_ptr<string> gmtModified_ {};
      // The user ID.
      // 
      // >  You can ignore this parameter.
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
      // *   DELETING: deleting
      // *   INVALID: invalid
      // *   NORMAL: normal
      // *   FAIL: failed
      shared_ptr<string> status_ {};
      // The total amount of user-level storage capacity.
      shared_ptr<int64_t> totalSize_ {};
      // The usage of the storage resource.
      // 
      // Valid values:
      // 
      // *   DESKTOP: data disk space
      // *   USER_PROFILE: personal data space
      shared_ptr<string> type_ {};
      // The amount of user-level storage capacity used.
      shared_ptr<int64_t> usedSize_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->drives_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDrivesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeDrivesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // drives Field Functions 
    bool hasDrives() const { return this->drives_ != nullptr;};
    void deleteDrives() { this->drives_ = nullptr;};
    inline const vector<DescribeDrivesResponseBody::Drives> & getDrives() const { DARABONBA_PTR_GET_CONST(drives_, vector<DescribeDrivesResponseBody::Drives>) };
    inline vector<DescribeDrivesResponseBody::Drives> getDrives() { DARABONBA_PTR_GET(drives_, vector<DescribeDrivesResponseBody::Drives>) };
    inline DescribeDrivesResponseBody& setDrives(const vector<DescribeDrivesResponseBody::Drives> & drives) { DARABONBA_PTR_SET_VALUE(drives_, drives) };
    inline DescribeDrivesResponseBody& setDrives(vector<DescribeDrivesResponseBody::Drives> && drives) { DARABONBA_PTR_SET_RVALUE(drives_, drives) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDrivesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDrivesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDrivesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDrivesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The value 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The total number of storage resources.
    shared_ptr<int32_t> count_ {};
    // The user-level storage resources.
    shared_ptr<vector<DescribeDrivesResponseBody::Drives>> drives_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
