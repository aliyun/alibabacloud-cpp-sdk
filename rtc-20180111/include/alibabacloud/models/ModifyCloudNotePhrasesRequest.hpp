// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDNOTEPHRASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDNOTEPHRASESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyCloudNotePhrasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudNotePhrasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Phrase, phrase_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudNotePhrasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
    };
    ModifyCloudNotePhrasesRequest() = default ;
    ModifyCloudNotePhrasesRequest(const ModifyCloudNotePhrasesRequest &) = default ;
    ModifyCloudNotePhrasesRequest(ModifyCloudNotePhrasesRequest &&) = default ;
    ModifyCloudNotePhrasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudNotePhrasesRequest() = default ;
    ModifyCloudNotePhrasesRequest& operator=(const ModifyCloudNotePhrasesRequest &) = default ;
    ModifyCloudNotePhrasesRequest& operator=(ModifyCloudNotePhrasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Phrase : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Phrase& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(WordWeights, wordWeights_);
      };
      friend void from_json(const Darabonba::Json& j, Phrase& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(WordWeights, wordWeights_);
      };
      Phrase() = default ;
      Phrase(const Phrase &) = default ;
      Phrase(Phrase &&) = default ;
      Phrase(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Phrase() = default ;
      Phrase& operator=(const Phrase &) = default ;
      Phrase& operator=(Phrase &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WordWeights : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WordWeights& obj) { 
          DARABONBA_PTR_TO_JSON(Weight, weight_);
          DARABONBA_PTR_TO_JSON(Word, word_);
        };
        friend void from_json(const Darabonba::Json& j, WordWeights& obj) { 
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
          DARABONBA_PTR_FROM_JSON(Word, word_);
        };
        WordWeights() = default ;
        WordWeights(const WordWeights &) = default ;
        WordWeights(WordWeights &&) = default ;
        WordWeights(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WordWeights() = default ;
        WordWeights& operator=(const WordWeights &) = default ;
        WordWeights& operator=(WordWeights &&) = default ;
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
        inline WordWeights& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        // word Field Functions 
        bool hasWord() const { return this->word_ != nullptr;};
        void deleteWord() { this->word_ = nullptr;};
        inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
        inline WordWeights& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


      protected:
        // This parameter is required.
        shared_ptr<int32_t> weight_ {};
        // This parameter is required.
        shared_ptr<string> word_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->wordWeights_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Phrase& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Phrase& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Phrase& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // wordWeights Field Functions 
      bool hasWordWeights() const { return this->wordWeights_ != nullptr;};
      void deleteWordWeights() { this->wordWeights_ = nullptr;};
      inline const vector<Phrase::WordWeights> & getWordWeights() const { DARABONBA_PTR_GET_CONST(wordWeights_, vector<Phrase::WordWeights>) };
      inline vector<Phrase::WordWeights> getWordWeights() { DARABONBA_PTR_GET(wordWeights_, vector<Phrase::WordWeights>) };
      inline Phrase& setWordWeights(const vector<Phrase::WordWeights> & wordWeights) { DARABONBA_PTR_SET_VALUE(wordWeights_, wordWeights) };
      inline Phrase& setWordWeights(vector<Phrase::WordWeights> && wordWeights) { DARABONBA_PTR_SET_RVALUE(wordWeights_, wordWeights) };


    protected:
      shared_ptr<string> description_ {};
      // This parameter is required.
      shared_ptr<string> id_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<vector<Phrase::WordWeights>> wordWeights_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->phrase_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyCloudNotePhrasesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // phrase Field Functions 
    bool hasPhrase() const { return this->phrase_ != nullptr;};
    void deletePhrase() { this->phrase_ = nullptr;};
    inline const ModifyCloudNotePhrasesRequest::Phrase & getPhrase() const { DARABONBA_PTR_GET_CONST(phrase_, ModifyCloudNotePhrasesRequest::Phrase) };
    inline ModifyCloudNotePhrasesRequest::Phrase getPhrase() { DARABONBA_PTR_GET(phrase_, ModifyCloudNotePhrasesRequest::Phrase) };
    inline ModifyCloudNotePhrasesRequest& setPhrase(const ModifyCloudNotePhrasesRequest::Phrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
    inline ModifyCloudNotePhrasesRequest& setPhrase(ModifyCloudNotePhrasesRequest::Phrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<ModifyCloudNotePhrasesRequest::Phrase> phrase_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
