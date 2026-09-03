// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEFILEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEFILEPERMISSIONREQUEST_HPP_
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
  class RemoveFilePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveFilePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MemberList, memberList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveFilePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RemoveFilePermissionRequest() = default ;
    RemoveFilePermissionRequest(const RemoveFilePermissionRequest &) = default ;
    RemoveFilePermissionRequest(RemoveFilePermissionRequest &&) = default ;
    RemoveFilePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveFilePermissionRequest() = default ;
    RemoveFilePermissionRequest& operator=(const RemoveFilePermissionRequest &) = default ;
    RemoveFilePermissionRequest& operator=(RemoveFilePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MemberList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MemberList& obj) { 
        DARABONBA_PTR_TO_JSON(CdsIdentity, cdsIdentity_);
        DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      };
      friend void from_json(const Darabonba::Json& j, MemberList& obj) { 
        DARABONBA_PTR_FROM_JSON(CdsIdentity, cdsIdentity_);
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
        // The user ID or group ID.
        // 
        // This parameter is required.
        shared_ptr<string> id_ {};
        // The object type.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->cdsIdentity_ == nullptr
        && this->roleId_ == nullptr; };
      // cdsIdentity Field Functions 
      bool hasCdsIdentity() const { return this->cdsIdentity_ != nullptr;};
      void deleteCdsIdentity() { this->cdsIdentity_ = nullptr;};
      inline const MemberList::CdsIdentity & getCdsIdentity() const { DARABONBA_PTR_GET_CONST(cdsIdentity_, MemberList::CdsIdentity) };
      inline MemberList::CdsIdentity getCdsIdentity() { DARABONBA_PTR_GET(cdsIdentity_, MemberList::CdsIdentity) };
      inline MemberList& setCdsIdentity(const MemberList::CdsIdentity & cdsIdentity) { DARABONBA_PTR_SET_VALUE(cdsIdentity_, cdsIdentity) };
      inline MemberList& setCdsIdentity(MemberList::CdsIdentity && cdsIdentity) { DARABONBA_PTR_SET_RVALUE(cdsIdentity_, cdsIdentity) };


      // roleId Field Functions 
      bool hasRoleId() const { return this->roleId_ != nullptr;};
      void deleteRoleId() { this->roleId_ = nullptr;};
      inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
      inline MemberList& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    protected:
      // The permission information.
      // 
      // This parameter is required.
      shared_ptr<MemberList::CdsIdentity> cdsIdentity_ {};
      // Two methods are supported for setting permissions: specifying a role or customizing operation permissions. This parameter specifies the role-based permission and is mutually exclusive with `ActionList`. If both parameters are specified, this parameter takes precedence.
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
    inline RemoveFilePermissionRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline RemoveFilePermissionRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline RemoveFilePermissionRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline RemoveFilePermissionRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // memberList Field Functions 
    bool hasMemberList() const { return this->memberList_ != nullptr;};
    void deleteMemberList() { this->memberList_ = nullptr;};
    inline const vector<RemoveFilePermissionRequest::MemberList> & getMemberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<RemoveFilePermissionRequest::MemberList>) };
    inline vector<RemoveFilePermissionRequest::MemberList> getMemberList() { DARABONBA_PTR_GET(memberList_, vector<RemoveFilePermissionRequest::MemberList>) };
    inline RemoveFilePermissionRequest& setMemberList(const vector<RemoveFilePermissionRequest::MemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
    inline RemoveFilePermissionRequest& setMemberList(vector<RemoveFilePermissionRequest::MemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveFilePermissionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The enterprise cloud disk ID.
    // 
    // This parameter is required.
    shared_ptr<string> cdsId_ {};
    // The user ID.
    shared_ptr<string> endUserId_ {};
    // The file ID. You can call [ListCdsFiles](https://help.aliyun.com/document_detail/2247622.html) to query the ID of the file.
    // 
    // This parameter is required.
    shared_ptr<string> fileId_ {};
    // The team space ID.
    shared_ptr<string> groupId_ {};
    // The list of authorized users.
    // 
    // This parameter is required.
    shared_ptr<vector<RemoveFilePermissionRequest::MemberList>> memberList_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
