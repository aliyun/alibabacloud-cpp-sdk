// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTHITSHITKEYWORDS_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTHITSHITKEYWORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords& obj) { 
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
    };
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords(const GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords(GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords &&) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords& operator=(const GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords& operator=(GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyWord_ == nullptr; };
    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline const vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord> & keyWord() const { DARABONBA_PTR_GET_CONST(keyWord_, vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord>) };
    inline vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord> keyWord() { DARABONBA_PTR_GET(keyWord_, vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord>) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords& setKeyWord(const vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord> & keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords& setKeyWord(vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord> && keyWord) { DARABONBA_PTR_SET_RVALUE(keyWord_, keyWord) };


  protected:
    std::shared_ptr<vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord>> keyWord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
