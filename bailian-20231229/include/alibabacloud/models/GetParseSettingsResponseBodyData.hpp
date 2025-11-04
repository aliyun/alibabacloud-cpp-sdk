// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARSESETTINGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPARSESETTINGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetParseSettingsResponseBodyDataParserConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetParseSettingsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParseSettingsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(Parser, parser_);
      DARABONBA_PTR_TO_JSON(ParserConfig, parserConfig_);
      DARABONBA_PTR_TO_JSON(ParserDisplayName, parserDisplayName_);
    };
    friend void from_json(const Darabonba::Json& j, GetParseSettingsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(Parser, parser_);
      DARABONBA_PTR_FROM_JSON(ParserConfig, parserConfig_);
      DARABONBA_PTR_FROM_JSON(ParserDisplayName, parserDisplayName_);
    };
    GetParseSettingsResponseBodyData() = default ;
    GetParseSettingsResponseBodyData(const GetParseSettingsResponseBodyData &) = default ;
    GetParseSettingsResponseBodyData(GetParseSettingsResponseBodyData &&) = default ;
    GetParseSettingsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParseSettingsResponseBodyData() = default ;
    GetParseSettingsResponseBodyData& operator=(const GetParseSettingsResponseBodyData &) = default ;
    GetParseSettingsResponseBodyData& operator=(GetParseSettingsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileType_ == nullptr
        && return this->parser_ == nullptr && return this->parserConfig_ == nullptr && return this->parserDisplayName_ == nullptr; };
    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline GetParseSettingsResponseBodyData& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string parser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline GetParseSettingsResponseBodyData& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // parserConfig Field Functions 
    bool hasParserConfig() const { return this->parserConfig_ != nullptr;};
    void deleteParserConfig() { this->parserConfig_ = nullptr;};
    inline const Models::GetParseSettingsResponseBodyDataParserConfig & parserConfig() const { DARABONBA_PTR_GET_CONST(parserConfig_, Models::GetParseSettingsResponseBodyDataParserConfig) };
    inline Models::GetParseSettingsResponseBodyDataParserConfig parserConfig() { DARABONBA_PTR_GET(parserConfig_, Models::GetParseSettingsResponseBodyDataParserConfig) };
    inline GetParseSettingsResponseBodyData& setParserConfig(const Models::GetParseSettingsResponseBodyDataParserConfig & parserConfig) { DARABONBA_PTR_SET_VALUE(parserConfig_, parserConfig) };
    inline GetParseSettingsResponseBodyData& setParserConfig(Models::GetParseSettingsResponseBodyDataParserConfig && parserConfig) { DARABONBA_PTR_SET_RVALUE(parserConfig_, parserConfig) };


    // parserDisplayName Field Functions 
    bool hasParserDisplayName() const { return this->parserDisplayName_ != nullptr;};
    void deleteParserDisplayName() { this->parserDisplayName_ = nullptr;};
    inline string parserDisplayName() const { DARABONBA_PTR_GET_DEFAULT(parserDisplayName_, "") };
    inline GetParseSettingsResponseBodyData& setParserDisplayName(string parserDisplayName) { DARABONBA_PTR_SET_VALUE(parserDisplayName_, parserDisplayName) };


  protected:
    // The file type. Valid values are: pdf, docx, doc, etc. All supported file types in the category are listed here.
    std::shared_ptr<string> fileType_ = nullptr;
    // The parser used for files of the current type. Valid values:
    // 
    // *   DOCMIND (Intelligent parsing)
    // *   DOCMIND_DIGITAL (Digital parsing)
    // *   DOCMIND_LLM_VERSION (LLM parsing)
    // *   DASH_QWEN_VL_PARSER (Qwen VL parsing)
    std::shared_ptr<string> parser_ = nullptr;
    // The parser configuration. Currently, this is available only for Qwen VL parsing.
    std::shared_ptr<Models::GetParseSettingsResponseBodyDataParserConfig> parserConfig_ = nullptr;
    // The display name of the parsing method.
    std::shared_ptr<string> parserDisplayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
