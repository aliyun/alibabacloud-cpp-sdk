// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASRVOCABRESPONSEBODYDATAWORDSWORD_HPP_
#define ALIBABACLOUD_MODELS_GETASRVOCABRESPONSEBODYDATAWORDSWORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetAsrVocabResponseBodyDataWordsWord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsrVocabResponseBodyDataWordsWord& obj) { 
      DARABONBA_PTR_TO_JSON(Weight, weight_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsrVocabResponseBodyDataWordsWord& obj) { 
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    GetAsrVocabResponseBodyDataWordsWord() = default ;
    GetAsrVocabResponseBodyDataWordsWord(const GetAsrVocabResponseBodyDataWordsWord &) = default ;
    GetAsrVocabResponseBodyDataWordsWord(GetAsrVocabResponseBodyDataWordsWord &&) = default ;
    GetAsrVocabResponseBodyDataWordsWord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsrVocabResponseBodyDataWordsWord() = default ;
    GetAsrVocabResponseBodyDataWordsWord& operator=(const GetAsrVocabResponseBodyDataWordsWord &) = default ;
    GetAsrVocabResponseBodyDataWordsWord& operator=(GetAsrVocabResponseBodyDataWordsWord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->weight_ == nullptr
        && return this->word_ == nullptr; };
    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline GetAsrVocabResponseBodyDataWordsWord& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline GetAsrVocabResponseBodyDataWordsWord& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    std::shared_ptr<int32_t> weight_ = nullptr;
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
