// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFOLDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFOLDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateFolderRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class CreateFolderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFolderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FolderName, folderName_);
      DARABONBA_PTR_TO_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFolderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
      DARABONBA_PTR_FROM_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateFolderRequest() = default ;
    CreateFolderRequest(const CreateFolderRequest &) = default ;
    CreateFolderRequest(CreateFolderRequest &&) = default ;
    CreateFolderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFolderRequest() = default ;
    CreateFolderRequest& operator=(const CreateFolderRequest &) = default ;
    CreateFolderRequest& operator=(CreateFolderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folderName_ == nullptr
        && return this->parentFolderId_ == nullptr && return this->tag_ == nullptr; };
    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string folderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline CreateFolderRequest& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string parentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline CreateFolderRequest& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateFolderRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateFolderRequestTag>) };
    inline vector<CreateFolderRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateFolderRequestTag>) };
    inline CreateFolderRequest& setTag(const vector<CreateFolderRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateFolderRequest& setTag(vector<CreateFolderRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The name of the folder.
    // 
    // The name must be 1 to 24 characters in length and can contain letters, digits, underscores (_), periods (.),and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> folderName_ = nullptr;
    // The ID of the parent folder.
    std::shared_ptr<string> parentFolderId_ = nullptr;
    // The tag to add to the folder.
    std::shared_ptr<vector<CreateFolderRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
