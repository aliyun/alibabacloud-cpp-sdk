// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEFOLDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEFOLDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServiceFolderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceFolderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Folder, folder_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceFolderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Folder, folder_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataServiceFolderResponseBody() = default ;
    GetDataServiceFolderResponseBody(const GetDataServiceFolderResponseBody &) = default ;
    GetDataServiceFolderResponseBody(GetDataServiceFolderResponseBody &&) = default ;
    GetDataServiceFolderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceFolderResponseBody() = default ;
    GetDataServiceFolderResponseBody& operator=(const GetDataServiceFolderResponseBody &) = default ;
    GetDataServiceFolderResponseBody& operator=(GetDataServiceFolderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Folder : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Folder& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(FolderId, folderId_);
        DARABONBA_PTR_TO_JSON(FolderName, folderName_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, Folder& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
        DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      };
      Folder() = default ;
      Folder(const Folder &) = default ;
      Folder(Folder &&) = default ;
      Folder(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Folder() = default ;
      Folder& operator=(const Folder &) = default ;
      Folder& operator=(Folder &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->folderId_ == nullptr && this->folderName_ == nullptr && this->groupId_ == nullptr && this->modifiedTime_ == nullptr && this->parentId_ == nullptr
        && this->projectId_ == nullptr && this->tenantId_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Folder& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // folderId Field Functions 
      bool hasFolderId() const { return this->folderId_ != nullptr;};
      void deleteFolderId() { this->folderId_ = nullptr;};
      inline int64_t getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, 0L) };
      inline Folder& setFolderId(int64_t folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


      // folderName Field Functions 
      bool hasFolderName() const { return this->folderName_ != nullptr;};
      void deleteFolderName() { this->folderName_ = nullptr;};
      inline string getFolderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
      inline Folder& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Folder& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Folder& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
      inline Folder& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Folder& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline Folder& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      // The time when the folder was created.
      shared_ptr<string> createdTime_ {};
      // The folder ID.
      shared_ptr<int64_t> folderId_ {};
      // The name of the folder.
      shared_ptr<string> folderName_ {};
      // The ID of the business process to which the folder belongs.
      shared_ptr<string> groupId_ {};
      // The time when the folder was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The parent folder ID. The ID of the root folder in a business process is 0, and the ID of a folder created by a user in a business process is greater than 0.
      shared_ptr<int64_t> parentId_ {};
      // The workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // The tenant ID.
      shared_ptr<int64_t> tenantId_ {};
    };

    virtual bool empty() const override { return this->folder_ == nullptr
        && this->requestId_ == nullptr; };
    // folder Field Functions 
    bool hasFolder() const { return this->folder_ != nullptr;};
    void deleteFolder() { this->folder_ = nullptr;};
    inline const GetDataServiceFolderResponseBody::Folder & getFolder() const { DARABONBA_PTR_GET_CONST(folder_, GetDataServiceFolderResponseBody::Folder) };
    inline GetDataServiceFolderResponseBody::Folder getFolder() { DARABONBA_PTR_GET(folder_, GetDataServiceFolderResponseBody::Folder) };
    inline GetDataServiceFolderResponseBody& setFolder(const GetDataServiceFolderResponseBody::Folder & folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };
    inline GetDataServiceFolderResponseBody& setFolder(GetDataServiceFolderResponseBody::Folder && folder) { DARABONBA_PTR_SET_RVALUE(folder_, folder) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceFolderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the folder.
    shared_ptr<GetDataServiceFolderResponseBody::Folder> folder_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
