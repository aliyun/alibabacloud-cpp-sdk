// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTABLEUNDERSTANDINGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTABLEUNDERSTANDINGJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitTableUnderstandingJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTableUnderstandingJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileNameExtension, fileNameExtension_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTableUnderstandingJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileNameExtension, fileNameExtension_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
    };
    SubmitTableUnderstandingJobRequest() = default ;
    SubmitTableUnderstandingJobRequest(const SubmitTableUnderstandingJobRequest &) = default ;
    SubmitTableUnderstandingJobRequest(SubmitTableUnderstandingJobRequest &&) = default ;
    SubmitTableUnderstandingJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTableUnderstandingJobRequest() = default ;
    SubmitTableUnderstandingJobRequest& operator=(const SubmitTableUnderstandingJobRequest &) = default ;
    SubmitTableUnderstandingJobRequest& operator=(SubmitTableUnderstandingJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->fileNameExtension_ == nullptr && return this->fileUrl_ == nullptr && return this->ossBucket_ == nullptr && return this->ossEndpoint_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitTableUnderstandingJobRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileNameExtension Field Functions 
    bool hasFileNameExtension() const { return this->fileNameExtension_ != nullptr;};
    void deleteFileNameExtension() { this->fileNameExtension_ = nullptr;};
    inline string fileNameExtension() const { DARABONBA_PTR_GET_DEFAULT(fileNameExtension_, "") };
    inline SubmitTableUnderstandingJobRequest& setFileNameExtension(string fileNameExtension) { DARABONBA_PTR_SET_VALUE(fileNameExtension_, fileNameExtension) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline SubmitTableUnderstandingJobRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline SubmitTableUnderstandingJobRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline SubmitTableUnderstandingJobRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


  protected:
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileNameExtension_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> ossBucket_ = nullptr;
    std::shared_ptr<string> ossEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
