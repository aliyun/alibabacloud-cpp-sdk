// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddFilesFromAuthorizedOssRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFilesFromAuthorizedOssRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(FileDetails, fileDetails_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssRegionId, ossRegionId_);
      DARABONBA_PTR_TO_JSON(OverWriteFileByOssKey, overWriteFileByOssKey_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, AddFilesFromAuthorizedOssRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(FileDetails, fileDetails_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssRegionId, ossRegionId_);
      DARABONBA_PTR_FROM_JSON(OverWriteFileByOssKey, overWriteFileByOssKey_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    AddFilesFromAuthorizedOssRequest() = default ;
    AddFilesFromAuthorizedOssRequest(const AddFilesFromAuthorizedOssRequest &) = default ;
    AddFilesFromAuthorizedOssRequest(AddFilesFromAuthorizedOssRequest &&) = default ;
    AddFilesFromAuthorizedOssRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFilesFromAuthorizedOssRequest() = default ;
    AddFilesFromAuthorizedOssRequest& operator=(const AddFilesFromAuthorizedOssRequest &) = default ;
    AddFilesFromAuthorizedOssRequest& operator=(AddFilesFromAuthorizedOssRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileDetails& obj) { 
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
        DARABONBA_PTR_TO_JSON(Parser, parser_);
        DARABONBA_PTR_TO_JSON(ParserConfig, parserConfig_);
      };
      friend void from_json(const Darabonba::Json& j, FileDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
        DARABONBA_PTR_FROM_JSON(Parser, parser_);
        DARABONBA_PTR_FROM_JSON(ParserConfig, parserConfig_);
      };
      FileDetails() = default ;
      FileDetails(const FileDetails &) = default ;
      FileDetails(FileDetails &&) = default ;
      FileDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileDetails() = default ;
      FileDetails& operator=(const FileDetails &) = default ;
      FileDetails& operator=(FileDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ParserConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParserConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ModelName, modelName_);
          DARABONBA_PTR_TO_JSON(ModelPrompt, modelPrompt_);
        };
        friend void from_json(const Darabonba::Json& j, ParserConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
          DARABONBA_PTR_FROM_JSON(ModelPrompt, modelPrompt_);
        };
        ParserConfig() = default ;
        ParserConfig(const ParserConfig &) = default ;
        ParserConfig(ParserConfig &&) = default ;
        ParserConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParserConfig() = default ;
        ParserConfig& operator=(const ParserConfig &) = default ;
        ParserConfig& operator=(ParserConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->modelName_ == nullptr
        && this->modelPrompt_ == nullptr; };
        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline ParserConfig& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


        // modelPrompt Field Functions 
        bool hasModelPrompt() const { return this->modelPrompt_ != nullptr;};
        void deleteModelPrompt() { this->modelPrompt_ = nullptr;};
        inline string getModelPrompt() const { DARABONBA_PTR_GET_DEFAULT(modelPrompt_, "") };
        inline ParserConfig& setModelPrompt(string modelPrompt) { DARABONBA_PTR_SET_VALUE(modelPrompt_, modelPrompt) };


      protected:
        // The model name.
        shared_ptr<string> modelName_ {};
        // The prompt used when calling Qwen VL parsing.
        shared_ptr<string> modelPrompt_ {};
      };

      virtual bool empty() const override { return this->fileName_ == nullptr
        && this->ossKey_ == nullptr && this->parser_ == nullptr && this->parserConfig_ == nullptr; };
      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline FileDetails& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // ossKey Field Functions 
      bool hasOssKey() const { return this->ossKey_ != nullptr;};
      void deleteOssKey() { this->ossKey_ = nullptr;};
      inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
      inline FileDetails& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


      // parser Field Functions 
      bool hasParser() const { return this->parser_ != nullptr;};
      void deleteParser() { this->parser_ = nullptr;};
      inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
      inline FileDetails& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


      // parserConfig Field Functions 
      bool hasParserConfig() const { return this->parserConfig_ != nullptr;};
      void deleteParserConfig() { this->parserConfig_ = nullptr;};
      inline const FileDetails::ParserConfig & getParserConfig() const { DARABONBA_PTR_GET_CONST(parserConfig_, FileDetails::ParserConfig) };
      inline FileDetails::ParserConfig getParserConfig() { DARABONBA_PTR_GET(parserConfig_, FileDetails::ParserConfig) };
      inline FileDetails& setParserConfig(const FileDetails::ParserConfig & parserConfig) { DARABONBA_PTR_SET_VALUE(parserConfig_, parserConfig) };
      inline FileDetails& setParserConfig(FileDetails::ParserConfig && parserConfig) { DARABONBA_PTR_SET_RVALUE(parserConfig_, parserConfig) };


    protected:
      // The name of the file to import. The file name must include the file format extension.
      // - Supported formats: pdf, docx, doc, txt, md, pptx, ppt, xlsx, xls, html, png, jpg, jpeg, bmp, and gif.
      // - The file name must be 4 to 128 characters in length.
      // - For file upload requirements and limits, see [Knowledge base quotas and limits](https://help.aliyun.com/document_detail/2880605.html).
      // 
      // >Notice: If the name of the imported file is the same as an existing file in the knowledge base, the operation still returns a `Status` of `SUCCESS`, but the file is not actually imported. The existing file with the same name remains unchanged. Make sure that each imported file name is unique.
      // > To create a data table and upload data, use the Model Studio console. This is not supported through the API.
      // 
      // This parameter is required.
      shared_ptr<string> fileName_ {};
      // The key of the file in the OSS bucket. For more information, see [Object naming conventions](https://help.aliyun.com/document_detail/273129.html).
      // 
      // This parameter is required.
      shared_ptr<string> ossKey_ {};
      // The parser type. Valid values:
      // 
      // - DOCMIND: intelligent document parsing.
      // - DOCMIND_DIGITAL: electronic document parsing.
      // - DOCMIND_LLM_VERSION: LLM-based document parsing.
      // - DASH_QWEN_VL_PARSER: Qwen VL parsing.
      // - DOCMIND_LLM_VERSION_MEDIA: audio and video parsing.
      // - AUTO_SELECT: automatic parser selection.
      // 
      // <props="intl">
      // <note>The uploaded file is parsed by using the specified parser. If you set this parameter to AUTO_SELECT, the parser configured for the category is used.</note>
      // 
      // 
      // <props="china">
      // <note>When CategoryType is UNSTRUCTURED, the parser parses the uploaded file based on the data parsing settings of the current category.</note>
      // <note>When CategoryType is SESSION_FILE, the system uses the default method (which cannot be changed) to parse the file content.</note>
      shared_ptr<string> parser_ {};
      // The parser configuration. This parameter is required only when the parser type is set to Qwen VL parsing.
      shared_ptr<FileDetails::ParserConfig> parserConfig_ {};
    };

    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->categoryType_ == nullptr && this->fileDetails_ == nullptr && this->ossBucketName_ == nullptr && this->ossRegionId_ == nullptr && this->overWriteFileByOssKey_ == nullptr
        && this->tags_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline AddFilesFromAuthorizedOssRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline AddFilesFromAuthorizedOssRequest& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // fileDetails Field Functions 
    bool hasFileDetails() const { return this->fileDetails_ != nullptr;};
    void deleteFileDetails() { this->fileDetails_ = nullptr;};
    inline const vector<AddFilesFromAuthorizedOssRequest::FileDetails> & getFileDetails() const { DARABONBA_PTR_GET_CONST(fileDetails_, vector<AddFilesFromAuthorizedOssRequest::FileDetails>) };
    inline vector<AddFilesFromAuthorizedOssRequest::FileDetails> getFileDetails() { DARABONBA_PTR_GET(fileDetails_, vector<AddFilesFromAuthorizedOssRequest::FileDetails>) };
    inline AddFilesFromAuthorizedOssRequest& setFileDetails(const vector<AddFilesFromAuthorizedOssRequest::FileDetails> & fileDetails) { DARABONBA_PTR_SET_VALUE(fileDetails_, fileDetails) };
    inline AddFilesFromAuthorizedOssRequest& setFileDetails(vector<AddFilesFromAuthorizedOssRequest::FileDetails> && fileDetails) { DARABONBA_PTR_SET_RVALUE(fileDetails_, fileDetails) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline AddFilesFromAuthorizedOssRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossRegionId Field Functions 
    bool hasOssRegionId() const { return this->ossRegionId_ != nullptr;};
    void deleteOssRegionId() { this->ossRegionId_ = nullptr;};
    inline string getOssRegionId() const { DARABONBA_PTR_GET_DEFAULT(ossRegionId_, "") };
    inline AddFilesFromAuthorizedOssRequest& setOssRegionId(string ossRegionId) { DARABONBA_PTR_SET_VALUE(ossRegionId_, ossRegionId) };


    // overWriteFileByOssKey Field Functions 
    bool hasOverWriteFileByOssKey() const { return this->overWriteFileByOssKey_ != nullptr;};
    void deleteOverWriteFileByOssKey() { this->overWriteFileByOssKey_ = nullptr;};
    inline bool getOverWriteFileByOssKey() const { DARABONBA_PTR_GET_DEFAULT(overWriteFileByOssKey_, false) };
    inline AddFilesFromAuthorizedOssRequest& setOverWriteFileByOssKey(bool overWriteFileByOssKey) { DARABONBA_PTR_SET_VALUE(overWriteFileByOssKey_, overWriteFileByOssKey) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline AddFilesFromAuthorizedOssRequest& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline AddFilesFromAuthorizedOssRequest& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the category to which the files are imported. This is the `CategoryId` returned by the AddCategory operation. You can also obtain the category ID by clicking the ID icon next to the category name on the <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center) - Files tab<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) - Files tab. You can pass in `default` to use the system-created default category.
    // 
    // This parameter is required.
    shared_ptr<string> categoryId_ {};
    // The category type. Optional. Default value: UNSTRUCTURED. Valid values:
    // - UNSTRUCTURED: category for building knowledge base scenarios.
    // 
    // <props="china">
    // 
    // > This operation does not support importing SESSION_FILE for agent application [conversation interaction](https://www.alibabacloud.com/help/en/model-studio/user-guide/file-interaction). Use the **AddFile** operation to upload SESSION_FILE from a local source.
    // 
    // This parameter is required.
    shared_ptr<string> categoryType_ {};
    // The list of files to import. A maximum of 10 files can be uploaded at a time.
    // > A maximum of 10 files can be uploaded at a time.
    // >
    // 
    // This parameter is required.
    shared_ptr<vector<AddFilesFromAuthorizedOssRequest::FileDetails>> fileDetails_ {};
    // The name of the OSS bucket. For more information, see [Buckets](https://help.aliyun.com/document_detail/177682.html).
    // 
    // This parameter is required.
    shared_ptr<string> ossBucketName_ {};
    // The region ID of the OSS bucket. For more information, see [OSS regions and endpoints](https://help.aliyun.com/document_detail/31837.html).
    // 
    // This parameter is required.
    shared_ptr<string> ossRegionId_ {};
    // Specifies whether to overwrite files with the same OssKey in the category. Default value: false, which means files are not overwritten.
    shared_ptr<bool> overWriteFileByOssKey_ {};
    // The list of tags associated with the file. Default value: empty, which means the file is not associated with any tags. A maximum of 10 tags can be specified.
    shared_ptr<vector<string>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
