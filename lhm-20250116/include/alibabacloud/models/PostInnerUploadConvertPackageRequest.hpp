// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POSTINNERUPLOADCONVERTPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_POSTINNERUPLOADCONVERTPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class PostInnerUploadConvertPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PostInnerUploadConvertPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileContentBase64, fileContentBase64_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, PostInnerUploadConvertPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileContentBase64, fileContentBase64_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    PostInnerUploadConvertPackageRequest() = default ;
    PostInnerUploadConvertPackageRequest(const PostInnerUploadConvertPackageRequest &) = default ;
    PostInnerUploadConvertPackageRequest(PostInnerUploadConvertPackageRequest &&) = default ;
    PostInnerUploadConvertPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PostInnerUploadConvertPackageRequest() = default ;
    PostInnerUploadConvertPackageRequest& operator=(const PostInnerUploadConvertPackageRequest &) = default ;
    PostInnerUploadConvertPackageRequest& operator=(PostInnerUploadConvertPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileContentBase64_ == nullptr
        && this->fileName_ == nullptr && this->taskId_ == nullptr; };
    // fileContentBase64 Field Functions 
    bool hasFileContentBase64() const { return this->fileContentBase64_ != nullptr;};
    void deleteFileContentBase64() { this->fileContentBase64_ = nullptr;};
    inline string getFileContentBase64() const { DARABONBA_PTR_GET_DEFAULT(fileContentBase64_, "") };
    inline PostInnerUploadConvertPackageRequest& setFileContentBase64(string fileContentBase64) { DARABONBA_PTR_SET_VALUE(fileContentBase64_, fileContentBase64) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline PostInnerUploadConvertPackageRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline PostInnerUploadConvertPackageRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The file content, Base64-encoded.
    shared_ptr<string> fileContentBase64_ {};
    // The file name.
    shared_ptr<string> fileName_ {};
    // The task ID that uniquely identifies a task.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
