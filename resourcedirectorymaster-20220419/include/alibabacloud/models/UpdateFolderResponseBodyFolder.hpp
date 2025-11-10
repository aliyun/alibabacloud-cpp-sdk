// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFOLDERRESPONSEBODYFOLDER_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFOLDERRESPONSEBODYFOLDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class UpdateFolderResponseBodyFolder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFolderResponseBodyFolder& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(FolderName, folderName_);
      DARABONBA_PTR_TO_JSON(ParentFolderId, parentFolderId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFolderResponseBodyFolder& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
      DARABONBA_PTR_FROM_JSON(ParentFolderId, parentFolderId_);
    };
    UpdateFolderResponseBodyFolder() = default ;
    UpdateFolderResponseBodyFolder(const UpdateFolderResponseBodyFolder &) = default ;
    UpdateFolderResponseBodyFolder(UpdateFolderResponseBodyFolder &&) = default ;
    UpdateFolderResponseBodyFolder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFolderResponseBodyFolder() = default ;
    UpdateFolderResponseBodyFolder& operator=(const UpdateFolderResponseBodyFolder &) = default ;
    UpdateFolderResponseBodyFolder& operator=(UpdateFolderResponseBodyFolder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->folderId_ == nullptr && return this->folderName_ == nullptr && return this->parentFolderId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline UpdateFolderResponseBodyFolder& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline UpdateFolderResponseBodyFolder& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string folderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline UpdateFolderResponseBodyFolder& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string parentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline UpdateFolderResponseBodyFolder& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


  protected:
    // The time when the folder was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the folder.
    std::shared_ptr<string> folderId_ = nullptr;
    // The name of the folder.
    std::shared_ptr<string> folderName_ = nullptr;
    // The ID of the parent folder.
    std::shared_ptr<string> parentFolderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
