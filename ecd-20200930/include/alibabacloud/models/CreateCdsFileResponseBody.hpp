// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECDSFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECDSFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCdsFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCdsFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileModel, fileModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCdsFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileModel, fileModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCdsFileResponseBody() = default ;
    CreateCdsFileResponseBody(const CreateCdsFileResponseBody &) = default ;
    CreateCdsFileResponseBody(CreateCdsFileResponseBody &&) = default ;
    CreateCdsFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCdsFileResponseBody() = default ;
    CreateCdsFileResponseBody& operator=(const CreateCdsFileResponseBody &) = default ;
    CreateCdsFileResponseBody& operator=(CreateCdsFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileModel& obj) { 
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
        DARABONBA_PTR_TO_JSON(UploadUrl, uploadUrl_);
      };
      friend void from_json(const Darabonba::Json& j, FileModel& obj) { 
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
        DARABONBA_PTR_FROM_JSON(UploadUrl, uploadUrl_);
      };
      FileModel() = default ;
      FileModel(const FileModel &) = default ;
      FileModel(FileModel &&) = default ;
      FileModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileModel() = default ;
      FileModel& operator=(const FileModel &) = default ;
      FileModel& operator=(FileModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileId_ == nullptr
        && this->uploadId_ == nullptr && this->uploadUrl_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline FileModel& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // uploadId Field Functions 
      bool hasUploadId() const { return this->uploadId_ != nullptr;};
      void deleteUploadId() { this->uploadId_ = nullptr;};
      inline string getUploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
      inline FileModel& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


      // uploadUrl Field Functions 
      bool hasUploadUrl() const { return this->uploadUrl_ != nullptr;};
      void deleteUploadUrl() { this->uploadUrl_ = nullptr;};
      inline string getUploadUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadUrl_, "") };
      inline FileModel& setUploadUrl(string uploadUrl) { DARABONBA_PTR_SET_VALUE(uploadUrl_, uploadUrl) };


    protected:
      shared_ptr<string> fileId_ {};
      shared_ptr<string> uploadId_ {};
      shared_ptr<string> uploadUrl_ {};
    };

    virtual bool empty() const override { return this->fileModel_ == nullptr
        && this->requestId_ == nullptr; };
    // fileModel Field Functions 
    bool hasFileModel() const { return this->fileModel_ != nullptr;};
    void deleteFileModel() { this->fileModel_ = nullptr;};
    inline const CreateCdsFileResponseBody::FileModel & getFileModel() const { DARABONBA_PTR_GET_CONST(fileModel_, CreateCdsFileResponseBody::FileModel) };
    inline CreateCdsFileResponseBody::FileModel getFileModel() { DARABONBA_PTR_GET(fileModel_, CreateCdsFileResponseBody::FileModel) };
    inline CreateCdsFileResponseBody& setFileModel(const CreateCdsFileResponseBody::FileModel & fileModel) { DARABONBA_PTR_SET_VALUE(fileModel_, fileModel) };
    inline CreateCdsFileResponseBody& setFileModel(CreateCdsFileResponseBody::FileModel && fileModel) { DARABONBA_PTR_SET_RVALUE(fileModel_, fileModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCdsFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateCdsFileResponseBody::FileModel> fileModel_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
