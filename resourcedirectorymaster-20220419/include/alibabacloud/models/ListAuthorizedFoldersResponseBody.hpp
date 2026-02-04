// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDFOLDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDFOLDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListAuthorizedFoldersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedFoldersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Folders, folders_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedFoldersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Folders, folders_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAuthorizedFoldersResponseBody() = default ;
    ListAuthorizedFoldersResponseBody(const ListAuthorizedFoldersResponseBody &) = default ;
    ListAuthorizedFoldersResponseBody(ListAuthorizedFoldersResponseBody &&) = default ;
    ListAuthorizedFoldersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedFoldersResponseBody() = default ;
    ListAuthorizedFoldersResponseBody& operator=(const ListAuthorizedFoldersResponseBody &) = default ;
    ListAuthorizedFoldersResponseBody& operator=(ListAuthorizedFoldersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Folders : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Folders& obj) { 
        DARABONBA_PTR_TO_JSON(Folder, folder_);
      };
      friend void from_json(const Darabonba::Json& j, Folders& obj) { 
        DARABONBA_PTR_FROM_JSON(Folder, folder_);
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
      class Folder : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Folder& obj) { 
          DARABONBA_PTR_TO_JSON(FolderId, folderId_);
          DARABONBA_PTR_TO_JSON(FolderName, folderName_);
          DARABONBA_PTR_TO_JSON(ResourceDirectoryPath, resourceDirectoryPath_);
        };
        friend void from_json(const Darabonba::Json& j, Folder& obj) { 
          DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
          DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
          DARABONBA_PTR_FROM_JSON(ResourceDirectoryPath, resourceDirectoryPath_);
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
        virtual bool empty() const override { return this->folderId_ == nullptr
        && this->folderName_ == nullptr && this->resourceDirectoryPath_ == nullptr; };
        // folderId Field Functions 
        bool hasFolderId() const { return this->folderId_ != nullptr;};
        void deleteFolderId() { this->folderId_ = nullptr;};
        inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
        inline Folder& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


        // folderName Field Functions 
        bool hasFolderName() const { return this->folderName_ != nullptr;};
        void deleteFolderName() { this->folderName_ = nullptr;};
        inline string getFolderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
        inline Folder& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


        // resourceDirectoryPath Field Functions 
        bool hasResourceDirectoryPath() const { return this->resourceDirectoryPath_ != nullptr;};
        void deleteResourceDirectoryPath() { this->resourceDirectoryPath_ = nullptr;};
        inline string getResourceDirectoryPath() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryPath_, "") };
        inline Folder& setResourceDirectoryPath(string resourceDirectoryPath) { DARABONBA_PTR_SET_VALUE(resourceDirectoryPath_, resourceDirectoryPath) };


      protected:
        // The ID of the folder.
        shared_ptr<string> folderId_ {};
        // The name of the folder.
        shared_ptr<string> folderName_ {};
        // The RDPath of the folder.
        shared_ptr<string> resourceDirectoryPath_ {};
      };

      virtual bool empty() const override { return this->folder_ == nullptr; };
      // folder Field Functions 
      bool hasFolder() const { return this->folder_ != nullptr;};
      void deleteFolder() { this->folder_ = nullptr;};
      inline const vector<Folders::Folder> & getFolder() const { DARABONBA_PTR_GET_CONST(folder_, vector<Folders::Folder>) };
      inline vector<Folders::Folder> getFolder() { DARABONBA_PTR_GET(folder_, vector<Folders::Folder>) };
      inline Folders& setFolder(const vector<Folders::Folder> & folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };
      inline Folders& setFolder(vector<Folders::Folder> && folder) { DARABONBA_PTR_SET_RVALUE(folder_, folder) };


    protected:
      shared_ptr<vector<Folders::Folder>> folder_ {};
    };

    virtual bool empty() const override { return this->folders_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // folders Field Functions 
    bool hasFolders() const { return this->folders_ != nullptr;};
    void deleteFolders() { this->folders_ = nullptr;};
    inline const ListAuthorizedFoldersResponseBody::Folders & getFolders() const { DARABONBA_PTR_GET_CONST(folders_, ListAuthorizedFoldersResponseBody::Folders) };
    inline ListAuthorizedFoldersResponseBody::Folders getFolders() { DARABONBA_PTR_GET(folders_, ListAuthorizedFoldersResponseBody::Folders) };
    inline ListAuthorizedFoldersResponseBody& setFolders(const ListAuthorizedFoldersResponseBody::Folders & folders) { DARABONBA_PTR_SET_VALUE(folders_, folders) };
    inline ListAuthorizedFoldersResponseBody& setFolders(ListAuthorizedFoldersResponseBody::Folders && folders) { DARABONBA_PTR_SET_RVALUE(folders_, folders) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAuthorizedFoldersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAuthorizedFoldersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedFoldersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAuthorizedFoldersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The folders.
    shared_ptr<ListAuthorizedFoldersResponseBody::Folders> folders_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
