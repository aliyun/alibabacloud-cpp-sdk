// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARSESETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPARSESETTINGSRESPONSEBODY_HPP_
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
  class GetParseSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParseSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetParseSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetParseSettingsResponseBody() = default ;
    GetParseSettingsResponseBody(const GetParseSettingsResponseBody &) = default ;
    GetParseSettingsResponseBody(GetParseSettingsResponseBody &&) = default ;
    GetParseSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParseSettingsResponseBody() = default ;
    GetParseSettingsResponseBody& operator=(const GetParseSettingsResponseBody &) = default ;
    GetParseSettingsResponseBody& operator=(GetParseSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileType, fileType_);
        DARABONBA_PTR_TO_JSON(Parser, parser_);
        DARABONBA_PTR_TO_JSON(ParserConfig, parserConfig_);
        DARABONBA_PTR_TO_JSON(ParserDisplayName, parserDisplayName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileType, fileType_);
        DARABONBA_PTR_FROM_JSON(Parser, parser_);
        DARABONBA_PTR_FROM_JSON(ParserConfig, parserConfig_);
        DARABONBA_PTR_FROM_JSON(ParserDisplayName, parserDisplayName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
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
        // The prompt used for parsing.
        shared_ptr<string> modelPrompt_ {};
      };

      virtual bool empty() const override { return this->fileType_ == nullptr
        && this->parser_ == nullptr && this->parserConfig_ == nullptr && this->parserDisplayName_ == nullptr; };
      // fileType Field Functions 
      bool hasFileType() const { return this->fileType_ != nullptr;};
      void deleteFileType() { this->fileType_ = nullptr;};
      inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
      inline Data& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      // parser Field Functions 
      bool hasParser() const { return this->parser_ != nullptr;};
      void deleteParser() { this->parser_ = nullptr;};
      inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
      inline Data& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


      // parserConfig Field Functions 
      bool hasParserConfig() const { return this->parserConfig_ != nullptr;};
      void deleteParserConfig() { this->parserConfig_ = nullptr;};
      inline const Data::ParserConfig & getParserConfig() const { DARABONBA_PTR_GET_CONST(parserConfig_, Data::ParserConfig) };
      inline Data::ParserConfig getParserConfig() { DARABONBA_PTR_GET(parserConfig_, Data::ParserConfig) };
      inline Data& setParserConfig(const Data::ParserConfig & parserConfig) { DARABONBA_PTR_SET_VALUE(parserConfig_, parserConfig) };
      inline Data& setParserConfig(Data::ParserConfig && parserConfig) { DARABONBA_PTR_SET_RVALUE(parserConfig_, parserConfig) };


      // parserDisplayName Field Functions 
      bool hasParserDisplayName() const { return this->parserDisplayName_ != nullptr;};
      void deleteParserDisplayName() { this->parserDisplayName_ = nullptr;};
      inline string getParserDisplayName() const { DARABONBA_PTR_GET_DEFAULT(parserDisplayName_, "") };
      inline Data& setParserDisplayName(string parserDisplayName) { DARABONBA_PTR_SET_VALUE(parserDisplayName_, parserDisplayName) };


    protected:
      // The file type. Valid values are: pdf, docx, doc, etc. All supported file types in the category are listed here.
      shared_ptr<string> fileType_ {};
      // The parser used for files of the current type. Valid values:
      // 
      // *   DOCMIND (Intelligent parsing)
      // *   DOCMIND_DIGITAL (Digital parsing)
      // *   DOCMIND_LLM_VERSION (LLM parsing)
      // *   DASH_QWEN_VL_PARSER (Qwen VL parsing)
      shared_ptr<string> parser_ {};
      // The parser configuration. Currently, this is available only for Qwen VL parsing.
      shared_ptr<Data::ParserConfig> parserConfig_ {};
      // The display name of the parsing method.
      shared_ptr<string> parserDisplayName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetParseSettingsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetParseSettingsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetParseSettingsResponseBody::Data>) };
    inline vector<GetParseSettingsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetParseSettingsResponseBody::Data>) };
    inline GetParseSettingsResponseBody& setData(const vector<GetParseSettingsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetParseSettingsResponseBody& setData(vector<GetParseSettingsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetParseSettingsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetParseSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetParseSettingsResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetParseSettingsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data fields.
    shared_ptr<vector<GetParseSettingsResponseBody::Data>> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The HTTP status code returned.
    shared_ptr<string> status_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
