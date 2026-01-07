// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOSSUPLOADTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOSSUPLOADTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20250301
{
namespace Models
{
  class CreateOssUploadTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOssUploadTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOssUploadTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    CreateOssUploadTokenRequest() = default ;
    CreateOssUploadTokenRequest(const CreateOssUploadTokenRequest &) = default ;
    CreateOssUploadTokenRequest(CreateOssUploadTokenRequest &&) = default ;
    CreateOssUploadTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOssUploadTokenRequest() = default ;
    CreateOssUploadTokenRequest& operator=(const CreateOssUploadTokenRequest &) = default ;
    CreateOssUploadTokenRequest& operator=(CreateOssUploadTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && this->fileType_ == nullptr && this->projectId_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateOssUploadTokenRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline CreateOssUploadTokenRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateOssUploadTokenRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<string> fileName_ {};
    shared_ptr<string> fileType_ {};
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20250301
#endif
