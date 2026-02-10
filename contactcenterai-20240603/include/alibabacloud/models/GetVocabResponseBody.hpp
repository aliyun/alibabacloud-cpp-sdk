// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVOCABRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVOCABRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class GetVocabResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVocabResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetVocabResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetVocabResponseBody() = default ;
    GetVocabResponseBody(const GetVocabResponseBody &) = default ;
    GetVocabResponseBody(GetVocabResponseBody &&) = default ;
    GetVocabResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVocabResponseBody() = default ;
    GetVocabResponseBody& operator=(const GetVocabResponseBody &) = default ;
    GetVocabResponseBody& operator=(GetVocabResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(audioModelCode, audioModelCode_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(vocabularyId, vocabularyId_);
        DARABONBA_PTR_TO_JSON(wordWeightList, wordWeightList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(audioModelCode, audioModelCode_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(vocabularyId, vocabularyId_);
        DARABONBA_PTR_FROM_JSON(wordWeightList, wordWeightList_);
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
      class WordWeightList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WordWeightList& obj) { 
          DARABONBA_PTR_TO_JSON(weight, weight_);
          DARABONBA_PTR_TO_JSON(word, word_);
        };
        friend void from_json(const Darabonba::Json& j, WordWeightList& obj) { 
          DARABONBA_PTR_FROM_JSON(weight, weight_);
          DARABONBA_PTR_FROM_JSON(word, word_);
        };
        WordWeightList() = default ;
        WordWeightList(const WordWeightList &) = default ;
        WordWeightList(WordWeightList &&) = default ;
        WordWeightList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WordWeightList() = default ;
        WordWeightList& operator=(const WordWeightList &) = default ;
        WordWeightList& operator=(WordWeightList &&) = default ;
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
        inline WordWeightList& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        // word Field Functions 
        bool hasWord() const { return this->word_ != nullptr;};
        void deleteWord() { this->word_ = nullptr;};
        inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
        inline WordWeightList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


      protected:
        shared_ptr<int32_t> weight_ {};
        shared_ptr<string> word_ {};
      };

      virtual bool empty() const override { return this->audioModelCode_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->vocabularyId_ == nullptr && this->wordWeightList_ == nullptr; };
      // audioModelCode Field Functions 
      bool hasAudioModelCode() const { return this->audioModelCode_ != nullptr;};
      void deleteAudioModelCode() { this->audioModelCode_ = nullptr;};
      inline string getAudioModelCode() const { DARABONBA_PTR_GET_DEFAULT(audioModelCode_, "") };
      inline Data& setAudioModelCode(string audioModelCode) { DARABONBA_PTR_SET_VALUE(audioModelCode_, audioModelCode) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // vocabularyId Field Functions 
      bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
      void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
      inline string getVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
      inline Data& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


      // wordWeightList Field Functions 
      bool hasWordWeightList() const { return this->wordWeightList_ != nullptr;};
      void deleteWordWeightList() { this->wordWeightList_ = nullptr;};
      inline const vector<Data::WordWeightList> & getWordWeightList() const { DARABONBA_PTR_GET_CONST(wordWeightList_, vector<Data::WordWeightList>) };
      inline vector<Data::WordWeightList> getWordWeightList() { DARABONBA_PTR_GET(wordWeightList_, vector<Data::WordWeightList>) };
      inline Data& setWordWeightList(const vector<Data::WordWeightList> & wordWeightList) { DARABONBA_PTR_SET_VALUE(wordWeightList_, wordWeightList) };
      inline Data& setWordWeightList(vector<Data::WordWeightList> && wordWeightList) { DARABONBA_PTR_SET_RVALUE(wordWeightList_, wordWeightList) };


    protected:
      shared_ptr<string> audioModelCode_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> vocabularyId_ {};
      shared_ptr<vector<Data::WordWeightList>> wordWeightList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetVocabResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetVocabResponseBody::Data) };
    inline GetVocabResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetVocabResponseBody::Data) };
    inline GetVocabResponseBody& setData(const GetVocabResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetVocabResponseBody& setData(GetVocabResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVocabResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetVocabResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetVocabResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
