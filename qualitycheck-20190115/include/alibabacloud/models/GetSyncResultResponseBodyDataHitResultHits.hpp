// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNCRESULTRESPONSEBODYDATAHITRESULTHITS_HPP_
#define ALIBABACLOUD_MODELS_GETSYNCRESULTRESPONSEBODYDATAHITRESULTHITS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSyncResultResponseBodyDataHitResultHitsKeyWords.hpp>
#include <alibabacloud/models/GetSyncResultResponseBodyDataHitResultHitsPhrase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetSyncResultResponseBodyDataHitResultHits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyncResultResponseBodyDataHitResultHits& obj) { 
      DARABONBA_PTR_TO_JSON(Cid, cid_);
      DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_TO_JSON(Phrase, phrase_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyncResultResponseBodyDataHitResultHits& obj) { 
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
      DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
    };
    GetSyncResultResponseBodyDataHitResultHits() = default ;
    GetSyncResultResponseBodyDataHitResultHits(const GetSyncResultResponseBodyDataHitResultHits &) = default ;
    GetSyncResultResponseBodyDataHitResultHits(GetSyncResultResponseBodyDataHitResultHits &&) = default ;
    GetSyncResultResponseBodyDataHitResultHits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyncResultResponseBodyDataHitResultHits() = default ;
    GetSyncResultResponseBodyDataHitResultHits& operator=(const GetSyncResultResponseBodyDataHitResultHits &) = default ;
    GetSyncResultResponseBodyDataHitResultHits& operator=(GetSyncResultResponseBodyDataHitResultHits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cid_ != nullptr
        && this->keyWords_ != nullptr && this->phrase_ != nullptr; };
    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline const vector<string> & cid() const { DARABONBA_PTR_GET_CONST(cid_, vector<string>) };
    inline vector<string> cid() { DARABONBA_PTR_GET(cid_, vector<string>) };
    inline GetSyncResultResponseBodyDataHitResultHits& setCid(const vector<string> & cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };
    inline GetSyncResultResponseBodyDataHitResultHits& setCid(vector<string> && cid) { DARABONBA_PTR_SET_RVALUE(cid_, cid) };


    // keyWords Field Functions 
    bool hasKeyWords() const { return this->keyWords_ != nullptr;};
    void deleteKeyWords() { this->keyWords_ = nullptr;};
    inline const vector<Models::GetSyncResultResponseBodyDataHitResultHitsKeyWords> & keyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, vector<Models::GetSyncResultResponseBodyDataHitResultHitsKeyWords>) };
    inline vector<Models::GetSyncResultResponseBodyDataHitResultHitsKeyWords> keyWords() { DARABONBA_PTR_GET(keyWords_, vector<Models::GetSyncResultResponseBodyDataHitResultHitsKeyWords>) };
    inline GetSyncResultResponseBodyDataHitResultHits& setKeyWords(const vector<Models::GetSyncResultResponseBodyDataHitResultHitsKeyWords> & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
    inline GetSyncResultResponseBodyDataHitResultHits& setKeyWords(vector<Models::GetSyncResultResponseBodyDataHitResultHitsKeyWords> && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


    // phrase Field Functions 
    bool hasPhrase() const { return this->phrase_ != nullptr;};
    void deletePhrase() { this->phrase_ = nullptr;};
    inline const Models::GetSyncResultResponseBodyDataHitResultHitsPhrase & phrase() const { DARABONBA_PTR_GET_CONST(phrase_, Models::GetSyncResultResponseBodyDataHitResultHitsPhrase) };
    inline Models::GetSyncResultResponseBodyDataHitResultHitsPhrase phrase() { DARABONBA_PTR_GET(phrase_, Models::GetSyncResultResponseBodyDataHitResultHitsPhrase) };
    inline GetSyncResultResponseBodyDataHitResultHits& setPhrase(const Models::GetSyncResultResponseBodyDataHitResultHitsPhrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
    inline GetSyncResultResponseBodyDataHitResultHits& setPhrase(Models::GetSyncResultResponseBodyDataHitResultHitsPhrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


  protected:
    std::shared_ptr<vector<string>> cid_ = nullptr;
    std::shared_ptr<vector<Models::GetSyncResultResponseBodyDataHitResultHitsKeyWords>> keyWords_ = nullptr;
    std::shared_ptr<Models::GetSyncResultResponseBodyDataHitResultHitsPhrase> phrase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
