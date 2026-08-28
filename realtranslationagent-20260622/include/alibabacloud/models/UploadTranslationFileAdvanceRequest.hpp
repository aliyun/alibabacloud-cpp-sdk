// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADTRANSLATIONFILEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADTRANSLATIONFILEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RealTranslationAgent20260622
{
namespace Models
{
  class UploadTranslationFileAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadTranslationFileAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(APIKey, APIKey_);
      // fileObject_ is stream
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
    };
    friend void from_json(const Darabonba::Json& j, UploadTranslationFileAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(APIKey, APIKey_);
      // fileObject_ is stream
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
    };
    UploadTranslationFileAdvanceRequest() = default ;
    UploadTranslationFileAdvanceRequest(const UploadTranslationFileAdvanceRequest &) = default ;
    UploadTranslationFileAdvanceRequest(UploadTranslationFileAdvanceRequest &&) = default ;
    UploadTranslationFileAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadTranslationFileAdvanceRequest() = default ;
    UploadTranslationFileAdvanceRequest& operator=(const UploadTranslationFileAdvanceRequest &) = default ;
    UploadTranslationFileAdvanceRequest& operator=(UploadTranslationFileAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->APIKey_ == nullptr
        && this->fileObject_ == nullptr && this->fileName_ == nullptr; };
    // APIKey Field Functions 
    bool hasAPIKey() const { return this->APIKey_ != nullptr;};
    void deleteAPIKey() { this->APIKey_ = nullptr;};
    inline string getAPIKey() const { DARABONBA_PTR_GET_DEFAULT(APIKey_, "") };
    inline UploadTranslationFileAdvanceRequest& setAPIKey(string APIKey) { DARABONBA_PTR_SET_VALUE(APIKey_, APIKey) };


    // fileObject Field Functions 
    bool hasFileObject() const { return this->fileObject_ != nullptr;};
    void deleteFileObject() { this->fileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFileObject() const { DARABONBA_GET(fileObject_) };
    inline UploadTranslationFileAdvanceRequest& setFileObject(shared_ptr<Darabonba::IStream> fileObject) { DARABONBA_SET_VALUE(fileObject_, fileObject) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadTranslationFileAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


  protected:
    // The API key that identifies the identity of the member accounts. You can obtain it from the RuiYiBao console.
    shared_ptr<string> APIKey_ {};
    // The file. The SDK supports direct upload and temporary authorized upload.
    // - **Direct upload**: Use UploadTranslationFileAdvance in the SDK for direct upload. The Java field type is InputStream, and the Python type is BinaryIO.
    // - **Temporary authorized upload**: Use AuthorizeFileUpload and UploadTranslationFile in the SDK for temporary authorized upload.
    //   - Step 1: Call AuthorizeFileUpload to obtain a temporary OSS upload credential, then upload the file to obtain the complete file URL.
    //   - Step 2: Call UploadTranslationFile and pass the URL to the File field.
    // 
    // > Notes on temporary authorized upload
    // > - You need to additionally import OpenPlatform(2019-12-19) - AuthorizeFileUpload to obtain a temporary OssPolicy. For information about how to upload files, refer to [Upload objects directly from clients to OSS](https://www.alibabacloud.com/help/en/oss/user-guide/uploading-objects-to-oss-directly-from-clients/).
    // 
    // > File size limit
    // > - The maximum file size is 500 MB.
    // 
    // This parameter is required.
    shared_ptr<Darabonba::IStream> fileObject_ {};
    // The name of the uploaded file.
    // 
    // <notice>Make sure the correct file name (including the extension) is provided. Otherwise, file parsing will fail.</notice>
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RealTranslationAgent20260622
#endif
