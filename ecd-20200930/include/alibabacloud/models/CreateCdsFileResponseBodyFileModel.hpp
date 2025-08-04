// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECDSFILERESPONSEBODYFILEMODEL_HPP_
#define ALIBABACLOUD_MODELS_CREATECDSFILERESPONSEBODYFILEMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCdsFileResponseBodyFileModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCdsFileResponseBodyFileModel& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
      DARABONBA_PTR_TO_JSON(UploadUrl, uploadUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCdsFileResponseBodyFileModel& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
      DARABONBA_PTR_FROM_JSON(UploadUrl, uploadUrl_);
    };
    CreateCdsFileResponseBodyFileModel() = default ;
    CreateCdsFileResponseBodyFileModel(const CreateCdsFileResponseBodyFileModel &) = default ;
    CreateCdsFileResponseBodyFileModel(CreateCdsFileResponseBodyFileModel &&) = default ;
    CreateCdsFileResponseBodyFileModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCdsFileResponseBodyFileModel() = default ;
    CreateCdsFileResponseBodyFileModel& operator=(const CreateCdsFileResponseBodyFileModel &) = default ;
    CreateCdsFileResponseBodyFileModel& operator=(CreateCdsFileResponseBodyFileModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileId_ != nullptr
        && this->uploadId_ != nullptr && this->uploadUrl_ != nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline CreateCdsFileResponseBodyFileModel& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // uploadId Field Functions 
    bool hasUploadId() const { return this->uploadId_ != nullptr;};
    void deleteUploadId() { this->uploadId_ = nullptr;};
    inline string uploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
    inline CreateCdsFileResponseBodyFileModel& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


    // uploadUrl Field Functions 
    bool hasUploadUrl() const { return this->uploadUrl_ != nullptr;};
    void deleteUploadUrl() { this->uploadUrl_ = nullptr;};
    inline string uploadUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadUrl_, "") };
    inline CreateCdsFileResponseBodyFileModel& setUploadUrl(string uploadUrl) { DARABONBA_PTR_SET_VALUE(uploadUrl_, uploadUrl) };


  protected:
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<string> uploadId_ = nullptr;
    std::shared_ptr<string> uploadUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
