// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADFILEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADFILEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateUploadFileJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadFileJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSource, fileSource_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UploadURL, uploadURL_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadFileJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSource, fileSource_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UploadURL, uploadURL_);
    };
    CreateUploadFileJobRequest() = default ;
    CreateUploadFileJobRequest(const CreateUploadFileJobRequest &) = default ;
    CreateUploadFileJobRequest(CreateUploadFileJobRequest &&) = default ;
    CreateUploadFileJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUploadFileJobRequest() = default ;
    CreateUploadFileJobRequest& operator=(const CreateUploadFileJobRequest &) = default ;
    CreateUploadFileJobRequest& operator=(CreateUploadFileJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->fileSource_ == nullptr && return this->tid_ == nullptr && return this->uploadURL_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateUploadFileJobRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSource Field Functions 
    bool hasFileSource() const { return this->fileSource_ != nullptr;};
    void deleteFileSource() { this->fileSource_ = nullptr;};
    inline string fileSource() const { DARABONBA_PTR_GET_DEFAULT(fileSource_, "") };
    inline CreateUploadFileJobRequest& setFileSource(string fileSource) { DARABONBA_PTR_SET_VALUE(fileSource_, fileSource) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateUploadFileJobRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // uploadURL Field Functions 
    bool hasUploadURL() const { return this->uploadURL_ != nullptr;};
    void deleteUploadURL() { this->uploadURL_ = nullptr;};
    inline string uploadURL() const { DARABONBA_PTR_GET_DEFAULT(uploadURL_, "") };
    inline CreateUploadFileJobRequest& setUploadURL(string uploadURL) { DARABONBA_PTR_SET_VALUE(uploadURL_, uploadURL) };


  protected:
    // The name of the attachment file.
    // 
    // >  The file name must end with .txt or .sql. For example, the file name can be test.txt or test.sql.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // The purpose of the attachment file. Valid values:
    // 
    // *   **datacorrect**: The file is uploaded to change data.
    // *   **order_info_attachment**: The file is uploaded as an attachment in a ticket.
    // *   **big-file**: The file is uploaded to import multiple data records at a time.
    // *   **sqlreview**: The file is uploaded for SQL review.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSource_ = nullptr;
    // The ID of the tenant.
    // 
    // >  You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The URL of the attachment file. The URL must be an HTTP URL or an HTTPS URL.
    // 
    // >  You can upload the attachment file to an Object Storage Service (OSS) bucket and obtain the URL of the file in the OSS console. For more information, see [Share objects](https://help.aliyun.com/document_detail/195674.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> uploadURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
