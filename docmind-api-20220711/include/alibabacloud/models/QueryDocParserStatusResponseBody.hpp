// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOCPARSERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOCPARSERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class QueryDocParserStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDocParserStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDocParserStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDocParserStatusResponseBody() = default ;
    QueryDocParserStatusResponseBody(const QueryDocParserStatusResponseBody &) = default ;
    QueryDocParserStatusResponseBody(QueryDocParserStatusResponseBody &&) = default ;
    QueryDocParserStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDocParserStatusResponseBody() = default ;
    QueryDocParserStatusResponseBody& operator=(const QueryDocParserStatusResponseBody &) = default ;
    QueryDocParserStatusResponseBody& operator=(QueryDocParserStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ImageCount, imageCount_);
        DARABONBA_PTR_TO_JSON(NumberOfSuccessfulParsing, numberOfSuccessfulParsing_);
        DARABONBA_PTR_TO_JSON(OutputFormatResult, outputFormatResult_);
        DARABONBA_PTR_TO_JSON(PageCountEstimate, pageCountEstimate_);
        DARABONBA_PTR_TO_JSON(ParagraphCount, paragraphCount_);
        DARABONBA_PTR_TO_JSON(Processing, processing_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
        DARABONBA_PTR_TO_JSON(Tokens, tokens_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageCount, imageCount_);
        DARABONBA_PTR_FROM_JSON(NumberOfSuccessfulParsing, numberOfSuccessfulParsing_);
        DARABONBA_PTR_FROM_JSON(OutputFormatResult, outputFormatResult_);
        DARABONBA_PTR_FROM_JSON(PageCountEstimate, pageCountEstimate_);
        DARABONBA_PTR_FROM_JSON(ParagraphCount, paragraphCount_);
        DARABONBA_PTR_FROM_JSON(Processing, processing_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
        DARABONBA_PTR_FROM_JSON(Tokens, tokens_);
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
      class OutputFormatResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputFormatResult& obj) { 
          DARABONBA_PTR_TO_JSON(OutputFileUrl, outputFileUrl_);
          DARABONBA_PTR_TO_JSON(OutputType, outputType_);
          DARABONBA_PTR_TO_JSON(Pages, pages_);
        };
        friend void from_json(const Darabonba::Json& j, OutputFormatResult& obj) { 
          DARABONBA_PTR_FROM_JSON(OutputFileUrl, outputFileUrl_);
          DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
          DARABONBA_PTR_FROM_JSON(Pages, pages_);
        };
        OutputFormatResult() = default ;
        OutputFormatResult(const OutputFormatResult &) = default ;
        OutputFormatResult(OutputFormatResult &&) = default ;
        OutputFormatResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputFormatResult() = default ;
        OutputFormatResult& operator=(const OutputFormatResult &) = default ;
        OutputFormatResult& operator=(OutputFormatResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Pages : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Pages& obj) { 
            DARABONBA_PTR_TO_JSON(ImageHeight, imageHeight_);
            DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
            DARABONBA_PTR_TO_JSON(ImageWidth, imageWidth_);
            DARABONBA_PTR_TO_JSON(PageIdAllDocs, pageIdAllDocs_);
            DARABONBA_PTR_TO_JSON(PageIdCurDoc, pageIdCurDoc_);
          };
          friend void from_json(const Darabonba::Json& j, Pages& obj) { 
            DARABONBA_PTR_FROM_JSON(ImageHeight, imageHeight_);
            DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
            DARABONBA_PTR_FROM_JSON(ImageWidth, imageWidth_);
            DARABONBA_PTR_FROM_JSON(PageIdAllDocs, pageIdAllDocs_);
            DARABONBA_PTR_FROM_JSON(PageIdCurDoc, pageIdCurDoc_);
          };
          Pages() = default ;
          Pages(const Pages &) = default ;
          Pages(Pages &&) = default ;
          Pages(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Pages() = default ;
          Pages& operator=(const Pages &) = default ;
          Pages& operator=(Pages &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->imageHeight_ == nullptr
        && this->imageUrl_ == nullptr && this->imageWidth_ == nullptr && this->pageIdAllDocs_ == nullptr && this->pageIdCurDoc_ == nullptr; };
          // imageHeight Field Functions 
          bool hasImageHeight() const { return this->imageHeight_ != nullptr;};
          void deleteImageHeight() { this->imageHeight_ = nullptr;};
          inline int32_t getImageHeight() const { DARABONBA_PTR_GET_DEFAULT(imageHeight_, 0) };
          inline Pages& setImageHeight(int32_t imageHeight) { DARABONBA_PTR_SET_VALUE(imageHeight_, imageHeight) };


          // imageUrl Field Functions 
          bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
          void deleteImageUrl() { this->imageUrl_ = nullptr;};
          inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
          inline Pages& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


          // imageWidth Field Functions 
          bool hasImageWidth() const { return this->imageWidth_ != nullptr;};
          void deleteImageWidth() { this->imageWidth_ = nullptr;};
          inline int32_t getImageWidth() const { DARABONBA_PTR_GET_DEFAULT(imageWidth_, 0) };
          inline Pages& setImageWidth(int32_t imageWidth) { DARABONBA_PTR_SET_VALUE(imageWidth_, imageWidth) };


          // pageIdAllDocs Field Functions 
          bool hasPageIdAllDocs() const { return this->pageIdAllDocs_ != nullptr;};
          void deletePageIdAllDocs() { this->pageIdAllDocs_ = nullptr;};
          inline int32_t getPageIdAllDocs() const { DARABONBA_PTR_GET_DEFAULT(pageIdAllDocs_, 0) };
          inline Pages& setPageIdAllDocs(int32_t pageIdAllDocs) { DARABONBA_PTR_SET_VALUE(pageIdAllDocs_, pageIdAllDocs) };


          // pageIdCurDoc Field Functions 
          bool hasPageIdCurDoc() const { return this->pageIdCurDoc_ != nullptr;};
          void deletePageIdCurDoc() { this->pageIdCurDoc_ = nullptr;};
          inline int32_t getPageIdCurDoc() const { DARABONBA_PTR_GET_DEFAULT(pageIdCurDoc_, 0) };
          inline Pages& setPageIdCurDoc(int32_t pageIdCurDoc) { DARABONBA_PTR_SET_VALUE(pageIdCurDoc_, pageIdCurDoc) };


        protected:
          shared_ptr<int32_t> imageHeight_ {};
          shared_ptr<string> imageUrl_ {};
          shared_ptr<int32_t> imageWidth_ {};
          shared_ptr<int32_t> pageIdAllDocs_ {};
          shared_ptr<int32_t> pageIdCurDoc_ {};
        };

        virtual bool empty() const override { return this->outputFileUrl_ == nullptr
        && this->outputType_ == nullptr && this->pages_ == nullptr; };
        // outputFileUrl Field Functions 
        bool hasOutputFileUrl() const { return this->outputFileUrl_ != nullptr;};
        void deleteOutputFileUrl() { this->outputFileUrl_ = nullptr;};
        inline string getOutputFileUrl() const { DARABONBA_PTR_GET_DEFAULT(outputFileUrl_, "") };
        inline OutputFormatResult& setOutputFileUrl(string outputFileUrl) { DARABONBA_PTR_SET_VALUE(outputFileUrl_, outputFileUrl) };


        // outputType Field Functions 
        bool hasOutputType() const { return this->outputType_ != nullptr;};
        void deleteOutputType() { this->outputType_ = nullptr;};
        inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
        inline OutputFormatResult& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


        // pages Field Functions 
        bool hasPages() const { return this->pages_ != nullptr;};
        void deletePages() { this->pages_ = nullptr;};
        inline const vector<OutputFormatResult::Pages> & getPages() const { DARABONBA_PTR_GET_CONST(pages_, vector<OutputFormatResult::Pages>) };
        inline vector<OutputFormatResult::Pages> getPages() { DARABONBA_PTR_GET(pages_, vector<OutputFormatResult::Pages>) };
        inline OutputFormatResult& setPages(const vector<OutputFormatResult::Pages> & pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };
        inline OutputFormatResult& setPages(vector<OutputFormatResult::Pages> && pages) { DARABONBA_PTR_SET_RVALUE(pages_, pages) };


      protected:
        shared_ptr<string> outputFileUrl_ {};
        shared_ptr<string> outputType_ {};
        shared_ptr<vector<OutputFormatResult::Pages>> pages_ {};
      };

      virtual bool empty() const override { return this->imageCount_ == nullptr
        && this->numberOfSuccessfulParsing_ == nullptr && this->outputFormatResult_ == nullptr && this->pageCountEstimate_ == nullptr && this->paragraphCount_ == nullptr && this->processing_ == nullptr
        && this->status_ == nullptr && this->tableCount_ == nullptr && this->tokens_ == nullptr; };
      // imageCount Field Functions 
      bool hasImageCount() const { return this->imageCount_ != nullptr;};
      void deleteImageCount() { this->imageCount_ = nullptr;};
      inline int32_t getImageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
      inline Data& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


      // numberOfSuccessfulParsing Field Functions 
      bool hasNumberOfSuccessfulParsing() const { return this->numberOfSuccessfulParsing_ != nullptr;};
      void deleteNumberOfSuccessfulParsing() { this->numberOfSuccessfulParsing_ = nullptr;};
      inline int32_t getNumberOfSuccessfulParsing() const { DARABONBA_PTR_GET_DEFAULT(numberOfSuccessfulParsing_, 0) };
      inline Data& setNumberOfSuccessfulParsing(int32_t numberOfSuccessfulParsing) { DARABONBA_PTR_SET_VALUE(numberOfSuccessfulParsing_, numberOfSuccessfulParsing) };


      // outputFormatResult Field Functions 
      bool hasOutputFormatResult() const { return this->outputFormatResult_ != nullptr;};
      void deleteOutputFormatResult() { this->outputFormatResult_ = nullptr;};
      inline const vector<Data::OutputFormatResult> & getOutputFormatResult() const { DARABONBA_PTR_GET_CONST(outputFormatResult_, vector<Data::OutputFormatResult>) };
      inline vector<Data::OutputFormatResult> getOutputFormatResult() { DARABONBA_PTR_GET(outputFormatResult_, vector<Data::OutputFormatResult>) };
      inline Data& setOutputFormatResult(const vector<Data::OutputFormatResult> & outputFormatResult) { DARABONBA_PTR_SET_VALUE(outputFormatResult_, outputFormatResult) };
      inline Data& setOutputFormatResult(vector<Data::OutputFormatResult> && outputFormatResult) { DARABONBA_PTR_SET_RVALUE(outputFormatResult_, outputFormatResult) };


      // pageCountEstimate Field Functions 
      bool hasPageCountEstimate() const { return this->pageCountEstimate_ != nullptr;};
      void deletePageCountEstimate() { this->pageCountEstimate_ = nullptr;};
      inline int32_t getPageCountEstimate() const { DARABONBA_PTR_GET_DEFAULT(pageCountEstimate_, 0) };
      inline Data& setPageCountEstimate(int32_t pageCountEstimate) { DARABONBA_PTR_SET_VALUE(pageCountEstimate_, pageCountEstimate) };


      // paragraphCount Field Functions 
      bool hasParagraphCount() const { return this->paragraphCount_ != nullptr;};
      void deleteParagraphCount() { this->paragraphCount_ = nullptr;};
      inline int32_t getParagraphCount() const { DARABONBA_PTR_GET_DEFAULT(paragraphCount_, 0) };
      inline Data& setParagraphCount(int32_t paragraphCount) { DARABONBA_PTR_SET_VALUE(paragraphCount_, paragraphCount) };


      // processing Field Functions 
      bool hasProcessing() const { return this->processing_ != nullptr;};
      void deleteProcessing() { this->processing_ = nullptr;};
      inline float getProcessing() const { DARABONBA_PTR_GET_DEFAULT(processing_, 0.0) };
      inline Data& setProcessing(float processing) { DARABONBA_PTR_SET_VALUE(processing_, processing) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tableCount Field Functions 
      bool hasTableCount() const { return this->tableCount_ != nullptr;};
      void deleteTableCount() { this->tableCount_ = nullptr;};
      inline int32_t getTableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0) };
      inline Data& setTableCount(int32_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


      // tokens Field Functions 
      bool hasTokens() const { return this->tokens_ != nullptr;};
      void deleteTokens() { this->tokens_ = nullptr;};
      inline int64_t getTokens() const { DARABONBA_PTR_GET_DEFAULT(tokens_, 0L) };
      inline Data& setTokens(int64_t tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };


    protected:
      shared_ptr<int32_t> imageCount_ {};
      shared_ptr<int32_t> numberOfSuccessfulParsing_ {};
      shared_ptr<vector<Data::OutputFormatResult>> outputFormatResult_ {};
      shared_ptr<int32_t> pageCountEstimate_ {};
      shared_ptr<int32_t> paragraphCount_ {};
      shared_ptr<float> processing_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int32_t> tableCount_ {};
      shared_ptr<int64_t> tokens_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryDocParserStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryDocParserStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryDocParserStatusResponseBody::Data) };
    inline QueryDocParserStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryDocParserStatusResponseBody::Data) };
    inline QueryDocParserStatusResponseBody& setData(const QueryDocParserStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryDocParserStatusResponseBody& setData(QueryDocParserStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryDocParserStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDocParserStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryDocParserStatusResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
