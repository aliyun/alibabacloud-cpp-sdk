// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEPARSESETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEPARSESETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChangeParseSettingRequestParserConfig.hpp>
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
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->fileType_ == nullptr && return this->parser_ == nullptr && return this->parserConfig_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline ChangeParseSettingRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline ChangeParseSettingRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string parser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline ChangeParseSettingRequest& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // parserConfig Field Functions 
    bool hasParserConfig() const { return this->parserConfig_ != nullptr;};
    void deleteParserConfig() { this->parserConfig_ = nullptr;};
    inline const ChangeParseSettingRequestParserConfig & parserConfig() const { DARABONBA_PTR_GET_CONST(parserConfig_, ChangeParseSettingRequestParserConfig) };
    inline ChangeParseSettingRequestParserConfig parserConfig() { DARABONBA_PTR_GET(parserConfig_, ChangeParseSettingRequestParserConfig) };
    inline ChangeParseSettingRequest& setParserConfig(const ChangeParseSettingRequestParserConfig & parserConfig) { DARABONBA_PTR_SET_VALUE(parserConfig_, parserConfig) };
    inline ChangeParseSettingRequest& setParserConfig(ChangeParseSettingRequestParserConfig && parserConfig) { DARABONBA_PTR_SET_RVALUE(parserConfig_, parserConfig) };


  protected:
    // The category ID, which is the `CategoryId` returned by **AddCategory**. To view the category ID, click the ID icon next to the category name on the Unstructured Data tab of the [Application Data](https://bailian.console.alibabacloud.com/?tab=app#/data-center) page.
    // 
    // This parameter is required.
    std::shared_ptr<string> categoryId_ = nullptr;
    // The file type. Valid values: pdf, docx, and doc.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileType_ = nullptr;
    // The parser code. Valid values:
    // 
    // *   DOCMIND (Intelligent parsing)
    // *   DOCMIND_DIGITAL (Digital parsing)
    // *   DOCMIND_LLM_VERSION (LLM parsing)
    // *   DASH_QWEN_VL_PARSER (Qwen VL parsing)
    // 
    // This parameter is required.
    std::shared_ptr<string> parser_ = nullptr;
    // The parser configuration. Currently, this is available only for Qwen VL parsing.
    std::shared_ptr<ChangeParseSettingRequestParserConfig> parserConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
