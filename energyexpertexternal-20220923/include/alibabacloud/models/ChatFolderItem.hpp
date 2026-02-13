// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATFOLDERITEM_HPP_
#define ALIBABACLOUD_MODELS_CHATFOLDERITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ChatFolderItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatFolderItem& obj) { 
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
      DARABONBA_PTR_TO_JSON(folderName, folderName_);
      DARABONBA_PTR_TO_JSON(subFolders, subFolders_);
    };
    friend void from_json(const Darabonba::Json& j, ChatFolderItem& obj) { 
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
      DARABONBA_PTR_FROM_JSON(folderName, folderName_);
      DARABONBA_PTR_FROM_JSON(subFolders, subFolders_);
    };
    ChatFolderItem() = default ;
    ChatFolderItem(const ChatFolderItem &) = default ;
    ChatFolderItem(ChatFolderItem &&) = default ;
    ChatFolderItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatFolderItem() = default ;
    ChatFolderItem& operator=(const ChatFolderItem &) = default ;
    ChatFolderItem& operator=(ChatFolderItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folderId_ == nullptr
        && this->folderName_ == nullptr && this->subFolders_ == nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline ChatFolderItem& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string getFolderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline ChatFolderItem& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


    // subFolders Field Functions 
    bool hasSubFolders() const { return this->subFolders_ != nullptr;};
    void deleteSubFolders() { this->subFolders_ = nullptr;};
    inline const vector<ChatItem> & getSubFolders() const { DARABONBA_PTR_GET_CONST(subFolders_, vector<ChatItem>) };
    inline vector<ChatItem> getSubFolders() { DARABONBA_PTR_GET(subFolders_, vector<ChatItem>) };
    inline ChatFolderItem& setSubFolders(const vector<ChatItem> & subFolders) { DARABONBA_PTR_SET_VALUE(subFolders_, subFolders) };
    inline ChatFolderItem& setSubFolders(vector<ChatItem> && subFolders) { DARABONBA_PTR_SET_RVALUE(subFolders_, subFolders) };


  protected:
    // Folder ID.
    shared_ptr<string> folderId_ {};
    // Folder name.
    shared_ptr<string> folderName_ {};
    // Subfolder list.
    shared_ptr<vector<ChatItem>> subFolders_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
