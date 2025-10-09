// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class SubmitFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_TO_JSON(SkipAllDeployFileExtensions, skipAllDeployFileExtensions_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_FROM_JSON(SkipAllDeployFileExtensions, skipAllDeployFileExtensions_);
    };
    SubmitFileRequest() = default ;
    SubmitFileRequest(const SubmitFileRequest &) = default ;
    SubmitFileRequest(SubmitFileRequest &&) = default ;
    SubmitFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitFileRequest() = default ;
    SubmitFileRequest& operator=(const SubmitFileRequest &) = default ;
    SubmitFileRequest& operator=(SubmitFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->fileId_ != nullptr && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr && this->skipAllDeployFileExtensions_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline SubmitFileRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline SubmitFileRequest& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline SubmitFileRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline SubmitFileRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // skipAllDeployFileExtensions Field Functions 
    bool hasSkipAllDeployFileExtensions() const { return this->skipAllDeployFileExtensions_ != nullptr;};
    void deleteSkipAllDeployFileExtensions() { this->skipAllDeployFileExtensions_ = nullptr;};
    inline bool skipAllDeployFileExtensions() const { DARABONBA_PTR_GET_DEFAULT(skipAllDeployFileExtensions_, false) };
    inline SubmitFileRequest& setSkipAllDeployFileExtensions(bool skipAllDeployFileExtensions) { DARABONBA_PTR_SET_VALUE(skipAllDeployFileExtensions_, skipAllDeployFileExtensions) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectIdentifier_ = nullptr;
    std::shared_ptr<bool> skipAllDeployFileExtensions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
