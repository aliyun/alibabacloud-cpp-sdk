// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILEPERMISSIONMEMBER_HPP_
#define ALIBABACLOUD_MODELS_FILEPERMISSIONMEMBER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class FilePermissionMember : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilePermissionMember& obj) { 
      DARABONBA_PTR_TO_JSON(CdsIdentity, cdsIdentity_);
      DARABONBA_PTR_TO_JSON(DisinheritSubGroup, disinheritSubGroup_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, FilePermissionMember& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsIdentity, cdsIdentity_);
      DARABONBA_PTR_FROM_JSON(DisinheritSubGroup, disinheritSubGroup_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
    };
    FilePermissionMember() = default ;
    FilePermissionMember(const FilePermissionMember &) = default ;
    FilePermissionMember(FilePermissionMember &&) = default ;
    FilePermissionMember(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilePermissionMember() = default ;
    FilePermissionMember& operator=(const FilePermissionMember &) = default ;
    FilePermissionMember& operator=(FilePermissionMember &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CdsIdentity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CdsIdentity& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CdsIdentity& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      CdsIdentity() = default ;
      CdsIdentity(const CdsIdentity &) = default ;
      CdsIdentity(CdsIdentity &&) = default ;
      CdsIdentity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CdsIdentity() = default ;
      CdsIdentity& operator=(const CdsIdentity &) = default ;
      CdsIdentity& operator=(CdsIdentity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->type_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline CdsIdentity& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CdsIdentity& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The user ID or a team ID.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // The object type.
      // 
      // Valid values:
      // 
      // *   IT_Group: team
      // *   IT_User: user
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->cdsIdentity_ == nullptr
        && this->disinheritSubGroup_ == nullptr && this->expireTime_ == nullptr && this->roleId_ == nullptr; };
    // cdsIdentity Field Functions 
    bool hasCdsIdentity() const { return this->cdsIdentity_ != nullptr;};
    void deleteCdsIdentity() { this->cdsIdentity_ = nullptr;};
    inline const FilePermissionMember::CdsIdentity & getCdsIdentity() const { DARABONBA_PTR_GET_CONST(cdsIdentity_, FilePermissionMember::CdsIdentity) };
    inline FilePermissionMember::CdsIdentity getCdsIdentity() { DARABONBA_PTR_GET(cdsIdentity_, FilePermissionMember::CdsIdentity) };
    inline FilePermissionMember& setCdsIdentity(const FilePermissionMember::CdsIdentity & cdsIdentity) { DARABONBA_PTR_SET_VALUE(cdsIdentity_, cdsIdentity) };
    inline FilePermissionMember& setCdsIdentity(FilePermissionMember::CdsIdentity && cdsIdentity) { DARABONBA_PTR_SET_RVALUE(cdsIdentity_, cdsIdentity) };


    // disinheritSubGroup Field Functions 
    bool hasDisinheritSubGroup() const { return this->disinheritSubGroup_ != nullptr;};
    void deleteDisinheritSubGroup() { this->disinheritSubGroup_ = nullptr;};
    inline bool getDisinheritSubGroup() const { DARABONBA_PTR_GET_DEFAULT(disinheritSubGroup_, false) };
    inline FilePermissionMember& setDisinheritSubGroup(bool disinheritSubGroup) { DARABONBA_PTR_SET_VALUE(disinheritSubGroup_, disinheritSubGroup) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline FilePermissionMember& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline FilePermissionMember& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    // The object that you want to grant permissions. The object can be a user or a group.
    // 
    // This parameter is required.
    shared_ptr<FilePermissionMember::CdsIdentity> cdsIdentity_ {};
    // Indicates whether to disable the permission from users in the subgroup.
    shared_ptr<bool> disinheritSubGroup_ {};
    // The expiration time. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC
    shared_ptr<int64_t> expireTime_ {};
    // The role.
    // 
    // Valid values:
    // 
    // *   SystemFileEditorWithoutShareLink: The role that can edit but cannot share files.
    // *   SystemFileUploaderAndDownloaderWithShareLink: The role that can upload, download, and share files.
    // *   SystemFileDownloader: The role that can download files.
    // *   SystemFileEditorWithoutDelete: The role that can edit but cannot edit files.
    // *   SystemFileOwner: The role that can collaborate with others on files.
    // *   SystemFileDownloaderWithShareLink: The role that can download and share files.
    // *   SystemFileUploaderAndViewer: The role that can preview and upload files.
    // *   SystemFileViewer: The role that can preview files.
    // *   SystemFileEditor: The role that can edit files.
    // *   SystemFileUploaderWithShareLink: The role that can upload and share files.
    // *   SystemFileUploader: The role that can upload files.
    // *   SystemFileUploaderAndDownloader: The role that can upload and download files.
    // *   SystemFileMetaViewer: The role that can view file list.
    // 
    // This parameter is required.
    shared_ptr<string> roleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
