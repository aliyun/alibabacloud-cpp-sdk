// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFOLDERSFORPARENTRESPONSEBODYFOLDERS_HPP_
#define ALIBABACLOUD_MODELS_LISTFOLDERSFORPARENTRESPONSEBODYFOLDERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFoldersForParentResponseBodyFoldersFolder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListFoldersForParentResponseBodyFolders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFoldersForParentResponseBodyFolders& obj) { 
      DARABONBA_PTR_TO_JSON(Folder, folder_);
    };
    friend void from_json(const Darabonba::Json& j, ListFoldersForParentResponseBodyFolders& obj) { 
      DARABONBA_PTR_FROM_JSON(Folder, folder_);
    };
    ListFoldersForParentResponseBodyFolders() = default ;
    ListFoldersForParentResponseBodyFolders(const ListFoldersForParentResponseBodyFolders &) = default ;
    ListFoldersForParentResponseBodyFolders(ListFoldersForParentResponseBodyFolders &&) = default ;
    ListFoldersForParentResponseBodyFolders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFoldersForParentResponseBodyFolders() = default ;
    ListFoldersForParentResponseBodyFolders& operator=(const ListFoldersForParentResponseBodyFolders &) = default ;
    ListFoldersForParentResponseBodyFolders& operator=(ListFoldersForParentResponseBodyFolders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->folder_ != nullptr; };
    // folder Field Functions 
    bool hasFolder() const { return this->folder_ != nullptr;};
    void deleteFolder() { this->folder_ = nullptr;};
    inline const vector<Models::ListFoldersForParentResponseBodyFoldersFolder> & folder() const { DARABONBA_PTR_GET_CONST(folder_, vector<Models::ListFoldersForParentResponseBodyFoldersFolder>) };
    inline vector<Models::ListFoldersForParentResponseBodyFoldersFolder> folder() { DARABONBA_PTR_GET(folder_, vector<Models::ListFoldersForParentResponseBodyFoldersFolder>) };
    inline ListFoldersForParentResponseBodyFolders& setFolder(const vector<Models::ListFoldersForParentResponseBodyFoldersFolder> & folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };
    inline ListFoldersForParentResponseBodyFolders& setFolder(vector<Models::ListFoldersForParentResponseBodyFoldersFolder> && folder) { DARABONBA_PTR_SET_RVALUE(folder_, folder) };


  protected:
    std::shared_ptr<vector<Models::ListFoldersForParentResponseBodyFoldersFolder>> folder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
