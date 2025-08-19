// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFOLDERRESPONSEBODYFOLDER_HPP_
#define ALIBABACLOUD_MODELS_GETFOLDERRESPONSEBODYFOLDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetFolderResponseBodyFolder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFolderResponseBodyFolder& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(FolderName, folderName_);
      DARABONBA_PTR_TO_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryPath, resourceDirectoryPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetFolderResponseBodyFolder& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
      DARABONBA_PTR_FROM_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryPath, resourceDirectoryPath_);
    };
    GetFolderResponseBodyFolder() = default ;
    GetFolderResponseBodyFolder(const GetFolderResponseBodyFolder &) = default ;
    GetFolderResponseBodyFolder(GetFolderResponseBodyFolder &&) = default ;
    GetFolderResponseBodyFolder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFolderResponseBodyFolder() = default ;
    GetFolderResponseBodyFolder& operator=(const GetFolderResponseBodyFolder &) = default ;
    GetFolderResponseBodyFolder& operator=(GetFolderResponseBodyFolder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->folderId_ != nullptr && this->folderName_ != nullptr && this->parentFolderId_ != nullptr && this->resourceDirectoryPath_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetFolderResponseBodyFolder& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetFolderResponseBodyFolder& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string folderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline GetFolderResponseBodyFolder& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string parentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline GetFolderResponseBodyFolder& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


    // resourceDirectoryPath Field Functions 
    bool hasResourceDirectoryPath() const { return this->resourceDirectoryPath_ != nullptr;};
    void deleteResourceDirectoryPath() { this->resourceDirectoryPath_ = nullptr;};
    inline string resourceDirectoryPath() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryPath_, "") };
    inline GetFolderResponseBodyFolder& setResourceDirectoryPath(string resourceDirectoryPath) { DARABONBA_PTR_SET_VALUE(resourceDirectoryPath_, resourceDirectoryPath) };


  protected:
    // The time when the folder was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the folder.
    std::shared_ptr<string> folderId_ = nullptr;
    // The name of the folder.
    std::shared_ptr<string> folderName_ = nullptr;
    // The ID of the parent folder.
    std::shared_ptr<string> parentFolderId_ = nullptr;
    // The path of the folder in the resource directory.
    std::shared_ptr<string> resourceDirectoryPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
