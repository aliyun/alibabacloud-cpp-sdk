// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDIONOTEUPLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUDIONOTEUPLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAudioNoteUploadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAudioNoteUploadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAudioNoteUploadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
    };
    GetAudioNoteUploadUrlRequest() = default ;
    GetAudioNoteUploadUrlRequest(const GetAudioNoteUploadUrlRequest &) = default ;
    GetAudioNoteUploadUrlRequest(GetAudioNoteUploadUrlRequest &&) = default ;
    GetAudioNoteUploadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAudioNoteUploadUrlRequest() = default ;
    GetAudioNoteUploadUrlRequest& operator=(const GetAudioNoteUploadUrlRequest &) = default ;
    GetAudioNoteUploadUrlRequest& operator=(GetAudioNoteUploadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && this->fileType_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetAudioNoteUploadUrlRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline GetAudioNoteUploadUrlRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


  protected:
    // The name of the file to upload.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The file type.
    shared_ptr<string> fileType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
