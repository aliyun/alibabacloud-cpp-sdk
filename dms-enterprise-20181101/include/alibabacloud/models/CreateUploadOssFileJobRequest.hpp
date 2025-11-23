// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADOSSFILEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADOSSFILEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateUploadOSSFileJobRequestUploadTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateUploadOSSFileJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadOSSFileJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSource, fileSource_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UploadTarget, uploadTarget_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadOSSFileJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSource, fileSource_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UploadTarget, uploadTarget_);
    };
    CreateUploadOSSFileJobRequest() = default ;
    CreateUploadOSSFileJobRequest(const CreateUploadOSSFileJobRequest &) = default ;
    CreateUploadOSSFileJobRequest(CreateUploadOSSFileJobRequest &&) = default ;
    CreateUploadOSSFileJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUploadOSSFileJobRequest() = default ;
    CreateUploadOSSFileJobRequest& operator=(const CreateUploadOSSFileJobRequest &) = default ;
    CreateUploadOSSFileJobRequest& operator=(CreateUploadOSSFileJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->fileSource_ == nullptr && return this->tid_ == nullptr && return this->uploadTarget_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateUploadOSSFileJobRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSource Field Functions 
    bool hasFileSource() const { return this->fileSource_ != nullptr;};
    void deleteFileSource() { this->fileSource_ = nullptr;};
    inline string fileSource() const { DARABONBA_PTR_GET_DEFAULT(fileSource_, "") };
    inline CreateUploadOSSFileJobRequest& setFileSource(string fileSource) { DARABONBA_PTR_SET_VALUE(fileSource_, fileSource) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateUploadOSSFileJobRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // uploadTarget Field Functions 
    bool hasUploadTarget() const { return this->uploadTarget_ != nullptr;};
    void deleteUploadTarget() { this->uploadTarget_ = nullptr;};
    inline const CreateUploadOSSFileJobRequestUploadTarget & uploadTarget() const { DARABONBA_PTR_GET_CONST(uploadTarget_, CreateUploadOSSFileJobRequestUploadTarget) };
    inline CreateUploadOSSFileJobRequestUploadTarget uploadTarget() { DARABONBA_PTR_GET(uploadTarget_, CreateUploadOSSFileJobRequestUploadTarget) };
    inline CreateUploadOSSFileJobRequest& setUploadTarget(const CreateUploadOSSFileJobRequestUploadTarget & uploadTarget) { DARABONBA_PTR_SET_VALUE(uploadTarget_, uploadTarget) };
    inline CreateUploadOSSFileJobRequest& setUploadTarget(CreateUploadOSSFileJobRequestUploadTarget && uploadTarget) { DARABONBA_PTR_SET_RVALUE(uploadTarget_, uploadTarget) };


  protected:
    // The name of the file.
    // 
    // > The file name must end with .txt or .sql. For example, the file name can be text.txt.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // The purpose of the file upload task. Valid values:
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
    // > To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html) topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The information about the OSS file to be uploaded.
    // 
    // This parameter is required.
    std::shared_ptr<CreateUploadOSSFileJobRequestUploadTarget> uploadTarget_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
