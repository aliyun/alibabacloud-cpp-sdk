// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFILEPERMISSIONREQUEST_HPP_
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
  class AddFilePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFilePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MemberList, memberList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddFilePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddFilePermissionRequest() = default ;
    AddFilePermissionRequest(const AddFilePermissionRequest &) = default ;
    AddFilePermissionRequest(AddFilePermissionRequest &&) = default ;
    AddFilePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFilePermissionRequest() = default ;
    AddFilePermissionRequest& operator=(const AddFilePermissionRequest &) = default ;
    AddFilePermissionRequest& operator=(AddFilePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MemberList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MemberList& obj) { 
        DARABONBA_PTR_TO_JSON(CdsIdentity, cdsIdentity_);
        DARABONBA_PTR_TO_JSON(DisinheritSubGroup, disinheritSubGroup_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      };
      friend void from_json(const Darabonba::Json& j, MemberList& obj) { 
        DARABONBA_PTR_FROM_JSON(CdsIdentity, cdsIdentity_);
        DARABONBA_PTR_FROM_JSON(DisinheritSubGroup, disinheritSubGroup_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      };
      MemberList() = default ;
      MemberList(const MemberList &) = default ;
      MemberList(MemberList &&) = default ;
      MemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MemberList() = default ;
      MemberList& operator=(const MemberList &) = default ;
      MemberList& operator=(MemberList &&) = default ;
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
        // The ID of the convenience user.
        // 
        // This parameter is required.
        shared_ptr<string> id_ {};
        // The user type.
        // 
        // Set the value to TENANT_ADMIN.
        // 
        // *   IT_Group: group.
        // *   IT_User: user.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->cdsIdentity_ == nullptr
        && this->disinheritSubGroup_ == nullptr && this->expireTime_ == nullptr && this->roleId_ == nullptr; };
      // cdsIdentity Field Functions 
      bool hasCdsIdentity() const { return this->cdsIdentity_ != nullptr;};
      void deleteCdsIdentity() { this->cdsIdentity_ = nullptr;};
      inline const MemberList::CdsIdentity & getCdsIdentity() const { DARABONBA_PTR_GET_CONST(cdsIdentity_, MemberList::CdsIdentity) };
      inline MemberList::CdsIdentity getCdsIdentity() { DARABONBA_PTR_GET(cdsIdentity_, MemberList::CdsIdentity) };
      inline MemberList& setCdsIdentity(const MemberList::CdsIdentity & cdsIdentity) { DARABONBA_PTR_SET_VALUE(cdsIdentity_, cdsIdentity) };
      inline MemberList& setCdsIdentity(MemberList::CdsIdentity && cdsIdentity) { DARABONBA_PTR_SET_RVALUE(cdsIdentity_, cdsIdentity) };


      // disinheritSubGroup Field Functions 
      bool hasDisinheritSubGroup() const { return this->disinheritSubGroup_ != nullptr;};
      void deleteDisinheritSubGroup() { this->disinheritSubGroup_ = nullptr;};
      inline bool getDisinheritSubGroup() const { DARABONBA_PTR_GET_DEFAULT(disinheritSubGroup_, false) };
      inline MemberList& setDisinheritSubGroup(bool disinheritSubGroup) { DARABONBA_PTR_SET_VALUE(disinheritSubGroup_, disinheritSubGroup) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline MemberList& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // roleId Field Functions 
      bool hasRoleId() const { return this->roleId_ != nullptr;};
      void deleteRoleId() { this->roleId_ = nullptr;};
      inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
      inline MemberList& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    protected:
      // The user of the cloud disk.
      // 
      // This parameter is required.
      shared_ptr<MemberList::CdsIdentity> cdsIdentity_ {};
      // Specifies whether the users of the child group can inherit the folder permissions.
      shared_ptr<bool> disinheritSubGroup_ {};
      // The time when the authorization expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. The value never expires. You can specify a value that is predefined by the system for this parameter. Example: 4775500800000.
      shared_ptr<int64_t> expireTime_ {};
      // You can set permissions by specifying roles or by customizing operation permissions. This field is used to set permissions by specifying roles. This field is mutually exclusive with `ActionList`.
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

    virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->endUserId_ == nullptr && this->fileId_ == nullptr && this->groupId_ == nullptr && this->memberList_ == nullptr && this->regionId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string getCdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline AddFilePermissionRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline AddFilePermissionRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline AddFilePermissionRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline AddFilePermissionRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // memberList Field Functions 
    bool hasMemberList() const { return this->memberList_ != nullptr;};
    void deleteMemberList() { this->memberList_ = nullptr;};
    inline const vector<AddFilePermissionRequest::MemberList> & getMemberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<AddFilePermissionRequest::MemberList>) };
    inline vector<AddFilePermissionRequest::MemberList> getMemberList() { DARABONBA_PTR_GET(memberList_, vector<AddFilePermissionRequest::MemberList>) };
    inline AddFilePermissionRequest& setMemberList(const vector<AddFilePermissionRequest::MemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
    inline AddFilePermissionRequest& setMemberList(vector<AddFilePermissionRequest::MemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddFilePermissionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the enterprise drive.
    // 
    // This parameter is required.
    shared_ptr<string> cdsId_ {};
    // The ID of the user who uses the network disk.
    shared_ptr<string> endUserId_ {};
    // The file ID. You can call the [ListCdsFiles](https://help.aliyun.com/document_detail/2247622.html) operation to query the ID of the file.
    // 
    // This parameter is required.
    shared_ptr<string> fileId_ {};
    // The ID of the team space.
    shared_ptr<string> groupId_ {};
    // The users that you want to authorize to use the cloud disk.
    // 
    // This parameter is required.
    shared_ptr<vector<AddFilePermissionRequest::MemberList>> memberList_ {};
    // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
