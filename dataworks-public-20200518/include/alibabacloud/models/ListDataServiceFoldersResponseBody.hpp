// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEFOLDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEFOLDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceFoldersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceFoldersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FolderPagingResult, folderPagingResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceFoldersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderPagingResult, folderPagingResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataServiceFoldersResponseBody() = default ;
    ListDataServiceFoldersResponseBody(const ListDataServiceFoldersResponseBody &) = default ;
    ListDataServiceFoldersResponseBody(ListDataServiceFoldersResponseBody &&) = default ;
    ListDataServiceFoldersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceFoldersResponseBody() = default ;
    ListDataServiceFoldersResponseBody& operator=(const ListDataServiceFoldersResponseBody &) = default ;
    ListDataServiceFoldersResponseBody& operator=(ListDataServiceFoldersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FolderPagingResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FolderPagingResult& obj) { 
        DARABONBA_PTR_TO_JSON(Folders, folders_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, FolderPagingResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Folders, folders_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      FolderPagingResult() = default ;
      FolderPagingResult(const FolderPagingResult &) = default ;
      FolderPagingResult(FolderPagingResult &&) = default ;
      FolderPagingResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FolderPagingResult() = default ;
      FolderPagingResult& operator=(const FolderPagingResult &) = default ;
      FolderPagingResult& operator=(FolderPagingResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Folders : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Folders& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(FolderId, folderId_);
          DARABONBA_PTR_TO_JSON(FolderName, folderName_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        };
        friend void from_json(const Darabonba::Json& j, Folders& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
          DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        };
        Folders() = default ;
        Folders(const Folders &) = default ;
        Folders(Folders &&) = default ;
        Folders(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Folders() = default ;
        Folders& operator=(const Folders &) = default ;
        Folders& operator=(Folders &&) = default ;
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
        inline Folders& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // folderId Field Functions 
        bool hasFolderId() const { return this->folderId_ != nullptr;};
        void deleteFolderId() { this->folderId_ = nullptr;};
        inline int64_t getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, 0L) };
        inline Folders& setFolderId(int64_t folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


        // folderName Field Functions 
        bool hasFolderName() const { return this->folderName_ != nullptr;};
        void deleteFolderName() { this->folderName_ = nullptr;};
        inline string getFolderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
        inline Folders& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Folders& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline Folders& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline Folders& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Folders& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline Folders& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


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
        // The ID of the parent folder. The ID of the root folder in a business process is 0, and the ID of a folder created by a user in a business process is greater than 0.
        shared_ptr<int64_t> parentId_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The tenant ID.
        shared_ptr<int64_t> tenantId_ {};
      };

      virtual bool empty() const override { return this->folders_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // folders Field Functions 
      bool hasFolders() const { return this->folders_ != nullptr;};
      void deleteFolders() { this->folders_ = nullptr;};
      inline const vector<FolderPagingResult::Folders> & getFolders() const { DARABONBA_PTR_GET_CONST(folders_, vector<FolderPagingResult::Folders>) };
      inline vector<FolderPagingResult::Folders> getFolders() { DARABONBA_PTR_GET(folders_, vector<FolderPagingResult::Folders>) };
      inline FolderPagingResult& setFolders(const vector<FolderPagingResult::Folders> & folders) { DARABONBA_PTR_SET_VALUE(folders_, folders) };
      inline FolderPagingResult& setFolders(vector<FolderPagingResult::Folders> && folders) { DARABONBA_PTR_SET_RVALUE(folders_, folders) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline FolderPagingResult& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline FolderPagingResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline FolderPagingResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The folders.
      shared_ptr<vector<FolderPagingResult::Folders>> folders_ {};
      // The page number. The value of this parameter is the same as that of the PageNumber parameter in the request.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Default value: 10. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->folderPagingResult_ == nullptr
        && this->requestId_ == nullptr; };
    // folderPagingResult Field Functions 
    bool hasFolderPagingResult() const { return this->folderPagingResult_ != nullptr;};
    void deleteFolderPagingResult() { this->folderPagingResult_ = nullptr;};
    inline const ListDataServiceFoldersResponseBody::FolderPagingResult & getFolderPagingResult() const { DARABONBA_PTR_GET_CONST(folderPagingResult_, ListDataServiceFoldersResponseBody::FolderPagingResult) };
    inline ListDataServiceFoldersResponseBody::FolderPagingResult getFolderPagingResult() { DARABONBA_PTR_GET(folderPagingResult_, ListDataServiceFoldersResponseBody::FolderPagingResult) };
    inline ListDataServiceFoldersResponseBody& setFolderPagingResult(const ListDataServiceFoldersResponseBody::FolderPagingResult & folderPagingResult) { DARABONBA_PTR_SET_VALUE(folderPagingResult_, folderPagingResult) };
    inline ListDataServiceFoldersResponseBody& setFolderPagingResult(ListDataServiceFoldersResponseBody::FolderPagingResult && folderPagingResult) { DARABONBA_PTR_SET_RVALUE(folderPagingResult_, folderPagingResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServiceFoldersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The paging result for the folders.
    shared_ptr<ListDataServiceFoldersResponseBody::FolderPagingResult> folderPagingResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
