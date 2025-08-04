// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEFILEPERMISSIONREQUESTMEMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEFILEPERMISSIONREQUESTMEMBERLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RemoveFilePermissionRequestMemberListCdsIdentity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class RemoveFilePermissionRequestMemberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveFilePermissionRequestMemberList& obj) { 
      DARABONBA_PTR_TO_JSON(CdsIdentity, cdsIdentity_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveFilePermissionRequestMemberList& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsIdentity, cdsIdentity_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
    };
    RemoveFilePermissionRequestMemberList() = default ;
    RemoveFilePermissionRequestMemberList(const RemoveFilePermissionRequestMemberList &) = default ;
    RemoveFilePermissionRequestMemberList(RemoveFilePermissionRequestMemberList &&) = default ;
    RemoveFilePermissionRequestMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveFilePermissionRequestMemberList() = default ;
    RemoveFilePermissionRequestMemberList& operator=(const RemoveFilePermissionRequestMemberList &) = default ;
    RemoveFilePermissionRequestMemberList& operator=(RemoveFilePermissionRequestMemberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cdsIdentity_ != nullptr
        && this->roleId_ != nullptr; };
    // cdsIdentity Field Functions 
    bool hasCdsIdentity() const { return this->cdsIdentity_ != nullptr;};
    void deleteCdsIdentity() { this->cdsIdentity_ = nullptr;};
    inline const Models::RemoveFilePermissionRequestMemberListCdsIdentity & cdsIdentity() const { DARABONBA_PTR_GET_CONST(cdsIdentity_, Models::RemoveFilePermissionRequestMemberListCdsIdentity) };
    inline Models::RemoveFilePermissionRequestMemberListCdsIdentity cdsIdentity() { DARABONBA_PTR_GET(cdsIdentity_, Models::RemoveFilePermissionRequestMemberListCdsIdentity) };
    inline RemoveFilePermissionRequestMemberList& setCdsIdentity(const Models::RemoveFilePermissionRequestMemberListCdsIdentity & cdsIdentity) { DARABONBA_PTR_SET_VALUE(cdsIdentity_, cdsIdentity) };
    inline RemoveFilePermissionRequestMemberList& setCdsIdentity(Models::RemoveFilePermissionRequestMemberListCdsIdentity && cdsIdentity) { DARABONBA_PTR_SET_RVALUE(cdsIdentity_, cdsIdentity) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline RemoveFilePermissionRequestMemberList& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    // The permission information.
    // 
    // This parameter is required.
    std::shared_ptr<Models::RemoveFilePermissionRequestMemberListCdsIdentity> cdsIdentity_ = nullptr;
    // The role ID. You can configure permissions on roles or actions. This parameter is used to specify the permissions on roles, which conflicts with the ActionList parameter. When you configure both the parameters, this parameter shall prevail.
    // 
    // Valid values:
    // 
    // *   SystemFileEditorWithoutShareLink
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the role that has the permissions to edit files but cannot share files
    // 
    //     <!-- -->
    // 
    // *   SystemFileUploaderAndDownloaderWithShareLink
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the role that has the permissions to upload, download, and share files
    // 
    //     <!-- -->
    // 
    // *   SystemFileDownloader
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the role that has the permissions to download files
    // 
    //     <!-- -->
    // 
    // *   SystemFileEditorWithoutDelete
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the role that has the permissions to edit files but cannot delete files
    // 
    //     <!-- -->
    // 
    // *   SystemFileOwner
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the role that has the permissions to collaborate with others
    // 
    //     <!-- -->
    // 
    // *   SystemFileDownloaderWithShareLink
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the role that has the permissions to download and share files
    // 
    //     <!-- -->
    // 
    // *   SystemFileUploaderAndViewer
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the role that has the permissions to preview or upload files
    // 
    //     <!-- -->
    // 
    // *   SystemFileViewer
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the role that has the permissions to preview files
    // 
    //     <!-- -->
    // 
    // *   SystemFileEditor
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the role that has the permissions to edit files
    // 
    //     <!-- -->
    // 
    // *   SystemFileUploaderWithShareLink
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the role that has the permissions to upload or share files
    // 
    //     <!-- -->
    // 
    // *   SystemFileUploader
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the role that has the permission to upload files
    // 
    //     <!-- -->
    // 
    // *   SystemFileUploaderAndDownloader
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the role that has the permissions to upload or download files
    // 
    //     <!-- -->
    // 
    // *   SystemFileMetaViewer
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the role that has the permissions to view files
    // 
    //     <!-- -->
    // 
    // This parameter is required.
    std::shared_ptr<string> roleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
