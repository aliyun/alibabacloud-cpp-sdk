// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGUSOURCEUPLOADDTO_HPP_
#define ALIBABACLOUD_MODELS_MIGUSOURCEUPLOADDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class MiguSourceUploadDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MiguSourceUploadDTO& obj) { 
      DARABONBA_PTR_TO_JSON(expiresAt, expiresAt_);
      DARABONBA_PTR_TO_JSON(fileType, fileType_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(uploadUrl, uploadUrl_);
    };
    friend void from_json(const Darabonba::Json& j, MiguSourceUploadDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(expiresAt, expiresAt_);
      DARABONBA_PTR_FROM_JSON(fileType, fileType_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(uploadUrl, uploadUrl_);
    };
    MiguSourceUploadDTO() = default ;
    MiguSourceUploadDTO(const MiguSourceUploadDTO &) = default ;
    MiguSourceUploadDTO(MiguSourceUploadDTO &&) = default ;
    MiguSourceUploadDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MiguSourceUploadDTO() = default ;
    MiguSourceUploadDTO& operator=(const MiguSourceUploadDTO &) = default ;
    MiguSourceUploadDTO& operator=(MiguSourceUploadDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expiresAt_ == nullptr
        && this->fileType_ == nullptr && this->sourceId_ == nullptr && this->uploadUrl_ == nullptr; };
    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
    inline MiguSourceUploadDTO& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline MiguSourceUploadDTO& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline MiguSourceUploadDTO& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // uploadUrl Field Functions 
    bool hasUploadUrl() const { return this->uploadUrl_ != nullptr;};
    void deleteUploadUrl() { this->uploadUrl_ = nullptr;};
    inline string getUploadUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadUrl_, "") };
    inline MiguSourceUploadDTO& setUploadUrl(string uploadUrl) { DARABONBA_PTR_SET_VALUE(uploadUrl_, uploadUrl) };


  protected:
    // The expiration time of the upload URL in RFC 3339 format.
    shared_ptr<string> expiresAt_ {};
    // The type of the source file (uppercase). Valid values: VIDEO, IMAGE, AUDIO, and TEXT.
    shared_ptr<string> fileType_ {};
    // The unique identifier of the source file, used for subsequent generation tasks and downloads.
    shared_ptr<string> sourceId_ {};
    // The OSS pre-signed upload URL. Use the PUT method to upload the file.
    shared_ptr<string> uploadUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
