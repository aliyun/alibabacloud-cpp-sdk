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
    virtual bool empty() const override { this->categoryId_ != nullptr
        && this->fileType_ != nullptr && this->parser_ != nullptr && this->parserConfigShrink_ != nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline ChangeParseSettingShrinkRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline ChangeParseSettingShrinkRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string parser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline ChangeParseSettingShrinkRequest& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // parserConfigShrink Field Functions 
    bool hasParserConfigShrink() const { return this->parserConfigShrink_ != nullptr;};
    void deleteParserConfigShrink() { this->parserConfigShrink_ = nullptr;};
    inline string parserConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(parserConfigShrink_, "") };
    inline ChangeParseSettingShrinkRequest& setParserConfigShrink(string parserConfigShrink) { DARABONBA_PTR_SET_VALUE(parserConfigShrink_, parserConfigShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> categoryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> parser_ = nullptr;
    std::shared_ptr<string> parserConfigShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
