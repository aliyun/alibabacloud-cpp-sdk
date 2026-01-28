// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUZZYMATCHDOMAINSENSITIVEWORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FUZZYMATCHDOMAINSENSITIVEWORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class FuzzyMatchDomainSensitiveWordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FuzzyMatchDomainSensitiveWordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Exist, exist_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MatchedSentiveWords, matchedSentiveWords_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, FuzzyMatchDomainSensitiveWordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Exist, exist_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MatchedSentiveWords, matchedSentiveWords_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    FuzzyMatchDomainSensitiveWordResponseBody() = default ;
    FuzzyMatchDomainSensitiveWordResponseBody(const FuzzyMatchDomainSensitiveWordResponseBody &) = default ;
    FuzzyMatchDomainSensitiveWordResponseBody(FuzzyMatchDomainSensitiveWordResponseBody &&) = default ;
    FuzzyMatchDomainSensitiveWordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FuzzyMatchDomainSensitiveWordResponseBody() = default ;
    FuzzyMatchDomainSensitiveWordResponseBody& operator=(const FuzzyMatchDomainSensitiveWordResponseBody &) = default ;
    FuzzyMatchDomainSensitiveWordResponseBody& operator=(FuzzyMatchDomainSensitiveWordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MatchedSentiveWords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MatchedSentiveWords& obj) { 
        DARABONBA_PTR_TO_JSON(MatchedSensitiveWord, matchedSensitiveWord_);
      };
      friend void from_json(const Darabonba::Json& j, MatchedSentiveWords& obj) { 
        DARABONBA_PTR_FROM_JSON(MatchedSensitiveWord, matchedSensitiveWord_);
      };
      MatchedSentiveWords() = default ;
      MatchedSentiveWords(const MatchedSentiveWords &) = default ;
      MatchedSentiveWords(MatchedSentiveWords &&) = default ;
      MatchedSentiveWords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MatchedSentiveWords() = default ;
      MatchedSentiveWords& operator=(const MatchedSentiveWords &) = default ;
      MatchedSentiveWords& operator=(MatchedSentiveWords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MatchedSensitiveWord : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MatchedSensitiveWord& obj) { 
          DARABONBA_PTR_TO_JSON(Word, word_);
        };
        friend void from_json(const Darabonba::Json& j, MatchedSensitiveWord& obj) { 
          DARABONBA_PTR_FROM_JSON(Word, word_);
        };
        MatchedSensitiveWord() = default ;
        MatchedSensitiveWord(const MatchedSensitiveWord &) = default ;
        MatchedSensitiveWord(MatchedSensitiveWord &&) = default ;
        MatchedSensitiveWord(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MatchedSensitiveWord() = default ;
        MatchedSensitiveWord& operator=(const MatchedSensitiveWord &) = default ;
        MatchedSensitiveWord& operator=(MatchedSensitiveWord &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->word_ == nullptr; };
        // word Field Functions 
        bool hasWord() const { return this->word_ != nullptr;};
        void deleteWord() { this->word_ = nullptr;};
        inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
        inline MatchedSensitiveWord& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


      protected:
        shared_ptr<string> word_ {};
      };

      virtual bool empty() const override { return this->matchedSensitiveWord_ == nullptr; };
      // matchedSensitiveWord Field Functions 
      bool hasMatchedSensitiveWord() const { return this->matchedSensitiveWord_ != nullptr;};
      void deleteMatchedSensitiveWord() { this->matchedSensitiveWord_ = nullptr;};
      inline const vector<MatchedSentiveWords::MatchedSensitiveWord> & getMatchedSensitiveWord() const { DARABONBA_PTR_GET_CONST(matchedSensitiveWord_, vector<MatchedSentiveWords::MatchedSensitiveWord>) };
      inline vector<MatchedSentiveWords::MatchedSensitiveWord> getMatchedSensitiveWord() { DARABONBA_PTR_GET(matchedSensitiveWord_, vector<MatchedSentiveWords::MatchedSensitiveWord>) };
      inline MatchedSentiveWords& setMatchedSensitiveWord(const vector<MatchedSentiveWords::MatchedSensitiveWord> & matchedSensitiveWord) { DARABONBA_PTR_SET_VALUE(matchedSensitiveWord_, matchedSensitiveWord) };
      inline MatchedSentiveWords& setMatchedSensitiveWord(vector<MatchedSentiveWords::MatchedSensitiveWord> && matchedSensitiveWord) { DARABONBA_PTR_SET_RVALUE(matchedSensitiveWord_, matchedSensitiveWord) };


    protected:
      shared_ptr<vector<MatchedSentiveWords::MatchedSensitiveWord>> matchedSensitiveWord_ {};
    };

    virtual bool empty() const override { return this->exist_ == nullptr
        && this->keyword_ == nullptr && this->matchedSentiveWords_ == nullptr && this->requestId_ == nullptr; };
    // exist Field Functions 
    bool hasExist() const { return this->exist_ != nullptr;};
    void deleteExist() { this->exist_ = nullptr;};
    inline bool getExist() const { DARABONBA_PTR_GET_DEFAULT(exist_, false) };
    inline FuzzyMatchDomainSensitiveWordResponseBody& setExist(bool exist) { DARABONBA_PTR_SET_VALUE(exist_, exist) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline FuzzyMatchDomainSensitiveWordResponseBody& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // matchedSentiveWords Field Functions 
    bool hasMatchedSentiveWords() const { return this->matchedSentiveWords_ != nullptr;};
    void deleteMatchedSentiveWords() { this->matchedSentiveWords_ = nullptr;};
    inline const FuzzyMatchDomainSensitiveWordResponseBody::MatchedSentiveWords & getMatchedSentiveWords() const { DARABONBA_PTR_GET_CONST(matchedSentiveWords_, FuzzyMatchDomainSensitiveWordResponseBody::MatchedSentiveWords) };
    inline FuzzyMatchDomainSensitiveWordResponseBody::MatchedSentiveWords getMatchedSentiveWords() { DARABONBA_PTR_GET(matchedSentiveWords_, FuzzyMatchDomainSensitiveWordResponseBody::MatchedSentiveWords) };
    inline FuzzyMatchDomainSensitiveWordResponseBody& setMatchedSentiveWords(const FuzzyMatchDomainSensitiveWordResponseBody::MatchedSentiveWords & matchedSentiveWords) { DARABONBA_PTR_SET_VALUE(matchedSentiveWords_, matchedSentiveWords) };
    inline FuzzyMatchDomainSensitiveWordResponseBody& setMatchedSentiveWords(FuzzyMatchDomainSensitiveWordResponseBody::MatchedSentiveWords && matchedSentiveWords) { DARABONBA_PTR_SET_RVALUE(matchedSentiveWords_, matchedSentiveWords) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FuzzyMatchDomainSensitiveWordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<bool> exist_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<FuzzyMatchDomainSensitiveWordResponseBody::MatchedSentiveWords> matchedSentiveWords_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
