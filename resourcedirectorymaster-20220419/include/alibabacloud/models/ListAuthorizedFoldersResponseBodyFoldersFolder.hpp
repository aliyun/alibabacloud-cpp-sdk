// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDFOLDERSRESPONSEBODYFOLDERSFOLDER_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDFOLDERSRESPONSEBODYFOLDERSFOLDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListAuthorizedFoldersResponseBodyFoldersFolder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedFoldersResponseBodyFoldersFolder& obj) { 
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(FolderName, folderName_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryPath, resourceDirectoryPath_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedFoldersResponseBodyFoldersFolder& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryPath, resourceDirectoryPath_);
    };
    ListAuthorizedFoldersResponseBodyFoldersFolder() = default ;
    ListAuthorizedFoldersResponseBodyFoldersFolder(const ListAuthorizedFoldersResponseBodyFoldersFolder &) = default ;
    ListAuthorizedFoldersResponseBodyFoldersFolder(ListAuthorizedFoldersResponseBodyFoldersFolder &&) = default ;
    ListAuthorizedFoldersResponseBodyFoldersFolder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedFoldersResponseBodyFoldersFolder() = default ;
    ListAuthorizedFoldersResponseBodyFoldersFolder& operator=(const ListAuthorizedFoldersResponseBodyFoldersFolder &) = default ;
    ListAuthorizedFoldersResponseBodyFoldersFolder& operator=(ListAuthorizedFoldersResponseBodyFoldersFolder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folderId_ == nullptr
        && return this->folderName_ == nullptr && return this->resourceDirectoryPath_ == nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline ListAuthorizedFoldersResponseBodyFoldersFolder& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string folderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline ListAuthorizedFoldersResponseBodyFoldersFolder& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


    // resourceDirectoryPath Field Functions 
    bool hasResourceDirectoryPath() const { return this->resourceDirectoryPath_ != nullptr;};
    void deleteResourceDirectoryPath() { this->resourceDirectoryPath_ = nullptr;};
    inline string resourceDirectoryPath() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryPath_, "") };
    inline ListAuthorizedFoldersResponseBodyFoldersFolder& setResourceDirectoryPath(string resourceDirectoryPath) { DARABONBA_PTR_SET_VALUE(resourceDirectoryPath_, resourceDirectoryPath) };


  protected:
    // The ID of the folder.
    std::shared_ptr<string> folderId_ = nullptr;
    // The name of the folder.
    std::shared_ptr<string> folderName_ = nullptr;
    // The RDPath of the folder.
    std::shared_ptr<string> resourceDirectoryPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
