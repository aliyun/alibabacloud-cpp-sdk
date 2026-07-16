// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEPARSESETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEPARSESETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ChangeParseSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeParseSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(Parser, parser_);
      DARABONBA_PTR_TO_JSON(ParserConfig, parserConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeParseSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(Parser, parser_);
      DARABONBA_PTR_FROM_JSON(ParserConfig, parserConfig_);
    };
    ChangeParseSettingRequest() = default ;
    ChangeParseSettingRequest(const ChangeParseSettingRequest &) = default ;
    ChangeParseSettingRequest(ChangeParseSettingRequest &&) = default ;
    ChangeParseSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeParseSettingRequest() = default ;
    ChangeParseSettingRequest& operator=(const ChangeParseSettingRequest &) = default ;
    ChangeParseSettingRequest& operator=(ChangeParseSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParserConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParserConfig& obj) { 
        DARABONBA_PTR_TO_JSON(modelName, modelName_);
        DARABONBA_PTR_TO_JSON(modelPrompt, modelPrompt_);
      };
      friend void from_json(const Darabonba::Json& j, ParserConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(modelName, modelName_);
        DARABONBA_PTR_FROM_JSON(modelPrompt, modelPrompt_);
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
      // The prompt used when calling Qwen VL Parsing.
      shared_ptr<string> modelPrompt_ {};
    };

    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->fileType_ == nullptr && this->parser_ == nullptr && this->parserConfig_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline ChangeParseSettingRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline ChangeParseSettingRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline ChangeParseSettingRequest& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // parserConfig Field Functions 
    bool hasParserConfig() const { return this->parserConfig_ != nullptr;};
    void deleteParserConfig() { this->parserConfig_ = nullptr;};
    inline const ChangeParseSettingRequest::ParserConfig & getParserConfig() const { DARABONBA_PTR_GET_CONST(parserConfig_, ChangeParseSettingRequest::ParserConfig) };
    inline ChangeParseSettingRequest::ParserConfig getParserConfig() { DARABONBA_PTR_GET(parserConfig_, ChangeParseSettingRequest::ParserConfig) };
    inline ChangeParseSettingRequest& setParserConfig(const ChangeParseSettingRequest::ParserConfig & parserConfig) { DARABONBA_PTR_SET_VALUE(parserConfig_, parserConfig) };
    inline ChangeParseSettingRequest& setParserConfig(ChangeParseSettingRequest::ParserConfig && parserConfig) { DARABONBA_PTR_SET_RVALUE(parserConfig_, parserConfig) };


  protected:
    // The category ID, which is the `CategoryId` returned by the **AddCategory** operation. You can also obtain it by clicking the ID icon next to the category name on the <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center) - Files tab<props="intl">[Application Data](https://bailian.console.alibabacloud.com/?tab=app#/data-center) - Unstructured Data tab.
    // 
    // This parameter is required.
    shared_ptr<string> categoryId_ {};
    // The file type (extension). Valid values:
    // - doc
    // - docx
    // - ppt
    // - pptx
    // - xls
    // - xlsx
    // - md
    // - txt
    // - pdf
    // - png
    // - jpg
    // - jpeg
    // - bmp
    // - gif
    // - html
    // 
    // This parameter is required.
    shared_ptr<string> fileType_ {};
    // The parser identifier code. Different parsers are applicable to different scenarios. For more information, see "Knowledge Base". Valid values:
    // - DOCMIND (Intelligent Document Parsing)
    // - DOCMIND_DIGITAL (Electronic Document Parsing)
    // - DOCMIND_LLM_VERSION (Large Model Document Parsing)
    // - DASH_QWEN_VL_PARSER (Qwen VL Parsing)
    // - DOCMIND_LLM_VERSION_MEDIA (Audio/Video Parsing)
    // 
    // This parameter is required.
    shared_ptr<string> parser_ {};
    // The parser configuration. This parameter is required only when the parser is set to Qwen VL Parsing.
    shared_ptr<ChangeParseSettingRequest::ParserConfig> parserConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
