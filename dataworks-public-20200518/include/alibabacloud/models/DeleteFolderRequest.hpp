// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFOLDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFOLDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeleteFolderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFolderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFolderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
    };
    DeleteFolderRequest() = default ;
    DeleteFolderRequest(const DeleteFolderRequest &) = default ;
    DeleteFolderRequest(DeleteFolderRequest &&) = default ;
    DeleteFolderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFolderRequest() = default ;
    DeleteFolderRequest& operator=(const DeleteFolderRequest &) = default ;
    DeleteFolderRequest& operator=(DeleteFolderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folderId_ == nullptr
        && this->projectId_ == nullptr && this->projectIdentifier_ == nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline DeleteFolderRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DeleteFolderRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string getProjectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline DeleteFolderRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


  protected:
    // The ID of the folder. For more information about how to obtain the folder ID, see [ListFolders](https://help.aliyun.com/document_detail/173955.html).
    // 
    // This parameter is required.
    shared_ptr<string> folderId_ {};
    // The ID of the DataWorks workspace. To obtain the workspace ID, log on to the DataWorks console and go to the Workspace Management page. You must set this parameter or ProjectIdentifier to specify the DataWorks workspace for the API call.
    shared_ptr<int64_t> projectId_ {};
    // The name of the DataWorks workspace. To obtain the workspace name, log on to the DataWorks console and go to the Workspace Management page. You must set this parameter or ProjectId to specify the DataWorks workspace for the API call.
    shared_ptr<string> projectIdentifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
