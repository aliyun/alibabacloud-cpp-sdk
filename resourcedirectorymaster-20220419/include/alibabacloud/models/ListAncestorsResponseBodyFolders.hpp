// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANCESTORSRESPONSEBODYFOLDERS_HPP_
#define ALIBABACLOUD_MODELS_LISTANCESTORSRESPONSEBODYFOLDERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAncestorsResponseBodyFoldersFolder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListAncestorsResponseBodyFolders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAncestorsResponseBodyFolders& obj) { 
      DARABONBA_PTR_TO_JSON(Folder, folder_);
    };
    friend void from_json(const Darabonba::Json& j, ListAncestorsResponseBodyFolders& obj) { 
      DARABONBA_PTR_FROM_JSON(Folder, folder_);
    };
    ListAncestorsResponseBodyFolders() = default ;
    ListAncestorsResponseBodyFolders(const ListAncestorsResponseBodyFolders &) = default ;
    ListAncestorsResponseBodyFolders(ListAncestorsResponseBodyFolders &&) = default ;
    ListAncestorsResponseBodyFolders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAncestorsResponseBodyFolders() = default ;
    ListAncestorsResponseBodyFolders& operator=(const ListAncestorsResponseBodyFolders &) = default ;
    ListAncestorsResponseBodyFolders& operator=(ListAncestorsResponseBodyFolders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->folder_ != nullptr; };
    // folder Field Functions 
    bool hasFolder() const { return this->folder_ != nullptr;};
    void deleteFolder() { this->folder_ = nullptr;};
    inline const vector<Models::ListAncestorsResponseBodyFoldersFolder> & folder() const { DARABONBA_PTR_GET_CONST(folder_, vector<Models::ListAncestorsResponseBodyFoldersFolder>) };
    inline vector<Models::ListAncestorsResponseBodyFoldersFolder> folder() { DARABONBA_PTR_GET(folder_, vector<Models::ListAncestorsResponseBodyFoldersFolder>) };
    inline ListAncestorsResponseBodyFolders& setFolder(const vector<Models::ListAncestorsResponseBodyFoldersFolder> & folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };
    inline ListAncestorsResponseBodyFolders& setFolder(vector<Models::ListAncestorsResponseBodyFoldersFolder> && folder) { DARABONBA_PTR_SET_RVALUE(folder_, folder) };


  protected:
    std::shared_ptr<vector<Models::ListAncestorsResponseBodyFoldersFolder>> folder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
