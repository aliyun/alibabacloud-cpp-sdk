// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCQUALITYCHECKRESPONSEBODYDATARULESHIT_HPP_
#define ALIBABACLOUD_MODELS_SYNCQUALITYCHECKRESPONSEBODYDATARULESHIT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SyncQualityCheckResponseBodyDataRulesHitHitKeyWords.hpp>
#include <alibabacloud/models/SyncQualityCheckResponseBodyDataRulesHitPhrase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class SyncQualityCheckResponseBodyDataRulesHit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncQualityCheckResponseBodyDataRulesHit& obj) { 
      DARABONBA_PTR_TO_JSON(HitKeyWords, hitKeyWords_);
      DARABONBA_PTR_TO_JSON(Phrase, phrase_);
    };
    friend void from_json(const Darabonba::Json& j, SyncQualityCheckResponseBodyDataRulesHit& obj) { 
      DARABONBA_PTR_FROM_JSON(HitKeyWords, hitKeyWords_);
      DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
    };
    SyncQualityCheckResponseBodyDataRulesHit() = default ;
    SyncQualityCheckResponseBodyDataRulesHit(const SyncQualityCheckResponseBodyDataRulesHit &) = default ;
    SyncQualityCheckResponseBodyDataRulesHit(SyncQualityCheckResponseBodyDataRulesHit &&) = default ;
    SyncQualityCheckResponseBodyDataRulesHit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncQualityCheckResponseBodyDataRulesHit() = default ;
    SyncQualityCheckResponseBodyDataRulesHit& operator=(const SyncQualityCheckResponseBodyDataRulesHit &) = default ;
    SyncQualityCheckResponseBodyDataRulesHit& operator=(SyncQualityCheckResponseBodyDataRulesHit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hitKeyWords_ != nullptr
        && this->phrase_ != nullptr; };
    // hitKeyWords Field Functions 
    bool hasHitKeyWords() const { return this->hitKeyWords_ != nullptr;};
    void deleteHitKeyWords() { this->hitKeyWords_ = nullptr;};
    inline const vector<Models::SyncQualityCheckResponseBodyDataRulesHitHitKeyWords> & hitKeyWords() const { DARABONBA_PTR_GET_CONST(hitKeyWords_, vector<Models::SyncQualityCheckResponseBodyDataRulesHitHitKeyWords>) };
    inline vector<Models::SyncQualityCheckResponseBodyDataRulesHitHitKeyWords> hitKeyWords() { DARABONBA_PTR_GET(hitKeyWords_, vector<Models::SyncQualityCheckResponseBodyDataRulesHitHitKeyWords>) };
    inline SyncQualityCheckResponseBodyDataRulesHit& setHitKeyWords(const vector<Models::SyncQualityCheckResponseBodyDataRulesHitHitKeyWords> & hitKeyWords) { DARABONBA_PTR_SET_VALUE(hitKeyWords_, hitKeyWords) };
    inline SyncQualityCheckResponseBodyDataRulesHit& setHitKeyWords(vector<Models::SyncQualityCheckResponseBodyDataRulesHitHitKeyWords> && hitKeyWords) { DARABONBA_PTR_SET_RVALUE(hitKeyWords_, hitKeyWords) };


    // phrase Field Functions 
    bool hasPhrase() const { return this->phrase_ != nullptr;};
    void deletePhrase() { this->phrase_ = nullptr;};
    inline const Models::SyncQualityCheckResponseBodyDataRulesHitPhrase & phrase() const { DARABONBA_PTR_GET_CONST(phrase_, Models::SyncQualityCheckResponseBodyDataRulesHitPhrase) };
    inline Models::SyncQualityCheckResponseBodyDataRulesHitPhrase phrase() { DARABONBA_PTR_GET(phrase_, Models::SyncQualityCheckResponseBodyDataRulesHitPhrase) };
    inline SyncQualityCheckResponseBodyDataRulesHit& setPhrase(const Models::SyncQualityCheckResponseBodyDataRulesHitPhrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
    inline SyncQualityCheckResponseBodyDataRulesHit& setPhrase(Models::SyncQualityCheckResponseBodyDataRulesHitPhrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


  protected:
    std::shared_ptr<vector<Models::SyncQualityCheckResponseBodyDataRulesHitHitKeyWords>> hitKeyWords_ = nullptr;
    std::shared_ptr<Models::SyncQualityCheckResponseBodyDataRulesHitPhrase> phrase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
