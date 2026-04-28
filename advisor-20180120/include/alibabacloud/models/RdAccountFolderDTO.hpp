// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RDACCOUNTFOLDERDTO_HPP_
#define ALIBABACLOUD_MODELS_RDACCOUNTFOLDERDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RdAccountDTO.hpp>
#include <alibabacloud/models/RdAccountFolderDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class RdAccountFolderDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RdAccountFolderDTO& obj) { 
      DARABONBA_PTR_TO_JSON(AccountCount, accountCount_);
      DARABONBA_PTR_TO_JSON(AccountList, accountList_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(FolderList, folderList_);
      DARABONBA_PTR_TO_JSON(FolderName, folderName_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryPath, resourceDirectoryPath_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryPathName, resourceDirectoryPathName_);
      DARABONBA_PTR_TO_JSON(SelectedCount, selectedCount_);
    };
    friend void from_json(const Darabonba::Json& j, RdAccountFolderDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountCount, accountCount_);
      DARABONBA_PTR_FROM_JSON(AccountList, accountList_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(FolderList, folderList_);
      DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryPath, resourceDirectoryPath_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryPathName, resourceDirectoryPathName_);
      DARABONBA_PTR_FROM_JSON(SelectedCount, selectedCount_);
    };
    RdAccountFolderDTO() = default ;
    RdAccountFolderDTO(const RdAccountFolderDTO &) = default ;
    RdAccountFolderDTO(RdAccountFolderDTO &&) = default ;
    RdAccountFolderDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RdAccountFolderDTO() = default ;
    RdAccountFolderDTO& operator=(const RdAccountFolderDTO &) = default ;
    RdAccountFolderDTO& operator=(RdAccountFolderDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountCount_ == nullptr
        && this->accountList_ == nullptr && this->folderId_ == nullptr && this->folderList_ == nullptr && this->folderName_ == nullptr && this->resourceDirectoryId_ == nullptr
        && this->resourceDirectoryPath_ == nullptr && this->resourceDirectoryPathName_ == nullptr && this->selectedCount_ == nullptr; };
    // accountCount Field Functions 
    bool hasAccountCount() const { return this->accountCount_ != nullptr;};
    void deleteAccountCount() { this->accountCount_ = nullptr;};
    inline int32_t getAccountCount() const { DARABONBA_PTR_GET_DEFAULT(accountCount_, 0) };
    inline RdAccountFolderDTO& setAccountCount(int32_t accountCount) { DARABONBA_PTR_SET_VALUE(accountCount_, accountCount) };


    // accountList Field Functions 
    bool hasAccountList() const { return this->accountList_ != nullptr;};
    void deleteAccountList() { this->accountList_ = nullptr;};
    inline const vector<RdAccountDTO> & getAccountList() const { DARABONBA_PTR_GET_CONST(accountList_, vector<RdAccountDTO>) };
    inline vector<RdAccountDTO> getAccountList() { DARABONBA_PTR_GET(accountList_, vector<RdAccountDTO>) };
    inline RdAccountFolderDTO& setAccountList(const vector<RdAccountDTO> & accountList) { DARABONBA_PTR_SET_VALUE(accountList_, accountList) };
    inline RdAccountFolderDTO& setAccountList(vector<RdAccountDTO> && accountList) { DARABONBA_PTR_SET_RVALUE(accountList_, accountList) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline RdAccountFolderDTO& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderList Field Functions 
    bool hasFolderList() const { return this->folderList_ != nullptr;};
    void deleteFolderList() { this->folderList_ = nullptr;};
    inline const vector<RdAccountFolderDTO> & getFolderList() const { DARABONBA_PTR_GET_CONST(folderList_, vector<RdAccountFolderDTO>) };
    inline vector<RdAccountFolderDTO> getFolderList() { DARABONBA_PTR_GET(folderList_, vector<RdAccountFolderDTO>) };
    inline RdAccountFolderDTO& setFolderList(const vector<RdAccountFolderDTO> & folderList) { DARABONBA_PTR_SET_VALUE(folderList_, folderList) };
    inline RdAccountFolderDTO& setFolderList(vector<RdAccountFolderDTO> && folderList) { DARABONBA_PTR_SET_RVALUE(folderList_, folderList) };


    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string getFolderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline RdAccountFolderDTO& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


    // resourceDirectoryId Field Functions 
    bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
    void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
    inline string getResourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
    inline RdAccountFolderDTO& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


    // resourceDirectoryPath Field Functions 
    bool hasResourceDirectoryPath() const { return this->resourceDirectoryPath_ != nullptr;};
    void deleteResourceDirectoryPath() { this->resourceDirectoryPath_ = nullptr;};
    inline string getResourceDirectoryPath() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryPath_, "") };
    inline RdAccountFolderDTO& setResourceDirectoryPath(string resourceDirectoryPath) { DARABONBA_PTR_SET_VALUE(resourceDirectoryPath_, resourceDirectoryPath) };


    // resourceDirectoryPathName Field Functions 
    bool hasResourceDirectoryPathName() const { return this->resourceDirectoryPathName_ != nullptr;};
    void deleteResourceDirectoryPathName() { this->resourceDirectoryPathName_ = nullptr;};
    inline string getResourceDirectoryPathName() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryPathName_, "") };
    inline RdAccountFolderDTO& setResourceDirectoryPathName(string resourceDirectoryPathName) { DARABONBA_PTR_SET_VALUE(resourceDirectoryPathName_, resourceDirectoryPathName) };


    // selectedCount Field Functions 
    bool hasSelectedCount() const { return this->selectedCount_ != nullptr;};
    void deleteSelectedCount() { this->selectedCount_ = nullptr;};
    inline int32_t getSelectedCount() const { DARABONBA_PTR_GET_DEFAULT(selectedCount_, 0) };
    inline RdAccountFolderDTO& setSelectedCount(int32_t selectedCount) { DARABONBA_PTR_SET_VALUE(selectedCount_, selectedCount) };


  protected:
    shared_ptr<int32_t> accountCount_ {};
    shared_ptr<vector<RdAccountDTO>> accountList_ {};
    shared_ptr<string> folderId_ {};
    shared_ptr<vector<RdAccountFolderDTO>> folderList_ {};
    shared_ptr<string> folderName_ {};
    shared_ptr<string> resourceDirectoryId_ {};
    shared_ptr<string> resourceDirectoryPath_ {};
    shared_ptr<string> resourceDirectoryPathName_ {};
    shared_ptr<int32_t> selectedCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
