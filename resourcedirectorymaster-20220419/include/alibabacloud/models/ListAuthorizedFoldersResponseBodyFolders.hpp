// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDFOLDERSRESPONSEBODYFOLDERS_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDFOLDERSRESPONSEBODYFOLDERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuthorizedFoldersResponseBodyFoldersFolder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListAuthorizedFoldersResponseBodyFolders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedFoldersResponseBodyFolders& obj) { 
      DARABONBA_PTR_TO_JSON(Folder, folder_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedFoldersResponseBodyFolders& obj) { 
      DARABONBA_PTR_FROM_JSON(Folder, folder_);
    };
    ListAuthorizedFoldersResponseBodyFolders() = default ;
    ListAuthorizedFoldersResponseBodyFolders(const ListAuthorizedFoldersResponseBodyFolders &) = default ;
    ListAuthorizedFoldersResponseBodyFolders(ListAuthorizedFoldersResponseBodyFolders &&) = default ;
    ListAuthorizedFoldersResponseBodyFolders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedFoldersResponseBodyFolders() = default ;
    ListAuthorizedFoldersResponseBodyFolders& operator=(const ListAuthorizedFoldersResponseBodyFolders &) = default ;
    ListAuthorizedFoldersResponseBodyFolders& operator=(ListAuthorizedFoldersResponseBodyFolders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folder_ == nullptr; };
    // folder Field Functions 
    bool hasFolder() const { return this->folder_ != nullptr;};
    void deleteFolder() { this->folder_ = nullptr;};
    inline const vector<Models::ListAuthorizedFoldersResponseBodyFoldersFolder> & folder() const { DARABONBA_PTR_GET_CONST(folder_, vector<Models::ListAuthorizedFoldersResponseBodyFoldersFolder>) };
    inline vector<Models::ListAuthorizedFoldersResponseBodyFoldersFolder> folder() { DARABONBA_PTR_GET(folder_, vector<Models::ListAuthorizedFoldersResponseBodyFoldersFolder>) };
    inline ListAuthorizedFoldersResponseBodyFolders& setFolder(const vector<Models::ListAuthorizedFoldersResponseBodyFoldersFolder> & folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };
    inline ListAuthorizedFoldersResponseBodyFolders& setFolder(vector<Models::ListAuthorizedFoldersResponseBodyFoldersFolder> && folder) { DARABONBA_PTR_SET_RVALUE(folder_, folder) };


  protected:
    std::shared_ptr<vector<Models::ListAuthorizedFoldersResponseBodyFoldersFolder>> folder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
