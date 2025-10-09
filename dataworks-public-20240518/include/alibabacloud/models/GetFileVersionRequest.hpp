// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetFileVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileVersion, fileVersion_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileVersion, fileVersion_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
    };
    GetFileVersionRequest() = default ;
    GetFileVersionRequest(const GetFileVersionRequest &) = default ;
    GetFileVersionRequest(GetFileVersionRequest &&) = default ;
    GetFileVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileVersionRequest() = default ;
    GetFileVersionRequest& operator=(const GetFileVersionRequest &) = default ;
    GetFileVersionRequest& operator=(GetFileVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileId_ != nullptr
        && this->fileVersion_ != nullptr && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline GetFileVersionRequest& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileVersion Field Functions 
    bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
    void deleteFileVersion() { this->fileVersion_ = nullptr;};
    inline int32_t fileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, 0) };
    inline GetFileVersionRequest& setFileVersion(int32_t fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetFileVersionRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline GetFileVersionRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


  protected:
    // The file ID. You can call the [ListFiles](https://help.aliyun.com/document_detail/173942.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // The file version whose information you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> fileVersion_ = nullptr;
    // The DataWorks workspace ID. You can click the Workspace Manage icon in the upper-right corner of the DataStudio page to go to the Workspace page and query the workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The unique identifier of the DataWorks workspace. You can view the identifier in the upper part of the DataStudio page. You can also select another identifier to switch to another workspace.
    // 
    // You must configure either this parameter or the ProjectId parameter to determine the DataWorks workspace to which the operation is applied.
    std::shared_ptr<string> projectIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
