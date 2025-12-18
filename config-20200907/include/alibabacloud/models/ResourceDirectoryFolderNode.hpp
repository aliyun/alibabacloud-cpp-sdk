// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEDIRECTORYFOLDERNODE_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEDIRECTORYFOLDERNODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResourceDirectoryFolderNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ResourceDirectoryFolderNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceDirectoryFolderNode& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(FolderName, folderName_);
      DARABONBA_PTR_TO_JSON(ParentFolderId, parentFolderId_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceDirectoryFolderNode& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
      DARABONBA_PTR_FROM_JSON(ParentFolderId, parentFolderId_);
    };
    ResourceDirectoryFolderNode() = default ;
    ResourceDirectoryFolderNode(const ResourceDirectoryFolderNode &) = default ;
    ResourceDirectoryFolderNode(ResourceDirectoryFolderNode &&) = default ;
    ResourceDirectoryFolderNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceDirectoryFolderNode() = default ;
    ResourceDirectoryFolderNode& operator=(const ResourceDirectoryFolderNode &) = default ;
    ResourceDirectoryFolderNode& operator=(ResourceDirectoryFolderNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->children_ == nullptr && return this->displayName_ == nullptr && return this->folderId_ == nullptr && return this->folderName_ == nullptr && return this->parentFolderId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ResourceDirectoryFolderNode& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<ResourceDirectoryFolderNode> & children() const { DARABONBA_PTR_GET_CONST(children_, vector<ResourceDirectoryFolderNode>) };
    inline vector<ResourceDirectoryFolderNode> children() { DARABONBA_PTR_GET(children_, vector<ResourceDirectoryFolderNode>) };
    inline ResourceDirectoryFolderNode& setChildren(const vector<ResourceDirectoryFolderNode> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline ResourceDirectoryFolderNode& setChildren(vector<ResourceDirectoryFolderNode> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ResourceDirectoryFolderNode& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline ResourceDirectoryFolderNode& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string folderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline ResourceDirectoryFolderNode& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string parentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline ResourceDirectoryFolderNode& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<vector<ResourceDirectoryFolderNode>> children_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> folderId_ = nullptr;
    std::shared_ptr<string> folderName_ = nullptr;
    std::shared_ptr<string> parentFolderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
