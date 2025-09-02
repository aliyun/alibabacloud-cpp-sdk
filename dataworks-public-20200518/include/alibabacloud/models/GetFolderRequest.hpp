// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFOLDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFOLDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetFolderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFolderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(FolderPath, folderPath_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetFolderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(FolderPath, folderPath_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
    };
    GetFolderRequest() = default ;
    GetFolderRequest(const GetFolderRequest &) = default ;
    GetFolderRequest(GetFolderRequest &&) = default ;
    GetFolderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFolderRequest() = default ;
    GetFolderRequest& operator=(const GetFolderRequest &) = default ;
    GetFolderRequest& operator=(GetFolderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->folderId_ != nullptr
        && this->folderPath_ != nullptr && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetFolderRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderPath Field Functions 
    bool hasFolderPath() const { return this->folderPath_ != nullptr;};
    void deleteFolderPath() { this->folderPath_ = nullptr;};
    inline string folderPath() const { DARABONBA_PTR_GET_DEFAULT(folderPath_, "") };
    inline GetFolderRequest& setFolderPath(string folderPath) { DARABONBA_PTR_SET_VALUE(folderPath_, folderPath) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetFolderRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline GetFolderRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


  protected:
    // The ID of the folder. You must configure either this parameter or the FolderPath parameter. You can call the [ListFolders](https://help.aliyun.com/document_detail/173955.html) operation to query the ID.
    std::shared_ptr<string> folderId_ = nullptr;
    // The path of the folder. You must configure either this parameter or the FolderId parameter. You can call the [ListFolders](https://help.aliyun.com/document_detail/173955.html) operation to query the path.
    std::shared_ptr<string> folderPath_ = nullptr;
    // The DataWorks workspace ID. You can log on to the DataWorks console and go to the Workspace page to query the ID. You must configure either this parameter or the ProjectIdentifier parameter to determine the DataWorks workspace to which the operation is applied.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The name of the DataWorks workspace. You can log on to the DataWorks console and go to the Workspace Settings panel to obtain the name. You must specify either this parameter or ProjectId to determine the DataWorks workspace to which the operation is applied.
    std::shared_ptr<string> projectIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
