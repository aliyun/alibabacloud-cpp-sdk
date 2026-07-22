// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTTRANSLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TEXTTRANSLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class TextTranslateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextTranslateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TextTranslateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TextTranslateResponseBody() = default ;
    TextTranslateResponseBody(const TextTranslateResponseBody &) = default ;
    TextTranslateResponseBody(TextTranslateResponseBody &&) = default ;
    TextTranslateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextTranslateResponseBody() = default ;
    TextTranslateResponseBody& operator=(const TextTranslateResponseBody &) = default ;
    TextTranslateResponseBody& operator=(TextTranslateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Translations, translations_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Translations, translations_);
        DARABONBA_PTR_FROM_JSON(UsageMap, usageMap_);
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
      class Translations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Translations& obj) { 
          DARABONBA_PTR_TO_JSON(Characters, characters_);
          DARABONBA_PTR_TO_JSON(DetectedLanguage, detectedLanguage_);
          DARABONBA_PTR_TO_JSON(TranslatedText, translatedText_);
        };
        friend void from_json(const Darabonba::Json& j, Translations& obj) { 
          DARABONBA_PTR_FROM_JSON(Characters, characters_);
          DARABONBA_PTR_FROM_JSON(DetectedLanguage, detectedLanguage_);
          DARABONBA_PTR_FROM_JSON(TranslatedText, translatedText_);
        };
        Translations() = default ;
        Translations(const Translations &) = default ;
        Translations(Translations &&) = default ;
        Translations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Translations() = default ;
        Translations& operator=(const Translations &) = default ;
        Translations& operator=(Translations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->characters_ == nullptr
        && this->detectedLanguage_ == nullptr && this->translatedText_ == nullptr; };
        // characters Field Functions 
        bool hasCharacters() const { return this->characters_ != nullptr;};
        void deleteCharacters() { this->characters_ = nullptr;};
        inline int64_t getCharacters() const { DARABONBA_PTR_GET_DEFAULT(characters_, 0L) };
        inline Translations& setCharacters(int64_t characters) { DARABONBA_PTR_SET_VALUE(characters_, characters) };


        // detectedLanguage Field Functions 
        bool hasDetectedLanguage() const { return this->detectedLanguage_ != nullptr;};
        void deleteDetectedLanguage() { this->detectedLanguage_ = nullptr;};
        inline string getDetectedLanguage() const { DARABONBA_PTR_GET_DEFAULT(detectedLanguage_, "") };
        inline Translations& setDetectedLanguage(string detectedLanguage) { DARABONBA_PTR_SET_VALUE(detectedLanguage_, detectedLanguage) };


        // translatedText Field Functions 
        bool hasTranslatedText() const { return this->translatedText_ != nullptr;};
        void deleteTranslatedText() { this->translatedText_ = nullptr;};
        inline string getTranslatedText() const { DARABONBA_PTR_GET_DEFAULT(translatedText_, "") };
        inline Translations& setTranslatedText(string translatedText) { DARABONBA_PTR_SET_VALUE(translatedText_, translatedText) };


      protected:
        // The source text character count.
        shared_ptr<int64_t> characters_ {};
        // The automatically detected source language code.
        shared_ptr<string> detectedLanguage_ {};
        // The translated text.
        shared_ptr<string> translatedText_ {};
      };

      virtual bool empty() const override { return this->translations_ == nullptr
        && this->usageMap_ == nullptr; };
      // translations Field Functions 
      bool hasTranslations() const { return this->translations_ != nullptr;};
      void deleteTranslations() { this->translations_ = nullptr;};
      inline const vector<Data::Translations> & getTranslations() const { DARABONBA_PTR_GET_CONST(translations_, vector<Data::Translations>) };
      inline vector<Data::Translations> getTranslations() { DARABONBA_PTR_GET(translations_, vector<Data::Translations>) };
      inline Data& setTranslations(const vector<Data::Translations> & translations) { DARABONBA_PTR_SET_VALUE(translations_, translations) };
      inline Data& setTranslations(vector<Data::Translations> && translations) { DARABONBA_PTR_SET_RVALUE(translations_, translations) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const map<string, int64_t> & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, map<string, int64_t>) };
      inline map<string, int64_t> getUsageMap() { DARABONBA_PTR_GET(usageMap_, map<string, int64_t>) };
      inline Data& setUsageMap(const map<string, int64_t> & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(map<string, int64_t> && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The translation result list. Each element corresponds to a translation result for an entry in the input text list.
      shared_ptr<vector<Data::Translations>> translations_ {};
      // The usage information, including the input character count.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TextTranslateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TextTranslateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TextTranslateResponseBody::Data) };
    inline TextTranslateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TextTranslateResponseBody::Data) };
    inline TextTranslateResponseBody& setData(const TextTranslateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TextTranslateResponseBody& setData(TextTranslateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TextTranslateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TextTranslateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TextTranslateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Returns "success" for normal calls.
    shared_ptr<string> code_ {};
    // The translation result data, including the translation list and usage information.
    shared_ptr<TextTranslateResponseBody::Data> data_ {};
    // The error message. Returns "Success" for normal calls. Returns specific error information for exceptions, such as "The parameters contain sensitive information. Try other input."
    shared_ptr<string> message_ {};
    // The request ID, used to identify a unique request call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. true indicates success. false indicates failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
