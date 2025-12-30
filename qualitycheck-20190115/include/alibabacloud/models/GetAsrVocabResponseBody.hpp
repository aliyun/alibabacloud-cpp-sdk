// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASRVOCABRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASRVOCABRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetAsrVocabResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsrVocabResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsrVocabResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAsrVocabResponseBody() = default ;
    GetAsrVocabResponseBody(const GetAsrVocabResponseBody &) = default ;
    GetAsrVocabResponseBody(GetAsrVocabResponseBody &&) = default ;
    GetAsrVocabResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsrVocabResponseBody() = default ;
    GetAsrVocabResponseBody& operator=(const GetAsrVocabResponseBody &) = default ;
    GetAsrVocabResponseBody& operator=(GetAsrVocabResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AsrVersion, asrVersion_);
        DARABONBA_PTR_TO_JSON(ModelCustomizationId, modelCustomizationId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Words, words_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AsrVersion, asrVersion_);
        DARABONBA_PTR_FROM_JSON(ModelCustomizationId, modelCustomizationId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Words, words_);
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
      class Words : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Words& obj) { 
          DARABONBA_PTR_TO_JSON(Word, word_);
        };
        friend void from_json(const Darabonba::Json& j, Words& obj) { 
          DARABONBA_PTR_FROM_JSON(Word, word_);
        };
        Words() = default ;
        Words(const Words &) = default ;
        Words(Words &&) = default ;
        Words(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Words() = default ;
        Words& operator=(const Words &) = default ;
        Words& operator=(Words &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Word : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Word& obj) { 
            DARABONBA_PTR_TO_JSON(Weight, weight_);
            DARABONBA_PTR_TO_JSON(Word, word_);
          };
          friend void from_json(const Darabonba::Json& j, Word& obj) { 
            DARABONBA_PTR_FROM_JSON(Weight, weight_);
            DARABONBA_PTR_FROM_JSON(Word, word_);
          };
          Word() = default ;
          Word(const Word &) = default ;
          Word(Word &&) = default ;
          Word(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Word() = default ;
          Word& operator=(const Word &) = default ;
          Word& operator=(Word &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->weight_ == nullptr
        && this->word_ == nullptr; };
          // weight Field Functions 
          bool hasWeight() const { return this->weight_ != nullptr;};
          void deleteWeight() { this->weight_ = nullptr;};
          inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
          inline Word& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


          // word Field Functions 
          bool hasWord() const { return this->word_ != nullptr;};
          void deleteWord() { this->word_ = nullptr;};
          inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
          inline Word& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


        protected:
          shared_ptr<int32_t> weight_ {};
          shared_ptr<string> word_ {};
        };

        virtual bool empty() const override { return this->word_ == nullptr; };
        // word Field Functions 
        bool hasWord() const { return this->word_ != nullptr;};
        void deleteWord() { this->word_ = nullptr;};
        inline const vector<Words::Word> & getWord() const { DARABONBA_PTR_GET_CONST(word_, vector<Words::Word>) };
        inline vector<Words::Word> getWord() { DARABONBA_PTR_GET(word_, vector<Words::Word>) };
        inline Words& setWord(const vector<Words::Word> & word) { DARABONBA_PTR_SET_VALUE(word_, word) };
        inline Words& setWord(vector<Words::Word> && word) { DARABONBA_PTR_SET_RVALUE(word_, word) };


      protected:
        shared_ptr<vector<Words::Word>> word_ {};
      };

      virtual bool empty() const override { return this->asrVersion_ == nullptr
        && this->modelCustomizationId_ == nullptr && this->name_ == nullptr && this->words_ == nullptr; };
      // asrVersion Field Functions 
      bool hasAsrVersion() const { return this->asrVersion_ != nullptr;};
      void deleteAsrVersion() { this->asrVersion_ = nullptr;};
      inline int32_t getAsrVersion() const { DARABONBA_PTR_GET_DEFAULT(asrVersion_, 0) };
      inline Data& setAsrVersion(int32_t asrVersion) { DARABONBA_PTR_SET_VALUE(asrVersion_, asrVersion) };


      // modelCustomizationId Field Functions 
      bool hasModelCustomizationId() const { return this->modelCustomizationId_ != nullptr;};
      void deleteModelCustomizationId() { this->modelCustomizationId_ = nullptr;};
      inline string getModelCustomizationId() const { DARABONBA_PTR_GET_DEFAULT(modelCustomizationId_, "") };
      inline Data& setModelCustomizationId(string modelCustomizationId) { DARABONBA_PTR_SET_VALUE(modelCustomizationId_, modelCustomizationId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // words Field Functions 
      bool hasWords() const { return this->words_ != nullptr;};
      void deleteWords() { this->words_ = nullptr;};
      inline const Data::Words & getWords() const { DARABONBA_PTR_GET_CONST(words_, Data::Words) };
      inline Data::Words getWords() { DARABONBA_PTR_GET(words_, Data::Words) };
      inline Data& setWords(const Data::Words & words) { DARABONBA_PTR_SET_VALUE(words_, words) };
      inline Data& setWords(Data::Words && words) { DARABONBA_PTR_SET_RVALUE(words_, words) };


    protected:
      shared_ptr<int32_t> asrVersion_ {};
      shared_ptr<string> modelCustomizationId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<Data::Words> words_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAsrVocabResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAsrVocabResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAsrVocabResponseBody::Data) };
    inline GetAsrVocabResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAsrVocabResponseBody::Data) };
    inline GetAsrVocabResponseBody& setData(const GetAsrVocabResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAsrVocabResponseBody& setData(GetAsrVocabResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAsrVocabResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAsrVocabResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAsrVocabResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAsrVocabResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
