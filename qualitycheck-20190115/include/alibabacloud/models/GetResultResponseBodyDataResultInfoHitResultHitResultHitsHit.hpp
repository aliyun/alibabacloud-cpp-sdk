// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTHITSHIT_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTHITSHIT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit& obj) { 
      DARABONBA_PTR_TO_JSON(Cid, cid_);
      DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_TO_JSON(Phrase, phrase_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit& obj) { 
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
      DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
    };
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit(const GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit(GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit &&) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit& operator=(const GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit& operator=(GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cid_ != nullptr
        && this->keyWords_ != nullptr && this->phrase_ != nullptr; };
    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid & cid() const { DARABONBA_PTR_GET_CONST(cid_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid cid() { DARABONBA_PTR_GET(cid_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit& setCid(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid & cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit& setCid(Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid && cid) { DARABONBA_PTR_SET_RVALUE(cid_, cid) };


    // keyWords Field Functions 
    bool hasKeyWords() const { return this->keyWords_ != nullptr;};
    void deleteKeyWords() { this->keyWords_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords & keyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords keyWords() { DARABONBA_PTR_GET(keyWords_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit& setKeyWords(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit& setKeyWords(Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


    // phrase Field Functions 
    bool hasPhrase() const { return this->phrase_ != nullptr;};
    void deletePhrase() { this->phrase_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase & phrase() const { DARABONBA_PTR_GET_CONST(phrase_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase phrase() { DARABONBA_PTR_GET(phrase_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit& setPhrase(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHitsHit& setPhrase(Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


  protected:
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitCid> cid_ = nullptr;
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWords> keyWords_ = nullptr;
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitPhrase> phrase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
