// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVAILABLEPARSERTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAVAILABLEPARSERTYPESRESPONSEBODY_HPP_
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
  class GetAvailableParserTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvailableParserTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvailableParserTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAvailableParserTypesResponseBody() = default ;
    GetAvailableParserTypesResponseBody(const GetAvailableParserTypesResponseBody &) = default ;
    GetAvailableParserTypesResponseBody(GetAvailableParserTypesResponseBody &&) = default ;
    GetAvailableParserTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvailableParserTypesResponseBody() = default ;
    GetAvailableParserTypesResponseBody& operator=(const GetAvailableParserTypesResponseBody &) = default ;
    GetAvailableParserTypesResponseBody& operator=(GetAvailableParserTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileType, fileType_);
        DARABONBA_PTR_TO_JSON(ParserList, parserList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileType, fileType_);
        DARABONBA_PTR_FROM_JSON(ParserList, parserList_);
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
      class ParserList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParserList& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Parser, parser_);
        };
        friend void from_json(const Darabonba::Json& j, ParserList& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Parser, parser_);
        };
        ParserList() = default ;
        ParserList(const ParserList &) = default ;
        ParserList(ParserList &&) = default ;
        ParserList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParserList() = default ;
        ParserList& operator=(const ParserList &) = default ;
        ParserList& operator=(ParserList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->parser_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline ParserList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // parser Field Functions 
        bool hasParser() const { return this->parser_ != nullptr;};
        void deleteParser() { this->parser_ = nullptr;};
        inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
        inline ParserList& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


      protected:
        // The display name of the parsing method.
        shared_ptr<string> displayName_ {};
        // The parser code. Valid values:
        // 
        // *   DOCMIND (Intelligent parsing)
        // *   DOCMIND_DIGITAL (Digital parsing)
        // *   DOCMIND_LLM_VERSION (LLM parsing)
        // *   DASH_QWEN_VL_PARSER (Qwen VL parsing)
        shared_ptr<string> parser_ {};
      };

      virtual bool empty() const override { return this->fileType_ == nullptr
        && this->parserList_ == nullptr; };
      // fileType Field Functions 
      bool hasFileType() const { return this->fileType_ != nullptr;};
      void deleteFileType() { this->fileType_ = nullptr;};
      inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
      inline Data& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      // parserList Field Functions 
      bool hasParserList() const { return this->parserList_ != nullptr;};
      void deleteParserList() { this->parserList_ = nullptr;};
      inline const vector<Data::ParserList> & getParserList() const { DARABONBA_PTR_GET_CONST(parserList_, vector<Data::ParserList>) };
      inline vector<Data::ParserList> getParserList() { DARABONBA_PTR_GET(parserList_, vector<Data::ParserList>) };
      inline Data& setParserList(const vector<Data::ParserList> & parserList) { DARABONBA_PTR_SET_VALUE(parserList_, parserList) };
      inline Data& setParserList(vector<Data::ParserList> && parserList) { DARABONBA_PTR_SET_RVALUE(parserList_, parserList) };


    protected:
      // The file type, which is the same as the FileType in the input parameter.
      shared_ptr<string> fileType_ {};
      // The list of supported parsers
      shared_ptr<vector<Data::ParserList>> parserList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAvailableParserTypesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAvailableParserTypesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAvailableParserTypesResponseBody::Data) };
    inline GetAvailableParserTypesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAvailableParserTypesResponseBody::Data) };
    inline GetAvailableParserTypesResponseBody& setData(const GetAvailableParserTypesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAvailableParserTypesResponseBody& setData(GetAvailableParserTypesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAvailableParserTypesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAvailableParserTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAvailableParserTypesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAvailableParserTypesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<GetAvailableParserTypesResponseBody::Data> data_ {};
    // The error message that is returned if the request failed.
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
