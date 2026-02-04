// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANCESTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTANCESTORSRESPONSEBODY_HPP_
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
  class ListAncestorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAncestorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Folders, folders_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAncestorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Folders, folders_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAncestorsResponseBody() = default ;
    ListAncestorsResponseBody(const ListAncestorsResponseBody &) = default ;
    ListAncestorsResponseBody(ListAncestorsResponseBody &&) = default ;
    ListAncestorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAncestorsResponseBody() = default ;
    ListAncestorsResponseBody& operator=(const ListAncestorsResponseBody &) = default ;
    ListAncestorsResponseBody& operator=(ListAncestorsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(FolderId, folderId_);
          DARABONBA_PTR_TO_JSON(FolderName, folderName_);
        };
        friend void from_json(const Darabonba::Json& j, Folder& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
          DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
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
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->folderId_ == nullptr && this->folderName_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Folder& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


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


      protected:
        // The time when the folder was created.
        shared_ptr<string> createTime_ {};
        // The ID of the folder.
        shared_ptr<string> folderId_ {};
        // The name of the folder.
        shared_ptr<string> folderName_ {};
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
        && this->requestId_ == nullptr; };
    // folders Field Functions 
    bool hasFolders() const { return this->folders_ != nullptr;};
    void deleteFolders() { this->folders_ = nullptr;};
    inline const ListAncestorsResponseBody::Folders & getFolders() const { DARABONBA_PTR_GET_CONST(folders_, ListAncestorsResponseBody::Folders) };
    inline ListAncestorsResponseBody::Folders getFolders() { DARABONBA_PTR_GET(folders_, ListAncestorsResponseBody::Folders) };
    inline ListAncestorsResponseBody& setFolders(const ListAncestorsResponseBody::Folders & folders) { DARABONBA_PTR_SET_VALUE(folders_, folders) };
    inline ListAncestorsResponseBody& setFolders(ListAncestorsResponseBody::Folders && folders) { DARABONBA_PTR_SET_RVALUE(folders_, folders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAncestorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information of the folders.
    shared_ptr<ListAncestorsResponseBody::Folders> folders_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
