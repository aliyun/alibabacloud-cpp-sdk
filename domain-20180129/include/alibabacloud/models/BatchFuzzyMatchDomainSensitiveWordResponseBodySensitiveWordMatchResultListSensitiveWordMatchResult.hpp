// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHFUZZYMATCHDOMAINSENSITIVEWORDRESPONSEBODYSENSITIVEWORDMATCHRESULTLISTSENSITIVEWORDMATCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_BATCHFUZZYMATCHDOMAINSENSITIVEWORDRESPONSEBODYSENSITIVEWORDMATCHRESULTLISTSENSITIVEWORDMATCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult& obj) { 
      DARABONBA_PTR_TO_JSON(Exist, exist_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MatchedSentiveWords, matchedSentiveWords_);
    };
    friend void from_json(const Darabonba::Json& j, BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Exist, exist_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MatchedSentiveWords, matchedSentiveWords_);
    };
    BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult() = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult(const BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult &) = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult(BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult &&) = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult() = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult& operator=(const BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult &) = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult& operator=(BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exist_ == nullptr
        && return this->keyword_ == nullptr && return this->matchedSentiveWords_ == nullptr; };
    // exist Field Functions 
    bool hasExist() const { return this->exist_ != nullptr;};
    void deleteExist() { this->exist_ = nullptr;};
    inline bool exist() const { DARABONBA_PTR_GET_DEFAULT(exist_, false) };
    inline BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult& setExist(bool exist) { DARABONBA_PTR_SET_VALUE(exist_, exist) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // matchedSentiveWords Field Functions 
    bool hasMatchedSentiveWords() const { return this->matchedSentiveWords_ != nullptr;};
    void deleteMatchedSentiveWords() { this->matchedSentiveWords_ = nullptr;};
    inline const Models::BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords & matchedSentiveWords() const { DARABONBA_PTR_GET_CONST(matchedSentiveWords_, Models::BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords) };
    inline Models::BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords matchedSentiveWords() { DARABONBA_PTR_GET(matchedSentiveWords_, Models::BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords) };
    inline BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult& setMatchedSentiveWords(const Models::BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords & matchedSentiveWords) { DARABONBA_PTR_SET_VALUE(matchedSentiveWords_, matchedSentiveWords) };
    inline BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult& setMatchedSentiveWords(Models::BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords && matchedSentiveWords) { DARABONBA_PTR_SET_RVALUE(matchedSentiveWords_, matchedSentiveWords) };


  protected:
    std::shared_ptr<bool> exist_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<Models::BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords> matchedSentiveWords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
