// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASRVOCABRESPONSEBODYDATAWORDS_HPP_
#define ALIBABACLOUD_MODELS_GETASRVOCABRESPONSEBODYDATAWORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAsrVocabResponseBodyDataWordsWord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetAsrVocabResponseBodyDataWords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsrVocabResponseBodyDataWords& obj) { 
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsrVocabResponseBodyDataWords& obj) { 
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    GetAsrVocabResponseBodyDataWords() = default ;
    GetAsrVocabResponseBodyDataWords(const GetAsrVocabResponseBodyDataWords &) = default ;
    GetAsrVocabResponseBodyDataWords(GetAsrVocabResponseBodyDataWords &&) = default ;
    GetAsrVocabResponseBodyDataWords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsrVocabResponseBodyDataWords() = default ;
    GetAsrVocabResponseBodyDataWords& operator=(const GetAsrVocabResponseBodyDataWords &) = default ;
    GetAsrVocabResponseBodyDataWords& operator=(GetAsrVocabResponseBodyDataWords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->word_ == nullptr; };
    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline const vector<Models::GetAsrVocabResponseBodyDataWordsWord> & word() const { DARABONBA_PTR_GET_CONST(word_, vector<Models::GetAsrVocabResponseBodyDataWordsWord>) };
    inline vector<Models::GetAsrVocabResponseBodyDataWordsWord> word() { DARABONBA_PTR_GET(word_, vector<Models::GetAsrVocabResponseBodyDataWordsWord>) };
    inline GetAsrVocabResponseBodyDataWords& setWord(const vector<Models::GetAsrVocabResponseBodyDataWordsWord> & word) { DARABONBA_PTR_SET_VALUE(word_, word) };
    inline GetAsrVocabResponseBodyDataWords& setWord(vector<Models::GetAsrVocabResponseBodyDataWordsWord> && word) { DARABONBA_PTR_SET_RVALUE(word_, word) };


  protected:
    std::shared_ptr<vector<Models::GetAsrVocabResponseBodyDataWordsWord>> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
