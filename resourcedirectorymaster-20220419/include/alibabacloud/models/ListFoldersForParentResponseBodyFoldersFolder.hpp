// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFOLDERSFORPARENTRESPONSEBODYFOLDERSFOLDER_HPP_
#define ALIBABACLOUD_MODELS_LISTFOLDERSFORPARENTRESPONSEBODYFOLDERSFOLDER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListFoldersForParentResponseBodyFoldersFolderTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListFoldersForParentResponseBodyFoldersFolder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFoldersForParentResponseBodyFoldersFolder& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(FolderName, folderName_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListFoldersForParentResponseBodyFoldersFolder& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListFoldersForParentResponseBodyFoldersFolder() = default ;
    ListFoldersForParentResponseBodyFoldersFolder(const ListFoldersForParentResponseBodyFoldersFolder &) = default ;
    ListFoldersForParentResponseBodyFoldersFolder(ListFoldersForParentResponseBodyFoldersFolder &&) = default ;
    ListFoldersForParentResponseBodyFoldersFolder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFoldersForParentResponseBodyFoldersFolder() = default ;
    ListFoldersForParentResponseBodyFoldersFolder& operator=(const ListFoldersForParentResponseBodyFoldersFolder &) = default ;
    ListFoldersForParentResponseBodyFoldersFolder& operator=(ListFoldersForParentResponseBodyFoldersFolder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->folderId_ != nullptr && this->folderName_ != nullptr && this->tags_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListFoldersForParentResponseBodyFoldersFolder& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline ListFoldersForParentResponseBodyFoldersFolder& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string folderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline ListFoldersForParentResponseBodyFoldersFolder& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::ListFoldersForParentResponseBodyFoldersFolderTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::ListFoldersForParentResponseBodyFoldersFolderTags) };
    inline Models::ListFoldersForParentResponseBodyFoldersFolderTags tags() { DARABONBA_PTR_GET(tags_, Models::ListFoldersForParentResponseBodyFoldersFolderTags) };
    inline ListFoldersForParentResponseBodyFoldersFolder& setTags(const Models::ListFoldersForParentResponseBodyFoldersFolderTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListFoldersForParentResponseBodyFoldersFolder& setTags(Models::ListFoldersForParentResponseBodyFoldersFolderTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The time when the folder was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the folder.
    std::shared_ptr<string> folderId_ = nullptr;
    // The name of the folder.
    std::shared_ptr<string> folderName_ = nullptr;
    // The tags added to the folder.
    std::shared_ptr<Models::ListFoldersForParentResponseBodyFoldersFolderTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
