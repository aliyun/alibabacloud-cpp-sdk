// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFOLDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFOLDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class UpdateFolderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFolderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(NewFolderName, newFolderName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFolderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(NewFolderName, newFolderName_);
    };
    UpdateFolderRequest() = default ;
    UpdateFolderRequest(const UpdateFolderRequest &) = default ;
    UpdateFolderRequest(UpdateFolderRequest &&) = default ;
    UpdateFolderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFolderRequest() = default ;
    UpdateFolderRequest& operator=(const UpdateFolderRequest &) = default ;
    UpdateFolderRequest& operator=(UpdateFolderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->folderId_ != nullptr
        && this->newFolderName_ != nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline UpdateFolderRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // newFolderName Field Functions 
    bool hasNewFolderName() const { return this->newFolderName_ != nullptr;};
    void deleteNewFolderName() { this->newFolderName_ = nullptr;};
    inline string newFolderName() const { DARABONBA_PTR_GET_DEFAULT(newFolderName_, "") };
    inline UpdateFolderRequest& setNewFolderName(string newFolderName) { DARABONBA_PTR_SET_VALUE(newFolderName_, newFolderName) };


  protected:
    // The ID of the folder.
    // 
    // This parameter is required.
    std::shared_ptr<string> folderId_ = nullptr;
    // The new name of the folder.
    // 
    // The name must be 1 to 24 characters in length and can contain letters, digits, underscores (_), periods (.), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> newFolderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
