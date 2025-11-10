// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANCESTORSRESPONSEBODYFOLDERSFOLDER_HPP_
#define ALIBABACLOUD_MODELS_LISTANCESTORSRESPONSEBODYFOLDERSFOLDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListAncestorsResponseBodyFoldersFolder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAncestorsResponseBodyFoldersFolder& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(FolderName, folderName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAncestorsResponseBodyFoldersFolder& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
    };
    ListAncestorsResponseBodyFoldersFolder() = default ;
    ListAncestorsResponseBodyFoldersFolder(const ListAncestorsResponseBodyFoldersFolder &) = default ;
    ListAncestorsResponseBodyFoldersFolder(ListAncestorsResponseBodyFoldersFolder &&) = default ;
    ListAncestorsResponseBodyFoldersFolder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAncestorsResponseBodyFoldersFolder() = default ;
    ListAncestorsResponseBodyFoldersFolder& operator=(const ListAncestorsResponseBodyFoldersFolder &) = default ;
    ListAncestorsResponseBodyFoldersFolder& operator=(ListAncestorsResponseBodyFoldersFolder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->folderId_ == nullptr && return this->folderName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAncestorsResponseBodyFoldersFolder& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline ListAncestorsResponseBodyFoldersFolder& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string folderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline ListAncestorsResponseBodyFoldersFolder& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


  protected:
    // The time when the folder was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the folder.
    std::shared_ptr<string> folderId_ = nullptr;
    // The name of the folder.
    std::shared_ptr<string> folderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
