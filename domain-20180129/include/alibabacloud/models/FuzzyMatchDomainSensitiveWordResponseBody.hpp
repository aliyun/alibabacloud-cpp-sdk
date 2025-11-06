// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUZZYMATCHDOMAINSENSITIVEWORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FUZZYMATCHDOMAINSENSITIVEWORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords.hpp>
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
    virtual bool empty() const override { return this->exist_ == nullptr
        && return this->keyword_ == nullptr && return this->matchedSentiveWords_ == nullptr && return this->requestId_ == nullptr; };
    // exist Field Functions 
    bool hasExist() const { return this->exist_ != nullptr;};
    void deleteExist() { this->exist_ = nullptr;};
    inline bool exist() const { DARABONBA_PTR_GET_DEFAULT(exist_, false) };
    inline FuzzyMatchDomainSensitiveWordResponseBody& setExist(bool exist) { DARABONBA_PTR_SET_VALUE(exist_, exist) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline FuzzyMatchDomainSensitiveWordResponseBody& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // matchedSentiveWords Field Functions 
    bool hasMatchedSentiveWords() const { return this->matchedSentiveWords_ != nullptr;};
    void deleteMatchedSentiveWords() { this->matchedSentiveWords_ = nullptr;};
    inline const FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords & matchedSentiveWords() const { DARABONBA_PTR_GET_CONST(matchedSentiveWords_, FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords) };
    inline FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords matchedSentiveWords() { DARABONBA_PTR_GET(matchedSentiveWords_, FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords) };
    inline FuzzyMatchDomainSensitiveWordResponseBody& setMatchedSentiveWords(const FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords & matchedSentiveWords) { DARABONBA_PTR_SET_VALUE(matchedSentiveWords_, matchedSentiveWords) };
    inline FuzzyMatchDomainSensitiveWordResponseBody& setMatchedSentiveWords(FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords && matchedSentiveWords) { DARABONBA_PTR_SET_RVALUE(matchedSentiveWords_, matchedSentiveWords) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FuzzyMatchDomainSensitiveWordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> exist_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords> matchedSentiveWords_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
