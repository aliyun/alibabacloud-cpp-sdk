// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFOLDERSRESPONSEBODYDATAFOLDERS_HPP_
#define ALIBABACLOUD_MODELS_LISTFOLDERSRESPONSEBODYDATAFOLDERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListFoldersResponseBodyDataFolders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFoldersResponseBodyDataFolders& obj) { 
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(FolderPath, folderPath_);
    };
    friend void from_json(const Darabonba::Json& j, ListFoldersResponseBodyDataFolders& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(FolderPath, folderPath_);
    };
    ListFoldersResponseBodyDataFolders() = default ;
    ListFoldersResponseBodyDataFolders(const ListFoldersResponseBodyDataFolders &) = default ;
    ListFoldersResponseBodyDataFolders(ListFoldersResponseBodyDataFolders &&) = default ;
    ListFoldersResponseBodyDataFolders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFoldersResponseBodyDataFolders() = default ;
    ListFoldersResponseBodyDataFolders& operator=(const ListFoldersResponseBodyDataFolders &) = default ;
    ListFoldersResponseBodyDataFolders& operator=(ListFoldersResponseBodyDataFolders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folderId_ == nullptr
        && return this->folderPath_ == nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline ListFoldersResponseBodyDataFolders& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderPath Field Functions 
    bool hasFolderPath() const { return this->folderPath_ != nullptr;};
    void deleteFolderPath() { this->folderPath_ = nullptr;};
    inline string folderPath() const { DARABONBA_PTR_GET_DEFAULT(folderPath_, "") };
    inline ListFoldersResponseBodyDataFolders& setFolderPath(string folderPath) { DARABONBA_PTR_SET_VALUE(folderPath_, folderPath) };


  protected:
    // The folder ID.
    std::shared_ptr<string> folderId_ = nullptr;
    // The folder path.
    std::shared_ptr<string> folderPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
