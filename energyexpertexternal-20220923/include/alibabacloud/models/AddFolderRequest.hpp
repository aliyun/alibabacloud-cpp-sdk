// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFOLDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFOLDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class AddFolderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFolderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(folderName, folderName_);
      DARABONBA_PTR_TO_JSON(parentFolderId, parentFolderId_);
    };
    friend void from_json(const Darabonba::Json& j, AddFolderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(folderName, folderName_);
      DARABONBA_PTR_FROM_JSON(parentFolderId, parentFolderId_);
    };
    AddFolderRequest() = default ;
    AddFolderRequest(const AddFolderRequest &) = default ;
    AddFolderRequest(AddFolderRequest &&) = default ;
    AddFolderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFolderRequest() = default ;
    AddFolderRequest& operator=(const AddFolderRequest &) = default ;
    AddFolderRequest& operator=(AddFolderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->folderName_ != nullptr
        && this->parentFolderId_ != nullptr; };
    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string folderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline AddFolderRequest& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string parentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline AddFolderRequest& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> folderName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> parentFolderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
