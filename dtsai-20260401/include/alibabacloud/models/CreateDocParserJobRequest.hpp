// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOCPARSERJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOCPARSERJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DtsAI20260401
{
namespace Models
{
  class CreateDocParserJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDocParserJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(ImageMode, imageMode_);
      DARABONBA_PTR_TO_JSON(OssFileUrl, ossFileUrl_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      DARABONBA_PTR_TO_JSON(TableFormat, tableFormat_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDocParserJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(ImageMode, imageMode_);
      DARABONBA_PTR_FROM_JSON(OssFileUrl, ossFileUrl_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
      DARABONBA_PTR_FROM_JSON(TableFormat, tableFormat_);
    };
    CreateDocParserJobRequest() = default ;
    CreateDocParserJobRequest(const CreateDocParserJobRequest &) = default ;
    CreateDocParserJobRequest(CreateDocParserJobRequest &&) = default ;
    CreateDocParserJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDocParserJobRequest() = default ;
    CreateDocParserJobRequest& operator=(const CreateDocParserJobRequest &) = default ;
    CreateDocParserJobRequest& operator=(CreateDocParserJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileFormat_ == nullptr
        && this->fileName_ == nullptr && this->fileUrl_ == nullptr && this->imageMode_ == nullptr && this->ossFileUrl_ == nullptr && this->outputFormat_ == nullptr
        && this->regionId_ == nullptr && this->resultType_ == nullptr && this->tableFormat_ == nullptr; };
    // fileFormat Field Functions 
    bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
    void deleteFileFormat() { this->fileFormat_ = nullptr;};
    inline string getFileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
    inline CreateDocParserJobRequest& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateDocParserJobRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateDocParserJobRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // imageMode Field Functions 
    bool hasImageMode() const { return this->imageMode_ != nullptr;};
    void deleteImageMode() { this->imageMode_ = nullptr;};
    inline string getImageMode() const { DARABONBA_PTR_GET_DEFAULT(imageMode_, "") };
    inline CreateDocParserJobRequest& setImageMode(string imageMode) { DARABONBA_PTR_SET_VALUE(imageMode_, imageMode) };


    // ossFileUrl Field Functions 
    bool hasOssFileUrl() const { return this->ossFileUrl_ != nullptr;};
    void deleteOssFileUrl() { this->ossFileUrl_ = nullptr;};
    inline string getOssFileUrl() const { DARABONBA_PTR_GET_DEFAULT(ossFileUrl_, "") };
    inline CreateDocParserJobRequest& setOssFileUrl(string ossFileUrl) { DARABONBA_PTR_SET_VALUE(ossFileUrl_, ossFileUrl) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string getOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline CreateDocParserJobRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDocParserJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline CreateDocParserJobRequest& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // tableFormat Field Functions 
    bool hasTableFormat() const { return this->tableFormat_ != nullptr;};
    void deleteTableFormat() { this->tableFormat_ = nullptr;};
    inline string getTableFormat() const { DARABONBA_PTR_GET_DEFAULT(tableFormat_, "") };
    inline CreateDocParserJobRequest& setTableFormat(string tableFormat) { DARABONBA_PTR_SET_VALUE(tableFormat_, tableFormat) };


  protected:
    // The format of the input file. Valid values:
    // 
    // - **pdf**: PDF file.
    // 
    // - **docx**: Word file in docx format.
    // 
    // - **doc**: Word file in doc format.
    // 
    // - **pptx**: PPT file in pptx format.
    // 
    // - **ppt**: PPT file in ppt format.
    // 
    // - **txt**: plain text file.
    // 
    // - **md**: Markdown file.
    // 
    // - **png**: PNG image.
    // 
    // - **jpg**: JPG image.
    // 
    // - **jpeg**: JPEG image.
    // 
    // This parameter is required.
    shared_ptr<string> fileFormat_ {};
    // The file name, which must include the file name extension.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The HTTP or HTTPS URL of the file to be parsed.
    // >SDKs for various languages provide an additional `CreateDocParserJobAdvance` method that supports passing a local file stream directly (such as InputStream in Java), without the need to upload the file to OSS and construct a FileUrl in advance. When using the Advance method, replace the `FileUrl` parameter (URL string) with the `FileUrlObject` parameter (file stream). All other request parameters remain unchanged. The SDK automatically performs the following operations:
    // >1. Obtains temporary OSS upload credentials.
    // >2. Uploads the file stream directly to OSS.
    // >3. Calls the CreateDocParserJob operation with the generated OSS URL.
    shared_ptr<string> fileUrl_ {};
    shared_ptr<string> imageMode_ {};
    // The OSS file URL.
    shared_ptr<string> ossFileUrl_ {};
    // The output format of the parsing result. Valid values:
    // 
    // - **markdown**: Markdown format.
    // 
    // This parameter is required.
    shared_ptr<string> outputFormat_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resultType_ {};
    shared_ptr<string> tableFormat_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DtsAI20260401
#endif
