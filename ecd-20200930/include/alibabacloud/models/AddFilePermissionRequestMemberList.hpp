// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILEPERMISSIONREQUESTMEMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_ADDFILEPERMISSIONREQUESTMEMBERLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddFilePermissionRequestMemberListCdsIdentity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class AddFilePermissionRequestMemberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFilePermissionRequestMemberList& obj) { 
      DARABONBA_PTR_TO_JSON(CdsIdentity, cdsIdentity_);
      DARABONBA_PTR_TO_JSON(DisinheritSubGroup, disinheritSubGroup_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, AddFilePermissionRequestMemberList& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsIdentity, cdsIdentity_);
      DARABONBA_PTR_FROM_JSON(DisinheritSubGroup, disinheritSubGroup_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
    };
    AddFilePermissionRequestMemberList() = default ;
    AddFilePermissionRequestMemberList(const AddFilePermissionRequestMemberList &) = default ;
    AddFilePermissionRequestMemberList(AddFilePermissionRequestMemberList &&) = default ;
    AddFilePermissionRequestMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFilePermissionRequestMemberList() = default ;
    AddFilePermissionRequestMemberList& operator=(const AddFilePermissionRequestMemberList &) = default ;
    AddFilePermissionRequestMemberList& operator=(AddFilePermissionRequestMemberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cdsIdentity_ != nullptr
        && this->disinheritSubGroup_ != nullptr && this->expireTime_ != nullptr && this->roleId_ != nullptr; };
    // cdsIdentity Field Functions 
    bool hasCdsIdentity() const { return this->cdsIdentity_ != nullptr;};
    void deleteCdsIdentity() { this->cdsIdentity_ = nullptr;};
    inline const Models::AddFilePermissionRequestMemberListCdsIdentity & cdsIdentity() const { DARABONBA_PTR_GET_CONST(cdsIdentity_, Models::AddFilePermissionRequestMemberListCdsIdentity) };
    inline Models::AddFilePermissionRequestMemberListCdsIdentity cdsIdentity() { DARABONBA_PTR_GET(cdsIdentity_, Models::AddFilePermissionRequestMemberListCdsIdentity) };
    inline AddFilePermissionRequestMemberList& setCdsIdentity(const Models::AddFilePermissionRequestMemberListCdsIdentity & cdsIdentity) { DARABONBA_PTR_SET_VALUE(cdsIdentity_, cdsIdentity) };
    inline AddFilePermissionRequestMemberList& setCdsIdentity(Models::AddFilePermissionRequestMemberListCdsIdentity && cdsIdentity) { DARABONBA_PTR_SET_RVALUE(cdsIdentity_, cdsIdentity) };


    // disinheritSubGroup Field Functions 
    bool hasDisinheritSubGroup() const { return this->disinheritSubGroup_ != nullptr;};
    void deleteDisinheritSubGroup() { this->disinheritSubGroup_ = nullptr;};
    inline bool disinheritSubGroup() const { DARABONBA_PTR_GET_DEFAULT(disinheritSubGroup_, false) };
    inline AddFilePermissionRequestMemberList& setDisinheritSubGroup(bool disinheritSubGroup) { DARABONBA_PTR_SET_VALUE(disinheritSubGroup_, disinheritSubGroup) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline AddFilePermissionRequestMemberList& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline AddFilePermissionRequestMemberList& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    // The user of the cloud disk.
    // 
    // This parameter is required.
    std::shared_ptr<Models::AddFilePermissionRequestMemberListCdsIdentity> cdsIdentity_ = nullptr;
    // Specifies whether the users of the child group can inherit the folder permissions.
    std::shared_ptr<bool> disinheritSubGroup_ = nullptr;
    // The time when the authorization expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. The value never expires. You can specify a value that is predefined by the system for this parameter. Example: 4775500800000.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The ID of the role to which you want to attach the folder permissions. To configure the folder permissions: you can specify a role or create custom operation permissions. You can use RoleId to specify a role. RoleId is mutually exclusive with ActionList. If you specify both of them, the value of RoleId takes precedence.
    // 
    // Valid values:
    // 
    // * SystemFileEditorWithoutShareLink
    // * SystemFileUploaderAndDownloaderWithShareLink
    // * SystemFileDownloader
    // * SystemFileEditorWithoutDelete
    // * SystemFileOwner
    // * SystemFileDownloaderWithShareLink
    // * SystemFileUploaderAndViewer
    // * SystemFileViewer
    // * SystemFileEditor
    // * SystemFileUploaderWithShareLink
    // * SystemFileUploader
    // * SystemFileUploaderAndDownloader
    // * SystemFileMetaViewer
    // 
    // This parameter is required.
    std::shared_ptr<string> roleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
