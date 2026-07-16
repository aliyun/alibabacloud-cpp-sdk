// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEPARSESETTINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEPARSESETTINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ChangeParseSettingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeParseSettingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(Parser, parser_);
      DARABONBA_PTR_TO_JSON(ParserConfig, parserConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeParseSettingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(Parser, parser_);
      DARABONBA_PTR_FROM_JSON(ParserConfig, parserConfigShrink_);
    };
    ChangeParseSettingShrinkRequest() = default ;
    ChangeParseSettingShrinkRequest(const ChangeParseSettingShrinkRequest &) = default ;
    ChangeParseSettingShrinkRequest(ChangeParseSettingShrinkRequest &&) = default ;
    ChangeParseSettingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeParseSettingShrinkRequest() = default ;
    ChangeParseSettingShrinkRequest& operator=(const ChangeParseSettingShrinkRequest &) = default ;
    ChangeParseSettingShrinkRequest& operator=(ChangeParseSettingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->fileType_ == nullptr && this->parser_ == nullptr && this->parserConfigShrink_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline ChangeParseSettingShrinkRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline ChangeParseSettingShrinkRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline ChangeParseSettingShrinkRequest& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // parserConfigShrink Field Functions 
    bool hasParserConfigShrink() const { return this->parserConfigShrink_ != nullptr;};
    void deleteParserConfigShrink() { this->parserConfigShrink_ = nullptr;};
    inline string getParserConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(parserConfigShrink_, "") };
    inline ChangeParseSettingShrinkRequest& setParserConfigShrink(string parserConfigShrink) { DARABONBA_PTR_SET_VALUE(parserConfigShrink_, parserConfigShrink) };


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
    shared_ptr<string> parserConfigShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
