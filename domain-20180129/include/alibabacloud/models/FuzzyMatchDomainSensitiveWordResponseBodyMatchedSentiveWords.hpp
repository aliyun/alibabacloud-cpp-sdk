// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUZZYMATCHDOMAINSENSITIVEWORDRESPONSEBODYMATCHEDSENTIVEWORDS_HPP_
#define ALIBABACLOUD_MODELS_FUZZYMATCHDOMAINSENSITIVEWORDRESPONSEBODYMATCHEDSENTIVEWORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords& obj) { 
      DARABONBA_PTR_TO_JSON(MatchedSensitiveWord, matchedSensitiveWord_);
    };
    friend void from_json(const Darabonba::Json& j, FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchedSensitiveWord, matchedSensitiveWord_);
    };
    FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords() = default ;
    FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords(const FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords &) = default ;
    FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords(FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords &&) = default ;
    FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords() = default ;
    FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords& operator=(const FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords &) = default ;
    FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords& operator=(FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchedSensitiveWord_ == nullptr; };
    // matchedSensitiveWord Field Functions 
    bool hasMatchedSensitiveWord() const { return this->matchedSensitiveWord_ != nullptr;};
    void deleteMatchedSensitiveWord() { this->matchedSensitiveWord_ = nullptr;};
    inline const vector<Models::FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord> & matchedSensitiveWord() const { DARABONBA_PTR_GET_CONST(matchedSensitiveWord_, vector<Models::FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord>) };
    inline vector<Models::FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord> matchedSensitiveWord() { DARABONBA_PTR_GET(matchedSensitiveWord_, vector<Models::FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord>) };
    inline FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords& setMatchedSensitiveWord(const vector<Models::FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord> & matchedSensitiveWord) { DARABONBA_PTR_SET_VALUE(matchedSensitiveWord_, matchedSensitiveWord) };
    inline FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords& setMatchedSensitiveWord(vector<Models::FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord> && matchedSensitiveWord) { DARABONBA_PTR_SET_RVALUE(matchedSensitiveWord_, matchedSensitiveWord) };


  protected:
    std::shared_ptr<vector<Models::FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord>> matchedSensitiveWord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
