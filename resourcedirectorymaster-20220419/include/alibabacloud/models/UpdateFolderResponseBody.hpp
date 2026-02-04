// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFOLDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFOLDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class UpdateFolderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFolderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Folder, folder_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFolderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Folder, folder_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateFolderResponseBody() = default ;
    UpdateFolderResponseBody(const UpdateFolderResponseBody &) = default ;
    UpdateFolderResponseBody(UpdateFolderResponseBody &&) = default ;
    UpdateFolderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFolderResponseBody() = default ;
    UpdateFolderResponseBody& operator=(const UpdateFolderResponseBody &) = default ;
    UpdateFolderResponseBody& operator=(UpdateFolderResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(ParentFolderId, parentFolderId_);
      };
      friend void from_json(const Darabonba::Json& j, Folder& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
        DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
        DARABONBA_PTR_FROM_JSON(ParentFolderId, parentFolderId_);
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
        && this->folderId_ == nullptr && this->folderName_ == nullptr && this->parentFolderId_ == nullptr; };
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


      // parentFolderId Field Functions 
      bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
      void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
      inline string getParentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
      inline Folder& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


    protected:
      // The time when the folder was created.
      shared_ptr<string> createTime_ {};
      // The ID of the folder.
      shared_ptr<string> folderId_ {};
      // The name of the folder.
      shared_ptr<string> folderName_ {};
      // The ID of the parent folder.
      shared_ptr<string> parentFolderId_ {};
    };

    virtual bool empty() const override { return this->folder_ == nullptr
        && this->requestId_ == nullptr; };
    // folder Field Functions 
    bool hasFolder() const { return this->folder_ != nullptr;};
    void deleteFolder() { this->folder_ = nullptr;};
    inline const UpdateFolderResponseBody::Folder & getFolder() const { DARABONBA_PTR_GET_CONST(folder_, UpdateFolderResponseBody::Folder) };
    inline UpdateFolderResponseBody::Folder getFolder() { DARABONBA_PTR_GET(folder_, UpdateFolderResponseBody::Folder) };
    inline UpdateFolderResponseBody& setFolder(const UpdateFolderResponseBody::Folder & folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };
    inline UpdateFolderResponseBody& setFolder(UpdateFolderResponseBody::Folder && folder) { DARABONBA_PTR_SET_RVALUE(folder_, folder) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateFolderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the folder.
    shared_ptr<UpdateFolderResponseBody::Folder> folder_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
