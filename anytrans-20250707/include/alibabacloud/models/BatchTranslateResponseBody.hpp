// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHTRANSLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHTRANSLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class BatchTranslateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchTranslateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchTranslateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    BatchTranslateResponseBody() = default ;
    BatchTranslateResponseBody(const BatchTranslateResponseBody &) = default ;
    BatchTranslateResponseBody(BatchTranslateResponseBody &&) = default ;
    BatchTranslateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchTranslateResponseBody() = default ;
    BatchTranslateResponseBody& operator=(const BatchTranslateResponseBody &) = default ;
    BatchTranslateResponseBody& operator=(BatchTranslateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(translationList, translationList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(translationList, translationList_);
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
      class TranslationList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TranslationList& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(detectedLang, detectedLang_);
          DARABONBA_PTR_TO_JSON(index, index_);
          DARABONBA_PTR_TO_JSON(message, message_);
          DARABONBA_PTR_TO_JSON(translation, translation_);
          DARABONBA_PTR_TO_JSON(usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, TranslationList& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(detectedLang, detectedLang_);
          DARABONBA_PTR_FROM_JSON(index, index_);
          DARABONBA_PTR_FROM_JSON(message, message_);
          DARABONBA_PTR_FROM_JSON(translation, translation_);
          DARABONBA_PTR_FROM_JSON(usage, usage_);
        };
        TranslationList() = default ;
        TranslationList(const TranslationList &) = default ;
        TranslationList(TranslationList &&) = default ;
        TranslationList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TranslationList() = default ;
        TranslationList& operator=(const TranslationList &) = default ;
        TranslationList& operator=(TranslationList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Usage : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Usage& obj) { 
            DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
            DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
            DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
          };
          friend void from_json(const Darabonba::Json& j, Usage& obj) { 
            DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
            DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
            DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
          };
          Usage() = default ;
          Usage(const Usage &) = default ;
          Usage(Usage &&) = default ;
          Usage(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Usage() = default ;
          Usage& operator=(const Usage &) = default ;
          Usage& operator=(Usage &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->inputTokens_ == nullptr
        && this->outputTokens_ == nullptr && this->totalTokens_ == nullptr; };
          // inputTokens Field Functions 
          bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
          void deleteInputTokens() { this->inputTokens_ = nullptr;};
          inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
          inline Usage& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


          // outputTokens Field Functions 
          bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
          void deleteOutputTokens() { this->outputTokens_ = nullptr;};
          inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
          inline Usage& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


          // totalTokens Field Functions 
          bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
          void deleteTotalTokens() { this->totalTokens_ = nullptr;};
          inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
          inline Usage& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


        protected:
          shared_ptr<int64_t> inputTokens_ {};
          shared_ptr<int64_t> outputTokens_ {};
          shared_ptr<int64_t> totalTokens_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->detectedLang_ == nullptr && this->index_ == nullptr && this->message_ == nullptr && this->translation_ == nullptr && this->usage_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
        inline TranslationList& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // detectedLang Field Functions 
        bool hasDetectedLang() const { return this->detectedLang_ != nullptr;};
        void deleteDetectedLang() { this->detectedLang_ = nullptr;};
        inline string getDetectedLang() const { DARABONBA_PTR_GET_DEFAULT(detectedLang_, "") };
        inline TranslationList& setDetectedLang(string detectedLang) { DARABONBA_PTR_SET_VALUE(detectedLang_, detectedLang) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
        inline TranslationList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline TranslationList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // translation Field Functions 
        bool hasTranslation() const { return this->translation_ != nullptr;};
        void deleteTranslation() { this->translation_ = nullptr;};
        inline string getTranslation() const { DARABONBA_PTR_GET_DEFAULT(translation_, "") };
        inline TranslationList& setTranslation(string translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline const TranslationList::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, TranslationList::Usage) };
        inline TranslationList::Usage getUsage() { DARABONBA_PTR_GET(usage_, TranslationList::Usage) };
        inline TranslationList& setUsage(const TranslationList::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
        inline TranslationList& setUsage(TranslationList::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


      protected:
        shared_ptr<int64_t> code_ {};
        shared_ptr<string> detectedLang_ {};
        shared_ptr<string> index_ {};
        shared_ptr<string> message_ {};
        shared_ptr<string> translation_ {};
        shared_ptr<TranslationList::Usage> usage_ {};
      };

      virtual bool empty() const override { return this->translationList_ == nullptr; };
      // translationList Field Functions 
      bool hasTranslationList() const { return this->translationList_ != nullptr;};
      void deleteTranslationList() { this->translationList_ = nullptr;};
      inline const vector<Data::TranslationList> & getTranslationList() const { DARABONBA_PTR_GET_CONST(translationList_, vector<Data::TranslationList>) };
      inline vector<Data::TranslationList> getTranslationList() { DARABONBA_PTR_GET(translationList_, vector<Data::TranslationList>) };
      inline Data& setTranslationList(const vector<Data::TranslationList> & translationList) { DARABONBA_PTR_SET_VALUE(translationList_, translationList) };
      inline Data& setTranslationList(vector<Data::TranslationList> && translationList) { DARABONBA_PTR_SET_RVALUE(translationList_, translationList) };


    protected:
      shared_ptr<vector<Data::TranslationList>> translationList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchTranslateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BatchTranslateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BatchTranslateResponseBody::Data) };
    inline BatchTranslateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BatchTranslateResponseBody::Data) };
    inline BatchTranslateResponseBody& setData(const BatchTranslateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchTranslateResponseBody& setData(BatchTranslateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline BatchTranslateResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchTranslateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchTranslateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchTranslateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<BatchTranslateResponseBody::Data> data_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
